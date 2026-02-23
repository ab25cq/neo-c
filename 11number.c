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

typedef struct re_program*  re_t  ;

typedef struct re_capture  re_capture  ;

typedef struct regex_t regex_t;

typedef struct re_program  regex_program_t  ;

typedef struct anonymous_typeX15 compiler_state;

typedef struct anonymous_typeX16 match_context;

typedef union anonymous_typeZ1  mbstate_t  ;

typedef unsigned long  int  clock_t  ;

typedef long  time_t  ;

typedef enum anonymous_typeY16 clockid_t;

typedef unsigned int  wint_t  ;

typedef unsigned int  wctype_t  ;

typedef struct anonymous_typeX17 _RuneEntry;

typedef struct anonymous_typeX18 _RuneRange;

typedef struct anonymous_typeX19 _RuneCharClass;

typedef struct anonymous_typeX20 _RuneLocale;

typedef int*  wstring  ;

typedef struct MacroSnapshot MacroSnapshot;

/// previous struct definition ///
struct __sFILEX;

struct _xlocale;

struct re_program;

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
    int allocated;
    struct sMemHeader*  next  ;
    struct sMemHeader*  prev  ;
    struct sMemHeader*  free_next  ;
    char* fun_name[8];
    const char* class_name;
    const char* sname;
    int sline;
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

struct anonymous_typeX12
{
    struct regex_t*  first  ;
    struct regex_t*  last  ;
    int id;
};

union anonymous_typeZ11
{
unsigned char ch;
unsigned char* ccl;
    struct {
        struct regex_t*  first  ;
        struct regex_t*  last  ;
        int id;
    } group;
};

struct anonymous_typeX14
{
    struct regex_t*  first  ;
    struct regex_t*  last  ;
    int id;
};

union anonymous_typeZ13
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

struct anonymous_typeX15
{
    struct regex_t*  pool  ;
    int pool_capacity;
    int pool_size;
    unsigned char* ccl_buf;
    int ccl_capacity;
    int ccl_idx;
    int group_count;
};

struct anonymous_typeX16
{
    const char* base;
    struct re_capture*  captures  ;
    int capture_capacity;
    int total_groups;
    _Bool ignore_case;
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

enum  anonymous_typeY16 { _CLOCK_REALTIME=(0),
_CLOCK_MONOTONIC=(6),
_CLOCK_MONOTONIC_RAW=(4),
_CLOCK_MONOTONIC_RAW_APPROX=(5),
_CLOCK_UPTIME_RAW=(8),
_CLOCK_UPTIME_RAW_APPROX=(9),
_CLOCK_PROCESS_CPUTIME_ID=(12),
_CLOCK_THREAD_CPUTIME_ID=(16)
};

struct anonymous_typeX17
{
    int  __min  ;
    int  __max  ;
    int  __map  ;
    unsigned int*  __types  ;
};

struct anonymous_typeX18
{
    int __nranges;
    struct {
        int  __min  ;
        int  __max  ;
        int  __map  ;
        unsigned int*  __types  ;
    } __ranges;
};

struct anonymous_typeX19
{
    char __name[14];
    unsigned int  __mask  ;
};

struct anonymous_typeX20
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
    char* caller_sname;
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

struct sIntNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    char*  value  ;
};

struct sUIntNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    char*  value  ;
};

struct sLongNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    char*  value  ;
};

struct sULongNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    char*  value  ;
};

struct sFloatNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    char*  value  ;
};

struct sComplexNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    char*  value  ;
};

struct sDoubleNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    char*  value  ;
};

struct sDigitNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    char*  value  ;
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
extern struct neo_frame*  neo_current_frame  ;

extern struct sMemHeader*  gAllocMem  ;

extern int gComeDebugLib;

extern int gNumAlloc;

extern int gNumFree;

extern char* tzname[];
extern int getdate_err;
extern long timezone;
extern int daylight;
extern struct anonymous_typeX20  _DefaultRuneLocale  ;
extern struct anonymous_typeX20*  _CurrentRuneLocale  ;
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
void stackframe();
void stackframe2(void* mem);
_Bool die(const char* msg);
void come_heap_final();
void* alloc_from_pages(unsigned long  int  size  );
void come_free_mem_of_heap_pool(void* mem);
void* come_alloc_mem_from_heap_pool(unsigned long  int  compiletime_size  , unsigned long  int  size  , const char* sname, int sline, const char* class_name);
char* come_dynamic_typeof(void* mem);
unsigned long  int  dynamic_sizeof(void* mem);
void* come_calloc(unsigned long  int  count  , unsigned long  int  size  , const char* sname, int sline, const char* class_name);
_Bool come_is_alive(void* mem);
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
int re_matchp_ex(struct re_program*  pattern  , const char* text, int* matchlength, struct re_capture*  captures  , int max_captures, _Bool ignore_case);
int re_matchp(struct re_program*  pattern  , const char* text, int* matchlength, struct re_capture*  captures  , int max_captures);
int re_match(const char* pattern, const char* text, int* matchlength);
struct re_program*  re_compile(const char* pattern);
void re_print(struct re_program*  pattern  );
void clear_captures(struct anonymous_typeX16*  ctx  );
void snapshot_captures(const struct anonymous_typeX16*  ctx  , struct re_capture*  buffer_  );
void restore_captures(struct anonymous_typeX16*  ctx  , const struct re_capture*  buffer_  );
struct regex_t*  new_token(struct anonymous_typeX15*  st  );
int append_token(struct regex_t**  head  , struct regex_t**  tail  , struct regex_t*  token  );
struct regex_t*  compile_sequence(struct anonymous_typeX15*  st  , const char* pattern, int* pos, int in_group);
const char* matchpattern(struct regex_t*  pattern  , const char* text, struct anonymous_typeX16*  ctx  );
const char* matchgroup(struct regex_t*  token  , struct regex_t*  rest  , const char* text, struct anonymous_typeX16*  ctx  );
const char* matchstar(struct regex_t*  token  , struct regex_t*  rest  , const char* text, struct anonymous_typeX16*  ctx  );
const char* matchplus(struct regex_t*  token  , struct regex_t*  rest  , const char* text, struct anonymous_typeX16*  ctx  );
const char* matchquestion(struct regex_t*  token  , struct regex_t*  rest  , const char* text, struct anonymous_typeX16*  ctx  );
unsigned char re_fold_char(unsigned char c, _Bool ignore_case);
const char* matchtoken(struct regex_t*  token  , const char* text, struct anonymous_typeX16*  ctx  );
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
int clock_getres(enum anonymous_typeY16  __clock_id  , struct timespec*  __res  );
int clock_gettime(enum anonymous_typeY16  __clock_id  , struct timespec*  __tp  );
unsigned long  long  clock_gettime_nsec_np(enum anonymous_typeY16  __clock_id  );
int clock_settime(enum anonymous_typeY16  __clock_id  , const struct timespec*  __tp  );
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
char* basename(char* );
char* dirname(char* );
char* basename_r(const char* , char* );
char* dirname_r(const char* , char* );
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
int string_index(const char* str, const char* search_str, int default_value);
char*  string_replace(char* self, int index, char c);
char*  string_multiply(const char* str, int n);
struct list$1char$ph* string_split_str(const char* self, const char* str);
int*  string_to_wstring(const char* str);
char*  charp_chomp(const char* str);
_Bool wchar_tp_equals(const int*  left  , const int*  right  );
_Bool wchar_tp_operator_equals(const int*  left  , const int*  right  );
_Bool wchar_tp_operator_not_equals(const int*  left  , const int*  right  );
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
struct sClass* sClass_initialize(struct sClass* self, const char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, _Bool uniq_, _Bool typename, struct sInfo*  info  );
struct sType* sType_initialize(struct sType* self, char*  name  , _Bool heap, struct sInfo*  info  , _Bool unsigned_, int pointer_num_);
struct sFun* sFun_initialize(struct sFun* self, char*  name  , struct sType*  result_type  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock*  block  , _Bool static_, struct sInfo*  info  , _Bool inline_, _Bool uniq_, char*  attribute  , char*  fun_attribute  , _Bool const_fun, char*  text_block  , char*  generics_sname  , int generics_sline, _Bool immutable_);
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
struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo*  info  );
int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo*  info  );
char*  sCurrentNode_sname(struct sCurrentNode* self, struct sInfo*  info  );
char*  sCurrentNode_kind(struct sCurrentNode* self);
_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo*  info  );
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
void show_type(struct sType*  type  , struct sInfo*  info  );
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
void caller_begin(struct sInfo*  info  );
void caller_end(struct sInfo*  info  );
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo*  info  );
struct tuple3$3sType$phchar$ph_Bool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo*  info  );
void skip_pointer_attribute(struct sInfo*  info  );
void skip_paren(struct sInfo*  info  );
struct sNode* parse_normal_block(_Bool clang, _Bool unsafe_block, struct sInfo*  info  );
void cast_type(struct sType*  left_type  , struct sType*  right_type  , struct CVALUE*  come_value  , struct sInfo*  info  );
_Bool check_assign_type(const char* msg, struct sType*  left_type  , struct sType*  right_type  , struct CVALUE*  come_value  , struct sInfo*  info  );
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo*  info  , _Bool parse_function_attribute);
struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo*  info  );
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* parse_params(struct sInfo*  info  , _Bool in_constructor_);
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
_Bool is_contained_generics_class(struct sType*  type  , struct sInfo*  info  );
_Bool is_type_name(char* buf, struct sInfo*  info  );
_Bool parsecmp(const char* p2, struct sInfo*  info  );
char*  parse_word(_Bool digits, struct sInfo*  info  );
char*  backtrace_parse_word(struct sInfo*  info  );
void skip_spaces_and_lf(struct sInfo*  info  );
void skip_spaces_and_lf2(struct sInfo*  info  );
struct tuple2$2char$ph_Bool$* create_generics_fun(char*  fun_name  , struct sGenericsFun*  generics_fun  , struct sType*  generics_type  , struct sInfo*  info  );
struct tuple3$3sType$phchar$ph_Bool$* parse_type(struct sInfo*  info  , _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sType$phchar$ph* parse_variable_name_on_multiple_declare(struct sType*  base_type_name  , _Bool first, struct sInfo*  info  );
struct sBlock*  parse_block(struct sInfo*  info  , _Bool return_self_at_last, _Bool in_function);
int transpile_block(struct sBlock*  block  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo*  info  , _Bool no_var_table, _Bool loop_block, _Bool if_result_value);
void arrange_stack(struct sInfo*  info  , int top);
struct sNode* parse_function(struct sInfo*  info  );
struct sNode* statment(struct sInfo*  info  );
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* expression_node_v1(struct sInfo*  info  );
struct sNode* expression_node_v98(struct sInfo*  info  );
struct sNode* expression_node_v97(struct sInfo*  info  );
int transpile(struct sInfo*  info  );
void parse_sharp_v5(struct sInfo*  info  );
char*  create_method_name(struct sType*  obj_type  , _Bool no_pointer_name, const char* fun_name, struct sInfo*  info  , _Bool array_equal_pointer);
char*  create_method_name_original_obj_type(struct sType*  obj_type  , _Bool no_pointer_name, const char* fun_name, struct sInfo*  info  , _Bool array_equal_pointer);
char*  create_non_method_name(struct sType*  obj_type  , _Bool no_pointer_name, const char* fun_name, struct sInfo*  info  , _Bool array_equal_pointer);
char*  create_method_name_using_class(struct sClass*  obj_class  , const char* fun_name, struct sInfo*  info  );
struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$* backtrace_struct_union_enum(struct sInfo*  info  );
struct sNode* create_null_return_value(struct sInfo*  info  );
struct sNode* create_some(struct sNode* exp, struct sInfo*  info  );
struct sNode* expression_node_v96(struct sInfo*  info  );
struct sNode* parse_tuple(struct sInfo*  info  , _Bool named_tuple);
struct sNode* parse_some(struct sInfo*  info  );
struct sNode* parse_none(struct sInfo*  info  );
_Bool is_inner_calling(struct sNode* node, struct sInfo*  info  );
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo*  info  );
struct sNode* expression_node_v95(struct sInfo*  info  );
struct sNode* store_var(char*  name  , struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType*  type  , _Bool alloc, struct sNode* right_value, struct sInfo*  info  );
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
char*  parse_struct_attribute(struct sInfo*  info  , _Bool allow_end);
char*  parse_declspec_attribute(struct sInfo*  info  );
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
struct sNode* parse_method_call_v18(struct sNode* obj, char*  fun_name  , struct sInfo*  info  , _Bool arrow_);
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo*  info  );
struct tuple3$3char$phsFun$psGenericsFun$p* get_method(const char* fun_name, struct sType*  obj_type  , struct sInfo*  info  );
struct sNode* create_method_call(const char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer*  method_block  , int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo*  info  , _Bool arrow_);
struct sNode* create_funcall(const char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer*  method_block  , int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo*  info  , _Bool arrow_);
struct sNode* create_guard_break_method_call(struct sNode* expression_node, struct sInfo*  info  );
_Bool compile_method_block(struct buffer*  method_block  , struct list$1CVALUE$ph* come_params, struct sFun*  fun  , char* fun_name, int method_block_sline, struct sInfo*  info  , _Bool no_create_current_stack);
struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType*  type  , char*  fun_name  , struct sInfo*  info  , _Bool array_equal_pointer);
struct sNode* parse_method_call_v20(struct sNode* obj, char*  fun_name  , struct sInfo*  info  , _Bool arrow_);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* create_implements(struct sNode* node, struct sType*  inf_type  , struct sInfo*  info  );
struct sNode* create_true_object(struct sInfo*  info  );
struct sNode* create_false_object(struct sInfo*  info  );
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
struct sNullChecker* sNullChecker_initialize(struct sNullChecker* self, struct sNode* value, struct sInfo*  info  );
char*  sNullChecker_kind(struct sNullChecker* self);
_Bool sNullChecker_compile(struct sNullChecker* self, struct sInfo*  info  );
struct sNode* create_new_object(struct sType*  type  , struct sInfo*  info  );
struct sNode* parse_vector(struct sInfo*  info  );
struct sIntNode* sIntNode_initialize(struct sIntNode* self, char*  value  , struct sInfo*  info  );
char*  sIntNode_kind(struct sIntNode* self);
_Bool sIntNode_compile(struct sIntNode* self, struct sInfo*  info  );
static void sNodeBase_finalize(struct sNodeBase* self);
static void sIntNode_finalize(struct sIntNode* self);
static void sType_finalize(struct sType*  self  );
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  );
static void CVALUE_finalize(struct CVALUE*  self  );
struct sUIntNode* sUIntNode_initialize(struct sUIntNode* self, char*  value  , struct sInfo*  info  );
char*  sUIntNode_kind(struct sUIntNode* self);
_Bool sUIntNode_compile(struct sUIntNode* self, struct sInfo*  info  );
static void sUIntNode_finalize(struct sUIntNode* self);
struct sLongNode* sLongNode_initialize(struct sLongNode* self, char*  value  , struct sInfo*  info  );
char*  sLongNode_kind(struct sLongNode* self);
_Bool sLongNode_compile(struct sLongNode* self, struct sInfo*  info  );
static void sLongNode_finalize(struct sLongNode* self);
struct sULongNode* sULongNode_initialize(struct sULongNode* self, char*  value  , struct sInfo*  info  );
char*  sULongNode_kind(struct sULongNode* self);
_Bool sULongNode_compile(struct sULongNode* self, struct sInfo*  info  );
static void sULongNode_finalize(struct sULongNode* self);
struct sFloatNode* sFloatNode_initialize(struct sFloatNode* self, char*  value  , struct sInfo*  info  );
char*  sFloatNode_kind(struct sFloatNode* self);
_Bool sFloatNode_compile(struct sFloatNode* self, struct sInfo*  info  );
static void sFloatNode_finalize(struct sFloatNode* self);
struct sComplexNode* sComplexNode_initialize(struct sComplexNode* self, char*  value  , struct sInfo*  info  );
char*  sComplexNode_kind(struct sComplexNode* self);
_Bool sComplexNode_compile(struct sComplexNode* self, struct sInfo*  info  );
static void sComplexNode_finalize(struct sComplexNode* self);
struct sDoubleNode* sDoubleNode_initialize(struct sDoubleNode* self, char*  value  , struct sInfo*  info  );
char*  sDoubleNode_kind(struct sDoubleNode* self);
_Bool sDoubleNode_compile(struct sDoubleNode* self, struct sInfo*  info  );
static void sDoubleNode_finalize(struct sDoubleNode* self);
struct sDigitNode* sDigitNode_initialize(struct sDigitNode* self, char* value, struct sInfo*  info  );
char*  sDigitNode_kind(struct sDigitNode* self);
_Bool sDigitNode_compile(struct sDigitNode* self, struct sInfo*  info  );
static void sDigitNode_finalize(struct sDigitNode* self);
struct sNode* create_int_node(char*  value  , struct sInfo*  info  );
static struct sIntNode* sIntNode_clone(struct sIntNode* self);
static _Bool is_imaginary_suffix(char c);
struct sNode* get_suffix(char* buf, char* p2, struct sInfo*  info  );
static struct sULongNode* sULongNode_clone(struct sULongNode* self);
static struct sUIntNode* sUIntNode_clone(struct sUIntNode* self);
static struct sLongNode* sLongNode_clone(struct sLongNode* self);
struct sNode* get_number(_Bool minus, struct sInfo*  info  );
static struct sComplexNode* sComplexNode_clone(struct sComplexNode* self);
static struct sFloatNode* sFloatNode_clone(struct sFloatNode* self);
static struct sDoubleNode* sDoubleNode_clone(struct sDoubleNode* self);
struct sNode* get_hex_number(_Bool minus, struct sInfo*  info  );
struct sNode* get_digits(struct sInfo*  info  );
struct sNode* get_oct_number(_Bool minus, struct sInfo*  info  );
struct sNode* expression_node_v99(struct sInfo*  info  );
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "isascii"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return ((_c&~0x7F)==0);
    neo_current_frame = fr.prev;
}
inline int __istype(int  _c  , unsigned long  int _f)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "__istype"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (((isascii(_c))?(!!(_DefaultRuneLocale.__runetype[_c]&_f)):(!!__maskrune(_c,_f))));
    neo_current_frame = fr.prev;
}
inline int  __isctype(int  _c  , unsigned long  int _f)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "__isctype"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (((_c<0||_c>=(1<<8)))?(0):(!!(_DefaultRuneLocale.__runetype[_c]&_f)));
    neo_current_frame = fr.prev;
}
inline int __wcwidth(int  _c  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "__wcwidth"; neo_current_frame = &fr;
    unsigned int _x;
    memset(&_x, 0, sizeof(_x));
    if(_c==0) {
                neo_current_frame = fr.prev;
        return (0);
    }
    _x=(unsigned int)__maskrune(_c,0xe0000000L|0x00040000L);
    if((_x&0xe0000000L)!=0) {
                neo_current_frame = fr.prev;
        return ((_x&0xe0000000L)>>30);
    }
        neo_current_frame = fr.prev;
    return ((((_x&0x00040000L)!=0)?(1):(-1)));
    neo_current_frame = fr.prev;
}
inline int isalnum(int _c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "isalnum"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (__istype(_c,0x00000100L|0x00000400L));
    neo_current_frame = fr.prev;
}
inline int isalpha(int _c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "isalpha"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (__istype(_c,0x00000100L));
    neo_current_frame = fr.prev;
}
inline int isblank(int _c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "isblank"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (__istype(_c,0x00020000L));
    neo_current_frame = fr.prev;
}
inline int iscntrl(int _c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "iscntrl"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (__istype(_c,0x00000200L));
    neo_current_frame = fr.prev;
}
inline int isdigit(int _c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "isdigit"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (__isctype(_c,0x00000400L));
    neo_current_frame = fr.prev;
}
inline int isgraph(int _c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "isgraph"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (__istype(_c,0x00000800L));
    neo_current_frame = fr.prev;
}
inline int islower(int _c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "islower"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (__istype(_c,0x00001000L));
    neo_current_frame = fr.prev;
}
inline int isprint(int _c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "isprint"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (__istype(_c,0x00040000L));
    neo_current_frame = fr.prev;
}
inline int ispunct(int _c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ispunct"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (__istype(_c,0x00002000L));
    neo_current_frame = fr.prev;
}
inline int isspace(int _c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "isspace"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (__istype(_c,0x00004000L));
    neo_current_frame = fr.prev;
}
inline int isupper(int _c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "isupper"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (__istype(_c,0x00008000L));
    neo_current_frame = fr.prev;
}
inline int isxdigit(int _c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "isxdigit"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (__isctype(_c,0x00010000L));
    neo_current_frame = fr.prev;
}
inline int toascii(int _c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "toascii"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (_c&0x7F);
    neo_current_frame = fr.prev;
}
inline int tolower(int _c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tolower"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (__tolower(_c));
    neo_current_frame = fr.prev;
}
inline int toupper(int _c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "toupper"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (__toupper(_c));
    neo_current_frame = fr.prev;
}
inline int digittoint(int _c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "digittoint"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (__maskrune(_c,0x0F));
    neo_current_frame = fr.prev;
}
inline int ishexnumber(int _c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ishexnumber"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (__istype(_c,0x00010000L));
    neo_current_frame = fr.prev;
}
inline int isideogram(int _c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "isideogram"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (__istype(_c,0x00080000L));
    neo_current_frame = fr.prev;
}
inline int isnumber(int _c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "isnumber"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (__istype(_c,0x00000400L));
    neo_current_frame = fr.prev;
}
inline int isphonogram(int _c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "isphonogram"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (__istype(_c,0x00200000L));
    neo_current_frame = fr.prev;
}
inline int isrune(int _c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "isrune"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (__istype(_c,0xFFFFFFF0L));
    neo_current_frame = fr.prev;
}
inline int isspecial(int _c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "isspecial"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (__istype(_c,0x00100000L));
    neo_current_frame = fr.prev;
}
inline int iswalnum(unsigned int  _wc  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "iswalnum"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (__istype(_wc,0x00000100L|0x00000400L));
    neo_current_frame = fr.prev;
}
inline int iswalpha(unsigned int  _wc  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "iswalpha"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (__istype(_wc,0x00000100L));
    neo_current_frame = fr.prev;
}
inline int iswcntrl(unsigned int  _wc  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "iswcntrl"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (__istype(_wc,0x00000200L));
    neo_current_frame = fr.prev;
}
inline int iswctype(unsigned int  _wc  , unsigned int  _charclass  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "iswctype"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (__istype(_wc,_charclass));
    neo_current_frame = fr.prev;
}
inline int iswdigit(unsigned int  _wc  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "iswdigit"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (__isctype(_wc,0x00000400L));
    neo_current_frame = fr.prev;
}
inline int iswgraph(unsigned int  _wc  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "iswgraph"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (__istype(_wc,0x00000800L));
    neo_current_frame = fr.prev;
}
inline int iswlower(unsigned int  _wc  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "iswlower"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (__istype(_wc,0x00001000L));
    neo_current_frame = fr.prev;
}
inline int iswprint(unsigned int  _wc  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "iswprint"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (__istype(_wc,0x00040000L));
    neo_current_frame = fr.prev;
}
inline int iswpunct(unsigned int  _wc  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "iswpunct"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (__istype(_wc,0x00002000L));
    neo_current_frame = fr.prev;
}
inline int iswspace(unsigned int  _wc  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "iswspace"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (__istype(_wc,0x00004000L));
    neo_current_frame = fr.prev;
}
inline int iswupper(unsigned int  _wc  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "iswupper"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (__istype(_wc,0x00008000L));
    neo_current_frame = fr.prev;
}
inline int iswxdigit(unsigned int  _wc  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "iswxdigit"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (__isctype(_wc,0x00010000L));
    neo_current_frame = fr.prev;
}
inline unsigned int  towlower(unsigned int  _wc  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "towlower"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (__tolower(_wc));
    neo_current_frame = fr.prev;
}
inline unsigned int  towupper(unsigned int  _wc  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "towupper"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (__toupper(_wc));
    neo_current_frame = fr.prev;
}

// body function
struct sIntNode* sIntNode_initialize(struct sIntNode* self, char*  value  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIntNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj1  ;
    struct sIntNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sIntNode*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj1=self->value,
    self->value=(char* )come_increment_ref_count(value);
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0);
        __result_obj__0 = (struct sIntNode*)come_increment_ref_count(self);
    come_call_finalizer(sIntNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    come_call_finalizer(sIntNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sIntNode_kind(struct sIntNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIntNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sIntNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sIntNode_compile(struct sIntNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIntNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj2  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj3  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 19, "struct CVALUE* "))));
    __dec_obj2=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s",self->value));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj3=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 22, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",come_value->c_value);
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sNodeBase_finalize(struct sNodeBase* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
        neo_current_frame = fr.prev;
}

static void sIntNode_finalize(struct sIntNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIntNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        (self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
        neo_current_frame = fr.prev;
}

static void sType_finalize(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        (self->mPointerAttribute = come_decrement_ref_count(self->mPointerAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        (self->mAnonymousName = come_decrement_ref_count(self->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        (self->mInnerStructName = come_decrement_ref_count(self->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mHeapArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0));
    }
            neo_current_frame = fr.prev;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_push_back"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE*  __dec_obj4  ;
    struct list_item$1CVALUE$ph* litem_0;
    struct CVALUE*  __dec_obj5  ;
    struct list_item$1CVALUE$ph* litem_1;
    struct CVALUE*  __dec_obj6  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), (void*)0, 1437, "struct list_item$1CVALUE$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj4=litem->item,
        litem->item=(struct CVALUE* )come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_0=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), (void*)0, 1447, "struct list_item$1CVALUE$ph*"))));
        litem_0->prev=self->head;
        litem_0->next=((void*)0);
        __dec_obj5=litem_0->item,
        litem_0->item=(struct CVALUE* )come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_0;
        self->head->next=litem_0;
    }
    else {
        litem_1=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), (void*)0, 1457, "struct list_item$1CVALUE$ph*"))));
        litem_1->prev=self->tail;
        litem_1->next=((void*)0);
        __dec_obj6=litem_1->item,
        litem_1->item=(struct CVALUE* )come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_1;
        self->tail=litem_1;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void CVALUE_finalize(struct CVALUE*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
            neo_current_frame = fr.prev;
}

struct sUIntNode* sUIntNode_initialize(struct sUIntNode* self, char*  value  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sUIntNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj7  ;
    struct sUIntNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sUIntNode*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj7=self->value,
    self->value=(char* )come_increment_ref_count(value);
    __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0, (void*)0);
        __result_obj__0 = (struct sUIntNode*)come_increment_ref_count(self);
    come_call_finalizer(sUIntNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    come_call_finalizer(sUIntNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sUIntNode_kind(struct sUIntNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sUIntNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sUIntNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sUIntNode_compile(struct sUIntNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sUIntNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj8  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj9  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 49, "struct CVALUE* "))));
    __dec_obj8=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s",self->value));
    __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj9=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 52, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj9,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",come_value->c_value);
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sUIntNode_finalize(struct sUIntNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sUIntNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        (self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
        neo_current_frame = fr.prev;
}

struct sLongNode* sLongNode_initialize(struct sLongNode* self, char*  value  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLongNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj10  ;
    struct sLongNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sLongNode*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj10=self->value,
    self->value=(char* )come_increment_ref_count(value);
    __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0);
        __result_obj__0 = (struct sLongNode*)come_increment_ref_count(self);
    come_call_finalizer(sLongNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    come_call_finalizer(sLongNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sLongNode_kind(struct sLongNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLongNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sLongNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sLongNode_compile(struct sLongNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLongNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj11  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj12  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 79, "struct CVALUE* "))));
    __dec_obj11=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s",self->value));
    __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj12=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 82, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj12,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",come_value->c_value);
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sLongNode_finalize(struct sLongNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLongNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        (self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
        neo_current_frame = fr.prev;
}

struct sULongNode* sULongNode_initialize(struct sULongNode* self, char*  value  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sULongNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj13  ;
    struct sULongNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sULongNode*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj13=self->value,
    self->value=(char* )come_increment_ref_count(value);
    __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0);
        __result_obj__0 = (struct sULongNode*)come_increment_ref_count(self);
    come_call_finalizer(sULongNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    come_call_finalizer(sULongNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sULongNode_kind(struct sULongNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sULongNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sULongNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sULongNode_compile(struct sULongNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sULongNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj14  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj15  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 109, "struct CVALUE* "))));
    __dec_obj14=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(self->value);
    __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj15=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 112, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj15,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",come_value->c_value);
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sULongNode_finalize(struct sULongNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sULongNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        (self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
        neo_current_frame = fr.prev;
}

struct sFloatNode* sFloatNode_initialize(struct sFloatNode* self, char*  value  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFloatNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj16  ;
    struct sFloatNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sFloatNode*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj16=self->value,
    self->value=(char* )come_increment_ref_count(value);
    __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0);
        __result_obj__0 = (struct sFloatNode*)come_increment_ref_count(self);
    come_call_finalizer(sFloatNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    come_call_finalizer(sFloatNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sFloatNode_kind(struct sFloatNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFloatNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sFloatNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sFloatNode_compile(struct sFloatNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFloatNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj17  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj18  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 139, "struct CVALUE* "))));
    __dec_obj17=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s",self->value));
    __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj18=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 142, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("float")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj18,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",come_value->c_value);
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sFloatNode_finalize(struct sFloatNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFloatNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        (self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
        neo_current_frame = fr.prev;
}

struct sComplexNode* sComplexNode_initialize(struct sComplexNode* self, char*  value  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComplexNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj19  ;
    struct sComplexNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sComplexNode*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj19=self->value,
    self->value=(char* )come_increment_ref_count(value);
    __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0, (void*)0);
        __result_obj__0 = (struct sComplexNode*)come_increment_ref_count(self);
    come_call_finalizer(sComplexNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    come_call_finalizer(sComplexNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sComplexNode_kind(struct sComplexNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComplexNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sComplexNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sComplexNode_compile(struct sComplexNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComplexNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj20  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj21  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 169, "struct CVALUE* "))));
    __dec_obj20=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s",self->value));
    __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj21=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 172, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("double")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj21,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->type->mComplex=(_Bool)1;
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",come_value->c_value);
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sComplexNode_finalize(struct sComplexNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComplexNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        (self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
        neo_current_frame = fr.prev;
}

struct sDoubleNode* sDoubleNode_initialize(struct sDoubleNode* self, char*  value  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDoubleNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj22  ;
    struct sDoubleNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sDoubleNode*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj22=self->value,
    self->value=(char* )come_increment_ref_count(value);
    __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0, (void*)0);
        __result_obj__0 = (struct sDoubleNode*)come_increment_ref_count(self);
    come_call_finalizer(sDoubleNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    come_call_finalizer(sDoubleNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sDoubleNode_kind(struct sDoubleNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDoubleNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sDoubleNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sDoubleNode_compile(struct sDoubleNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDoubleNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj23  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj24  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 200, "struct CVALUE* "))));
    __dec_obj23=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s",self->value));
    __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj24=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 203, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("double")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",come_value->c_value);
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sDoubleNode_finalize(struct sDoubleNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDoubleNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        (self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
        neo_current_frame = fr.prev;
}

struct sDigitNode* sDigitNode_initialize(struct sDigitNode* self, char* value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDigitNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj25  ;
    struct sDigitNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sDigitNode*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj25=self->value,
    self->value=(char* )come_increment_ref_count(__builtin_string(value));
    __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0, (void*)0);
        __result_obj__0 = (struct sDigitNode*)come_increment_ref_count(self);
    come_call_finalizer(sDigitNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sDigitNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sDigitNode_kind(struct sDigitNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDigitNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sDigitNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sDigitNode_compile(struct sDigitNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDigitNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj26  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj27  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 230, "struct CVALUE* "))));
    __dec_obj26=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s",self->value));
    __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj27=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 233, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj27,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",come_value->c_value);
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sDigitNode_finalize(struct sDigitNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDigitNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        (self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
        neo_current_frame = fr.prev;
}

struct sNode* create_int_node(char*  value  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_int_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value1;
    struct sIntNode* _inf_obj_value1;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 246, "struct sNode");
    _inf_obj_value1=(struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(__right_value1=sIntNode_initialize((struct sIntNode* )come_increment_ref_count((struct sIntNode *)come_calloc(1, sizeof(struct sIntNode )*(1), (void*)0, 246, "struct sIntNode* ")),(char* )come_increment_ref_count(value),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sIntNode_finalize;
    _inf_value1->clone=(void*)sIntNode_clone;
    _inf_value1->compile=(void*)sIntNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sIntNode_kind;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value1)));
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sIntNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct sIntNode* sIntNode_clone(struct sIntNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIntNode_clone"; neo_current_frame = &fr;
    struct sIntNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sIntNode*  result  ;
    char*  __dec_obj28  ;
    char*  __dec_obj29  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sIntNode* )come_increment_ref_count((struct sIntNode *)come_calloc(1, sizeof(struct sIntNode )*(1), (void*)0, 5, "struct sIntNode* "));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj28=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sIntNode_clone", 7, "char* "));
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj29=result->value,
        result->value=(char* )come_increment_ref_count((char* )come_memdup(self->value, "sIntNode_clone", 9, "char* "));
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sIntNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool is_imaginary_suffix(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_imaginary_suffix"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return c==105||c==73||c==106||c==74;
    neo_current_frame = fr.prev;
}

struct sNode* get_suffix(char* buf, char* p2, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "get_suffix"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sNode* _inf_value2;
    struct sULongNode* _inf_obj_value2;
    void* __right_value3 = (void*)0;
    struct sNode* __result_obj__0;
    struct sNode* _inf_value3;
    struct sULongNode* _inf_obj_value3;
    struct sNode* _inf_value4;
    struct sUIntNode* _inf_obj_value4;
    struct sNode* _inf_value5;
    struct sLongNode* _inf_obj_value5;
    struct sNode* _inf_value6;
    struct sLongNode* _inf_obj_value6;
    struct sNode* _inf_value7;
    struct sULongNode* _inf_obj_value7;
    struct sNode* _inf_value8;
    struct sLongNode* _inf_obj_value8;
    struct sNode* _inf_value9;
    struct sIntNode* _inf_obj_value9;
    if(*info->p==117||*info->p==85) {
        *p2++=*info->p;
        *p2=0;
        info->p++;
        skip_spaces_and_lf(info);
        if(*info->p==76||*info->p==108) {
            *p2++=*info->p;
            *p2=0;
            info->p++;
            skip_spaces_and_lf(info);
            if(*info->p==76||*info->p==108) {
                *p2++=*info->p;
                *p2=0;
                info->p++;
                skip_spaces_and_lf(info);
                                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 277, "struct sNode");
                _inf_obj_value2=(struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(__right_value2=sULongNode_initialize((struct sULongNode* )come_increment_ref_count((struct sULongNode *)come_calloc(1, sizeof(struct sULongNode )*(1), (void*)0, 277, "struct sULongNode* ")),(char* )come_increment_ref_count(charp_to_string(buf)),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sULongNode_finalize;
                _inf_value2->clone=(void*)sULongNode_clone;
                _inf_value2->compile=(void*)sULongNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sline_real=(void*)sNodeBase_sline_real;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sULongNode_kind;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value2)));
                come_call_finalizer(sULongNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__0;
            }
            else {
                                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 280, "struct sNode");
                _inf_obj_value3=(struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(__right_value2=sULongNode_initialize((struct sULongNode* )come_increment_ref_count((struct sULongNode *)come_calloc(1, sizeof(struct sULongNode )*(1), (void*)0, 280, "struct sULongNode* ")),(char* )come_increment_ref_count(charp_to_string(buf)),info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sULongNode_finalize;
                _inf_value3->clone=(void*)sULongNode_clone;
                _inf_value3->compile=(void*)sULongNode_compile;
                _inf_value3->sline=(void*)sNodeBase_sline;
                _inf_value3->sline_real=(void*)sNodeBase_sline_real;
                _inf_value3->sname=(void*)sNodeBase_sname;
                _inf_value3->terminated=(void*)sNodeBase_terminated;
                _inf_value3->kind=(void*)sULongNode_kind;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value3)));
                come_call_finalizer(sULongNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__0;
            }
        }
        else {
                        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 284, "struct sNode");
            _inf_obj_value4=(struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(__right_value2=sUIntNode_initialize((struct sUIntNode* )come_increment_ref_count((struct sUIntNode *)come_calloc(1, sizeof(struct sUIntNode )*(1), (void*)0, 284, "struct sUIntNode* ")),(char* )come_increment_ref_count(charp_to_string(buf)),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sUIntNode_finalize;
            _inf_value4->clone=(void*)sUIntNode_clone;
            _inf_value4->compile=(void*)sUIntNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sUIntNode_kind;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value4)));
            come_call_finalizer(sUIntNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
    }
    else if(*info->p==76||*info->p==108) {
        *p2++=*info->p;
        *p2=0;
        info->p++;
        skip_spaces_and_lf(info);
        if(*info->p==76||*info->p==108) {
            *p2++=*info->p;
            *p2=0;
            info->p++;
            skip_spaces_and_lf(info);
            if(*info->p==117||*info->p==85) {
                *p2++=*info->p;
                *p2=0;
                info->p++;
                skip_spaces_and_lf(info);
                                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 306, "struct sNode");
                _inf_obj_value5=(struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(__right_value2=sLongNode_initialize((struct sLongNode* )come_increment_ref_count((struct sLongNode *)come_calloc(1, sizeof(struct sLongNode )*(1), (void*)0, 306, "struct sLongNode* ")),(char* )come_increment_ref_count(charp_to_string(buf)),info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sLongNode_finalize;
                _inf_value5->clone=(void*)sLongNode_clone;
                _inf_value5->compile=(void*)sLongNode_compile;
                _inf_value5->sline=(void*)sNodeBase_sline;
                _inf_value5->sline_real=(void*)sNodeBase_sline_real;
                _inf_value5->sname=(void*)sNodeBase_sname;
                _inf_value5->terminated=(void*)sNodeBase_terminated;
                _inf_value5->kind=(void*)sLongNode_kind;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value5)));
                come_call_finalizer(sLongNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__0;
            }
            else {
                                _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 309, "struct sNode");
                _inf_obj_value6=(struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(__right_value2=sLongNode_initialize((struct sLongNode* )come_increment_ref_count((struct sLongNode *)come_calloc(1, sizeof(struct sLongNode )*(1), (void*)0, 309, "struct sLongNode* ")),(char* )come_increment_ref_count(charp_to_string(buf)),info))));
                _inf_value6->_protocol_obj=_inf_obj_value6;
                _inf_value6->finalize=(void*)sLongNode_finalize;
                _inf_value6->clone=(void*)sLongNode_clone;
                _inf_value6->compile=(void*)sLongNode_compile;
                _inf_value6->sline=(void*)sNodeBase_sline;
                _inf_value6->sline_real=(void*)sNodeBase_sline_real;
                _inf_value6->sname=(void*)sNodeBase_sname;
                _inf_value6->terminated=(void*)sNodeBase_terminated;
                _inf_value6->kind=(void*)sLongNode_kind;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value6)));
                come_call_finalizer(sLongNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__0;
            }
        }
        else if(*info->p==85||*info->p==117) {
            *p2++=*info->p;
            *p2=0;
            info->p++;
            skip_spaces_and_lf(info);
                        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 319, "struct sNode");
            _inf_obj_value7=(struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(__right_value2=sULongNode_initialize((struct sULongNode* )come_increment_ref_count((struct sULongNode *)come_calloc(1, sizeof(struct sULongNode )*(1), (void*)0, 319, "struct sULongNode* ")),(char* )come_increment_ref_count(charp_to_string(buf)),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sULongNode_finalize;
            _inf_value7->clone=(void*)sULongNode_clone;
            _inf_value7->compile=(void*)sULongNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sULongNode_kind;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value7)));
            come_call_finalizer(sULongNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        else {
                        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 322, "struct sNode");
            _inf_obj_value8=(struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(__right_value2=sLongNode_initialize((struct sLongNode* )come_increment_ref_count((struct sLongNode *)come_calloc(1, sizeof(struct sLongNode )*(1), (void*)0, 322, "struct sLongNode* ")),(char* )come_increment_ref_count(charp_to_string(buf)),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sLongNode_finalize;
            _inf_value8->clone=(void*)sLongNode_clone;
            _inf_value8->compile=(void*)sLongNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sLongNode_kind;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value8)));
            come_call_finalizer(sLongNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
    }
    else {
                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 326, "struct sNode");
        _inf_obj_value9=(struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(__right_value2=sIntNode_initialize((struct sIntNode* )come_increment_ref_count((struct sIntNode *)come_calloc(1, sizeof(struct sIntNode )*(1), (void*)0, 326, "struct sIntNode* ")),(char* )come_increment_ref_count(charp_to_string(buf)),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sIntNode_finalize;
        _inf_value9->clone=(void*)sIntNode_clone;
        _inf_value9->compile=(void*)sIntNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sIntNode_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value9)));
        come_call_finalizer(sIntNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
    }
    neo_current_frame = fr.prev;
}

static struct sULongNode* sULongNode_clone(struct sULongNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sULongNode_clone"; neo_current_frame = &fr;
    struct sULongNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sULongNode*  result  ;
    char*  __dec_obj30  ;
    char*  __dec_obj31  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sULongNode* )come_increment_ref_count((struct sULongNode *)come_calloc(1, sizeof(struct sULongNode )*(1), (void*)0, 5, "struct sULongNode* "));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj30=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sULongNode_clone", 7, "char* "));
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj31=result->value,
        result->value=(char* )come_increment_ref_count((char* )come_memdup(self->value, "sULongNode_clone", 9, "char* "));
        __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0, (void*)0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sULongNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sUIntNode* sUIntNode_clone(struct sUIntNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sUIntNode_clone"; neo_current_frame = &fr;
    struct sUIntNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sUIntNode*  result  ;
    char*  __dec_obj32  ;
    char*  __dec_obj33  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sUIntNode* )come_increment_ref_count((struct sUIntNode *)come_calloc(1, sizeof(struct sUIntNode )*(1), (void*)0, 5, "struct sUIntNode* "));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj32=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sUIntNode_clone", 7, "char* "));
        __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj33=result->value,
        result->value=(char* )come_increment_ref_count((char* )come_memdup(self->value, "sUIntNode_clone", 9, "char* "));
        __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0, (void*)0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sUIntNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sLongNode* sLongNode_clone(struct sLongNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLongNode_clone"; neo_current_frame = &fr;
    struct sLongNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sLongNode*  result  ;
    char*  __dec_obj34  ;
    char*  __dec_obj35  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sLongNode* )come_increment_ref_count((struct sLongNode *)come_calloc(1, sizeof(struct sLongNode )*(1), (void*)0, 5, "struct sLongNode* "));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj34=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sLongNode_clone", 7, "char* "));
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj35=result->value,
        result->value=(char* )come_increment_ref_count((char* )come_memdup(self->value, "sLongNode_clone", 9, "char* "));
        __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0, (void*)0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sLongNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* get_number(_Bool minus, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "get_number"; neo_current_frame = &fr;
    char* p;
    _Bool is_float;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sNode* _inf_value10;
    struct sComplexNode* _inf_obj_value10;
    void* __right_value3 = (void*)0;
    struct sNode* __result_obj__0;
    struct sNode* _inf_value11;
    struct sFloatNode* _inf_obj_value11;
    struct sNode* _inf_value12;
    struct sComplexNode* _inf_obj_value12;
    struct sNode* _inf_value13;
    struct sDoubleNode* _inf_obj_value13;
    struct sNode* _inf_value14;
    struct sComplexNode* _inf_obj_value14;
    struct sNode* _inf_value15;
    struct sDoubleNode* _inf_obj_value15;
    const int buf_size=128;
    char buf[128+1];
    memset(&buf, 0, sizeof(buf));
    p=buf;
    if(minus) {
        *p=45;
        p++;
    }
    if(!xisdigit(*info->p)) {
        err_msg(info,"require digits after + or -");
        exit(2);
    }
    while(xisdigit(*info->p)||*info->p==39) {
        if(*info->p==39) {
            info->p++;
        }
        else {
            *p++=*info->p;
            info->p++;
        }
        if(p-buf>=buf_size) {
            printf("%s %d: overflow node of number\n",info->sname,info->sline);
            exit(5);
        }
    }
    is_float=(_Bool)0;
    if(*info->p==46&&(xisdigit(*(info->p+1))||*(info->p+1)==70||*(info->p+1)==76)) {
        is_float=(_Bool)1;
        *p++=*info->p;
        if(p-buf>=buf_size) {
            printf("%s %d: overflow node of number",info->sname,info->sline);
            exit(11);
        }
        info->p++;
        while(xisdigit(*info->p)||*info->p==39) {
            if(*info->p==39) {
                info->p++;
            }
            else {
                *p++=*info->p;
                info->p++;
            }
            if(p-buf>=buf_size) {
                err_msg(info,"overflow node of number");
                exit(2);
            }
        }
    }
    if(*info->p==101||*info->p==69) {
        is_float=(_Bool)1;
        *p++=*info->p;
        info->p++;
        if(p-buf>=buf_size) {
            err_msg(info,"overflow node of number");
            exit(2);
        }
        if(*info->p==43||*info->p==45) {
            *p++=*info->p;
            info->p++;
            if(p-buf>=buf_size) {
                err_msg(info,"overflow node of number");
                exit(2);
            }
        }
        if(!xisdigit(*info->p)) {
            err_msg(info,"require digits after exponent");
            exit(2);
        }
        while(xisdigit(*info->p)||*info->p==39) {
            if(*info->p==39) {
                info->p++;
            }
            else {
                *p++=*info->p;
                info->p++;
            }
            if(p-buf>=buf_size) {
                err_msg(info,"overflow node of number");
                exit(2);
            }
        }
    }
    *p=0;
    skip_spaces_and_lf(info);
    if(is_float) {
        if(*info->p==102||*info->p==70) {
            *p++=*info->p;
            *p=0;
            info->p++;
            if(is_imaginary_suffix(*info->p)) {
                *p++=*info->p;
                *p=0;
                info->p++;
                skip_spaces_and_lf(info);
                                _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 447, "struct sNode");
                _inf_obj_value10=(struct sComplexNode*)come_increment_ref_count(((struct sComplexNode*)(__right_value2=sComplexNode_initialize((struct sComplexNode* )come_increment_ref_count((struct sComplexNode *)come_calloc(1, sizeof(struct sComplexNode )*(1), (void*)0, 447, "struct sComplexNode* ")),(char* )come_increment_ref_count(__builtin_string(buf)),info))));
                _inf_value10->_protocol_obj=_inf_obj_value10;
                _inf_value10->finalize=(void*)sComplexNode_finalize;
                _inf_value10->clone=(void*)sComplexNode_clone;
                _inf_value10->compile=(void*)sComplexNode_compile;
                _inf_value10->sline=(void*)sNodeBase_sline;
                _inf_value10->sline_real=(void*)sNodeBase_sline_real;
                _inf_value10->sname=(void*)sNodeBase_sname;
                _inf_value10->terminated=(void*)sNodeBase_terminated;
                _inf_value10->kind=(void*)sComplexNode_kind;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value10)));
                come_call_finalizer(sComplexNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__0;
            }
            else {
                skip_spaces_and_lf(info);
                                _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 452, "struct sNode");
                _inf_obj_value11=(struct sFloatNode*)come_increment_ref_count(((struct sFloatNode*)(__right_value2=sFloatNode_initialize((struct sFloatNode* )come_increment_ref_count((struct sFloatNode *)come_calloc(1, sizeof(struct sFloatNode )*(1), (void*)0, 452, "struct sFloatNode* ")),(char* )come_increment_ref_count(__builtin_string(buf)),info))));
                _inf_value11->_protocol_obj=_inf_obj_value11;
                _inf_value11->finalize=(void*)sFloatNode_finalize;
                _inf_value11->clone=(void*)sFloatNode_clone;
                _inf_value11->compile=(void*)sFloatNode_compile;
                _inf_value11->sline=(void*)sNodeBase_sline;
                _inf_value11->sline_real=(void*)sNodeBase_sline_real;
                _inf_value11->sname=(void*)sNodeBase_sname;
                _inf_value11->terminated=(void*)sNodeBase_terminated;
                _inf_value11->kind=(void*)sFloatNode_kind;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value11)));
                come_call_finalizer(sFloatNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__0;
            }
        }
        else if(*info->p==108||*info->p==76) {
            *p++=*info->p;
            *p=0;
            info->p++;
            if(is_imaginary_suffix(*info->p)) {
                *p++=*info->p;
                *p=0;
                info->p++;
                skip_spaces_and_lf(info);
                                _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 467, "struct sNode");
                _inf_obj_value12=(struct sComplexNode*)come_increment_ref_count(((struct sComplexNode*)(__right_value2=sComplexNode_initialize((struct sComplexNode* )come_increment_ref_count((struct sComplexNode *)come_calloc(1, sizeof(struct sComplexNode )*(1), (void*)0, 467, "struct sComplexNode* ")),(char* )come_increment_ref_count(__builtin_string(buf)),info))));
                _inf_value12->_protocol_obj=_inf_obj_value12;
                _inf_value12->finalize=(void*)sComplexNode_finalize;
                _inf_value12->clone=(void*)sComplexNode_clone;
                _inf_value12->compile=(void*)sComplexNode_compile;
                _inf_value12->sline=(void*)sNodeBase_sline;
                _inf_value12->sline_real=(void*)sNodeBase_sline_real;
                _inf_value12->sname=(void*)sNodeBase_sname;
                _inf_value12->terminated=(void*)sNodeBase_terminated;
                _inf_value12->kind=(void*)sComplexNode_kind;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value12)));
                come_call_finalizer(sComplexNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__0;
            }
            else {
                skip_spaces_and_lf(info);
                                _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 472, "struct sNode");
                _inf_obj_value13=(struct sDoubleNode*)come_increment_ref_count(((struct sDoubleNode*)(__right_value2=sDoubleNode_initialize((struct sDoubleNode* )come_increment_ref_count((struct sDoubleNode *)come_calloc(1, sizeof(struct sDoubleNode )*(1), (void*)0, 472, "struct sDoubleNode* ")),(char* )come_increment_ref_count(__builtin_string(buf)),info))));
                _inf_value13->_protocol_obj=_inf_obj_value13;
                _inf_value13->finalize=(void*)sDoubleNode_finalize;
                _inf_value13->clone=(void*)sDoubleNode_clone;
                _inf_value13->compile=(void*)sDoubleNode_compile;
                _inf_value13->sline=(void*)sNodeBase_sline;
                _inf_value13->sline_real=(void*)sNodeBase_sline_real;
                _inf_value13->sname=(void*)sNodeBase_sname;
                _inf_value13->terminated=(void*)sNodeBase_terminated;
                _inf_value13->kind=(void*)sDoubleNode_kind;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value13)));
                come_call_finalizer(sDoubleNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__0;
            }
        }
        else if(is_imaginary_suffix(*info->p)) {
            *p++=*info->p;
            *p=0;
            info->p++;
            if(*info->p==102||*info->p==70||*info->p==108||*info->p==76) {
                *p++=*info->p;
                *p=0;
                info->p++;
            }
            skip_spaces_and_lf(info);
                        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 488, "struct sNode");
            _inf_obj_value14=(struct sComplexNode*)come_increment_ref_count(((struct sComplexNode*)(__right_value2=sComplexNode_initialize((struct sComplexNode* )come_increment_ref_count((struct sComplexNode *)come_calloc(1, sizeof(struct sComplexNode )*(1), (void*)0, 488, "struct sComplexNode* ")),(char* )come_increment_ref_count(__builtin_string(buf)),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sComplexNode_finalize;
            _inf_value14->clone=(void*)sComplexNode_clone;
            _inf_value14->compile=(void*)sComplexNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sComplexNode_kind;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value14)));
            come_call_finalizer(sComplexNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        else {
                        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 491, "struct sNode");
            _inf_obj_value15=(struct sDoubleNode*)come_increment_ref_count(((struct sDoubleNode*)(__right_value2=sDoubleNode_initialize((struct sDoubleNode* )come_increment_ref_count((struct sDoubleNode *)come_calloc(1, sizeof(struct sDoubleNode )*(1), (void*)0, 491, "struct sDoubleNode* ")),(char* )come_increment_ref_count(__builtin_string(buf)),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sDoubleNode_finalize;
            _inf_value15->clone=(void*)sDoubleNode_clone;
            _inf_value15->compile=(void*)sDoubleNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sDoubleNode_kind;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value15)));
            come_call_finalizer(sDoubleNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
    }
    else {
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=get_suffix(buf,p,info))));
        ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
    }
    neo_current_frame = fr.prev;
}

static struct sComplexNode* sComplexNode_clone(struct sComplexNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComplexNode_clone"; neo_current_frame = &fr;
    struct sComplexNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sComplexNode*  result  ;
    char*  __dec_obj36  ;
    char*  __dec_obj37  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sComplexNode* )come_increment_ref_count((struct sComplexNode *)come_calloc(1, sizeof(struct sComplexNode )*(1), (void*)0, 5, "struct sComplexNode* "));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj36=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sComplexNode_clone", 7, "char* "));
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj37=result->value,
        result->value=(char* )come_increment_ref_count((char* )come_memdup(self->value, "sComplexNode_clone", 9, "char* "));
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0, (void*)0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sComplexNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sFloatNode* sFloatNode_clone(struct sFloatNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFloatNode_clone"; neo_current_frame = &fr;
    struct sFloatNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sFloatNode*  result  ;
    char*  __dec_obj38  ;
    char*  __dec_obj39  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sFloatNode* )come_increment_ref_count((struct sFloatNode *)come_calloc(1, sizeof(struct sFloatNode )*(1), (void*)0, 5, "struct sFloatNode* "));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj38=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sFloatNode_clone", 7, "char* "));
        __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj39=result->value,
        result->value=(char* )come_increment_ref_count((char* )come_memdup(self->value, "sFloatNode_clone", 9, "char* "));
        __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0, (void*)0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sFloatNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sDoubleNode* sDoubleNode_clone(struct sDoubleNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDoubleNode_clone"; neo_current_frame = &fr;
    struct sDoubleNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sDoubleNode*  result  ;
    char*  __dec_obj40  ;
    char*  __dec_obj41  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sDoubleNode* )come_increment_ref_count((struct sDoubleNode *)come_calloc(1, sizeof(struct sDoubleNode )*(1), (void*)0, 5, "struct sDoubleNode* "));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj40=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sDoubleNode_clone", 7, "char* "));
        __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj41=result->value,
        result->value=(char* )come_increment_ref_count((char* )come_memdup(self->value, "sDoubleNode_clone", 9, "char* "));
        __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0, (void*)0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sDoubleNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* get_hex_number(_Bool minus, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "get_hex_number"; neo_current_frame = &fr;
    int buf_size;
    char* p;
    _Bool has_digit;
    void* __right_value0 = (void*)0;
    struct sNode* __result_obj__0;
    buf_size=128;
    char buf[128+1];
    memset(&buf, 0, sizeof(buf));
    p=buf;
    if(minus) {
        *p=45;
        p++;
    }
    *p++=48;
    *p++=120;
    has_digit=(_Bool)0;
    while((*info->p>=48&&*info->p<=57)||(*info->p>=97&&*info->p<=102)||(*info->p>=65&&*info->p<=70)||*info->p==39) {
        if(*info->p==39) {
            info->p++;
        }
        else {
            *p++=*info->p;
            info->p++;
            has_digit=(_Bool)1;
        }
        if(p-buf>=buf_size-1) {
            err_msg(info,"overflow node of number");
            exit(2);
        }
    }
    if(!has_digit) {
        err_msg(info,"require digits after 0x");
        exit(2);
    }
    *p=0;
    skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=get_suffix(buf,p,info))));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

struct sNode* get_digits(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "get_digits"; neo_current_frame = &fr;
    int buf_size;
    char* p;
    _Bool has_digit;
    void* __right_value0 = (void*)0;
    struct sNode* __result_obj__0;
    buf_size=128;
    char buf[128+1];
    memset(&buf, 0, sizeof(buf));
    p=buf;
    *p++=48;
    *p++=98;
    has_digit=(_Bool)0;
    while(*info->p==48||*info->p==49||*info->p==39) {
        if(*info->p==39) {
            info->p++;
        }
        else {
            *p++=*info->p;
            info->p++;
            has_digit=(_Bool)1;
        }
        if(p-buf>=buf_size-1) {
            err_msg(info,"overflow node of number");
            exit(2);
        }
    }
    if(!has_digit) {
        err_msg(info,"require digits after 0b");
        exit(2);
    }
    if(xisdigit(*info->p)) {
        err_msg(info,"invalid binary digit");
        exit(2);
    }
    *p=0;
    skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=get_suffix(buf,p,info))));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

struct sNode* get_oct_number(_Bool minus, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "get_oct_number"; neo_current_frame = &fr;
    int buf_size;
    char* p;
    _Bool has_digit;
    void* __right_value0 = (void*)0;
    struct sNode* __result_obj__0;
    buf_size=128;
    char buf[128+1];
    memset(&buf, 0, sizeof(buf));
    p=buf;
    if(minus) {
        *p++=45;
    }
    *p++=48;
    has_digit=(_Bool)0;
    while((*info->p>=48&&*info->p<=55)||*info->p==39) {
        if(*info->p==39) {
            info->p++;
        }
        else {
            *p=*info->p;
            p++;
            info->p++;
            has_digit=(_Bool)1;
        }
        if(p-buf>=buf_size-1) {
            err_msg(info,"overflow node of number");
            exit(2);
        }
    }
    if(!has_digit) {
        err_msg(info,"invalid octal digit");
        exit(2);
    }
    if(*info->p>=56&&*info->p<=57) {
        err_msg(info,"invalid octal digit");
        exit(2);
    }
    *p=0;
    skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=get_suffix(buf,p,info))));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

struct sNode* expression_node_v99(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "expression_node_v99"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    struct sNode* __dec_obj42;
    struct sNode* __result_obj__0;
    struct sNode* node_2;
    struct sNode* __dec_obj43;
    struct sNode* node_3;
    struct sNode* __dec_obj44;
    struct sNode* node_4;
    struct sNode* __dec_obj45;
    struct sNode* node_5;
    struct sNode* __dec_obj46;
    struct sNode* __dec_obj47;
    struct sNode* __dec_obj48;
    struct sNode* __dec_obj49;
    struct sNode* __dec_obj50;
    struct sNode* __dec_obj51;
    struct sNode* node_6;
    struct sNode* __dec_obj52;
    memset(&node_5, 0, sizeof(node_5));
    skip_spaces_and_lf(info);
    if(*info->p==48&&(*(info->p+1)==120||*(info->p+1)==88)) {
        info->p+=2;
        node=(struct sNode*)come_increment_ref_count(get_hex_number((_Bool)0,info));
        __dec_obj42=node,
        node=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node),info));
        (__dec_obj42 ? __dec_obj42 = come_decrement_ref_count(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0,0, (void*)0) :0);
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(*info->p==48&&(*(info->p+1)==98||*(info->p+1)==66)) {
        info->p+=2;
        node_2=(struct sNode*)come_increment_ref_count(get_digits(info));
        __dec_obj43=node_2,
        node_2=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_2),info));
        (__dec_obj43 ? __dec_obj43 = come_decrement_ref_count(__dec_obj43, ((struct sNode*)__dec_obj43)->finalize, ((struct sNode*)__dec_obj43)->_protocol_obj, 0,0, (void*)0) :0);
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_2);
        ((node_2) ? node_2 = come_decrement_ref_count(node_2, ((struct sNode*)node_2)->finalize, ((struct sNode*)node_2)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node_2) ? node_2 = come_decrement_ref_count(node_2, ((struct sNode*)node_2)->finalize, ((struct sNode*)node_2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(*info->p==48&&xisdigit(*(info->p+1))) {
        info->p++;
        node_3=(struct sNode*)come_increment_ref_count(get_oct_number((_Bool)0,info));
        __dec_obj44=node_3,
        node_3=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_3),info));
        (__dec_obj44 ? __dec_obj44 = come_decrement_ref_count(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0, (void*)0) :0);
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_3);
        ((node_3) ? node_3 = come_decrement_ref_count(node_3, ((struct sNode*)node_3)->finalize, ((struct sNode*)node_3)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node_3) ? node_3 = come_decrement_ref_count(node_3, ((struct sNode*)node_3)->finalize, ((struct sNode*)node_3)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(xisdigit(*info->p)) {
        node_4=(struct sNode*)come_increment_ref_count(get_number((_Bool)0,info));
        __dec_obj45=node_4,
        node_4=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_4),info));
        (__dec_obj45 ? __dec_obj45 = come_decrement_ref_count(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0, (void*)0) :0);
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_4);
        ((node_4) ? node_4 = come_decrement_ref_count(node_4, ((struct sNode*)node_4)->finalize, ((struct sNode*)node_4)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node_4) ? node_4 = come_decrement_ref_count(node_4, ((struct sNode*)node_4)->finalize, ((struct sNode*)node_4)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(*info->p==45&&(xisdigit(*(info->p+1))||(*info->p==48&&*(info->p+1)==120||*(info->p+1)==88)||(*info->p==48&&xisdigit(*(info->p+1))))) {
        info->p++;
        if(*info->p==48&&(*(info->p+1)==120||*(info->p+1)==88)) {
            info->p+=2;
            __dec_obj46=node_5,
            node_5=(struct sNode*)come_increment_ref_count(get_hex_number((_Bool)1,info));
            (__dec_obj46 ? __dec_obj46 = come_decrement_ref_count(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0, (void*)0) :0);
            __dec_obj47=node_5,
            node_5=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_5),info));
            (__dec_obj47 ? __dec_obj47 = come_decrement_ref_count(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0, (void*)0) :0);
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_5);
            ((node_5) ? node_5 = come_decrement_ref_count(node_5, ((struct sNode*)node_5)->finalize, ((struct sNode*)node_5)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        else if(*info->p==48&&xisdigit(*(info->p+1))) {
            info->p++;
            __dec_obj48=node_5,
            node_5=(struct sNode*)come_increment_ref_count(get_oct_number((_Bool)1,info));
            (__dec_obj48 ? __dec_obj48 = come_decrement_ref_count(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0, (void*)0) :0);
            __dec_obj49=node_5,
            node_5=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_5),info));
            (__dec_obj49 ? __dec_obj49 = come_decrement_ref_count(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0, (void*)0) :0);
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_5);
            ((node_5) ? node_5 = come_decrement_ref_count(node_5, ((struct sNode*)node_5)->finalize, ((struct sNode*)node_5)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        else {
            __dec_obj50=node_5,
            node_5=(struct sNode*)come_increment_ref_count(get_number((_Bool)1,info));
            (__dec_obj50 ? __dec_obj50 = come_decrement_ref_count(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0, (void*)0) :0);
            __dec_obj51=node_5,
            node_5=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_5),info));
            (__dec_obj51 ? __dec_obj51 = come_decrement_ref_count(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0, (void*)0) :0);
        }
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_5);
        ((node_5) ? node_5 = come_decrement_ref_count(node_5, ((struct sNode*)node_5)->finalize, ((struct sNode*)node_5)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node_5) ? node_5 = come_decrement_ref_count(node_5, ((struct sNode*)node_5)->finalize, ((struct sNode*)node_5)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else {
        node_6=(struct sNode*)come_increment_ref_count(expression_node_v98(info));
        __dec_obj52=node_6,
        node_6=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_6),info));
        (__dec_obj52 ? __dec_obj52 = come_decrement_ref_count(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0, (void*)0) :0);
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_6);
        ((node_6) ? node_6 = come_decrement_ref_count(node_6, ((struct sNode*)node_6)->finalize, ((struct sNode*)node_6)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node_6) ? node_6 = come_decrement_ref_count(node_6, ((struct sNode*)node_6)->finalize, ((struct sNode*)node_6)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

