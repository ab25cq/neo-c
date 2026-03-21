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
struct sNode* expression_node_v96(struct sInfo*  info  );
static char span$1char$p$p_operator_derefference(struct span$1char$p* self);
static char span$1char$p_operator_derefference(struct span$1char$p* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2);
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void sType_finalize(struct sType*  self  );
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
struct sNode* parse_tuple(struct sInfo*  info  , _Bool named_tuple);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
struct sNode* parse_vector(struct sInfo*  info  );
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
struct sNode* expression_node_v96(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "expression_node_v96"; neo_current_frame = &fr;
    int sline_real;
    int sline;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sNode$ph* exps;
    struct buffer*  value  ;
    char* head_of_last_line;
    int len;
    struct sNode* exp;
    int sline2;
    struct sNode* __result_obj__0;
    int sline_real_2;
    int sline_3;
    struct buffer*  value_4  ;
    char* p;
    int sline_5;
    int sline2_6;
    void* __right_value2 = (void*)0;
    int sline_real_7;
    char prefix;
    int sline_8;
    struct buffer*  value_9  ;
    char* p_10;
    int sline_11;
    int sline2_12;
    int sline_real_13;
    int sline_14;
    struct buffer*  value_15  ;
    char* p_16;
    int sline_17;
    int sline2_18;
    int sline_real_19;
    int sline_20;
    struct buffer*  value_21  ;
    unsigned long  int  size  ;
    char* p_22;
    int sline_23;
    int len_24;
    int sline2_25;
    int sline_real_26;
    int sline_27;
    struct buffer*  buf  ;
    _Bool global;
    _Bool ignore_case;
    struct sNode* obj;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    void* __right_value3 = (void*)0;
    void* __right_value4 = (void*)0;
    void* __right_value5 = (void*)0;
    void* __right_value6 = (void*)0;
    struct buffer*  method_block  ;
    int method_block_sline;
    struct list$1sType$ph* method_generics_types;
    struct sNode* node;
    int sline_real_30;
    int sline_31;
    struct buffer*  value_32  ;
    char* p_33;
    int sline_34;
    int len_35;
    int sline2_36;
    _Bool global_37;
    _Bool ignore_case_38;
    struct sNode* obj_39;
    struct list$1tuple2$2char$phsNode$ph$ph* params_40;
    struct buffer*  method_block_41  ;
    int method_block_sline_42;
    struct list$1sType$ph* method_generics_types_43;
    struct sNode* node_44;
    int sline_real_45;
    char prefix_46;
    int c;
    int n;
    int n_47;
    unsigned long long int n_49;
    int sline_real_50;
    int c_51;
    int n_52;
    int n_53;
    unsigned long long int n_56;
    int sline_real_57;
    int  c_58  ;
    _Bool quote;
    int n_59;
    int n_60;
    unsigned long long int n_63;
    unsigned char p2;
    int size_64;
    int sline_real_65;
    int sline_66;
    struct buffer*  value_67  ;
    char* p_68;
    int sline_69;
    int sline2_70;
    int len_71;
    int*  wstr  ;
    char* str_72;
    int sline_real_73;
    int sline_74;
    struct list$1sNode$ph* exps_75;
    struct buffer*  value_76  ;
    char* p_77;
    int sline_78;
    int len_79;
    struct sNode* exp_80;
    int sline2_81;
    int sline_real_82;
    char* p_83;
    _Bool no_comma;
    struct sNode* node_84;
    char* p2_85;
    struct buffer*  first_element_source  ;
    struct list$1sNode$ph* list_elements;
    struct list$1sNode$ph* map_keys;
    struct list$1sNode$ph* map_elements;
    _Bool no_comma_88;
    struct sNode* node2;
    _Bool no_comma_89;
    struct sNode* node2_90;
    struct sNode* node3;
    _Bool no_comma_91;
    struct sNode* node2_92;
    int sline_real_93;
    struct sNode* node_94;
    memset(&c, 0, sizeof(c));
    memset(&c_51, 0, sizeof(c_51));
    memset(&c_58, 0, sizeof(c_58));
    memset(&quote, 0, sizeof(quote));
    memset(&size_64, 0, sizeof(size_64));
    if(span$1char$p_operator_derefference(info->p)==34&&*(info->p->p+1)==34&&*(info->p->p+2)==34&&*(info->p->p+3)==10) {
        sline_real=info->sline_real;
        info->sline_real=info->sline;
        info->p->p+=4;
        info->sline++;
        sline=info->sline;
        exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "51str3.nc", 14, 1, "struct list$1sNode$ph*"), "51str3.nc", 14, 7)), "51str3.nc", 14, 8);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        value=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "51str3.nc", 15, 9, "struct buffer* "), "51str3.nc", 15, 10)), "51str3.nc", 15, 11);
        head_of_last_line=0;
        while(1) {
            if(span$1char$p_operator_derefference(info->p)==34&&*(info->p->p+1)==34&&*(info->p->p+2)==34) {
                info->p->p+=3;
                skip_spaces_and_lf(info);
                break;
            }
            else if(span$1char$p_operator_derefference(info->p)==37) {
                buffer_append_char(value,37);
                buffer_append_char(value,37);
                info->p->p++;
            }
            else if(span$1char$p_operator_derefference(info->p)==34) {
                buffer_append_char(value,92);
                buffer_append_char(value,34);
                info->p->p++;
            }
            else if(span$1char$p_operator_derefference(info->p)==92) {
                buffer_append_char(value,92);
                info->p->p++;
                if(xisdigit(span$1char$p_operator_derefference(info->p))) {
                    len=0;
                    while(xisdigit(span$1char$p_operator_derefference(info->p))&&len<3) {
                        buffer_append_char(value,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        len++;
                    }
                }
                else if(span$1char$p_operator_derefference(info->p)==120||span$1char$p_operator_derefference(info->p)==88) {
                    buffer_append_char(value,span$1char$p_operator_derefference(info->p));
                    info->p->p++;
                    while(span$1char$p_operator_derefference(info->p)>=48&&span$1char$p_operator_derefference(info->p)<=57||span$1char$p_operator_derefference(info->p)>=97&&span$1char$p_operator_derefference(info->p)<=102||span$1char$p_operator_derefference(info->p)>=65&&span$1char$p_operator_derefference(info->p)<=70) {
                        buffer_append_char(value,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                    }
                }
                else if(span$1char$p_operator_derefference(info->p)==123) {
                    info->p->p++;
                    __right_value0 = (void*)0;
                    exp=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "51str3.nc", 61, 12);
                    list$1sNode$ph_add(exps,(struct sNode*)come_increment_ref_count(exp, "51str3.nc", 63, 27));
                    if(span$1char$p_operator_derefference(info->p)==125) {
                        info->p->p++;
                    }
                    buffer_append_str(value,"%s");
                    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 124, 28):(void*)0);
                }
                else {
                    switch (                    span$1char$p_operator_derefference(info->p)) {
                        case 48:
                        buffer_append_char(value,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 110:
                        buffer_append_char(value,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 116:
                        buffer_append_char(value,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 114:
                        buffer_append_char(value,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 118:
                        buffer_append_char(value,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 102:
                        buffer_append_char(value,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 97:
                        buffer_append_char(value,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 98:
                        buffer_append_char(value,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 92:
                        buffer_append_char(value,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        default:
                        buffer_append_char(value,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                    }
                }
            }
            else if(span$1char$p_operator_derefference(info->p)==0) {
                sline2=info->sline;
                info->sline=sline;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(span$1char$p_operator_derefference(info->p)==10) {
                    buffer_append_char(value,92);
                    buffer_append_char(value,110);
                    info->p->p++;
                    info->sline++;
                    head_of_last_line=info->p->p;
                }
                else {
                    buffer_append_char(value,span$1char$p_operator_derefference(info->p));
                    info->p->p++;
                }
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real;
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value1=create_sstring_node((char* )come_increment_ref_count(buffer_to_string(value), "51str3.nc", 150, 29),(struct list$1sNode$ph*)come_increment_ref_count(exps, "51str3.nc", 150, 30),sline,info))), "51str3.nc", 150, 31);
        come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 150, 32);
        come_call_finalizer(buffer_finalize, value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 150, 33);
        ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 150, 34):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 150, 35):(void*)0);
        return __result_obj__0;
        come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 36);
        come_call_finalizer(buffer_finalize, value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 37);
    }
    else if(span$1char$p_operator_derefference(info->p)==117&&*(info->p->p+1)==56&&*(info->p->p+2)==34) {
        sline_real_2=info->sline_real;
        info->sline_real=info->sline;
        info->p->p+=3;
        sline_3=info->sline;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        value_4=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "51str3.nc", 161, 38, "struct buffer* "), "51str3.nc", 161, 39)), "51str3.nc", 161, 40);
        while(1) {
            if(span$1char$p_operator_derefference(info->p)==34) {
                info->p->p++;
                p=info->p->p;
                sline_5=info->sline;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                if(span$1char$p_operator_derefference(info->p)==117&&*(info->p->p+1)==56&&*(info->p->p+2)==34) {
                    info->p->p+=3;
                }
                else {
                    info->p->p=p;
                    info->sline=sline_5;
                    break;
                }
            }
            else if(span$1char$p_operator_derefference(info->p)==92) {
                buffer_append_char(value_4,92);
                info->p->p++;
                if(span$1char$p_operator_derefference(info->p)==34) {
                    buffer_append_char(value_4,34);
                    info->p->p++;
                }
                else {
                    buffer_append_char(value_4,span$1char$p_operator_derefference(info->p));
                    info->p->p++;
                }
            }
            else if(span$1char$p_operator_derefference(info->p)==0) {
                sline2_6=info->sline;
                info->sline=sline_3;
                err_msg(info,"close \" to make c string value");
                info->sline=sline2_6;
                exit(2);
            }
            else {
                if(span$1char$p_operator_derefference(info->p)==10) {
                    info->sline++;
                }
                buffer_append_char(value_4,span$1char$p_operator_derefference(info->p));
                info->p->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_2;
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=create_prefixed_string_node((char* )come_increment_ref_count(buffer_to_string(value_4), "51str3.nc", 214, 41),(char* )come_increment_ref_count(xsprintf("u8"), "51str3.nc", 214, 42),sline_3,info))), "51str3.nc", 214, 43);
        come_call_finalizer(buffer_finalize, value_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 214, 44);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 214, 45):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 214, 46):(void*)0);
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, value_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 47);
    }
    else if((span$1char$p_operator_derefference(info->p)==117||span$1char$p_operator_derefference(info->p)==85)&&*(info->p->p+1)==34) {
        sline_real_7=info->sline_real;
        info->sline_real=info->sline;
        prefix=span$1char$p_operator_derefference(info->p);
        info->p->p+=2;
        sline_8=info->sline;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        value_9=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "51str3.nc", 226, 48, "struct buffer* "), "51str3.nc", 226, 49)), "51str3.nc", 226, 50);
        while(1) {
            if(span$1char$p_operator_derefference(info->p)==34) {
                info->p->p++;
                p_10=info->p->p;
                sline_11=info->sline;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                if(span$1char$p_operator_derefference(info->p)==prefix&&*(info->p->p+1)==34) {
                    info->p->p+=2;
                }
                else {
                    info->p->p=p_10;
                    info->sline=sline_11;
                    break;
                }
            }
            else if(span$1char$p_operator_derefference(info->p)==92) {
                buffer_append_char(value_9,92);
                info->p->p++;
                if(span$1char$p_operator_derefference(info->p)==34) {
                    buffer_append_char(value_9,34);
                    info->p->p++;
                }
                else {
                    buffer_append_char(value_9,span$1char$p_operator_derefference(info->p));
                    info->p->p++;
                }
            }
            else if(span$1char$p_operator_derefference(info->p)==0) {
                sline2_12=info->sline;
                info->sline=sline_8;
                err_msg(info,"close \" to make c string value");
                info->sline=sline2_12;
                exit(2);
            }
            else {
                if(span$1char$p_operator_derefference(info->p)==10) {
                    info->sline++;
                }
                buffer_append_char(value_9,span$1char$p_operator_derefference(info->p));
                info->p->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_7;
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=create_prefixed_string_node((char* )come_increment_ref_count(buffer_to_string(value_9), "51str3.nc", 279, 51),(char* )come_increment_ref_count(xsprintf("%c",prefix), "51str3.nc", 279, 52),sline_8,info))), "51str3.nc", 279, 53);
        come_call_finalizer(buffer_finalize, value_9, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 279, 54);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 279, 55):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 279, 56):(void*)0);
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, value_9, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 57);
    }
    else if(span$1char$p_operator_derefference(info->p)==34) {
        sline_real_13=info->sline_real;
        info->sline_real=info->sline;
        info->p->p++;
        sline_14=info->sline;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        value_15=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "51str3.nc", 289, 58, "struct buffer* "), "51str3.nc", 289, 59)), "51str3.nc", 289, 60);
        while(1) {
            if(span$1char$p_operator_derefference(info->p)==34) {
                info->p->p++;
                p_16=info->p->p;
                sline_17=info->sline;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                if(span$1char$p_operator_derefference(info->p)==34) {
                    info->p->p++;
                }
                else {
                    info->p->p=p_16;
                    info->sline=sline_17;
                    break;
                }
            }
            else if(span$1char$p_operator_derefference(info->p)==92) {
                buffer_append_char(value_15,92);
                info->p->p++;
                if(span$1char$p_operator_derefference(info->p)==34) {
                    buffer_append_char(value_15,34);
                    info->p->p++;
                }
                else {
                    buffer_append_char(value_15,span$1char$p_operator_derefference(info->p));
                    info->p->p++;
                }
            }
            else if(span$1char$p_operator_derefference(info->p)==0) {
                sline2_18=info->sline;
                info->sline=sline_14;
                err_msg(info,"close \" to make c string value");
                info->sline=sline2_18;
                exit(2);
            }
            else {
                if(span$1char$p_operator_derefference(info->p)==10) {
                    info->sline++;
                }
                buffer_append_char(value_15,span$1char$p_operator_derefference(info->p));
                info->p->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_13;
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value1=create_str_node((char* )come_increment_ref_count(buffer_to_string(value_15), "51str3.nc", 342, 61),sline_14,info))), "51str3.nc", 342, 62);
        come_call_finalizer(buffer_finalize, value_15, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 342, 63);
        ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 342, 64):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 342, 65):(void*)0);
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, value_15, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 66);
    }
    else if((span$1char$p_operator_derefference(info->p)==98||span$1char$p_operator_derefference(info->p)==66)&&*(info->p->p+1)==34) {
        sline_real_19=info->sline_real;
        info->sline_real=info->sline;
        info->p->p+=2;
        sline_20=info->sline;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        value_21=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "51str3.nc", 352, 67, "struct buffer* "), "51str3.nc", 352, 68)), "51str3.nc", 352, 69);
        size=0;
        while(1) {
            if(span$1char$p_operator_derefference(info->p)==34) {
                info->p->p++;
                p_22=info->p->p;
                sline_23=info->sline;
                skip_spaces_and_lf(info);
                if(span$1char$p_operator_derefference(info->p)==34) {
                    info->p->p++;
                }
                else {
                    info->p->p=p_22;
                    info->sline=sline_23;
                    break;
                }
            }
            else if(span$1char$p_operator_derefference(info->p)==92) {
                buffer_append_char(value_21,92);
                info->p->p++;
                if(xisdigit(span$1char$p_operator_derefference(info->p))) {
                    len_24=0;
                    while(xisdigit(span$1char$p_operator_derefference(info->p))&&len_24<3) {
                        buffer_append_char(value_21,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        len_24++;
                    }
                    size++;
                }
                else if(span$1char$p_operator_derefference(info->p)==120||span$1char$p_operator_derefference(info->p)==88) {
                    buffer_append_char(value_21,span$1char$p_operator_derefference(info->p));
                    info->p->p++;
                    while(span$1char$p_operator_derefference(info->p)>=48&&span$1char$p_operator_derefference(info->p)<=57||span$1char$p_operator_derefference(info->p)>=97&&span$1char$p_operator_derefference(info->p)<=102||span$1char$p_operator_derefference(info->p)>=65&&span$1char$p_operator_derefference(info->p)<=70) {
                        buffer_append_char(value_21,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                    }
                    size++;
                }
                else {
                    switch (                    span$1char$p_operator_derefference(info->p)) {
                        case 48:
                        buffer_append_char(value_21,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        size++;
                        break;
                        case 110:
                        buffer_append_char(value_21,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        size++;
                        break;
                        case 116:
                        buffer_append_char(value_21,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        size++;
                        break;
                        case 114:
                        buffer_append_char(value_21,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        size++;
                        break;
                        case 118:
                        buffer_append_char(value_21,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        size++;
                        break;
                        case 102:
                        buffer_append_char(value_21,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        size++;
                        break;
                        case 97:
                        buffer_append_char(value_21,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        size++;
                        break;
                        case 98:
                        buffer_append_char(value_21,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        size++;
                        break;
                        case 92:
                        buffer_append_char(value_21,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        size++;
                        break;
                        default:
                        buffer_append_char(value_21,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        size++;
                        break;
                    }
                }
            }
            else if(span$1char$p_operator_derefference(info->p)==0) {
                sline2_25=info->sline;
                info->sline=sline_20;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(span$1char$p_operator_derefference(info->p)==10) {
                    info->sline++;
                }
                buffer_append_char(value_21,span$1char$p_operator_derefference(info->p));
                info->p->p++;
                size++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_19;
                __right_value0 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_buffer_node((struct buffer* )come_increment_ref_count(value_21, "51str3.nc", 479, 70),size,info))), "51str3.nc", 479, 71);
        come_call_finalizer(buffer_finalize, value_21, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 479, 72);
        ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 479, 73):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 479, 74):(void*)0);
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, value_21, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 75);
    }
    else if(span$1char$p_operator_derefference(info->p)==47&&*(info->p->p-1)!=42&&*(info->p->p+1)!=42) {
        sline_real_26=info->sline_real;
        info->sline_real=info->sline;
        info->p->p++;
        sline_27=info->sline;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "51str3.nc", 488, 76, "struct buffer* "), "51str3.nc", 488, 77)), "51str3.nc", 488, 78);
        while((_Bool)1) {
            if(span$1char$p_operator_derefference(info->p)==92&&*(info->p->p+1)==47) {
                info->p->p++;
                buffer_append_char(buf,span$1char$p_operator_derefference(info->p));
                info->p->p++;
            }
            else if(span$1char$p_operator_derefference(info->p)==47) {
                info->p->p++;
                break;
            }
            else if(span$1char$p_operator_derefference(info->p)==0) {
                err_msg(info,"require closing / for regex");
                exit(5);
            }
            else {
                buffer_append_char(buf,span$1char$p_operator_derefference(info->p));
                info->p->p++;
            }
        }
        global=(_Bool)0;
        ignore_case=(_Bool)0;
        while(span$1char$p_operator_derefference(info->p)==103||span$1char$p_operator_derefference(info->p)==105) {
            if(span$1char$p_operator_derefference(info->p)==103) {
                info->p->p++;
                global=(_Bool)1;
            }
            else if(span$1char$p_operator_derefference(info->p)==105) {
                info->p->p++;
                ignore_case=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        obj=(struct sNode*)come_increment_ref_count(create_str_node((char* )come_increment_ref_count(buffer_to_string(buf), "51str3.nc", 527, 79),sline_27,info), "51str3.nc", 527, 80);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "51str3.nc", 529, 81, "struct list$1tuple2$2char$phsNode$ph$ph*"), "51str3.nc", 529, 89)), "51str3.nc", 529, 90);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 531, 105, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 531, 115),(char*)come_increment_ref_count(xsprintf("self"), "51str3.nc", 531, 116),(struct sNode*)come_increment_ref_count(obj, "51str3.nc", 531, 117)), "51str3.nc", 531, 118));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 532, 121, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 532, 122),(char*)come_increment_ref_count(xsprintf("ignore_case"), "51str3.nc", 532, 123),(struct sNode*)come_increment_ref_count(((ignore_case)?(((struct sNode*)(__right_value2=create_int_node((char* )come_increment_ref_count(int_to_string(1), "51str3.nc", 532, 119),info)))):(((struct sNode*)(__right_value4=create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 532, 120),info))))), "51str3.nc", 532, 124)), "51str3.nc", 532, 125));
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 532, 126):(void*)0);
        ((__right_value4) ? __right_value4 = come_decrement_ref_count(__right_value4, ((struct sNode*)__right_value4)->finalize, ((struct sNode*)__right_value4)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 532, 127):(void*)0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 533, 129, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 533, 130),(char*)come_increment_ref_count(xsprintf("multiline"), "51str3.nc", 533, 131),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 533, 128),info), "51str3.nc", 533, 132)), "51str3.nc", 533, 133));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        __right_value5 = (void*)0;
        __right_value6 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 534, 136, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 534, 137),(char*)come_increment_ref_count(xsprintf("global"), "51str3.nc", 534, 138),(struct sNode*)come_increment_ref_count(((global)?(((struct sNode*)(__right_value2=create_int_node((char* )come_increment_ref_count(int_to_string(1), "51str3.nc", 534, 134),info)))):(((struct sNode*)(__right_value4=create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 534, 135),info))))), "51str3.nc", 534, 139)), "51str3.nc", 534, 140));
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 534, 141):(void*)0);
        ((__right_value4) ? __right_value4 = come_decrement_ref_count(__right_value4, ((struct sNode*)__right_value4)->finalize, ((struct sNode*)__right_value4)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 534, 142):(void*)0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 535, 144, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 535, 145),(char*)come_increment_ref_count(xsprintf("extended"), "51str3.nc", 535, 146),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 535, 143),info), "51str3.nc", 535, 147)), "51str3.nc", 535, 148));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 536, 150, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 536, 151),(char*)come_increment_ref_count(xsprintf("dotall"), "51str3.nc", 536, 152),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 536, 149),info), "51str3.nc", 536, 153)), "51str3.nc", 536, 154));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 537, 156, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 537, 157),(char*)come_increment_ref_count(xsprintf("anchored"), "51str3.nc", 537, 158),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 537, 155),info), "51str3.nc", 537, 159)), "51str3.nc", 537, 160));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 538, 162, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 538, 163),(char*)come_increment_ref_count(xsprintf("dollar_endonly"), "51str3.nc", 538, 164),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 538, 161),info), "51str3.nc", 538, 165)), "51str3.nc", 538, 166));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 539, 168, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 539, 169),(char*)come_increment_ref_count(xsprintf("ungreedy"), "51str3.nc", 539, 170),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 539, 167),info), "51str3.nc", 539, 171)), "51str3.nc", 539, 172));
        method_block=((void*)0);
        method_block_sline=info->sline;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "51str3.nc", 545, 173, "struct list$1sType$ph*"), "51str3.nc", 545, 207)), "51str3.nc", 545, 208);
        __right_value0 = (void*)0;
        node=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj, "51str3.nc", 547, 209),params,method_block,method_block_sline,method_generics_types,info,(_Bool)0), "51str3.nc", 547, 210);
        info->sline_real=sline_real_26;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "51str3.nc", 550, 211);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 550, 212);
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 550, 213):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 550, 214);
        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 550, 215);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 550, 216):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 550, 217):(void*)0);
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 218);
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1499, 219):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 220);
        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 221);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1499, 222):(void*)0);
    }
    else if((span$1char$p_operator_derefference(info->p)==82||span$1char$p_operator_derefference(info->p)==114)&&*(info->p->p+1)==34) {
        sline_real_30=info->sline_real;
        info->sline_real=info->sline;
        info->p->p+=2;
        sline_31=info->sline;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        value_32=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "51str3.nc", 559, 223, "struct buffer* "), "51str3.nc", 559, 224)), "51str3.nc", 559, 225);
        while(1) {
            if(span$1char$p_operator_derefference(info->p)==34) {
                info->p->p++;
                p_33=info->p->p;
                sline_34=info->sline;
                skip_spaces_and_lf(info);
                if(span$1char$p_operator_derefference(info->p)==34) {
                    info->p->p++;
                }
                else {
                    info->p->p=p_33;
                    info->sline=sline_34;
                    break;
                }
            }
            else if(span$1char$p_operator_derefference(info->p)==92) {
                buffer_append_char(value_32,92);
                info->p->p++;
                if(xisdigit(span$1char$p_operator_derefference(info->p))) {
                    len_35=0;
                    while(xisdigit(span$1char$p_operator_derefference(info->p))&&len_35<3) {
                        buffer_append_char(value_32,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        len_35++;
                    }
                }
                else if(span$1char$p_operator_derefference(info->p)==120||span$1char$p_operator_derefference(info->p)==88) {
                    buffer_append_char(value_32,span$1char$p_operator_derefference(info->p));
                    info->p->p++;
                    while(span$1char$p_operator_derefference(info->p)>=48&&span$1char$p_operator_derefference(info->p)<=57||span$1char$p_operator_derefference(info->p)>=97&&span$1char$p_operator_derefference(info->p)<=102||span$1char$p_operator_derefference(info->p)>=65&&span$1char$p_operator_derefference(info->p)<=70) {
                        buffer_append_char(value_32,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                    }
                }
                else {
                    switch (                    span$1char$p_operator_derefference(info->p)) {
                        case 48:
                        buffer_append_char(value_32,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 110:
                        buffer_append_char(value_32,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 116:
                        buffer_append_char(value_32,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 114:
                        buffer_append_char(value_32,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 118:
                        buffer_append_char(value_32,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 102:
                        buffer_append_char(value_32,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 97:
                        buffer_append_char(value_32,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 98:
                        buffer_append_char(value_32,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 92:
                        buffer_append_char(value_32,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        default:
                        buffer_append_char(value_32,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                    }
                }
            }
            else if(span$1char$p_operator_derefference(info->p)==0) {
                sline2_36=info->sline;
                info->sline=sline_31;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(span$1char$p_operator_derefference(info->p)==10) {
                    info->sline++;
                }
                buffer_append_char(value_32,span$1char$p_operator_derefference(info->p));
                info->p->p++;
            }
        }
        global_37=(_Bool)0;
        ignore_case_38=(_Bool)0;
        while(span$1char$p_operator_derefference(info->p)==103||span$1char$p_operator_derefference(info->p)==105) {
            if(span$1char$p_operator_derefference(info->p)==103) {
                info->p->p++;
                global_37=(_Bool)1;
            }
            else if(span$1char$p_operator_derefference(info->p)==105) {
                info->p->p++;
                ignore_case_38=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        obj_39=(struct sNode*)come_increment_ref_count(create_str_node((char* )come_increment_ref_count(buffer_to_string(value_32), "51str3.nc", 685, 226),sline_31,info), "51str3.nc", 685, 227);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        params_40=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "51str3.nc", 687, 228, "struct list$1tuple2$2char$phsNode$ph$ph*"), "51str3.nc", 687, 229)), "51str3.nc", 687, 230);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params_40,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 689, 231, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 689, 232),(char*)come_increment_ref_count(xsprintf("self"), "51str3.nc", 689, 233),(struct sNode*)come_increment_ref_count(obj_39, "51str3.nc", 689, 234)), "51str3.nc", 689, 235));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        __right_value5 = (void*)0;
        __right_value6 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params_40,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 690, 238, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 690, 239),(char*)come_increment_ref_count(xsprintf("ignore_case"), "51str3.nc", 690, 240),(struct sNode*)come_increment_ref_count(((ignore_case_38)?(((struct sNode*)(__right_value2=create_int_node((char* )come_increment_ref_count(int_to_string(1), "51str3.nc", 690, 236),info)))):(((struct sNode*)(__right_value4=create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 690, 237),info))))), "51str3.nc", 690, 241)), "51str3.nc", 690, 242));
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 690, 243):(void*)0);
        ((__right_value4) ? __right_value4 = come_decrement_ref_count(__right_value4, ((struct sNode*)__right_value4)->finalize, ((struct sNode*)__right_value4)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 690, 244):(void*)0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params_40,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 691, 246, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 691, 247),(char*)come_increment_ref_count(xsprintf("multiline"), "51str3.nc", 691, 248),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 691, 245),info), "51str3.nc", 691, 249)), "51str3.nc", 691, 250));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        __right_value5 = (void*)0;
        __right_value6 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params_40,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 692, 253, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 692, 254),(char*)come_increment_ref_count(xsprintf("global"), "51str3.nc", 692, 255),(struct sNode*)come_increment_ref_count(((global_37)?(((struct sNode*)(__right_value2=create_int_node((char* )come_increment_ref_count(int_to_string(1), "51str3.nc", 692, 251),info)))):(((struct sNode*)(__right_value4=create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 692, 252),info))))), "51str3.nc", 692, 256)), "51str3.nc", 692, 257));
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 692, 258):(void*)0);
        ((__right_value4) ? __right_value4 = come_decrement_ref_count(__right_value4, ((struct sNode*)__right_value4)->finalize, ((struct sNode*)__right_value4)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 692, 259):(void*)0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params_40,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 693, 261, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 693, 262),(char*)come_increment_ref_count(xsprintf("extended"), "51str3.nc", 693, 263),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 693, 260),info), "51str3.nc", 693, 264)), "51str3.nc", 693, 265));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params_40,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 694, 267, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 694, 268),(char*)come_increment_ref_count(xsprintf("dotall"), "51str3.nc", 694, 269),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 694, 266),info), "51str3.nc", 694, 270)), "51str3.nc", 694, 271));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params_40,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 695, 273, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 695, 274),(char*)come_increment_ref_count(xsprintf("anchored"), "51str3.nc", 695, 275),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 695, 272),info), "51str3.nc", 695, 276)), "51str3.nc", 695, 277));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params_40,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 696, 279, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 696, 280),(char*)come_increment_ref_count(xsprintf("dollar_endonly"), "51str3.nc", 696, 281),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 696, 278),info), "51str3.nc", 696, 282)), "51str3.nc", 696, 283));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params_40,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 697, 285, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 697, 286),(char*)come_increment_ref_count(xsprintf("ungreedy"), "51str3.nc", 697, 287),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 697, 284),info), "51str3.nc", 697, 288)), "51str3.nc", 697, 289));
        method_block_41=((void*)0);
        method_block_sline_42=info->sline;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        method_generics_types_43=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "51str3.nc", 703, 290, "struct list$1sType$ph*"), "51str3.nc", 703, 291)), "51str3.nc", 703, 292);
        __right_value0 = (void*)0;
        node_44=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_39, "51str3.nc", 705, 293),params_40,method_block_41,method_block_sline_42,method_generics_types_43,info,(_Bool)0), "51str3.nc", 705, 294);
        info->sline_real=sline_real_30;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_44, "51str3.nc", 708, 295);
        come_call_finalizer(buffer_finalize, value_32, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 708, 296);
        ((obj_39) ? obj_39 = come_decrement_ref_count(obj_39, ((struct sNode*)obj_39)->finalize, ((struct sNode*)obj_39)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 708, 297):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_40, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 708, 298);
        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 708, 299);
        ((node_44) ? node_44 = come_decrement_ref_count(node_44, ((struct sNode*)node_44)->finalize, ((struct sNode*)node_44)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 708, 300):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 708, 301):(void*)0);
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, value_32, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 302);
        ((obj_39) ? obj_39 = come_decrement_ref_count(obj_39, ((struct sNode*)obj_39)->finalize, ((struct sNode*)obj_39)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1499, 303):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_40, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 304);
        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 305);
        ((node_44) ? node_44 = come_decrement_ref_count(node_44, ((struct sNode*)node_44)->finalize, ((struct sNode*)node_44)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1499, 306):(void*)0);
    }
    else if((span$1char$p_operator_derefference(info->p)==117||span$1char$p_operator_derefference(info->p)==85)&&*(info->p->p+1)==39) {
        sline_real_45=info->sline_real;
        info->sline_real=info->sline;
        prefix_46=span$1char$p_operator_derefference(info->p);
        info->p->p+=2;
        if(span$1char$p_operator_derefference(info->p)==92) {
            info->p->p++;
            if(xisdigit(span$1char$p_operator_derefference(info->p))) {
                n=0;
                while(xisdigit(span$1char$p_operator_derefference(info->p))) {
                    n=n*8+span$1char$p_operator_derefference(info->p)-48;
                    info->p->p++;
                }
                c=n;
            }
            else {
                switch (                span$1char$p_operator_derefference(info->p)) {
                    case 110:
                    c=10;
                    info->p->p++;
                    break;
                    case 116:
                    c=9;
                    info->p->p++;
                    break;
                    case 114:
                    c=13;
                    info->p->p++;
                    break;
                    case 97:
                    c=7;
                    info->p->p++;
                    break;
                    case 102:
                    c=12;
                    info->p->p++;
                    break;
                    case 118:
                    c=11;
                    info->p->p++;
                    break;
                    case 98:
                    c=8;
                    info->p->p++;
                    break;
                    case 92:
                    c=92;
                    info->p->p++;
                    break;
                    case 48:
                    c=0;
                    info->p->p++;
                    if(xisdigit(span$1char$p_operator_derefference(info->p))) {
                        n_47=0;
                        while(xisdigit(span$1char$p_operator_derefference(info->p))) {
                            n_47=n_47*8+span$1char$p_operator_derefference(info->p)-48;
                            info->p->p++;
                            skip_spaces_and_lf(info);
                        }
                        c=n_47;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p->p++;
                        char buf_48[128];
                        memset(&buf_48, 0, sizeof(buf_48));
                        strncpy(buf_48,"0x",128);
                        while(span$1char$p_operator_derefference(info->p)>=48&&span$1char$p_operator_derefference(info->p)<=57||span$1char$p_operator_derefference(info->p)>=97&&span$1char$p_operator_derefference(info->p)<=102||span$1char$p_operator_derefference(info->p)>=65&&span$1char$p_operator_derefference(info->p)<=70) {
                            char buf2[2];
                            memset(&buf2, 0, sizeof(buf2));
                            buf2[0]=span$1char$p_operator_derefference(info->p);
                            buf2[1]=0;
                            info->p->p++;
                            strncat(buf_48,buf2,128);
                        }
                        n_49=strtoll(buf_48,0,0);
                        c=n_49;
                    }
                    break;
                    default:
                    c=span$1char$p_operator_derefference(info->p);
                    info->p->p++;
                    break;
                }
            }
        }
        else {
            c=span$1char$p_operator_derefference(info->p);
            info->p->p++;
        }
        if(span$1char$p_operator_derefference(info->p)!=39) {
            err_msg(info,"close \' to make character value");
            exit(1);
        }
        else {
            info->p->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_45;
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value1=create_prefixed_char_node(c,(char* )come_increment_ref_count(xsprintf("%c",prefix_46), "51str3.nc", 831, 307),info))), "51str3.nc", 831, 308);
            ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 831, 309):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 831, 310):(void*)0);
            return __result_obj__0;
        }
    }
    else if(span$1char$p_operator_derefference(info->p)==39) {
        sline_real_50=info->sline_real;
        info->sline_real=info->sline;
        info->p->p++;
        if(span$1char$p_operator_derefference(info->p)==92) {
            info->p->p++;
            if(xisdigit(span$1char$p_operator_derefference(info->p))) {
                n_52=0;
                while(xisdigit(span$1char$p_operator_derefference(info->p))) {
                    n_52=n_52*8+span$1char$p_operator_derefference(info->p)-48;
                    info->p->p++;
                }
                c_51=n_52;
            }
            else {
                switch (                span$1char$p_operator_derefference(info->p)) {
                    case 110:
                    c_51=10;
                    info->p->p++;
                    break;
                    case 116:
                    c_51=9;
                    info->p->p++;
                    break;
                    case 114:
                    c_51=13;
                    info->p->p++;
                    break;
                    case 97:
                    c_51=7;
                    info->p->p++;
                    break;
                    case 102:
                    c_51=12;
                    info->p->p++;
                    break;
                    case 118:
                    c_51=11;
                    info->p->p++;
                    break;
                    case 98:
                    c_51=8;
                    info->p->p++;
                    break;
                    case 92:
                    c_51=92;
                    info->p->p++;
                    break;
                    case 48:
                    c_51=0;
                    info->p->p++;
                    if(xisdigit(span$1char$p_operator_derefference(info->p))) {
                        n_53=0;
                        while(xisdigit(span$1char$p_operator_derefference(info->p))) {
                            n_53=n_53*8+span$1char$p_operator_derefference(info->p)-48;
                            info->p->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_51=n_53;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p->p++;
                        char buf_54[128];
                        memset(&buf_54, 0, sizeof(buf_54));
                        strncpy(buf_54,"0x",128);
                        while(span$1char$p_operator_derefference(info->p)>=48&&span$1char$p_operator_derefference(info->p)<=57||span$1char$p_operator_derefference(info->p)>=97&&span$1char$p_operator_derefference(info->p)<=102||span$1char$p_operator_derefference(info->p)>=65&&span$1char$p_operator_derefference(info->p)<=70) {
                            char buf2_55[2];
                            memset(&buf2_55, 0, sizeof(buf2_55));
                            buf2_55[0]=span$1char$p_operator_derefference(info->p);
                            buf2_55[1]=0;
                            info->p->p++;
                            strncat(buf_54,buf2_55,128);
                        }
                        n_56=strtoll(buf_54,0,0);
                        c_51=n_56;
                    }
                    break;
                    default:
                    c_51=span$1char$p_operator_derefference(info->p);
                    info->p->p++;
                    break;
                }
            }
        }
        else {
            c_51=span$1char$p_operator_derefference(info->p);
            info->p->p++;
        }
        if(span$1char$p_operator_derefference(info->p)!=39) {
            err_msg(info,"close \' to make character value");
            exit(1);
        }
        else {
            info->p->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_50;
                        __right_value0 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_char_node(c_51,info))), "51str3.nc", 953, 311);
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 953, 312):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 953, 313):(void*)0);
            return __result_obj__0;
        }
    }
    else if(span$1char$p_operator_derefference(info->p)==76&&*(info->p->p+1)==39) {
        sline_real_57=info->sline_real;
        info->sline_real=info->sline;
        info->p->p+=2;
        if(span$1char$p_operator_derefference(info->p)==92) {
            quote=(_Bool)1;
            info->p->p++;
            if(xisdigit(span$1char$p_operator_derefference(info->p))) {
                n_59=0;
                while(xisdigit(span$1char$p_operator_derefference(info->p))) {
                    n_59=n_59*8+span$1char$p_operator_derefference(info->p)-48;
                    info->p->p++;
                }
                c_58=n_59;
            }
            else {
                switch (                span$1char$p_operator_derefference(info->p)) {
                    case 110:
                    c_58=10;
                    info->p->p++;
                    break;
                    case 116:
                    c_58=9;
                    info->p->p++;
                    break;
                    case 114:
                    c_58=13;
                    info->p->p++;
                    break;
                    case 97:
                    c_58=7;
                    info->p->p++;
                    break;
                    case 92:
                    c_58=92;
                    info->p->p++;
                    break;
                    case 48:
                    c_58=0;
                    info->p->p++;
                    if(xisdigit(span$1char$p_operator_derefference(info->p))) {
                        n_60=0;
                        while(xisdigit(span$1char$p_operator_derefference(info->p))) {
                            n_60=n_60*8+span$1char$p_operator_derefference(info->p)-48;
                            info->p->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_58=n_60;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p->p++;
                        char buf_61[128];
                        memset(&buf_61, 0, sizeof(buf_61));
                        strncpy(buf_61,"0x",128);
                        while(span$1char$p_operator_derefference(info->p)>=48&&span$1char$p_operator_derefference(info->p)<=57||span$1char$p_operator_derefference(info->p)>=97&&span$1char$p_operator_derefference(info->p)<=102||span$1char$p_operator_derefference(info->p)>=65&&span$1char$p_operator_derefference(info->p)<=70) {
                            char buf2_62[2];
                            memset(&buf2_62, 0, sizeof(buf2_62));
                            buf2_62[0]=span$1char$p_operator_derefference(info->p);
                            buf2_62[1]=0;
                            info->p->p++;
                            strncat(buf_61,buf2_62,128);
                        }
                        n_63=strtoll(buf_61,0,0);
                        c_58=n_63;
                    }
                    break;
                    default:
                    c_58=span$1char$p_operator_derefference(info->p);
                    info->p->p++;
                    break;
                }
            }
        }
        else {
            quote=(_Bool)0;
            p2=*(unsigned char*)info->p->p;
            if(p2>127) {
                char str[6+1];
                memset(&str, 0, sizeof(str));
                size_64=((p2&0x80)>>7)+((p2&0x40)>>6)+((p2&0x20)>>5)+((p2&0x10)>>4);
                if(size_64>6) {
                    err_msg(info,"invalid utf-8 character. MB_LEN_MAX");
                    info->err_num++;
                    exit(2);
                }
                else {
                    memcpy(str,info->p->p,size_64);
                    str[size_64]=0;
                    if(mbtowc(&c_58,str,size_64)<0) {
                        perror("mbtowc");
                        err_msg(info,"invalid utf-8 character. mbtowc");
                        info->err_num++;
                        exit(2);
                    }
                    else {
                        info->p->p+=size_64;
                    }
                }
            }
            else {
                c_58=span$1char$p_operator_derefference(info->p);
                info->p->p++;
            }
        }
        if(span$1char$p_operator_derefference(info->p)!=39) {
            err_msg(info,"close \' to make character value");
            info->err_num++;
            exit(2);
        }
        else {
            info->p->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_57;
                        __right_value0 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_wchar_node(c_58,quote,info))), "51str3.nc", 1099, 314);
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 1099, 315):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 1099, 316):(void*)0);
            return __result_obj__0;
        }
    }
    else if(span$1char$p_operator_derefference(info->p)==76&&*(info->p->p+1)==34) {
        sline_real_65=info->sline_real;
        info->sline_real=info->sline;
        info->p->p+=2;
        sline_66=info->sline;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        value_67=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "51str3.nc", 1110, 317, "struct buffer* "), "51str3.nc", 1110, 318)), "51str3.nc", 1110, 319);
        while(1) {
            if(span$1char$p_operator_derefference(info->p)==34) {
                info->p->p++;
                p_68=info->p->p;
                sline_69=info->sline;
                skip_spaces_and_lf(info);
                if(span$1char$p_operator_derefference(info->p)==34) {
                    info->p->p++;
                }
                else {
                    info->p->p=p_68;
                    info->sline=sline_69;
                    break;
                }
            }
            else if(span$1char$p_operator_derefference(info->p)==92) {
                buffer_append_char(value_67,92);
                info->p->p++;
                if(span$1char$p_operator_derefference(info->p)==34) {
                    buffer_append_char(value_67,34);
                    info->p->p++;
                }
                else {
                    buffer_append_char(value_67,span$1char$p_operator_derefference(info->p));
                    info->p->p++;
                }
            }
            else if(span$1char$p_operator_derefference(info->p)==0) {
                sline2_70=info->sline;
                info->sline=sline_66;
                err_msg(info,"close \" to make c string value");
                exit(2);
            }
            else {
                if(span$1char$p_operator_derefference(info->p)==10) {
                    info->sline++;
                }
                buffer_append_char(value_67,span$1char$p_operator_derefference(info->p));
                info->p->p++;
            }
        }
        skip_spaces_and_lf(info);
        len_71=value_67->len;
        __right_value0 = (void*)0;
        wstr=(int* )come_increment_ref_count((int *)come_calloc(1, sizeof(int )*(1*(len_71+1)), "51str3.nc", 1161, 320, "int* "), "51str3.nc", 1161, 321);
        str_72=value_67->buf;
        if(mbstowcs(wstr,str_72,len_71+1)<0) {
            perror("mbstowcs");
            exit(1);
        }
        wstr[len_71]=0;
        info->sline_real=sline_real_65;
                __right_value0 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_wstring_node((int* )come_increment_ref_count(wstr, "51str3.nc", 1173, 322),sline_66,info))), "51str3.nc", 1173, 323);
        come_call_finalizer(buffer_finalize, value_67, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1173, 324);
        (wstr = come_decrement_ref_count(wstr, (void*)0, (void*)0, 0, 0, (void*)0, "51str3.nc", 1173, 325));
        ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 1173, 326):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 1173, 327):(void*)0);
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, value_67, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 328);
        (wstr = come_decrement_ref_count(wstr, (void*)0, (void*)0, 0, 0, (void*)0, "51str3.nc", 1499, 329));
    }
    else if((span$1char$p_operator_derefference(info->p)==115||span$1char$p_operator_derefference(info->p)==83)&&*(info->p->p+1)==34) {
        sline_real_73=info->sline_real;
        info->sline_real=info->sline;
        info->p->p+=2;
        sline_74=info->sline;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        exps_75=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "51str3.nc", 1184, 330, "struct list$1sNode$ph*"), "51str3.nc", 1184, 331)), "51str3.nc", 1184, 332);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        value_76=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "51str3.nc", 1185, 333, "struct buffer* "), "51str3.nc", 1185, 334)), "51str3.nc", 1185, 335);
        while(1) {
            if(span$1char$p_operator_derefference(info->p)==34) {
                info->p->p++;
                p_77=info->p->p;
                sline_78=info->sline;
                skip_spaces_and_lf(info);
                if(span$1char$p_operator_derefference(info->p)==34) {
                    info->p->p++;
                }
                else {
                    info->p->p=p_77;
                    info->sline=sline_78;
                    break;
                }
            }
            else if(span$1char$p_operator_derefference(info->p)==37) {
                buffer_append_char(value_76,37);
                buffer_append_char(value_76,37);
                info->p->p++;
            }
            else if(span$1char$p_operator_derefference(info->p)==92) {
                buffer_append_char(value_76,92);
                info->p->p++;
                if(xisdigit(span$1char$p_operator_derefference(info->p))) {
                    len_79=0;
                    while(xisdigit(span$1char$p_operator_derefference(info->p))&&len_79<3) {
                        buffer_append_char(value_76,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        len_79++;
                    }
                }
                else if(span$1char$p_operator_derefference(info->p)==120||span$1char$p_operator_derefference(info->p)==88) {
                    buffer_append_char(value_76,span$1char$p_operator_derefference(info->p));
                    info->p->p++;
                    while(span$1char$p_operator_derefference(info->p)>=48&&span$1char$p_operator_derefference(info->p)<=57||span$1char$p_operator_derefference(info->p)>=97&&span$1char$p_operator_derefference(info->p)<=102||span$1char$p_operator_derefference(info->p)>=65&&span$1char$p_operator_derefference(info->p)<=70) {
                        buffer_append_char(value_76,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                    }
                }
                else if(span$1char$p_operator_derefference(info->p)==123) {
                    info->p->p++;
                    __right_value0 = (void*)0;
                    exp_80=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "51str3.nc", 1252, 336);
                    list$1sNode$ph_add(exps_75,(struct sNode*)come_increment_ref_count(exp_80, "51str3.nc", 1254, 337));
                    if(span$1char$p_operator_derefference(info->p)==125) {
                        info->p->p++;
                    }
                    buffer_append_str(value_76,"%s");
                    ((exp_80) ? exp_80 = come_decrement_ref_count(exp_80, ((struct sNode*)exp_80)->finalize, ((struct sNode*)exp_80)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1315, 338):(void*)0);
                }
                else {
                    switch (                    span$1char$p_operator_derefference(info->p)) {
                        case 48:
                        buffer_append_char(value_76,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 110:
                        buffer_append_char(value_76,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 116:
                        buffer_append_char(value_76,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 114:
                        buffer_append_char(value_76,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 118:
                        buffer_append_char(value_76,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 102:
                        buffer_append_char(value_76,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 97:
                        buffer_append_char(value_76,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 98:
                        buffer_append_char(value_76,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        case 92:
                        buffer_append_char(value_76,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                        default:
                        buffer_append_char(value_76,span$1char$p_operator_derefference(info->p));
                        info->p->p++;
                        break;
                    }
                }
            }
            else if(span$1char$p_operator_derefference(info->p)==0) {
                sline2_81=info->sline;
                info->sline=sline_74;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(span$1char$p_operator_derefference(info->p)==10) {
                    info->sline++;
                }
                buffer_append_char(value_76,span$1char$p_operator_derefference(info->p));
                info->p->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_73;
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value1=create_sstring_node((char* )come_increment_ref_count(buffer_to_string(value_76), "51str3.nc", 1333, 339),(struct list$1sNode$ph*)come_increment_ref_count(exps_75, "51str3.nc", 1333, 340),sline_74,info))), "51str3.nc", 1333, 341);
        come_call_finalizer(list$1sNode$ph$p_finalize, exps_75, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1333, 342);
        come_call_finalizer(buffer_finalize, value_76, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1333, 343);
        ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 1333, 344):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 1333, 345):(void*)0);
        return __result_obj__0;
        come_call_finalizer(list$1sNode$ph$p_finalize, exps_75, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 346);
        come_call_finalizer(buffer_finalize, value_76, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 347);
    }
    else if(span$1char$p_operator_derefference(info->p)==91) {
        sline_real_82=info->sline_real;
        info->sline_real=info->sline;
        info->p->p++;
        skip_spaces_and_lf(info);
        p_83=info->p->p;
        no_comma=info->no_comma;
        info->no_comma=(_Bool)1;
        __right_value0 = (void*)0;
        node_84=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "51str3.nc", 1346, 348);
        info->no_comma=no_comma;
        p2_85=info->p->p;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        first_element_source=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "51str3.nc", 1352, 349, "struct buffer* "), "51str3.nc", 1352, 350)), "51str3.nc", 1352, 351);
        buffer_append(first_element_source,p_83,p2_85-p_83);
        buffer_append_char(first_element_source,0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        list_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "51str3.nc", 1357, 352, "struct list$1sNode$ph*"), "51str3.nc", 1357, 353)), "51str3.nc", 1357, 354);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        map_keys=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "51str3.nc", 1359, 355, "struct list$1sNode$ph*"), "51str3.nc", 1359, 356)), "51str3.nc", 1359, 357);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        map_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "51str3.nc", 1360, 358, "struct list$1sNode$ph*"), "51str3.nc", 1360, 359)), "51str3.nc", 1360, 360);
        if(span$1char$p_operator_derefference(info->p)==58) {
            info->p->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph_push_back(map_keys,(struct sNode*)come_increment_ref_count(node_84, "51str3.nc", 1367, 375));
            no_comma_88=info->no_comma;
            info->no_comma=(_Bool)1;
            __right_value0 = (void*)0;
            node2=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "51str3.nc", 1373, 376);
            info->no_comma=no_comma_88;
            list$1sNode$ph_push_back(map_elements,(struct sNode*)come_increment_ref_count(node2, "51str3.nc", 1377, 377));
            if(span$1char$p_operator_derefference(info->p)==93) {
                info->p->p++;
                skip_spaces_and_lf(info);
                                __right_value0 = (void*)0;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_map_node((struct list$1sNode$ph*)come_increment_ref_count(map_keys, "51str3.nc", 1383, 378),(struct list$1sNode$ph*)come_increment_ref_count(map_elements, "51str3.nc", 1383, 379),info))), "51str3.nc", 1383, 380);
                ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1383, 381):(void*)0);
                ((node_84) ? node_84 = come_decrement_ref_count(node_84, ((struct sNode*)node_84)->finalize, ((struct sNode*)node_84)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1383, 382):(void*)0);
                come_call_finalizer(buffer_finalize, first_element_source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1383, 383);
                come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1383, 384);
                come_call_finalizer(list$1sNode$ph$p_finalize, map_keys, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1383, 385);
                come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1383, 386);
                ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 1383, 387):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 1383, 388):(void*)0);
                return __result_obj__0;
            }
            else {
                expected_next_character(44,info);
                while((_Bool)1) {
                    no_comma_89=info->no_comma;
                    info->no_comma=(_Bool)1;
                    __right_value0 = (void*)0;
                    node2_90=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "51str3.nc", 1392, 389);
                    info->no_comma=no_comma_89;
                    list$1sNode$ph_push_back(map_keys,(struct sNode*)come_increment_ref_count(node2_90, "51str3.nc", 1396, 390));
                    expected_next_character(58,info);
                    no_comma_89=info->no_comma;
                    info->no_comma=(_Bool)1;
                    __right_value0 = (void*)0;
                    node3=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "51str3.nc", 1403, 391);
                    info->no_comma=no_comma_89;
                    list$1sNode$ph_push_back(map_elements,(struct sNode*)come_increment_ref_count(node3, "51str3.nc", 1407, 392));
                    if(span$1char$p_operator_derefference(info->p)==0) {
                        err_msg(info,"invalid source end");
                        exit(2);
                    }
                    else if(span$1char$p_operator_derefference(info->p)==44) {
                        info->p->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(span$1char$p_operator_derefference(info->p)==93) {
                        info->p->p++;
                        skip_spaces_and_lf(info);
                        ((node2_90) ? node2_90 = come_decrement_ref_count(node2_90, ((struct sNode*)node2_90)->finalize, ((struct sNode*)node2_90)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1420, 393):(void*)0);
                        ((node3) ? node3 = come_decrement_ref_count(node3, ((struct sNode*)node3)->finalize, ((struct sNode*)node3)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1420, 394):(void*)0);
                        break;
                    }
                    else {
                        err_msg(info,"invalid character(3)(%c)",span$1char$p_operator_derefference(info->p));
                        exit(2);
                    }
                    ((node2_90) ? node2_90 = come_decrement_ref_count(node2_90, ((struct sNode*)node2_90)->finalize, ((struct sNode*)node2_90)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1428, 395):(void*)0);
                    ((node3) ? node3 = come_decrement_ref_count(node3, ((struct sNode*)node3)->finalize, ((struct sNode*)node3)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1428, 396):(void*)0);
                }
                                __right_value0 = (void*)0;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_map_node((struct list$1sNode$ph*)come_increment_ref_count(map_keys, "51str3.nc", 1428, 397),(struct list$1sNode$ph*)come_increment_ref_count(map_elements, "51str3.nc", 1428, 398),info))), "51str3.nc", 1428, 399);
                ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1428, 400):(void*)0);
                ((node_84) ? node_84 = come_decrement_ref_count(node_84, ((struct sNode*)node_84)->finalize, ((struct sNode*)node_84)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1428, 401):(void*)0);
                come_call_finalizer(buffer_finalize, first_element_source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1428, 402);
                come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1428, 403);
                come_call_finalizer(list$1sNode$ph$p_finalize, map_keys, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1428, 404);
                come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1428, 405);
                ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 1428, 406):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 1428, 407):(void*)0);
                return __result_obj__0;
            }
            ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1478, 408):(void*)0);
        }
        else if(span$1char$p_operator_derefference(info->p)==93) {
            info->p->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph_push_back(list_elements,(struct sNode*)come_increment_ref_count(node_84, "51str3.nc", 1436, 409));
        }
        else if(span$1char$p_operator_derefference(info->p)==44) {
            info->p->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph_push_back(list_elements,(struct sNode*)come_increment_ref_count(node_84, "51str3.nc", 1442, 410));
            while((_Bool)1) {
                no_comma_91=info->no_comma;
                info->no_comma=(_Bool)1;
                __right_value0 = (void*)0;
                node2_92=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "51str3.nc", 1448, 411);
                info->no_comma=no_comma_91;
                list$1sNode$ph_push_back(list_elements,(struct sNode*)come_increment_ref_count(node2_92, "51str3.nc", 1452, 412));
                if(span$1char$p_operator_derefference(info->p)==0) {
                    err_msg(info,"invalid source end");
                    exit(2);
                }
                else if(span$1char$p_operator_derefference(info->p)==44) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                }
                else if(span$1char$p_operator_derefference(info->p)==93) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                    ((node2_92) ? node2_92 = come_decrement_ref_count(node2_92, ((struct sNode*)node2_92)->finalize, ((struct sNode*)node2_92)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1465, 413):(void*)0);
                    break;
                }
                else {
                    err_msg(info,"invalid character(4)(%c)",span$1char$p_operator_derefference(info->p));
                    exit(2);
                }
                ((node2_92) ? node2_92 = come_decrement_ref_count(node2_92, ((struct sNode*)node2_92)->finalize, ((struct sNode*)node2_92)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1472, 414):(void*)0);
            }
        }
        else {
            err_msg(info,"invalid character(5)(%c)",span$1char$p_operator_derefference(info->p));
            exit(2);
        }
        if(list$1sNode$ph_length(list_elements)>0) {
            info->sline_real=sline_real_82;
                        __right_value0 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_list_node((struct list$1sNode$ph*)come_increment_ref_count(list_elements, "51str3.nc", 1480, 415),info))), "51str3.nc", 1480, 416);
            ((node_84) ? node_84 = come_decrement_ref_count(node_84, ((struct sNode*)node_84)->finalize, ((struct sNode*)node_84)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1480, 417):(void*)0);
            come_call_finalizer(buffer_finalize, first_element_source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1480, 418);
            come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1480, 419);
            come_call_finalizer(list$1sNode$ph$p_finalize, map_keys, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1480, 420);
            come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1480, 421);
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 1480, 422):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 1480, 423):(void*)0);
            return __result_obj__0;
        }
        else {
            err_msg(info,"invalid vector");
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(((void*)0), "51str3.nc", 1484, 424);
            ((node_84) ? node_84 = come_decrement_ref_count(node_84, ((struct sNode*)node_84)->finalize, ((struct sNode*)node_84)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1484, 425):(void*)0);
            come_call_finalizer(buffer_finalize, first_element_source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1484, 426);
            come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1484, 427);
            come_call_finalizer(list$1sNode$ph$p_finalize, map_keys, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1484, 428);
            come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1484, 429);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 1484, 430):(void*)0);
            return __result_obj__0;
        }
        ((node_84) ? node_84 = come_decrement_ref_count(node_84, ((struct sNode*)node_84)->finalize, ((struct sNode*)node_84)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1499, 431):(void*)0);
        come_call_finalizer(buffer_finalize, first_element_source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 432);
        come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 433);
        come_call_finalizer(list$1sNode$ph$p_finalize, map_keys, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 434);
        come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 435);
    }
    else if(span$1char$p_operator_derefference(info->p)==118&&*(info->p->p+1)==40) {
        sline_real_93=info->sline_real;
        info->sline_real=info->sline;
        info->p->p+=2;
        skip_spaces_and_lf(info);
    }
    else {
        __right_value0 = (void*)0;
        node_94=(struct sNode*)come_increment_ref_count(expression_node_v95(info), "51str3.nc", 1495, 436);
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_94, "51str3.nc", 1496, 437);
        ((node_94) ? node_94 = come_decrement_ref_count(node_94, ((struct sNode*)node_94)->finalize, ((struct sNode*)node_94)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 1496, 438):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 1496, 439):(void*)0);
        return __result_obj__0;
        ((node_94) ? node_94 = come_decrement_ref_count(node_94, ((struct sNode*)node_94)->finalize, ((struct sNode*)node_94)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1499, 440):(void*)0);
    }
        __result_obj__0 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0), "51str3.nc", 1499, 441);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 1499, 442):(void*)0);
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

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_initialize"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 2);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 5);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 6);
    return __result_obj__0;
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 4);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0, "list_item$1sNode$ph$p_finalize", 2, 3):(void*)0);
    }
            neo_current_frame = fr.prev;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_add"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj1;
    struct list_item$1sNode$ph* litem_0;
    struct sNode* __dec_obj2;
    struct list_item$1sNode$ph* litem_1;
    struct sNode* __dec_obj3;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1531, 13):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1534, 14, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1534, 15);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj1=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 17);
        (__dec_obj1 ? __dec_obj1 = come_decrement_ref_count(__dec_obj1, ((struct sNode*)__dec_obj1)->finalize, ((struct sNode*)__dec_obj1)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1538, 16) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_0=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1544, 18, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1544, 19);
        litem_0->prev=self->head;
        litem_0->next=((void*)0);
        __dec_obj2=litem_0->item,
        litem_0->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 21);
        (__dec_obj2 ? __dec_obj2 = come_decrement_ref_count(__dec_obj2, ((struct sNode*)__dec_obj2)->finalize, ((struct sNode*)__dec_obj2)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1548, 20) :0);
        self->tail=litem_0;
        self->head->next=litem_0;
    }
    else {
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1554, 22, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1554, 23);
        litem_1->prev=self->tail;
        litem_1->next=((void*)0);
        __dec_obj3=litem_1->item,
        litem_1->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 25);
        (__dec_obj3 ? __dec_obj3 = come_decrement_ref_count(__dec_obj3, ((struct sNode*)__dec_obj3)->finalize, ((struct sNode*)__dec_obj3)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1558, 24) :0);
        self->tail->next=litem_1;
        self->tail=litem_1;
    }
    self->len++;
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1566, 26):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_initialize"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 82);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 87);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 88);
    return __result_obj__0;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1tuple2$2char$phsNode$ph$ph* it;
    struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 86);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize}", 2, 85);
    }
            neo_current_frame = fr.prev;
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsNode$ph$p_finalize", 2, 83));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0, "tuple2$2char$phsNode$ph$p_finalize", 3, 84):(void*)0);
    }
            neo_current_frame = fr.prev;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_add"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
    struct tuple2$2char$phsNode$ph* __dec_obj4;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_28;
    struct tuple2$2char$phsNode$ph* __dec_obj5;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_29;
    struct tuple2$2char$phsNode$ph* __dec_obj6;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1531, 91);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1534, 92, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1534, 93);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj4=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 95);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1538, 94);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_28=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1544, 96, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1544, 97);
        litem_28->prev=self->head;
        litem_28->next=((void*)0);
        __dec_obj5=litem_28->item,
        litem_28->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 99);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1548, 98);
        self->tail=litem_28;
        self->head->next=litem_28;
    }
    else {
        __right_value0 = (void*)0;
        litem_29=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1554, 100, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1554, 101);
        litem_29->prev=self->tail;
        litem_29->next=((void*)0);
        __dec_obj6=litem_29->item,
        litem_29->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 103);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1558, 102);
        self->tail->next=litem_29;
        self->tail=litem_29;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1566, 104);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_initialize"; neo_current_frame = &fr;
    char*  __dec_obj7  ;
    struct sNode* __dec_obj8;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    __dec_obj7=self->v1,
    self->v1=(char*)come_increment_ref_count(v1, "/usr/local/include/neo-c.h", 3913, 107);
    __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 3913, 106);
    __dec_obj8=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2, "/usr/local/include/neo-c.h", 3914, 109);
    (__dec_obj8 ? __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 3914, 108) :0);
        __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 3916, 110);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3916, 111);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3916, 112));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 3916, 113):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3916, 114);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_initialize"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 174);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 205);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 206);
    return __result_obj__0;
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 204);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sType$ph$p_finalize}", 2, 203);
    }
            neo_current_frame = fr.prev;
}

static void sType_finalize(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 175);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 3, 176);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 4, 177);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 5, 178);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 6, 179):(void*)0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 7, 180):(void*)0);
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 8, 181));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 9, 182));
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 10, 183));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 11, 184));
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        (self->mPointerAttribute = come_decrement_ref_count(self->mPointerAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 12, 185));
    }
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        (self->mAnonymousName = come_decrement_ref_count(self->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 13, 186));
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        (self->mInnerStructName = come_decrement_ref_count(self->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 14, 187));
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 15, 188));
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 16, 189);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 17, 190);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 18, 192);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 19, 193);
    }
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 20, 194);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 21, 195));
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 22, 196);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 23, 199);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 24, 200);
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 25, 201):(void*)0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mHeapArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 202);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 191);
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 198);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 197));
    }
            neo_current_frame = fr.prev;
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_push_back"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj9;
    struct list_item$1sNode$ph* litem_86;
    struct sNode* __dec_obj10;
    struct list_item$1sNode$ph* litem_87;
    struct sNode* __dec_obj11;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1615, 361):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1619, 362, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1619, 363);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj9=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1623, 365);
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1623, 364) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_86=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1629, 366, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1629, 367);
        litem_86->prev=self->head;
        litem_86->next=((void*)0);
        __dec_obj10=litem_86->item,
        litem_86->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1633, 369);
        (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1633, 368) :0);
        self->tail=litem_86;
        self->head->next=litem_86;
    }
    else {
        __right_value0 = (void*)0;
        litem_87=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1639, 370, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1639, 371);
        litem_87->prev=self->tail;
        litem_87->next=((void*)0);
        __dec_obj11=litem_87->item,
        litem_87->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1643, 373);
        (__dec_obj11 ? __dec_obj11 = come_decrement_ref_count(__dec_obj11, ((struct sNode*)__dec_obj11)->finalize, ((struct sNode*)__dec_obj11)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1643, 372) :0);
        self->tail->next=litem_87;
        self->tail=litem_87;
    }
    self->len++;
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1651, 374):(void*)0);
    neo_current_frame = fr.prev;
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

struct sNode* parse_tuple(struct sInfo*  info  , _Bool named_tuple)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_tuple"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements;
    char* p;
    char*  name  ;
    char*  __dec_obj12  ;
    _Bool no_comma;
    struct sNode* node;
    struct sNode* __dec_obj13;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    memset(&name, 0, sizeof(name));
    tuple_elements=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "51str3.nc", 1504, 443, "struct list$1tuple2$2char$phsNode$ph$ph*"), "51str3.nc", 1504, 444)), "51str3.nc", 1504, 445);
    while((_Bool)1) {
        p=info->p->p;
        if(named_tuple) {
            __right_value0 = (void*)0;
            __dec_obj12=name,
            name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "51str3.nc", 1510, 447);
            __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0, "51str3.nc", 1510, 446);
            expected_next_character(58,info);
        }
        no_comma=info->no_comma;
        info->no_comma=(_Bool)1;
        __right_value0 = (void*)0;
        node=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "51str3.nc", 1518, 448);
        __right_value0 = (void*)0;
        __dec_obj13=node,
        node=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node, "51str3.nc", 1519, 449),info), "51str3.nc", 1519, 451);
        (__dec_obj13 ? __dec_obj13 = come_decrement_ref_count(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0,0, (void*)0, "51str3.nc", 1519, 450) :0);
        info->no_comma=no_comma;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_push_back(tuple_elements,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 1523, 467, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 1523, 468),(char* )come_increment_ref_count((char* )come_memdup(name, "51str3.nc", 1523, 466, "char* "), "51str3.nc", 1523, 469),(struct sNode*)come_increment_ref_count(node, "51str3.nc", 1523, 470)), "51str3.nc", 1523, 471));
        if(span$1char$p_operator_derefference(info->p)==44) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        else if(span$1char$p_operator_derefference(info->p)==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "51str3.nc", 1532, 472));
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1532, 473):(void*)0);
            break;
        }
        else {
            err_msg(info,"invalid character in tuple expression (%c)",span$1char$p_operator_derefference(info->p));
            exit(2);
        }
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "51str3.nc", 1540, 474));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1540, 475):(void*)0);
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_tuple_node((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(tuple_elements, "51str3.nc", 1540, 476),info))), "51str3.nc", 1540, 477);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, tuple_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1540, 478);
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 1540, 479):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 1540, 480):(void*)0);
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_push_back"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
    struct tuple2$2char$phsNode$ph* __dec_obj14;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_95;
    struct tuple2$2char$phsNode$ph* __dec_obj15;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_96;
    struct tuple2$2char$phsNode$ph* __dec_obj16;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1615, 452);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1619, 453, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1619, 454);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj14=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1623, 456);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj14,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1623, 455);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_95=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1629, 457, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1629, 458);
        litem_95->prev=self->head;
        litem_95->next=((void*)0);
        __dec_obj15=litem_95->item,
        litem_95->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1633, 460);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj15,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1633, 459);
        self->tail=litem_95;
        self->head->next=litem_95;
    }
    else {
        __right_value0 = (void*)0;
        litem_96=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1639, 461, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1639, 462);
        litem_96->prev=self->tail;
        litem_96->next=((void*)0);
        __dec_obj16=litem_96->item,
        litem_96->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1643, 464);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj16,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1643, 463);
        self->tail->next=litem_96;
        self->tail=litem_96;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1651, 465);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* parse_vector(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_vector"; neo_current_frame = &fr;
    char* p;
    int sline_real;
    _Bool no_comma;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    char* p2;
    void* __right_value1 = (void*)0;
    struct buffer*  first_element_source  ;
    struct list$1sNode$ph* list_elements;
    struct list$1sNode$ph* map_keys;
    struct list$1sNode$ph* map_elements;
    _Bool no_comma_97;
    struct sNode* node2;
    struct sNode* __result_obj__0;
    p=info->p->p;
    sline_real=info->sline;
    no_comma=info->no_comma;
    info->no_comma=(_Bool)1;
    node=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "51str3.nc", 1552, 481);
    info->no_comma=no_comma;
    p2=info->p->p;
    __right_value0 = (void*)0;
    first_element_source=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "51str3.nc", 1558, 482, "struct buffer* "), "51str3.nc", 1558, 483)), "51str3.nc", 1558, 484);
    buffer_append(first_element_source,p,p2-p);
    buffer_append_char(first_element_source,0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "51str3.nc", 1563, 485, "struct list$1sNode$ph*"), "51str3.nc", 1563, 486)), "51str3.nc", 1563, 487);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    map_keys=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "51str3.nc", 1565, 488, "struct list$1sNode$ph*"), "51str3.nc", 1565, 489)), "51str3.nc", 1565, 490);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    map_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "51str3.nc", 1566, 491, "struct list$1sNode$ph*"), "51str3.nc", 1566, 492)), "51str3.nc", 1566, 493);
    if(span$1char$p_operator_derefference(info->p)==93) {
        info->p->p++;
        skip_spaces_and_lf(info);
        list$1sNode$ph_push_back(list_elements,(struct sNode*)come_increment_ref_count(node, "51str3.nc", 1573, 494));
    }
    else if(span$1char$p_operator_derefference(info->p)==44) {
        info->p->p++;
        skip_spaces_and_lf(info);
        list$1sNode$ph_push_back(list_elements,(struct sNode*)come_increment_ref_count(node, "51str3.nc", 1579, 495));
        while((_Bool)1) {
            no_comma_97=info->no_comma;
            info->no_comma=(_Bool)1;
            __right_value0 = (void*)0;
            node2=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "51str3.nc", 1585, 496);
            info->no_comma=no_comma_97;
            list$1sNode$ph_push_back(list_elements,(struct sNode*)come_increment_ref_count(node2, "51str3.nc", 1589, 497));
            if(span$1char$p_operator_derefference(info->p)==0) {
                err_msg(info,"invalid source end");
                exit(2);
            }
            else if(span$1char$p_operator_derefference(info->p)==44) {
                info->p->p++;
                skip_spaces_and_lf(info);
            }
            else if(span$1char$p_operator_derefference(info->p)==93) {
                info->p->p++;
                skip_spaces_and_lf(info);
                ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1602, 498):(void*)0);
                break;
            }
            else {
                err_msg(info,"invalid character(4)(%c)",span$1char$p_operator_derefference(info->p));
                exit(2);
            }
            ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1609, 499):(void*)0);
        }
    }
    else {
        err_msg(info,"invalid character(5)(%c)",span$1char$p_operator_derefference(info->p));
        exit(2);
    }
    if(list$1sNode$ph_length(list_elements)>0) {
        info->sline_real=sline_real;
                __right_value0 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_vector_node((struct list$1sNode$ph*)come_increment_ref_count(list_elements, "51str3.nc", 1617, 500),info))), "51str3.nc", 1617, 501);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1617, 502):(void*)0);
        come_call_finalizer(buffer_finalize, first_element_source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1617, 503);
        come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1617, 504);
        come_call_finalizer(list$1sNode$ph$p_finalize, map_keys, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1617, 505);
        come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1617, 506);
        ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 1617, 507):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 1617, 508):(void*)0);
        return __result_obj__0;
    }
    err_msg(info,"invalid vector");
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((void*)0), "51str3.nc", 1622, 509);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1622, 510):(void*)0);
    come_call_finalizer(buffer_finalize, first_element_source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1622, 511);
    come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1622, 512);
    come_call_finalizer(list$1sNode$ph$p_finalize, map_keys, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1622, 513);
    come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1622, 514);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 1622, 515):(void*)0);
    return __result_obj__0;
}

