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

struct sHeapChecker
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* value;
};

struct span$1buffer$p
{
    char* memory;
    struct buffer*  p  ;
    unsigned long  int  len  ;
    _Bool local;
    _Bool heap;
    _Bool global;
    void* stacktop;
};

struct sMethodCallNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* obj;
    char*  fun_name  ;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct buffer*  method_block  ;
    int method_block_sline;
    struct list$1sType$ph* method_generics_types;
    _Bool no_infference_method_generics;
    _Bool recursive;
    struct sFun*  fun  ;
    _Bool arrow_;
};

struct sIterCallNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* obj;
    struct sNode* parent_call_node;
    char*  fun_name  ;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct buffer*  method_block  ;
    int method_block_sline;
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

extern struct sMemHeader*  gFreeMem  ;

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
int re_unescape_literal_char(char escaped, unsigned char* out_char);
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
struct tuple3$3sType$phchar$ph_Bool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo*  info  );
void skip_pointer_attribute(struct sInfo*  info  );
void skip_paren(struct sInfo*  info  );
struct sNode* parse_normal_block(_Bool clang, _Bool unsafe_block, struct sInfo*  info  );
void cast_type(struct sType*  left_type  , struct sType*  right_type  , struct CVALUE*  come_value  , struct sInfo*  info  );
_Bool check_assign_type(const char* msg, struct sType*  left_type  , struct sType*  right_type  , struct CVALUE*  come_value  , struct sInfo*  info  );
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo*  info  , _Bool parse_function_attribute);
struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo*  info  );
struct sNode* get_number(_Bool minus, struct sInfo*  info  );
struct sNode* get_oct_number(struct sInfo*  info  );
struct sNode* get_hex_number(_Bool minus, struct sInfo*  info  );
struct sNode* create_int_node(char*  value  , struct sInfo*  info  );
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
int transpile_block(struct sBlock*  block  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo*  info  , _Bool no_var_table, _Bool loop_block, _Bool if_result_value, _Bool iter_, _Bool loop_result_type);
void arrange_stack(struct sInfo*  info  , int top);
struct sNode* parse_function(struct sInfo*  info  );
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
struct sNode* parse_method_call_v18(struct sNode* obj, char*  fun_name  , struct sInfo*  info  , _Bool arrow_, _Bool iter_, struct sNode* obj2);
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo*  info  );
struct sNode* create_funcall(const char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer*  method_block  , int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo*  info  , _Bool arrow_);
struct sNode* create_guard_break_method_call(struct sNode* expression_node, struct sInfo*  info  );
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
struct sNode* create_null_checker(struct sNode* node, struct sInfo*  info  );
static void sNullChecker_finalize(struct sNullChecker* self);
static struct sNullChecker* sNullChecker_clone(struct sNullChecker* self);
static struct sNode* sNode_clone(struct sNode* self);
struct sNode* create_heap_checker(struct sNode* node, struct sInfo*  info  );
static void sHeapChecker_finalize(struct sHeapChecker* self);
static struct sHeapChecker* sHeapChecker_clone(struct sHeapChecker* self);
struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType*  type  , char*  fun_name  , struct sInfo*  info  , _Bool array_equal_pointer);
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
static struct sGenericsFun*  map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char*  key  , struct sGenericsFun*  default_value  , _Bool by_pointer);
static void sGenericsFun_finalize(struct sGenericsFun*  self  );
static void tuple2$2char$ph_Bool$$p_finalize(struct tuple2$2char$ph_Bool$* self);
static struct tuple2$2char$phsGenericsFun$p* tuple2$2char$phsGenericsFun$p_initialize(struct tuple2$2char$phsGenericsFun$p* self, char*  v1  , struct sGenericsFun*  v2  );
static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char*  fun_name  , struct list$1sType$ph* method_generics_types, struct sInfo*  info  );
_Bool compile_method_block(struct buffer*  method_block  , struct list$1CVALUE$ph* come_params, struct sFun*  fun  , char* fun_name, int method_block_sline, struct sInfo*  info  , _Bool no_create_current_stack);
static void sCurrentNode_finalize(struct sCurrentNode* self);
static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  );
static void CVALUE_finalize(struct CVALUE*  self  );
static struct sType*  list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType*  list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static struct sClass*  map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  );
static void sClass_finalize(struct sClass*  self  );
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct sClass*  map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  );
static struct sType*  list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType*  list$1sType$ph_next(struct list$1sType$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct span$1buffer$p* span$1buffer$p_initialize(struct span$1buffer$p* self, void* head, unsigned long  int  len  , _Bool local, _Bool heap, _Bool global, void* stacktop);
static void span$1buffer$p$p_finalize(struct span$1buffer$p* self);
static void span$1char$p$p_finalize(struct span$1char$p* self);
static struct sFun*  map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char*  key  , struct sFun*  default_value  , _Bool by_pointer);
static void sFun_finalize(struct sFun*  self  );
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar*  self  );
static void sBlock_finalize(struct sBlock*  self  );
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char*  key  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char*  item  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
struct tuple3$3char$phsFun$psGenericsFun$p* get_method(const char* fun_name, struct sType*  obj_type  , struct sInfo*  info  , _Bool no_make_generics_function);
static struct sFun*  map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
static struct sFun*  map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct tuple3$3char$phsFun$psGenericsFun$p* tuple3$3char$phsFun$psGenericsFun$p_initialize(struct tuple3$3char$phsFun$psGenericsFun$p* self, char*  v1  , struct sFun*  v2  , struct sGenericsFun*  v3  );
static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self);
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
char*  get_method_from_iter_call(const char* fun_name, struct sType*  obj_type  , struct sInfo*  info  );
static _Bool call_cpp_method(char*  fun_name  , struct list$1tuple2$2char$phsNode$ph$ph* params, struct sNode* obj, struct sInfo*  info  , _Bool arrow_);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct CVALUE*  list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self);
static struct CVALUE*  list$1CVALUE$ph_next(struct list$1CVALUE$ph* self);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, const char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer*  method_block  , int method_block_sline, struct list$1sType$ph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, struct sInfo*  info  , _Bool arrow_);
_Bool sMethodCallNode_terminated(struct sMethodCallNode* self);
char*  sMethodCallNode_kind(struct sMethodCallNode* self);
_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo*  info  );
static void sNodeBase_finalize(struct sNodeBase* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void sMethodCallNode_finalize(struct sMethodCallNode* self);
static int list$1char$ph_length(struct list$1char$ph* self);
static struct CVALUE*  list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct CVALUE*  list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position);
static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType*  item  );
static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType*  item  );
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  );
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE*  item  );
static char*  list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char*  list$1char$ph_next(struct list$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE*  item  );
static char*  list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char*  list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self);
char*  trim_last_bracket(char*  all_code  , struct sInfo*  info  );
struct sNode* parse_iterator_it(struct sInfo*  info  );
struct sIterCallNode* sIterCallNode_initialize(struct sIterCallNode* self, const char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer*  method_block  , int method_block_sline, struct list$1sType$ph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, struct sInfo*  info  , _Bool arrow_, struct sNode* parent_call_node);
struct sNode* sIterCallNode_left_value(struct sIterCallNode* self);
_Bool sIterCallNode_terminated(struct sIterCallNode* self);
char*  sIterCallNode_kind(struct sIterCallNode* self);
_Bool sIterCallNode_compile(struct sIterCallNode* self, struct sInfo*  info  );
static void sIterCallNode_finalize(struct sIterCallNode* self);
static struct sIterCallNode* sIterCallNode_clone(struct sIterCallNode* self);
struct sNode* create_method_call(const char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer*  method_block  , int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo*  info  , _Bool arrow_);
static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self);
struct sNode* parse_method_call_v20(struct sNode* obj, char*  fun_name  , struct sInfo*  info  , _Bool arrow_);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char*  v1  , struct sNode* v2);
static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self);
struct sNode* parse_iter_call_v20(struct sNode* obj, char*  fun_name  , struct sInfo*  info  , _Bool arrow_, struct sNode* parent_call_node);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo*  info  );
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
struct sNode* create_null_checker(struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_null_checker"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value1;
    struct sNullChecker* _inf_obj_value1;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "24method.nc", 5, 4, "struct sNode");
    _inf_obj_value1=(struct sNullChecker*)come_increment_ref_count(((struct sNullChecker*)(__right_value1=sNullChecker_initialize((struct sNullChecker* )come_increment_ref_count((struct sNullChecker *)come_calloc(1, sizeof(struct sNullChecker )*(1), "24method.nc", 5, 1, "struct sNullChecker* "), "24method.nc", 5, 2),(struct sNode*)come_increment_ref_count(node, "24method.nc", 5, 3),info))), "24method.nc", 5, 5);
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullChecker_finalize;
    _inf_value1->clone=(void*)sNullChecker_clone;
    _inf_value1->compile=(void*)sNullChecker_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sNullChecker_kind;
    _inf_value1->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value1)), "24method.nc", 5, 23);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 5, 24):(void*)0);
    come_call_finalizer(sNullChecker_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 5, 25);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "24method.nc", 5, 26):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "24method.nc", 5, 27):(void*)0);
    return __result_obj__0;
}

static void sNullChecker_finalize(struct sNullChecker* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNullChecker_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNullChecker_finalize", 2, 6));
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0,(void*)0, "sNullChecker_finalize", 3, 7):(void*)0);
    }
        neo_current_frame = fr.prev;
}

static struct sNullChecker* sNullChecker_clone(struct sNullChecker* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNullChecker_clone"; neo_current_frame = &fr;
    struct sNullChecker* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNullChecker*  result  ;
    char*  __dec_obj1  ;
    struct sNode* __dec_obj2;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sNullChecker* )come_increment_ref_count((struct sNullChecker *)come_calloc(1, sizeof(struct sNullChecker )*(1), "sNullChecker_clone", 5, 8, "struct sNullChecker* "), "sNullChecker_clone", 5, 9);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj1=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sNullChecker_clone", 7, 10, "char* "), "sNullChecker_clone", 7, 12);
        __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0, "sNullChecker_clone", 7, 11);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj2=result->value,
        result->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value), "sNullChecker_clone", 9, 21);
        (__dec_obj2 ? __dec_obj2 = come_decrement_ref_count(__dec_obj2, ((struct sNode*)__dec_obj2)->finalize, ((struct sNode*)__dec_obj2)->_protocol_obj, 0,0, (void*)0, "sNullChecker_clone", 9, 20) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sNullChecker_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sNullChecker_clone}", 10, 22);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sNode* sNode_clone(struct sNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNode_clone"; neo_current_frame = &fr;
    struct sNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNode* result;
    if(self==(void*)0) {
                __result_obj__0 = (struct sNode*)come_increment_ref_count((void*)0, "sNode_clone", 4, 13);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 4, 14):(void*)0);
        return __result_obj__0;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 5, 15, "struct sNode*"), "sNode_clone", 5, 16);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(result, "sNode_clone", 16, 17);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 18):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 19):(void*)0);
    return __result_obj__0;
}

struct sNode* create_heap_checker(struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_heap_checker"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value2;
    struct sHeapChecker* _inf_obj_value2;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "24method.nc", 10, 31, "struct sNode");
    _inf_obj_value2=(struct sHeapChecker*)come_increment_ref_count(((struct sHeapChecker*)(__right_value1=sHeapChecker_initialize((struct sHeapChecker* )come_increment_ref_count((struct sHeapChecker *)come_calloc(1, sizeof(struct sHeapChecker )*(1), "24method.nc", 10, 28, "struct sHeapChecker* "), "24method.nc", 10, 29),(struct sNode*)come_increment_ref_count(node, "24method.nc", 10, 30),info))), "24method.nc", 10, 32);
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sHeapChecker_finalize;
    _inf_value2->clone=(void*)sHeapChecker_clone;
    _inf_value2->compile=(void*)sHeapChecker_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sHeapChecker_kind;
    _inf_value2->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value2)), "24method.nc", 10, 43);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 10, 44):(void*)0);
    come_call_finalizer(sHeapChecker_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 10, 45);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "24method.nc", 10, 46):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "24method.nc", 10, 47):(void*)0);
    return __result_obj__0;
}

static void sHeapChecker_finalize(struct sHeapChecker* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sHeapChecker_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sHeapChecker_finalize", 2, 33));
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0,(void*)0, "sHeapChecker_finalize", 3, 34):(void*)0);
    }
        neo_current_frame = fr.prev;
}

static struct sHeapChecker* sHeapChecker_clone(struct sHeapChecker* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sHeapChecker_clone"; neo_current_frame = &fr;
    struct sHeapChecker* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sHeapChecker*  result  ;
    char*  __dec_obj3  ;
    struct sNode* __dec_obj4;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sHeapChecker* )come_increment_ref_count((struct sHeapChecker *)come_calloc(1, sizeof(struct sHeapChecker )*(1), "sHeapChecker_clone", 5, 35, "struct sHeapChecker* "), "sHeapChecker_clone", 5, 36);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj3=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sHeapChecker_clone", 7, 37, "char* "), "sHeapChecker_clone", 7, 39);
        __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0, (void*)0, "sHeapChecker_clone", 7, 38);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj4=result->value,
        result->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value), "sHeapChecker_clone", 9, 41);
        (__dec_obj4 ? __dec_obj4 = come_decrement_ref_count(__dec_obj4, ((struct sNode*)__dec_obj4)->finalize, ((struct sNode*)__dec_obj4)->_protocol_obj, 0,0, (void*)0, "sHeapChecker_clone", 9, 40) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sHeapChecker_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sHeapChecker_clone}", 10, 42);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType*  type  , char*  fun_name  , struct sInfo*  info  , _Bool array_equal_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "make_generics_function"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  none_generics_name  ;
    char*  fun_name2  ;
    char*  fun_name3  ;
    struct sType*  no_solved_type  ;
    struct sGenericsFun*  generics_fun  ;
    struct sType*  type2  ;
    struct sType*  type_before  ;
    char*  __dec_obj39  ;
    void* __right_value1 = (void*)0;
    struct tuple2$2char$ph_Bool$* multiple_assign_var1
;    char*  name  =0;
    _Bool err=0;
    void* __right_value2 = (void*)0;
    struct tuple2$2char$phsGenericsFun$p* __result_obj__0;
    none_generics_name=(char* )come_increment_ref_count(get_none_generics_name(type->mClass->mName), "24method.nc", 15, 48);
    __right_value0 = (void*)0;
    fun_name2=(char* )come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,array_equal_pointer), "24method.nc", 16, 49);
    __right_value0 = (void*)0;
    fun_name3=(char* )come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name), "24method.nc", 17, 50);
    __right_value0 = (void*)0;
    no_solved_type=(struct sType* )come_increment_ref_count(sType_clone(type), "24method.nc", 19, 249);
    __right_value0 = (void*)0;
    generics_fun=((struct sGenericsFun* )(__right_value0=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3,((void*)0),(_Bool)0)));
    if(generics_fun) {
        type2=(struct sType* )come_increment_ref_count(no_solved_type, "24method.nc", 24, 275);
        type_before=type;
        __right_value0 = (void*)0;
        __dec_obj39=fun_name2,
        fun_name2=(char* )come_increment_ref_count(create_method_name(type2,(_Bool)0,fun_name,info,array_equal_pointer), "24method.nc", 28, 277);
        __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0, (void*)0, "24method.nc", 28, 276);
        __right_value0 = (void*)0;
        multiple_assign_var1=((struct tuple2$2char$ph_Bool$*)(__right_value1=create_generics_fun((char* )come_increment_ref_count(__builtin_string(fun_name2), "24method.nc", 30, 278),generics_fun,type2,info)));
        name=(char* )come_increment_ref_count(multiple_assign_var1->v1, "24method.nc", 30, 279);
        err=multiple_assign_var1->v2;
        come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 30, 281);
        if(!err) {
            err_msg(info,"%s not found",fun_name3);
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __result_obj__0 = (struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count(((struct tuple2$2char$phsGenericsFun$p*)(__right_value2=tuple2$2char$phsGenericsFun$p_initialize((struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count((struct tuple2$2char$phsGenericsFun$p*)come_calloc(1, sizeof(struct tuple2$2char$phsGenericsFun$p)*(1), "24method.nc", 34, 282, "struct tuple2$2char$phsGenericsFun$p"), "24method.nc", 34, 290),(char* )come_increment_ref_count(__builtin_string(""), "24method.nc", 34, 291),(struct sGenericsFun* )((void*)0)))), "24method.nc", 34, 292);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 34, 293);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 34, 294));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 34, 295));
            (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 34, 296));
            (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 34, 297));
            (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 34, 298));
            come_call_finalizer(sType_finalize, no_solved_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 34, 299);
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 34, 300);
            neo_current_frame = fr.prev;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "24method.nc}", 34, 301);
            return __result_obj__0;
        }
        type=type_before;
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 40, 302);
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 40, 303));
    }
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    __result_obj__0 = (struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count(((struct tuple2$2char$phsGenericsFun$p*)(__right_value2=tuple2$2char$phsGenericsFun$p_initialize((struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count((struct tuple2$2char$phsGenericsFun$p*)come_calloc(1, sizeof(struct tuple2$2char$phsGenericsFun$p)*(1), "24method.nc", 40, 305, "struct tuple2$2char$phsGenericsFun$p"), "24method.nc", 40, 306),(char* )come_increment_ref_count((char* )come_memdup(fun_name2, "24method.nc", 40, 304, "char* "), "24method.nc", 40, 307),generics_fun))), "24method.nc", 40, 308);
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 40, 309));
    (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 40, 310));
    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 40, 311));
    (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 40, 312));
    come_call_finalizer(sType_finalize, no_solved_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 40, 313);
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 40, 314);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "24method.nc}", 40, 315);
    return __result_obj__0;
}

static struct sType*  sType_clone(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_clone"; neo_current_frame = &fr;
    struct sType*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sType*  result  ;
    struct sType*  __dec_obj5  ;
    struct sType*  __dec_obj6  ;
    struct list$1sType$ph* __dec_obj10;
    struct sType*  __dec_obj11  ;
    struct sNode* __dec_obj12;
    struct sNode* __dec_obj13;
    char*  __dec_obj14  ;
    char*  __dec_obj15  ;
    char*  __dec_obj16  ;
    char*  __dec_obj17  ;
    char*  __dec_obj18  ;
    char*  __dec_obj19  ;
    char*  __dec_obj20  ;
    char*  __dec_obj21  ;
    struct list$1sNode$ph* __dec_obj25;
    struct list$1sNode$ph* __dec_obj26;
    struct list$1int$* __dec_obj27;
    struct list$1int$* __dec_obj28;
    struct sType*  __dec_obj29  ;
    char*  __dec_obj30  ;
    struct list$1sType$ph* __dec_obj31;
    struct list$1char$ph* __dec_obj35;
    struct sType*  __dec_obj36  ;
    struct sNode* __dec_obj37;
    struct list$1sNode$ph* __dec_obj38;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "sType_clone", 5, 51, "struct sType* "), "sType_clone", 5, 52);
    if(self!=((void*)0)) {
        result->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj5=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(self->mOriginalLoadVarType), "sType_clone", 7, 86);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 7, 85);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj6=result->mChannelType,
        result->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(self->mChannelType), "sType_clone", 8, 88);
        come_call_finalizer(sType_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 8, 87);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj10=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes), "sType_clone", 9, 118);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj10,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 9, 117);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj11=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType), "sType_clone", 10, 120);
        come_call_finalizer(sType_finalize, __dec_obj11,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 10, 119);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj12=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum), "sType_clone", 11, 122);
        (__dec_obj12 ? __dec_obj12 = come_decrement_ref_count(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0,0, (void*)0, "sType_clone", 11, 121) :0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj13=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas), "sType_clone", 12, 124);
        (__dec_obj13 ? __dec_obj13 = come_decrement_ref_count(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0,0, (void*)0, "sType_clone", 12, 123) :0);
    }
    if(self!=((void*)0)) {
        result->mAlignasDouble=self->mAlignasDouble;
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj14=result->mTupleName,
        result->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(self->mTupleName, "sType_clone", 14, 125, "char* "), "sType_clone", 14, 127);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 14, 126);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj15=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sType_clone", 15, 128, "char* "), "sType_clone", 15, 130);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 15, 129);
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj16=result->mVarAttribute,
        result->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mVarAttribute, "sType_clone", 16, 131, "char* "), "sType_clone", 16, 133);
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 16, 132);
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj17=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sType_clone", 17, 134, "char* "), "sType_clone", 17, 136);
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 17, 135);
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj18=result->mPointerAttribute,
        result->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mPointerAttribute, "sType_clone", 18, 137, "char* "), "sType_clone", 18, 139);
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 18, 138);
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
        __dec_obj19=result->mAnonymousName,
        result->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(self->mAnonymousName, "sType_clone", 49, 140, "char* "), "sType_clone", 49, 142);
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 49, 141);
    }
    if(self!=((void*)0)) {
        result->mInnerStruct=self->mInnerStruct;
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj20=result->mInnerStructName,
        result->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(self->mInnerStructName, "sType_clone", 51, 143, "char* "), "sType_clone", 51, 145);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 51, 144);
    }
    if(self!=((void*)0)) {
        result->mAnonymousVarName=self->mAnonymousVarName;
    }
    if(self!=((void*)0)) {
        result->mInline=self->mInline;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj21=result->mAsmName,
        result->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmName, "sType_clone", 54, 146, "char* "), "sType_clone", 54, 148);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 54, 147);
    }
    if(self!=((void*)0)) {
        result->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj25=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum), "sType_clone", 57, 178);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 57, 177);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj26=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum), "sType_clone", 58, 180);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj26,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 58, 179);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj27=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic), "sType_clone", 59, 200);
        come_call_finalizer(list$1int$_finalize, __dec_obj27,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 59, 199);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj28=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict), "sType_clone", 60, 202);
        come_call_finalizer(list$1int$_finalize, __dec_obj28,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 60, 201);
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
        __dec_obj29=result->mTypedefOriginalType,
        result->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(self->mTypedefOriginalType), "sType_clone", 66, 204);
        come_call_finalizer(sType_finalize, __dec_obj29,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 66, 203);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj30=result->mOriginalTypeName,
        result->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(self->mOriginalTypeName, "sType_clone", 67, 205, "char* "), "sType_clone", 67, 207);
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 67, 206);
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
        __dec_obj31=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sType_clone", 71, 209);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj31,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 71, 208);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj35=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sType_clone", 72, 241);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 72, 240);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj36=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sType_clone", 73, 243);
        come_call_finalizer(sType_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 73, 242);
    }
    if(self!=((void*)0)) {
        result->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj37=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode), "sType_clone", 75, 245);
        (__dec_obj37 ? __dec_obj37 = come_decrement_ref_count(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0, (void*)0, "sType_clone", 75, 244) :0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj38=result->mHeapArrayNum,
        result->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mHeapArrayNum), "sType_clone", 76, 247);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 246);
    }
        __result_obj__0 = result;
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 248);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sType_finalize(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 53);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 3, 54);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 4, 57);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 5, 58);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 6, 59):(void*)0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 7, 60):(void*)0);
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 8, 61));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 9, 62));
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 10, 63));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 11, 64));
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        (self->mPointerAttribute = come_decrement_ref_count(self->mPointerAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 12, 65));
    }
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        (self->mAnonymousName = come_decrement_ref_count(self->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 13, 66));
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        (self->mInnerStructName = come_decrement_ref_count(self->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 14, 67));
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 15, 68));
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 16, 71);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 17, 72);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 18, 74);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 19, 75);
    }
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 20, 76);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 21, 77));
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 22, 78);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 23, 81);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 24, 82);
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 25, 83):(void*)0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mHeapArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 84);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 56);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sType$ph$p_finalize}", 2, 55);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 70);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0, "list_item$1sNode$ph$p_finalize", 2, 69):(void*)0);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 73);
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 80);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 79));
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
                __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1509, 89);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1509, 90);
        return __result_obj__0;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1511, 91, "struct list$1sType$ph*"), "/usr/local/include/neo-c.h", 1511, 95)), "/usr/local/include/neo-c.h", 1511, 96);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "/usr/local/include/neo-c.h", 1516, 111));
        }
        else {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "/usr/local/include/neo-c.h", 1519, 112));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1525, 113);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 114);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 115);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_initialize"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1483, 92);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 93);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 94);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_add"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj7  ;
    struct list_item$1sType$ph* litem_0;
    struct sType*  __dec_obj8  ;
    struct list_item$1sType$ph* litem_1;
    struct sType*  __dec_obj9  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1529, 97);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1532, 98, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1532, 99);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj7=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1536, 101);
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1536, 100);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_0=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1542, 102, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1542, 103);
        litem_0->prev=self->head;
        litem_0->next=((void*)0);
        __dec_obj8=litem_0->item,
        litem_0->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1546, 105);
        come_call_finalizer(sType_finalize, __dec_obj8,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1546, 104);
        self->tail=litem_0;
        self->head->next=litem_0;
    }
    else {
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1552, 106, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1552, 107);
        litem_1->prev=self->tail;
        litem_1->next=((void*)0);
        __dec_obj9=litem_1->item,
        litem_1->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1556, 109);
        come_call_finalizer(sType_finalize, __dec_obj9,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1556, 108);
        self->tail->next=litem_1;
        self->tail=litem_1;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1564, 110);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 116);
    }
            neo_current_frame = fr.prev;
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
                __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1509, 149);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1509, 150);
        return __result_obj__0;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1511, 151, "struct list$1sNode$ph*"), "/usr/local/include/neo-c.h", 1511, 155)), "/usr/local/include/neo-c.h", 1511, 156);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "/usr/local/include/neo-c.h", 1516, 171));
        }
        else {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "/usr/local/include/neo-c.h", 1519, 172));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1525, 173);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 174);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 175);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_initialize"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1483, 152);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 153);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 154);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_add"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj22;
    struct list_item$1sNode$ph* litem_2;
    struct sNode* __dec_obj23;
    struct list_item$1sNode$ph* litem_3;
    struct sNode* __dec_obj24;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1529, 157):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1532, 158, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1532, 159);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj22=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1536, 161);
        (__dec_obj22 ? __dec_obj22 = come_decrement_ref_count(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1536, 160) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_2=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1542, 162, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1542, 163);
        litem_2->prev=self->head;
        litem_2->next=((void*)0);
        __dec_obj23=litem_2->item,
        litem_2->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1546, 165);
        (__dec_obj23 ? __dec_obj23 = come_decrement_ref_count(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1546, 164) :0);
        self->tail=litem_2;
        self->head->next=litem_2;
    }
    else {
        __right_value0 = (void*)0;
        litem_3=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1552, 166, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1552, 167);
        litem_3->prev=self->tail;
        litem_3->next=((void*)0);
        __dec_obj24=litem_3->item,
        litem_3->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1556, 169);
        (__dec_obj24 ? __dec_obj24 = come_decrement_ref_count(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1556, 168) :0);
        self->tail->next=litem_3;
        self->tail=litem_3;
    }
    self->len++;
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1564, 170):(void*)0);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 176);
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
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1509, 181);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1509, 182);
        return __result_obj__0;
    }
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "/usr/local/include/neo-c.h", 1511, 183, "struct list$1int$*"), "/usr/local/include/neo-c.h", 1511, 187)), "/usr/local/include/neo-c.h", 1511, 188);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1525, 195);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 196);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 197);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1483, 184);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 185);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 186);
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
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1532, 189, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1532, 190);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_4=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1542, 191, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1542, 192);
        litem_4->prev=self->head;
        litem_4->next=((void*)0);
        litem_4->item=item;
        self->tail=litem_4;
        self->head->next=litem_4;
    }
    else {
        __right_value0 = (void*)0;
        litem_5=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1552, 193, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1552, 194);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 198);
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
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1509, 210);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1509, 211);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 1511, 212, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 1511, 216)), "/usr/local/include/neo-c.h", 1511, 217);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1516, 232, "char* "), "/usr/local/include/neo-c.h", 1516, 233));
        }
        else {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1519, 234, "char* "), "/usr/local/include/neo-c.h", 1519, 235));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1525, 236);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 237);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 238);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1483, 213);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 214);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 215);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_add"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj32  ;
    struct list_item$1char$ph* litem_6;
    char*  __dec_obj33  ;
    struct list_item$1char$ph* litem_7;
    char*  __dec_obj34  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1529, 218));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1532, 219, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1532, 220);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj32=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1536, 222);
        __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1536, 221);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_6=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1542, 223, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1542, 224);
        litem_6->prev=self->head;
        litem_6->next=((void*)0);
        __dec_obj33=litem_6->item,
        litem_6->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1546, 226);
        __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1546, 225);
        self->tail=litem_6;
        self->head->next=litem_6;
    }
    else {
        __right_value0 = (void*)0;
        litem_7=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1552, 227, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1552, 228);
        litem_7->prev=self->tail;
        litem_7->next=((void*)0);
        __dec_obj34=litem_7->item,
        litem_7->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1556, 230);
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1556, 229);
        self->tail->next=litem_7;
        self->tail=litem_7;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1564, 231));
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 239);
    }
            neo_current_frame = fr.prev;
}

static struct sGenericsFun*  map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char*  key  , struct sGenericsFun*  default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph_at"; neo_current_frame = &fr;
    struct sGenericsFun*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3139, 250);
        come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3139, 261);
        neo_current_frame = fr.prev;
        come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3139, 262);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3150, 263);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3150, 264);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3150, 265);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3159, 266);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3159, 267);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3159, 268);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3163, 269);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3163, 270);
            neo_current_frame = fr.prev;
            come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3163, 271);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3167, 272);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3167, 273);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3167, 274);
    return __result_obj__0;
}

static void sGenericsFun_finalize(struct sGenericsFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGenericsFun_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mImplType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mImplType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 2, 251);
    }
    if(self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 3, 252);
    }
    if(self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 4, 253);
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 5, 254));
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 6, 255);
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 7, 256);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 8, 257);
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 9, 258);
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        (self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 10, 259));
    }
    if(self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        (self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 11, 260));
    }
            neo_current_frame = fr.prev;
}

static void tuple2$2char$ph_Bool$$p_finalize(struct tuple2$2char$ph_Bool$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$ph_Bool$$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$ph_Bool$$p_finalize", 2, 280));
    }
            neo_current_frame = fr.prev;
}

static struct tuple2$2char$phsGenericsFun$p* tuple2$2char$phsGenericsFun$p_initialize(struct tuple2$2char$phsGenericsFun$p* self, char*  v1  , struct sGenericsFun*  v2  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsGenericsFun$p_initialize"; neo_current_frame = &fr;
    char*  __dec_obj40  ;
    struct tuple2$2char$phsGenericsFun$p* __result_obj__0;
    __dec_obj40=self->v1,
    self->v1=(char* )come_increment_ref_count(v1, "/usr/local/include/neo-c.h", 3911, 284);
    __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 3911, 283);
    self->v2=v2;
        __result_obj__0 = (struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 3914, 285);
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3914, 287);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3914, 288));
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3914, 289);
    return __result_obj__0;
}

static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsGenericsFun$p$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsGenericsFun$p$p_finalize", 2, 286));
    }
        neo_current_frame = fr.prev;
}

struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char*  fun_name  , struct list$1sType$ph* method_generics_types, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "make_method_generics_function"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  fun_name3  ;
    struct list$1sType$ph* method_generics_types_before;
    struct list$1sType$ph* __dec_obj41;
    struct sGenericsFun*  generics_fun  ;
    _Bool _conditional_value_X0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct tuple2$2char$phsGenericsFun$p* __result_obj__0;
    struct list$1sType$ph* __dec_obj42;
    static int num_method_generics=0;
    fun_name3=(char* )come_increment_ref_count(xsprintf("%s_method_generics%d",fun_name,num_method_generics++), "24method.nc", 46, 316);
    method_generics_types_before=(struct list$1sType$ph*)come_increment_ref_count(info->method_generics_types, "24method.nc", 48, 317);
    __right_value0 = (void*)0;
    __dec_obj41=info->method_generics_types,
    info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(method_generics_types), "24method.nc", 49, 319);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj41,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 49, 318);
    __right_value0 = (void*)0;
    generics_fun=((struct sGenericsFun* )(__right_value0=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name,((void*)0),(_Bool)0)));
    if(generics_fun) {
        if(__right_value0 = (void*)0,
({(_conditional_value_X0=(!create_method_generics_fun((char* )come_increment_ref_count(__builtin_string(fun_name3), "24method.nc", 54, 320),generics_fun,info)));_conditional_value_X0;})) {
            err_msg(info,"%s not found",fun_name3);
                        __right_value0 = (void*)0;
            __result_obj__0 = (struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count(((struct tuple2$2char$phsGenericsFun$p*)(__right_value2=tuple2$2char$phsGenericsFun$p_initialize((struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count((struct tuple2$2char$phsGenericsFun$p*)come_calloc(1, sizeof(struct tuple2$2char$phsGenericsFun$p)*(1), "24method.nc", 56, 321, "struct tuple2$2char$phsGenericsFun$p"), "24method.nc", 56, 322),(char* )come_increment_ref_count(__builtin_string(""), "24method.nc", 56, 323),(struct sGenericsFun* )((void*)0)))), "24method.nc", 56, 324);
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 56, 325));
            (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 56, 326));
            come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_before, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 56, 327);
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 56, 328);
            neo_current_frame = fr.prev;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "24method.nc}", 56, 329);
            return __result_obj__0;
        }
    }
    __dec_obj42=info->method_generics_types,
    info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_before, "24method.nc", 60, 331);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 60, 330);
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    __result_obj__0 = (struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count(((struct tuple2$2char$phsGenericsFun$p*)(__right_value2=tuple2$2char$phsGenericsFun$p_initialize((struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count((struct tuple2$2char$phsGenericsFun$p*)come_calloc(1, sizeof(struct tuple2$2char$phsGenericsFun$p)*(1), "24method.nc", 62, 333, "struct tuple2$2char$phsGenericsFun$p"), "24method.nc", 62, 334),(char* )come_increment_ref_count((char* )come_memdup(fun_name3, "24method.nc", 62, 332, "char* "), "24method.nc", 62, 335),generics_fun))), "24method.nc", 62, 336);
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 62, 337));
    (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 62, 338));
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_before, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 62, 339);
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 62, 340);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "24method.nc}", 62, 341);
    return __result_obj__0;
}

_Bool compile_method_block(struct buffer*  method_block  , struct list$1CVALUE$ph* come_params, struct sFun*  fun  , char* fun_name, int method_block_sline, struct sInfo*  info  , _Bool no_create_current_stack)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "compile_method_block"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value3;
    struct sCurrentNode* _inf_obj_value3;
    void* __right_value2 = (void*)0;
    struct sNode* current_stack_frame_node;
    _Bool Value;
    _Bool __result_obj__0;
    struct CVALUE*  come_value  ;
    struct buffer*  method_block2  ;
    struct sType*  method_block_type  ;
    char*  class_name  ;
    struct sClass*  current_stack_frame_struct  ;
    struct sType*  result_type  ;
    struct sType*  result_type2  ;
    struct list$1sType$ph* param_types;
    struct list$1char$ph* param_names;
    struct buffer*  all_alhabet_sname  ;
    char* p;
    int num_method_block;
    int i;
    struct list$1sType$ph* _o2_saved_1;
    struct sType*  it  ;
    struct sType*  param_type  ;
    char*  param_name  ;
    char*  param_name_14  ;
    struct sType*  param_type2  ;
    char*  param_name_15  ;
    struct buffer*  source3  ;
    char* p_16;
    char* head;
    int sline;
    struct buffer*  __dec_obj47  ;
    struct span$1char$p* __dec_obj48;
    struct sNode* node;
    _Bool in_method_block;
    _Bool Value_17;
    char* method_block_name;
    struct CVALUE*  come_value2  ;
    struct sFun*  fun2  ;
    struct sType*  method_block_type2  ;
    char*  __dec_obj49  ;
    struct sType*  __dec_obj50  ;
    struct buffer*  __dec_obj51  ;
    struct span$1char$p* __dec_obj52;
    struct sType*  __dec_obj53  ;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "24method.nc", 67, 344, "struct sNode");
    _inf_obj_value3=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value1=sCurrentNode_initialize((struct sCurrentNode* )come_increment_ref_count((struct sCurrentNode *)come_calloc(1, sizeof(struct sCurrentNode )*(1), "24method.nc", 67, 342, "struct sCurrentNode* "), "24method.nc", 67, 343),info))), "24method.nc", 67, 345);
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sCurrentNode_finalize;
    _inf_value3->clone=(void*)sCurrentNode_clone;
    _inf_value3->compile=(void*)sCurrentNode_compile;
    _inf_value3->sline=(void*)sCurrentNode_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sCurrentNode_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sCurrentNode_kind;
    _inf_value3->left_value=(void*)sNodeBase_left_value;
    current_stack_frame_node=(struct sNode*)come_increment_ref_count(_inf_value3, "24method.nc", 67, 353);
    come_call_finalizer(sCurrentNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 67, 354);
    Value=node_compile(current_stack_frame_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 70, 355):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "24method.nc", 73, 356);
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE* )come_increment_ref_count(come_value, "24method.nc", 74, 376));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    method_block2=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "24method.nc", 76, 377, "struct buffer* "), "24method.nc", 76, 378)), "24method.nc", 76, 379);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    method_block_type=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(fun->mParamTypes,-1)))), "24method.nc", 77, 398);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 77, 399);
    __right_value0 = (void*)0;
    class_name=(char* )come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num), "24method.nc", 79, 400);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    ((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(method_block_type->mParamTypes,0)))->mClass=((struct sClass* )(__right_value1=map$2char$phsClass$ph_operator_load_element(info->classes,class_name)));
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 81, 439);
    current_stack_frame_struct=info->current_stack_frame_struct;
    __right_value0 = (void*)0;
    info->current_stack_frame_struct=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,class_name)));
    info->num_method_block++;
    if(string_operator_not_equals(method_block_type->mClass->mName,"lambda")) {
        err_msg(info,"This function does not have method block(%s)",fun_name);
                __result_obj__0 = (_Bool)1;
        ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 89, 440):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 89, 441);
        come_call_finalizer(buffer_finalize, method_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 89, 442);
        come_call_finalizer(sType_finalize, method_block_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 89, 443);
        (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 89, 444));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    result_type=(struct sType* )come_increment_ref_count(sType_clone(method_block_type->mResultType), "24method.nc", 92, 445);
    result_type->mStatic=(_Bool)0;
    __right_value0 = (void*)0;
    result_type2=(struct sType* )come_increment_ref_count(solve_generics(result_type,info->generics_type,info), "24method.nc", 94, 446);
    param_types=(struct list$1sType$ph*)come_increment_ref_count(method_block_type->mParamTypes, "24method.nc", 95, 447);
    param_names=(struct list$1char$ph*)come_increment_ref_count(method_block_type->mParamNames, "24method.nc", 96, 448);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    all_alhabet_sname=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "24method.nc", 98, 449, "struct buffer* "), "24method.nc", 98, 450)), "24method.nc", 98, 451);
    {
        p=info->sname;
        while(*p) {
            if(xisalnum(*p)) {
                buffer_append_char(all_alhabet_sname,*p++);
            }
            else {
                p++;
            }
        }
    }
    num_method_block=info->num_method_block;
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    buffer_append_format(method_block2,"%s method_block%d_%s(",((char* )(__right_value0=make_come_type_name_string(result_type2,info))),num_method_block,((char* )(__right_value1=buffer_to_string(all_alhabet_sname))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 113, 452));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 113, 453));
    i=0;
    for(_o2_saved_1=(struct list$1sType$ph*)come_increment_ref_count(param_types, "24method.nc", 116, 454),it=list$1sType$ph_begin(_o2_saved_1)    ;!list$1sType$ph_end(_o2_saved_1);it=list$1sType$ph_next(_o2_saved_1)){
        param_type=(struct sType* )come_increment_ref_count(it, "24method.nc", 117, 455);
        if(i==0) {
            __right_value0 = (void*)0;
            param_name=(char* )come_increment_ref_count(xsprintf("parent"), "24method.nc", 120, 456);
            __right_value0 = (void*)0;
            buffer_append_format(method_block2,"%s",((char* )(__right_value0=make_come_define_var(param_type,param_name,info))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 122, 457));
            (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 139, 458));
        }
        else if(i==1) {
            __right_value0 = (void*)0;
            param_name_14=(char* )come_increment_ref_count(xsprintf("it"), "24method.nc", 125, 459);
            __right_value0 = (void*)0;
            param_type2=(struct sType* )come_increment_ref_count(solve_generics(param_type,info->generics_type,info), "24method.nc", 127, 460);
            __right_value0 = (void*)0;
            buffer_append_format(method_block2,"%s",((char* )(__right_value0=make_come_define_var(param_type,param_name_14,info))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 129, 461));
            (param_name_14 = come_decrement_ref_count(param_name_14, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 139, 462));
            come_call_finalizer(sType_finalize, param_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 139, 463);
        }
        else {
            __right_value0 = (void*)0;
            param_name_15=(char* )come_increment_ref_count(xsprintf("it%d",i), "24method.nc", 132, 464);
            __right_value0 = (void*)0;
            buffer_append_format(method_block2,"%s",((char* )(__right_value0=make_come_define_var(param_type,param_name_15,info))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 136, 465));
            (param_name_15 = come_decrement_ref_count(param_name_15, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 139, 466));
        }
        if(i!=list$1sType$ph_length(param_types)-1) {
            buffer_append_str(method_block2,",");
        }
        i++;
        come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 145, 467);
    }
    buffer_append_str(method_block2,")\n");
    __right_value0 = (void*)0;
    buffer_append_str(method_block2,((char* )(__right_value0=buffer_to_string(method_block))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 147, 468));
    source3=(struct buffer* )come_increment_ref_count(info->source, "24method.nc", 149, 469);
    p_16=info->p->p;
    head=info->head;
    sline=info->sline;
    __dec_obj47=info->source,
    info->source=(struct buffer* )come_increment_ref_count(method_block2, "24method.nc", 154, 471);
    come_call_finalizer(buffer_finalize, __dec_obj47,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 154, 470);
    if(info->p==((void*)0)) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj48=info->p,
        info->p=(struct span$1buffer$p*)come_increment_ref_count(span$1buffer$p_initialize((struct span$1buffer$p*)come_increment_ref_count((struct span$1buffer$p*)come_calloc(1, sizeof(struct span$1buffer$p)*(1), "24method.nc", 156, 472, "struct span$1buffer$p*"), "24method.nc", 156, 476),info->source->buf,info->source->len+1,(_Bool)1,(_Bool)0,(_Bool)0,neo_current_frame->stacktop), "24method.nc", 156, 478);
        come_call_finalizer(span$1char$p$p_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 156, 477);
    }
    info->p->memory=info->source->buf;
    info->p->len=info->source->len+2;
    info->p->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=method_block_sline;
    __right_value0 = (void*)0;
    node=(struct sNode*)come_increment_ref_count(parse_function(info), "24method.nc", 164, 479);
    in_method_block=info->in_method_block;
    info->in_method_block=(_Bool)1;
    Value_17=node_compile(node,info);
    if(!Value_17) {
                __result_obj__0 = (_Bool)0;
        ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 169, 480):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 169, 481);
        come_call_finalizer(buffer_finalize, method_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 169, 482);
        come_call_finalizer(sType_finalize, method_block_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 169, 483);
        (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 169, 484));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 169, 485);
        come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 169, 486);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 169, 487);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 169, 488);
        come_call_finalizer(buffer_finalize, all_alhabet_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 169, 489);
        come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 169, 490);
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 169, 491);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 169, 492):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    info->in_method_block=in_method_block;
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    method_block_name=(char* )come_increment_ref_count(xsprintf("method_block%d_%s",num_method_block,((char* )(__right_value0=buffer_to_string(all_alhabet_sname)))), "24method.nc", 173, 493);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 173, 494));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "24method.nc", 175, 495, "struct CVALUE* "), "24method.nc", 175, 496)), "24method.nc", 175, 497);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    fun2=((struct sFun* )(__right_value1=map$2char$phsFun$ph_at(info->funcs,((char* )(__right_value0=__builtin_string(method_block_name))),((void*)0),(_Bool)0)));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 177, 539));
    if(fun2==((void*)0)) {
        err_msg(info,"method block function not found(%s)",method_block_name);
                __result_obj__0 = (_Bool)1;
        ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 181, 540):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 181, 541);
        come_call_finalizer(buffer_finalize, method_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 181, 542);
        come_call_finalizer(sType_finalize, method_block_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 181, 543);
        (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 181, 544));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 181, 545);
        come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 181, 546);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 181, 547);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 181, 548);
        come_call_finalizer(buffer_finalize, all_alhabet_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 181, 549);
        come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 181, 550);
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 181, 551);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 181, 552):(void*)0);
        (method_block_name = come_decrement_ref_count(method_block_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 181, 553));
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 181, 554);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    method_block_type2=fun2->mLambdaType;
    __right_value0 = (void*)0;
    __dec_obj49=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(xsprintf("(void*)%s",method_block_name), "24method.nc", 186, 556);
    __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0, (void*)0, "24method.nc", 186, 555);
    __right_value0 = (void*)0;
    __dec_obj50=come_value2->type,
    come_value2->type=(struct sType* )come_increment_ref_count(sType_clone(method_block_type2), "24method.nc", 187, 558);
    come_call_finalizer(sType_finalize, __dec_obj50,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 187, 557);
    come_value2->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE* )come_increment_ref_count(come_value2, "24method.nc", 190, 559));
    __dec_obj51=info->source,
    info->source=(struct buffer* )come_increment_ref_count(source3, "24method.nc", 192, 561);
    come_call_finalizer(buffer_finalize, __dec_obj51,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 192, 560);
    if(info->p==((void*)0)) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj52=info->p,
        info->p=(struct span$1buffer$p*)come_increment_ref_count(span$1buffer$p_initialize((struct span$1buffer$p*)come_increment_ref_count((struct span$1buffer$p*)come_calloc(1, sizeof(struct span$1buffer$p)*(1), "24method.nc", 194, 562, "struct span$1buffer$p*"), "24method.nc", 194, 563),info->source->buf,info->source->len+1,(_Bool)1,(_Bool)0,(_Bool)0,neo_current_frame->stacktop), "24method.nc", 194, 565);
        come_call_finalizer(span$1char$p$p_finalize, __dec_obj52,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 194, 564);
    }
    info->p->memory=info->source->buf;
    info->p->len=info->source->len+2;
    info->p->p=info->source->buf;
    info->p->p=p_16;
    info->head=head;
    info->sline=sline;
    info->current_stack_frame_struct=current_stack_frame_struct;
    __right_value0 = (void*)0;
    __dec_obj53=info->come_method_block_function_result_type,
    info->come_method_block_function_result_type=(struct sType* )come_increment_ref_count(sType_clone(info->function_result_type), "24method.nc", 204, 567);
    come_call_finalizer(sType_finalize, __dec_obj53,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 204, 566);
    if(info->no_output_come_code) {
        __right_value0 = (void*)0;
        map$2char$phsFun$ph_remove(info->funcs,(char* )come_increment_ref_count(__builtin_string(method_block_name), "24method.nc", 207, 576),(_Bool)0);
    }
        __result_obj__0 = (_Bool)1;
    ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 210, 577):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 210, 578);
    come_call_finalizer(buffer_finalize, method_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 210, 579);
    come_call_finalizer(sType_finalize, method_block_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 210, 580);
    (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 210, 581));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 210, 582);
    come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 210, 583);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 210, 584);
    come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 210, 585);
    come_call_finalizer(buffer_finalize, all_alhabet_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 210, 586);
    come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 210, 587);
    come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 210, 588);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 210, 589):(void*)0);
    (method_block_name = come_decrement_ref_count(method_block_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 210, 590));
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 210, 591);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sCurrentNode_finalize(struct sCurrentNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCurrentNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sCurrentNode_finalize", 2, 346));
    }
        neo_current_frame = fr.prev;
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCurrentNode_clone"; neo_current_frame = &fr;
    struct sCurrentNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sCurrentNode*  result  ;
    char*  __dec_obj43  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sCurrentNode* )come_increment_ref_count((struct sCurrentNode *)come_calloc(1, sizeof(struct sCurrentNode )*(1), "sCurrentNode_clone", 5, 347, "struct sCurrentNode* "), "sCurrentNode_clone", 5, 348);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj43=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sCurrentNode_clone", 7, 349, "char* "), "sCurrentNode_clone", 7, 351);
        __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0, (void*)0, "sCurrentNode_clone", 7, 350);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
        __result_obj__0 = result;
    come_call_finalizer(sCurrentNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sCurrentNode_clone}", 9, 352);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_push_back"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE*  __dec_obj44  ;
    struct list_item$1CVALUE$ph* litem_8;
    struct CVALUE*  __dec_obj45  ;
    struct list_item$1CVALUE$ph* litem_9;
    struct CVALUE*  __dec_obj46  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1613, 362);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1617, 363, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1617, 364);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj44=litem->item,
        litem->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1621, 366);
        come_call_finalizer(CVALUE_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1621, 365);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_8=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1627, 367, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1627, 368);
        litem_8->prev=self->head;
        litem_8->next=((void*)0);
        __dec_obj45=litem_8->item,
        litem_8->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1631, 370);
        come_call_finalizer(CVALUE_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1631, 369);
        self->tail=litem_8;
        self->head->next=litem_8;
    }
    else {
        __right_value0 = (void*)0;
        litem_9=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1637, 371, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1637, 372);
        litem_9->prev=self->tail;
        litem_9->next=((void*)0);
        __dec_obj46=litem_9->item,
        litem_9->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1641, 374);
        come_call_finalizer(CVALUE_finalize, __dec_obj46,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1641, 373);
        self->tail->next=litem_9;
        self->tail=litem_9;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1649, 375);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void CVALUE_finalize(struct CVALUE*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 2, 357));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "CVALUE_finalize}", 3, 358);
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 4, 359));
    }
    if(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 5, 360));
    }
    if(self!=((void*)0)&&self->c_value_without_null_checker!=((void*)0)) {
        (self->c_value_without_null_checker = come_decrement_ref_count(self->c_value_without_null_checker, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 6, 361));
    }
            neo_current_frame = fr.prev;
}

static struct sType*  list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    struct list_item$1sType$ph* it;
    int i;
    struct sType*  default_value_10  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType* ));
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2148, 380);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 381);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 382);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2151, 383);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sType* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2159, 384);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2159, 385);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_10,0,sizeof(struct sType* ));
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_10, "/usr/local/include/neo-c.h", 2167, 386);
    come_call_finalizer(sType_finalize, default_value_10, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 387);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 388);
    return __result_obj__0;
}

static struct sType*  list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    struct list_item$1sType$ph* it;
    int i;
    struct sType*  default_value_11  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType* ));
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2148, 389);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 390);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 391);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2151, 392);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sType* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2159, 393);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2159, 394);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_11,0,sizeof(struct sType* ));
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_11, "/usr/local/include/neo-c.h", 2167, 395);
    come_call_finalizer(sType_finalize, default_value_11, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 396);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 397);
    return __result_obj__0;
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
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3513, 401);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 410);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 411);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3524, 412);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3524, 413);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3524, 414);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3533, 415);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 416);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 417);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3537, 418);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 419);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 420);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3541, 421);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 422);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 423);
    return __result_obj__0;
}

static void sClass_finalize(struct sClass*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sClass_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 2, 402));
    }
    if(self!=((void*)0)&&self->mFields!=((void*)0)) {
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self->mFields, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sClass_finalize}", 3, 407);
    }
    if(self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 4, 408));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 5, 409));
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
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 406);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsType$ph$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsType$ph$ph$p_finalize}", 2, 405);
    }
            neo_current_frame = fr.prev;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize", 2, 403));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize}", 3, 404);
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
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3513, 424);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 425);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 426);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3524, 427);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3524, 428);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3524, 429);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3533, 430);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 431);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 432);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3537, 433);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 434);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 435);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3541, 436);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 437);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 438);
    return __result_obj__0;
}

static struct sType*  list$1sType$ph_begin(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_begin"; neo_current_frame = &fr;
    struct sType*  result  ;
    struct sType*  __result_obj__0  ;
    struct sType*  result_12  ;
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
    memset(&result_12,0,sizeof(struct sType* ));
        __result_obj__0 = result_12;
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
    struct sType*  result_13  ;
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
    memset(&result_13,0,sizeof(struct sType* ));
        __result_obj__0 = result_13;
    neo_current_frame = fr.prev;
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

static struct span$1buffer$p* span$1buffer$p_initialize(struct span$1buffer$p* self, void* head, unsigned long  int  len  , _Bool local, _Bool heap, _Bool global, void* stacktop)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "span$1buffer$p_initialize"; neo_current_frame = &fr;
    struct span$1buffer$p* __result_obj__0;
    if(!1) {
        puts("invalid span");
        stackframe2(self);
        exit(2);
    }
    self->memory=(char*)head;
    self->p=(struct buffer* )head;
    self->len=len;
    self->local=local;
    self->heap=heap;
    self->global=global;
    self->stacktop=stacktop;
        __result_obj__0 = (struct span$1buffer$p*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1024, 473);
    come_call_finalizer(span$1buffer$p$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1024, 474);
    neo_current_frame = fr.prev;
    come_call_finalizer(span$1buffer$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1024, 475);
    return __result_obj__0;
}

static void span$1buffer$p$p_finalize(struct span$1buffer$p* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "span$1buffer$p$p_finalize"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
}

static void span$1char$p$p_finalize(struct span$1char$p* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "span$1char$p$p_finalize"; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

static struct sFun*  map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char*  key  , struct sFun*  default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_at"; neo_current_frame = &fr;
    struct sFun*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3139, 498);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3139, 525);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3139, 526);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3150, 527);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3150, 528);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3150, 529);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3159, 530);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3159, 531);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3159, 532);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3163, 533);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3163, 534);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3163, 535);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3167, 536);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3167, 537);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3167, 538);
    return __result_obj__0;
}

static void sFun_finalize(struct sFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 2, 499));
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 3, 500);
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 4, 501);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 5, 502);
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 6, 503);
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 7, 504);
    }
    if(self!=((void*)0)&&self->mAllVar!=((void*)0)) {
        come_call_finalizer(list$1sVar$ph$p_finalize, self->mAllVar, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 8, 511);
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 9, 514);
    }
    if(self!=((void*)0)&&self->mTextBlock!=((void*)0)) {
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 10, 515));
    }
    if(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)) {
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 11, 516));
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 12, 517);
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 13, 518);
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 14, 519);
    }
    if(self!=((void*)0)&&self->mSourceEnd!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceEnd, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 15, 520);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 16, 521));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 17, 522));
    }
    if(self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 18, 523));
    }
    if(self!=((void*)0)&&self->mAsmFun!=((void*)0)) {
        (self->mAsmFun = come_decrement_ref_count(self->mAsmFun, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 19, 524));
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
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 510);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sVar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sVar$ph$p_finalize}", 2, 509);
    }
            neo_current_frame = fr.prev;
}

static void sVar_finalize(struct sVar*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 2, 505));
    }
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 3, 506));
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_finalize}", 4, 507);
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 5, 508));
    }
            neo_current_frame = fr.prev;
}

static void sBlock_finalize(struct sBlock*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 2, 512);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 3, 513);
    }
            neo_current_frame = fr.prev;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_remove"; neo_current_frame = &fr;
    struct map$2char$phsFun$ph* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3173, 568));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                self->item_existance[it]=(_Bool)0;
                if(1) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3188, 573));
                }
                self->keys[it]=((void*)0);
                if(1) {
                    come_call_finalizer(sFun_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3193, 574);
                }
                memset(self->items+it,0,sizeof(struct sFun* ));
                self->len--;
                break;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                break;
            }
        }
        else {
            break;
        }
    }
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3215, 575));
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
    struct list_item$1char$ph* it_18;
    int i_19;
    struct list_item$1char$ph* prev_it_20;
    struct list_item$1char$ph* it_21;
    struct list_item$1char$ph* head_prev_it;
    struct list_item$1char$ph* tail_it;
    int i_22;
    struct list_item$1char$ph* prev_it_23;
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
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1932, 570);
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
        it_18=self->head;
        i_19=0;
        while(it_18!=((void*)0)) {
            if(i_19==head) {
                self->tail=it_18->prev;
                self->tail->next=((void*)0);
            }
            if(i_19>=head) {
                prev_it_20=it_18;
                it_18=it_18->next;
                i_19++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_20, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1962, 571);
                self->len--;
            }
            else {
                it_18=it_18->next;
                i_19++;
            }
        }
    }
    else {
        it_21=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_22=0;
        while(it_21!=((void*)0)) {
            if(i_22==head) {
                head_prev_it=it_21->prev;
            }
            if(i_22==tail) {
                tail_it=it_21;
            }
            if(i_22>=head&&i_22<tail) {
                prev_it_23=it_21;
                it_21=it_21->next;
                i_22++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_23, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1995, 572);
                self->len--;
            }
            else {
                it_21=it_21->next;
                i_22++;
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1854, 569);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct tuple3$3char$phsFun$psGenericsFun$p* get_method(const char* fun_name, struct sType*  obj_type  , struct sInfo*  info  , _Bool no_make_generics_function)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "get_method"; neo_current_frame = &fr;
    char*  generics_fun_name  ;
    struct sFun*  fun  ;
    struct sGenericsFun*  generics_fun  ;
    void* __right_value0 = (void*)0;
    char*  fun_name2  ;
    struct sClass*  klass  ;
    _Bool _conditional_value_X0;
    char*  __dec_obj54  ;
    void* __right_value1 = (void*)0;
    char*  __dec_obj55  ;
    struct tuple2$2char$phsGenericsFun$p* multiple_assign_var2
;    char*  name  =0;
    struct sGenericsFun*  gfun  =0;
    char*  __dec_obj56  ;
    char*  none_generics_name  ;
    char*  fun_name3  ;
    struct tuple2$2char$phsGenericsFun$p* multiple_assign_var3
;    char*  name_24  =0;
    struct sGenericsFun*  gfun_25  =0;
    char*  __dec_obj57  ;
    char*  __dec_obj58  ;
    struct tuple2$2char$phsGenericsFun$p* multiple_assign_var4
;    char*  name_26  =0;
    struct sGenericsFun*  gfun_27  =0;
    char*  __dec_obj59  ;
    int i;
    char*  new_fun_name  ;
    void* __right_value2 = (void*)0;
    char*  __dec_obj60  ;
    struct sType*  obj_array_type  ;
    char*  array_method_name  ;
    char*  __dec_obj61  ;
    char*  __dec_obj62  ;
    struct tuple3$3char$phsFun$psGenericsFun$p* __result_obj__0;
    char*  __dec_obj64  ;
    struct sClass*  klass_28  ;
    _Bool _conditional_value_X1;
    char*  __dec_obj65  ;
    struct tuple2$2sFun$pchar$ph* multiple_assign_var5
;    struct sFun*  fun2  =0;
    char*  real_fun_name  =0;
    char*  __dec_obj66  ;
    struct tuple2$2sFun$pchar$ph* multiple_assign_var6
;    struct sFun*  fun2_29  =0;
    char*  real_fun_name_30  =0;
    char*  __dec_obj67  ;
    struct tuple2$2sFun$pchar$ph* multiple_assign_var7
;    struct sFun*  fun2_31  =0;
    char*  real_fun_name_32  =0;
    char*  __dec_obj68  ;
    struct tuple2$2sFun$pchar$ph* multiple_assign_var8
;    struct sFun*  fun2_33  =0;
    char*  real_fun_name_34  =0;
    char*  __dec_obj69  ;
    char*  original_obj_type_fun_name  ;
    char*  __dec_obj70  ;
    generics_fun_name=((void*)0);
    fun=((void*)0);
    generics_fun=((void*)0);
    if(charp_operator_equals(fun_name,"super")) {
        fun_name2=(char* )come_increment_ref_count(create_non_method_name(obj_type,(_Bool)0,info->come_fun->mName,info,(_Bool)1), "24method.nc", 220, 592);
        klass=obj_type->mClass;
        while(__right_value0 = (void*)0,
({(_conditional_value_X0=(klass->mParentClassName&&((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mParentClassName)))));        come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 223, 593);
_conditional_value_X0;})) {
            __right_value0 = (void*)0;
            klass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mParentClassName)));
            __right_value0 = (void*)0;
            __dec_obj54=generics_fun_name,
            generics_fun_name=(char* )come_increment_ref_count(create_method_name_using_class(klass,fun_name2,info), "24method.nc", 225, 595);
            __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0, (void*)0, "24method.nc", 225, 594);
            __right_value0 = (void*)0;
            fun=((struct sFun* )(__right_value1=map$2char$phsFun$ph_at(info->funcs,((char* )(__right_value0=__builtin_string(generics_fun_name))),((void*)0),(_Bool)0)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 227, 596));
            if(fun) {
                break;
            }
        }
        (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 360, 597));
    }
    else {
        if(obj_type&&obj_type->mNoSolvedGenericsType&&list$1sType$ph_length(obj_type->mNoSolvedGenericsType->mGenericsTypes)>0) {
            if(no_make_generics_function) {
                __dec_obj55=generics_fun_name,
                generics_fun_name=name;
                __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0, "24method.nc", 237, 598);
            }
            else {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                multiple_assign_var2=((struct tuple2$2char$phsGenericsFun$p*)(__right_value1=make_generics_function(obj_type,(char* )come_increment_ref_count(__builtin_string(fun_name), "24method.nc", 240, 599),info,(_Bool)1)));
                name=(char* )come_increment_ref_count(multiple_assign_var2->v1, "24method.nc", 240, 600);
                gfun=multiple_assign_var2->v2;
                come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 240, 601);
                __dec_obj56=generics_fun_name,
                generics_fun_name=(char* )come_increment_ref_count(name, "24method.nc", 241, 603);
                __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0, (void*)0, "24method.nc", 241, 602);
                generics_fun=gfun;
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 244, 604));
            }
        }
        else if(info->method_generics_types&&list$1sType$ph_length(info->method_generics_types)>0) {
            __right_value0 = (void*)0;
            none_generics_name=(char* )come_increment_ref_count(get_none_generics_name(obj_type->mClass->mName), "24method.nc", 246, 605);
            __right_value0 = (void*)0;
            fun_name3=(char* )come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name), "24method.nc", 247, 606);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            multiple_assign_var3=((struct tuple2$2char$phsGenericsFun$p*)(__right_value1=make_method_generics_function((char* )come_increment_ref_count(__builtin_string(fun_name3), "24method.nc", 248, 607),info->method_generics_types,info)));
            name_24=(char* )come_increment_ref_count(multiple_assign_var3->v1, "24method.nc", 248, 608);
            gfun_25=multiple_assign_var3->v2;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 248, 609);
            __dec_obj57=generics_fun_name,
            generics_fun_name=(char* )come_increment_ref_count(name_24, "24method.nc", 249, 611);
            __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0, "24method.nc", 249, 610);
            generics_fun=gfun_25;
            (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 263, 612));
            (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 263, 613));
            (name_24 = come_decrement_ref_count(name_24, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 263, 614));
        }
        else {
            if(no_make_generics_function) {
                __dec_obj58=generics_fun_name,
                generics_fun_name=name;
                __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0, (void*)0, "24method.nc", 254, 615);
            }
            else {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                multiple_assign_var4=((struct tuple2$2char$phsGenericsFun$p*)(__right_value1=make_generics_function(obj_type,(char* )come_increment_ref_count(__builtin_string(fun_name), "24method.nc", 257, 616),info,(_Bool)1)));
                name_26=(char* )come_increment_ref_count(multiple_assign_var4->v1, "24method.nc", 257, 617);
                gfun_27=multiple_assign_var4->v2;
                come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 257, 618);
                __dec_obj59=generics_fun_name,
                generics_fun_name=(char* )come_increment_ref_count(name_26, "24method.nc", 258, 620);
                __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0, (void*)0, "24method.nc", 258, 619);
                generics_fun=gfun_27;
                (name_26 = come_decrement_ref_count(name_26, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 261, 621));
            }
        }
        for(i=128        ;i>=1;i--){
            __right_value0 = (void*)0;
            new_fun_name=(char* )come_increment_ref_count(xsprintf("%s_v%d",generics_fun_name,i), "24method.nc", 264, 622);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            fun=((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char* )(__right_value1=__builtin_string(new_fun_name))))));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 266, 653));
            if(fun!=((void*)0)) {
                __right_value0 = (void*)0;
                __dec_obj60=generics_fun_name,
                generics_fun_name=(char* )come_increment_ref_count(__builtin_string(new_fun_name), "24method.nc", 269, 655);
                __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0, (void*)0, "24method.nc", 269, 654);
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 270, 656));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 274, 657));
        }
        if(fun==((void*)0)) {
            obj_array_type=obj_type->mOriginalLoadVarType;
            if(obj_array_type&&list$1sNode$ph_length(obj_array_type->mArrayNum)>0) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                array_method_name=(char* )come_increment_ref_count(create_method_name(((struct sType* )(__right_value0=sType_clone(obj_array_type))),(_Bool)0,fun_name,info,(_Bool)0), "24method.nc", 278, 658);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 278, 659);
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                fun=((struct sFun* )(__right_value1=map$2char$phsFun$ph_at(info->funcs,((char* )(__right_value0=__builtin_string(array_method_name))),((void*)0),(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 280, 660));
                if(fun) {
                    __right_value0 = (void*)0;
                    __dec_obj61=generics_fun_name,
                    generics_fun_name=(char* )come_increment_ref_count(__builtin_string(array_method_name), "24method.nc", 283, 662);
                    __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0, (void*)0, "24method.nc", 283, 661);
                }
                else {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    fun=((struct sFun* )(__right_value1=map$2char$phsFun$ph_at(info->funcs,((char* )(__right_value0=__builtin_string(generics_fun_name))),((void*)0),(_Bool)0)));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 286, 663));
                    if(fun==((void*)0)) {
                        __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        __dec_obj62=generics_fun_name,
                        generics_fun_name=(char* )come_increment_ref_count(create_method_name(obj_type,(_Bool)0,((char* )(__right_value0=__builtin_string(fun_name))),info,(_Bool)1), "24method.nc", 289, 665);
                        __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0, (void*)0, "24method.nc", 289, 664);
                        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 289, 666));
                        __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        fun=((struct sFun* )(__right_value1=map$2char$phsFun$ph_at(info->funcs,((char* )(__right_value0=__builtin_string(generics_fun_name))),((void*)0),(_Bool)0)));
                        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 290, 667));
                        if(fun==((void*)0)) {
                                                        __right_value0 = (void*)0;
                            __right_value1 = (void*)0;
                            __result_obj__0 = (struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count(((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value1=tuple3$3char$phsFun$psGenericsFun$p_initialize((struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count((struct tuple3$3char$phsFun$psGenericsFun$p*)come_calloc(1, sizeof(struct tuple3$3char$phsFun$psGenericsFun$p)*(1), "24method.nc", 292, 668, "struct tuple3$3char$phsFun$psGenericsFun$p"), "24method.nc", 292, 676),(char* )come_increment_ref_count((char* )((void*)0), "24method.nc", 292, 677),(struct sFun* )((void*)0),(struct sGenericsFun* )((void*)0)))), "24method.nc", 292, 678);
                            (array_method_name = come_decrement_ref_count(array_method_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 292, 679));
                            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 292, 680));
                            come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 292, 681);
                            neo_current_frame = fr.prev;
                            come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "24method.nc}", 292, 682);
                            return __result_obj__0;
                        }
                    }
                }
                (array_method_name = come_decrement_ref_count(array_method_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 357, 683));
            }
            else {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                fun=((struct sFun* )(__right_value1=map$2char$phsFun$ph_at(info->funcs,((char* )(__right_value0=__builtin_string(generics_fun_name))),((void*)0),(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 298, 684));
                if(fun==((void*)0)) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __dec_obj64=generics_fun_name,
                    generics_fun_name=(char* )come_increment_ref_count(create_method_name(obj_type,(_Bool)0,((char* )(__right_value0=__builtin_string(fun_name))),info,(_Bool)1), "24method.nc", 301, 686);
                    __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0, (void*)0, "24method.nc", 301, 685);
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 301, 687));
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    fun=((struct sFun* )(__right_value1=map$2char$phsFun$ph_at(info->funcs,((char* )(__right_value0=__builtin_string(generics_fun_name))),((void*)0),(_Bool)0)));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 303, 688));
                    if(fun==((void*)0)) {
                        klass_28=obj_type->mClass;
                        while(__right_value0 = (void*)0,
({(_conditional_value_X1=(klass_28->mParentClassName&&((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass_28->mParentClassName)))));                        come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 307, 689);
_conditional_value_X1;})) {
                            __right_value0 = (void*)0;
                            klass_28=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass_28->mParentClassName)));
                            __right_value0 = (void*)0;
                            __dec_obj65=generics_fun_name,
                            generics_fun_name=(char* )come_increment_ref_count(create_method_name_using_class(klass_28,fun_name,info), "24method.nc", 309, 691);
                            __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0, (void*)0, "24method.nc", 309, 690);
                            __right_value0 = (void*)0;
                            __right_value1 = (void*)0;
                            fun=((struct sFun* )(__right_value1=map$2char$phsFun$ph_at(info->funcs,((char* )(__right_value0=__builtin_string(generics_fun_name))),((void*)0),(_Bool)0)));
                            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 311, 692));
                            if(fun) {
                                break;
                            }
                        }
                    }
                    if(fun==((void*)0)&&charp_operator_equals(fun_name,"to_string")) {
                        __right_value0 = (void*)0;
                        multiple_assign_var5=((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_to_string_automatically(obj_type,fun_name,info)));
                        fun2=multiple_assign_var5->v1;
                        real_fun_name=(char* )come_increment_ref_count(multiple_assign_var5->v2, "24method.nc", 320, 693);
                        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 320, 695);
                        fun=fun2;
                        __dec_obj66=generics_fun_name,
                        generics_fun_name=(char* )come_increment_ref_count(real_fun_name, "24method.nc", 323, 697);
                        __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0, (void*)0, "24method.nc", 323, 696);
                        (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 325, 698));
                    }
                    if(fun==((void*)0)&&charp_operator_equals(fun_name,"get_hash_key")) {
                        __right_value0 = (void*)0;
                        multiple_assign_var6=((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_get_hash_key_automatically(obj_type,fun_name,info)));
                        fun2_29=multiple_assign_var6->v1;
                        real_fun_name_30=(char* )come_increment_ref_count(multiple_assign_var6->v2, "24method.nc", 326, 699);
                        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 326, 700);
                        fun=fun2_29;
                        __dec_obj67=generics_fun_name,
                        generics_fun_name=(char* )come_increment_ref_count(real_fun_name_30, "24method.nc", 329, 702);
                        __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0, (void*)0, "24method.nc", 329, 701);
                        (real_fun_name_30 = come_decrement_ref_count(real_fun_name_30, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 331, 703));
                    }
                    if(fun==((void*)0)&&charp_operator_equals(fun_name,"equals")) {
                        __right_value0 = (void*)0;
                        multiple_assign_var7=((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_equals_automatically(obj_type,fun_name,info)));
                        fun2_31=multiple_assign_var7->v1;
                        real_fun_name_32=(char* )come_increment_ref_count(multiple_assign_var7->v2, "24method.nc", 332, 704);
                        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 332, 705);
                        __right_value0 = (void*)0;
                        fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name_32)));
                        __dec_obj68=generics_fun_name,
                        generics_fun_name=(char* )come_increment_ref_count(real_fun_name_32, "24method.nc", 335, 707);
                        __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0, (void*)0, "24method.nc", 335, 706);
                        (real_fun_name_32 = come_decrement_ref_count(real_fun_name_32, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 337, 708));
                    }
                    if(fun==((void*)0)&&charp_operator_equals(fun_name,"compare")) {
                        __right_value0 = (void*)0;
                        multiple_assign_var8=((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_compare_automatically(obj_type,fun_name,info)));
                        fun2_33=multiple_assign_var8->v1;
                        real_fun_name_34=(char* )come_increment_ref_count(multiple_assign_var8->v2, "24method.nc", 338, 709);
                        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 338, 710);
                        __right_value0 = (void*)0;
                        fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name_34)));
                        __dec_obj69=generics_fun_name,
                        generics_fun_name=(char* )come_increment_ref_count(real_fun_name_34, "24method.nc", 341, 712);
                        __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0, (void*)0, "24method.nc", 341, 711);
                        (real_fun_name_34 = come_decrement_ref_count(real_fun_name_34, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 343, 713));
                    }
                    if(fun==((void*)0)) {
                        __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        original_obj_type_fun_name=(char* )come_increment_ref_count(create_method_name_original_obj_type(obj_type,(_Bool)0,((char* )(__right_value0=__builtin_string(fun_name))),info,(_Bool)1), "24method.nc", 344, 714);
                        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 344, 715));
                        __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        fun=((struct sFun* )(__right_value1=map$2char$phsFun$ph_at(info->funcs,((char* )(__right_value0=__builtin_string(original_obj_type_fun_name))),((void*)0),(_Bool)0)));
                        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 345, 716));
                        if(fun) {
                            __dec_obj70=generics_fun_name,
                            generics_fun_name=(char* )come_increment_ref_count(original_obj_type_fun_name, "24method.nc", 348, 718);
                            __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0, (void*)0, "24method.nc", 348, 717);
                        }
                        (original_obj_type_fun_name = come_decrement_ref_count(original_obj_type_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 352, 719));
                    }
                    if(fun==((void*)0)) {
                                                __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        __result_obj__0 = (struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count(((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value1=tuple3$3char$phsFun$psGenericsFun$p_initialize((struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count((struct tuple3$3char$phsFun$psGenericsFun$p*)come_calloc(1, sizeof(struct tuple3$3char$phsFun$psGenericsFun$p)*(1), "24method.nc", 353, 720, "struct tuple3$3char$phsFun$psGenericsFun$p"), "24method.nc", 353, 721),(char* )come_increment_ref_count(generics_fun_name, "24method.nc", 353, 722),(struct sFun* )((void*)0),(struct sGenericsFun* )((void*)0)))), "24method.nc", 353, 723);
                        (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 353, 724));
                        come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 353, 725);
                        neo_current_frame = fr.prev;
                        come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "24method.nc}", 353, 726);
                        return __result_obj__0;
                    }
                }
            }
        }
    }
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count(((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value1=tuple3$3char$phsFun$psGenericsFun$p_initialize((struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count((struct tuple3$3char$phsFun$psGenericsFun$p*)come_calloc(1, sizeof(struct tuple3$3char$phsFun$psGenericsFun$p)*(1), "24method.nc", 360, 727, "struct tuple3$3char$phsFun$psGenericsFun$p"), "24method.nc", 360, 728),(char* )come_increment_ref_count(generics_fun_name, "24method.nc", 360, 729),fun,generics_fun))), "24method.nc", 360, 730);
    (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 360, 731));
    come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 360, 732);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "24method.nc}", 360, 733);
    return __result_obj__0;
}

static struct sFun*  map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sFun*  default_value  ;
    struct sFun*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sFun* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3513, 623);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 624);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 625);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3524, 626);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3524, 627);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3524, 628);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3533, 629);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 630);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 631);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3537, 632);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 633);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 634);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3541, 635);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 636);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 637);
    return __result_obj__0;
}

static struct sFun*  map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_operator_load_element"; neo_current_frame = &fr;
    struct sFun*  default_value  ;
    struct sFun*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sFun* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3513, 638);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 639);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 640);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3524, 641);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3524, 642);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3524, 643);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3533, 644);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 645);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 646);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3537, 647);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 648);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 649);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3541, 650);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 651);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 652);
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

static struct tuple3$3char$phsFun$psGenericsFun$p* tuple3$3char$phsFun$psGenericsFun$p_initialize(struct tuple3$3char$phsFun$psGenericsFun$p* self, char*  v1  , struct sFun*  v2  , struct sGenericsFun*  v3  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3char$phsFun$psGenericsFun$p_initialize"; neo_current_frame = &fr;
    char*  __dec_obj63  ;
    struct tuple3$3char$phsFun$psGenericsFun$p* __result_obj__0;
    __dec_obj63=self->v1,
    self->v1=(char* )come_increment_ref_count(v1, "/usr/local/include/neo-c.h", 3986, 670);
    __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 3986, 669);
    self->v2=v2;
    self->v3=v3;
        __result_obj__0 = (struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 3990, 671);
    come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3990, 673);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3990, 674));
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3990, 675);
    return __result_obj__0;
}

static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3char$phsFun$psGenericsFun$p$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple3$3char$phsFun$psGenericsFun$p$p_finalize", 2, 672));
    }
        neo_current_frame = fr.prev;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2sFun$pchar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2sFun$pchar$ph$p_finalize", 2, 694));
    }
                            neo_current_frame = fr.prev;
}

char*  get_method_from_iter_call(const char* fun_name, struct sType*  obj_type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "get_method_from_iter_call"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  none_generics_name  ;
    char*  fun_name3  ;
    char*  __result_obj__0  ;
    none_generics_name=(char* )come_increment_ref_count(get_none_generics_name(obj_type->mClass->mName), "24method.nc", 365, 734);
    __right_value0 = (void*)0;
    fun_name3=(char* )come_increment_ref_count(xsprintf("%s_iter_%s",none_generics_name,fun_name), "24method.nc", 366, 735);
        __result_obj__0 = (char* )come_increment_ref_count(fun_name3, "24method.nc", 368, 736);
    (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 368, 737));
    (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 1, (void*)0, "24method.nc", 368, 738));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "24method.nc", 368, 739));
    return __result_obj__0;
}

static _Bool call_cpp_method(char*  fun_name  , struct list$1tuple2$2char$phsNode$ph$ph* params, struct sNode* obj, struct sInfo*  info  , _Bool arrow_)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "call_cpp_method"; neo_current_frame = &fr;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  obj_value  ;
    void* __right_value1 = (void*)0;
    struct list$1CVALUE$ph* come_params;
    int i;
    struct list$1tuple2$2char$phsNode$ph$ph* _o2_saved_2;
    struct tuple2$2char$phsNode$ph* it;
    struct tuple2$2char$phsNode$ph* multiple_assign_var9
;    char*  label  =0;
    struct sNode* node=0;
    _Bool Value_37;
    struct CVALUE*  come_value  ;
    struct buffer*  buf  ;
    int j;
    struct list$1CVALUE$ph* _o2_saved_3;
    struct CVALUE*  it_39  ;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj71  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj72  ;
    Value=node_compile(obj,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 374, 740));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 374, 745);
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 374, 746):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    obj_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "24method.nc", 377, 747);
    __right_value0 = (void*)0;
    come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "24method.nc", 379, 748, "struct list$1CVALUE$ph*"), "24method.nc", 379, 754)), "24method.nc", 379, 755);
    i=0;
    for(_o2_saved_2=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params, "24method.nc", 382, 756),it=list$1tuple2$2char$phsNode$ph$ph_begin(_o2_saved_2)    ;!list$1tuple2$2char$phsNode$ph$ph_end(_o2_saved_2);it=list$1tuple2$2char$phsNode$ph$ph_next(_o2_saved_2)){
        multiple_assign_var9=it;
        label=(char* )come_increment_ref_count(multiple_assign_var9->v1, "24method.nc", 383, 757);
        node=(struct sNode*)come_increment_ref_count(multiple_assign_var9->v2, "24method.nc", 383, 758);
        if(i==0) {
            i++;
        }
        else {
            Value_37=node_compile(node,info);
            if(!Value_37) {
                                __result_obj__0 = (_Bool)0;
                (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 390, 759));
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 390, 760):(void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 390, 761));
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 390, 762);
                ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 390, 763):(void*)0);
                come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 390, 764);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 390, 765);
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 390, 766);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "24method.nc", 393, 767);
            list$1CVALUE$ph_push_back(come_params,(struct CVALUE* )come_increment_ref_count(come_value, "24method.nc", 395, 768));
            i++;
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 399, 769);
        }
        (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 402, 770));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 402, 771):(void*)0);
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "24method.nc", 402, 772, "struct buffer* "), "24method.nc", 402, 773)), "24method.nc", 402, 774);
    if(arrow_) {
        buffer_append_format(buf,"%s->%s",obj_value->c_value,fun_name);
    }
    else {
        buffer_append_format(buf,"%s.%s",obj_value->c_value,fun_name);
    }
    buffer_append_str(buf,"(");
    j=0;
    for(_o2_saved_3=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params, "24method.nc", 413, 775),it_39=list$1CVALUE$ph_begin(_o2_saved_3)    ;!list$1CVALUE$ph_end(_o2_saved_3);it_39=list$1CVALUE$ph_next(_o2_saved_3)){
        if(j==0) {
        }
        buffer_append_str(buf,it_39->c_value);
        if(j!=list$1CVALUE$ph_length(come_params)-1) {
            buffer_append_str(buf,",");
        }
        j++;
    }
    buffer_append_str(buf,")");
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "24method.nc", 426, 776, "struct CVALUE* "), "24method.nc", 426, 777)), "24method.nc", 426, 778);
    __right_value0 = (void*)0;
    __dec_obj71=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(buffer_to_string(buf), "24method.nc", 428, 780);
    __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0, (void*)0, "24method.nc", 428, 779);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj72=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "24method.nc", 429, 781, "struct sType* "), "24method.nc", 429, 782),(char*)come_increment_ref_count(xsprintf("long"), "24method.nc", 429, 783),(_Bool)0,info,(_Bool)0,0), "24method.nc", 429, 785);
    come_call_finalizer(sType_finalize, __dec_obj72,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 429, 784);
    come_value2->var=((void*)0);
    add_come_last_code(info,"%s",come_value2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "24method.nc", 433, 786));
        __result_obj__0 = (_Bool)1;
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 435, 787));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 435, 788);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 435, 789):(void*)0);
    come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 435, 790);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 435, 791);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 435, 792);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 435, 793);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 435, 794);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 435, 795);
    neo_current_frame = fr.prev;
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
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 744);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize}", 2, 743);
    }
            neo_current_frame = fr.prev;
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsNode$ph$p_finalize", 2, 741));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0, "tuple2$2char$phsNode$ph$p_finalize", 3, 742):(void*)0);
    }
            neo_current_frame = fr.prev;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_initialize"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1CVALUE$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1483, 749);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 752);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1CVALUE$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 753);
    return __result_obj__0;
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
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 751);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1CVALUE$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(CVALUE_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1CVALUE$ph$p_finalize}", 2, 750);
    }
            neo_current_frame = fr.prev;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_begin"; neo_current_frame = &fr;
    struct tuple2$2char$phsNode$ph* result;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    struct tuple2$2char$phsNode$ph* result_35;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct tuple2$2char$phsNode$ph*));
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
    memset(&result_35,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__0 = result_35;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_end"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
        neo_current_frame = fr.prev;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_next"; neo_current_frame = &fr;
    struct tuple2$2char$phsNode$ph* result;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    struct tuple2$2char$phsNode$ph* result_36;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(struct tuple2$2char$phsNode$ph*));
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
    memset(&result_36,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__0 = result_36;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct CVALUE*  list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_begin"; neo_current_frame = &fr;
    struct CVALUE*  result  ;
    struct CVALUE*  __result_obj__0  ;
    struct CVALUE*  result_38  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct CVALUE* ));
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
    memset(&result_38,0,sizeof(struct CVALUE* ));
        __result_obj__0 = result_38;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_end"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
        neo_current_frame = fr.prev;
}

static struct CVALUE*  list$1CVALUE$ph_next(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_next"; neo_current_frame = &fr;
    struct CVALUE*  result  ;
    struct CVALUE*  __result_obj__0  ;
    struct CVALUE*  result_40  ;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(struct CVALUE* ));
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
    memset(&result_40,0,sizeof(struct CVALUE* ));
        __result_obj__0 = result_40;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_length"; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return self->len;
            neo_current_frame = fr.prev;
}

struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, const char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer*  method_block  , int method_block_sline, struct list$1sType$ph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, struct sInfo*  info  , _Bool arrow_)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMethodCallNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj73;
    char*  __dec_obj74  ;
    struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj80;
    struct buffer*  __dec_obj81  ;
    struct list$1sType$ph* __dec_obj82;
    struct sMethodCallNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sMethodCallNode*)come_increment_ref_count(self, "24method.nc", 444, 796),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 444, 798);
    __right_value0 = (void*)0;
    __dec_obj73=self->obj,
    self->obj=(struct sNode*)come_increment_ref_count(sNode_clone(obj), "24method.nc", 446, 800);
    (__dec_obj73 ? __dec_obj73 = come_decrement_ref_count(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0, (void*)0, "24method.nc", 446, 799) :0);
    __right_value0 = (void*)0;
    __dec_obj74=self->fun_name,
    self->fun_name=(char* )come_increment_ref_count(__builtin_string(fun_name), "24method.nc", 447, 802);
    __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0, (void*)0, "24method.nc", 447, 801);
    __right_value0 = (void*)0;
    __dec_obj80=self->params,
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(params), "24method.nc", 448, 846);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj80,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 448, 845);
    __right_value0 = (void*)0;
    __dec_obj81=self->method_block,
    self->method_block=(struct buffer* )come_increment_ref_count(buffer_clone(method_block), "24method.nc", 449, 848);
    come_call_finalizer(buffer_finalize, __dec_obj81,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 449, 847);
    self->method_block_sline=method_block_sline;
    __right_value0 = (void*)0;
    __dec_obj82=self->method_generics_types,
    self->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(method_generics_types), "24method.nc", 451, 850);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj82,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 451, 849);
    self->no_infference_method_generics=no_infference_method_generics;
    self->recursive=recursive;
    self->fun=((void*)0);
    self->arrow_=arrow_;
        __result_obj__0 = (struct sMethodCallNode*)come_increment_ref_count(self, "24method.nc", 458, 851);
    come_call_finalizer(sMethodCallNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "24method.nc}", 458, 858);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 458, 859):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sMethodCallNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "24method.nc}", 458, 860);
    return __result_obj__0;
}

_Bool sMethodCallNode_terminated(struct sMethodCallNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMethodCallNode_terminated"; neo_current_frame = &fr;
    if(self->method_block) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    neo_current_frame = fr.prev;
}

char*  sMethodCallNode_kind(struct sMethodCallNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMethodCallNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sMethodCallNode"))), "24method.nc", 470, 861);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 470, 862));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "24method.nc", 470, 863));
    return __result_obj__0;
}

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMethodCallNode_compile"; neo_current_frame = &fr;
    char*  fun_name  ;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    void* __right_value0 = (void*)0;
    struct sNode* obj;
    struct buffer*  method_block  ;
    int method_block_sline;
    struct list$1sType$ph* method_generics_types;
    _Bool recursive;
    _Bool no_infference_method_generics;
    _Bool arrow_;
    struct list$1sType$ph* method_generics_types_43;
    struct list$1sType$ph* __dec_obj83;
    _Bool Value;
    _Bool __result_obj__0;
    struct CVALUE*  obj_value  ;
    struct sType*  obj_type  ;
    _Bool no_output_come_code;
    struct sType*  type  ;
    char*  none_generics_name  ;
    char*  fun_name2  ;
    char*  fun_name3  ;
    struct sGenericsFun*  generics_fun  ;
    _Bool method_generics;
    void* __right_value1 = (void*)0;
    struct tuple2$2char$phsGenericsFun$p* multiple_assign_var10
;    char*  name  =0;
    struct sGenericsFun*  gfun  =0;
    char*  generics_fun_name  ;
    struct sFun*  fun  ;
    struct list$1CVALUE$ph* come_params;
    _Bool no_output_come_code_44;
    struct CVALUE*  method_block_node  ;
    struct sType*  method_block_lambda_type  ;
    struct sType*  method_block_result_type  ;
    struct sType*  generics_fun_method_block_lambda_type  ;
    struct sType*  generics_fun_method_block_result_type  ;
    int method_generics_num;
    int n;
    struct list$1sType$ph* _o2_saved_4;
    struct sType*  it  ;
    int method_generics_num_50;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    struct list$1CVALUE$ph* come_params_51;
    int i;
    struct list$1tuple2$2char$phsNode$ph$ph* _o2_saved_5;
    struct tuple2$2char$phsNode$ph* it_52;
    struct tuple2$2char$phsNode$ph* multiple_assign_var11
;    char*  label  =0;
    struct sNode* node=0;
    _Bool Value_53;
    struct CVALUE*  come_value  ;
    struct sType*  __dec_obj88  ;
    int method_generics_num_54;
    struct list$1sType$ph* _o2_saved_6;
    struct sType*  it_55  ;
    int method_generics_num_56;
    struct list$1CVALUE$ph* come_params_57;
    int i_58;
    struct list$1tuple2$2char$phsNode$ph$ph* _o2_saved_7;
    struct tuple2$2char$phsNode$ph* it_59;
    struct tuple2$2char$phsNode$ph* multiple_assign_var12
;    char*  label_60  =0;
    struct sNode* node_61=0;
    _Bool Value_62;
    struct CVALUE*  come_value_63  ;
    struct sType*  __dec_obj89  ;
    int method_generics_num_64;
    int n_65;
    struct list$1sType$ph* _o2_saved_8;
    struct sType*  it_66  ;
    int method_generics_num_67;
    struct sClass*  klass  ;
    _Bool calling_dynamic_method;
    struct sType*  lambda_type  ;
    struct list$1tuple2$2char$phsType$ph$ph* _o2_saved_9;
    struct tuple2$2char$phsType$ph* it_69;
    struct tuple2$2char$phsType$ph* multiple_assign_var13
;    char*  field_name  =0;
    struct sType*  field_type  =0;
    struct sType*  result_type  ;
    struct list$1CVALUE$ph* come_params_71;
    int i_72;
    struct list$1tuple2$2char$phsNode$ph$ph* _o2_saved_10;
    struct tuple2$2char$phsNode$ph* it_73;
    struct tuple2$2char$phsNode$ph* multiple_assign_var14
;    char*  label_74  =0;
    struct sNode* node_75=0;
    _Bool Value_76;
    struct CVALUE*  come_value_77  ;
    struct sType*  __dec_obj90  ;
    _Bool _conditional_value_X0;
    struct buffer*  buf  ;
    int j;
    struct list$1CVALUE$ph* _o2_saved_11;
    struct CVALUE*  it_78  ;
    char*  __dec_obj91  ;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj92  ;
    struct sType*  result_type2  ;
    struct sType*  __dec_obj93  ;
    struct list$1sType$ph* __dec_obj94;
    struct tuple3$3char$phsFun$psGenericsFun$p* multiple_assign_var15
;    char*  generics_fun_name_79  =0;
    struct sFun*  fun_80  =0;
    struct sGenericsFun*  generics_fun_81  =0;
    struct sType*  result_type_82  ;
    struct sType*  __dec_obj95  ;
    struct list$1sType$ph* param_types;
    struct list$1sType$ph* _o2_saved_12;
    struct sType*  it_83  ;
    struct sType*  it2  ;
    struct sType*  no_solved_obj_type  ;
    struct sType*  it3  ;
    struct list$1sType$ph* type_checking_param_types;
    int n_84;
    struct list$1sType$ph* _o2_saved_13;
    struct sType*  it_85  ;
    struct sType*  no_solved_obj_type_86  ;
    struct sType*  it3_87  ;
    struct list$1CVALUE$ph* come_params_88;
    int i_89;
    _Bool first_param;
    struct list$1tuple2$2char$phsNode$ph$ph* _o2_saved_14;
    struct tuple2$2char$phsNode$ph* it_92;
    struct tuple2$2char$phsNode$ph* multiple_assign_var16
;    char*  label_93  =0;
    struct sNode* node_94=0;
    int n_95;
    _Bool check;
    struct list$1char$ph* _o2_saved_15;
    char*  it_97  ;
    _Bool Value_99;
    struct CVALUE*  come_value_100  ;
    struct sType*  __dec_obj99  ;
    _Bool _conditional_value_X1;
    _Bool _conditional_value_X2;
    int i_102;
    struct list$1tuple2$2char$phsNode$ph$ph* _o2_saved_16;
    struct tuple2$2char$phsNode$ph* it_103;
    struct tuple2$2char$phsNode$ph* multiple_assign_var17
;    char*  label_104  =0;
    struct sNode* node_105=0;
    _Bool _conditional_value_X3;
    _Bool _conditional_value_X4;
    _Bool _conditional_value_X5;
    _Bool Value_108;
    struct CVALUE*  come_value_109  ;
    struct sType*  __dec_obj101  ;
    _Bool _conditional_value_X6;
    _Bool _conditional_value_X7;
    _Bool _conditional_value_X8;
    char*  default_param  ;
    char* param_name;
    _Bool _conditional_value_X9;
    struct buffer*  source  ;
    char* p;
    char* head;
    int sline;
    struct buffer*  __dec_obj102  ;
    struct span$1char$p* __dec_obj103;
    _Bool no_output_come_code_110;
    struct sNode* node_111;
    _Bool Value_112;
    struct buffer*  __dec_obj104  ;
    struct span$1char$p* __dec_obj105;
    struct CVALUE*  come_value_113  ;
    struct sType*  __dec_obj106  ;
    _Bool _conditional_value_X10;
    _Bool _conditional_value_X11;
    _Bool _conditional_value_X12;
    struct buffer*  buf_114  ;
    char*  saved_obj_value  ;
    struct sVar*  saved_var  ;
    char*  var_name  ;
    struct sType*  type_116  ;
    struct sVar*  var_  ;
    char*  __dec_obj107  ;
    int j_117;
    struct list$1CVALUE$ph* _o2_saved_17;
    struct CVALUE*  it_118  ;
    int j_119;
    struct list$1CVALUE$ph* _o2_saved_18;
    struct CVALUE*  it_120  ;
    struct CVALUE*  come_value2_121  ;
    char*  __dec_obj108  ;
    struct sType*  __dec_obj109  ;
    struct list$1sType$ph* __dec_obj110;
    fun_name=(char* )come_increment_ref_count(self->fun_name, "24method.nc", 475, 864);
    params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self->params, "24method.nc", 476, 865);
    obj=(struct sNode*)come_increment_ref_count(create_heap_checker((struct sNode*)come_increment_ref_count(self->obj, "24method.nc", 477, 866),info), "24method.nc", 477, 867);
    method_block=(struct buffer* )come_increment_ref_count(self->method_block, "24method.nc", 478, 868);
    method_block_sline=self->method_block_sline;
    method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(self->method_generics_types, "24method.nc", 480, 869);
    recursive=self->recursive;
    no_infference_method_generics=self->no_infference_method_generics;
    arrow_=self->arrow_;
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 485, 870);
    method_generics_types_43=(struct list$1sType$ph*)come_increment_ref_count(info->method_generics_types, "24method.nc", 485, 871);
    __right_value0 = (void*)0;
    __dec_obj83=info->method_generics_types,
    info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->method_generics_types), "24method.nc", 486, 873);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj83,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 486, 872);
    Value=node_compile(obj,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 489, 874));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 489, 875);
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 489, 876):(void*)0);
        come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 489, 877);
        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 489, 878);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    obj_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "24method.nc", 492, 879);
    __right_value0 = (void*)0;
    obj_type=(struct sType* )come_increment_ref_count(sType_clone(obj_value->type), "24method.nc", 494, 880);
    if(string_operator_equals(obj_type->mClass->mName,"void")&&obj_type->mPointerNum==1) {
                __result_obj__0 = call_cpp_method((char* )come_increment_ref_count(fun_name, "24method.nc", 497, 881),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params, "24method.nc", 497, 882),(struct sNode*)come_increment_ref_count(obj, "24method.nc", 497, 883),info,arrow_);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 497, 884));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 497, 885);
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 497, 886):(void*)0);
        come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 497, 887);
        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 497, 888);
        come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 497, 889);
        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 497, 890);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(!no_infference_method_generics) {
        no_output_come_code=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        __right_value0 = (void*)0;
        type=(struct sType* )come_increment_ref_count(sType_clone(obj_type), "24method.nc", 506, 891);
        __right_value0 = (void*)0;
        none_generics_name=(char* )come_increment_ref_count(get_none_generics_name(type->mClass->mName), "24method.nc", 508, 892);
        __right_value0 = (void*)0;
        fun_name2=(char* )come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1), "24method.nc", 509, 893);
        __right_value0 = (void*)0;
        fun_name3=(char* )come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name), "24method.nc", 510, 894);
        __right_value0 = (void*)0;
        generics_fun=((struct sGenericsFun* )(__right_value0=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3,((void*)0),(_Bool)0)));
        if(generics_fun) {
            method_generics=list$1char$ph_length(generics_fun->mMethodGenericsTypeNames)>0;
            if(method_generics&&list$1sType$ph_length(info->method_generics_types)==0) {
                __right_value0 = (void*)0;
                multiple_assign_var10=((struct tuple2$2char$phsGenericsFun$p*)(__right_value1=make_generics_function(type,(char* )come_increment_ref_count(__builtin_string(fun_name), "24method.nc", 518, 895),info,(_Bool)1)));
                name=(char* )come_increment_ref_count(multiple_assign_var10->v1, "24method.nc", 518, 896);
                gfun=multiple_assign_var10->v2;
                come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 518, 897);
                generics_fun_name=(char* )come_increment_ref_count(name, "24method.nc", 520, 898);
                __right_value0 = (void*)0;
                fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(info->funcs,generics_fun_name,((void*)0),(_Bool)0)));
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "24method.nc", 524, 899, "struct list$1CVALUE$ph*"), "24method.nc", 524, 900)), "24method.nc", 524, 901);
                if(method_block) {
                    no_output_come_code_44=info->no_output_come_code;
                    info->no_output_come_code=(_Bool)1;
                    if(!compile_method_block(method_block,come_params,fun,fun_name3,method_block_sline,info,(_Bool)1)) {
                                                __result_obj__0 = (_Bool)0;
                        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 529, 902));
                        (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 529, 903));
                        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 529, 904);
                        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 529, 905);
                        (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 529, 906));
                        (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 529, 907));
                        (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 529, 908));
                        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 529, 909));
                        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 529, 910);
                        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 529, 911):(void*)0);
                        come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 529, 912);
                        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 529, 913);
                        come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 529, 914);
                        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 529, 915);
                        neo_current_frame = fr.prev;
                        return __result_obj__0;
                    }
                    info->no_output_come_code=no_output_come_code_44;
                    __right_value0 = (void*)0;
                    method_block_node=((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(come_params,-1)));
                    __right_value0 = (void*)0;
                    method_block_lambda_type=(struct sType* )come_increment_ref_count(sType_clone(method_block_node->type), "24method.nc", 534, 934);
                    __right_value0 = (void*)0;
                    method_block_result_type=(struct sType* )come_increment_ref_count(sType_clone(info->come_method_block_function_result_type), "24method.nc", 535, 935);
                    __right_value0 = (void*)0;
                    generics_fun_method_block_lambda_type=((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(generics_fun->mParamTypes,-1)));
                    generics_fun_method_block_result_type=generics_fun_method_block_lambda_type->mResultType;
                    if(generics_fun_method_block_result_type->mClass->mMethodGenerics) {
                        method_generics_num=generics_fun_method_block_result_type->mClass->mMethodGenericsNum;
                        __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        list$1sType$ph_operator_store_element(info->method_generics_types,method_generics_num,(struct sType* )come_increment_ref_count(sType_clone(method_block_result_type), "24method.nc", 542, 960));
                    }
                    n=0;
                    for(_o2_saved_4=(struct list$1sType$ph*)come_increment_ref_count(generics_fun_method_block_lambda_type->mParamTypes, "24method.nc", 545, 961),it=list$1sType$ph_begin(_o2_saved_4)                    ;!list$1sType$ph_end(_o2_saved_4);it=list$1sType$ph_next(_o2_saved_4)){
                        if(it->mClass->mMethodGenerics) {
                            method_generics_num_50=it->mClass->mMethodGenericsNum;
                            __right_value0 = (void*)0;
                            __right_value1 = (void*)0;
                            list$1sType$ph_operator_store_element(info->method_generics_types,method_generics_num_50,(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value2=list$1sType$ph_operator_load_element(method_block_lambda_type->mParamTypes,n)))), "24method.nc", 548, 962));
                            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 548, 963);
                            come_call_finalizer(sType_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 548, 964);
                        }
                        n++;
                    }
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    come_params_51=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "24method.nc", 553, 965, "struct list$1CVALUE$ph*"), "24method.nc", 553, 966)), "24method.nc", 553, 967);
                    i=0;
                    for(_o2_saved_5=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params, "24method.nc", 556, 968),it_52=list$1tuple2$2char$phsNode$ph$ph_begin(_o2_saved_5)                    ;!list$1tuple2$2char$phsNode$ph$ph_end(_o2_saved_5);it_52=list$1tuple2$2char$phsNode$ph$ph_next(_o2_saved_5)){
                        multiple_assign_var11=it_52;
                        label=(char* )come_increment_ref_count(multiple_assign_var11->v1, "24method.nc", 557, 969);
                        node=(struct sNode*)come_increment_ref_count(multiple_assign_var11->v2, "24method.nc", 557, 970);
                        if(i==0) {
                            list$1CVALUE$ph_push_back(come_params_51,(struct CVALUE* )come_increment_ref_count(obj_value, "24method.nc", 560, 971));
                            i++;
                        }
                        else {
                            Value_53=node_compile(node,info);
                            if(!Value_53) {
                                                                __result_obj__0 = (_Bool)0;
                                (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 565, 972));
                                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 565, 973):(void*)0);
                                come_call_finalizer(sType_finalize, method_block_lambda_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 565, 974);
                                come_call_finalizer(sType_finalize, method_block_result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 565, 975);
                                come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 565, 976);
                                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_51, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 565, 977);
                                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_5, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 565, 978);
                                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 565, 979));
                                (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 565, 980));
                                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 565, 981);
                                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 565, 982);
                                (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 565, 983));
                                (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 565, 984));
                                (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 565, 985));
                                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 565, 986));
                                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 565, 987);
                                ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 565, 988):(void*)0);
                                come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 565, 989);
                                come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 565, 990);
                                come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 565, 991);
                                come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 565, 992);
                                neo_current_frame = fr.prev;
                                return __result_obj__0;
                            }
                            __right_value0 = (void*)0;
                            come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "24method.nc", 568, 993);
                            __right_value0 = (void*)0;
                            __dec_obj88=come_value->type,
                            come_value->type=(struct sType* )come_increment_ref_count(solve_generics(come_value->type,info->generics_type,info), "24method.nc", 569, 995);
                            come_call_finalizer(sType_finalize, __dec_obj88,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 569, 994);
                            list$1CVALUE$ph_push_back(come_params_51,(struct CVALUE* )come_increment_ref_count(come_value, "24method.nc", 570, 996));
                            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 572, 997);
                        }
                        (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 573, 998));
                        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 573, 999):(void*)0);
                    }
                    if(generics_fun->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_54=generics_fun->mResultType->mClass->mMethodGenericsNum;
                        if(info->function_result_type) {
                            __right_value0 = (void*)0;
                            __right_value1 = (void*)0;
                            list$1sType$ph_operator_store_element(info->method_generics_types,method_generics_num_54,(struct sType* )come_increment_ref_count(sType_clone(info->function_result_type), "24method.nc", 577, 1000));
                        }
                    }
                    n=0;
                    for(_o2_saved_6=(struct list$1sType$ph*)come_increment_ref_count(generics_fun->mParamTypes, "24method.nc", 581, 1001),it_55=list$1sType$ph_begin(_o2_saved_6)                    ;!list$1sType$ph_end(_o2_saved_6);it_55=list$1sType$ph_next(_o2_saved_6)){
                        if(it_55->mClass->mMethodGenerics) {
                            method_generics_num_56=it_55->mClass->mMethodGenericsNum;
                            if(n<list$1CVALUE$ph_length(come_params_51)) {
                                __right_value0 = (void*)0;
                                __right_value1 = (void*)0;
                                __right_value2 = (void*)0;
                                __right_value3 = (void*)0;
                                list$1sType$ph_operator_store_element(info->method_generics_types,method_generics_num_56,(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )(__right_value2=list$1CVALUE$ph_operator_load_element(come_params_51,n)))->type), "24method.nc", 585, 1002));
                                come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 585, 1003);
                                come_call_finalizer(CVALUE_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 585, 1004);
                            }
                        }
                        n++;
                    }
                    come_call_finalizer(sType_finalize, method_block_lambda_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 631, 1005);
                    come_call_finalizer(sType_finalize, method_block_result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 631, 1006);
                    come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 631, 1007);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_51, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 631, 1008);
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_5, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 631, 1009);
                    come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_6, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 631, 1010);
                }
                else {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    come_params_57=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "24method.nc", 592, 1011, "struct list$1CVALUE$ph*"), "24method.nc", 592, 1012)), "24method.nc", 592, 1013);
                    i_58=0;
                    for(_o2_saved_7=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params, "24method.nc", 595, 1014),it_59=list$1tuple2$2char$phsNode$ph$ph_begin(_o2_saved_7)                    ;!list$1tuple2$2char$phsNode$ph$ph_end(_o2_saved_7);it_59=list$1tuple2$2char$phsNode$ph$ph_next(_o2_saved_7)){
                        multiple_assign_var12=it_59;
                        label_60=(char* )come_increment_ref_count(multiple_assign_var12->v1, "24method.nc", 596, 1015);
                        node_61=(struct sNode*)come_increment_ref_count(multiple_assign_var12->v2, "24method.nc", 596, 1016);
                        if(i_58==0) {
                            list$1CVALUE$ph_push_back(come_params_57,(struct CVALUE* )come_increment_ref_count(obj_value, "24method.nc", 599, 1017));
                            i_58++;
                        }
                        else {
                            Value_62=node_compile(node_61,info);
                            if(!Value_62) {
                                                                __result_obj__0 = (_Bool)0;
                                (label_60 = come_decrement_ref_count(label_60, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 604, 1018));
                                ((node_61) ? node_61 = come_decrement_ref_count(node_61, ((struct sNode*)node_61)->finalize, ((struct sNode*)node_61)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 604, 1019):(void*)0);
                                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_57, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 604, 1020);
                                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_7, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 604, 1021);
                                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 604, 1022));
                                (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 604, 1023));
                                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 604, 1024);
                                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 604, 1025);
                                (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 604, 1026));
                                (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 604, 1027));
                                (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 604, 1028));
                                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 604, 1029));
                                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 604, 1030);
                                ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 604, 1031):(void*)0);
                                come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 604, 1032);
                                come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 604, 1033);
                                come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 604, 1034);
                                come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 604, 1035);
                                neo_current_frame = fr.prev;
                                return __result_obj__0;
                            }
                            __right_value0 = (void*)0;
                            come_value_63=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "24method.nc", 607, 1036);
                            __right_value0 = (void*)0;
                            __dec_obj89=come_value_63->type,
                            come_value_63->type=(struct sType* )come_increment_ref_count(solve_generics(come_value_63->type,info->generics_type,info), "24method.nc", 608, 1038);
                            come_call_finalizer(sType_finalize, __dec_obj89,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 608, 1037);
                            list$1CVALUE$ph_push_back(come_params_57,(struct CVALUE* )come_increment_ref_count(come_value_63, "24method.nc", 609, 1039));
                            come_call_finalizer(CVALUE_finalize, come_value_63, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 611, 1040);
                        }
                        (label_60 = come_decrement_ref_count(label_60, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 612, 1041));
                        ((node_61) ? node_61 = come_decrement_ref_count(node_61, ((struct sNode*)node_61)->finalize, ((struct sNode*)node_61)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 612, 1042):(void*)0);
                    }
                    if(generics_fun->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_64=generics_fun->mResultType->mClass->mMethodGenericsNum;
                        if(info->function_result_type) {
                            __right_value0 = (void*)0;
                            __right_value1 = (void*)0;
                            list$1sType$ph_operator_store_element(info->method_generics_types,method_generics_num_64,(struct sType* )come_increment_ref_count(sType_clone(info->function_result_type), "24method.nc", 616, 1043));
                        }
                    }
                    n_65=0;
                    for(_o2_saved_8=(struct list$1sType$ph*)come_increment_ref_count(generics_fun->mParamTypes, "24method.nc", 620, 1044),it_66=list$1sType$ph_begin(_o2_saved_8)                    ;!list$1sType$ph_end(_o2_saved_8);it_66=list$1sType$ph_next(_o2_saved_8)){
                        if(it_66->mClass->mMethodGenerics) {
                            method_generics_num_67=it_66->mClass->mMethodGenericsNum;
                            if(n_65<list$1CVALUE$ph_length(come_params_57)) {
                                __right_value0 = (void*)0;
                                __right_value1 = (void*)0;
                                __right_value2 = (void*)0;
                                __right_value3 = (void*)0;
                                list$1sType$ph_operator_store_element(info->method_generics_types,method_generics_num_67,(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )(__right_value2=list$1CVALUE$ph_operator_load_element(come_params_57,n_65)))->type), "24method.nc", 624, 1045));
                                come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 624, 1046);
                                come_call_finalizer(CVALUE_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 624, 1047);
                            }
                        }
                        n_65++;
                    }
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_57, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 631, 1048);
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_7, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 631, 1049);
                    come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_8, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 631, 1050);
                }
                map$2char$phsFun$ph_remove(info->funcs,(char* )come_increment_ref_count(generics_fun_name, "24method.nc", 631, 1051),(_Bool)0);
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 633, 1052));
                (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 633, 1053));
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 633, 1054);
            }
        }
        info->no_output_come_code=no_output_come_code;
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 637, 1055);
        (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 637, 1056));
        (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 637, 1057));
        (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 637, 1058));
    }
    klass=obj_type->mClass;
    calling_dynamic_method=(_Bool)0;
    lambda_type=((void*)0);
    for(_o2_saved_9=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields, "24method.nc", 641, 1059),it_69=list$1tuple2$2char$phsType$ph$ph_begin(_o2_saved_9)    ;!list$1tuple2$2char$phsType$ph$ph_end(_o2_saved_9);it_69=list$1tuple2$2char$phsType$ph$ph_next(_o2_saved_9)){
        multiple_assign_var13=it_69;
        field_name=(char* )come_increment_ref_count(multiple_assign_var13->v1, "24method.nc", 642, 1060);
        field_type=(struct sType* )come_increment_ref_count(multiple_assign_var13->v2, "24method.nc", 642, 1061);
        if(string_operator_equals(field_name,fun_name)&&string_operator_equals(field_type->mClass->mName,"lambda")) {
            calling_dynamic_method=(_Bool)1;
            lambda_type=field_type;
            (field_name = come_decrement_ref_count(field_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 647, 1062));
            come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 647, 1063);
            break;
        }
        (field_name = come_decrement_ref_count(field_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 651, 1064));
        come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 651, 1065);
    }
    if(klass->mProtocol&&calling_dynamic_method) {
        __right_value0 = (void*)0;
        result_type=(struct sType* )come_increment_ref_count(sType_clone(lambda_type->mResultType), "24method.nc", 652, 1066);
        result_type->mStatic=(_Bool)0;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_params_71=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "24method.nc", 655, 1067, "struct list$1CVALUE$ph*"), "24method.nc", 655, 1068)), "24method.nc", 655, 1069);
        i_72=0;
        for(_o2_saved_10=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params, "24method.nc", 658, 1070),it_73=list$1tuple2$2char$phsNode$ph$ph_begin(_o2_saved_10)        ;!list$1tuple2$2char$phsNode$ph$ph_end(_o2_saved_10);it_73=list$1tuple2$2char$phsNode$ph$ph_next(_o2_saved_10)){
            multiple_assign_var14=it_73;
            label_74=(char* )come_increment_ref_count(multiple_assign_var14->v1, "24method.nc", 659, 1071);
            node_75=(struct sNode*)come_increment_ref_count(multiple_assign_var14->v2, "24method.nc", 659, 1072);
            if(i_72==0) {
                list$1CVALUE$ph_push_back(come_params_71,(struct CVALUE* )come_increment_ref_count(obj_value, "24method.nc", 662, 1073));
                i_72++;
            }
            else {
                Value_76=node_compile(node_75,info);
                if(!Value_76) {
                                        __result_obj__0 = (_Bool)0;
                    (label_74 = come_decrement_ref_count(label_74, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 667, 1074));
                    ((node_75) ? node_75 = come_decrement_ref_count(node_75, ((struct sNode*)node_75)->finalize, ((struct sNode*)node_75)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 667, 1075):(void*)0);
                    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 667, 1076);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_71, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 667, 1077);
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_10, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 667, 1078);
                    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 667, 1079));
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 667, 1080);
                    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 667, 1081):(void*)0);
                    come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 667, 1082);
                    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 667, 1083);
                    come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 667, 1084);
                    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 667, 1085);
                    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_9, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 667, 1086);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                __right_value0 = (void*)0;
                come_value_77=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "24method.nc", 670, 1087);
                __right_value0 = (void*)0;
                __dec_obj90=come_value_77->type,
                come_value_77->type=(struct sType* )come_increment_ref_count(solve_generics(come_value_77->type,info->generics_type,info), "24method.nc", 672, 1089);
                come_call_finalizer(sType_finalize, __dec_obj90,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 672, 1088);
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __right_value3 = (void*)0;
                check_assign_type(((char*)(__right_value2=xsprintf("(a). \%s param num \%s is assinged to",((char* )(__right_value0=string_to_string(fun_name))),((char* )(__right_value1=int_to_string(i_72)))))),((struct sType* )(__right_value3=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i_72-1))),come_value_77->type,come_value_77,info);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 674, 1090));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 674, 1091));
                (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 674, 1092));
                come_call_finalizer(sType_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 674, 1093);
                if(__right_value0 = (void*)0,
({(_conditional_value_X0=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i_72-1)))->mHeap&&come_value_77->type->mHeap));                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 675, 1094);
_conditional_value_X0;})) {
                    __right_value0 = (void*)0;
                    std_move(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i_72-1))),come_value_77->type,come_value_77,info);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 677, 1095);
                }
                list$1CVALUE$ph_push_back(come_params_71,(struct CVALUE* )come_increment_ref_count(come_value_77, "24method.nc", 680, 1096));
                i_72++;
                come_call_finalizer(CVALUE_finalize, come_value_77, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 684, 1097);
            }
            (label_74 = come_decrement_ref_count(label_74, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 686, 1098));
            ((node_75) ? node_75 = come_decrement_ref_count(node_75, ((struct sNode*)node_75)->finalize, ((struct sNode*)node_75)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 686, 1099):(void*)0);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "24method.nc", 686, 1100, "struct buffer* "), "24method.nc", 686, 1101)), "24method.nc", 686, 1102);
        buffer_append_format(buf,"%s->%s",obj_value->c_value,fun_name);
        buffer_append_str(buf,"(");
        j=0;
        for(_o2_saved_11=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_71, "24method.nc", 692, 1103),it_78=list$1CVALUE$ph_begin(_o2_saved_11)        ;!list$1CVALUE$ph_end(_o2_saved_11);it_78=list$1CVALUE$ph_next(_o2_saved_11)){
            if(j==0) {
                __right_value0 = (void*)0;
                __dec_obj91=it_78->c_value,
                it_78->c_value=(char* )come_increment_ref_count(xsprintf("%s->_protocol_obj",it_78->c_value), "24method.nc", 694, 1105);
                __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0, (void*)0, "24method.nc", 694, 1104);
            }
            buffer_append_str(buf,it_78->c_value);
            if(j!=list$1CVALUE$ph_length(come_params_71)-1) {
                buffer_append_str(buf,",");
            }
            j++;
        }
        buffer_append_str(buf,")");
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "24method.nc", 706, 1106, "struct CVALUE* "), "24method.nc", 706, 1107)), "24method.nc", 706, 1108);
        __right_value0 = (void*)0;
        __dec_obj92=come_value2->c_value,
        come_value2->c_value=(char* )come_increment_ref_count(buffer_to_string(buf), "24method.nc", 708, 1110);
        __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0, (void*)0, "24method.nc", 708, 1109);
        __right_value0 = (void*)0;
        result_type2=(struct sType* )come_increment_ref_count(solve_generics(result_type,info->generics_type,info), "24method.nc", 710, 1111);
        __right_value0 = (void*)0;
        __dec_obj93=come_value2->type,
        come_value2->type=(struct sType* )come_increment_ref_count(sType_clone(result_type2), "24method.nc", 712, 1113);
        come_call_finalizer(sType_finalize, __dec_obj93,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 712, 1112);
        if(come_value2->type) {
            come_value2->type->mStatic=(_Bool)0;
        }
        come_value2->var=((void*)0);
        if(result_type2->mHeap) {
            append_object_to_right_values(come_value2,result_type2,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        }
        add_come_last_code(info,"%s",come_value2->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "24method.nc", 724, 1114));
        __dec_obj94=info->method_generics_types,
        info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_43, "24method.nc", 727, 1116);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj94,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 727, 1115);
        info->calling_fun=((void*)0);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1040, 1117);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_71, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1040, 1118);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_10, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1040, 1119);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1040, 1120);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_11, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1040, 1121);
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1040, 1122);
        come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1040, 1123);
    }
    else {
        __right_value0 = (void*)0;
        multiple_assign_var15=((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value0=get_method(fun_name,obj_type,info,(_Bool)0)));
        generics_fun_name_79=(char* )come_increment_ref_count(multiple_assign_var15->v1, "24method.nc", 732, 1124);
        fun_80=multiple_assign_var15->v2;
        generics_fun_81=multiple_assign_var15->v3;
        come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 732, 1125);
        if(fun_80==((void*)0)) {
            err_msg(info,"function not found(%s, %s) at method(%s)(ZY)",generics_fun_name_79,fun_name,info->come_fun->mName);
                        __result_obj__0 = (_Bool)1;
            (generics_fun_name_79 = come_decrement_ref_count(generics_fun_name_79, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 736, 1126));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 736, 1127));
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 736, 1128);
            ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 736, 1129):(void*)0);
            come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 736, 1130);
            come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 736, 1131);
            come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 736, 1132);
            come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 736, 1133);
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_9, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 736, 1134);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        if(list$1sType$ph_length(fun_80->mParamTypes)==0) {
            err_msg(info,"Method require function parametor");
                        __result_obj__0 = (_Bool)1;
            (generics_fun_name_79 = come_decrement_ref_count(generics_fun_name_79, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 741, 1135));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 741, 1136));
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 741, 1137);
            ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 741, 1138):(void*)0);
            come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 741, 1139);
            come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 741, 1140);
            come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 741, 1141);
            come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 741, 1142);
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_9, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 741, 1143);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        result_type_82=(struct sType* )come_increment_ref_count(sType_clone(fun_80->mResultType), "24method.nc", 744, 1144);
        __right_value0 = (void*)0;
        __dec_obj95=result_type_82,
        result_type_82=(struct sType* )come_increment_ref_count(solve_generics(result_type_82,info->generics_type,info), "24method.nc", 746, 1146);
        come_call_finalizer(sType_finalize, __dec_obj95,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 746, 1145);
        result_type_82->mStatic=(_Bool)0;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "24method.nc", 750, 1147, "struct list$1sType$ph*"), "24method.nc", 750, 1148)), "24method.nc", 750, 1149);
        for(_o2_saved_12=(struct list$1sType$ph*)come_increment_ref_count(fun_80->mParamTypes, "24method.nc", 751, 1150),it_83=list$1sType$ph_begin(_o2_saved_12)        ;!list$1sType$ph_end(_o2_saved_12);it_83=list$1sType$ph_next(_o2_saved_12)){
            if(it_83==((void*)0)) {
                __right_value0 = (void*)0;
                list$1sType$ph_push_back(param_types,(struct sType* )come_increment_ref_count(sType_clone(it_83), "24method.nc", 753, 1151));
            }
            else {
                __right_value0 = (void*)0;
                it2=(struct sType* )come_increment_ref_count(solve_generics(it_83,info->generics_type,info), "24method.nc", 756, 1152);
                no_solved_obj_type=(struct sType* )come_increment_ref_count(obj_type->mNoSolvedGenericsType, "24method.nc", 758, 1153);
                __right_value0 = (void*)0;
                it3=(struct sType* )come_increment_ref_count(solve_generics(it_83,no_solved_obj_type,info), "24method.nc", 759, 1154);
                list$1sType$ph_push_back(param_types,(struct sType* )come_increment_ref_count(it2, "24method.nc", 761, 1155));
                come_call_finalizer(sType_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 763, 1156);
                come_call_finalizer(sType_finalize, no_solved_obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 763, 1157);
                come_call_finalizer(sType_finalize, it3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 763, 1158);
            }
        }
        __right_value0 = (void*)0;
        type_checking_param_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(param_types), "24method.nc", 765, 1159);
        if(generics_fun_81) {
            n_84=0;
            for(_o2_saved_13=(struct list$1sType$ph*)come_increment_ref_count(generics_fun_81->mParamTypes, "24method.nc", 768, 1160),it_85=list$1sType$ph_begin(_o2_saved_13)            ;!list$1sType$ph_end(_o2_saved_13);it_85=list$1sType$ph_next(_o2_saved_13)){
                if(it_85==((void*)0)) {
                }
                else {
                    no_solved_obj_type_86=(struct sType* )come_increment_ref_count(obj_type->mNoSolvedGenericsType, "24method.nc", 772, 1161);
                    __right_value0 = (void*)0;
                    it3_87=(struct sType* )come_increment_ref_count(solve_generics(it_85,no_solved_obj_type_86,info), "24method.nc", 773, 1162);
                    come_call_finalizer(sType_finalize, no_solved_obj_type_86, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 776, 1163);
                    come_call_finalizer(sType_finalize, it3_87, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 776, 1164);
                }
                n_84++;
            }
            come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_13, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 780, 1165);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_params_88=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "24method.nc", 780, 1166, "struct list$1CVALUE$ph*"), "24method.nc", 780, 1167)), "24method.nc", 780, 1168);
        for(i_89=0        ;i_89<list$1sType$ph_length(fun_80->mParamTypes)-(((method_block)?(2):(0)));i_89++){
            list$1CVALUE$ph_add(come_params_88,((void*)0));
        }
        first_param=(_Bool)1;
        for(_o2_saved_14=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params, "24method.nc", 787, 1183),it_92=list$1tuple2$2char$phsNode$ph$ph_begin(_o2_saved_14)        ;!list$1tuple2$2char$phsNode$ph$ph_end(_o2_saved_14);it_92=list$1tuple2$2char$phsNode$ph$ph_next(_o2_saved_14)){
            multiple_assign_var16=it_92;
            label_93=(char* )come_increment_ref_count(multiple_assign_var16->v1, "24method.nc", 788, 1184);
            node_94=(struct sNode*)come_increment_ref_count(multiple_assign_var16->v2, "24method.nc", 788, 1185);
            if(first_param) {
                first_param=(_Bool)0;
            }
            else if(label_93) {
                n_95=0;
                check=(_Bool)0;
                for(_o2_saved_15=(struct list$1char$ph*)come_increment_ref_count(fun_80->mParamNames, "24method.nc", 796, 1186),it_97=list$1char$ph_begin(_o2_saved_15)                ;!list$1char$ph_end(_o2_saved_15);it_97=list$1char$ph_next(_o2_saved_15)){
                    if(string_operator_equals(label_93,it_97)) {
                        check=(_Bool)1;
                        break;
                    }
                    n_95++;
                }
                if(!check) {
                    err_msg(info,"invalid label name(%s)",label_93);
                }
                Value_99=node_compile(node_94,info);
                if(!Value_99) {
                                        __result_obj__0 = (_Bool)0;
                    come_call_finalizer(list$1char$ph$p_finalize, _o2_saved_15, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 810, 1187);
                    (label_93 = come_decrement_ref_count(label_93, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 810, 1188));
                    ((node_94) ? node_94 = come_decrement_ref_count(node_94, ((struct sNode*)node_94)->finalize, ((struct sNode*)node_94)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 810, 1189):(void*)0);
                    (generics_fun_name_79 = come_decrement_ref_count(generics_fun_name_79, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 810, 1190));
                    come_call_finalizer(sType_finalize, result_type_82, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 810, 1191);
                    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 810, 1192);
                    come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_12, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 810, 1193);
                    come_call_finalizer(list$1sType$ph$p_finalize, type_checking_param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 810, 1194);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_88, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 810, 1195);
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_14, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 810, 1196);
                    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 810, 1197));
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 810, 1198);
                    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 810, 1199):(void*)0);
                    come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 810, 1200);
                    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 810, 1201);
                    come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 810, 1202);
                    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 810, 1203);
                    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_9, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 810, 1204);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                __right_value0 = (void*)0;
                come_value_100=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "24method.nc", 813, 1205);
                __right_value0 = (void*)0;
                __dec_obj99=come_value_100->type,
                come_value_100->type=(struct sType* )come_increment_ref_count(solve_generics(come_value_100->type,info->generics_type,info), "24method.nc", 815, 1207);
                come_call_finalizer(sType_finalize, __dec_obj99,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 815, 1206);
                if(__right_value0 = (void*)0,
({(_conditional_value_X1=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,n_95)))));                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 817, 1208);
_conditional_value_X1;})) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __right_value3 = (void*)0;
                    check_assign_type(((char*)(__right_value2=xsprintf("(b). \%s param num \%s is assinged to",((char* )(__right_value0=string_to_string(fun_name))),((char* )(__right_value1=int_to_string(n_95)))))),((struct sType* )(__right_value3=list$1sType$ph_operator_load_element(type_checking_param_types,n_95))),come_value_100->type,come_value_100,info);
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 818, 1209));
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 818, 1210));
                    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 818, 1211));
                    come_call_finalizer(sType_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 818, 1212);
                }
                if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X2=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,n_95)))&&((struct sType* )(__right_value1=list$1sType$ph_operator_load_element(param_types,n_95)))->mHeap&&come_value_100->type->mHeap));                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 820, 1213);
                come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 820, 1214);
_conditional_value_X2;})) {
                    __right_value0 = (void*)0;
                    std_move(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,n_95))),come_value_100->type,come_value_100,info);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 821, 1215);
                }
                list$1CVALUE$ph_replace(come_params_88,n_95,(struct CVALUE* )come_increment_ref_count(come_value_100, "24method.nc", 824, 1224));
                come_call_finalizer(list$1char$ph$p_finalize, _o2_saved_15, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 826, 1225);
                come_call_finalizer(CVALUE_finalize, come_value_100, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 826, 1226);
            }
            (label_93 = come_decrement_ref_count(label_93, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 828, 1227));
            ((node_94) ? node_94 = come_decrement_ref_count(node_94, ((struct sNode*)node_94)->finalize, ((struct sNode*)node_94)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 828, 1228):(void*)0);
        }
        i_102=0;
        for(_o2_saved_16=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params, "24method.nc", 829, 1229),it_103=list$1tuple2$2char$phsNode$ph$ph_begin(_o2_saved_16)        ;!list$1tuple2$2char$phsNode$ph$ph_end(_o2_saved_16);it_103=list$1tuple2$2char$phsNode$ph$ph_next(_o2_saved_16)){
            multiple_assign_var17=it_103;
            label_104=(char* )come_increment_ref_count(multiple_assign_var17->v1, "24method.nc", 830, 1230);
            node_105=(struct sNode*)come_increment_ref_count(multiple_assign_var17->v2, "24method.nc", 830, 1231);
            if(i_102==0) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __right_value3 = (void*)0;
                check_assign_type(((char*)(__right_value2=xsprintf("(c). \%s param num \%s is assinged to",((char* )(__right_value0=string_to_string(fun_name))),((char* )(__right_value1=int_to_string(i_102)))))),((struct sType* )(__right_value3=list$1sType$ph_operator_load_element(type_checking_param_types,i_102))),obj_value->type,obj_value,info);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 833, 1232));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 833, 1233));
                (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 833, 1234));
                come_call_finalizer(sType_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 833, 1235);
                if(__right_value0 = (void*)0,
({(_conditional_value_X3=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,i_102)))->mHeap&&obj_value->type->mHeap));                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 834, 1236);
_conditional_value_X3;})) {
                    __right_value0 = (void*)0;
                    std_move(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,i_102))),obj_value->type,obj_value,info);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 835, 1237);
                }
                else if(__right_value0 = (void*)0,
({(_conditional_value_X4=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,i_102)))->mHeap&&!obj_value->type->mHeap));                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 837, 1238);
_conditional_value_X4;})) {
                    __right_value0 = (void*)0;
                    err_msg(info,"require heap parametor(%s)",((char* )(__right_value0=list$1char$ph_operator_load_element(fun_80->mParamNames,i_102))));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 838, 1257));
                                        __result_obj__0 = (_Bool)1;
                    (label_104 = come_decrement_ref_count(label_104, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 839, 1258));
                    ((node_105) ? node_105 = come_decrement_ref_count(node_105, ((struct sNode*)node_105)->finalize, ((struct sNode*)node_105)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 839, 1259):(void*)0);
                    (generics_fun_name_79 = come_decrement_ref_count(generics_fun_name_79, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 839, 1260));
                    come_call_finalizer(sType_finalize, result_type_82, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 839, 1261);
                    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 839, 1262);
                    come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_12, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 839, 1263);
                    come_call_finalizer(list$1sType$ph$p_finalize, type_checking_param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 839, 1264);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_88, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 839, 1265);
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_14, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 839, 1266);
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_16, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 839, 1267);
                    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 839, 1268));
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 839, 1269);
                    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 839, 1270):(void*)0);
                    come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 839, 1271);
                    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 839, 1272);
                    come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 839, 1273);
                    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 839, 1274);
                    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_9, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 839, 1275);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                list$1CVALUE$ph_replace(come_params_88,i_102,(struct CVALUE* )come_increment_ref_count(obj_value, "24method.nc", 841, 1276));
                i_102++;
            }
            else if(label_104) {
            }
            else {
                while((_Bool)1) {
                    if(__right_value0 = (void*)0,
({(_conditional_value_X5=(((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_88,i_102)))==((void*)0)));                    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 849, 1277);
_conditional_value_X5;})) {
                        break;
                    }
                    else {
                        i_102++;
                    }
                }
                Value_108=node_compile(node_105,info);
                if(!Value_108) {
                                        __result_obj__0 = (_Bool)0;
                    (label_104 = come_decrement_ref_count(label_104, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 858, 1278));
                    ((node_105) ? node_105 = come_decrement_ref_count(node_105, ((struct sNode*)node_105)->finalize, ((struct sNode*)node_105)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 858, 1279):(void*)0);
                    (generics_fun_name_79 = come_decrement_ref_count(generics_fun_name_79, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 858, 1280));
                    come_call_finalizer(sType_finalize, result_type_82, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 858, 1281);
                    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 858, 1282);
                    come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_12, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 858, 1283);
                    come_call_finalizer(list$1sType$ph$p_finalize, type_checking_param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 858, 1284);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_88, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 858, 1285);
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_14, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 858, 1286);
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_16, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 858, 1287);
                    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 858, 1288));
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 858, 1289);
                    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 858, 1290):(void*)0);
                    come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 858, 1291);
                    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 858, 1292);
                    come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 858, 1293);
                    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 858, 1294);
                    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_9, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 858, 1295);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                __right_value0 = (void*)0;
                come_value_109=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "24method.nc", 861, 1296);
                __right_value0 = (void*)0;
                __dec_obj101=come_value_109->type,
                come_value_109->type=(struct sType* )come_increment_ref_count(solve_generics(come_value_109->type,info->generics_type,info), "24method.nc", 863, 1298);
                come_call_finalizer(sType_finalize, __dec_obj101,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 863, 1297);
                if(__right_value0 = (void*)0,
({(_conditional_value_X6=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,i_102)))));                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 865, 1299);
_conditional_value_X6;})) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __right_value3 = (void*)0;
                    check_assign_type(((char*)(__right_value2=xsprintf("(d). \%s param num \%s is assinged to",((char* )(__right_value0=string_to_string(fun_name))),((char* )(__right_value1=int_to_string(i_102)))))),((struct sType* )(__right_value3=list$1sType$ph_operator_load_element(type_checking_param_types,i_102))),come_value_109->type,come_value_109,info);
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 866, 1300));
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 866, 1301));
                    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 866, 1302));
                    come_call_finalizer(sType_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 866, 1303);
                }
                if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X7=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,i_102)))&&((struct sType* )(__right_value1=list$1sType$ph_operator_load_element(param_types,i_102)))->mHeap&&come_value_109->type->mHeap));                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 868, 1304);
                come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 868, 1305);
_conditional_value_X7;})) {
                    __right_value0 = (void*)0;
                    std_move(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,i_102))),come_value_109->type,come_value_109,info);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 869, 1306);
                }
                list$1CVALUE$ph_replace(come_params_88,i_102,(struct CVALUE* )come_increment_ref_count(come_value_109, "24method.nc", 872, 1307));
                i_102++;
                come_call_finalizer(CVALUE_finalize, come_value_109, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 875, 1308);
            }
            (label_104 = come_decrement_ref_count(label_104, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 877, 1309));
            ((node_105) ? node_105 = come_decrement_ref_count(node_105, ((struct sNode*)node_105)->finalize, ((struct sNode*)node_105)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 877, 1310):(void*)0);
        }
        while((_Bool)1) {
            if(__right_value0 = (void*)0,
({(_conditional_value_X8=(((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_88,i_102)))==((void*)0)));            come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 878, 1311);
_conditional_value_X8;})) {
                break;
            }
            else {
                i_102++;
            }
        }
        if(list$1tuple2$2char$phsNode$ph$ph_length(params)<list$1sType$ph_length(fun_80->mParamTypes)+(((method_block)?(-2):(0)))) {
            for(;i_102<list$1sType$ph_length(fun_80->mParamTypes)+(((method_block)?(-2):(0)));i_102++){
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                default_param=(char* )come_increment_ref_count((char* )come_memdup(((char* )(__right_value0=list$1char$ph_operator_load_element(fun_80->mParamDefaultParametors,i_102))), "24method.nc", 889, 1312, "char* "), "24method.nc", 889, 1313);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 889, 1314));
                __right_value0 = (void*)0;
                param_name=((char* )(__right_value0=list$1char$ph_operator_load_element(fun_80->mParamNames,i_102)));
                if(__right_value0 = (void*)0,
({(_conditional_value_X9=(default_param&&string_operator_not_equals(default_param,"")&&((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_88,i_102)))==((void*)0)));                come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 892, 1315);
_conditional_value_X9;})) {
                    source=(struct buffer* )come_increment_ref_count(info->source, "24method.nc", 893, 1316);
                    p=info->p->p;
                    head=info->head;
                    sline=info->sline;
                    __right_value0 = (void*)0;
                    __dec_obj102=info->source,
                    info->source=(struct buffer* )come_increment_ref_count(charp_to_buffer(default_param), "24method.nc", 898, 1318);
                    come_call_finalizer(buffer_finalize, __dec_obj102,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 898, 1317);
                    if(info->p==((void*)0)) {
                        __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        __dec_obj103=info->p,
                        info->p=(struct span$1buffer$p*)come_increment_ref_count(span$1buffer$p_initialize((struct span$1buffer$p*)come_increment_ref_count((struct span$1buffer$p*)come_calloc(1, sizeof(struct span$1buffer$p)*(1), "24method.nc", 900, 1319, "struct span$1buffer$p*"), "24method.nc", 900, 1320),info->source->buf,info->source->len+1,(_Bool)1,(_Bool)0,(_Bool)0,neo_current_frame->stacktop), "24method.nc", 900, 1322);
                        come_call_finalizer(span$1char$p$p_finalize, __dec_obj103,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 900, 1321);
                    }
                    info->p->memory=info->source->buf;
                    info->p->len=info->source->len+2;
                    info->p->p=info->source->buf;
                    info->head=info->source->buf;
                    no_output_come_code_110=info->no_output_come_code;
                    info->no_output_come_code=(_Bool)1;
                    __right_value0 = (void*)0;
                    node_111=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "24method.nc", 910, 1323);
                    Value_112=node_compile(node_111,info);
                    if(!Value_112) {
                                                __result_obj__0 = (_Bool)0;
                        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 913, 1324);
                        ((node_111) ? node_111 = come_decrement_ref_count(node_111, ((struct sNode*)node_111)->finalize, ((struct sNode*)node_111)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 913, 1325):(void*)0);
                        (default_param = come_decrement_ref_count(default_param, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 913, 1326));
                        (generics_fun_name_79 = come_decrement_ref_count(generics_fun_name_79, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 913, 1327));
                        come_call_finalizer(sType_finalize, result_type_82, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 913, 1328);
                        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 913, 1329);
                        come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_12, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 913, 1330);
                        come_call_finalizer(list$1sType$ph$p_finalize, type_checking_param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 913, 1331);
                        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_88, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 913, 1332);
                        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_14, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 913, 1333);
                        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_16, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 913, 1334);
                        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 913, 1335));
                        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 913, 1336);
                        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 913, 1337):(void*)0);
                        come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 913, 1338);
                        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 913, 1339);
                        come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 913, 1340);
                        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 913, 1341);
                        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_9, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 913, 1342);
                        neo_current_frame = fr.prev;
                        return __result_obj__0;
                    }
                    info->no_output_come_code=no_output_come_code_110;
                    __dec_obj104=info->source,
                    info->source=(struct buffer* )come_increment_ref_count(source, "24method.nc", 918, 1344);
                    come_call_finalizer(buffer_finalize, __dec_obj104,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 918, 1343);
                    if(info->p==((void*)0)) {
                        __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        __dec_obj105=info->p,
                        info->p=(struct span$1buffer$p*)come_increment_ref_count(span$1buffer$p_initialize((struct span$1buffer$p*)come_increment_ref_count((struct span$1buffer$p*)come_calloc(1, sizeof(struct span$1buffer$p)*(1), "24method.nc", 920, 1345, "struct span$1buffer$p*"), "24method.nc", 920, 1346),info->source->buf,info->source->len+1,(_Bool)1,(_Bool)0,(_Bool)0,neo_current_frame->stacktop), "24method.nc", 920, 1348);
                        come_call_finalizer(span$1char$p$p_finalize, __dec_obj105,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 920, 1347);
                    }
                    info->p->memory=info->source->buf;
                    info->p->len=info->source->len+2;
                    info->p->p=info->source->buf;
                    info->p->p=p;
                    info->head=head;
                    info->sline=sline;
                    __right_value0 = (void*)0;
                    come_value_113=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "24method.nc", 929, 1349);
                    __right_value0 = (void*)0;
                    __dec_obj106=come_value_113->type,
                    come_value_113->type=(struct sType* )come_increment_ref_count(solve_generics(come_value_113->type,info->generics_type,info), "24method.nc", 930, 1351);
                    come_call_finalizer(sType_finalize, __dec_obj106,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 930, 1350);
                    if(__right_value0 = (void*)0,
({(_conditional_value_X10=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,i_102)))));                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 931, 1352);
_conditional_value_X10;})) {
                        __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        __right_value2 = (void*)0;
                        __right_value3 = (void*)0;
                        check_assign_type(((char*)(__right_value2=xsprintf("(e). \%s param num \%s is assinged to",((char* )(__right_value0=string_to_string(fun_name))),((char* )(__right_value1=int_to_string(i_102)))))),((struct sType* )(__right_value3=list$1sType$ph_operator_load_element(type_checking_param_types,i_102))),come_value_113->type,come_value_113,info);
                        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 932, 1353));
                        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 932, 1354));
                        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 932, 1355));
                        come_call_finalizer(sType_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 932, 1356);
                    }
                    if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X11=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,i_102)))&&((struct sType* )(__right_value1=list$1sType$ph_operator_load_element(param_types,i_102)))->mHeap&&come_value_113->type->mHeap));                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 934, 1357);
                    come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 934, 1358);
_conditional_value_X11;})) {
                        __right_value0 = (void*)0;
                        std_move(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,i_102))),come_value_113->type,come_value_113,info);
                        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 935, 1359);
                    }
                    list$1CVALUE$ph_replace(come_params_88,i_102,(struct CVALUE* )come_increment_ref_count(come_value_113, "24method.nc", 937, 1360));
                    come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 945, 1361);
                    ((node_111) ? node_111 = come_decrement_ref_count(node_111, ((struct sNode*)node_111)->finalize, ((struct sNode*)node_111)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 945, 1362):(void*)0);
                    come_call_finalizer(CVALUE_finalize, come_value_113, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 945, 1363);
                }
                else {
                    if(__right_value0 = (void*)0,
({(_conditional_value_X12=(((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_88,i_102)))==((void*)0)));                    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 940, 1364);
_conditional_value_X12;})) {
                        err_msg(info,"require parametor(%s) %d",fun_80->mName,i_102);
                                                __result_obj__0 = (_Bool)1;
                        (default_param = come_decrement_ref_count(default_param, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 942, 1365));
                        (generics_fun_name_79 = come_decrement_ref_count(generics_fun_name_79, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 942, 1366));
                        come_call_finalizer(sType_finalize, result_type_82, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 942, 1367);
                        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 942, 1368);
                        come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_12, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 942, 1369);
                        come_call_finalizer(list$1sType$ph$p_finalize, type_checking_param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 942, 1370);
                        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_88, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 942, 1371);
                        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_14, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 942, 1372);
                        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_16, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 942, 1373);
                        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 942, 1374));
                        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 942, 1375);
                        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 942, 1376):(void*)0);
                        come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 942, 1377);
                        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 942, 1378);
                        come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 942, 1379);
                        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 942, 1380);
                        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_9, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 942, 1381);
                        neo_current_frame = fr.prev;
                        return __result_obj__0;
                    }
                }
                (default_param = come_decrement_ref_count(default_param, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 946, 1382));
            }
        }
        if(method_block) {
            if(!compile_method_block(method_block,come_params_88,fun_80,fun_name,method_block_sline,info,(_Bool)0)) {
                                __result_obj__0 = (_Bool)0;
                (generics_fun_name_79 = come_decrement_ref_count(generics_fun_name_79, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 950, 1383));
                come_call_finalizer(sType_finalize, result_type_82, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 950, 1384);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 950, 1385);
                come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_12, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 950, 1386);
                come_call_finalizer(list$1sType$ph$p_finalize, type_checking_param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 950, 1387);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_88, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 950, 1388);
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_14, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 950, 1389);
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_16, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 950, 1390);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 950, 1391));
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 950, 1392);
                ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 950, 1393):(void*)0);
                come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 950, 1394);
                come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 950, 1395);
                come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 950, 1396);
                come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 950, 1397);
                come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_9, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 950, 1398);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf_114=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "24method.nc", 954, 1399, "struct buffer* "), "24method.nc", 954, 1400)), "24method.nc", 954, 1401);
        buffer_append_str(buf_114,generics_fun_name_79);
        buffer_append_str(buf_114,"(");
        saved_obj_value=((void*)0);
        saved_var=((void*)0);
        if(result_type_82->mDefferRightValue) {
            static int n_115=0;
            n_115++;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            var_name=(char*)come_increment_ref_count(xsprintf("deffer_right_value\%s",((char* )(__right_value0=int_to_string(n_115)))), "24method.nc", 964, 1402);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 964, 1403));
            __right_value0 = (void*)0;
            type_116=(struct sType* )come_increment_ref_count(sType_clone(obj_type), "24method.nc", 965, 1404);
            type_116->mDefferRightValue=(_Bool)1;
            add_variable_to_table(var_name,type_116,info,(_Bool)0,(_Bool)0,(_Bool)0);
            var_=get_variable_from_table(info->lv_table,var_name);
            __right_value0 = (void*)0;
            add_come_code_at_function_head(info,"%s;\n",((char* )(__right_value0=make_define_var(type_116,var_->mCValueName,info,(_Bool)0,(_Bool)0))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 972, 1405));
            add_come_code(info,"%s=%s;\n",var_->mCValueName,obj_value->c_value);
            __dec_obj107=saved_obj_value,
            saved_obj_value=(char* )come_increment_ref_count(var_->mCValueName, "24method.nc", 974, 1407);
            __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0, (void*)0, "24method.nc", 974, 1406);
            saved_var=var_;
            j_117=0;
            for(_o2_saved_17=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_88, "24method.nc", 978, 1408),it_118=list$1CVALUE$ph_begin(_o2_saved_17)            ;!list$1CVALUE$ph_end(_o2_saved_17);it_118=list$1CVALUE$ph_next(_o2_saved_17)){
                if(j_117==0) {
                    buffer_append_str(buf_114,saved_obj_value);
                }
                else {
                    buffer_append_str(buf_114,it_118->c_value);
                }
                if(j_117!=list$1CVALUE$ph_length(come_params_88)-1) {
                    buffer_append_str(buf_114,",");
                }
                j_117++;
            }
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 1005, 1409));
            come_call_finalizer(sType_finalize, type_116, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1005, 1410);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_17, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1005, 1411);
        }
        else {
            j_119=0;
            for(_o2_saved_18=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_88, "24method.nc", 995, 1412),it_120=list$1CVALUE$ph_begin(_o2_saved_18)            ;!list$1CVALUE$ph_end(_o2_saved_18);it_120=list$1CVALUE$ph_next(_o2_saved_18)){
                buffer_append_str(buf_114,it_120->c_value);
                if(j_119!=list$1CVALUE$ph_length(come_params_88)-1) {
                    buffer_append_str(buf_114,",");
                }
                j_119++;
            }
            come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_18, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1005, 1413);
        }
        buffer_append_str(buf_114,")");
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value2_121=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "24method.nc", 1008, 1414, "struct CVALUE* "), "24method.nc", 1008, 1415)), "24method.nc", 1008, 1416);
        if(string_operator_equals(fun_name,"unwrap")||string_operator_equals(fun_name,"operator_derefference")) {
            come_value2_121->var=obj_value->var;
        }
        else {
            come_value2_121->var=((void*)0);
        }
        __right_value0 = (void*)0;
        __dec_obj108=come_value2_121->c_value,
        come_value2_121->c_value=(char* )come_increment_ref_count(buffer_to_string(buf_114), "24method.nc", 1016, 1418);
        __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0, (void*)0, "24method.nc", 1016, 1417);
        __right_value0 = (void*)0;
        __dec_obj109=come_value2_121->type,
        come_value2_121->type=(struct sType* )come_increment_ref_count(sType_clone(result_type_82), "24method.nc", 1018, 1420);
        come_call_finalizer(sType_finalize, __dec_obj109,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 1018, 1419);
        if(come_value2_121->type) {
            come_value2_121->type->mStatic=(_Bool)0;
        }
        if(result_type_82->mHeap) {
            append_object_to_right_values(come_value2_121,result_type_82,info,(_Bool)0,obj_type,saved_obj_value,saved_var);
        }
        else if(saved_obj_value) {
            append_object_to_right_values(come_value2_121,result_type_82,info,(_Bool)0,obj_type,saved_obj_value,saved_var);
        }
        add_come_last_code(info,"%s",come_value2_121->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2_121, "24method.nc", 1032, 1421));
        __dec_obj110=info->method_generics_types,
        info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_43, "24method.nc", 1035, 1423);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj110,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 1035, 1422);
        info->calling_fun=fun_80;
        (generics_fun_name_79 = come_decrement_ref_count(generics_fun_name_79, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 1040, 1424));
        come_call_finalizer(sType_finalize, result_type_82, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1040, 1425);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1040, 1426);
        come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_12, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1040, 1427);
        come_call_finalizer(list$1sType$ph$p_finalize, type_checking_param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1040, 1428);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_88, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1040, 1429);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_14, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1040, 1430);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_16, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1040, 1431);
        come_call_finalizer(buffer_finalize, buf_114, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1040, 1432);
        (saved_obj_value = come_decrement_ref_count(saved_obj_value, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 1040, 1433));
        come_call_finalizer(CVALUE_finalize, come_value2_121, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1040, 1434);
    }
        __result_obj__0 = (_Bool)1;
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 1040, 1435));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1040, 1436);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 1040, 1437):(void*)0);
    come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1040, 1438);
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1040, 1439);
    come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1040, 1440);
    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1040, 1441);
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_9, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1040, 1442);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sNodeBase_finalize(struct sNodeBase* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNodeBase_finalize", 2, 797));
    }
        neo_current_frame = fr.prev;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph$p_clone"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1tuple2$2char$phsNode$ph$ph* result;
    struct list_item$1tuple2$2char$phsNode$ph$ph* it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1509, 803);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1509, 804);
        return __result_obj__0;
    }
    result=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1511, 805, "struct list$1tuple2$2char$phsNode$ph$ph*"), "/usr/local/include/neo-c.h", 1511, 809)), "/usr/local/include/neo-c.h", 1511, 810);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1tuple2$2char$phsNode$ph$ph_add(result,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it->item), "/usr/local/include/neo-c.h", 1516, 839));
        }
        else {
            __right_value0 = (void*)0;
            list$1tuple2$2char$phsNode$ph$ph_add(result,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it->item), "/usr/local/include/neo-c.h", 1519, 840));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1525, 841);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 842);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 843);
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_initialize"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1483, 806);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 807);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 808);
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_add"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
    struct tuple2$2char$phsNode$ph* __dec_obj75;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_41;
    struct tuple2$2char$phsNode$ph* __dec_obj76;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_42;
    struct tuple2$2char$phsNode$ph* __dec_obj77;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1529, 811);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1532, 812, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1532, 813);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj75=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1536, 815);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj75,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1536, 814);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_41=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1542, 816, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1542, 817);
        litem_41->prev=self->head;
        litem_41->next=((void*)0);
        __dec_obj76=litem_41->item,
        litem_41->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1546, 819);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj76,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1546, 818);
        self->tail=litem_41;
        self->head->next=litem_41;
    }
    else {
        __right_value0 = (void*)0;
        litem_42=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1552, 820, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1552, 821);
        litem_42->prev=self->tail;
        litem_42->next=((void*)0);
        __dec_obj77=litem_42->item,
        litem_42->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1556, 823);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj77,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1556, 822);
        self->tail->next=litem_42;
        self->tail=litem_42;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1564, 824);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_clone"; neo_current_frame = &fr;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct tuple2$2char$phsNode$ph* result;
    char*  __dec_obj78  ;
    struct sNode* __dec_obj79;
    if(self==(void*)0) {
                __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count((void*)0, "tuple2$2char$phsNode$ph_clone", 4, 825);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple2$2char$phsNode$ph_clone}", 4, 826);
        return __result_obj__0;
    }
    result=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 5, 827, "struct tuple2$2char$phsNode$ph*"), "tuple2$2char$phsNode$ph_clone", 5, 828);
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj78=result->v1,
        result->v1=(char* )come_increment_ref_count((char* )come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 6, 829, "char* "), "tuple2$2char$phsNode$ph_clone", 6, 831);
        __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0, (void*)0, "tuple2$2char$phsNode$ph_clone", 6, 830);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj79=result->v2,
        result->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2), "tuple2$2char$phsNode$ph_clone", 7, 833);
        (__dec_obj79 ? __dec_obj79 = come_decrement_ref_count(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0, (void*)0, "tuple2$2char$phsNode$ph_clone", 7, 832) :0);
    }
        __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result, "tuple2$2char$phsNode$ph_clone", 8, 834);
    come_call_finalizer(tuple2$2char$phsNode$ph_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple2$2char$phsNode$ph_clone}", 8, 837);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple2$2char$phsNode$ph_clone}", 8, 838);
    return __result_obj__0;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsNode$ph_finalize", 2, 835));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0, "tuple2$2char$phsNode$ph_finalize", 3, 836):(void*)0);
    }
        neo_current_frame = fr.prev;
}

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_finalize"; neo_current_frame = &fr;
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
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 844);
    }
        neo_current_frame = fr.prev;
}

static void sMethodCallNode_finalize(struct sMethodCallNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMethodCallNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sMethodCallNode_finalize", 2, 852));
    }
    if(self!=((void*)0)&&self->obj!=((void*)0)) {
        ((self->obj) ? self->obj = come_decrement_ref_count(self->obj, ((struct sNode*)self->obj)->finalize, ((struct sNode*)self->obj)->_protocol_obj, 0, 0,(void*)0, "sMethodCallNode_finalize", 3, 853):(void*)0);
    }
    if(self!=((void*)0)&&self->fun_name!=((void*)0)) {
        (self->fun_name = come_decrement_ref_count(self->fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "sMethodCallNode_finalize", 4, 854));
    }
    if(self!=((void*)0)&&self->params!=((void*)0)) {
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self->params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sMethodCallNode_finalize}", 5, 855);
    }
    if(self!=((void*)0)&&self->method_block!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sMethodCallNode_finalize}", 6, 856);
    }
    if(self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sMethodCallNode_finalize}", 7, 857);
    }
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
    return self->len;
                neo_current_frame = fr.prev;
}

static struct CVALUE*  list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct CVALUE*  default_value  ;
    struct CVALUE*  __result_obj__0  ;
    struct list_item$1CVALUE$ph* it;
    int i;
    struct CVALUE*  default_value_45  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct CVALUE* ));
                __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2148, 916);
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 917);
        neo_current_frame = fr.prev;
        come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 918);
        return __result_obj__0;
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2151, 919);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2159, 920);
            neo_current_frame = fr.prev;
            come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2159, 921);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_45,0,sizeof(struct CVALUE* ));
        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value_45, "/usr/local/include/neo-c.h", 2167, 922);
    come_call_finalizer(CVALUE_finalize, default_value_45, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 923);
    neo_current_frame = fr.prev;
    come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 924);
    return __result_obj__0;
}

static struct CVALUE*  list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_operator_load_element"; neo_current_frame = &fr;
    struct CVALUE*  default_value  ;
    struct CVALUE*  __result_obj__0  ;
    struct list_item$1CVALUE$ph* it;
    int i;
    struct CVALUE*  default_value_46  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct CVALUE* ));
                __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2148, 925);
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 926);
        neo_current_frame = fr.prev;
        come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 927);
        return __result_obj__0;
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2151, 928);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2159, 929);
            neo_current_frame = fr.prev;
            come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2159, 930);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_46,0,sizeof(struct CVALUE* ));
        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value_46, "/usr/local/include/neo-c.h", 2167, 931);
    come_call_finalizer(CVALUE_finalize, default_value_46, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 932);
    neo_current_frame = fr.prev;
    come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 933);
    return __result_obj__0;
}

static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_operator_store_element"; neo_current_frame = &fr;
    list$1sType$ph_replace(self,position,(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 2140, 958));
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 542, 959);
                            neo_current_frame = fr.prev;
}

static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_replace"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    int len;
    int i;
    struct sType*  default_value  ;
    struct list_item$1sType$ph* it;
    int i_49;
    struct sType*  __dec_obj87  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2020, 936);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(position<0) {
        position+=self->len;
    }
    if(position<0) {
        position=0;
    }
    if(self->len==0||position>=self->len) {
        len=self->len;
        for(i=0        ;i<position-len;i++){
            memset(&default_value,0,sizeof(struct sType* ));
            list$1sType$ph_push_back(self,(struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2035, 951));
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2037, 952);
        }
        list$1sType$ph_push_back(self,(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 2037, 953));
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2038, 954);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    it=self->head;
    i_49=0;
    while(it!=((void*)0)) {
        if(position==i_49) {
            __dec_obj87=it->item,
            it->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 2045, 956);
            come_call_finalizer(sType_finalize, __dec_obj87,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 2045, 955);
            break;
        }
        it=it->next;
        i_49++;
    }
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2052, 957);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_push_back"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj84  ;
    struct list_item$1sType$ph* litem_47;
    struct sType*  __dec_obj85  ;
    struct list_item$1sType$ph* litem_48;
    struct sType*  __dec_obj86  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1613, 937);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1617, 938, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1617, 939);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj84=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1621, 941);
        come_call_finalizer(sType_finalize, __dec_obj84,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1621, 940);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_47=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1627, 942, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1627, 943);
        litem_47->prev=self->head;
        litem_47->next=((void*)0);
        __dec_obj85=litem_47->item,
        litem_47->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1631, 945);
        come_call_finalizer(sType_finalize, __dec_obj85,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1631, 944);
        self->tail=litem_47;
        self->head->next=litem_47;
    }
    else {
        __right_value0 = (void*)0;
        litem_48=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1637, 946, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1637, 947);
        litem_48->prev=self->tail;
        litem_48->next=((void*)0);
        __dec_obj86=litem_48->item,
        litem_48->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1641, 949);
        come_call_finalizer(sType_finalize, __dec_obj86,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1641, 948);
        self->tail->next=litem_48;
        self->tail=litem_48;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1649, 950);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_begin"; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* result;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct tuple2$2char$phsType$ph* result_68;
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
    memset(&result_68,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__0 = result_68;
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
    struct tuple2$2char$phsType$ph* result_70;
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
    memset(&result_70,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__0 = result_70;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_add"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE*  __dec_obj96  ;
    struct list_item$1CVALUE$ph* litem_90;
    struct CVALUE*  __dec_obj97  ;
    struct list_item$1CVALUE$ph* litem_91;
    struct CVALUE*  __dec_obj98  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1529, 1169);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1532, 1170, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1532, 1171);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj96=litem->item,
        litem->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1536, 1173);
        come_call_finalizer(CVALUE_finalize, __dec_obj96,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1536, 1172);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_90=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1542, 1174, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1542, 1175);
        litem_90->prev=self->head;
        litem_90->next=((void*)0);
        __dec_obj97=litem_90->item,
        litem_90->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1546, 1177);
        come_call_finalizer(CVALUE_finalize, __dec_obj97,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1546, 1176);
        self->tail=litem_90;
        self->head->next=litem_90;
    }
    else {
        __right_value0 = (void*)0;
        litem_91=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1552, 1178, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1552, 1179);
        litem_91->prev=self->tail;
        litem_91->next=((void*)0);
        __dec_obj98=litem_91->item,
        litem_91->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1556, 1181);
        come_call_finalizer(CVALUE_finalize, __dec_obj98,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1556, 1180);
        self->tail->next=litem_91;
        self->tail=litem_91;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1564, 1182);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static char*  list$1char$ph_begin(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_96  ;
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
    memset(&result_96,0,sizeof(char* ));
        __result_obj__0 = result_96;
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
    char*  result_98  ;
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
    memset(&result_98,0,sizeof(char* ));
        __result_obj__0 = result_98;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_replace"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    int len;
    int i;
    struct CVALUE*  default_value  ;
    struct list_item$1CVALUE$ph* it;
    int i_101;
    struct CVALUE*  __dec_obj100  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2020, 1216);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(position<0) {
        position+=self->len;
    }
    if(position<0) {
        position=0;
    }
    if(self->len==0||position>=self->len) {
        len=self->len;
        for(i=0        ;i<position-len;i++){
            memset(&default_value,0,sizeof(struct CVALUE* ));
            list$1CVALUE$ph_push_back(self,(struct CVALUE* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2035, 1217));
            come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2037, 1218);
        }
        list$1CVALUE$ph_push_back(self,(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 2037, 1219));
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2038, 1220);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    it=self->head;
    i_101=0;
    while(it!=((void*)0)) {
        if(position==i_101) {
            __dec_obj100=it->item,
            it->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 2045, 1222);
            come_call_finalizer(CVALUE_finalize, __dec_obj100,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 2045, 1221);
            break;
        }
        it=it->next;
        i_101++;
    }
        __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2052, 1223);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static char*  list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph$p_operator_load_element"; neo_current_frame = &fr;
    char*  default_value  ;
    char*  __result_obj__0  ;
    struct list_item$1char$ph* it;
    int i;
    char*  default_value_106  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(char* ));
                __result_obj__0 = (char* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2148, 1239);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2148, 1240));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2148, 1241));
        return __result_obj__0;
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 2151, 1242));
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (char* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2159, 1243);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2159, 1244));
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_106,0,sizeof(char* ));
        __result_obj__0 = (char* )come_increment_ref_count(default_value_106, "/usr/local/include/neo-c.h", 2167, 1245);
    (default_value_106 = come_decrement_ref_count(default_value_106, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2167, 1246));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2167, 1247));
    return __result_obj__0;
}

static char*  list$1char$ph_operator_load_element(struct list$1char$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_operator_load_element"; neo_current_frame = &fr;
    char*  default_value  ;
    char*  __result_obj__0  ;
    struct list_item$1char$ph* it;
    int i;
    char*  default_value_107  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(char* ));
                __result_obj__0 = (char* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2148, 1248);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2148, 1249));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2148, 1250));
        return __result_obj__0;
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 2151, 1251));
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (char* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2159, 1252);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2159, 1253));
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_107,0,sizeof(char* ));
        __result_obj__0 = (char* )come_increment_ref_count(default_value_107, "/usr/local/include/neo-c.h", 2167, 1254);
    (default_value_107 = come_decrement_ref_count(default_value_107, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2167, 1255));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2167, 1256));
    return __result_obj__0;
}

static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_length"; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return self->len;
            neo_current_frame = fr.prev;
}

char*  trim_last_bracket(char*  all_code  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "trim_last_bracket"; neo_current_frame = &fr;
    char* p3;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    p3=all_code+strlen(all_code);
    while(p3>=all_code) {
        if(*p3==125&&*(p3+1)!=41) {
            break;
        }
        else {
            p3--;
        }
    }
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_substring(all_code,0,p3-all_code))), "24method.nc", 1056, 1443);
    (all_code = come_decrement_ref_count(all_code, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 1056, 1444));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 1056, 1445));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "24method.nc", 1056, 1446));
    return __result_obj__0;
}

struct sNode* parse_iterator_it(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_iterator_it"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* right_value;
    void* __right_value1 = (void*)0;
    struct sNode* node;
    struct sNode* __result_obj__0;
    info->p->p+=strlen("`it");
    skip_spaces_and_lf(info);
    expected_next_character(61,info);
    right_value=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "24method.nc", 1066, 1447);
    __right_value0 = (void*)0;
    node=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("it"), "24method.nc", 1068, 1448),((void*)0),((void*)0),((void*)0),(_Bool)1,right_value,info,(_Bool)1), "24method.nc", 1068, 1449);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "24method.nc", 1070, 1450);
    ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 1070, 1451):(void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "24method.nc", 1070, 1452):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "24method.nc", 1070, 1453):(void*)0);
    return __result_obj__0;
}

struct sIterCallNode* sIterCallNode_initialize(struct sIterCallNode* self, const char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer*  method_block  , int method_block_sline, struct list$1sType$ph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, struct sInfo*  info  , _Bool arrow_, struct sNode* parent_call_node)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIterCallNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj111;
    struct sNode* __dec_obj112;
    char*  __dec_obj113  ;
    struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj114;
    struct buffer*  __dec_obj115  ;
    struct sIterCallNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sIterCallNode*)come_increment_ref_count(self, "24method.nc", 1078, 1454),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 1078, 1455);
    __right_value0 = (void*)0;
    __dec_obj111=self->obj,
    self->obj=(struct sNode*)come_increment_ref_count(sNode_clone(obj), "24method.nc", 1080, 1457);
    (__dec_obj111 ? __dec_obj111 = come_decrement_ref_count(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0, (void*)0, "24method.nc", 1080, 1456) :0);
    __right_value0 = (void*)0;
    __dec_obj112=self->parent_call_node,
    self->parent_call_node=(struct sNode*)come_increment_ref_count(sNode_clone(parent_call_node), "24method.nc", 1081, 1459);
    (__dec_obj112 ? __dec_obj112 = come_decrement_ref_count(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0,0, (void*)0, "24method.nc", 1081, 1458) :0);
    __right_value0 = (void*)0;
    __dec_obj113=self->fun_name,
    self->fun_name=(char* )come_increment_ref_count(__builtin_string(fun_name), "24method.nc", 1082, 1461);
    __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0, (void*)0, "24method.nc", 1082, 1460);
    __right_value0 = (void*)0;
    __dec_obj114=self->params,
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(params), "24method.nc", 1083, 1463);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj114,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 1083, 1462);
    __right_value0 = (void*)0;
    __dec_obj115=self->method_block,
    self->method_block=(struct buffer* )come_increment_ref_count(buffer_clone(method_block), "24method.nc", 1084, 1465);
    come_call_finalizer(buffer_finalize, __dec_obj115,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 1084, 1464);
    self->method_block_sline=method_block_sline;
        __result_obj__0 = (struct sIterCallNode*)come_increment_ref_count(self, "24method.nc", 1088, 1466);
    come_call_finalizer(sIterCallNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "24method.nc}", 1088, 1473);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 1088, 1474):(void*)0);
    ((parent_call_node) ? parent_call_node = come_decrement_ref_count(parent_call_node, ((struct sNode*)parent_call_node)->finalize, ((struct sNode*)parent_call_node)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 1088, 1475):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sIterCallNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "24method.nc}", 1088, 1476);
    return __result_obj__0;
}

struct sNode* sIterCallNode_left_value(struct sIterCallNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIterCallNode_left_value"; neo_current_frame = &fr;
    struct sNode* __result_obj__0;
        __result_obj__0 = self->parent_call_node;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool sIterCallNode_terminated(struct sIterCallNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIterCallNode_terminated"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

char*  sIterCallNode_kind(struct sIterCallNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIterCallNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sIterCall"))), "24method.nc", 1106, 1477);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 1106, 1478));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "24method.nc", 1106, 1479));
    return __result_obj__0;
}

_Bool sIterCallNode_compile(struct sIterCallNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIterCallNode_compile"; neo_current_frame = &fr;
    char*  fun_name  ;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    void* __right_value0 = (void*)0;
    struct sNode* obj;
    struct buffer*  method_block  ;
    struct sNode* parent_call_node;
    _Bool recursive;
    struct CVALUE*  obj_value  ;
    struct sType*  obj_type  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  __dec_obj116  ;
    char*  __dec_obj117  ;
    struct sType*  __dec_obj118  ;
    struct sType*  __dec_obj119  ;
    _Bool Value;
    _Bool __result_obj__0;
    struct CVALUE*  __dec_obj120  ;
    struct sType*  __dec_obj121  ;
    char*  __dec_obj122  ;
    struct sType*  __dec_obj123  ;
    char*  generics_fun_name  ;
    struct sGenericsFun*  generics_fun  ;
    struct list$1sType$ph* param_types;
    struct list$1sType$ph* _o2_saved_19;
    struct sType*  it  ;
    struct sType*  it2  ;
    struct sType*  no_solved_obj_type  ;
    struct sType*  it3  ;
    struct list$1CVALUE$ph* come_params;
    int i;
    struct list$1tuple2$2char$phsNode$ph$ph* _o2_saved_20;
    struct tuple2$2char$phsNode$ph* it_122;
    struct tuple2$2char$phsNode$ph* multiple_assign_var18
;    char*  label  =0;
    struct sNode* node=0;
    _Bool Value_123;
    struct CVALUE*  come_value  ;
    struct sType*  __dec_obj124  ;
    _Bool _conditional_value_X0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    _Bool _conditional_value_X1;
    int i_124;
    struct list$1char$ph* _o2_saved_21;
    char*  it_125  ;
    char*  name  ;
    struct CVALUE*  come_value_126  ;
    struct sType*  come_type  ;
    _Bool use_iter_next;
    char*  text  ;
    char* p;
    char* end;
    struct buffer*  buf  ;
    _Bool squort;
    _Bool dquort;
    char*  method_block2  ;
    char*  __dec_obj125  ;
    char*  __dec_obj126  ;
    char*  __dec_obj127  ;
    struct sNode* _inf_value4;
    struct sIterCallNode* _inf_obj_value4;
    struct sNode* last_node;
    struct sNode* node_127;
    _Bool Value_128;
    char*  all_code  ;
    char*  all_code2  ;
    struct buffer*  source  ;
    char* p_129;
    char* head;
    char* end_130;
    struct sType*  generics_type  ;
    struct list$1char$ph* generics_type_names;
    struct list$1char$ph* first_pass_generics_type_names;
    struct list$1char$ph* second_pass_generics_type_names;
    struct list$1char$ph* __dec_obj134;
    struct buffer*  __dec_obj135  ;
    struct span$1char$p* __dec_obj136;
    struct sType*  __dec_obj137  ;
    struct sBlock*  block  ;
    struct sType*  __dec_obj138  ;
    struct sType*  __dec_obj139  ;
    _Bool no_output_come_code;
    char*  all_code2_131  ;
    struct buffer*  __dec_obj140  ;
    struct span$1char$p* __dec_obj141;
    struct list$1char$ph* __dec_obj142;
    struct sBlock*  block_132  ;
    struct buffer*  __dec_obj143  ;
    struct span$1char$p* __dec_obj144;
    struct sType*  __dec_obj145  ;
    struct list$1char$ph* __dec_obj146;
    char*  __dec_obj147  ;
    char*  __dec_obj148  ;
    char*  __dec_obj149  ;
    char*  text_133  ;
    _Bool use_iter_next_134;
    char* p_135;
    char* end_136;
    struct buffer*  buf_137  ;
    _Bool squort_138;
    _Bool dquort_139;
    char*  method_block2_140  ;
    char*  __dec_obj150  ;
    char*  __dec_obj151  ;
    char*  __dec_obj152  ;
    memset(&obj_value, 0, sizeof(obj_value));
    memset(&obj_type, 0, sizeof(obj_type));
    memset(&i, 0, sizeof(i));
    fun_name=(char* )come_increment_ref_count(self->fun_name, "24method.nc", 1111, 1480);
    params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self->params, "24method.nc", 1112, 1481);
    obj=(struct sNode*)come_increment_ref_count(sNode_clone(self->obj), "24method.nc", 1113, 1482);
    __right_value0 = (void*)0;
    method_block=(struct buffer* )come_increment_ref_count(buffer_clone(self->method_block), "24method.nc", 1114, 1483);
    __right_value0 = (void*)0;
    parent_call_node=(struct sNode*)come_increment_ref_count(sNode_clone(self->parent_call_node), "24method.nc", 1115, 1484);
    recursive=info->iter_buffer!=((void*)0);
    if(recursive&&info->iter_block&&info->iter_type) {
        __right_value0 = (void*)0;
        __dec_obj116=obj_value,
        obj_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "24method.nc", 1121, 1485, "struct CVALUE* "), "24method.nc", 1121, 1486)), "24method.nc", 1121, 1488);
        come_call_finalizer(CVALUE_finalize, __dec_obj116,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 1121, 1487);
        __right_value0 = (void*)0;
        __dec_obj117=obj_value->c_value,
        obj_value->c_value=(char* )come_increment_ref_count((char* )come_memdup(info->iter_block, "24method.nc", 1122, 1489, "char* "), "24method.nc", 1122, 1491);
        __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0, (void*)0, "24method.nc", 1122, 1490);
        __right_value0 = (void*)0;
        __dec_obj118=obj_value->type,
        obj_value->type=(struct sType* )come_increment_ref_count(sType_clone(info->iter_type), "24method.nc", 1123, 1493);
        come_call_finalizer(sType_finalize, __dec_obj118,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 1123, 1492);
        obj_value->var=((void*)0);
        __right_value0 = (void*)0;
        __dec_obj119=obj_type,
        obj_type=(struct sType* )come_increment_ref_count(sType_clone(obj_value->type), "24method.nc", 1126, 1495);
        come_call_finalizer(sType_finalize, __dec_obj119,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 1126, 1494);
    }
    else {
        Value=node_compile(obj,info);
        if(!Value) {
                        __result_obj__0 = (_Bool)0;
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 1130, 1496));
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1130, 1497);
            ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 1130, 1498):(void*)0);
            come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1130, 1499);
            ((parent_call_node) ? parent_call_node = come_decrement_ref_count(parent_call_node, ((struct sNode*)parent_call_node)->finalize, ((struct sNode*)parent_call_node)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 1130, 1500):(void*)0);
            come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1130, 1501);
            come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1130, 1502);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        __dec_obj120=obj_value,
        obj_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "24method.nc", 1133, 1504);
        come_call_finalizer(CVALUE_finalize, __dec_obj120,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 1133, 1503);
        __right_value0 = (void*)0;
        __dec_obj121=obj_type,
        obj_type=(struct sType* )come_increment_ref_count(sType_clone(obj_value->type), "24method.nc", 1135, 1506);
        come_call_finalizer(sType_finalize, __dec_obj121,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 1135, 1505);
        if(!recursive) {
            __right_value0 = (void*)0;
            __dec_obj122=info->iter_block,
            info->iter_block=(char* )come_increment_ref_count((char* )come_memdup(obj_value->c_value, "24method.nc", 1138, 1507, "char* "), "24method.nc", 1138, 1509);
            __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0, (void*)0, "24method.nc", 1138, 1508);
            __right_value0 = (void*)0;
            __dec_obj123=info->iter_type,
            info->iter_type=(struct sType* )come_increment_ref_count(sType_clone(obj_value->type), "24method.nc", 1139, 1511);
            come_call_finalizer(sType_finalize, __dec_obj123,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 1139, 1510);
        }
    }
    __right_value0 = (void*)0;
    generics_fun_name=(char* )come_increment_ref_count(get_method_from_iter_call(fun_name,obj_type,info), "24method.nc", 1143, 1512);
    __right_value0 = (void*)0;
    generics_fun=((struct sGenericsFun* )(__right_value0=map$2char$phsGenericsFun$ph_at(info->generics_funcs,generics_fun_name,((void*)0),(_Bool)0)));
    if(generics_fun==((void*)0)) {
        err_msg(info,"generics fun %s is not found",generics_fun_name);
        exit(1);
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    param_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "24method.nc", 1151, 1513, "struct list$1sType$ph*"), "24method.nc", 1151, 1514)), "24method.nc", 1151, 1515);
    for(_o2_saved_19=(struct list$1sType$ph*)come_increment_ref_count(generics_fun->mParamTypes, "24method.nc", 1152, 1516),it=list$1sType$ph_begin(_o2_saved_19)    ;!list$1sType$ph_end(_o2_saved_19);it=list$1sType$ph_next(_o2_saved_19)){
        if(it==((void*)0)) {
            __right_value0 = (void*)0;
            list$1sType$ph_push_back(param_types,(struct sType* )come_increment_ref_count(sType_clone(it), "24method.nc", 1154, 1517));
        }
        else {
            __right_value0 = (void*)0;
            it2=(struct sType* )come_increment_ref_count(solve_generics(it,info->generics_type,info), "24method.nc", 1157, 1518);
            no_solved_obj_type=(struct sType* )come_increment_ref_count(obj_type->mNoSolvedGenericsType, "24method.nc", 1159, 1519);
            __right_value0 = (void*)0;
            it3=(struct sType* )come_increment_ref_count(solve_generics(it,no_solved_obj_type,info), "24method.nc", 1160, 1520);
            list$1sType$ph_push_back(param_types,(struct sType* )come_increment_ref_count(it2, "24method.nc", 1162, 1521));
            come_call_finalizer(sType_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1164, 1522);
            come_call_finalizer(sType_finalize, no_solved_obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1164, 1523);
            come_call_finalizer(sType_finalize, it3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1164, 1524);
        }
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "24method.nc", 1166, 1525, "struct list$1CVALUE$ph*"), "24method.nc", 1166, 1526)), "24method.nc", 1166, 1527);
    i+0;
    for(_o2_saved_20=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params, "24method.nc", 1168, 1528),it_122=list$1tuple2$2char$phsNode$ph$ph_begin(_o2_saved_20)    ;!list$1tuple2$2char$phsNode$ph$ph_end(_o2_saved_20);it_122=list$1tuple2$2char$phsNode$ph$ph_next(_o2_saved_20)){
        multiple_assign_var18=it_122;
        label=(char* )come_increment_ref_count(multiple_assign_var18->v1, "24method.nc", 1169, 1529);
        node=(struct sNode*)come_increment_ref_count(multiple_assign_var18->v2, "24method.nc", 1169, 1530);
        Value_123=node_compile(node,info);
        if(!Value_123) {
                        __result_obj__0 = (_Bool)0;
            (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 1172, 1531));
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 1172, 1532):(void*)0);
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 1172, 1533));
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1172, 1534);
            ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 1172, 1535):(void*)0);
            come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1172, 1536);
            ((parent_call_node) ? parent_call_node = come_decrement_ref_count(parent_call_node, ((struct sNode*)parent_call_node)->finalize, ((struct sNode*)parent_call_node)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 1172, 1537):(void*)0);
            come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1172, 1538);
            come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1172, 1539);
            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 1172, 1540));
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1172, 1541);
            come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_19, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1172, 1542);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1172, 1543);
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_20, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1172, 1544);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "24method.nc", 1175, 1545);
        __right_value0 = (void*)0;
        __dec_obj124=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(solve_generics(come_value->type,info->generics_type,info), "24method.nc", 1177, 1547);
        come_call_finalizer(sType_finalize, __dec_obj124,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 1177, 1546);
        if(__right_value0 = (void*)0,
({(_conditional_value_X0=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,i)))));        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 1179, 1548);
_conditional_value_X0;})) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            check_assign_type(((char*)(__right_value2=xsprintf("(d). \%s param num \%s is assinged to",((char* )(__right_value0=string_to_string(fun_name))),((char* )(__right_value1=int_to_string(i)))))),((struct sType* )(__right_value3=list$1sType$ph_operator_load_element(param_types,i))),come_value->type,come_value,info);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 1180, 1549));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 1180, 1550));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 1180, 1551));
            come_call_finalizer(sType_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 1180, 1552);
        }
        if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X1=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,i)))&&((struct sType* )(__right_value1=list$1sType$ph_operator_load_element(param_types,i)))->mHeap&&come_value->type->mHeap));        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 1182, 1553);
        come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 1182, 1554);
_conditional_value_X1;})) {
            __right_value0 = (void*)0;
            std_move(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,i))),come_value->type,come_value,info);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 1183, 1555);
        }
        list$1CVALUE$ph_add(come_params,(struct CVALUE* )come_increment_ref_count(come_value, "24method.nc", 1186, 1556));
        i++;
        (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 1190, 1557));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 1190, 1558):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1190, 1559);
    }
    i_124=0;
    for(_o2_saved_21=(struct list$1char$ph*)come_increment_ref_count(generics_fun->mParamNames, "24method.nc", 1191, 1560),it_125=list$1char$ph_begin(_o2_saved_21)    ;!list$1char$ph_end(_o2_saved_21);it_125=list$1char$ph_next(_o2_saved_21)){
        __right_value0 = (void*)0;
        name=(char* )come_increment_ref_count(__builtin_string(it_125), "24method.nc", 1192, 1561);
        __right_value0 = (void*)0;
        come_value_126=(struct CVALUE* )come_increment_ref_count(list$1CVALUE$ph_operator_load_element(come_params,i_124), "24method.nc", 1193, 1562);
        __right_value0 = (void*)0;
        come_type=(struct sType* )come_increment_ref_count(list$1sType$ph_operator_load_element(param_types,i_124), "24method.nc", 1194, 1563);
        add_variable_to_table(name,come_type,info,(_Bool)0,(_Bool)0,(_Bool)0);
        add_come_code(info,"%s=%s;\n",name,come_value_126->c_value);
        __right_value0 = (void*)0;
        add_come_code_at_function_head(info,"%s\n;",((char* )(__right_value0=make_define_var(come_type,name,info,(_Bool)0,(_Bool)0))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 1200, 1564));
        i_124++;
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 1204, 1565));
        come_call_finalizer(CVALUE_finalize, come_value_126, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1204, 1566);
        come_call_finalizer(sType_finalize, come_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1204, 1567);
    }
    if(!recursive) {
        use_iter_next=info->use_iter_next;
        __right_value0 = (void*)0;
        text=(char* )come_increment_ref_count(string_operator_load_range_element(generics_fun->mBlock,1,-2), "24method.nc", 1207, 1568);
        p=text;
        end=text+strlen(text);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "24method.nc", 1211, 1569, "struct buffer* "), "24method.nc", 1211, 1570)), "24method.nc", 1211, 1571);
        squort=(_Bool)0;
        dquort=(_Bool)0;
        while(*p) {
            if(!dquort&&!squort&&*p==92) {
                p++;
                buffer_append_char(buf,*p);
                p++;
            }
            else if(!dquort&&*p==39) {
                squort=!squort;
                buffer_append_char(buf,*p);
                p++;
            }
            else if(!squort&&*p==34) {
                dquort=!dquort;
                buffer_append_char(buf,*p);
                p++;
            }
            else if(dquort||squort) {
                buffer_append_char(buf,*p);
                p++;
            }
            else if((end-p)>strlen("`block()")&&memcmp(p,"`block()",strlen("`block()"))==0) {
                p+=strlen("`block()");
                if(!use_iter_next) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __right_value3 = (void*)0;
                    method_block2=(char* )come_increment_ref_count(trim_last_bracket((char* )come_increment_ref_count(string_operator_load_range_element(((char* )(__right_value1=buffer_to_string(method_block))),1,-1), "24method.nc", 1237, 1572),info), "24method.nc", 1237, 1573);
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 1237, 1574));
                    buffer_append_str(buf,method_block2);
                    (method_block2 = come_decrement_ref_count(method_block2, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 1243, 1575));
                }
                else {
                    info->use_iter_next=(_Bool)0;
                }
            }
            else if((end-p)>strlen("`next()")&&memcmp(p,"`next()",strlen("`next()"))==0) {
                p+=strlen("`next()");
                if(info->iter_next) {
                    buffer_append_str(buf,info->iter_buffer);
                    __right_value0 = (void*)0;
                    __dec_obj125=info->iter_buffer,
                    info->iter_buffer=(char*)come_increment_ref_count(xsprintf(""), "24method.nc", 1248, 1577);
                    __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0, (void*)0, "24method.nc", 1248, 1576);
                    info->use_iter_next=(_Bool)1;
                }
            }
            else if((end-p)>strlen("`self")&&memcmp(p,"`self",strlen("`self"))==0) {
                p+=strlen("`self");
                buffer_append_str(buf,obj_value->c_value);
            }
            else {
                buffer_append_char(buf,*p);
                p++;
            }
        }
        __right_value0 = (void*)0;
        __dec_obj126=info->iter_buffer,
        info->iter_buffer=(char* )come_increment_ref_count(buffer_to_string(buf), "24method.nc", 1262, 1579);
        __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0, (void*)0, "24method.nc", 1262, 1578);
        __right_value0 = (void*)0;
        __dec_obj127=info->iter_next,
        info->iter_next=(char* )come_increment_ref_count(buffer_to_string(buf), "24method.nc", 1263, 1581);
        __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0, (void*)0, "24method.nc", 1263, 1580);
        __right_value0 = (void*)0;
        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "24method.nc", 1266, 1599, "struct sNode");
        _inf_obj_value4=(struct sIterCallNode*)come_increment_ref_count((((struct sIterCallNode*)(__right_value0=sIterCallNode_clone(self)))), "24method.nc", 1266, 1600);
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sIterCallNode_finalize;
        _inf_value4->clone=(void*)sIterCallNode_clone;
        _inf_value4->compile=(void*)sIterCallNode_compile;
        _inf_value4->sline=(void*)sNodeBase_sline;
        _inf_value4->sline_real=(void*)sNodeBase_sline_real;
        _inf_value4->sname=(void*)sNodeBase_sname;
        _inf_value4->terminated=(void*)sIterCallNode_terminated;
        _inf_value4->kind=(void*)sIterCallNode_kind;
        _inf_value4->left_value=(void*)sIterCallNode_left_value;
        __right_value1 = (void*)0;
        last_node=(struct sNode*)come_increment_ref_count(_inf_value4, "24method.nc", 1266, 1601);
        come_call_finalizer(sIterCallNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 1266, 1602);
        node_127=last_node;
        node_127=node_127->left_value(node_127->_protocol_obj);
        while(node_127) {
            Value_128=node_compile(node_127,info);
            if(!Value_128) {
                                __result_obj__0 = (_Bool)0;
                (text = come_decrement_ref_count(text, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 1271, 1603));
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1271, 1604);
                ((last_node) ? last_node = come_decrement_ref_count(last_node, ((struct sNode*)last_node)->finalize, ((struct sNode*)last_node)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 1271, 1605):(void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 1271, 1606));
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1271, 1607);
                ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 1271, 1608):(void*)0);
                come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1271, 1609);
                ((parent_call_node) ? parent_call_node = come_decrement_ref_count(parent_call_node, ((struct sNode*)parent_call_node)->finalize, ((struct sNode*)parent_call_node)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 1271, 1610):(void*)0);
                come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1271, 1611);
                come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1271, 1612);
                (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 1271, 1613));
                come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1271, 1614);
                come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_19, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1271, 1615);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1271, 1616);
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_20, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1271, 1617);
                come_call_finalizer(list$1char$ph$p_finalize, _o2_saved_21, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1271, 1618);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            node_127=node_127->left_value(node_127->_protocol_obj);
        }
        all_code=(char* )come_increment_ref_count(info->iter_buffer, "24method.nc", 1278, 1619);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        all_code2=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=charp_operator_add("{",all_code))),"}"), "24method.nc", 1280, 1620);
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 1280, 1621));
        source=(struct buffer* )come_increment_ref_count(info->source, "24method.nc", 1282, 1622);
        p_129=info->p->p;
        head=info->head;
        end_130=info->end;
        generics_type=(struct sType* )come_increment_ref_count(info->generics_type, "24method.nc", 1287, 1623);
        generics_type_names=(struct list$1char$ph*)come_increment_ref_count(info->generics_type_names, "24method.nc", 1288, 1624);
        __right_value0 = (void*)0;
        first_pass_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(info->generics_type_names), "24method.nc", 1289, 1625);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        second_pass_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "24method.nc", 1290, 1626, "struct list$1char$ph*"), "24method.nc", 1290, 1627)), "24method.nc", 1290, 1628);
        __right_value0 = (void*)0;
        list$1char$ph_add(second_pass_generics_type_names,(char*)come_increment_ref_count(xsprintf("T"), "24method.nc", 1291, 1629));
        __dec_obj134=info->generics_type_names,
        info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(first_pass_generics_type_names, "24method.nc", 1293, 1631);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj134,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 1293, 1630);
        __right_value0 = (void*)0;
        __dec_obj135=info->source,
        info->source=(struct buffer* )come_increment_ref_count(charp_to_buffer(all_code2), "24method.nc", 1294, 1633);
        come_call_finalizer(buffer_finalize, __dec_obj135,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 1294, 1632);
        if(info->p==((void*)0)) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj136=info->p,
            info->p=(struct span$1buffer$p*)come_increment_ref_count(span$1buffer$p_initialize((struct span$1buffer$p*)come_increment_ref_count((struct span$1buffer$p*)come_calloc(1, sizeof(struct span$1buffer$p)*(1), "24method.nc", 1296, 1634, "struct span$1buffer$p*"), "24method.nc", 1296, 1635),info->source->buf,info->source->len+1,(_Bool)1,(_Bool)0,(_Bool)0,neo_current_frame->stacktop), "24method.nc", 1296, 1637);
            come_call_finalizer(span$1char$p$p_finalize, __dec_obj136,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 1296, 1636);
        }
        info->p->memory=info->source->buf;
        info->p->len=info->source->len+2;
        info->p->p=info->source->buf;
        info->head=info->source->buf;
        info->end=info->source->buf+info->source->len;
        if(obj_type->mNoSolvedGenericsType) {
            __dec_obj137=info->generics_type,
            info->generics_type=(struct sType* )come_increment_ref_count(obj_type->mNoSolvedGenericsType, "24method.nc", 1305, 1639);
            come_call_finalizer(sType_finalize, __dec_obj137,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 1305, 1638);
            __right_value0 = (void*)0;
            list$1char$ph_add(info->generics_type_names,(char*)come_increment_ref_count(xsprintf("T"), "24method.nc", 1306, 1640));
        }
        __right_value0 = (void*)0;
        block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "24method.nc", 1309, 1641);
        if(obj_type->mNoSolvedGenericsType) {
            __dec_obj138=info->generics_type,
            info->generics_type=(struct sType* )come_increment_ref_count(obj_type->mNoSolvedGenericsType, "24method.nc", 1312, 1643);
            come_call_finalizer(sType_finalize, __dec_obj138,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 1312, 1642);
            __right_value0 = (void*)0;
            list$1char$ph_add(info->generics_type_names,(char*)come_increment_ref_count(xsprintf("T"), "24method.nc", 1313, 1644));
        }
        __dec_obj139=info->iter_type,
        info->iter_type=((void*)0);
        come_call_finalizer(sType_finalize, __dec_obj139,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 1316, 1645);
        no_output_come_code=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        transpile_block(block,((void*)0),((void*)0),info,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0);
        (all_code2 = come_decrement_ref_count(all_code2, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 1322, 1646));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        all_code2_131=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=charp_operator_add("{",all_code))),"}"), "24method.nc", 1322, 1647);
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 1322, 1648));
        info->no_output_come_code=no_output_come_code;
        __right_value0 = (void*)0;
        __dec_obj140=info->source,
        info->source=(struct buffer* )come_increment_ref_count(charp_to_buffer(all_code2_131), "24method.nc", 1326, 1650);
        come_call_finalizer(buffer_finalize, __dec_obj140,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 1326, 1649);
        if(info->p==((void*)0)) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj141=info->p,
            info->p=(struct span$1buffer$p*)come_increment_ref_count(span$1buffer$p_initialize((struct span$1buffer$p*)come_increment_ref_count((struct span$1buffer$p*)come_calloc(1, sizeof(struct span$1buffer$p)*(1), "24method.nc", 1328, 1651, "struct span$1buffer$p*"), "24method.nc", 1328, 1652),info->source->buf,info->source->len+1,(_Bool)1,(_Bool)0,(_Bool)0,neo_current_frame->stacktop), "24method.nc", 1328, 1654);
            come_call_finalizer(span$1char$p$p_finalize, __dec_obj141,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 1328, 1653);
        }
        info->p->memory=info->source->buf;
        info->p->len=info->source->len+2;
        info->p->p=info->source->buf;
        info->head=info->source->buf;
        info->end=info->source->buf+info->source->len;
        __dec_obj142=info->generics_type_names,
        info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(second_pass_generics_type_names, "24method.nc", 1336, 1656);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj142,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 1336, 1655);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1338, 1657);
        __right_value0 = (void*)0;
        block_132=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "24method.nc", 1338, 1658);
        transpile_block(block_132,((void*)0),((void*)0),info,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0);
        __dec_obj143=info->source,
        info->source=(struct buffer* )come_increment_ref_count(source, "24method.nc", 1342, 1660);
        come_call_finalizer(buffer_finalize, __dec_obj143,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 1342, 1659);
        if(info->p==((void*)0)) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj144=info->p,
            info->p=(struct span$1buffer$p*)come_increment_ref_count(span$1buffer$p_initialize((struct span$1buffer$p*)come_increment_ref_count((struct span$1buffer$p*)come_calloc(1, sizeof(struct span$1buffer$p)*(1), "24method.nc", 1344, 1661, "struct span$1buffer$p*"), "24method.nc", 1344, 1662),info->source->buf,info->source->len+1,(_Bool)1,(_Bool)0,(_Bool)0,neo_current_frame->stacktop), "24method.nc", 1344, 1664);
            come_call_finalizer(span$1char$p$p_finalize, __dec_obj144,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 1344, 1663);
        }
        info->p->memory=info->source->buf;
        info->p->len=info->source->len+2;
        info->p->p=info->source->buf;
        info->p->p=p_129;
        info->head=head;
        info->end=end_130;
        __dec_obj145=info->generics_type,
        info->generics_type=(struct sType* )come_increment_ref_count(generics_type, "24method.nc", 1353, 1666);
        come_call_finalizer(sType_finalize, __dec_obj145,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 1353, 1665);
        __dec_obj146=info->generics_type_names,
        info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(generics_type_names, "24method.nc", 1354, 1668);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj146,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 1354, 1667);
        __dec_obj147=info->iter_buffer,
        info->iter_buffer=((void*)0);
        __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0,0, (void*)0, "24method.nc", 1356, 1669);
        __dec_obj148=info->iter_block,
        info->iter_block=((void*)0);
        __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0,0, (void*)0, "24method.nc", 1357, 1670);
        __dec_obj149=info->iter_next,
        info->iter_next=((void*)0);
        __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0,0, (void*)0, "24method.nc", 1358, 1671);
        info->use_iter_next=(_Bool)0;
        (text = come_decrement_ref_count(text, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 1421, 1672));
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1421, 1673);
        ((last_node) ? last_node = come_decrement_ref_count(last_node, ((struct sNode*)last_node)->finalize, ((struct sNode*)last_node)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 1421, 1674):(void*)0);
        (all_code = come_decrement_ref_count(all_code, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 1421, 1675));
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1421, 1676);
        come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1421, 1677);
        come_call_finalizer(list$1char$ph$p_finalize, generics_type_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1421, 1678);
        come_call_finalizer(list$1char$ph$p_finalize, first_pass_generics_type_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1421, 1679);
        come_call_finalizer(list$1char$ph$p_finalize, second_pass_generics_type_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1421, 1680);
        (all_code2_131 = come_decrement_ref_count(all_code2_131, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 1421, 1681));
        come_call_finalizer(sBlock_finalize, block_132, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1421, 1682);
    }
    else {
        __right_value0 = (void*)0;
        text_133=(char* )come_increment_ref_count(string_operator_load_range_element(generics_fun->mBlock,1,-2), "24method.nc", 1362, 1683);
        use_iter_next_134=info->use_iter_next;
        p_135=text_133;
        end_136=text_133+strlen(text_133);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf_137=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "24method.nc", 1367, 1684, "struct buffer* "), "24method.nc", 1367, 1685)), "24method.nc", 1367, 1686);
        squort_138=(_Bool)0;
        dquort_139=(_Bool)0;
        while(*p_135) {
            if(!dquort_139&&!squort_138&&*p_135==92) {
                p_135++;
                buffer_append_char(buf_137,*p_135);
                p_135++;
            }
            else if(!dquort_139&&*p_135==39) {
                squort_138=!squort_138;
                buffer_append_char(buf_137,*p_135);
                p_135++;
            }
            else if(!squort_138&&*p_135==34) {
                dquort_139=!dquort_139;
                buffer_append_char(buf_137,*p_135);
                p_135++;
            }
            else if(dquort_139||squort_138) {
                buffer_append_char(buf_137,*p_135);
                p_135++;
            }
            else if((end_136-p_135)>strlen("`block()")&&memcmp(p_135,"`block()",strlen("`block()"))==0) {
                p_135+=strlen("`block()");
                if(!use_iter_next_134) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __right_value3 = (void*)0;
                    method_block2_140=(char* )come_increment_ref_count(trim_last_bracket((char* )come_increment_ref_count(string_operator_load_range_element(((char* )(__right_value1=buffer_to_string(method_block))),1,-1), "24method.nc", 1393, 1687),info), "24method.nc", 1393, 1688);
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 1393, 1689));
                    buffer_append_str(buf_137,method_block2_140);
                    (method_block2_140 = come_decrement_ref_count(method_block2_140, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 1399, 1690));
                }
                else {
                    info->use_iter_next=(_Bool)0;
                }
            }
            else if((end_136-p_135)>strlen("`next()")&&memcmp(p_135,"`next()",strlen("`next()"))==0) {
                p_135+=strlen("`next()");
                if(info->iter_next) {
                    buffer_append_str(buf_137,info->iter_buffer);
                    __right_value0 = (void*)0;
                    __dec_obj150=info->iter_buffer,
                    info->iter_buffer=(char*)come_increment_ref_count(xsprintf(""), "24method.nc", 1404, 1692);
                    __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0,0, (void*)0, "24method.nc", 1404, 1691);
                    info->use_iter_next=(_Bool)1;
                }
            }
            else if((end_136-p_135)>strlen("`self")&&memcmp(p_135,"`self",strlen("`self"))==0) {
                p_135+=strlen("`self");
                buffer_append_str(buf_137,obj_value->c_value);
            }
            else {
                buffer_append_char(buf_137,*p_135);
                p_135++;
            }
        }
        __right_value0 = (void*)0;
        __dec_obj151=info->iter_next,
        info->iter_next=(char* )come_increment_ref_count(buffer_to_string(buf_137), "24method.nc", 1417, 1694);
        __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0,0, (void*)0, "24method.nc", 1417, 1693);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __dec_obj152=info->iter_buffer,
        info->iter_buffer=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=buffer_to_string(buf_137))),info->iter_buffer), "24method.nc", 1418, 1696);
        __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0,0, (void*)0, "24method.nc", 1418, 1695);
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 1418, 1697));
        (text_133 = come_decrement_ref_count(text_133, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 1421, 1698));
        come_call_finalizer(buffer_finalize, buf_137, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1421, 1699);
    }
        __result_obj__0 = (_Bool)1;
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 1421, 1700));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1421, 1701);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 1421, 1702):(void*)0);
    come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1421, 1703);
    ((parent_call_node) ? parent_call_node = come_decrement_ref_count(parent_call_node, ((struct sNode*)parent_call_node)->finalize, ((struct sNode*)parent_call_node)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 1421, 1704):(void*)0);
    come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1421, 1705);
    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1421, 1706);
    (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 1421, 1707));
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1421, 1708);
    come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_19, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1421, 1709);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1421, 1710);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_20, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1421, 1711);
    come_call_finalizer(list$1char$ph$p_finalize, _o2_saved_21, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1421, 1712);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sIterCallNode_finalize(struct sIterCallNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIterCallNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sIterCallNode_finalize", 2, 1467));
    }
    if(self!=((void*)0)&&self->obj!=((void*)0)) {
        ((self->obj) ? self->obj = come_decrement_ref_count(self->obj, ((struct sNode*)self->obj)->finalize, ((struct sNode*)self->obj)->_protocol_obj, 0, 0,(void*)0, "sIterCallNode_finalize", 3, 1468):(void*)0);
    }
    if(self!=((void*)0)&&self->parent_call_node!=((void*)0)) {
        ((self->parent_call_node) ? self->parent_call_node = come_decrement_ref_count(self->parent_call_node, ((struct sNode*)self->parent_call_node)->finalize, ((struct sNode*)self->parent_call_node)->_protocol_obj, 0, 0,(void*)0, "sIterCallNode_finalize", 4, 1469):(void*)0);
    }
    if(self!=((void*)0)&&self->fun_name!=((void*)0)) {
        (self->fun_name = come_decrement_ref_count(self->fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "sIterCallNode_finalize", 5, 1470));
    }
    if(self!=((void*)0)&&self->params!=((void*)0)) {
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self->params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sIterCallNode_finalize}", 6, 1471);
    }
    if(self!=((void*)0)&&self->method_block!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sIterCallNode_finalize}", 7, 1472);
    }
        neo_current_frame = fr.prev;
}

static struct sIterCallNode* sIterCallNode_clone(struct sIterCallNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIterCallNode_clone"; neo_current_frame = &fr;
    struct sIterCallNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sIterCallNode*  result  ;
    char*  __dec_obj128  ;
    struct sNode* __dec_obj129;
    struct sNode* __dec_obj130;
    char*  __dec_obj131  ;
    struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj132;
    struct buffer*  __dec_obj133  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sIterCallNode* )come_increment_ref_count((struct sIterCallNode *)come_calloc(1, sizeof(struct sIterCallNode )*(1), "sIterCallNode_clone", 5, 1582, "struct sIterCallNode* "), "sIterCallNode_clone", 5, 1583);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj128=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sIterCallNode_clone", 7, 1584, "char* "), "sIterCallNode_clone", 7, 1586);
        __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0, (void*)0, "sIterCallNode_clone", 7, 1585);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->obj!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj129=result->obj,
        result->obj=(struct sNode*)come_increment_ref_count(sNode_clone(self->obj), "sIterCallNode_clone", 9, 1588);
        (__dec_obj129 ? __dec_obj129 = come_decrement_ref_count(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0, (void*)0, "sIterCallNode_clone", 9, 1587) :0);
    }
    if(self!=((void*)0)&&self->parent_call_node!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj130=result->parent_call_node,
        result->parent_call_node=(struct sNode*)come_increment_ref_count(sNode_clone(self->parent_call_node), "sIterCallNode_clone", 10, 1590);
        (__dec_obj130 ? __dec_obj130 = come_decrement_ref_count(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0,0, (void*)0, "sIterCallNode_clone", 10, 1589) :0);
    }
    if(self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj131=result->fun_name,
        result->fun_name=(char* )come_increment_ref_count((char* )come_memdup(self->fun_name, "sIterCallNode_clone", 11, 1591, "char* "), "sIterCallNode_clone", 11, 1593);
        __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0,0, (void*)0, "sIterCallNode_clone", 11, 1592);
    }
    if(self!=((void*)0)&&self->params!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj132=result->params,
        result->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->params), "sIterCallNode_clone", 12, 1595);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj132,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sIterCallNode_clone", 12, 1594);
    }
    if(self!=((void*)0)&&self->method_block!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj133=result->method_block,
        result->method_block=(struct buffer* )come_increment_ref_count(buffer_clone(self->method_block), "sIterCallNode_clone", 13, 1597);
        come_call_finalizer(buffer_finalize, __dec_obj133,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sIterCallNode_clone", 13, 1596);
    }
    if(self!=((void*)0)) {
        result->method_block_sline=self->method_block_sline;
    }
        __result_obj__0 = result;
    come_call_finalizer(sIterCallNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sIterCallNode_clone}", 15, 1598);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* create_method_call(const char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer*  method_block  , int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo*  info  , _Bool arrow_)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_method_call"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value5;
    struct sMethodCallNode* _inf_obj_value5;
    void* __right_value2 = (void*)0;
    struct sNode* node;
    struct sNode* __dec_obj159;
    struct sNode* __result_obj__0;
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "24method.nc", 1427, 1716, "struct sNode");
    _inf_obj_value5=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value1=sMethodCallNode_initialize((struct sMethodCallNode* )come_increment_ref_count((struct sMethodCallNode *)come_calloc(1, sizeof(struct sMethodCallNode )*(1), "24method.nc", 1427, 1713, "struct sMethodCallNode* "), "24method.nc", 1427, 1714),fun_name,(struct sNode*)come_increment_ref_count(obj, "24method.nc", 1427, 1715),params,method_block,method_block_sline,method_generics_types,(_Bool)1,(_Bool)0,info,arrow_))), "24method.nc", 1427, 1717);
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sMethodCallNode_finalize;
    _inf_value5->clone=(void*)sMethodCallNode_clone;
    _inf_value5->compile=(void*)sMethodCallNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sMethodCallNode_terminated;
    _inf_value5->kind=(void*)sMethodCallNode_kind;
    _inf_value5->left_value=(void*)sNodeBase_left_value;
    node=(struct sNode*)come_increment_ref_count(_inf_value5, "24method.nc", 1427, 1735);
    come_call_finalizer(sMethodCallNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 1427, 1736);
    __right_value0 = (void*)0;
    __dec_obj159=node,
    node=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node, "24method.nc", 1429, 1737),info), "24method.nc", 1429, 1739);
    (__dec_obj159 ? __dec_obj159 = come_decrement_ref_count(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0, (void*)0, "24method.nc", 1429, 1738) :0);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "24method.nc", 1431, 1740);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 1431, 1741):(void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "24method.nc", 1431, 1742):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "24method.nc", 1431, 1743):(void*)0);
    return __result_obj__0;
}

static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMethodCallNode_clone"; neo_current_frame = &fr;
    struct sMethodCallNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sMethodCallNode*  result  ;
    char*  __dec_obj153  ;
    struct sNode* __dec_obj154;
    char*  __dec_obj155  ;
    struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj156;
    struct buffer*  __dec_obj157  ;
    struct list$1sType$ph* __dec_obj158;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sMethodCallNode* )come_increment_ref_count((struct sMethodCallNode *)come_calloc(1, sizeof(struct sMethodCallNode )*(1), "sMethodCallNode_clone", 5, 1718, "struct sMethodCallNode* "), "sMethodCallNode_clone", 5, 1719);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj153=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sMethodCallNode_clone", 7, 1720, "char* "), "sMethodCallNode_clone", 7, 1722);
        __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0,0, (void*)0, "sMethodCallNode_clone", 7, 1721);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->obj!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj154=result->obj,
        result->obj=(struct sNode*)come_increment_ref_count(sNode_clone(self->obj), "sMethodCallNode_clone", 9, 1724);
        (__dec_obj154 ? __dec_obj154 = come_decrement_ref_count(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0, (void*)0, "sMethodCallNode_clone", 9, 1723) :0);
    }
    if(self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj155=result->fun_name,
        result->fun_name=(char* )come_increment_ref_count((char* )come_memdup(self->fun_name, "sMethodCallNode_clone", 10, 1725, "char* "), "sMethodCallNode_clone", 10, 1727);
        __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0,0, (void*)0, "sMethodCallNode_clone", 10, 1726);
    }
    if(self!=((void*)0)&&self->params!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj156=result->params,
        result->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->params), "sMethodCallNode_clone", 11, 1729);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj156,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sMethodCallNode_clone", 11, 1728);
    }
    if(self!=((void*)0)&&self->method_block!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj157=result->method_block,
        result->method_block=(struct buffer* )come_increment_ref_count(buffer_clone(self->method_block), "sMethodCallNode_clone", 12, 1731);
        come_call_finalizer(buffer_finalize, __dec_obj157,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sMethodCallNode_clone", 12, 1730);
    }
    if(self!=((void*)0)) {
        result->method_block_sline=self->method_block_sline;
    }
    if(self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj158=result->method_generics_types,
        result->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->method_generics_types), "sMethodCallNode_clone", 14, 1733);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj158,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sMethodCallNode_clone", 14, 1732);
    }
    if(self!=((void*)0)) {
        result->no_infference_method_generics=self->no_infference_method_generics;
    }
    if(self!=((void*)0)) {
        result->recursive=self->recursive;
    }
    if(self!=((void*)0)) {
        result->fun=self->fun;
    }
    if(self!=((void*)0)) {
        result->arrow_=self->arrow_;
    }
        __result_obj__0 = result;
    come_call_finalizer(sMethodCallNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sMethodCallNode_clone}", 19, 1734);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* parse_method_call_v20(struct sNode* obj, char*  fun_name  , struct sInfo*  info  , _Bool arrow_)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_method_call_v20"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    void* __right_value2 = (void*)0;
    _Bool parse_method_generics_type;
    char* p;
    int sline;
    char*  word  ;
    struct list$1sType$ph* method_generics_types;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var19
;    struct sType*  type  =0;
    char*  name  =0;
    _Bool err=0;
    char* p_143;
    int sline_144;
    _Bool err_flag;
    char*  label  ;
    char*  __dec_obj165  ;
    char*  __dec_obj166  ;
    _Bool no_comma;
    _Bool in_fun_param;
    _Bool type_name_exp;
    struct sNode* node;
    struct sNode* __dec_obj167;
    struct buffer*  method_block  ;
    int method_block_sline;
    char* head;
    char* tail;
    struct buffer*  __dec_obj168  ;
    int len;
    char* mem;
    struct sNode* _inf_value6;
    struct sMethodCallNode* _inf_obj_value6;
    void* __right_value3 = (void*)0;
    struct sNode* node_145;
    struct sNode* __dec_obj169;
    struct sNode* __result_obj__0;
    params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "24method.nc", 1436, 1744, "struct list$1tuple2$2char$phsNode$ph$ph*"), "24method.nc", 1436, 1745)), "24method.nc", 1436, 1746);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_push_back(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "24method.nc", 1437, 1761, "struct tuple2$2char$phsNode$ph"), "24method.nc", 1437, 1771),(char* )come_increment_ref_count((char* )((void*)0), "24method.nc", 1437, 1772),(struct sNode*)come_increment_ref_count(sNode_clone(obj), "24method.nc", 1437, 1773)), "24method.nc", 1437, 1774));
    parse_method_generics_type=(_Bool)0;
    {
        p=info->p->p;
        sline=info->sline;
        if(*info->p->p==60) {
            info->p->p++;
            skip_spaces_and_lf(info);
            if(xisalpha(*info->p->p)||*info->p->p==95) {
                __right_value0 = (void*)0;
                word=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "24method.nc", 1450, 1775);
                if(is_type_name(word,info)) {
                    parse_method_generics_type=(_Bool)1;
                }
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 1456, 1776));
            }
        }
        info->p->p=p;
        info->sline=sline;
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "24method.nc", 1462, 1777, "struct list$1sType$ph*"), "24method.nc", 1462, 1778)), "24method.nc", 1462, 1779);
    if(parse_method_generics_type&&*info->p->p==60) {
        info->p->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(*info->p->p==0) {
                err_msg(info,"unexpected source end");
                exit(2);
            }
            else if(*info->p->p==62) {
                info->p->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(*info->p->p==44) {
                info->p->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __right_value0 = (void*)0;
                multiple_assign_var19=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type=(struct sType* )come_increment_ref_count(multiple_assign_var19->v1, "24method.nc", 1482, 1780);
                name=(char* )come_increment_ref_count(multiple_assign_var19->v2, "24method.nc", 1482, 1781);
                err=multiple_assign_var19->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 1482, 1784);
                if(!err) {
                    err_msg(info,"invalid method generics paramtor type");
                    exit(2);
                }
                __right_value0 = (void*)0;
                list$1sType$ph_push_back(method_generics_types,(struct sType* )come_increment_ref_count(sType_clone(type), "24method.nc", 1489, 1785));
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1491, 1786);
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 1491, 1787));
            }
        }
    }
    if(*info->p->p!=123) {
        expected_next_character(40,info);
        while((_Bool)1) {
            if(*info->p->p==41) {
                info->p->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_143=info->p->p;
            sline_144=info->sline;
            err_flag=(_Bool)0;
            __right_value0 = (void*)0;
            label=(char* )come_increment_ref_count(__builtin_string(""), "24method.nc", 1508, 1788);
            if(xisalpha(*info->p->p)||*info->p->p==95) {
                __right_value0 = (void*)0;
                __dec_obj165=label,
                label=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "24method.nc", 1510, 1790);
                __dec_obj165 = come_decrement_ref_count(__dec_obj165, (void*)0, (void*)0, 0,0, (void*)0, "24method.nc", 1510, 1789);
                err_flag=(_Bool)1;
            }
            if(err_flag==(_Bool)1&&*info->p->p==58) {
                info->p->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj166=label,
                label=((void*)0);
                __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0,0, (void*)0, "24method.nc", 1519, 1791);
                info->p->p=p_143;
                info->sline=sline_144;
            }
            no_comma=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            type_name_exp=(_Bool)0;
            __right_value0 = (void*)0;
            node=(struct sNode*)come_increment_ref_count(expression_v13(info,type_name_exp), "24method.nc", 1533, 1792);
            __right_value0 = (void*)0;
            __dec_obj167=node,
            node=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node, "24method.nc", 1535, 1793),info), "24method.nc", 1535, 1795);
            (__dec_obj167 ? __dec_obj167 = come_decrement_ref_count(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0, (void*)0, "24method.nc", 1535, 1794) :0);
            info->in_fun_param=in_fun_param;
            info->no_comma=no_comma;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            list$1tuple2$2char$phsNode$ph$ph_push_back(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "24method.nc", 1540, 1796, "struct tuple2$2char$phsNode$ph"), "24method.nc", 1540, 1797),(char* )come_increment_ref_count(label, "24method.nc", 1540, 1798),(struct sNode*)come_increment_ref_count(node, "24method.nc", 1540, 1799)), "24method.nc", 1540, 1800));
            if(*info->p->p==44) {
                info->p->p++;
                skip_spaces_and_lf(info);
            }
            else if(*info->p->p==41) {
                info->p->p++;
                skip_spaces_and_lf(info);
                (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 1549, 1801));
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 1549, 1802):(void*)0);
                break;
            }
            (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 1552, 1803));
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 1552, 1804):(void*)0);
        }
    }
    method_block=((void*)0);
    method_block_sline=0;
    if(*info->p->p==123) {
        head=info->p->p;
        method_block_sline=info->sline;
        __right_value0 = (void*)0;
        ((char* )(__right_value0=skip_block(info,(_Bool)0)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 1560, 1805));
        tail=info->p->p;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj168=method_block,
        method_block=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "24method.nc", 1564, 1806, "struct buffer* "), "24method.nc", 1564, 1807)), "24method.nc", 1564, 1809);
        come_call_finalizer(buffer_finalize, __dec_obj168,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 1564, 1808);
        len=tail-head;
        __right_value0 = (void*)0;
        mem=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), "24method.nc", 1567, 1810, "char*"), "24method.nc", 1567, 1811);
        memcpy(mem,head,len);
        mem[len]=0;
        buffer_append_str(method_block,mem);
        buffer_append_str(method_block,"\n");
        (mem = come_decrement_ref_count(mem, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 1575, 1812));
    }
    skip_spaces_and_lf(info);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "24method.nc", 1577, 1816, "struct sNode");
    _inf_obj_value6=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value2=sMethodCallNode_initialize((struct sMethodCallNode* )come_increment_ref_count((struct sMethodCallNode *)come_calloc(1, sizeof(struct sMethodCallNode )*(1), "24method.nc", 1577, 1813, "struct sMethodCallNode* "), "24method.nc", 1577, 1814),fun_name,(struct sNode*)come_increment_ref_count(sNode_clone(obj), "24method.nc", 1577, 1815),params,method_block,method_block_sline,method_generics_types,(_Bool)0,(_Bool)1,info,arrow_))), "24method.nc", 1577, 1817);
    _inf_value6->_protocol_obj=_inf_obj_value6;
    _inf_value6->finalize=(void*)sMethodCallNode_finalize;
    _inf_value6->clone=(void*)sMethodCallNode_clone;
    _inf_value6->compile=(void*)sMethodCallNode_compile;
    _inf_value6->sline=(void*)sNodeBase_sline;
    _inf_value6->sline_real=(void*)sNodeBase_sline_real;
    _inf_value6->sname=(void*)sNodeBase_sname;
    _inf_value6->terminated=(void*)sMethodCallNode_terminated;
    _inf_value6->kind=(void*)sMethodCallNode_kind;
    _inf_value6->left_value=(void*)sNodeBase_left_value;
    node_145=(struct sNode*)come_increment_ref_count(_inf_value6, "24method.nc", 1577, 1818);
    come_call_finalizer(sMethodCallNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 1577, 1819);
    __right_value0 = (void*)0;
    __dec_obj169=node_145,
    node_145=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_145, "24method.nc", 1579, 1820),info), "24method.nc", 1579, 1822);
    (__dec_obj169 ? __dec_obj169 = come_decrement_ref_count(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0, (void*)0, "24method.nc", 1579, 1821) :0);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_145, "24method.nc", 1581, 1823);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 1581, 1824):(void*)0);
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 1581, 1825));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1581, 1826);
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1581, 1827);
    come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1581, 1828);
    ((node_145) ? node_145 = come_decrement_ref_count(node_145, ((struct sNode*)node_145)->finalize, ((struct sNode*)node_145)->_protocol_obj, 0, 1,(void*)0, "24method.nc", 1581, 1829):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "24method.nc", 1581, 1830):(void*)0);
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_push_back"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
    struct tuple2$2char$phsNode$ph* __dec_obj160;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_141;
    struct tuple2$2char$phsNode$ph* __dec_obj161;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_142;
    struct tuple2$2char$phsNode$ph* __dec_obj162;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1613, 1747);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1617, 1748, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1617, 1749);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj160=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1621, 1751);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj160,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1621, 1750);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_141=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1627, 1752, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1627, 1753);
        litem_141->prev=self->head;
        litem_141->next=((void*)0);
        __dec_obj161=litem_141->item,
        litem_141->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1631, 1755);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj161,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1631, 1754);
        self->tail=litem_141;
        self->head->next=litem_141;
    }
    else {
        __right_value0 = (void*)0;
        litem_142=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1637, 1756, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1637, 1757);
        litem_142->prev=self->tail;
        litem_142->next=((void*)0);
        __dec_obj162=litem_142->item,
        litem_142->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1641, 1759);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj162,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1641, 1758);
        self->tail->next=litem_142;
        self->tail=litem_142;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1649, 1760);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char*  v1  , struct sNode* v2)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_initialize"; neo_current_frame = &fr;
    char*  __dec_obj163  ;
    struct sNode* __dec_obj164;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    __dec_obj163=self->v1,
    self->v1=(char* )come_increment_ref_count(v1, "/usr/local/include/neo-c.h", 3911, 1763);
    __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 3911, 1762);
    __dec_obj164=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2, "/usr/local/include/neo-c.h", 3912, 1765);
    (__dec_obj164 ? __dec_obj164 = come_decrement_ref_count(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 3912, 1764) :0);
        __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 3914, 1766);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3914, 1767);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3914, 1768));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 3914, 1769):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3914, 1770);
    return __result_obj__0;
}

static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3sType$phchar$ph_Bool$$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize}", 2, 1782);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize", 3, 1783));
    }
                    neo_current_frame = fr.prev;
}

struct sNode* parse_iter_call_v20(struct sNode* obj, char*  fun_name  , struct sInfo*  info  , _Bool arrow_, struct sNode* parent_call_node)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_iter_call_v20"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    char* p;
    int sline;
    _Bool err_flag;
    char*  label  ;
    char*  __dec_obj170  ;
    char*  __dec_obj171  ;
    _Bool no_comma;
    _Bool in_fun_param;
    _Bool type_name_exp;
    struct sNode* node;
    struct sNode* __dec_obj172;
    struct buffer*  method_block  ;
    int method_block_sline;
    char* head;
    char* tail;
    struct buffer*  __dec_obj173  ;
    int len;
    char* mem;
    struct sNode* _inf_value7;
    struct sIterCallNode* _inf_obj_value7;
    void* __right_value2 = (void*)0;
    struct sNode* node_146;
    struct sNode* __result_obj__0;
    params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "24method.nc", 1586, 1831, "struct list$1tuple2$2char$phsNode$ph$ph*"), "24method.nc", 1586, 1832)), "24method.nc", 1586, 1833);
    if(*info->p->p!=123) {
        expected_next_character(40,info);
        while((_Bool)1) {
            if(*info->p->p==41) {
                info->p->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p=info->p->p;
            sline=info->sline;
            err_flag=(_Bool)0;
            __right_value0 = (void*)0;
            label=(char* )come_increment_ref_count(__builtin_string(""), "24method.nc", 1602, 1834);
            if(xisalpha(*info->p->p)||*info->p->p==95) {
                __right_value0 = (void*)0;
                __dec_obj170=label,
                label=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "24method.nc", 1604, 1836);
                __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0,0, (void*)0, "24method.nc", 1604, 1835);
                err_flag=(_Bool)1;
            }
            if(err_flag==(_Bool)1&&*info->p->p==58) {
                info->p->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj171=label,
                label=((void*)0);
                __dec_obj171 = come_decrement_ref_count(__dec_obj171, (void*)0, (void*)0, 0,0, (void*)0, "24method.nc", 1613, 1837);
                info->p->p=p;
                info->sline=sline;
            }
            no_comma=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            type_name_exp=(_Bool)0;
            __right_value0 = (void*)0;
            node=(struct sNode*)come_increment_ref_count(expression_v13(info,type_name_exp), "24method.nc", 1627, 1838);
            __right_value0 = (void*)0;
            __dec_obj172=node,
            node=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node, "24method.nc", 1629, 1839),info), "24method.nc", 1629, 1841);
            (__dec_obj172 ? __dec_obj172 = come_decrement_ref_count(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0, (void*)0, "24method.nc", 1629, 1840) :0);
            info->in_fun_param=in_fun_param;
            info->no_comma=no_comma;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            list$1tuple2$2char$phsNode$ph$ph_push_back(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "24method.nc", 1634, 1842, "struct tuple2$2char$phsNode$ph"), "24method.nc", 1634, 1843),(char* )come_increment_ref_count(label, "24method.nc", 1634, 1844),(struct sNode*)come_increment_ref_count(node, "24method.nc", 1634, 1845)), "24method.nc", 1634, 1846));
            if(*info->p->p==44) {
                info->p->p++;
                skip_spaces_and_lf(info);
            }
            else if(*info->p->p==41) {
                info->p->p++;
                skip_spaces_and_lf(info);
                (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 1643, 1847));
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 1643, 1848):(void*)0);
                break;
            }
            (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 1646, 1849));
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 1646, 1850):(void*)0);
        }
    }
    method_block=((void*)0);
    method_block_sline=0;
    if(*info->p->p==123) {
        head=info->p->p;
        method_block_sline=info->sline;
        __right_value0 = (void*)0;
        ((char* )(__right_value0=skip_block(info,(_Bool)0)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "24method.nc", 1654, 1851));
        tail=info->p->p;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj173=method_block,
        method_block=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "24method.nc", 1658, 1852, "struct buffer* "), "24method.nc", 1658, 1853)), "24method.nc", 1658, 1855);
        come_call_finalizer(buffer_finalize, __dec_obj173,(void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc", 1658, 1854);
        len=tail-head;
        __right_value0 = (void*)0;
        mem=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), "24method.nc", 1661, 1856, "char*"), "24method.nc", 1661, 1857);
        memcpy(mem,head,len);
        mem[len]=0;
        buffer_append_str(method_block,mem);
        buffer_append_str(method_block,"\n");
        (mem = come_decrement_ref_count(mem, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 1669, 1858));
    }
    skip_spaces_and_lf(info);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "24method.nc", 1671, 1863, "struct sNode");
    _inf_obj_value7=(struct sIterCallNode*)come_increment_ref_count(((struct sIterCallNode*)(__right_value1=sIterCallNode_initialize((struct sIterCallNode* )come_increment_ref_count((struct sIterCallNode *)come_calloc(1, sizeof(struct sIterCallNode )*(1), "24method.nc", 1671, 1859, "struct sIterCallNode* "), "24method.nc", 1671, 1860),fun_name,(struct sNode*)come_increment_ref_count(obj, "24method.nc", 1671, 1861),params,method_block,method_block_sline,((void*)0),(_Bool)0,(_Bool)1,info,arrow_,(struct sNode*)come_increment_ref_count(parent_call_node, "24method.nc", 1671, 1862)))), "24method.nc", 1671, 1864);
    _inf_value7->_protocol_obj=_inf_obj_value7;
    _inf_value7->finalize=(void*)sIterCallNode_finalize;
    _inf_value7->clone=(void*)sIterCallNode_clone;
    _inf_value7->compile=(void*)sIterCallNode_compile;
    _inf_value7->sline=(void*)sNodeBase_sline;
    _inf_value7->sline_real=(void*)sNodeBase_sline_real;
    _inf_value7->sname=(void*)sNodeBase_sname;
    _inf_value7->terminated=(void*)sIterCallNode_terminated;
    _inf_value7->kind=(void*)sIterCallNode_kind;
    _inf_value7->left_value=(void*)sIterCallNode_left_value;
    node_146=(struct sNode*)come_increment_ref_count(_inf_value7, "24method.nc", 1671, 1865);
    come_call_finalizer(sIterCallNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 1671, 1866);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_146, "24method.nc", 1673, 1867);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 1673, 1868):(void*)0);
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "24method.nc", 1673, 1869));
    ((parent_call_node) ? parent_call_node = come_decrement_ref_count(parent_call_node, ((struct sNode*)parent_call_node)->finalize, ((struct sNode*)parent_call_node)->_protocol_obj, 0, 0,(void*)0, "24method.nc", 1673, 1870):(void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1673, 1871);
    come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "24method.nc}", 1673, 1872);
    ((node_146) ? node_146 = come_decrement_ref_count(node_146, ((struct sNode*)node_146)->finalize, ((struct sNode*)node_146)->_protocol_obj, 0, 1,(void*)0, "24method.nc", 1673, 1873):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "24method.nc", 1673, 1874):(void*)0);
    return __result_obj__0;
}

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_node_v20"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value8;
    struct sCurrentNode* _inf_obj_value8;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    if(charp_operator_equals(buf,"__current__")) {
                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "24method.nc", 1679, 1877, "struct sNode");
        _inf_obj_value8=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value1=sCurrentNode_initialize((struct sCurrentNode* )come_increment_ref_count((struct sCurrentNode *)come_calloc(1, sizeof(struct sCurrentNode )*(1), "24method.nc", 1679, 1875, "struct sCurrentNode* "), "24method.nc", 1679, 1876),info))), "24method.nc", 1679, 1878);
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sCurrentNode_finalize;
        _inf_value8->clone=(void*)sCurrentNode_clone;
        _inf_value8->compile=(void*)sCurrentNode_compile;
        _inf_value8->sline=(void*)sCurrentNode_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sCurrentNode_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sCurrentNode_kind;
        _inf_value8->left_value=(void*)sNodeBase_left_value;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value8)), "24method.nc", 1679, 1879);
        come_call_finalizer(sCurrentNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "24method.nc}", 1679, 1880);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "24method.nc", 1679, 1881):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "24method.nc", 1679, 1882):(void*)0);
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=string_node_v17(buf,head,head_sline,info))), "24method.nc", 1682, 1883);
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "24method.nc", 1682, 1884):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "24method.nc", 1682, 1885):(void*)0);
    return __result_obj__0;
}

