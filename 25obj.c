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

struct sNewNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sType*  type  ;
    struct list$1tuple2$2char$phsNode$ph$ph* initializer;
    struct sNode* initializer_num;
};

struct sDeferNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sBlock*  block  ;
};

struct sImplementsNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* obj_exp;
    struct sType*  inf_type  ;
};

struct sTrueNode
{
    int sline;
    char*  sname  ;
    int sline_real;
};

struct sFalseNode
{
    int sline;
    char*  sname  ;
    int sline_real;
};

struct sGeneric
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* exp;
    struct list$1sType$ph* types;
    struct list$1sNode$ph* exps;
    struct sNode* default_exp;
};

struct sHeapSizeOfNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sType*  type  ;
};

struct sSizeOfNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sType*  type  ;
};

struct sOffsetOf
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sType*  type  ;
    char*  name  ;
};

struct sSizeOfExpNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* exp;
};

struct sDynamicSizeOfExpNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* exp;
};

struct sTypeOfNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sType*  type  ;
};

struct sTypeOfExpNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* exp;
};

struct sDynamicTypeOf
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* exp;
};

struct sAlignOfNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sType*  type  ;
};

struct sAlignOfExpNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* exp;
};

struct sAlignOfNode2
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sType*  type  ;
};

struct sAlignOfExpNode2
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* exp;
};

struct sAlignAsNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sType*  type  ;
};

struct sAlignAsExpNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* exp;
};

struct sDeleteNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
};

struct sBorrowNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
};

struct sCloneNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
};

struct sDupeNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
};

struct sDummyHeapNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
};

struct sGCIncNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
};

struct sGCDecNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
};

struct sIsHeap
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sType*  type  ;
};

struct sIsPointer
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sType*  type  ;
};

struct sGCDecNoFreeNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
};

struct sRefNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
};

struct sOptionalNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
};

struct tuple2$2sNode$phsNode$ph
{
    struct sNode* v1;
    struct sNode* v2;
};

struct sSpanNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
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
struct tuple3$3char$phsFun$psGenericsFun$p* get_method(const char* fun_name, struct sType*  obj_type  , struct sInfo*  info  , _Bool no_make_generics_function);
struct sNode* create_method_call(const char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer*  method_block  , int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo*  info  , _Bool arrow_);
struct sNode* create_funcall(const char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer*  method_block  , int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo*  info  , _Bool arrow_);
struct sNode* create_guard_break_method_call(struct sNode* expression_node, struct sInfo*  info  );
_Bool compile_method_block(struct buffer*  method_block  , struct list$1CVALUE$ph* come_params, struct sFun*  fun  , char* fun_name, int method_block_sline, struct sInfo*  info  , _Bool no_create_current_stack);
struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType*  type  , char*  fun_name  , struct sInfo*  info  , _Bool array_equal_pointer);
struct sNode* parse_method_call_v20(struct sNode* obj, char*  fun_name  , struct sInfo*  info  , _Bool arrow_);
struct sNode* parse_iter_call_v20(struct sNode* obj, char*  fun_name  , struct sInfo*  info  , _Bool arrow_, struct sNode* parent_call_node);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo*  info  );
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
struct sNode* parse_vector(struct sInfo*  info  );
_Bool is_portable_libc_symbol(const char* sym);
struct sNode* add_node(struct sNode* node, struct sNode* right, struct sInfo*  info  );
struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType*  type  , struct list$1tuple2$2char$phsNode$ph$ph* initializer, struct sNode* initializer_num, struct sInfo*  info  );
char*  sNewNode_kind(struct sNewNode* self);
_Bool sNewNode_compile(struct sNewNode* self, struct sInfo*  info  );
static void sNodeBase_finalize(struct sNodeBase* self);
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
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static void sNewNode_finalize(struct sNewNode* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static void CVALUE_finalize(struct CVALUE*  self  );
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
static struct sFun*  map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
static void sFun_finalize(struct sFun*  self  );
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar*  self  );
static void sBlock_finalize(struct sBlock*  self  );
static struct sFun*  map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  );
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
struct sDeferNode* sDeferNode_initialize(struct sDeferNode* self, struct sBlock*  block  , struct sInfo*  info  );
char*  sDeferNode_kind(struct sDeferNode* self);
_Bool sDeferNode_compile(struct sDeferNode* self, struct sInfo*  info  );
static void sDeferNode_finalize(struct sDeferNode* self);
struct sNode* create_new_object(struct sType*  type  , struct sInfo*  info  );
static struct sNewNode* sNewNode_clone(struct sNewNode* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType*  inf_type  , struct sInfo*  info  );
char*  sImplementsNode_kind(struct sImplementsNode* self);
_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo*  info  );
static void sImplementsNode_finalize(struct sImplementsNode* self);
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position);
static struct sFun*  map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char*  key  , struct sFun*  default_value  , _Bool by_pointer);
static struct sClass*  map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  );
static void sClass_finalize(struct sClass*  self  );
static struct sClass*  map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  );
struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo*  info  );
char*  sTrueNode_kind(struct sTrueNode* self);
_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo*  info  );
static void sTrueNode_finalize(struct sTrueNode* self);
struct sNode* create_true_object(struct sInfo*  info  );
static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self);
struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo*  info  );
char*  sFalseNode_kind(struct sFalseNode* self);
_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo*  info  );
static void sFalseNode_finalize(struct sFalseNode* self);
struct sNode* create_false_object(struct sInfo*  info  );
static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self);
struct sGeneric* sGeneric_initialize(struct sGeneric* self, struct sNode* exp, struct list$1sType$ph* types, struct list$1sNode$ph* exps, struct sNode* default_exp, struct sInfo*  info  );
char*  sGeneric_kind(struct sGeneric* self);
_Bool sGeneric_compile(struct sGeneric* self, struct sInfo*  info  );
static void sGeneric_finalize(struct sGeneric* self);
static struct sType*  list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType*  list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
struct sHeapSizeOfNode* sHeapSizeOfNode_initialize(struct sHeapSizeOfNode* self, struct sType*  type  , struct sInfo*  info  );
char*  sHeapSizeOfNode_kind(struct sHeapSizeOfNode* self);
_Bool sHeapSizeOfNode_compile(struct sHeapSizeOfNode* self, struct sInfo*  info  );
static void sHeapSizeOfNode_finalize(struct sHeapSizeOfNode* self);
struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType*  type  , struct sInfo*  info  );
char*  sSizeOfNode_kind(struct sSizeOfNode* self);
_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo*  info  );
static void sSizeOfNode_finalize(struct sSizeOfNode* self);
struct sOffsetOf* sOffsetOf_initialize(struct sOffsetOf* self, struct sType*  type  , char*  name  , struct sInfo*  info  );
char*  sOffsetOf_kind(struct sOffsetOf* self);
_Bool sOffsetOf_compile(struct sOffsetOf* self, struct sInfo*  info  );
static void sOffsetOf_finalize(struct sOffsetOf* self);
struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo*  info  );
char*  sSizeOfExpNode_kind(struct sSizeOfExpNode* self);
_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo*  info  );
static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self);
struct sDynamicSizeOfExpNode* sDynamicSizeOfExpNode_initialize(struct sDynamicSizeOfExpNode* self, struct sNode* exp, struct sInfo*  info  );
char*  sDynamicSizeOfExpNode_kind(struct sDynamicSizeOfExpNode* self);
_Bool sDynamicSizeOfExpNode_compile(struct sDynamicSizeOfExpNode* self, struct sInfo*  info  );
static void sDynamicSizeOfExpNode_finalize(struct sDynamicSizeOfExpNode* self);
struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType*  type  , struct sInfo*  info  );
char*  sTypeOfNode_kind(struct sTypeOfNode* self);
_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo*  info  );
static void sTypeOfNode_finalize(struct sTypeOfNode* self);
struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo*  info  );
char*  sTypeOfExpNode_kind(struct sTypeOfExpNode* self);
_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo*  info  );
static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self);
struct sDynamicTypeOf* sDynamicTypeOf_initialize(struct sDynamicTypeOf* self, struct sNode* exp, struct sInfo*  info  );
char*  sDynamicTypeOf_kind(struct sDynamicTypeOf* self);
_Bool sDynamicTypeOf_compile(struct sDynamicTypeOf* self, struct sInfo*  info  );
static void sDynamicTypeOf_finalize(struct sDynamicTypeOf* self);
struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType*  type  , struct sInfo*  info  );
char*  sAlignOfNode_kind(struct sAlignOfNode* self);
_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo*  info  );
static void sAlignOfNode_finalize(struct sAlignOfNode* self);
struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo*  info  );
char*  sAlignOfExpNode_kind(struct sAlignOfExpNode* self);
_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo*  info  );
static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self);
struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType*  type  , struct sInfo*  info  );
char*  sAlignOfNode2_kind(struct sAlignOfNode2* self);
_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo*  info  );
static void sAlignOfNode2_finalize(struct sAlignOfNode2* self);
struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo*  info  );
char*  sAlignOfExpNode2_kind(struct sAlignOfExpNode2* self);
_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo*  info  );
static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self);
struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType*  type  , struct sInfo*  info  );
char*  sAlignAsNode_kind(struct sAlignAsNode* self);
_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo*  info  );
static void sAlignAsNode_finalize(struct sAlignAsNode* self);
struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo*  info  );
char*  sAlignAsExpNode_kind(struct sAlignAsExpNode* self);
_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo*  info  );
static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self);
struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo*  info  );
char*  sDeleteNode_kind(struct sDeleteNode* self);
_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo*  info  );
static void sDeleteNode_finalize(struct sDeleteNode* self);
struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo*  info  );
char*  sBorrowNode_kind(struct sBorrowNode* self);
_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo*  info  );
static void sBorrowNode_finalize(struct sBorrowNode* self);
struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo*  info  );
char*  sCloneNode_kind(struct sCloneNode* self);
_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo*  info  );
static void sCloneNode_finalize(struct sCloneNode* self);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo*  info  );
char*  sDupeNode_kind(struct sDupeNode* self);
_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo*  info  );
static void sDupeNode_finalize(struct sDupeNode* self);
struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo*  info  );
char*  sDummyHeapNode_kind(struct sDummyHeapNode* self);
_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo*  info  );
static void sDummyHeapNode_finalize(struct sDummyHeapNode* self);
struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo*  info  );
char*  sGCIncNode_kind(struct sGCIncNode* self);
_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo*  info  );
static void sGCIncNode_finalize(struct sGCIncNode* self);
struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo*  info  );
char*  sGCDecNode_kind(struct sGCDecNode* self);
_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo*  info  );
static void sGCDecNode_finalize(struct sGCDecNode* self);
struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType*  type  , struct sInfo*  info  );
char*  sIsHeap_kind(struct sIsHeap* self);
_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo*  info  );
static void sIsHeap_finalize(struct sIsHeap* self);
struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType*  type  , struct sInfo*  info  );
char*  sIsPointer_kind(struct sIsPointer* self);
_Bool sIsPointer_compile(struct sIsPointer* self, struct sInfo*  info  );
static void sIsPointer_finalize(struct sIsPointer* self);
struct sGCDecNoFreeNode* sGCDecNoFreeNode_initialize(struct sGCDecNoFreeNode* self, struct sNode* node, struct sInfo*  info  );
char*  sGCDecNoFreeNode_kind(struct sGCDecNoFreeNode* self);
_Bool sGCDecNoFreeNode_compile(struct sGCDecNoFreeNode* self, struct sInfo*  info  );
static void sGCDecNoFreeNode_finalize(struct sGCDecNoFreeNode* self);
struct sRefNode* sRefNode_initialize(struct sRefNode* self, struct sNode* node, struct sInfo*  info  );
char*  sRefNode_kind(struct sRefNode* self);
_Bool sRefNode_compile(struct sRefNode* self, struct sInfo*  info  );
static void sRefNode_finalize(struct sRefNode* self);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char*  v1  , struct sNode* v2);
struct sOptionalNode* sOptionalNode_initialize(struct sOptionalNode* self, struct sNode* node, struct sInfo*  info  );
char*  sOptionalNode_kind(struct sOptionalNode* self);
_Bool sOptionalNode_compile(struct sOptionalNode* self, struct sInfo*  info  );
static void sOptionalNode_finalize(struct sOptionalNode* self);
static _Bool is_buffer_like_type(struct sType*  type  );
struct tuple2$2sNode$phsNode$ph* get_head_and_len(struct sNode* node, struct CVALUE*  come_value  , struct sInfo*  info  );
static struct sHeapSizeOfNode* sHeapSizeOfNode_clone(struct sHeapSizeOfNode* self);
static struct sDynamicSizeOfExpNode* sDynamicSizeOfExpNode_clone(struct sDynamicSizeOfExpNode* self);
static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self);
static struct tuple2$2sNode$phsNode$ph* tuple2$2sNode$phsNode$ph_initialize(struct tuple2$2sNode$phsNode$ph* self, struct sNode* v1, struct sNode* v2);
static void tuple2$2sNode$phsNode$ph$p_finalize(struct tuple2$2sNode$phsNode$ph* self);
struct sSpanNode* sSpanNode_initialize(struct sSpanNode* self, struct sNode* node, struct sInfo*  info  );
char*  sSpanNode_kind(struct sSpanNode* self);
_Bool sSpanNode_compile(struct sSpanNode* self, struct sInfo*  info  );
static void sSpanNode_finalize(struct sSpanNode* self);
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo*  info  );
static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self);
static char span$1char$p$p_operator_derefference(struct span$1char$p* self);
static char span$1char$p_operator_derefference(struct span$1char$p* self);
static struct sDeferNode* sDeferNode_clone(struct sDeferNode* self);
static struct sBlock*  sBlock_clone(struct sBlock*  self  );
static struct sVarTable*  sVarTable_clone(struct sVarTable*  self  );
static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static char*  map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char*  map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct sVar*  map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char*  key  , struct sVar*  default_value  , _Bool by_pointer);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char*  key  , struct sVar*  item  , _Bool by_pointer);
static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char*  item  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static char*  list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char*  list$1char$ph_next(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  );
static struct sVar*  sVar_clone(struct sVar*  self  );
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self);
static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self);
static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self);
static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self);
static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self);
static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self);
static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self);
static struct sGCDecNoFreeNode* sGCDecNoFreeNode_clone(struct sGCDecNoFreeNode* self);
static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self);
static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self);
static struct sOptionalNode* sOptionalNode_clone(struct sOptionalNode* self);
static struct sRefNode* sRefNode_clone(struct sRefNode* self);
static struct sSpanNode* sSpanNode_clone(struct sSpanNode* self);
static struct sGeneric* sGeneric_clone(struct sGeneric* self);
static struct sOffsetOf* sOffsetOf_clone(struct sOffsetOf* self);
static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self);
static struct sDynamicTypeOf* sDynamicTypeOf_clone(struct sDynamicTypeOf* self);
static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self);
static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self);
static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self);
static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* create_implements(struct sNode* node, struct sType*  inf_type  , struct sInfo*  info  );
static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo*  info  );
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
struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType*  type  , struct list$1tuple2$2char$phsNode$ph$ph* initializer, struct sNode* initializer_num, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNewNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj35  ;
    struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj36;
    struct sNode* __dec_obj37;
    struct sNewNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNewNode*)come_increment_ref_count(self, "25obj.nc", 7, 1),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 7, 3);
    __right_value0 = (void*)0;
    __dec_obj35=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type), "25obj.nc", 9, 210);
    come_call_finalizer(sType_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 9, 209);
    __dec_obj36=self->initializer,
    self->initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(initializer, "25obj.nc", 10, 216);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 10, 215);
    __dec_obj37=self->initializer_num,
    self->initializer_num=(struct sNode*)come_increment_ref_count(initializer_num, "25obj.nc", 11, 218);
    (__dec_obj37 ? __dec_obj37 = come_decrement_ref_count(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 11, 217) :0);
        __result_obj__0 = (struct sNewNode*)come_increment_ref_count(self, "25obj.nc", 14, 219);
    come_call_finalizer(sNewNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 14, 225);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 14, 226);
    ((initializer_num) ? initializer_num = come_decrement_ref_count(initializer_num, ((struct sNode*)initializer_num)->finalize, ((struct sNode*)initializer_num)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 14, 227):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sNewNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 14, 228);
    return __result_obj__0;
}

char*  sNewNode_kind(struct sNewNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNewNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sNewNode"))), "25obj.nc", 16, 229);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 16, 230));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "25obj.nc", 16, 231));
    return __result_obj__0;
}

_Bool sNewNode_compile(struct sNewNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNewNode_compile"; neo_current_frame = &fr;
    struct sType*  type  ;
    struct list$1tuple2$2char$phsNode$ph$ph* initializer;
    struct sNode* initializer_num;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct buffer*  num_string  ;
    struct list$1sNode$ph* _o2_saved_1;
    struct sNode* it;
    _Bool Value;
    _Bool __result_obj__0;
    struct CVALUE*  cvalue  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    struct list$1sNode$ph* __dec_obj38;
    char*  type_name  ;
    char*  type_name2  ;
    char*  var_name  ;
    struct sType*  type3  ;
    char*  type_name3  ;
    struct buffer*  buf  ;
    char*  obj  ;
    void* __right_value2 = (void*)0;
    _Bool _conditional_value_X0;
    char*  __dec_obj39  ;
    char*  __dec_obj40  ;
    struct sClass*  klass  ;
    _Bool Value_10;
    struct CVALUE*  come_value2  ;
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
    struct CVALUE*  come_value_11  ;
    char*  __dec_obj41  ;
    struct sType*  __dec_obj42  ;
    char*  var_name_15  ;
    struct sType*  type3_16  ;
    char*  type_name3_17  ;
    struct buffer*  buf_18  ;
    char*  obj_19  ;
    _Bool _conditional_value_X1;
    char*  __dec_obj46  ;
    char*  __dec_obj47  ;
    struct sClass*  klass_20  ;
    int i;
    struct list$1tuple2$2char$phsNode$ph$ph* _o2_saved_2;
    struct tuple2$2char$phsNode$ph* it_22;
    struct tuple2$2char$phsNode$ph* multiple_assign_var1
;    char*  name  =0;
    struct sNode* exp=0;
    _Bool Value_24;
    struct CVALUE*  come_value2_25  ;
    struct sType*  left_type  ;
    struct list$1tuple2$2char$phsType$ph$ph* _o2_saved_3;
    struct tuple2$2char$phsType$ph* it2;
    struct tuple2$2char$phsType$ph* multiple_assign_var2
;    char*  field_name  =0;
    struct sType*  field_type  =0;
    struct sType*  __dec_obj48  ;
    struct sType*  right_type  ;
    struct sType*  __dec_obj49  ;
    char*  c_value  ;
    char*  __dec_obj50  ;
    struct sType*  __dec_obj51  ;
    struct sType*  type3_28  ;
    char*  type_name3_29  ;
    _Bool _conditional_value_X2;
    char*  __dec_obj52  ;
    char*  __dec_obj53  ;
    struct sType*  __dec_obj54  ;
    memset(&obj, 0, sizeof(obj));
    memset(&obj_19, 0, sizeof(obj_19));
    type=(struct sType* )come_increment_ref_count(self->type, "25obj.nc", 21, 232);
    initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self->initializer, "25obj.nc", 22, 233);
    initializer_num=(struct sNode*)come_increment_ref_count(self->initializer_num, "25obj.nc", 23, 234);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "25obj.nc", 25, 235, "struct CVALUE* "), "25obj.nc", 25, 236)), "25obj.nc", 25, 237);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    num_string=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "25obj.nc", 27, 238, "struct buffer* "), "25obj.nc", 27, 239)), "25obj.nc", 27, 240);
    buffer_append_str(num_string,"1");
    for(_o2_saved_1=(struct list$1sNode$ph*)come_increment_ref_count(type->mArrayNum, "25obj.nc", 31, 241),it=list$1sNode$ph_begin(_o2_saved_1)    ;!list$1sNode$ph_end(_o2_saved_1);it=list$1sNode$ph_next(_o2_saved_1)){
        Value=node_compile(it,info);
        if(!Value) {
                        __result_obj__0 = (_Bool)0;
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 33, 242);
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 33, 243);
            ((initializer_num) ? initializer_num = come_decrement_ref_count(initializer_num, ((struct sNode*)initializer_num)->finalize, ((struct sNode*)initializer_num)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 33, 244):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 33, 250);
            come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 33, 251);
            come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 33, 252);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        cvalue=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "25obj.nc", 36, 253);
        buffer_append_format(num_string,"*(%s)",cvalue->c_value);
        come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 41, 254);
    }
    __right_value0 = (void*)0;
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,info->generics_type,info), "25obj.nc", 41, 255);
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "25obj.nc", 42, 256);
    __right_value0 = (void*)0;
    __dec_obj38=type2->mHeapArrayNum,
    type2->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(type2->mArrayNum), "25obj.nc", 44, 258);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 44, 257);
    list$1sNode$ph_reset(type2->mArrayNum);
    type2->mNew=(_Bool)1;
    __right_value0 = (void*)0;
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)1,(_Bool)1,(_Bool)0,(_Bool)0), "25obj.nc", 48, 260);
    __right_value0 = (void*)0;
    type_name2=(char* )come_increment_ref_count(make_come_type_name_string(type2,info), "25obj.nc", 50, 261);
    if(initializer_num) {
        static int var_num=1;
        var_num++;
        __right_value0 = (void*)0;
        var_name=(char* )come_increment_ref_count(xsprintf("__new_num__%d",var_num), "25obj.nc", 56, 262);
        __right_value0 = (void*)0;
        type3=(struct sType* )come_increment_ref_count(sType_clone(type2), "25obj.nc", 58, 263);
        type3->mPointerNum++;
        if(type3->mNoSolvedGenericsType) {
            type3->mNoSolvedGenericsType->mPointerNum++;
        }
        __right_value0 = (void*)0;
        type_name3=(char* )come_increment_ref_count(make_type_name_string(type3,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0), "25obj.nc", 64, 264);
        __right_value0 = (void*)0;
        add_come_code_at_function_head(info,"%s;\n",((char* )(__right_value0=make_define_var(type3,var_name,info,(_Bool)0,(_Bool)0))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 66, 265));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "25obj.nc", 68, 266, "struct buffer* "), "25obj.nc", 68, 267)), "25obj.nc", 68, 268);
        buffer_append_str(buf,"({");
        if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X0=(((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("come_calloc_v2"))))))));        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 73, 325));
        come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 73, 326);
_conditional_value_X0;})) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj39=obj,
            obj=(char* )come_increment_ref_count(xsprintf("%s = (%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")",var_name,type_name,type_name,((char* )(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,++info->id,type_name3), "25obj.nc", 74, 328);
            __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0, (void*)0, "25obj.nc", 74, 327);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 74, 329));
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj40=obj,
            obj=(char* )come_increment_ref_count(xsprintf("%s = (%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")",var_name,type_name,type_name,((char* )(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,++info->id,type_name3), "25obj.nc", 77, 331);
            __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0, (void*)0, "25obj.nc", 77, 330);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 77, 332));
        }
        buffer_append_str(buf,obj);
        buffer_append_str(buf,";");
        klass=type3->mClass;
        Value_10=node_compile(initializer_num,info);
        if(!Value_10) {
                        __result_obj__0 = (_Bool)0;
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 86, 333));
            come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 86, 334);
            (type_name3 = come_decrement_ref_count(type_name3, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 86, 335));
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 86, 336);
            (obj = come_decrement_ref_count(obj, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 86, 337));
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 86, 338);
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 86, 339);
            ((initializer_num) ? initializer_num = come_decrement_ref_count(initializer_num, ((struct sNode*)initializer_num)->finalize, ((struct sNode*)initializer_num)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 86, 340):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 86, 341);
            come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 86, 342);
            come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 86, 343);
            come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 86, 344);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 86, 345);
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 86, 346));
            (type_name2 = come_decrement_ref_count(type_name2, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 86, 347));
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        come_value2=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "25obj.nc", 89, 348);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        buffer_append_str(buf,((char* )(__right_value14=string_operator_add(((char* )(__right_value13=string_operator_add(((char* )(__right_value12=string_operator_add(((char* )(__right_value11=charp_operator_add("*",var_name))),"= "))),come_value2->c_value))),";"))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 91, 349));
        (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 91, 350));
        (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 91, 351));
        (__right_value8 = come_decrement_ref_count(__right_value8, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 91, 352));
        (__right_value11 = come_decrement_ref_count(__right_value11, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 91, 353));
        (__right_value12 = come_decrement_ref_count(__right_value12, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 91, 354));
        (__right_value13 = come_decrement_ref_count(__right_value13, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 91, 355));
        (__right_value14 = come_decrement_ref_count(__right_value14, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 91, 356));
        buffer_append_str(buf,var_name);
        buffer_append_str(buf,"; })");
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_11=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "25obj.nc", 96, 357, "struct CVALUE* "), "25obj.nc", 96, 358)), "25obj.nc", 96, 359);
        __right_value0 = (void*)0;
        __dec_obj41=come_value_11->c_value,
        come_value_11->c_value=(char* )come_increment_ref_count(buffer_to_string(buf), "25obj.nc", 98, 361);
        __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0, (void*)0, "25obj.nc", 98, 360);
        type2->mHeap=(_Bool)1;
        type2->mPointerNum++;
        if(type2->mNoSolvedGenericsType) {
            type2->mNoSolvedGenericsType->mPointerNum++;
            type2->mNoSolvedGenericsType->mHeap=(_Bool)1;
        }
        __right_value0 = (void*)0;
        __dec_obj42=come_value_11->type,
        come_value_11->type=(struct sType* )come_increment_ref_count(sType_clone(type2), "25obj.nc", 108, 363);
        come_call_finalizer(sType_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 108, 362);
        come_value_11->var=((void*)0);
        append_object_to_right_values(come_value_11,type2,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        add_come_last_code(info,"%s",come_value_11->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_11, "25obj.nc", 115, 378));
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 253, 379));
        come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 253, 380);
        (type_name3 = come_decrement_ref_count(type_name3, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 253, 381));
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 253, 382);
        (obj = come_decrement_ref_count(obj, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 253, 383));
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 253, 384);
        come_call_finalizer(CVALUE_finalize, come_value_11, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 253, 385);
    }
    else if(initializer) {
        static int var_num_14=1;
        var_num_14++;
        __right_value0 = (void*)0;
        var_name_15=(char* )come_increment_ref_count(xsprintf("__new_obj__%d",var_num_14), "25obj.nc", 121, 386);
        __right_value0 = (void*)0;
        type3_16=(struct sType* )come_increment_ref_count(sType_clone(type2), "25obj.nc", 123, 387);
        type3_16->mPointerNum++;
        if(type3_16->mNoSolvedGenericsType) {
            type3_16->mNoSolvedGenericsType->mPointerNum++;
        }
        __right_value0 = (void*)0;
        type_name3_17=(char* )come_increment_ref_count(make_type_name_string(type3_16,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0), "25obj.nc", 129, 388);
        __right_value0 = (void*)0;
        add_come_code_at_function_head(info,"%s;\n",((char* )(__right_value0=make_define_var(type3_16,var_name_15,info,(_Bool)0,(_Bool)0))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 131, 389));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf_18=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "25obj.nc", 133, 390, "struct buffer* "), "25obj.nc", 133, 391)), "25obj.nc", 133, 392);
        buffer_append_str(buf_18,"({");
        if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
__right_value2 = (void*)0,
({(_conditional_value_X1=(((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("come_calloc_v2"))))))));        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 138, 393));
        come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 138, 394);
_conditional_value_X1;})) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj46=obj_19,
            obj_19=(char* )come_increment_ref_count(xsprintf("%s = (%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")",var_name_15,type_name,type_name,((char* )(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,++info->id,type_name3_17), "25obj.nc", 139, 396);
            __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0, (void*)0, "25obj.nc", 139, 395);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 139, 397));
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj47=obj_19,
            obj_19=(char* )come_increment_ref_count(xsprintf("%s = (%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")",var_name_15,type_name,type_name,((char* )(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,++info->id,type_name3_17), "25obj.nc", 142, 399);
            __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0, (void*)0, "25obj.nc", 142, 398);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 142, 400));
        }
        buffer_append_str(buf_18,obj_19);
        buffer_append_str(buf_18,";");
        klass_20=type3_16->mClass;
        i=0;
        for(_o2_saved_2=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(initializer, "25obj.nc", 151, 401),it_22=list$1tuple2$2char$phsNode$ph$ph_begin(_o2_saved_2)        ;!list$1tuple2$2char$phsNode$ph$ph_end(_o2_saved_2);it_22=list$1tuple2$2char$phsNode$ph$ph_next(_o2_saved_2)){
            multiple_assign_var1=it_22;
            name=(char* )come_increment_ref_count(multiple_assign_var1->v1, "25obj.nc", 152, 402);
            exp=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2, "25obj.nc", 152, 403);
            Value_24=node_compile(exp,info);
            if(!Value_24) {
                                __result_obj__0 = (_Bool)0;
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 155, 404));
                ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 155, 405):(void*)0);
                (var_name_15 = come_decrement_ref_count(var_name_15, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 155, 406));
                come_call_finalizer(sType_finalize, type3_16, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 155, 407);
                (type_name3_17 = come_decrement_ref_count(type_name3_17, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 155, 408));
                come_call_finalizer(buffer_finalize, buf_18, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 155, 409);
                (obj_19 = come_decrement_ref_count(obj_19, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 155, 410));
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 155, 411);
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 155, 412);
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 155, 413);
                ((initializer_num) ? initializer_num = come_decrement_ref_count(initializer_num, ((struct sNode*)initializer_num)->finalize, ((struct sNode*)initializer_num)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 155, 414):(void*)0);
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 155, 415);
                come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 155, 416);
                come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 155, 417);
                come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 155, 418);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 155, 419);
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 155, 420));
                (type_name2 = come_decrement_ref_count(type_name2, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 155, 421));
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            come_value2_25=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "25obj.nc", 158, 422);
            left_type=((void*)0);
            for(_o2_saved_3=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass_20->mFields, "25obj.nc", 161, 423),it2=list$1tuple2$2char$phsType$ph$ph_begin(_o2_saved_3)            ;!list$1tuple2$2char$phsType$ph$ph_end(_o2_saved_3);it2=list$1tuple2$2char$phsType$ph$ph_next(_o2_saved_3)){
                multiple_assign_var2=it2;
                field_name=(char* )come_increment_ref_count(multiple_assign_var2->v1, "25obj.nc", 162, 424);
                field_type=(struct sType* )come_increment_ref_count(multiple_assign_var2->v2, "25obj.nc", 162, 425);
                if(string_operator_equals(name,field_name)) {
                    __right_value0 = (void*)0;
                    __dec_obj48=left_type,
                    left_type=(struct sType* )come_increment_ref_count(sType_clone(field_type), "25obj.nc", 165, 427);
                    come_call_finalizer(sType_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 165, 426);
                    (field_name = come_decrement_ref_count(field_name, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 166, 428));
                    come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 166, 429);
                    break;
                }
                (field_name = come_decrement_ref_count(field_name, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 170, 430));
                come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 170, 431);
            }
            if(left_type==((void*)0)) {
                err_msg(info,"field %s is not defined",name);
                                __result_obj__0 = (_Bool)1;
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 172, 432));
                ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 172, 433):(void*)0);
                come_call_finalizer(CVALUE_finalize, come_value2_25, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 172, 434);
                come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 172, 435);
                come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 172, 440);
                (var_name_15 = come_decrement_ref_count(var_name_15, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 172, 441));
                come_call_finalizer(sType_finalize, type3_16, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 172, 442);
                (type_name3_17 = come_decrement_ref_count(type_name3_17, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 172, 443));
                come_call_finalizer(buffer_finalize, buf_18, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 172, 444);
                (obj_19 = come_decrement_ref_count(obj_19, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 172, 445));
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 172, 446);
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 172, 447);
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 172, 448);
                ((initializer_num) ? initializer_num = come_decrement_ref_count(initializer_num, ((struct sNode*)initializer_num)->finalize, ((struct sNode*)initializer_num)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 172, 449):(void*)0);
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 172, 450);
                come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 172, 451);
                come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 172, 452);
                come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 172, 453);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 172, 454);
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 172, 455));
                (type_name2 = come_decrement_ref_count(type_name2, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 172, 456));
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            right_type=(struct sType* )come_increment_ref_count(come_value2_25->type, "25obj.nc", 175, 457);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            check_assign_type(((char*)(__right_value1=xsprintf("\%s is assining to",((char* )(__right_value0=string_to_string(name)))))),left_type,right_type,come_value2_25,info);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 177, 458));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 177, 459));
            __dec_obj49=right_type,
            right_type=(struct sType* )come_increment_ref_count(come_value2_25->type, "25obj.nc", 179, 461);
            come_call_finalizer(sType_finalize, __dec_obj49,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 179, 460);
            if(left_type->mHeap&&right_type->mHeap&&left_type->mPointerNum>0&&right_type->mPointerNum>0) {
                __right_value0 = (void*)0;
                c_value=(char* )come_increment_ref_count(increment_ref_count_object(left_type,come_value2_25->c_value,info), "25obj.nc", 182, 462);
                buffer_append_format(buf_18,"%s->%s = %s",var_name_15,name,c_value);
                (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 189, 463));
            }
            else {
                buffer_append_format(buf_18,"%s->%s = %s",var_name_15,name,come_value2_25->c_value);
            }
            buffer_append_str(buf_18,";");
            i++;
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 194, 464));
            ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 194, 465):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value2_25, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 194, 466);
            come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 194, 467);
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 194, 468);
            come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 194, 469);
        }
        buffer_append_str(buf_18,var_name_15);
        buffer_append_str(buf_18,"; })");
        __right_value0 = (void*)0;
        __dec_obj50=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(buffer_to_string(buf_18), "25obj.nc", 197, 471);
        __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0, (void*)0, "25obj.nc", 197, 470);
        type2->mHeap=(_Bool)1;
        type2->mPointerNum++;
        if(type2->mNoSolvedGenericsType) {
            type2->mNoSolvedGenericsType->mPointerNum++;
            type2->mNoSolvedGenericsType->mHeap=(_Bool)1;
        }
        __right_value0 = (void*)0;
        __dec_obj51=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(type2), "25obj.nc", 207, 473);
        come_call_finalizer(sType_finalize, __dec_obj51,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 207, 472);
        come_value->var=((void*)0);
        append_object_to_right_values(come_value,type2,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "25obj.nc", 214, 474));
        (var_name_15 = come_decrement_ref_count(var_name_15, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 253, 475));
        come_call_finalizer(sType_finalize, type3_16, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 253, 476);
        (type_name3_17 = come_decrement_ref_count(type_name3_17, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 253, 477));
        come_call_finalizer(buffer_finalize, buf_18, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 253, 478);
        (obj_19 = come_decrement_ref_count(obj_19, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 253, 479));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 253, 480);
    }
    else {
        __right_value0 = (void*)0;
        type3_28=(struct sType* )come_increment_ref_count(sType_clone(type2), "25obj.nc", 217, 481);
        type3_28->mPointerNum++;
        type3_28->mHeap=(_Bool)1;
        if(type3_28->mNoSolvedGenericsType) {
            type3_28->mNoSolvedGenericsType->mPointerNum++;
            type3_28->mNoSolvedGenericsType->mHeap=(_Bool)1;
        }
        __right_value0 = (void*)0;
        type_name3_29=(char* )come_increment_ref_count(make_type_name_string(type3_28,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0), "25obj.nc", 226, 482);
        if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
__right_value2 = (void*)0,
({(_conditional_value_X2=(((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("come_calloc_v2"))))))));        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 228, 483));
        come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 228, 484);
_conditional_value_X2;})) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj52=come_value->c_value,
            come_value->c_value=(char* )come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")",type_name,type_name,((char* )(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,++info->id,type_name3_29), "25obj.nc", 229, 486);
            __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0, (void*)0, "25obj.nc", 229, 485);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 229, 487));
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj53=come_value->c_value,
            come_value->c_value=(char* )come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")",type_name,type_name,((char* )(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,++info->id,type_name3_29), "25obj.nc", 232, 489);
            __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0, (void*)0, "25obj.nc", 232, 488);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 232, 490));
        }
        type2->mHeap=(_Bool)1;
        type2->mPointerNum++;
        if(type2->mNoSolvedGenericsType) {
            type2->mNoSolvedGenericsType->mPointerNum++;
            type2->mNoSolvedGenericsType->mHeap=(_Bool)1;
        }
        __right_value0 = (void*)0;
        __dec_obj54=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(type2), "25obj.nc", 243, 492);
        come_call_finalizer(sType_finalize, __dec_obj54,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 243, 491);
        come_value->var=((void*)0);
        append_object_to_right_values(come_value,type2,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "25obj.nc", 250, 493));
        come_call_finalizer(sType_finalize, type3_28, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 253, 494);
        (type_name3_29 = come_decrement_ref_count(type_name3_29, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 253, 495));
    }
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 253, 496);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 253, 497);
    ((initializer_num) ? initializer_num = come_decrement_ref_count(initializer_num, ((struct sNode*)initializer_num)->finalize, ((struct sNode*)initializer_num)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 253, 498):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 253, 499);
    come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 253, 500);
    come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 253, 501);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 253, 502);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 253, 503);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 253, 504));
    (type_name2 = come_decrement_ref_count(type_name2, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 253, 505));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sNodeBase_finalize(struct sNodeBase* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNodeBase_finalize", 2, 2));
    }
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
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "sType_clone", 5, 4, "struct sType* "), "sType_clone", 5, 5);
    if(self!=((void*)0)) {
        result->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj1=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(self->mOriginalLoadVarType), "sType_clone", 7, 39);
        come_call_finalizer(sType_finalize, __dec_obj1,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 7, 38);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj2=result->mChannelType,
        result->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(self->mChannelType), "sType_clone", 8, 41);
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 8, 40);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj6=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes), "sType_clone", 9, 71);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 9, 70);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj7=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType), "sType_clone", 10, 73);
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 10, 72);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj8=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum), "sType_clone", 11, 82);
        (__dec_obj8 ? __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0,0, (void*)0, "sType_clone", 11, 81) :0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj9=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas), "sType_clone", 12, 84);
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0, (void*)0, "sType_clone", 12, 83) :0);
    }
    if(self!=((void*)0)) {
        result->mAlignasDouble=self->mAlignasDouble;
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj10=result->mTupleName,
        result->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(self->mTupleName, "sType_clone", 14, 85, "char* "), "sType_clone", 14, 87);
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 14, 86);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj11=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sType_clone", 15, 88, "char* "), "sType_clone", 15, 90);
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 15, 89);
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj12=result->mVarAttribute,
        result->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mVarAttribute, "sType_clone", 16, 91, "char* "), "sType_clone", 16, 93);
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 16, 92);
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj13=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sType_clone", 17, 94, "char* "), "sType_clone", 17, 96);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 17, 95);
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj14=result->mPointerAttribute,
        result->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mPointerAttribute, "sType_clone", 18, 97, "char* "), "sType_clone", 18, 99);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 18, 98);
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
        result->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(self->mAnonymousName, "sType_clone", 49, 100, "char* "), "sType_clone", 49, 102);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 49, 101);
    }
    if(self!=((void*)0)) {
        result->mInnerStruct=self->mInnerStruct;
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj16=result->mInnerStructName,
        result->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(self->mInnerStructName, "sType_clone", 51, 103, "char* "), "sType_clone", 51, 105);
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 51, 104);
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
        result->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmName, "sType_clone", 54, 106, "char* "), "sType_clone", 54, 108);
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 54, 107);
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
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum), "sType_clone", 57, 138);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj21,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 57, 137);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj22=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum), "sType_clone", 58, 140);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj22,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 58, 139);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj23=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic), "sType_clone", 59, 160);
        come_call_finalizer(list$1int$_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 59, 159);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj24=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict), "sType_clone", 60, 162);
        come_call_finalizer(list$1int$_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 60, 161);
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
        result->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(self->mTypedefOriginalType), "sType_clone", 66, 164);
        come_call_finalizer(sType_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 66, 163);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj26=result->mOriginalTypeName,
        result->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(self->mOriginalTypeName, "sType_clone", 67, 165, "char* "), "sType_clone", 67, 167);
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 67, 166);
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
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sType_clone", 71, 169);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj27,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 71, 168);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj31=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sType_clone", 72, 201);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj31,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 72, 200);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj32=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sType_clone", 73, 203);
        come_call_finalizer(sType_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 73, 202);
    }
    if(self!=((void*)0)) {
        result->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj33=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode), "sType_clone", 75, 205);
        (__dec_obj33 ? __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0, (void*)0, "sType_clone", 75, 204) :0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj34=result->mHeapArrayNum,
        result->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mHeapArrayNum), "sType_clone", 76, 207);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj34,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 206);
    }
        __result_obj__0 = result;
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 208);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sType_finalize(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 6);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 3, 7);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 4, 10);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 5, 11);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 6, 12):(void*)0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 7, 13):(void*)0);
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 8, 14));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 9, 15));
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 10, 16));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 11, 17));
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        (self->mPointerAttribute = come_decrement_ref_count(self->mPointerAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 12, 18));
    }
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        (self->mAnonymousName = come_decrement_ref_count(self->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 13, 19));
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        (self->mInnerStructName = come_decrement_ref_count(self->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 14, 20));
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 15, 21));
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 16, 24);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 17, 25);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 18, 27);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 19, 28);
    }
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 20, 29);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 21, 30));
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 22, 31);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 23, 34);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 24, 35);
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 25, 36):(void*)0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mHeapArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 37);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 9);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sType$ph$p_finalize}", 2, 8);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 23);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0, "list_item$1sNode$ph$p_finalize", 2, 22):(void*)0);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 26);
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 33);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 32));
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
                __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1509, 42);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1509, 43);
        return __result_obj__0;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1511, 44, "struct list$1sType$ph*"), "/usr/local/include/neo-c.h", 1511, 48)), "/usr/local/include/neo-c.h", 1511, 49);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "/usr/local/include/neo-c.h", 1516, 64));
        }
        else {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "/usr/local/include/neo-c.h", 1519, 65));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1525, 66);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 67);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 68);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_initialize"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1483, 45);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 46);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 47);
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
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1529, 50);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1532, 51, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1532, 52);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj3=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1536, 54);
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1536, 53);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_0=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1542, 55, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1542, 56);
        litem_0->prev=self->head;
        litem_0->next=((void*)0);
        __dec_obj4=litem_0->item,
        litem_0->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1546, 58);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1546, 57);
        self->tail=litem_0;
        self->head->next=litem_0;
    }
    else {
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1552, 59, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1552, 60);
        litem_1->prev=self->tail;
        litem_1->next=((void*)0);
        __dec_obj5=litem_1->item,
        litem_1->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1556, 62);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1556, 61);
        self->tail->next=litem_1;
        self->tail=litem_1;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1564, 63);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 69);
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
                __result_obj__0 = (struct sNode*)come_increment_ref_count((void*)0, "sNode_clone", 4, 74);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 4, 75):(void*)0);
        return __result_obj__0;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 5, 76, "struct sNode*"), "sNode_clone", 5, 77);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(result, "sNode_clone", 16, 78);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 79):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 80):(void*)0);
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
                __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1509, 109);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1509, 110);
        return __result_obj__0;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1511, 111, "struct list$1sNode$ph*"), "/usr/local/include/neo-c.h", 1511, 115)), "/usr/local/include/neo-c.h", 1511, 116);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "/usr/local/include/neo-c.h", 1516, 131));
        }
        else {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "/usr/local/include/neo-c.h", 1519, 132));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1525, 133);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 134);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 135);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_initialize"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1483, 112);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 113);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 114);
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
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1529, 117):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1532, 118, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1532, 119);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj18=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1536, 121);
        (__dec_obj18 ? __dec_obj18 = come_decrement_ref_count(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1536, 120) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_2=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1542, 122, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1542, 123);
        litem_2->prev=self->head;
        litem_2->next=((void*)0);
        __dec_obj19=litem_2->item,
        litem_2->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1546, 125);
        (__dec_obj19 ? __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1546, 124) :0);
        self->tail=litem_2;
        self->head->next=litem_2;
    }
    else {
        __right_value0 = (void*)0;
        litem_3=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1552, 126, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1552, 127);
        litem_3->prev=self->tail;
        litem_3->next=((void*)0);
        __dec_obj20=litem_3->item,
        litem_3->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1556, 129);
        (__dec_obj20 ? __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1556, 128) :0);
        self->tail->next=litem_3;
        self->tail=litem_3;
    }
    self->len++;
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1564, 130):(void*)0);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 136);
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
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1509, 141);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1509, 142);
        return __result_obj__0;
    }
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "/usr/local/include/neo-c.h", 1511, 143, "struct list$1int$*"), "/usr/local/include/neo-c.h", 1511, 147)), "/usr/local/include/neo-c.h", 1511, 148);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1525, 155);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 156);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 157);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1483, 144);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 145);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 146);
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
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1532, 149, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1532, 150);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_4=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1542, 151, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1542, 152);
        litem_4->prev=self->head;
        litem_4->next=((void*)0);
        litem_4->item=item;
        self->tail=litem_4;
        self->head->next=litem_4;
    }
    else {
        __right_value0 = (void*)0;
        litem_5=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1552, 153, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1552, 154);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 158);
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
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1509, 170);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1509, 171);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 1511, 172, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 1511, 176)), "/usr/local/include/neo-c.h", 1511, 177);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1516, 192, "char* "), "/usr/local/include/neo-c.h", 1516, 193));
        }
        else {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1519, 194, "char* "), "/usr/local/include/neo-c.h", 1519, 195));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1525, 196);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 197);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 198);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1483, 173);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 174);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 175);
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
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1529, 178));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1532, 179, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1532, 180);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj28=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1536, 182);
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1536, 181);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_6=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1542, 183, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1542, 184);
        litem_6->prev=self->head;
        litem_6->next=((void*)0);
        __dec_obj29=litem_6->item,
        litem_6->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1546, 186);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1546, 185);
        self->tail=litem_6;
        self->head->next=litem_6;
    }
    else {
        __right_value0 = (void*)0;
        litem_7=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1552, 187, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1552, 188);
        litem_7->prev=self->tail;
        litem_7->next=((void*)0);
        __dec_obj30=litem_7->item,
        litem_7->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1556, 190);
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1556, 189);
        self->tail->next=litem_7;
        self->tail=litem_7;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1564, 191));
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 199);
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
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 214);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize}", 2, 213);
    }
            neo_current_frame = fr.prev;
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsNode$ph$p_finalize", 2, 211));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0, "tuple2$2char$phsNode$ph$p_finalize", 3, 212):(void*)0);
    }
            neo_current_frame = fr.prev;
}

static void sNewNode_finalize(struct sNewNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNewNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNewNode_finalize", 2, 220));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sNewNode_finalize}", 3, 221);
    }
    if(self!=((void*)0)&&self->initializer!=((void*)0)) {
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self->initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sNewNode_finalize}", 4, 223);
    }
    if(self!=((void*)0)&&self->initializer_num!=((void*)0)) {
        ((self->initializer_num) ? self->initializer_num = come_decrement_ref_count(self->initializer_num, ((struct sNode*)self->initializer_num)->finalize, ((struct sNode*)self->initializer_num)->_protocol_obj, 0, 0,(void*)0, "sNewNode_finalize", 5, 224):(void*)0);
    }
        neo_current_frame = fr.prev;
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
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 222);
    }
            neo_current_frame = fr.prev;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_begin"; neo_current_frame = &fr;
    struct sNode* result;
    struct sNode* __result_obj__0;
    struct sNode* result_8;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct sNode*));
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
    memset(&result_8,0,sizeof(struct sNode*));
        __result_obj__0 = result_8;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_end"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
        neo_current_frame = fr.prev;
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_next"; neo_current_frame = &fr;
    struct sNode* result;
    struct sNode* __result_obj__0;
    struct sNode* result_9;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(struct sNode*));
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
    memset(&result_9,0,sizeof(struct sNode*));
        __result_obj__0 = result_9;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void CVALUE_finalize(struct CVALUE*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 2, 245));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "CVALUE_finalize}", 3, 246);
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 4, 247));
    }
    if(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 5, 248));
    }
    if(self!=((void*)0)&&self->c_value_without_null_checker!=((void*)0)) {
        (self->c_value_without_null_checker = come_decrement_ref_count(self->c_value_without_null_checker, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 6, 249));
    }
                neo_current_frame = fr.prev;
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1854, 259);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
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
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3513, 269);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 296);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 297);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3524, 298);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3524, 299);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3524, 300);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3533, 301);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 302);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 303);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3537, 304);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 305);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 306);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3541, 307);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 308);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 309);
    return __result_obj__0;
}

static void sFun_finalize(struct sFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 2, 270));
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 3, 271);
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 4, 272);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 5, 273);
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 6, 274);
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 7, 275);
    }
    if(self!=((void*)0)&&self->mAllVar!=((void*)0)) {
        come_call_finalizer(list$1sVar$ph$p_finalize, self->mAllVar, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 8, 282);
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 9, 285);
    }
    if(self!=((void*)0)&&self->mTextBlock!=((void*)0)) {
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 10, 286));
    }
    if(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)) {
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 11, 287));
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 12, 288);
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 13, 289);
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 14, 290);
    }
    if(self!=((void*)0)&&self->mSourceEnd!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceEnd, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 15, 291);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 16, 292));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 17, 293));
    }
    if(self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 18, 294));
    }
    if(self!=((void*)0)&&self->mAsmFun!=((void*)0)) {
        (self->mAsmFun = come_decrement_ref_count(self->mAsmFun, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 19, 295));
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
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 281);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sVar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sVar$ph$p_finalize}", 2, 280);
    }
            neo_current_frame = fr.prev;
}

static void sVar_finalize(struct sVar*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 2, 276));
    }
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 3, 277));
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_finalize}", 4, 278);
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 5, 279));
    }
            neo_current_frame = fr.prev;
}

static void sBlock_finalize(struct sBlock*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 2, 283);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 3, 284);
    }
            neo_current_frame = fr.prev;
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
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3513, 310);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 311);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 312);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3524, 313);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3524, 314);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3524, 315);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3533, 316);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 317);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 318);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3537, 319);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 320);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 321);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3541, 322);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 323);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 324);
    return __result_obj__0;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_push_back"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE*  __dec_obj43  ;
    struct list_item$1CVALUE$ph* litem_12;
    struct CVALUE*  __dec_obj44  ;
    struct list_item$1CVALUE$ph* litem_13;
    struct CVALUE*  __dec_obj45  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1613, 364);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1617, 365, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1617, 366);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj43=litem->item,
        litem->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1621, 368);
        come_call_finalizer(CVALUE_finalize, __dec_obj43,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1621, 367);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_12=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1627, 369, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1627, 370);
        litem_12->prev=self->head;
        litem_12->next=((void*)0);
        __dec_obj44=litem_12->item,
        litem_12->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1631, 372);
        come_call_finalizer(CVALUE_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1631, 371);
        self->tail=litem_12;
        self->head->next=litem_12;
    }
    else {
        __right_value0 = (void*)0;
        litem_13=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1637, 373, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1637, 374);
        litem_13->prev=self->tail;
        litem_13->next=((void*)0);
        __dec_obj45=litem_13->item,
        litem_13->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1641, 376);
        come_call_finalizer(CVALUE_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1641, 375);
        self->tail->next=litem_13;
        self->tail=litem_13;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1649, 377);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_begin"; neo_current_frame = &fr;
    struct tuple2$2char$phsNode$ph* result;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    struct tuple2$2char$phsNode$ph* result_21;
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
    memset(&result_21,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__0 = result_21;
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
    struct tuple2$2char$phsNode$ph* result_23;
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
    memset(&result_23,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__0 = result_23;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_begin"; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* result;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct tuple2$2char$phsType$ph* result_26;
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
    memset(&result_26,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__0 = result_26;
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
    struct tuple2$2char$phsType$ph* result_27;
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
    memset(&result_27,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__0 = result_27;
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
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1504, 439);
    }
                    neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsType$ph$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsType$ph$ph$p_finalize}", 2, 438);
    }
            neo_current_frame = fr.prev;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize", 2, 436));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize}", 3, 437);
    }
            neo_current_frame = fr.prev;
}

struct sDeferNode* sDeferNode_initialize(struct sDeferNode* self, struct sBlock*  block  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDeferNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sBlock*  __dec_obj55  ;
    struct sDeferNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sDeferNode*)come_increment_ref_count(self, "25obj.nc", 261, 506),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 261, 507);
    __dec_obj55=self->block,
    self->block=(struct sBlock* )come_increment_ref_count(block, "25obj.nc", 263, 509);
    come_call_finalizer(sBlock_finalize, __dec_obj55,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 263, 508);
        __result_obj__0 = (struct sDeferNode*)come_increment_ref_count(self, "25obj.nc", 266, 510);
    come_call_finalizer(sDeferNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 266, 513);
    come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 266, 514);
    neo_current_frame = fr.prev;
    come_call_finalizer(sDeferNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 266, 515);
    return __result_obj__0;
}

char*  sDeferNode_kind(struct sDeferNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDeferNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sDeferNode"))), "25obj.nc", 268, 516);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 268, 517));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "25obj.nc", 268, 518));
    return __result_obj__0;
}

_Bool sDeferNode_compile(struct sDeferNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDeferNode_compile"; neo_current_frame = &fr;
    struct sBlock*  block  ;
    _Bool defer_block;
    _Bool __result_obj__0;
    block=(struct sBlock* )come_increment_ref_count(self->block, "25obj.nc", 273, 519);
    defer_block=info->defer_block;
    info->defer_block=(_Bool)1;
    transpile_block(block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    info->defer_block=defer_block;
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 282, 520);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sDeferNode_finalize(struct sDeferNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDeferNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sDeferNode_finalize", 2, 511));
    }
    if(self!=((void*)0)&&self->block!=((void*)0)) {
        come_call_finalizer(sBlock_finalize, self->block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sDeferNode_finalize}", 3, 512);
    }
        neo_current_frame = fr.prev;
}

struct sNode* create_new_object(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_new_object"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value1;
    struct sNewNode* _inf_obj_value1;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 289, 523, "struct sNode");
    _inf_obj_value1=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value1=sNewNode_initialize((struct sNewNode* )come_increment_ref_count((struct sNewNode *)come_calloc(1, sizeof(struct sNewNode )*(1), "25obj.nc", 289, 521, "struct sNewNode* "), "25obj.nc", 289, 522),type,((void*)0),((void*)0),info))), "25obj.nc", 289, 524);
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNewNode_finalize;
    _inf_value1->clone=(void*)sNewNode_clone;
    _inf_value1->compile=(void*)sNewNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sNewNode_kind;
    _inf_value1->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value1)), "25obj.nc", 289, 578);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 289, 579);
    come_call_finalizer(sNewNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 289, 580);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 289, 581):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 289, 582):(void*)0);
    return __result_obj__0;
}

static struct sNewNode* sNewNode_clone(struct sNewNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNewNode_clone"; neo_current_frame = &fr;
    struct sNewNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNewNode*  result  ;
    char*  __dec_obj56  ;
    struct sType*  __dec_obj57  ;
    struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj63;
    struct sNode* __dec_obj64;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sNewNode* )come_increment_ref_count((struct sNewNode *)come_calloc(1, sizeof(struct sNewNode )*(1), "sNewNode_clone", 5, 525, "struct sNewNode* "), "sNewNode_clone", 5, 526);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj56=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sNewNode_clone", 7, 527, "char* "), "sNewNode_clone", 7, 529);
        __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0, (void*)0, "sNewNode_clone", 7, 528);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj57=result->type,
        result->type=(struct sType* )come_increment_ref_count(sType_clone(self->type), "sNewNode_clone", 9, 531);
        come_call_finalizer(sType_finalize, __dec_obj57,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sNewNode_clone", 9, 530);
    }
    if(self!=((void*)0)&&self->initializer!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj63=result->initializer,
        result->initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->initializer), "sNewNode_clone", 10, 574);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj63,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sNewNode_clone", 10, 573);
    }
    if(self!=((void*)0)&&self->initializer_num!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj64=result->initializer_num,
        result->initializer_num=(struct sNode*)come_increment_ref_count(sNode_clone(self->initializer_num), "sNewNode_clone", 11, 576);
        (__dec_obj64 ? __dec_obj64 = come_decrement_ref_count(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0, (void*)0, "sNewNode_clone", 11, 575) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sNewNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sNewNode_clone}", 12, 577);
    neo_current_frame = fr.prev;
    return __result_obj__0;
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
                __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1509, 532);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1509, 533);
        return __result_obj__0;
    }
    result=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1511, 534, "struct list$1tuple2$2char$phsNode$ph$ph*"), "/usr/local/include/neo-c.h", 1511, 538)), "/usr/local/include/neo-c.h", 1511, 539);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1tuple2$2char$phsNode$ph$ph_add(result,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it->item), "/usr/local/include/neo-c.h", 1516, 568));
        }
        else {
            __right_value0 = (void*)0;
            list$1tuple2$2char$phsNode$ph$ph_add(result,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it->item), "/usr/local/include/neo-c.h", 1519, 569));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1525, 570);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 571);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1525, 572);
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_initialize"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1483, 535);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 536);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1483, 537);
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_add"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
    struct tuple2$2char$phsNode$ph* __dec_obj58;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_30;
    struct tuple2$2char$phsNode$ph* __dec_obj59;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_31;
    struct tuple2$2char$phsNode$ph* __dec_obj60;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1529, 540);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1532, 541, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1532, 542);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj58=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1536, 544);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj58,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1536, 543);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_30=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1542, 545, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1542, 546);
        litem_30->prev=self->head;
        litem_30->next=((void*)0);
        __dec_obj59=litem_30->item,
        litem_30->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1546, 548);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj59,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1546, 547);
        self->tail=litem_30;
        self->head->next=litem_30;
    }
    else {
        __right_value0 = (void*)0;
        litem_31=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1552, 549, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1552, 550);
        litem_31->prev=self->tail;
        litem_31->next=((void*)0);
        __dec_obj60=litem_31->item,
        litem_31->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1556, 552);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj60,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1556, 551);
        self->tail->next=litem_31;
        self->tail=litem_31;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1564, 553);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_clone"; neo_current_frame = &fr;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct tuple2$2char$phsNode$ph* result;
    char*  __dec_obj61  ;
    struct sNode* __dec_obj62;
    if(self==(void*)0) {
                __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count((void*)0, "tuple2$2char$phsNode$ph_clone", 4, 554);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple2$2char$phsNode$ph_clone}", 4, 555);
        return __result_obj__0;
    }
    result=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 5, 556, "struct tuple2$2char$phsNode$ph*"), "tuple2$2char$phsNode$ph_clone", 5, 557);
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj61=result->v1,
        result->v1=(char* )come_increment_ref_count((char* )come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 6, 558, "char* "), "tuple2$2char$phsNode$ph_clone", 6, 560);
        __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0, (void*)0, "tuple2$2char$phsNode$ph_clone", 6, 559);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj62=result->v2,
        result->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2), "tuple2$2char$phsNode$ph_clone", 7, 562);
        (__dec_obj62 ? __dec_obj62 = come_decrement_ref_count(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0, (void*)0, "tuple2$2char$phsNode$ph_clone", 7, 561) :0);
    }
        __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result, "tuple2$2char$phsNode$ph_clone", 8, 563);
    come_call_finalizer(tuple2$2char$phsNode$ph_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple2$2char$phsNode$ph_clone}", 8, 566);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple2$2char$phsNode$ph_clone}", 8, 567);
    return __result_obj__0;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsNode$ph_finalize", 2, 564));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0, "tuple2$2char$phsNode$ph_finalize", 3, 565):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType*  inf_type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sImplementsNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj65;
    struct sType*  __dec_obj66  ;
    struct sImplementsNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sImplementsNode*)come_increment_ref_count(self, "25obj.nc", 296, 583),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 296, 584);
    __right_value0 = (void*)0;
    __dec_obj65=self->obj_exp,
    self->obj_exp=(struct sNode*)come_increment_ref_count(sNode_clone(obj_exp), "25obj.nc", 298, 586);
    (__dec_obj65 ? __dec_obj65 = come_decrement_ref_count(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 298, 585) :0);
    __right_value0 = (void*)0;
    __dec_obj66=self->inf_type,
    self->inf_type=(struct sType* )come_increment_ref_count(sType_clone(inf_type), "25obj.nc", 299, 588);
    come_call_finalizer(sType_finalize, __dec_obj66,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 299, 587);
        __result_obj__0 = (struct sImplementsNode*)come_increment_ref_count(self, "25obj.nc", 302, 589);
    come_call_finalizer(sImplementsNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 302, 593);
    ((obj_exp) ? obj_exp = come_decrement_ref_count(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 302, 594):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sImplementsNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 302, 595);
    return __result_obj__0;
}

char*  sImplementsNode_kind(struct sImplementsNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sImplementsNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sImplementsNode"))), "25obj.nc", 304, 596);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 304, 597));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "25obj.nc", 304, 598));
    return __result_obj__0;
}

_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sImplementsNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* obj_exp;
    struct sType*  inf_type  ;
    _Bool Value;
    _Bool __result_obj__0;
    struct CVALUE*  come_value  ;
    struct sType*  type  ;
    struct sClass*  klass  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    struct sType*  type2  ;
    char*  type_name  ;
    char*  type_name2  ;
    int inf_num_stack;
    char*  buf  ;
    char*  buf2  ;
    void* __right_value2 = (void*)0;
    _Bool _conditional_value_X0;
    char*  c_value  ;
    struct sType*  typeX  ;
    int i;
    struct tuple2$2char$phsType$ph* multiple_assign_var3
;    char*  name  =0;
    struct sType*  field_type  =0;
    char*  method_name  ;
    struct sFun*  fun  ;
    struct sType*  type2_34  ;
    struct tuple2$2sFun$pchar$ph* multiple_assign_var4
;    struct sFun*  fun2  =0;
    char*  real_fun_name  =0;
    char*  __dec_obj67  ;
    struct sType*  type2_35  ;
    struct tuple2$2sFun$pchar$ph* multiple_assign_var5
;    struct sFun*  fun2_36  =0;
    char*  real_fun_name_37  =0;
    char*  __dec_obj68  ;
    struct sClass*  klass2  ;
    char*  __dec_obj69  ;
    char*  __dec_obj70  ;
    struct sType*  type3  ;
    struct sType*  __dec_obj71  ;
    obj_exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->obj_exp), "25obj.nc", 309, 599);
    __right_value0 = (void*)0;
    inf_type=(struct sType* )come_increment_ref_count(sType_clone(self->inf_type), "25obj.nc", 310, 600);
    Value=node_compile(obj_exp,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((obj_exp) ? obj_exp = come_decrement_ref_count(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 313, 601):(void*)0);
        come_call_finalizer(sType_finalize, inf_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 313, 602);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "25obj.nc", 316, 603);
    __right_value0 = (void*)0;
    type=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "25obj.nc", 318, 604);
    type->mPointerNum--;
    type->mHeap=(_Bool)0;
    klass=inf_type->mClass;
    __right_value0 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "25obj.nc", 324, 605, "struct CVALUE* "), "25obj.nc", 324, 606)), "25obj.nc", 324, 607);
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(sType_clone(inf_type), "25obj.nc", 326, 608);
    __right_value0 = (void*)0;
    type_name=(char* )come_increment_ref_count(make_type_name_string(inf_type,info,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0), "25obj.nc", 328, 609);
    __right_value0 = (void*)0;
    type_name2=(char* )come_increment_ref_count(make_type_name_string(type,info,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0), "25obj.nc", 329, 610);
    static int inf_num=0;
    ++inf_num;
    inf_num_stack=inf_num;
    __right_value0 = (void*)0;
    buf=(char* )come_increment_ref_count(xsprintf("%s* _inf_value%d;\n",type_name,inf_num_stack), "25obj.nc", 335, 611);
    add_come_code_at_function_head(info,buf);
    __right_value0 = (void*)0;
    buf2=(char* )come_increment_ref_count(xsprintf("%s* _inf_obj_value%d;\n",type_name2,inf_num_stack), "25obj.nc", 337, 612);
    add_come_code_at_function_head(info,buf2);
    if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X0=(((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("come_calloc_v2"))))))));    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 340, 613));
    come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 340, 614);
_conditional_value_X0;})) {
        add_come_code(info,"_inf_value%d=(%s*)come_calloc_v2(1, sizeof(%s), \"%s\", %d, %d, \"%s\");\n",inf_num_stack,type_name,type_name,info->sname,info->sline,++info->id,type_name);
    }
    else {
        add_come_code(info,"_inf_value%d=(%s*)come_calloc(1, sizeof(%s), \"%s\", %d, %d, \"%s\");\n",inf_num_stack,type_name,type_name,info->sname,info->sline,++info->id,type_name);
    }
    __right_value0 = (void*)0;
    c_value=(char* )come_increment_ref_count(increment_ref_count_object(come_value->type,come_value->c_value,info), "25obj.nc", 347, 615);
    add_come_code(info,"_inf_obj_value%d=%s;\n",inf_num_stack,c_value);
    add_come_code(info,"_inf_value%d->_protocol_obj=_inf_obj_value%d;\n",inf_num_stack,inf_num_stack);
    __right_value0 = (void*)0;
    typeX=(struct sType* )come_increment_ref_count(sType_clone(type), "25obj.nc", 351, 616);
    typeX->mPointerNum++;
    __right_value0 = (void*)0;
    ((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_finalizer_automatically(typeX,"finalize",info)));
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 354, 618);
    __right_value0 = (void*)0;
    ((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_cloner_automatically(typeX,"clone",info)));
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 355, 619);
    for(i=1    ;i<list$1tuple2$2char$phsType$ph$ph_length(klass->mFields);i++){
        __right_value0 = (void*)0;
        multiple_assign_var3=((struct tuple2$2char$phsType$ph*)(__right_value0=list$1tuple2$2char$phsType$ph$ph_operator_load_element(klass->mFields,i)));
        name=(char* )come_increment_ref_count(multiple_assign_var3->v1, "25obj.nc", 358, 638);
        field_type=(struct sType* )come_increment_ref_count(multiple_assign_var3->v2, "25obj.nc", 358, 639);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 358, 640);
        __right_value0 = (void*)0;
        method_name=(char* )come_increment_ref_count(create_method_name(type,(_Bool)0,name,info,(_Bool)1), "25obj.nc", 360, 641);
        __right_value0 = (void*)0;
        fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(info->funcs,method_name,((void*)0),(_Bool)0)));
        if(fun==((void*)0)&&string_operator_equals(name,"to_string")) {
            __right_value0 = (void*)0;
            type2_34=(struct sType* )come_increment_ref_count(sType_clone(type), "25obj.nc", 365, 657);
            type2_34->mPointerNum++;
            __right_value0 = (void*)0;
            multiple_assign_var4=((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_to_string_automatically(type2_34,name,info)));
            fun2=multiple_assign_var4->v1;
            real_fun_name=(char* )come_increment_ref_count(multiple_assign_var4->v2, "25obj.nc", 368, 658);
            come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 368, 659);
            fun=fun2;
            __dec_obj67=method_name,
            method_name=(char* )come_increment_ref_count(real_fun_name, "25obj.nc", 371, 661);
            __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0, (void*)0, "25obj.nc", 371, 660);
            come_call_finalizer(sType_finalize, type2_34, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 373, 662);
            (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 373, 663));
        }
        if(fun==((void*)0)&&string_operator_equals(name,"equals")) {
            __right_value0 = (void*)0;
            type2_35=(struct sType* )come_increment_ref_count(sType_clone(type), "25obj.nc", 374, 664);
            type2_35->mPointerNum++;
            __right_value0 = (void*)0;
            multiple_assign_var5=((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_equals_automatically(type2_35,name,info)));
            fun2_36=multiple_assign_var5->v1;
            real_fun_name_37=(char* )come_increment_ref_count(multiple_assign_var5->v2, "25obj.nc", 377, 665);
            come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 377, 666);
            fun=fun2_36;
            __dec_obj68=method_name,
            method_name=(char* )come_increment_ref_count(real_fun_name_37, "25obj.nc", 380, 668);
            __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0, (void*)0, "25obj.nc", 380, 667);
            come_call_finalizer(sType_finalize, type2_35, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 383, 669);
            (real_fun_name_37 = come_decrement_ref_count(real_fun_name_37, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 383, 670));
        }
        if(fun==((void*)0)) {
            __right_value0 = (void*)0;
            klass2=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,type->mClass->mName)));
            while(__right_value0 = (void*)0,
({(_conditional_value_X0=(((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass2->mParentClassName)))));            come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 385, 705);
_conditional_value_X0;})) {
                __right_value0 = (void*)0;
                klass2=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass2->mParentClassName)));
                __right_value0 = (void*)0;
                __dec_obj69=method_name,
                method_name=(char* )come_increment_ref_count(create_method_name_using_class(klass2,name,info), "25obj.nc", 388, 707);
                __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0, (void*)0, "25obj.nc", 388, 706);
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                fun=((struct sFun* )(__right_value1=map$2char$phsFun$ph_at(info->funcs,((char* )(__right_value0=__builtin_string(method_name))),((void*)0),(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 390, 708));
                if(fun) {
                    break;
                }
            }
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_stack,name,method_name);
        }
        else {
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_stack,name,method_name);
        }
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 404, 709));
        come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 404, 710);
        (method_name = come_decrement_ref_count(method_name, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 404, 711));
    }
    __right_value0 = (void*)0;
    __dec_obj70=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(xsprintf("_inf_value%d",inf_num_stack), "25obj.nc", 404, 713);
    __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0, (void*)0, "25obj.nc", 404, 712);
    __right_value0 = (void*)0;
    type3=(struct sType* )come_increment_ref_count(sType_clone(inf_type), "25obj.nc", 406, 714);
    type3->mPointerNum++;
    type3->mHeap=(_Bool)1;
    type2->mHeap=(_Bool)1;
    __right_value0 = (void*)0;
    __dec_obj71=come_value2->type,
    come_value2->type=(struct sType* )come_increment_ref_count(sType_clone(type2), "25obj.nc", 411, 716);
    come_call_finalizer(sType_finalize, __dec_obj71,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 411, 715);
    come_value2->type->mPointerNum++;
    come_value2->var=((void*)0);
    append_object_to_right_values(come_value2,type3,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    add_come_last_code(info,"%s",come_value2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "25obj.nc", 419, 717));
        __result_obj__0 = (_Bool)1;
    ((obj_exp) ? obj_exp = come_decrement_ref_count(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 421, 718):(void*)0);
    come_call_finalizer(sType_finalize, inf_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 421, 719);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 421, 720);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 421, 721);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 421, 722);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 421, 723);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 421, 724));
    (type_name2 = come_decrement_ref_count(type_name2, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 421, 725));
    (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 421, 726));
    (buf2 = come_decrement_ref_count(buf2, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 421, 727));
    (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 421, 728));
    come_call_finalizer(sType_finalize, typeX, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 421, 729);
    come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 421, 730);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sImplementsNode_finalize(struct sImplementsNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sImplementsNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sImplementsNode_finalize", 2, 590));
    }
    if(self!=((void*)0)&&self->obj_exp!=((void*)0)) {
        ((self->obj_exp) ? self->obj_exp = come_decrement_ref_count(self->obj_exp, ((struct sNode*)self->obj_exp)->finalize, ((struct sNode*)self->obj_exp)->_protocol_obj, 0, 0,(void*)0, "sImplementsNode_finalize", 3, 591):(void*)0);
    }
    if(self!=((void*)0)&&self->inf_type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->inf_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sImplementsNode_finalize}", 4, 592);
    }
        neo_current_frame = fr.prev;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2sFun$pchar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2sFun$pchar$ph$p_finalize", 2, 617));
    }
        neo_current_frame = fr.prev;
}

static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_length"; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return self->len;
        neo_current_frame = fr.prev;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* default_value;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
    int i;
    struct tuple2$2char$phsType$ph* default_value_32;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct tuple2$2char$phsType$ph*));
                __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2148, 620);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 621);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 622);
        return __result_obj__0;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2151, 623);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2159, 624);
            neo_current_frame = fr.prev;
            come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2159, 625);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_32,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value_32, "/usr/local/include/neo-c.h", 2167, 626);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value_32, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 627);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 628);
    return __result_obj__0;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_operator_load_element"; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* default_value;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
    int i;
    struct tuple2$2char$phsType$ph* default_value_33;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct tuple2$2char$phsType$ph*));
                __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2148, 629);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 630);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 631);
        return __result_obj__0;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2151, 632);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2159, 633);
            neo_current_frame = fr.prev;
            come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2159, 634);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_33,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value_33, "/usr/local/include/neo-c.h", 2167, 635);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value_33, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 636);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 637);
    return __result_obj__0;
}

static struct sFun*  map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char*  key  , struct sFun*  default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_at"; neo_current_frame = &fr;
    struct sFun*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3139, 642);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3139, 643);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3139, 644);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3150, 645);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3150, 646);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3150, 647);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3159, 648);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3159, 649);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3159, 650);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3163, 651);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3163, 652);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3163, 653);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3167, 654);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3167, 655);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3167, 656);
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
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3513, 671);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 676);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 677);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3524, 678);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3524, 679);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3524, 680);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3533, 681);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 682);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 683);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3537, 684);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 685);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 686);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3541, 687);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 688);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 689);
    return __result_obj__0;
}

static void sClass_finalize(struct sClass*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sClass_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 2, 672));
    }
    if(self!=((void*)0)&&self->mFields!=((void*)0)) {
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self->mFields, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sClass_finalize}", 3, 673);
    }
    if(self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 4, 674));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 5, 675));
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
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3513, 690);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 691);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3513, 692);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3524, 693);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3524, 694);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3524, 695);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3533, 696);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 697);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 698);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3537, 699);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 700);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3537, 701);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3541, 702);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 703);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3541, 704);
    return __result_obj__0;
}

struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTrueNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sTrueNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sTrueNode*)come_increment_ref_count(self, "25obj.nc", 429, 731),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 429, 732);
        __result_obj__0 = (struct sTrueNode*)come_increment_ref_count(self, "25obj.nc", 432, 733);
    come_call_finalizer(sTrueNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 432, 735);
    neo_current_frame = fr.prev;
    come_call_finalizer(sTrueNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 432, 736);
    return __result_obj__0;
}

char*  sTrueNode_kind(struct sTrueNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTrueNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sTrueNode"))), "25obj.nc", 434, 737);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 434, 738));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "25obj.nc", 434, 739));
    return __result_obj__0;
}

_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTrueNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj72  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj73  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "25obj.nc", 439, 740, "struct CVALUE* "), "25obj.nc", 439, 741)), "25obj.nc", 439, 742);
    __right_value0 = (void*)0;
    __dec_obj72=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("(_Bool)1"), "25obj.nc", 441, 744);
    __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0, (void*)0, "25obj.nc", 441, 743);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj73=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "25obj.nc", 442, 745, "struct sType* "), "25obj.nc", 442, 746),(char*)come_increment_ref_count(xsprintf("_Bool"), "25obj.nc", 442, 747),(_Bool)0,info,(_Bool)0,0), "25obj.nc", 442, 749);
    come_call_finalizer(sType_finalize, __dec_obj73,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 442, 748);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "25obj.nc", 447, 750));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 449, 751);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sTrueNode_finalize(struct sTrueNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTrueNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sTrueNode_finalize", 2, 734));
    }
        neo_current_frame = fr.prev;
}

struct sNode* create_true_object(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_true_object"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value2;
    struct sTrueNode* _inf_obj_value2;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 455, 754, "struct sNode");
    _inf_obj_value2=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(__right_value1=sTrueNode_initialize((struct sTrueNode* )come_increment_ref_count((struct sTrueNode *)come_calloc(1, sizeof(struct sTrueNode )*(1), "25obj.nc", 455, 752, "struct sTrueNode* "), "25obj.nc", 455, 753),info))), "25obj.nc", 455, 755);
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sTrueNode_finalize;
    _inf_value2->clone=(void*)sTrueNode_clone;
    _inf_value2->compile=(void*)sTrueNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sTrueNode_kind;
    _inf_value2->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value2)), "25obj.nc", 455, 762);
    come_call_finalizer(sTrueNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 455, 763);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 455, 764):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 455, 765):(void*)0);
    return __result_obj__0;
}

static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTrueNode_clone"; neo_current_frame = &fr;
    struct sTrueNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sTrueNode*  result  ;
    char*  __dec_obj74  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sTrueNode* )come_increment_ref_count((struct sTrueNode *)come_calloc(1, sizeof(struct sTrueNode )*(1), "sTrueNode_clone", 5, 756, "struct sTrueNode* "), "sTrueNode_clone", 5, 757);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj74=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sTrueNode_clone", 7, 758, "char* "), "sTrueNode_clone", 7, 760);
        __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0, (void*)0, "sTrueNode_clone", 7, 759);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
        __result_obj__0 = result;
    come_call_finalizer(sTrueNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sTrueNode_clone}", 9, 761);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFalseNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sFalseNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sFalseNode*)come_increment_ref_count(self, "25obj.nc", 462, 766),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 462, 767);
        __result_obj__0 = (struct sFalseNode*)come_increment_ref_count(self, "25obj.nc", 465, 768);
    come_call_finalizer(sFalseNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 465, 770);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFalseNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 465, 771);
    return __result_obj__0;
}

char*  sFalseNode_kind(struct sFalseNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFalseNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sFalseNode"))), "25obj.nc", 467, 772);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 467, 773));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "25obj.nc", 467, 774));
    return __result_obj__0;
}

_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFalseNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj75  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj76  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "25obj.nc", 472, 775, "struct CVALUE* "), "25obj.nc", 472, 776)), "25obj.nc", 472, 777);
    __right_value0 = (void*)0;
    __dec_obj75=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("(_Bool)0"), "25obj.nc", 474, 779);
    __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0, (void*)0, "25obj.nc", 474, 778);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj76=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "25obj.nc", 475, 780, "struct sType* "), "25obj.nc", 475, 781),(char*)come_increment_ref_count(xsprintf("_Bool"), "25obj.nc", 475, 782),(_Bool)0,info,(_Bool)0,0), "25obj.nc", 475, 784);
    come_call_finalizer(sType_finalize, __dec_obj76,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 475, 783);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "25obj.nc", 480, 785));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 482, 786);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sFalseNode_finalize(struct sFalseNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFalseNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sFalseNode_finalize", 2, 769));
    }
        neo_current_frame = fr.prev;
}

struct sNode* create_false_object(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_false_object"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value3;
    struct sFalseNode* _inf_obj_value3;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 488, 789, "struct sNode");
    _inf_obj_value3=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(__right_value1=sFalseNode_initialize((struct sFalseNode* )come_increment_ref_count((struct sFalseNode *)come_calloc(1, sizeof(struct sFalseNode )*(1), "25obj.nc", 488, 787, "struct sFalseNode* "), "25obj.nc", 488, 788),info))), "25obj.nc", 488, 790);
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFalseNode_finalize;
    _inf_value3->clone=(void*)sFalseNode_clone;
    _inf_value3->compile=(void*)sFalseNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFalseNode_kind;
    _inf_value3->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value3)), "25obj.nc", 488, 797);
    come_call_finalizer(sFalseNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 488, 798);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 488, 799):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 488, 800):(void*)0);
    return __result_obj__0;
}

static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFalseNode_clone"; neo_current_frame = &fr;
    struct sFalseNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sFalseNode*  result  ;
    char*  __dec_obj77  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sFalseNode* )come_increment_ref_count((struct sFalseNode *)come_calloc(1, sizeof(struct sFalseNode )*(1), "sFalseNode_clone", 5, 791, "struct sFalseNode* "), "sFalseNode_clone", 5, 792);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj77=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sFalseNode_clone", 7, 793, "char* "), "sFalseNode_clone", 7, 795);
        __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0, (void*)0, "sFalseNode_clone", 7, 794);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
        __result_obj__0 = result;
    come_call_finalizer(sFalseNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sFalseNode_clone}", 9, 796);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sGeneric* sGeneric_initialize(struct sGeneric* self, struct sNode* exp, struct list$1sType$ph* types, struct list$1sNode$ph* exps, struct sNode* default_exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGeneric_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj78;
    struct list$1sType$ph* __dec_obj79;
    struct list$1sNode$ph* __dec_obj80;
    struct sNode* __dec_obj81;
    struct sGeneric* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sGeneric*)come_increment_ref_count(self, "25obj.nc", 495, 801),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 495, 802);
    __dec_obj78=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(exp, "25obj.nc", 497, 804);
    (__dec_obj78 ? __dec_obj78 = come_decrement_ref_count(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 497, 803) :0);
    __dec_obj79=self->types,
    self->types=(struct list$1sType$ph*)come_increment_ref_count(types, "25obj.nc", 498, 806);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj79,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 498, 805);
    __dec_obj80=self->exps,
    self->exps=(struct list$1sNode$ph*)come_increment_ref_count(exps, "25obj.nc", 499, 808);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj80,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 499, 807);
    __dec_obj81=self->default_exp,
    self->default_exp=(struct sNode*)come_increment_ref_count(default_exp, "25obj.nc", 500, 810);
    (__dec_obj81 ? __dec_obj81 = come_decrement_ref_count(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 500, 809) :0);
        __result_obj__0 = (struct sGeneric*)come_increment_ref_count(self, "25obj.nc", 503, 811);
    come_call_finalizer(sGeneric_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 503, 817);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 503, 818):(void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 503, 819);
    come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 503, 820);
    ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 503, 821):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGeneric_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 503, 822);
    return __result_obj__0;
}

char*  sGeneric_kind(struct sGeneric* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGeneric_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sGeneric"))), "25obj.nc", 505, 823);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 505, 824));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "25obj.nc", 505, 825));
    return __result_obj__0;
}

_Bool sGeneric_compile(struct sGeneric* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGeneric_compile"; neo_current_frame = &fr;
    struct sNode* exp;
    struct list$1sNode$ph* exps;
    struct list$1sType$ph* types;
    struct sNode* default_exp;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    _Bool Value;
    _Bool __result_obj__0;
    struct CVALUE*  come_value  ;
    struct sType*  result_type  ;
    int n;
    struct list$1sNode$ph* _o2_saved_4;
    struct sNode* it;
    struct sType*  type  ;
    _Bool Value_40;
    struct CVALUE*  come_value_41  ;
    struct sType*  __dec_obj82  ;
    _Bool Value_42;
    struct CVALUE*  come_value_43  ;
    int n_44;
    struct list$1sNode$ph* _o2_saved_5;
    struct sNode* it_45;
    struct sType*  type_46  ;
    _Bool Value_47;
    struct CVALUE*  come_value_48  ;
    struct sType*  __dec_obj83  ;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj84  ;
    struct sType*  __dec_obj85  ;
    exp=(struct sNode*)come_increment_ref_count(self->exp, "25obj.nc", 510, 826);
    exps=(struct list$1sNode$ph*)come_increment_ref_count(self->exps, "25obj.nc", 511, 827);
    types=(struct list$1sType$ph*)come_increment_ref_count(self->types, "25obj.nc", 512, 828);
    default_exp=(struct sNode*)come_increment_ref_count(self->default_exp, "25obj.nc", 513, 829);
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "25obj.nc", 515, 830, "struct buffer* "), "25obj.nc", 515, 831)), "25obj.nc", 515, 832);
    Value=node_compile(exp,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 518, 833):(void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 518, 834);
        come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 518, 835);
        ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 518, 836):(void*)0);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 518, 837);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "25obj.nc", 520, 838);
    buffer_append_format(buf,"_Generic((%s), ",come_value->c_value);
    result_type=((void*)0);
    if(default_exp) {
        n=0;
        for(_o2_saved_4=(struct list$1sNode$ph*)come_increment_ref_count(exps, "25obj.nc", 527, 839),it=list$1sNode$ph_begin(_o2_saved_4)        ;!list$1sNode$ph_end(_o2_saved_4);it=list$1sNode$ph_next(_o2_saved_4)){
            __right_value0 = (void*)0;
            type=(struct sType* )come_increment_ref_count(list$1sType$ph_operator_load_element(types,n), "25obj.nc", 528, 858);
            Value_40=node_compile(it,info);
            if(!Value_40) {
                                __result_obj__0 = (_Bool)0;
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 531, 859);
                come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 531, 860);
                ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 531, 861):(void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 531, 862);
                come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 531, 863);
                ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 531, 864):(void*)0);
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 531, 865);
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 531, 866);
                come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 531, 867);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            come_value_41=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "25obj.nc", 534, 868);
            __dec_obj82=result_type,
            result_type=(struct sType* )come_increment_ref_count(come_value_41->type, "25obj.nc", 536, 870);
            come_call_finalizer(sType_finalize, __dec_obj82,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 536, 869);
            __right_value0 = (void*)0;
            buffer_append_format(buf,"%s: %s",((char* )(__right_value0=make_type_name_string(type,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0))),come_value_41->c_value);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 538, 871));
            buffer_append_format(buf,",");
            n++;
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 545, 872);
            come_call_finalizer(CVALUE_finalize, come_value_41, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 545, 873);
        }
        Value_42=node_compile(default_exp,info);
        if(!Value_42) {
                        __result_obj__0 = (_Bool)0;
            come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 546, 874);
            ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 546, 875):(void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 546, 876);
            come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 546, 877);
            ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 546, 878):(void*)0);
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 546, 879);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 546, 880);
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 546, 881);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        come_value_43=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "25obj.nc", 549, 882);
        buffer_append_format(buf,"default: %s",come_value_43->c_value);
        buffer_append_format(buf,")");
        come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 582, 883);
        come_call_finalizer(CVALUE_finalize, come_value_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 582, 884);
    }
    else {
        n_44=0;
        for(_o2_saved_5=(struct list$1sNode$ph*)come_increment_ref_count(exps, "25obj.nc", 557, 885),it_45=list$1sNode$ph_begin(_o2_saved_5)        ;!list$1sNode$ph_end(_o2_saved_5);it_45=list$1sNode$ph_next(_o2_saved_5)){
            __right_value0 = (void*)0;
            type_46=(struct sType* )come_increment_ref_count(list$1sType$ph_operator_load_element(types,n_44), "25obj.nc", 558, 886);
            Value_47=node_compile(it_45,info);
            if(!Value_47) {
                                __result_obj__0 = (_Bool)0;
                come_call_finalizer(sType_finalize, type_46, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 561, 887);
                come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_5, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 561, 888);
                ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 561, 889):(void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 561, 890);
                come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 561, 891);
                ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 561, 892):(void*)0);
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 561, 893);
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 561, 894);
                come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 561, 895);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            come_value_48=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "25obj.nc", 564, 896);
            __dec_obj83=result_type,
            result_type=(struct sType* )come_increment_ref_count(come_value_48->type, "25obj.nc", 566, 898);
            come_call_finalizer(sType_finalize, __dec_obj83,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 566, 897);
            __right_value0 = (void*)0;
            buffer_append_format(buf,"%s: %s",((char* )(__right_value0=make_type_name_string(type_46,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0))),come_value_48->c_value);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 568, 899));
            if(n_44==list$1sNode$ph_length(exps)-1) {
                buffer_append_format(buf,")");
            }
            else {
                buffer_append_format(buf,",");
            }
            n_44++;
            come_call_finalizer(sType_finalize, type_46, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 579, 900);
            come_call_finalizer(CVALUE_finalize, come_value_48, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 579, 901);
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_5, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 582, 902);
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "25obj.nc", 582, 903, "struct CVALUE* "), "25obj.nc", 582, 904)), "25obj.nc", 582, 905);
    __right_value0 = (void*)0;
    __dec_obj84=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(buffer_to_string(buf), "25obj.nc", 584, 907);
    __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0, (void*)0, "25obj.nc", 584, 906);
    __dec_obj85=come_value2->type,
    come_value2->type=(struct sType* )come_increment_ref_count(result_type, "25obj.nc", 585, 909);
    come_call_finalizer(sType_finalize, __dec_obj85,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 585, 908);
    come_value2->var=((void*)0);
    add_come_last_code(info,"%s",come_value2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "25obj.nc", 590, 910));
        __result_obj__0 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 592, 911):(void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 592, 912);
    come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 592, 913);
    ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 592, 914):(void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 592, 915);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 592, 916);
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 592, 917);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 592, 918);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sGeneric_finalize(struct sGeneric* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGeneric_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sGeneric_finalize", 2, 812));
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0, "sGeneric_finalize", 3, 813):(void*)0);
    }
    if(self!=((void*)0)&&self->types!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGeneric_finalize}", 4, 814);
    }
    if(self!=((void*)0)&&self->exps!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGeneric_finalize}", 5, 815);
    }
    if(self!=((void*)0)&&self->default_exp!=((void*)0)) {
        ((self->default_exp) ? self->default_exp = come_decrement_ref_count(self->default_exp, ((struct sNode*)self->default_exp)->finalize, ((struct sNode*)self->default_exp)->_protocol_obj, 0, 0,(void*)0, "sGeneric_finalize", 6, 816):(void*)0);
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
    struct sType*  default_value_38  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType* ));
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2148, 840);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 841);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 842);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2151, 843);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sType* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2159, 844);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2159, 845);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_38,0,sizeof(struct sType* ));
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_38, "/usr/local/include/neo-c.h", 2167, 846);
    come_call_finalizer(sType_finalize, default_value_38, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 847);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 848);
    return __result_obj__0;
}

static struct sType*  list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    struct list_item$1sType$ph* it;
    int i;
    struct sType*  default_value_39  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType* ));
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2148, 849);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 850);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2148, 851);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2151, 852);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sType* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2159, 853);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2159, 854);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_39,0,sizeof(struct sType* ));
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_39, "/usr/local/include/neo-c.h", 2167, 855);
    come_call_finalizer(sType_finalize, default_value_39, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 856);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2167, 857);
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

struct sHeapSizeOfNode* sHeapSizeOfNode_initialize(struct sHeapSizeOfNode* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sHeapSizeOfNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj86  ;
    struct sHeapSizeOfNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sHeapSizeOfNode*)come_increment_ref_count(self, "25obj.nc", 600, 919),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 600, 920);
    __right_value0 = (void*)0;
    __dec_obj86=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type), "25obj.nc", 602, 922);
    come_call_finalizer(sType_finalize, __dec_obj86,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 602, 921);
        __result_obj__0 = (struct sHeapSizeOfNode*)come_increment_ref_count(self, "25obj.nc", 605, 923);
    come_call_finalizer(sHeapSizeOfNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 605, 926);
    neo_current_frame = fr.prev;
    come_call_finalizer(sHeapSizeOfNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 605, 927);
    return __result_obj__0;
}

char*  sHeapSizeOfNode_kind(struct sHeapSizeOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sHeapSizeOfNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sHeapSizeOfNode"))), "25obj.nc", 607, 928);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 607, 929));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "25obj.nc", 607, 930));
    return __result_obj__0;
}

_Bool sHeapSizeOfNode_compile(struct sHeapSizeOfNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sHeapSizeOfNode_compile"; neo_current_frame = &fr;
    struct sType*  type  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    struct buffer*  buf  ;
    struct list$1sNode$ph* _o2_saved_6;
    struct sNode* it;
    _Bool Value;
    _Bool __result_obj__0;
    struct CVALUE*  cvalue  ;
    char*  __dec_obj87  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj88  ;
    type=(struct sType* )come_increment_ref_count(self->type, "25obj.nc", 612, 931);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "25obj.nc", 614, 932, "struct CVALUE* "), "25obj.nc", 614, 933)), "25obj.nc", 614, 934);
    __right_value0 = (void*)0;
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,info->generics_type,info), "25obj.nc", 616, 935);
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "25obj.nc", 617, 936);
    type2->mPointerNum--;
    __right_value0 = (void*)0;
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)1,(_Bool)0,(_Bool)1,(_Bool)0), "25obj.nc", 621, 937);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "25obj.nc", 623, 938, "struct buffer* "), "25obj.nc", 623, 939)), "25obj.nc", 623, 940);
    buffer_append_format(buf,"sizeof(%s)",type_name);
    for(_o2_saved_6=(struct list$1sNode$ph*)come_increment_ref_count(type->mHeapArrayNum, "25obj.nc", 625, 941),it=list$1sNode$ph_begin(_o2_saved_6)    ;!list$1sNode$ph_end(_o2_saved_6);it=list$1sNode$ph_next(_o2_saved_6)){
        Value=node_compile(it,info);
        if(!Value) {
                        __result_obj__0 = (_Bool)0;
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 627, 942);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 627, 943);
            come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 627, 944);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 627, 945);
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 627, 946));
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 627, 947);
            come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_6, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 627, 948);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        cvalue=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "25obj.nc", 630, 949);
        buffer_append_format(buf,"*(%s)",cvalue->c_value);
        come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 635, 950);
    }
    __right_value0 = (void*)0;
    __dec_obj87=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(buffer_to_string(buf), "25obj.nc", 635, 952);
    __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0, (void*)0, "25obj.nc", 635, 951);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj88=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "25obj.nc", 636, 953, "struct sType* "), "25obj.nc", 636, 954),(char*)come_increment_ref_count(xsprintf("long"), "25obj.nc", 636, 955),(_Bool)0,info,(_Bool)0,0), "25obj.nc", 636, 957);
    come_call_finalizer(sType_finalize, __dec_obj88,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 636, 956);
    come_value->type->mUnsigned=(_Bool)1;
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "25obj.nc", 642, 958));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 644, 959);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 644, 960);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 644, 961);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 644, 962);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 644, 963));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 644, 964);
    come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_6, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 644, 965);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sHeapSizeOfNode_finalize(struct sHeapSizeOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sHeapSizeOfNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sHeapSizeOfNode_finalize", 2, 924));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sHeapSizeOfNode_finalize}", 3, 925);
    }
        neo_current_frame = fr.prev;
}

struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj89  ;
    struct sSizeOfNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sSizeOfNode*)come_increment_ref_count(self, "25obj.nc", 652, 966),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 652, 967);
    __right_value0 = (void*)0;
    __dec_obj89=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type), "25obj.nc", 654, 969);
    come_call_finalizer(sType_finalize, __dec_obj89,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 654, 968);
        __result_obj__0 = (struct sSizeOfNode*)come_increment_ref_count(self, "25obj.nc", 657, 970);
    come_call_finalizer(sSizeOfNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 657, 973);
    neo_current_frame = fr.prev;
    come_call_finalizer(sSizeOfNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 657, 974);
    return __result_obj__0;
}

char*  sSizeOfNode_kind(struct sSizeOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sSizeOfNode"))), "25obj.nc", 659, 975);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 659, 976));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "25obj.nc", 659, 977));
    return __result_obj__0;
}

_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfNode_compile"; neo_current_frame = &fr;
    struct sType*  type  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    char*  __dec_obj90  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj91  ;
    _Bool __result_obj__0;
    type=(struct sType* )come_increment_ref_count(self->type, "25obj.nc", 664, 978);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "25obj.nc", 666, 979, "struct CVALUE* "), "25obj.nc", 666, 980)), "25obj.nc", 666, 981);
    __right_value0 = (void*)0;
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,info->generics_type,info), "25obj.nc", 668, 982);
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "25obj.nc", 669, 983);
    __right_value0 = (void*)0;
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)1,(_Bool)0,(_Bool)1,(_Bool)0), "25obj.nc", 671, 984);
    __right_value0 = (void*)0;
    __dec_obj90=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("sizeof(%s)",type_name), "25obj.nc", 673, 986);
    __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0, (void*)0, "25obj.nc", 673, 985);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj91=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "25obj.nc", 674, 987, "struct sType* "), "25obj.nc", 674, 988),(char*)come_increment_ref_count(xsprintf("long"), "25obj.nc", 674, 989),(_Bool)0,info,(_Bool)0,0), "25obj.nc", 674, 991);
    come_call_finalizer(sType_finalize, __dec_obj91,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 674, 990);
    come_value->type->mUnsigned=(_Bool)1;
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "25obj.nc", 680, 992));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 682, 993);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 682, 994);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 682, 995);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 682, 996);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 682, 997));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sSizeOfNode_finalize(struct sSizeOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sSizeOfNode_finalize", 2, 971));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sSizeOfNode_finalize}", 3, 972);
    }
        neo_current_frame = fr.prev;
}

struct sOffsetOf* sOffsetOf_initialize(struct sOffsetOf* self, struct sType*  type  , char*  name  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOffsetOf_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj92  ;
    char*  __dec_obj93  ;
    struct sOffsetOf* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sOffsetOf*)come_increment_ref_count(self, "25obj.nc", 690, 998),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 690, 999);
    __right_value0 = (void*)0;
    __dec_obj92=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type), "25obj.nc", 692, 1001);
    come_call_finalizer(sType_finalize, __dec_obj92,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 692, 1000);
    __right_value0 = (void*)0;
    __dec_obj93=self->name,
    self->name=(char* )come_increment_ref_count((char* )come_memdup(name, "25obj.nc", 693, 1002, "char* "), "25obj.nc", 693, 1004);
    __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0, (void*)0, "25obj.nc", 693, 1003);
        __result_obj__0 = (struct sOffsetOf*)come_increment_ref_count(self, "25obj.nc", 696, 1005);
    come_call_finalizer(sOffsetOf_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 696, 1009);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 696, 1010));
    neo_current_frame = fr.prev;
    come_call_finalizer(sOffsetOf_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 696, 1011);
    return __result_obj__0;
}

char*  sOffsetOf_kind(struct sOffsetOf* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOffsetOf_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sOffsetOf"))), "25obj.nc", 698, 1012);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 698, 1013));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "25obj.nc", 698, 1014));
    return __result_obj__0;
}

_Bool sOffsetOf_compile(struct sOffsetOf* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOffsetOf_compile"; neo_current_frame = &fr;
    struct sType*  type  ;
    char*  name  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    char*  __dec_obj94  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj95  ;
    _Bool __result_obj__0;
    type=(struct sType* )come_increment_ref_count(self->type, "25obj.nc", 703, 1015);
    name=(char* )come_increment_ref_count(self->name, "25obj.nc", 704, 1016);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "25obj.nc", 706, 1017, "struct CVALUE* "), "25obj.nc", 706, 1018)), "25obj.nc", 706, 1019);
    __right_value0 = (void*)0;
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,info->generics_type,info), "25obj.nc", 708, 1020);
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "25obj.nc", 709, 1021);
    __right_value0 = (void*)0;
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0), "25obj.nc", 711, 1022);
    __right_value0 = (void*)0;
    __dec_obj94=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("__builtin_offsetof(%s, %s)",type_name,name), "25obj.nc", 713, 1024);
    __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0, (void*)0, "25obj.nc", 713, 1023);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj95=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "25obj.nc", 714, 1025, "struct sType* "), "25obj.nc", 714, 1026),(char*)come_increment_ref_count(xsprintf("long"), "25obj.nc", 714, 1027),(_Bool)0,info,(_Bool)0,0), "25obj.nc", 714, 1029);
    come_call_finalizer(sType_finalize, __dec_obj95,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 714, 1028);
    come_value->type->mUnsigned=(_Bool)1;
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "25obj.nc", 720, 1030));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 722, 1031);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 722, 1032));
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 722, 1033);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 722, 1034);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 722, 1035);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 722, 1036));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sOffsetOf_finalize(struct sOffsetOf* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOffsetOf_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sOffsetOf_finalize", 2, 1006));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sOffsetOf_finalize}", 3, 1007);
    }
    if(self!=((void*)0)&&self->name!=((void*)0)) {
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0, (void*)0, "sOffsetOf_finalize", 4, 1008));
    }
        neo_current_frame = fr.prev;
}

struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfExpNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj96;
    struct sSizeOfExpNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sSizeOfExpNode*)come_increment_ref_count(self, "25obj.nc", 730, 1037),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 730, 1038);
    __right_value0 = (void*)0;
    __dec_obj96=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp), "25obj.nc", 732, 1040);
    (__dec_obj96 ? __dec_obj96 = come_decrement_ref_count(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 732, 1039) :0);
        __result_obj__0 = (struct sSizeOfExpNode*)come_increment_ref_count(self, "25obj.nc", 734, 1041);
    come_call_finalizer(sSizeOfExpNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 734, 1044);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 734, 1045):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sSizeOfExpNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 734, 1046);
    return __result_obj__0;
        __result_obj__0 = (struct sSizeOfExpNode*)come_increment_ref_count(self, "25obj.nc", 737, 1047);
    come_call_finalizer(sSizeOfExpNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 737, 1048);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 737, 1049):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sSizeOfExpNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 737, 1050);
    return __result_obj__0;
}

char*  sSizeOfExpNode_kind(struct sSizeOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfExpNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sSizeOfExpNode"))), "25obj.nc", 739, 1051);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 739, 1052));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "25obj.nc", 739, 1053));
    return __result_obj__0;
}

_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfExpNode_compile"; neo_current_frame = &fr;
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj97  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj98  ;
    exp=(struct sNode*)come_increment_ref_count(self->exp, "25obj.nc", 744, 1054);
    Value=node_compile(exp,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 747, 1055):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "25obj.nc", 750, 1056);
    __right_value0 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "25obj.nc", 752, 1057, "struct CVALUE* "), "25obj.nc", 752, 1058)), "25obj.nc", 752, 1059);
    __right_value0 = (void*)0;
    __dec_obj97=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(xsprintf("sizeof(%s)",come_value->c_value), "25obj.nc", 754, 1061);
    __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0, (void*)0, "25obj.nc", 754, 1060);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj98=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "25obj.nc", 755, 1062, "struct sType* "), "25obj.nc", 755, 1063),(char*)come_increment_ref_count(xsprintf("long"), "25obj.nc", 755, 1064),(_Bool)0,info,(_Bool)0,0), "25obj.nc", 755, 1066);
    come_call_finalizer(sType_finalize, __dec_obj98,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 755, 1065);
    come_value2->type->mUnsigned=(_Bool)1;
    come_value2->var=((void*)0);
    add_come_last_code(info,"%s",come_value2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "25obj.nc", 761, 1067));
        __result_obj__0 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 763, 1068):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 763, 1069);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 763, 1070);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfExpNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sSizeOfExpNode_finalize", 2, 1042));
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0, "sSizeOfExpNode_finalize", 3, 1043):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sDynamicSizeOfExpNode* sDynamicSizeOfExpNode_initialize(struct sDynamicSizeOfExpNode* self, struct sNode* exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicSizeOfExpNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj99;
    struct sDynamicSizeOfExpNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sDynamicSizeOfExpNode*)come_increment_ref_count(self, "25obj.nc", 771, 1071),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 771, 1072);
    __right_value0 = (void*)0;
    __dec_obj99=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp), "25obj.nc", 773, 1074);
    (__dec_obj99 ? __dec_obj99 = come_decrement_ref_count(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 773, 1073) :0);
        __result_obj__0 = (struct sDynamicSizeOfExpNode*)come_increment_ref_count(self, "25obj.nc", 775, 1075);
    come_call_finalizer(sDynamicSizeOfExpNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 775, 1078);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 775, 1079):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sDynamicSizeOfExpNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 775, 1080);
    return __result_obj__0;
        __result_obj__0 = (struct sDynamicSizeOfExpNode*)come_increment_ref_count(self, "25obj.nc", 778, 1081);
    come_call_finalizer(sDynamicSizeOfExpNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 778, 1082);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 778, 1083):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sDynamicSizeOfExpNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 778, 1084);
    return __result_obj__0;
}

char*  sDynamicSizeOfExpNode_kind(struct sDynamicSizeOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicSizeOfExpNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sSizeOfExpNode"))), "25obj.nc", 780, 1085);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 780, 1086));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "25obj.nc", 780, 1087));
    return __result_obj__0;
}

_Bool sDynamicSizeOfExpNode_compile(struct sDynamicSizeOfExpNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicSizeOfExpNode_compile"; neo_current_frame = &fr;
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj100  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj101  ;
    exp=(struct sNode*)come_increment_ref_count(self->exp, "25obj.nc", 785, 1088);
    Value=node_compile(exp,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 788, 1089):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "25obj.nc", 791, 1090);
    __right_value0 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "25obj.nc", 793, 1091, "struct CVALUE* "), "25obj.nc", 793, 1092)), "25obj.nc", 793, 1093);
    __right_value0 = (void*)0;
    __dec_obj100=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(xsprintf("dynamic_sizeof(%s, \"%s\", %d)",come_value->c_value,info->sname,info->sline), "25obj.nc", 795, 1095);
    __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0, (void*)0, "25obj.nc", 795, 1094);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj101=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "25obj.nc", 796, 1096, "struct sType* "), "25obj.nc", 796, 1097),(char*)come_increment_ref_count(xsprintf("long"), "25obj.nc", 796, 1098),(_Bool)0,info,(_Bool)0,0), "25obj.nc", 796, 1100);
    come_call_finalizer(sType_finalize, __dec_obj101,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 796, 1099);
    come_value2->type->mUnsigned=(_Bool)1;
    come_value2->var=((void*)0);
    add_come_last_code(info,"%s",come_value2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "25obj.nc", 802, 1101));
        __result_obj__0 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 804, 1102):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 804, 1103);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 804, 1104);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sDynamicSizeOfExpNode_finalize(struct sDynamicSizeOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicSizeOfExpNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sDynamicSizeOfExpNode_finalize", 2, 1076));
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0, "sDynamicSizeOfExpNode_finalize", 3, 1077):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeOfNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj102  ;
    struct sTypeOfNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sTypeOfNode*)come_increment_ref_count(self, "25obj.nc", 812, 1105),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 812, 1106);
    __right_value0 = (void*)0;
    __dec_obj102=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type), "25obj.nc", 814, 1108);
    come_call_finalizer(sType_finalize, __dec_obj102,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 814, 1107);
        __result_obj__0 = (struct sTypeOfNode*)come_increment_ref_count(self, "25obj.nc", 817, 1109);
    come_call_finalizer(sTypeOfNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 817, 1112);
    neo_current_frame = fr.prev;
    come_call_finalizer(sTypeOfNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 817, 1113);
    return __result_obj__0;
}

char*  sTypeOfNode_kind(struct sTypeOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeOfNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sTypeOfNode"))), "25obj.nc", 819, 1114);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 819, 1115));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "25obj.nc", 819, 1116));
    return __result_obj__0;
}

_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeOfNode_compile"; neo_current_frame = &fr;
    struct sType*  type  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    char*  __dec_obj103  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj104  ;
    _Bool __result_obj__0;
    type=(struct sType* )come_increment_ref_count(self->type, "25obj.nc", 824, 1117);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "25obj.nc", 826, 1118, "struct CVALUE* "), "25obj.nc", 826, 1119)), "25obj.nc", 826, 1120);
    __right_value0 = (void*)0;
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,info->generics_type,info), "25obj.nc", 828, 1121);
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "25obj.nc", 829, 1122);
    __right_value0 = (void*)0;
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0), "25obj.nc", 831, 1123);
    __right_value0 = (void*)0;
    __dec_obj103=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("\"%s\"",type_name), "25obj.nc", 833, 1125);
    __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0, (void*)0, "25obj.nc", 833, 1124);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj104=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "25obj.nc", 834, 1126, "struct sType* "), "25obj.nc", 834, 1127),(char*)come_increment_ref_count(xsprintf("char*"), "25obj.nc", 834, 1128),(_Bool)0,info,(_Bool)0,0), "25obj.nc", 834, 1130);
    come_call_finalizer(sType_finalize, __dec_obj104,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 834, 1129);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "25obj.nc", 839, 1131));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 841, 1132);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 841, 1133);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 841, 1134);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 841, 1135);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 841, 1136));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sTypeOfNode_finalize(struct sTypeOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeOfNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sTypeOfNode_finalize", 2, 1110));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sTypeOfNode_finalize}", 3, 1111);
    }
        neo_current_frame = fr.prev;
}

struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeOfExpNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj105;
    struct sTypeOfExpNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sTypeOfExpNode*)come_increment_ref_count(self, "25obj.nc", 849, 1137),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 849, 1138);
    __right_value0 = (void*)0;
    __dec_obj105=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp), "25obj.nc", 851, 1140);
    (__dec_obj105 ? __dec_obj105 = come_decrement_ref_count(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 851, 1139) :0);
        __result_obj__0 = (struct sTypeOfExpNode*)come_increment_ref_count(self, "25obj.nc", 854, 1141);
    come_call_finalizer(sTypeOfExpNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 854, 1144);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 854, 1145):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sTypeOfExpNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 854, 1146);
    return __result_obj__0;
}

char*  sTypeOfExpNode_kind(struct sTypeOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeOfExpNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sTypeOfExpNode"))), "25obj.nc", 856, 1147);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 856, 1148));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "25obj.nc", 856, 1149));
    return __result_obj__0;
}

_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeOfExpNode_compile"; neo_current_frame = &fr;
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    char*  __dec_obj106  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj107  ;
    exp=(struct sNode*)come_increment_ref_count(self->exp, "25obj.nc", 861, 1150);
    Value=node_compile(exp,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 864, 1151):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "25obj.nc", 867, 1152);
    __right_value0 = (void*)0;
    type=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "25obj.nc", 869, 1153);
    __right_value0 = (void*)0;
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,info->generics_type,info), "25obj.nc", 871, 1154);
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "25obj.nc", 872, 1155);
    __right_value0 = (void*)0;
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0), "25obj.nc", 874, 1156);
    __right_value0 = (void*)0;
    __dec_obj106=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("\"%s\"",type_name), "25obj.nc", 876, 1158);
    __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0, (void*)0, "25obj.nc", 876, 1157);
    __right_value0 = (void*)0;
    __dec_obj107=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "25obj.nc", 877, 1159, "struct sType* "), "25obj.nc", 877, 1160),(char*)come_increment_ref_count(xsprintf("char*"), "25obj.nc", 877, 1161),(_Bool)0,info,(_Bool)0,0), "25obj.nc", 877, 1163);
    come_call_finalizer(sType_finalize, __dec_obj107,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 877, 1162);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "25obj.nc", 882, 1164));
        __result_obj__0 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 884, 1165):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 884, 1166);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 884, 1167);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 884, 1168);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 884, 1169);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 884, 1170));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeOfExpNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sTypeOfExpNode_finalize", 2, 1142));
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0, "sTypeOfExpNode_finalize", 3, 1143):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sDynamicTypeOf* sDynamicTypeOf_initialize(struct sDynamicTypeOf* self, struct sNode* exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicTypeOf_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj108;
    struct sDynamicTypeOf* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sDynamicTypeOf*)come_increment_ref_count(self, "25obj.nc", 892, 1171),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 892, 1172);
    __right_value0 = (void*)0;
    __dec_obj108=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp), "25obj.nc", 894, 1174);
    (__dec_obj108 ? __dec_obj108 = come_decrement_ref_count(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 894, 1173) :0);
        __result_obj__0 = (struct sDynamicTypeOf*)come_increment_ref_count(self, "25obj.nc", 897, 1175);
    come_call_finalizer(sDynamicTypeOf_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 897, 1178);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 897, 1179):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sDynamicTypeOf_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 897, 1180);
    return __result_obj__0;
}

char*  sDynamicTypeOf_kind(struct sDynamicTypeOf* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicTypeOf_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sDynamicTypeOf"))), "25obj.nc", 899, 1181);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 899, 1182));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "25obj.nc", 899, 1183));
    return __result_obj__0;
}

_Bool sDynamicTypeOf_compile(struct sDynamicTypeOf* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicTypeOf_compile"; neo_current_frame = &fr;
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj109  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj110  ;
    struct CVALUE*  come_value2_49  ;
    char*  __dec_obj111  ;
    struct sType*  __dec_obj112  ;
    exp=(struct sNode*)come_increment_ref_count(self->exp, "25obj.nc", 904, 1184);
    Value=node_compile(exp,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 907, 1185):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "25obj.nc", 910, 1186);
    if(come_value->type->mPointerNum>0&&come_value->type->mHeap) {
        __right_value0 = (void*)0;
        come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "25obj.nc", 913, 1187, "struct CVALUE* "), "25obj.nc", 913, 1188)), "25obj.nc", 913, 1189);
        __right_value0 = (void*)0;
        __dec_obj109=come_value2->c_value,
        come_value2->c_value=(char* )come_increment_ref_count(xsprintf("come_dynamic_typeof(%s, \"%s\", %d)",come_value->c_value,info->sname,info->sline), "25obj.nc", 915, 1191);
        __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0, (void*)0, "25obj.nc", 915, 1190);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj110=come_value2->type,
        come_value2->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "25obj.nc", 916, 1192, "struct sType* "), "25obj.nc", 916, 1193),(char*)come_increment_ref_count(xsprintf("char*"), "25obj.nc", 916, 1194),(_Bool)0,info,(_Bool)0,0), "25obj.nc", 916, 1196);
        come_call_finalizer(sType_finalize, __dec_obj110,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 916, 1195);
        come_value2->var=((void*)0);
        add_come_last_code(info,"%s",come_value2->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "25obj.nc", 921, 1197));
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 937, 1198);
    }
    else {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value2_49=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "25obj.nc", 924, 1199, "struct CVALUE* "), "25obj.nc", 924, 1200)), "25obj.nc", 924, 1201);
        __right_value0 = (void*)0;
        __dec_obj111=come_value2_49->c_value,
        come_value2_49->c_value=(char* )come_increment_ref_count(xsprintf("__builtin_string(\"NOT HEAP OBJECT\")"), "25obj.nc", 926, 1203);
        __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0, (void*)0, "25obj.nc", 926, 1202);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __dec_obj112=come_value2_49->type,
        come_value2_49->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "25obj.nc", 927, 1204, "struct sType* "), "25obj.nc", 927, 1205),(char*)come_increment_ref_count(xsprintf("char*"), "25obj.nc", 927, 1206),(_Bool)0,info,(_Bool)0,0), "25obj.nc", 927, 1208);
        come_call_finalizer(sType_finalize, __dec_obj112,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 927, 1207);
        come_value2_49->var=((void*)0);
        add_come_last_code(info,"%s",come_value2_49->c_value);
        append_object_to_right_values(come_value2_49,come_value2_49->type,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2_49, "25obj.nc", 934, 1209));
        come_call_finalizer(CVALUE_finalize, come_value2_49, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 937, 1210);
    }
        __result_obj__0 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 937, 1211):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 937, 1212);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sDynamicTypeOf_finalize(struct sDynamicTypeOf* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicTypeOf_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sDynamicTypeOf_finalize", 2, 1176));
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0, "sDynamicTypeOf_finalize", 3, 1177):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj113  ;
    struct sAlignOfNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAlignOfNode*)come_increment_ref_count(self, "25obj.nc", 945, 1213),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 945, 1214);
    __right_value0 = (void*)0;
    __dec_obj113=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type), "25obj.nc", 947, 1216);
    come_call_finalizer(sType_finalize, __dec_obj113,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 947, 1215);
        __result_obj__0 = (struct sAlignOfNode*)come_increment_ref_count(self, "25obj.nc", 949, 1217);
    come_call_finalizer(sAlignOfNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 949, 1220);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAlignOfNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 949, 1221);
    return __result_obj__0;
        __result_obj__0 = (struct sAlignOfNode*)come_increment_ref_count(self, "25obj.nc", 952, 1222);
    come_call_finalizer(sAlignOfNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 952, 1223);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAlignOfNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 952, 1224);
    return __result_obj__0;
}

char*  sAlignOfNode_kind(struct sAlignOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sAlignOfNode"))), "25obj.nc", 954, 1225);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 954, 1226));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "25obj.nc", 954, 1227));
    return __result_obj__0;
}

_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode_compile"; neo_current_frame = &fr;
    struct sType*  type  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    char*  __dec_obj114  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj115  ;
    _Bool __result_obj__0;
    type=(struct sType* )come_increment_ref_count(self->type, "25obj.nc", 959, 1228);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "25obj.nc", 961, 1229, "struct CVALUE* "), "25obj.nc", 961, 1230)), "25obj.nc", 961, 1231);
    __right_value0 = (void*)0;
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,info->generics_type,info), "25obj.nc", 963, 1232);
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "25obj.nc", 964, 1233);
    __right_value0 = (void*)0;
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0), "25obj.nc", 966, 1234);
    __right_value0 = (void*)0;
    __dec_obj114=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("_Alignof(%s)",type_name), "25obj.nc", 968, 1236);
    __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0,0, (void*)0, "25obj.nc", 968, 1235);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj115=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "25obj.nc", 969, 1237, "struct sType* "), "25obj.nc", 969, 1238),(char*)come_increment_ref_count(xsprintf("long"), "25obj.nc", 969, 1239),(_Bool)0,info,(_Bool)0,0), "25obj.nc", 969, 1241);
    come_call_finalizer(sType_finalize, __dec_obj115,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 969, 1240);
    come_value->type->mUnsigned=(_Bool)1;
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "25obj.nc", 975, 1242));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 977, 1243);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 977, 1244);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 977, 1245);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 977, 1246);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 977, 1247));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sAlignOfNode_finalize(struct sAlignOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sAlignOfNode_finalize", 2, 1218));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sAlignOfNode_finalize}", 3, 1219);
    }
        neo_current_frame = fr.prev;
}

struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj116;
    struct sAlignOfExpNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAlignOfExpNode*)come_increment_ref_count(self, "25obj.nc", 985, 1248),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 985, 1249);
    __right_value0 = (void*)0;
    __dec_obj116=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp), "25obj.nc", 987, 1251);
    (__dec_obj116 ? __dec_obj116 = come_decrement_ref_count(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 987, 1250) :0);
        __result_obj__0 = (struct sAlignOfExpNode*)come_increment_ref_count(self, "25obj.nc", 990, 1252);
    come_call_finalizer(sAlignOfExpNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 990, 1255);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 990, 1256):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAlignOfExpNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 990, 1257);
    return __result_obj__0;
}

char*  sAlignOfExpNode_kind(struct sAlignOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sAlignOfExpNode"))), "25obj.nc", 992, 1258);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 992, 1259));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "25obj.nc", 992, 1260));
    return __result_obj__0;
}

_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode_compile"; neo_current_frame = &fr;
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj117  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj118  ;
    exp=(struct sNode*)come_increment_ref_count(self->exp, "25obj.nc", 997, 1261);
    Value=node_compile(exp,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1000, 1262):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "25obj.nc", 1003, 1263);
    __right_value0 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "25obj.nc", 1005, 1264, "struct CVALUE* "), "25obj.nc", 1005, 1265)), "25obj.nc", 1005, 1266);
    __right_value0 = (void*)0;
    __dec_obj117=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(xsprintf("_AlignOf(%s)",come_value->c_value), "25obj.nc", 1007, 1268);
    __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0, (void*)0, "25obj.nc", 1007, 1267);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj118=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "25obj.nc", 1008, 1269, "struct sType* "), "25obj.nc", 1008, 1270),(char*)come_increment_ref_count(xsprintf("long"), "25obj.nc", 1008, 1271),(_Bool)0,info,(_Bool)0,0), "25obj.nc", 1008, 1273);
    come_call_finalizer(sType_finalize, __dec_obj118,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 1008, 1272);
    come_value2->type->mUnsigned=(_Bool)1;
    come_value2->var=((void*)0);
    add_come_last_code(info,"%s",come_value2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "25obj.nc", 1014, 1274));
        __result_obj__0 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1016, 1275):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1016, 1276);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1016, 1277);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sAlignOfExpNode_finalize", 2, 1253));
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0, "sAlignOfExpNode_finalize", 3, 1254):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode2_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj119  ;
    struct sAlignOfNode2* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAlignOfNode2*)come_increment_ref_count(self, "25obj.nc", 1024, 1278),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 1024, 1279);
    __right_value0 = (void*)0;
    __dec_obj119=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type), "25obj.nc", 1026, 1281);
    come_call_finalizer(sType_finalize, __dec_obj119,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 1026, 1280);
        __result_obj__0 = (struct sAlignOfNode2*)come_increment_ref_count(self, "25obj.nc", 1029, 1282);
    come_call_finalizer(sAlignOfNode2_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 1029, 1285);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAlignOfNode2_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 1029, 1286);
    return __result_obj__0;
}

char*  sAlignOfNode2_kind(struct sAlignOfNode2* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode2_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sAlignOfNode2"))), "25obj.nc", 1031, 1287);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 1031, 1288));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "25obj.nc", 1031, 1289));
    return __result_obj__0;
}

_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode2_compile"; neo_current_frame = &fr;
    struct sType*  type  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    char*  __dec_obj120  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj121  ;
    _Bool __result_obj__0;
    type=(struct sType* )come_increment_ref_count(self->type, "25obj.nc", 1036, 1290);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "25obj.nc", 1038, 1291, "struct CVALUE* "), "25obj.nc", 1038, 1292)), "25obj.nc", 1038, 1293);
    __right_value0 = (void*)0;
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,info->generics_type,info), "25obj.nc", 1040, 1294);
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "25obj.nc", 1041, 1295);
    __right_value0 = (void*)0;
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0), "25obj.nc", 1043, 1296);
    __right_value0 = (void*)0;
    __dec_obj120=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("__alignof__(%s)",type_name), "25obj.nc", 1045, 1298);
    __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0,0, (void*)0, "25obj.nc", 1045, 1297);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj121=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "25obj.nc", 1046, 1299, "struct sType* "), "25obj.nc", 1046, 1300),(char*)come_increment_ref_count(xsprintf("long"), "25obj.nc", 1046, 1301),(_Bool)0,info,(_Bool)0,0), "25obj.nc", 1046, 1303);
    come_call_finalizer(sType_finalize, __dec_obj121,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 1046, 1302);
    come_value->type->mUnsigned=(_Bool)1;
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "25obj.nc", 1052, 1304));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1054, 1305);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1054, 1306);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1054, 1307);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1054, 1308);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 1054, 1309));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sAlignOfNode2_finalize(struct sAlignOfNode2* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode2_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sAlignOfNode2_finalize", 2, 1283));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sAlignOfNode2_finalize}", 3, 1284);
    }
        neo_current_frame = fr.prev;
}

struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode2_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj122;
    struct sAlignOfExpNode2* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAlignOfExpNode2*)come_increment_ref_count(self, "25obj.nc", 1062, 1310),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 1062, 1311);
    __right_value0 = (void*)0;
    __dec_obj122=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp), "25obj.nc", 1064, 1313);
    (__dec_obj122 ? __dec_obj122 = come_decrement_ref_count(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 1064, 1312) :0);
        __result_obj__0 = (struct sAlignOfExpNode2*)come_increment_ref_count(self, "25obj.nc", 1067, 1314);
    come_call_finalizer(sAlignOfExpNode2_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 1067, 1317);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1067, 1318):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAlignOfExpNode2_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 1067, 1319);
    return __result_obj__0;
}

char*  sAlignOfExpNode2_kind(struct sAlignOfExpNode2* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode2_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sAlignOfExpNode2"))), "25obj.nc", 1069, 1320);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 1069, 1321));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "25obj.nc", 1069, 1322));
    return __result_obj__0;
}

_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode2_compile"; neo_current_frame = &fr;
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj123  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj124  ;
    exp=(struct sNode*)come_increment_ref_count(self->exp, "25obj.nc", 1074, 1323);
    Value=node_compile(exp,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1077, 1324):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "25obj.nc", 1080, 1325);
    __right_value0 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "25obj.nc", 1082, 1326, "struct CVALUE* "), "25obj.nc", 1082, 1327)), "25obj.nc", 1082, 1328);
    __right_value0 = (void*)0;
    __dec_obj123=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(xsprintf("__alignof__(%s)",come_value->c_value), "25obj.nc", 1084, 1330);
    __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0, (void*)0, "25obj.nc", 1084, 1329);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj124=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "25obj.nc", 1085, 1331, "struct sType* "), "25obj.nc", 1085, 1332),(char*)come_increment_ref_count(xsprintf("long"), "25obj.nc", 1085, 1333),(_Bool)0,info,(_Bool)0,0), "25obj.nc", 1085, 1335);
    come_call_finalizer(sType_finalize, __dec_obj124,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 1085, 1334);
    come_value2->type->mUnsigned=(_Bool)1;
    come_value2->var=((void*)0);
    add_come_last_code(info,"%s",come_value2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "25obj.nc", 1091, 1336));
        __result_obj__0 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1093, 1337):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1093, 1338);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1093, 1339);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode2_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sAlignOfExpNode2_finalize", 2, 1315));
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0, "sAlignOfExpNode2_finalize", 3, 1316):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignAsNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj125  ;
    struct sAlignAsNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAlignAsNode*)come_increment_ref_count(self, "25obj.nc", 1101, 1340),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 1101, 1341);
    __right_value0 = (void*)0;
    __dec_obj125=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type), "25obj.nc", 1103, 1343);
    come_call_finalizer(sType_finalize, __dec_obj125,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 1103, 1342);
        __result_obj__0 = (struct sAlignAsNode*)come_increment_ref_count(self, "25obj.nc", 1106, 1344);
    come_call_finalizer(sAlignAsNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 1106, 1347);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAlignAsNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 1106, 1348);
    return __result_obj__0;
}

char*  sAlignAsNode_kind(struct sAlignAsNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignAsNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sAlignAsNode"))), "25obj.nc", 1108, 1349);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 1108, 1350));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "25obj.nc", 1108, 1351));
    return __result_obj__0;
}

_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignAsNode_compile"; neo_current_frame = &fr;
    struct sType*  type  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    char*  __dec_obj126  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj127  ;
    _Bool __result_obj__0;
    type=(struct sType* )come_increment_ref_count(self->type, "25obj.nc", 1113, 1352);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "25obj.nc", 1115, 1353, "struct CVALUE* "), "25obj.nc", 1115, 1354)), "25obj.nc", 1115, 1355);
    __right_value0 = (void*)0;
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,info->generics_type,info), "25obj.nc", 1117, 1356);
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "25obj.nc", 1118, 1357);
    __right_value0 = (void*)0;
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0), "25obj.nc", 1120, 1358);
    __right_value0 = (void*)0;
    __dec_obj126=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("_Alignas(%s)",type_name), "25obj.nc", 1122, 1360);
    __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0, (void*)0, "25obj.nc", 1122, 1359);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj127=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "25obj.nc", 1123, 1361, "struct sType* "), "25obj.nc", 1123, 1362),(char*)come_increment_ref_count(xsprintf("long"), "25obj.nc", 1123, 1363),(_Bool)0,info,(_Bool)0,0), "25obj.nc", 1123, 1365);
    come_call_finalizer(sType_finalize, __dec_obj127,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 1123, 1364);
    come_value->type->mUnsigned=(_Bool)1;
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "25obj.nc", 1129, 1366));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1131, 1367);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1131, 1368);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1131, 1369);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1131, 1370);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 1131, 1371));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sAlignAsNode_finalize(struct sAlignAsNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignAsNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sAlignAsNode_finalize", 2, 1345));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sAlignAsNode_finalize}", 3, 1346);
    }
        neo_current_frame = fr.prev;
}

struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignAsExpNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj128;
    struct sAlignAsExpNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAlignAsExpNode*)come_increment_ref_count(self, "25obj.nc", 1139, 1372),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 1139, 1373);
    __right_value0 = (void*)0;
    __dec_obj128=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp), "25obj.nc", 1141, 1375);
    (__dec_obj128 ? __dec_obj128 = come_decrement_ref_count(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 1141, 1374) :0);
        __result_obj__0 = (struct sAlignAsExpNode*)come_increment_ref_count(self, "25obj.nc", 1144, 1376);
    come_call_finalizer(sAlignAsExpNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 1144, 1379);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1144, 1380):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAlignAsExpNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 1144, 1381);
    return __result_obj__0;
}

char*  sAlignAsExpNode_kind(struct sAlignAsExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignAsExpNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sAlignAsExpNode"))), "25obj.nc", 1146, 1382);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 1146, 1383));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "25obj.nc", 1146, 1384));
    return __result_obj__0;
}

_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignAsExpNode_compile"; neo_current_frame = &fr;
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj129  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj130  ;
    exp=(struct sNode*)come_increment_ref_count(self->exp, "25obj.nc", 1151, 1385);
    Value=node_compile(exp,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1154, 1386):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "25obj.nc", 1157, 1387);
    __right_value0 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "25obj.nc", 1159, 1388, "struct CVALUE* "), "25obj.nc", 1159, 1389)), "25obj.nc", 1159, 1390);
    __right_value0 = (void*)0;
    __dec_obj129=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(xsprintf("_Alignas(%s)",come_value->c_value), "25obj.nc", 1161, 1392);
    __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0, (void*)0, "25obj.nc", 1161, 1391);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj130=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "25obj.nc", 1162, 1393, "struct sType* "), "25obj.nc", 1162, 1394),(char*)come_increment_ref_count(xsprintf("long"), "25obj.nc", 1162, 1395),(_Bool)0,info,(_Bool)0,0), "25obj.nc", 1162, 1397);
    come_call_finalizer(sType_finalize, __dec_obj130,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 1162, 1396);
    come_value2->type->mUnsigned=(_Bool)1;
    come_value2->var=((void*)0);
    add_come_last_code(info,"%s",come_value2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "25obj.nc", 1168, 1398));
        __result_obj__0 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1170, 1399):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1170, 1400);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1170, 1401);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignAsExpNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sAlignAsExpNode_finalize", 2, 1377));
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0, "sAlignAsExpNode_finalize", 3, 1378):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDeleteNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj131;
    struct sDeleteNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sDeleteNode*)come_increment_ref_count(self, "25obj.nc", 1178, 1402),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 1178, 1403);
    __right_value0 = (void*)0;
    __dec_obj131=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node), "25obj.nc", 1180, 1405);
    (__dec_obj131 ? __dec_obj131 = come_decrement_ref_count(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 1180, 1404) :0);
        __result_obj__0 = (struct sDeleteNode*)come_increment_ref_count(self, "25obj.nc", 1183, 1406);
    come_call_finalizer(sDeleteNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 1183, 1409);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1183, 1410):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sDeleteNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 1183, 1411);
    return __result_obj__0;
}

char*  sDeleteNode_kind(struct sDeleteNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDeleteNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sDeleteNode"))), "25obj.nc", 1185, 1412);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 1185, 1413));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "25obj.nc", 1185, 1414));
    return __result_obj__0;
}

_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDeleteNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    node=(struct sNode*)come_increment_ref_count(self->node, "25obj.nc", 1190, 1415);
    Value=node_compile(node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1193, 1416):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "25obj.nc", 1196, 1417);
    if(come_value->type->mPointerNum>0) {
        __right_value0 = (void*)0;
        free_object(((struct sType* )(__right_value0=sType_clone(come_value->type))),come_value->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 1199, 1418);
    }
        __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1202, 1419):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1202, 1420);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sDeleteNode_finalize(struct sDeleteNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDeleteNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sDeleteNode_finalize", 2, 1407));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0, "sDeleteNode_finalize", 3, 1408):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBorrowNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj132;
    struct sBorrowNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sBorrowNode*)come_increment_ref_count(self, "25obj.nc", 1210, 1421),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 1210, 1422);
    __right_value0 = (void*)0;
    __dec_obj132=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node), "25obj.nc", 1212, 1424);
    (__dec_obj132 ? __dec_obj132 = come_decrement_ref_count(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 1212, 1423) :0);
        __result_obj__0 = (struct sBorrowNode*)come_increment_ref_count(self, "25obj.nc", 1214, 1425);
    come_call_finalizer(sBorrowNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 1214, 1428);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1214, 1429):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sBorrowNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 1214, 1430);
    return __result_obj__0;
        __result_obj__0 = (struct sBorrowNode*)come_increment_ref_count(self, "25obj.nc", 1217, 1431);
    come_call_finalizer(sBorrowNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 1217, 1432);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1217, 1433):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sBorrowNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 1217, 1434);
    return __result_obj__0;
}

char*  sBorrowNode_kind(struct sBorrowNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBorrowNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sBorrowNode"))), "25obj.nc", 1219, 1435);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 1219, 1436));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "25obj.nc", 1219, 1437));
    return __result_obj__0;
}

_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBorrowNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type  ;
    struct sType*  __dec_obj133  ;
    node=(struct sNode*)come_increment_ref_count(self->node, "25obj.nc", 1224, 1438);
    Value=node_compile(node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1227, 1439):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "25obj.nc", 1230, 1440);
    remove_value_from_right_value_objects(come_value,info);
    __right_value0 = (void*)0;
    type=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "25obj.nc", 1234, 1441);
    type->mHeap=(_Bool)0;
    __dec_obj133=come_value->type,
    come_value->type=(struct sType* )come_increment_ref_count(type, "25obj.nc", 1236, 1443);
    come_call_finalizer(sType_finalize, __dec_obj133,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 1236, 1442);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "25obj.nc", 1238, 1444));
        __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1240, 1445):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1240, 1446);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1240, 1447);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sBorrowNode_finalize(struct sBorrowNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBorrowNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sBorrowNode_finalize", 2, 1426));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0, "sBorrowNode_finalize", 3, 1427):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCloneNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj134;
    struct sCloneNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sCloneNode*)come_increment_ref_count(self, "25obj.nc", 1248, 1448),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 1248, 1449);
    __right_value0 = (void*)0;
    __dec_obj134=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node), "25obj.nc", 1250, 1451);
    (__dec_obj134 ? __dec_obj134 = come_decrement_ref_count(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 1250, 1450) :0);
        __result_obj__0 = (struct sCloneNode*)come_increment_ref_count(self, "25obj.nc", 1253, 1452);
    come_call_finalizer(sCloneNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 1253, 1455);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1253, 1456):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sCloneNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 1253, 1457);
    return __result_obj__0;
}

char*  sCloneNode_kind(struct sCloneNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCloneNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sCloneNode"))), "25obj.nc", 1255, 1458);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 1255, 1459));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "25obj.nc", 1255, 1460));
    return __result_obj__0;
}

_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCloneNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sType*  left_type  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct tuple2$2sType$phchar$ph* multiple_assign_var6
;    struct sType*  result_type  =0;
    char*  c_value  =0;
    char*  __dec_obj135  ;
    struct sType*  __dec_obj136  ;
    node=(struct sNode*)come_increment_ref_count(self->node, "25obj.nc", 1260, 1461);
    Value=node_compile(node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1263, 1462):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "25obj.nc", 1266, 1463);
    __right_value0 = (void*)0;
    left_type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "25obj.nc", 1268, 1464);
    if(left_type->mPointerNum==1&&string_operator_equals(left_type->mClass->mName,"void")&&left_type->mHeap==(_Bool)0) {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(left_value, "25obj.nc", 1271, 1465));
    }
    else if(left_type->mPointerNum==0) {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(left_value, "25obj.nc", 1274, 1466));
    }
    else if(left_type->mPointerNum>0) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "25obj.nc", 1277, 1467, "struct CVALUE* "), "25obj.nc", 1277, 1468)), "25obj.nc", 1277, 1469);
        __right_value0 = (void*)0;
        multiple_assign_var6=((struct tuple2$2sType$phchar$ph*)(__right_value0=(clone_object)(left_type,left_value->c_value,info)));
        result_type=(struct sType* )come_increment_ref_count(multiple_assign_var6->v1, "25obj.nc", 1279, 1470);
        c_value=(char* )come_increment_ref_count(multiple_assign_var6->v2, "25obj.nc", 1279, 1471);
        come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 1279, 1474);
        __dec_obj135=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(c_value, "25obj.nc", 1280, 1476);
        __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0, (void*)0, "25obj.nc", 1280, 1475);
        __right_value0 = (void*)0;
        __dec_obj136=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_type), "25obj.nc", 1281, 1478);
        come_call_finalizer(sType_finalize, __dec_obj136,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 1281, 1477);
        come_value->type->mHeap=(_Bool)1;
        come_value->var=((void*)0);
        append_object_to_right_values(come_value,left_type,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "25obj.nc", 1287, 1479));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1290, 1480);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1290, 1481);
        (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 1290, 1482));
    }
        __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1290, 1483):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1290, 1484);
    come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1290, 1485);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sCloneNode_finalize(struct sCloneNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCloneNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sCloneNode_finalize", 2, 1453));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0, "sCloneNode_finalize", 3, 1454):(void*)0);
    }
        neo_current_frame = fr.prev;
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2sType$phchar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple2$2sType$phchar$ph$p_finalize}", 2, 1472);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2sType$phchar$ph$p_finalize", 3, 1473));
    }
            neo_current_frame = fr.prev;
}

struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDupeNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj137;
    struct sDupeNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sDupeNode*)come_increment_ref_count(self, "25obj.nc", 1298, 1486),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 1298, 1487);
    __right_value0 = (void*)0;
    __dec_obj137=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node), "25obj.nc", 1300, 1489);
    (__dec_obj137 ? __dec_obj137 = come_decrement_ref_count(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 1300, 1488) :0);
        __result_obj__0 = (struct sDupeNode*)come_increment_ref_count(self, "25obj.nc", 1303, 1490);
    come_call_finalizer(sDupeNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 1303, 1493);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1303, 1494):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sDupeNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 1303, 1495);
    return __result_obj__0;
}

char*  sDupeNode_kind(struct sDupeNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDupeNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sDupeNode"))), "25obj.nc", 1305, 1496);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 1305, 1497));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "25obj.nc", 1305, 1498));
    return __result_obj__0;
}

_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDupeNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sType*  left_type  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct tuple2$2sType$phchar$ph* multiple_assign_var7
;    struct sType*  result_type  =0;
    char*  c_value  =0;
    char*  __dec_obj138  ;
    struct sType*  __dec_obj139  ;
    node=(struct sNode*)come_increment_ref_count(self->node, "25obj.nc", 1310, 1499);
    Value=node_compile(node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1313, 1500):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "25obj.nc", 1316, 1501);
    __right_value0 = (void*)0;
    left_type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "25obj.nc", 1318, 1502);
    if(left_type->mPointerNum==0) {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(left_value, "25obj.nc", 1321, 1503));
    }
    else if(left_type->mPointerNum>0&&left_type->mHeap==(_Bool)0) {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(left_value, "25obj.nc", 1324, 1504));
    }
    else if(left_type->mPointerNum>0) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "25obj.nc", 1327, 1505, "struct CVALUE* "), "25obj.nc", 1327, 1506)), "25obj.nc", 1327, 1507);
        __right_value0 = (void*)0;
        multiple_assign_var7=((struct tuple2$2sType$phchar$ph*)(__right_value0=(clone_object)(left_type,left_value->c_value,info)));
        result_type=(struct sType* )come_increment_ref_count(multiple_assign_var7->v1, "25obj.nc", 1329, 1508);
        c_value=(char* )come_increment_ref_count(multiple_assign_var7->v2, "25obj.nc", 1329, 1509);
        come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 1329, 1510);
        __dec_obj138=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(c_value, "25obj.nc", 1330, 1512);
        __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0, (void*)0, "25obj.nc", 1330, 1511);
        __right_value0 = (void*)0;
        __dec_obj139=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_type), "25obj.nc", 1331, 1514);
        come_call_finalizer(sType_finalize, __dec_obj139,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 1331, 1513);
        come_value->type->mHeap=(_Bool)1;
        come_value->var=((void*)0);
        append_object_to_right_values(come_value,left_type,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "25obj.nc", 1337, 1515));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1340, 1516);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1340, 1517);
        (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 1340, 1518));
    }
        __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1340, 1519):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1340, 1520);
    come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1340, 1521);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sDupeNode_finalize(struct sDupeNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDupeNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sDupeNode_finalize", 2, 1491));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0, "sDupeNode_finalize", 3, 1492):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDummyHeapNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj140;
    struct sDummyHeapNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sDummyHeapNode*)come_increment_ref_count(self, "25obj.nc", 1348, 1522),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 1348, 1523);
    __right_value0 = (void*)0;
    __dec_obj140=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node), "25obj.nc", 1350, 1525);
    (__dec_obj140 ? __dec_obj140 = come_decrement_ref_count(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 1350, 1524) :0);
        __result_obj__0 = (struct sDummyHeapNode*)come_increment_ref_count(self, "25obj.nc", 1353, 1526);
    come_call_finalizer(sDummyHeapNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 1353, 1529);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1353, 1530):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sDummyHeapNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 1353, 1531);
    return __result_obj__0;
}

char*  sDummyHeapNode_kind(struct sDummyHeapNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDummyHeapNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sDummyHeapNode"))), "25obj.nc", 1355, 1532);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 1355, 1533));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "25obj.nc", 1355, 1534));
    return __result_obj__0;
}

_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDummyHeapNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    node=(struct sNode*)come_increment_ref_count(self->node, "25obj.nc", 1360, 1535);
    Value=node_compile(node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1363, 1536):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "25obj.nc", 1366, 1537);
    if(come_value->type->mPointerNum>0) {
        come_value->type->mHeap=(_Bool)1;
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "25obj.nc", 1372, 1538));
        __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1374, 1539):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1374, 1540);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sDummyHeapNode_finalize(struct sDummyHeapNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDummyHeapNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sDummyHeapNode_finalize", 2, 1527));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0, "sDummyHeapNode_finalize", 3, 1528):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCIncNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj141;
    struct sGCIncNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sGCIncNode*)come_increment_ref_count(self, "25obj.nc", 1382, 1541),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 1382, 1542);
    __right_value0 = (void*)0;
    __dec_obj141=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node), "25obj.nc", 1384, 1544);
    (__dec_obj141 ? __dec_obj141 = come_decrement_ref_count(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 1384, 1543) :0);
        __result_obj__0 = (struct sGCIncNode*)come_increment_ref_count(self, "25obj.nc", 1387, 1545);
    come_call_finalizer(sGCIncNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 1387, 1548);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1387, 1549):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGCIncNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 1387, 1550);
    return __result_obj__0;
}

char*  sGCIncNode_kind(struct sGCIncNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCIncNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sGCIncNode"))), "25obj.nc", 1389, 1551);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 1389, 1552));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "25obj.nc", 1389, 1553));
    return __result_obj__0;
}

_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCIncNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type  ;
    char*  type_name  ;
    char*  __dec_obj142  ;
    node=(struct sNode*)come_increment_ref_count(self->node, "25obj.nc", 1394, 1554);
    Value=node_compile(node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1397, 1555):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "25obj.nc", 1400, 1556);
    type=come_value->type;
    if(come_value->type->mHeap&&come_value->type->mPointerNum>0) {
        __right_value0 = (void*)0;
        type_name=(char* )come_increment_ref_count(make_type_name_string(type,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0), "25obj.nc", 1405, 1557);
        __right_value0 = (void*)0;
        __dec_obj142=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(increment_ref_count_object(come_value->type,come_value->c_value,info), "25obj.nc", 1406, 1559);
        __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0, (void*)0, "25obj.nc", 1406, 1558);
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 1409, 1560));
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "25obj.nc", 1409, 1561));
        __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1411, 1562):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1411, 1563);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sGCIncNode_finalize(struct sGCIncNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCIncNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sGCIncNode_finalize", 2, 1546));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0, "sGCIncNode_finalize", 3, 1547):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj143;
    struct sGCDecNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sGCDecNode*)come_increment_ref_count(self, "25obj.nc", 1419, 1564),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 1419, 1565);
    __right_value0 = (void*)0;
    __dec_obj143=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node), "25obj.nc", 1421, 1567);
    (__dec_obj143 ? __dec_obj143 = come_decrement_ref_count(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 1421, 1566) :0);
        __result_obj__0 = (struct sGCDecNode*)come_increment_ref_count(self, "25obj.nc", 1424, 1568);
    come_call_finalizer(sGCDecNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 1424, 1571);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1424, 1572):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGCDecNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 1424, 1573);
    return __result_obj__0;
}

char*  sGCDecNode_kind(struct sGCDecNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sGCDecNode"))), "25obj.nc", 1426, 1574);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 1426, 1575));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "25obj.nc", 1426, 1576));
    return __result_obj__0;
}

_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type  ;
    node=(struct sNode*)come_increment_ref_count(self->node, "25obj.nc", 1431, 1577);
    Value=node_compile(node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1434, 1578):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "25obj.nc", 1437, 1579);
    type=(struct sType* )come_increment_ref_count(come_value->type, "25obj.nc", 1439, 1580);
    if(come_value->type->mHeap&&come_value->type->mPointerNum>0) {
        decrement_ref_count_object(type,come_value->c_value,info,(_Bool)0);
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "25obj.nc", 1445, 1581));
        __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1447, 1582):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1447, 1583);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1447, 1584);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sGCDecNode_finalize(struct sGCDecNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sGCDecNode_finalize", 2, 1569));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0, "sGCDecNode_finalize", 3, 1570):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIsHeap_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj144  ;
    struct sIsHeap* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sIsHeap*)come_increment_ref_count(self, "25obj.nc", 1455, 1585),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 1455, 1586);
    __right_value0 = (void*)0;
    __dec_obj144=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type), "25obj.nc", 1457, 1588);
    come_call_finalizer(sType_finalize, __dec_obj144,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 1457, 1587);
        __result_obj__0 = (struct sIsHeap*)come_increment_ref_count(self, "25obj.nc", 1460, 1589);
    come_call_finalizer(sIsHeap_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 1460, 1592);
    neo_current_frame = fr.prev;
    come_call_finalizer(sIsHeap_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 1460, 1593);
    return __result_obj__0;
}

char*  sIsHeap_kind(struct sIsHeap* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIsHeap_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sIsHeap"))), "25obj.nc", 1462, 1594);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 1462, 1595));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "25obj.nc", 1462, 1596));
    return __result_obj__0;
}

_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIsHeap_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj145  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj146  ;
    struct CVALUE*  come_value_50  ;
    char*  __dec_obj147  ;
    struct sType*  __dec_obj148  ;
    if(self->type->mHeap) {
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "25obj.nc", 1468, 1597, "struct CVALUE* "), "25obj.nc", 1468, 1598)), "25obj.nc", 1468, 1599);
        __right_value0 = (void*)0;
        __dec_obj145=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("1"), "25obj.nc", 1470, 1601);
        __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0,0, (void*)0, "25obj.nc", 1470, 1600);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj146=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "25obj.nc", 1471, 1602, "struct sType* "), "25obj.nc", 1471, 1603),(char*)come_increment_ref_count(xsprintf("int"), "25obj.nc", 1471, 1604),(_Bool)0,info,(_Bool)0,0), "25obj.nc", 1471, 1606);
        come_call_finalizer(sType_finalize, __dec_obj146,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 1471, 1605);
        come_value->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "25obj.nc", 1474, 1607));
        add_come_last_code(info,"%s",come_value->c_value);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1490, 1608);
    }
    else {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_50=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "25obj.nc", 1479, 1609, "struct CVALUE* "), "25obj.nc", 1479, 1610)), "25obj.nc", 1479, 1611);
        __right_value0 = (void*)0;
        __dec_obj147=come_value_50->c_value,
        come_value_50->c_value=(char* )come_increment_ref_count(xsprintf("0"), "25obj.nc", 1481, 1613);
        __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0,0, (void*)0, "25obj.nc", 1481, 1612);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __dec_obj148=come_value_50->type,
        come_value_50->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "25obj.nc", 1482, 1614, "struct sType* "), "25obj.nc", 1482, 1615),(char*)come_increment_ref_count(xsprintf("int"), "25obj.nc", 1482, 1616),(_Bool)0,info,(_Bool)0,0), "25obj.nc", 1482, 1618);
        come_call_finalizer(sType_finalize, __dec_obj148,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 1482, 1617);
        come_value_50->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_50, "25obj.nc", 1485, 1619));
        add_come_last_code(info,"%s",come_value_50->c_value);
        come_call_finalizer(CVALUE_finalize, come_value_50, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1490, 1620);
    }
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static void sIsHeap_finalize(struct sIsHeap* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIsHeap_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sIsHeap_finalize", 2, 1590));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sIsHeap_finalize}", 3, 1591);
    }
        neo_current_frame = fr.prev;
}

struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIsPointer_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj149  ;
    struct sIsPointer* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sIsPointer*)come_increment_ref_count(self, "25obj.nc", 1498, 1621),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 1498, 1622);
    __right_value0 = (void*)0;
    __dec_obj149=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type), "25obj.nc", 1500, 1624);
    come_call_finalizer(sType_finalize, __dec_obj149,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 1500, 1623);
        __result_obj__0 = (struct sIsPointer*)come_increment_ref_count(self, "25obj.nc", 1503, 1625);
    come_call_finalizer(sIsPointer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 1503, 1628);
    neo_current_frame = fr.prev;
    come_call_finalizer(sIsPointer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 1503, 1629);
    return __result_obj__0;
}

char*  sIsPointer_kind(struct sIsPointer* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIsPointer_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sIsPointer"))), "25obj.nc", 1505, 1630);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 1505, 1631));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "25obj.nc", 1505, 1632));
    return __result_obj__0;
}

_Bool sIsPointer_compile(struct sIsPointer* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIsPointer_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj150  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj151  ;
    struct CVALUE*  come_value_51  ;
    char*  __dec_obj152  ;
    struct sType*  __dec_obj153  ;
    if(self->type->mPointerNum==0&&self->type->mArrayPointerNum==0) {
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "25obj.nc", 1511, 1633, "struct CVALUE* "), "25obj.nc", 1511, 1634)), "25obj.nc", 1511, 1635);
        __right_value0 = (void*)0;
        __dec_obj150=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("0"), "25obj.nc", 1513, 1637);
        __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0,0, (void*)0, "25obj.nc", 1513, 1636);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj151=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "25obj.nc", 1514, 1638, "struct sType* "), "25obj.nc", 1514, 1639),(char*)come_increment_ref_count(xsprintf("int"), "25obj.nc", 1514, 1640),(_Bool)0,info,(_Bool)0,0), "25obj.nc", 1514, 1642);
        come_call_finalizer(sType_finalize, __dec_obj151,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 1514, 1641);
        come_value->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "25obj.nc", 1517, 1643));
        add_come_last_code(info,"%s",come_value->c_value);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1533, 1644);
    }
    else {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_51=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "25obj.nc", 1522, 1645, "struct CVALUE* "), "25obj.nc", 1522, 1646)), "25obj.nc", 1522, 1647);
        __right_value0 = (void*)0;
        __dec_obj152=come_value_51->c_value,
        come_value_51->c_value=(char* )come_increment_ref_count(xsprintf("1"), "25obj.nc", 1524, 1649);
        __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0,0, (void*)0, "25obj.nc", 1524, 1648);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __dec_obj153=come_value_51->type,
        come_value_51->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "25obj.nc", 1525, 1650, "struct sType* "), "25obj.nc", 1525, 1651),(char*)come_increment_ref_count(xsprintf("int"), "25obj.nc", 1525, 1652),(_Bool)0,info,(_Bool)0,0), "25obj.nc", 1525, 1654);
        come_call_finalizer(sType_finalize, __dec_obj153,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 1525, 1653);
        come_value_51->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_51, "25obj.nc", 1528, 1655));
        add_come_last_code(info,"%s",come_value_51->c_value);
        come_call_finalizer(CVALUE_finalize, come_value_51, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1533, 1656);
    }
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static void sIsPointer_finalize(struct sIsPointer* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIsPointer_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sIsPointer_finalize", 2, 1626));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sIsPointer_finalize}", 3, 1627);
    }
        neo_current_frame = fr.prev;
}

struct sGCDecNoFreeNode* sGCDecNoFreeNode_initialize(struct sGCDecNoFreeNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNoFreeNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj154;
    struct sGCDecNoFreeNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sGCDecNoFreeNode*)come_increment_ref_count(self, "25obj.nc", 1541, 1657),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 1541, 1658);
    __right_value0 = (void*)0;
    __dec_obj154=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node), "25obj.nc", 1543, 1660);
    (__dec_obj154 ? __dec_obj154 = come_decrement_ref_count(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 1543, 1659) :0);
        __result_obj__0 = (struct sGCDecNoFreeNode*)come_increment_ref_count(self, "25obj.nc", 1546, 1661);
    come_call_finalizer(sGCDecNoFreeNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 1546, 1664);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1546, 1665):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGCDecNoFreeNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 1546, 1666);
    return __result_obj__0;
}

char*  sGCDecNoFreeNode_kind(struct sGCDecNoFreeNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNoFreeNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sGCDecNoFreeNode"))), "25obj.nc", 1548, 1667);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 1548, 1668));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "25obj.nc", 1548, 1669));
    return __result_obj__0;
}

_Bool sGCDecNoFreeNode_compile(struct sGCDecNoFreeNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNoFreeNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type  ;
    node=(struct sNode*)come_increment_ref_count(self->node, "25obj.nc", 1553, 1670);
    Value=node_compile(node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1556, 1671):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "25obj.nc", 1559, 1672);
    type=(struct sType* )come_increment_ref_count(come_value->type, "25obj.nc", 1561, 1673);
    if(type->mHeap&&type->mPointerNum>0) {
        decrement_ref_count_object(type,come_value->c_value,info,(_Bool)1);
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "25obj.nc", 1567, 1674));
        __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1569, 1675):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1569, 1676);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1569, 1677);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sGCDecNoFreeNode_finalize(struct sGCDecNoFreeNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNoFreeNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sGCDecNoFreeNode_finalize", 2, 1662));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0, "sGCDecNoFreeNode_finalize", 3, 1663):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sRefNode* sRefNode_initialize(struct sRefNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRefNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj155;
    struct sRefNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sRefNode*)come_increment_ref_count(self, "25obj.nc", 1580, 1678),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 1580, 1679);
    __dec_obj155=self->node,
    self->node=(struct sNode*)come_increment_ref_count(node, "25obj.nc", 1582, 1681);
    (__dec_obj155 ? __dec_obj155 = come_decrement_ref_count(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 1582, 1680) :0);
        __result_obj__0 = (struct sRefNode*)come_increment_ref_count(self, "25obj.nc", 1585, 1682);
    come_call_finalizer(sRefNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 1585, 1685);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1585, 1686):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sRefNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 1585, 1687);
    return __result_obj__0;
}

char*  sRefNode_kind(struct sRefNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRefNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sRefNode"))), "25obj.nc", 1587, 1688);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 1587, 1689));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "25obj.nc", 1587, 1690));
    return __result_obj__0;
}

_Bool sRefNode_compile(struct sRefNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRefNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    _Bool global_;
    _Bool heap_;
    _Bool local_;
    struct sType*  origin  ;
    struct sType*  type_  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sType*  generics_type  ;
    struct sType*  type  ;
    struct sType*  type2  ;
    struct sNode* obj;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct sNode* node2;
    struct sNode* stacktop;
    void* __right_value3 = (void*)0;
    struct sNode* method_node;
    _Bool Value_52;
    memset(&global_, 0, sizeof(global_));
    memset(&heap_, 0, sizeof(heap_));
    memset(&local_, 0, sizeof(local_));
    node=(struct sNode*)come_increment_ref_count(self->node, "25obj.nc", 1592, 1691);
    Value=node_compile(node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1595, 1692):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "25obj.nc", 1598, 1693);
    origin=(struct sType* )come_increment_ref_count(come_value->type->mTypedefOriginalType, "25obj.nc", 1604, 1694);
    if(come_value->type->mPointerNum!=1&&come_value->type->mArrayPointerNum!=1&&origin->mPointerNum!=1) {
        err_msg(info,"require pointer for ref");
        show_type(come_value->type,info);
                __result_obj__0 = (_Bool)1;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1609, 1695):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1609, 1696);
        come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1609, 1697);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    else if(come_value->var) {
        if(come_value->type->mHeap) {
            err_msg(info,"require borrow and do not owned for ref");
            show_type(come_value->type,info);
                        __result_obj__0 = (_Bool)1;
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1615, 1698):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1615, 1699);
            come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1615, 1700);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        global_=come_value->var->mGlobal;
        heap_=come_value->var->mType->mHeap;
        local_=!global_&&!heap_;
    }
    else if(come_value->mNullValue) {
        err_msg(info,"no assign to null for ref");
                __result_obj__0 = (_Bool)1;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1623, 1701):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1623, 1702);
        come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1623, 1703);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    else {
        err_msg(info,"require variable name for ref");
                __result_obj__0 = (_Bool)1;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1627, 1704):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1627, 1705);
        come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1627, 1706);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    type_=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "25obj.nc", 1630, 1707);
    __right_value0 = (void*)0;
    generics_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "25obj.nc", 1632, 1708, "struct sType* "), "25obj.nc", 1632, 1709),(char*)come_increment_ref_count(xsprintf("ref"), "25obj.nc", 1632, 1710),(_Bool)0,info,(_Bool)0,0), "25obj.nc", 1632, 1711);
    list$1sType$ph_add(generics_type->mGenericsTypes,(struct sType* )come_increment_ref_count(type_, "25obj.nc", 1633, 1712));
    if(type_->mArrayPointerNum==1) {
        type_->mArrayPointerNum=0;
        type_->mPointerNum=1;
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "25obj.nc", 1639, 1713, "struct sType* "), "25obj.nc", 1639, 1714),(char*)come_increment_ref_count(xsprintf("ref"), "25obj.nc", 1639, 1715),(_Bool)0,info,(_Bool)0,0), "25obj.nc", 1639, 1716);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    list$1sType$ph_add(type->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "25obj.nc", 1640, 1717, "struct sType* "), "25obj.nc", 1640, 1718),(char*)come_increment_ref_count(xsprintf("__generics_type0"), "25obj.nc", 1640, 1719),(_Bool)0,info,(_Bool)0,0), "25obj.nc", 1640, 1720));
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_generics(type,generics_type,info), "25obj.nc", 1642, 1721);
    __right_value0 = (void*)0;
    obj=(struct sNode*)come_increment_ref_count(create_new_object((struct sType* )come_increment_ref_count(type2, "25obj.nc", 1644, 1722),info), "25obj.nc", 1644, 1723);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "25obj.nc", 1646, 1724, "struct list$1tuple2$2char$phsNode$ph$ph*"), "25obj.nc", 1646, 1725)), "25obj.nc", 1646, 1726);
    __right_value0 = (void*)0;
    node2=(struct sNode*)come_increment_ref_count(create_load_var("neo_current_frame",info), "25obj.nc", 1648, 1727);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    stacktop=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(node2, "25obj.nc", 1649, 1728),(char*)come_increment_ref_count(xsprintf("stacktop"), "25obj.nc", 1649, 1729),info), "25obj.nc", 1649, 1730);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1651, 1731, "struct tuple2$2char$phsNode$ph"), "25obj.nc", 1651, 1741),(char* )come_increment_ref_count((char* )((void*)0), "25obj.nc", 1651, 1742),(struct sNode*)come_increment_ref_count(obj, "25obj.nc", 1651, 1743)), "25obj.nc", 1651, 1744));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1652, 1745, "struct tuple2$2char$phsNode$ph"), "25obj.nc", 1652, 1746),(char* )come_increment_ref_count((char* )((void*)0), "25obj.nc", 1652, 1747),(struct sNode*)come_increment_ref_count(node, "25obj.nc", 1652, 1748)), "25obj.nc", 1652, 1749));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1653, 1750, "struct tuple2$2char$phsNode$ph"), "25obj.nc", 1653, 1751),(char* )come_increment_ref_count((char* )((void*)0), "25obj.nc", 1653, 1752),(struct sNode*)come_increment_ref_count(((global_)?(((struct sNode*)(__right_value0=create_true_object(info)))):(((struct sNode*)(__right_value1=create_false_object(info))))), "25obj.nc", 1653, 1753)), "25obj.nc", 1653, 1754));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 1653, 1755):(void*)0);
    ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 1653, 1756):(void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    __right_value3 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1654, 1757, "struct tuple2$2char$phsNode$ph"), "25obj.nc", 1654, 1758),(char* )come_increment_ref_count((char* )((void*)0), "25obj.nc", 1654, 1759),(struct sNode*)come_increment_ref_count(((heap_)?(((struct sNode*)(__right_value0=create_true_object(info)))):(((struct sNode*)(__right_value1=create_false_object(info))))), "25obj.nc", 1654, 1760)), "25obj.nc", 1654, 1761));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 1654, 1762):(void*)0);
    ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 1654, 1763):(void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    __right_value3 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1655, 1764, "struct tuple2$2char$phsNode$ph"), "25obj.nc", 1655, 1765),(char* )come_increment_ref_count((char* )((void*)0), "25obj.nc", 1655, 1766),(struct sNode*)come_increment_ref_count(((local_)?(((struct sNode*)(__right_value0=create_true_object(info)))):(((struct sNode*)(__right_value1=create_false_object(info))))), "25obj.nc", 1655, 1767)), "25obj.nc", 1655, 1768));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 1655, 1769):(void*)0);
    ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 1655, 1770):(void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1656, 1771, "struct tuple2$2char$phsNode$ph"), "25obj.nc", 1656, 1772),(char* )come_increment_ref_count((char* )((void*)0), "25obj.nc", 1656, 1773),(struct sNode*)come_increment_ref_count(stacktop, "25obj.nc", 1656, 1774)), "25obj.nc", 1656, 1775));
    __right_value0 = (void*)0;
    method_node=(struct sNode*)come_increment_ref_count(create_method_call("initialize",(struct sNode*)come_increment_ref_count(obj, "25obj.nc", 1658, 1776),params,((void*)0),0,((void*)0),info,(_Bool)0), "25obj.nc", 1658, 1777);
    Value_52=node_compile(method_node,info);
    if(!Value_52) {
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1661, 1778):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1661, 1779);
        come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1661, 1780);
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1661, 1781);
        come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1661, 1782);
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1661, 1783);
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1661, 1784);
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1661, 1785):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1661, 1786);
        ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1661, 1787):(void*)0);
        ((stacktop) ? stacktop = come_decrement_ref_count(stacktop, ((struct sNode*)stacktop)->finalize, ((struct sNode*)stacktop)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1661, 1788):(void*)0);
        ((method_node) ? method_node = come_decrement_ref_count(method_node, ((struct sNode*)method_node)->finalize, ((struct sNode*)method_node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1661, 1789):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
        __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1664, 1790):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1664, 1791);
    come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1664, 1792);
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1664, 1793);
    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1664, 1794);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1664, 1795);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1664, 1796);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1664, 1797):(void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1664, 1798);
    ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1664, 1799):(void*)0);
    ((stacktop) ? stacktop = come_decrement_ref_count(stacktop, ((struct sNode*)stacktop)->finalize, ((struct sNode*)stacktop)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1664, 1800):(void*)0);
    ((method_node) ? method_node = come_decrement_ref_count(method_node, ((struct sNode*)method_node)->finalize, ((struct sNode*)method_node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1664, 1801):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sRefNode_finalize(struct sRefNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRefNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sRefNode_finalize", 2, 1683));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0, "sRefNode_finalize", 3, 1684):(void*)0);
    }
        neo_current_frame = fr.prev;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char*  v1  , struct sNode* v2)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_initialize"; neo_current_frame = &fr;
    char*  __dec_obj156  ;
    struct sNode* __dec_obj157;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    __dec_obj156=self->v1,
    self->v1=(char* )come_increment_ref_count(v1, "/usr/local/include/neo-c.h", 3911, 1733);
    __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 3911, 1732);
    __dec_obj157=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2, "/usr/local/include/neo-c.h", 3912, 1735);
    (__dec_obj157 ? __dec_obj157 = come_decrement_ref_count(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 3912, 1734) :0);
        __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 3914, 1736);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3914, 1737);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3914, 1738));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 3914, 1739):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3914, 1740);
    return __result_obj__0;
}

struct sOptionalNode* sOptionalNode_initialize(struct sOptionalNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOptionalNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj158;
    struct sOptionalNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sOptionalNode*)come_increment_ref_count(self, "25obj.nc", 1672, 1802),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 1672, 1803);
    __dec_obj158=self->node,
    self->node=(struct sNode*)come_increment_ref_count(node, "25obj.nc", 1674, 1805);
    (__dec_obj158 ? __dec_obj158 = come_decrement_ref_count(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 1674, 1804) :0);
        __result_obj__0 = (struct sOptionalNode*)come_increment_ref_count(self, "25obj.nc", 1677, 1806);
    come_call_finalizer(sOptionalNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 1677, 1809);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1677, 1810):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sOptionalNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 1677, 1811);
    return __result_obj__0;
}

char*  sOptionalNode_kind(struct sOptionalNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOptionalNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sOptionalNode"))), "25obj.nc", 1679, 1812);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 1679, 1813));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "25obj.nc", 1679, 1814));
    return __result_obj__0;
}

_Bool sOptionalNode_compile(struct sOptionalNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOptionalNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    _Bool global_;
    _Bool heap_;
    _Bool local_;
    struct sType*  origin  ;
    int origin_pointer_num;
    struct sType*  type_  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sType*  generics_type  ;
    struct sType*  type  ;
    struct sType*  type2  ;
    struct sNode* obj;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct sNode* node2;
    struct sNode* stacktop;
    void* __right_value3 = (void*)0;
    struct sNode* method_node;
    _Bool Value_53;
    memset(&global_, 0, sizeof(global_));
    memset(&heap_, 0, sizeof(heap_));
    memset(&local_, 0, sizeof(local_));
    node=(struct sNode*)come_increment_ref_count(self->node, "25obj.nc", 1684, 1815);
    Value=node_compile(node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1687, 1816):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "25obj.nc", 1690, 1817);
    origin=(struct sType* )come_increment_ref_count(come_value->type->mTypedefOriginalType, "25obj.nc", 1696, 1818);
    origin_pointer_num=((origin)?(origin->mPointerNum):(0));
    if(!come_value->mNullValue&&come_value->type->mPointerNum!=1&&come_value->type->mArrayPointerNum!=1&&origin_pointer_num!=1) {
        err_msg(info,"require pointer for opt");
        show_type(come_value->type,info);
                __result_obj__0 = (_Bool)1;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1706, 1819):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1706, 1820);
        come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1706, 1821);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    else if(come_value->var) {
        global_=come_value->var->mGlobal;
        heap_=come_value->var->mType->mHeap;
        local_=!global_&&!heap_;
    }
    else if(come_value->mNullValue) {
        global_=(_Bool)0;
        heap_=(_Bool)0;
        local_=(_Bool)0;
    }
    else {
        if(come_value->type->mHeap) {
            global_=(_Bool)0;
            heap_=(_Bool)1;
            local_=(_Bool)0;
        }
        else {
            err_msg(info,"require heap or variable name for opt");
                        __result_obj__0 = (_Bool)1;
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1726, 1822):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1726, 1823);
            come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1726, 1824);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    __right_value0 = (void*)0;
    type_=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "25obj.nc", 1730, 1825);
    __right_value0 = (void*)0;
    generics_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "25obj.nc", 1732, 1826, "struct sType* "), "25obj.nc", 1732, 1827),(char*)come_increment_ref_count(xsprintf("optional"), "25obj.nc", 1732, 1828),(_Bool)0,info,(_Bool)0,0), "25obj.nc", 1732, 1829);
    if(type_->mArrayPointerNum==1) {
        type_->mArrayPointerNum=0;
        type_->mPointerNum=1;
    }
    list$1sType$ph_add(generics_type->mGenericsTypes,(struct sType* )come_increment_ref_count(type_, "25obj.nc", 1737, 1830));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "25obj.nc", 1739, 1831, "struct sType* "), "25obj.nc", 1739, 1832),(char*)come_increment_ref_count(xsprintf("optional"), "25obj.nc", 1739, 1833),(_Bool)0,info,(_Bool)0,0), "25obj.nc", 1739, 1834);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    list$1sType$ph_add(type->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "25obj.nc", 1740, 1835, "struct sType* "), "25obj.nc", 1740, 1836),(char*)come_increment_ref_count(xsprintf("__generics_type0"), "25obj.nc", 1740, 1837),(_Bool)0,info,(_Bool)0,0), "25obj.nc", 1740, 1838));
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_generics(type,generics_type,info), "25obj.nc", 1742, 1839);
    __right_value0 = (void*)0;
    obj=(struct sNode*)come_increment_ref_count(create_new_object((struct sType* )come_increment_ref_count(type2, "25obj.nc", 1744, 1840),info), "25obj.nc", 1744, 1841);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "25obj.nc", 1746, 1842, "struct list$1tuple2$2char$phsNode$ph$ph*"), "25obj.nc", 1746, 1843)), "25obj.nc", 1746, 1844);
    __right_value0 = (void*)0;
    node2=(struct sNode*)come_increment_ref_count(create_load_var("neo_current_frame",info), "25obj.nc", 1748, 1845);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    stacktop=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(node2, "25obj.nc", 1749, 1846),(char*)come_increment_ref_count(xsprintf("stacktop"), "25obj.nc", 1749, 1847),info), "25obj.nc", 1749, 1848);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1751, 1849, "struct tuple2$2char$phsNode$ph"), "25obj.nc", 1751, 1850),(char* )come_increment_ref_count((char* )((void*)0), "25obj.nc", 1751, 1851),(struct sNode*)come_increment_ref_count(obj, "25obj.nc", 1751, 1852)), "25obj.nc", 1751, 1853));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1752, 1854, "struct tuple2$2char$phsNode$ph"), "25obj.nc", 1752, 1855),(char* )come_increment_ref_count((char* )((void*)0), "25obj.nc", 1752, 1856),(struct sNode*)come_increment_ref_count(node, "25obj.nc", 1752, 1857)), "25obj.nc", 1752, 1858));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1753, 1859, "struct tuple2$2char$phsNode$ph"), "25obj.nc", 1753, 1860),(char* )come_increment_ref_count((char* )((void*)0), "25obj.nc", 1753, 1861),(struct sNode*)come_increment_ref_count(((global_)?(((struct sNode*)(__right_value0=create_true_object(info)))):(((struct sNode*)(__right_value1=create_false_object(info))))), "25obj.nc", 1753, 1862)), "25obj.nc", 1753, 1863));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 1753, 1864):(void*)0);
    ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 1753, 1865):(void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    __right_value3 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1754, 1866, "struct tuple2$2char$phsNode$ph"), "25obj.nc", 1754, 1867),(char* )come_increment_ref_count((char* )((void*)0), "25obj.nc", 1754, 1868),(struct sNode*)come_increment_ref_count(((heap_)?(((struct sNode*)(__right_value0=create_true_object(info)))):(((struct sNode*)(__right_value1=create_false_object(info))))), "25obj.nc", 1754, 1869)), "25obj.nc", 1754, 1870));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 1754, 1871):(void*)0);
    ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 1754, 1872):(void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    __right_value3 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1755, 1873, "struct tuple2$2char$phsNode$ph"), "25obj.nc", 1755, 1874),(char* )come_increment_ref_count((char* )((void*)0), "25obj.nc", 1755, 1875),(struct sNode*)come_increment_ref_count(((local_)?(((struct sNode*)(__right_value0=create_true_object(info)))):(((struct sNode*)(__right_value1=create_false_object(info))))), "25obj.nc", 1755, 1876)), "25obj.nc", 1755, 1877));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 1755, 1878):(void*)0);
    ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 1755, 1879):(void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1756, 1880, "struct tuple2$2char$phsNode$ph"), "25obj.nc", 1756, 1881),(char* )come_increment_ref_count((char* )((void*)0), "25obj.nc", 1756, 1882),(struct sNode*)come_increment_ref_count(stacktop, "25obj.nc", 1756, 1883)), "25obj.nc", 1756, 1884));
    __right_value0 = (void*)0;
    method_node=(struct sNode*)come_increment_ref_count(create_method_call("initialize",(struct sNode*)come_increment_ref_count(obj, "25obj.nc", 1758, 1885),params,((void*)0),0,((void*)0),info,(_Bool)0), "25obj.nc", 1758, 1886);
    Value_53=node_compile(method_node,info);
    if(!Value_53) {
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1761, 1887):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1761, 1888);
        come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1761, 1889);
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1761, 1890);
        come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1761, 1891);
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1761, 1892);
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1761, 1893);
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1761, 1894):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1761, 1895);
        ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1761, 1896):(void*)0);
        ((stacktop) ? stacktop = come_decrement_ref_count(stacktop, ((struct sNode*)stacktop)->finalize, ((struct sNode*)stacktop)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1761, 1897):(void*)0);
        ((method_node) ? method_node = come_decrement_ref_count(method_node, ((struct sNode*)method_node)->finalize, ((struct sNode*)method_node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1761, 1898):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
        __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1764, 1899):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1764, 1900);
    come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1764, 1901);
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1764, 1902);
    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1764, 1903);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1764, 1904);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1764, 1905);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1764, 1906):(void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1764, 1907);
    ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1764, 1908):(void*)0);
    ((stacktop) ? stacktop = come_decrement_ref_count(stacktop, ((struct sNode*)stacktop)->finalize, ((struct sNode*)stacktop)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1764, 1909):(void*)0);
    ((method_node) ? method_node = come_decrement_ref_count(method_node, ((struct sNode*)method_node)->finalize, ((struct sNode*)method_node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1764, 1910):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sOptionalNode_finalize(struct sOptionalNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOptionalNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sOptionalNode_finalize", 2, 1807));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0, "sOptionalNode_finalize", 3, 1808):(void*)0);
    }
        neo_current_frame = fr.prev;
}

static _Bool is_buffer_like_type(struct sType*  type  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_buffer_like_type"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  it  ;
    int guard;
    char*  class_name  ;
    _Bool __result_obj__0;
    char*  original_name  ;
    struct sType*  __dec_obj159  ;
    if(type==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    it=(struct sType* )come_increment_ref_count(sType_clone(type), "25obj.nc", 1774, 1911);
    guard=0;
    while(it!=((void*)0)&&guard<16) {
        if(it->mClass&&it->mClass->mName) {
            __right_value0 = (void*)0;
            class_name=(char* )come_increment_ref_count(__builtin_string(it->mClass->mName), "25obj.nc", 1779, 1912);
            if(string_operator_equals(class_name,"buffer")||string_operator_equals(class_name,"buffer*")) {
                                __result_obj__0 = (_Bool)1;
                (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 1781, 1913));
                come_call_finalizer(sType_finalize, it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1781, 1914);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 1785, 1915));
        }
        if(it->mOriginalTypeName) {
            __right_value0 = (void*)0;
            original_name=(char* )come_increment_ref_count(__builtin_string(it->mOriginalTypeName), "25obj.nc", 1786, 1916);
            if(string_operator_equals(original_name,"buffer")||string_operator_equals(original_name,"buffer*")) {
                                __result_obj__0 = (_Bool)1;
                (original_name = come_decrement_ref_count(original_name, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 1788, 1917));
                come_call_finalizer(sType_finalize, it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1788, 1918);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            (original_name = come_decrement_ref_count(original_name, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 1792, 1919));
        }
        if(it->mTypedefOriginalType) {
            __right_value0 = (void*)0;
            __dec_obj159=it,
            it=(struct sType* )come_increment_ref_count(sType_clone(it->mTypedefOriginalType), "25obj.nc", 1793, 1921);
            come_call_finalizer(sType_finalize, __dec_obj159,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 1793, 1920);
            guard++;
            continue;
        }
        break;
    }
        __result_obj__0 = (_Bool)0;
    come_call_finalizer(sType_finalize, it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1801, 1922);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct tuple2$2sNode$phsNode$ph* get_head_and_len(struct sNode* node, struct CVALUE*  come_value  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "get_head_and_len"; neo_current_frame = &fr;
    struct sNode* head;
    struct sNode* len;
    void* __right_value0 = (void*)0;
    struct sType*  type  ;
    struct sType*  type2  ;
    struct sType*  __dec_obj160  ;
    struct sType*  __dec_obj161  ;
    _Bool buffer_like;
    void* __right_value1 = (void*)0;
    struct sNode* __dec_obj162;
    struct sNode* len_field;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj163;
    char*  var_name  ;
    struct sNode* svar;
    struct sNode* __dec_obj164;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct sNode* __dec_obj165;
    struct sNode* __dec_obj166;
    struct sNode* obj;
    struct list$1tuple2$2char$phsNode$ph$ph* params_54;
    struct sNode* method_node;
    struct sNode* __dec_obj167;
    struct sNode* __dec_obj168;
    struct sNode* _inf_value4;
    struct sHeapSizeOfNode* _inf_obj_value4;
    struct sNode* __dec_obj171;
    char*  var_name_56  ;
    struct sNode* svar_57;
    struct sNode* __dec_obj172;
    struct sNode* _inf_value5;
    struct sDynamicSizeOfExpNode* _inf_obj_value5;
    void* __right_value3 = (void*)0;
    struct sNode* __dec_obj175;
    struct sNode* __dec_obj176;
    struct sNode* _inf_value6;
    struct sDynamicSizeOfExpNode* _inf_obj_value6;
    struct sNode* __dec_obj177;
    struct sNode* __dec_obj178;
    _Bool _conditional_value_X0;
    struct sNode* _inf_value7;
    struct sSizeOfExpNode* _inf_obj_value7;
    struct sNode* __dec_obj181;
    struct sNode* _inf_value8;
    struct sSizeOfExpNode* _inf_obj_value8;
    struct sNode* __dec_obj182;
    struct sNode* __dec_obj183;
    struct sNode* _inf_value9;
    struct sSizeOfExpNode* _inf_obj_value9;
    struct sNode* __dec_obj184;
    struct tuple2$2sNode$phsNode$ph* __result_obj__0;
    memset(&head, 0, sizeof(head));
    memset(&len, 0, sizeof(len));
    memset(&type2, 0, sizeof(type2));
    type=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "25obj.nc", 1808, 1923);
    if(type->mNoSolvedGenericsType) {
        __dec_obj160=type2,
        type2=(struct sType* )come_increment_ref_count(type->mNoSolvedGenericsType, "25obj.nc", 1811, 1925);
        come_call_finalizer(sType_finalize, __dec_obj160,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 1811, 1924);
    }
    else {
        __dec_obj161=type2,
        type2=(struct sType* )come_increment_ref_count(type, "25obj.nc", 1814, 1927);
        come_call_finalizer(sType_finalize, __dec_obj161,(void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc", 1814, 1926);
    }
    buffer_like=is_buffer_like_type(type)||is_buffer_like_type(type2);
    if(buffer_like) {
        __right_value0 = (void*)0;
        __dec_obj162=head,
        head=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(node, "25obj.nc", 1820, 1928),(char*)come_increment_ref_count(xsprintf("buf"), "25obj.nc", 1820, 1929),info), "25obj.nc", 1820, 1931);
        (__dec_obj162 ? __dec_obj162 = come_decrement_ref_count(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 1820, 1930) :0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        len_field=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(node, "25obj.nc", 1821, 1932),(char*)come_increment_ref_count(xsprintf("len"), "25obj.nc", 1821, 1933),info), "25obj.nc", 1821, 1934);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj163=len,
        len=(struct sNode*)come_increment_ref_count(add_node((struct sNode*)come_increment_ref_count(len_field, "25obj.nc", 1822, 1935),(struct sNode*)come_increment_ref_count(create_int_node((char*)come_increment_ref_count(xsprintf("1"), "25obj.nc", 1822, 1936),info), "25obj.nc", 1822, 1937),info), "25obj.nc", 1822, 1939);
        (__dec_obj163 ? __dec_obj163 = come_decrement_ref_count(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 1822, 1938) :0);
        ((len_field) ? len_field = come_decrement_ref_count(len_field, ((struct sNode*)len_field)->finalize, ((struct sNode*)len_field)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1891, 1940):(void*)0);
    }
    else if((type2->mOriginalTypeName&&string_operator_equals(type2->mOriginalTypeName,"string"))||(string_operator_equals(type2->mClass->mName,"char")&&type2->mPointerNum==1&&type2->mHeap)&&!type2->mNew) {
        static int n=0;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        var_name=(char*)come_increment_ref_count(xsprintf("__tmp_string\%s",((char* )(__right_value0=int_to_string(++n)))), "25obj.nc", 1826, 1941);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 1826, 1942));
        __right_value0 = (void*)0;
        svar=(struct sNode*)come_increment_ref_count(store_var((char* )come_increment_ref_count(var_name, "25obj.nc", 1828, 1943),((void*)0),((void*)0),type2,(_Bool)1,node,info,(_Bool)0), "25obj.nc", 1828, 1944);
        __dec_obj164=head,
        head=(struct sNode*)come_increment_ref_count(svar, "25obj.nc", 1830, 1946);
        (__dec_obj164 ? __dec_obj164 = come_decrement_ref_count(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 1830, 1945) :0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "25obj.nc", 1833, 1947, "struct list$1tuple2$2char$phsNode$ph$ph*"), "25obj.nc", 1833, 1948)), "25obj.nc", 1833, 1949);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1835, 1950, "struct tuple2$2char$phsNode$ph"), "25obj.nc", 1835, 1951),(char* )come_increment_ref_count((char* )((void*)0), "25obj.nc", 1835, 1952),(struct sNode*)come_increment_ref_count(create_load_var(var_name,info), "25obj.nc", 1835, 1953)), "25obj.nc", 1835, 1954));
        __right_value0 = (void*)0;
        __dec_obj165=len,
        len=(struct sNode*)come_increment_ref_count(create_funcall("strlen",params,((void*)0),0,((void*)0),info,(_Bool)0), "25obj.nc", 1837, 1956);
        (__dec_obj165 ? __dec_obj165 = come_decrement_ref_count(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 1837, 1955) :0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 1891, 1957));
        ((svar) ? svar = come_decrement_ref_count(svar, ((struct sNode*)svar)->finalize, ((struct sNode*)svar)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1891, 1958):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1891, 1959);
    }
    else if(string_operator_equals(type2->mClass->mName,"vector")) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj166=head,
        head=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(node, "25obj.nc", 1841, 1960),(char*)come_increment_ref_count(xsprintf("items"), "25obj.nc", 1841, 1961),info), "25obj.nc", 1841, 1963);
        (__dec_obj166 ? __dec_obj166 = come_decrement_ref_count(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 1841, 1962) :0);
        obj=(struct sNode*)come_increment_ref_count(node, "25obj.nc", 1843, 1964);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        params_54=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "25obj.nc", 1845, 1965, "struct list$1tuple2$2char$phsNode$ph$ph*"), "25obj.nc", 1845, 1966)), "25obj.nc", 1845, 1967);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params_54,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1847, 1968, "struct tuple2$2char$phsNode$ph"), "25obj.nc", 1847, 1969),(char* )come_increment_ref_count((char* )((void*)0), "25obj.nc", 1847, 1970),(struct sNode*)come_increment_ref_count(obj, "25obj.nc", 1847, 1971)), "25obj.nc", 1847, 1972));
        __right_value0 = (void*)0;
        method_node=(struct sNode*)come_increment_ref_count(create_method_call("alloc_size",(struct sNode*)come_increment_ref_count(obj, "25obj.nc", 1849, 1973),params_54,((void*)0),0,((void*)0),info,(_Bool)0), "25obj.nc", 1849, 1974);
        __dec_obj167=len,
        len=(struct sNode*)come_increment_ref_count(method_node, "25obj.nc", 1851, 1976);
        (__dec_obj167 ? __dec_obj167 = come_decrement_ref_count(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 1851, 1975) :0);
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1891, 1977):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_54, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1891, 1978);
        ((method_node) ? method_node = come_decrement_ref_count(method_node, ((struct sNode*)method_node)->finalize, ((struct sNode*)method_node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1891, 1979):(void*)0);
    }
    else if(string_operator_equals(type2->mClass->mName,"map")||string_operator_equals(type2->mClass->mName,"list")) {
        err_msg(info,"can't get serialize memory of this type(%s).require to use to_vector method.",type2->mClass->mName);
        exit(1);
    }
    else if(type2->mHeap&&type2->mPointerNum==1&&type2->mNew) {
        __dec_obj168=head,
        head=(struct sNode*)come_increment_ref_count(node, "25obj.nc", 1858, 1981);
        (__dec_obj168 ? __dec_obj168 = come_decrement_ref_count(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 1858, 1980) :0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 1859, 1984, "struct sNode");
        _inf_obj_value4=(struct sHeapSizeOfNode*)come_increment_ref_count(((struct sHeapSizeOfNode*)(__right_value1=sHeapSizeOfNode_initialize((struct sHeapSizeOfNode* )come_increment_ref_count((struct sHeapSizeOfNode *)come_calloc(1, sizeof(struct sHeapSizeOfNode )*(1), "25obj.nc", 1859, 1982, "struct sHeapSizeOfNode* "), "25obj.nc", 1859, 1983),type2,info))), "25obj.nc", 1859, 1985);
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sHeapSizeOfNode_finalize;
        _inf_value4->clone=(void*)sHeapSizeOfNode_clone;
        _inf_value4->compile=(void*)sHeapSizeOfNode_compile;
        _inf_value4->sline=(void*)sNodeBase_sline;
        _inf_value4->sline_real=(void*)sNodeBase_sline_real;
        _inf_value4->sname=(void*)sNodeBase_sname;
        _inf_value4->terminated=(void*)sNodeBase_terminated;
        _inf_value4->kind=(void*)sHeapSizeOfNode_kind;
        _inf_value4->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __dec_obj171=len,
        len=(struct sNode*)come_increment_ref_count(_inf_value4, "25obj.nc", 1859, 1995);
        (__dec_obj171 ? __dec_obj171 = come_decrement_ref_count(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 1859, 1994) :0);
        come_call_finalizer(sHeapSizeOfNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 1859, 1996);
    }
    else if(type2->mHeap&&type2->mPointerNum==1) {
        static int n_55=0;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        var_name_56=(char*)come_increment_ref_count(xsprintf("__tmp_heap\%s",((char* )(__right_value0=int_to_string(++n_55)))), "25obj.nc", 1863, 1997);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 1863, 1998));
        __right_value0 = (void*)0;
        svar_57=(struct sNode*)come_increment_ref_count(store_var((char* )come_increment_ref_count(var_name_56, "25obj.nc", 1865, 1999),((void*)0),((void*)0),type2,(_Bool)1,node,info,(_Bool)0), "25obj.nc", 1865, 2000);
        __dec_obj172=head,
        head=(struct sNode*)come_increment_ref_count(svar_57, "25obj.nc", 1867, 2002);
        (__dec_obj172 ? __dec_obj172 = come_decrement_ref_count(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 1867, 2001) :0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 1868, 2006, "struct sNode");
        _inf_obj_value5=(struct sDynamicSizeOfExpNode*)come_increment_ref_count(((struct sDynamicSizeOfExpNode*)(__right_value2=sDynamicSizeOfExpNode_initialize((struct sDynamicSizeOfExpNode* )come_increment_ref_count((struct sDynamicSizeOfExpNode *)come_calloc(1, sizeof(struct sDynamicSizeOfExpNode )*(1), "25obj.nc", 1868, 2003, "struct sDynamicSizeOfExpNode* "), "25obj.nc", 1868, 2004),(struct sNode*)come_increment_ref_count(create_load_var(var_name_56,info), "25obj.nc", 1868, 2005),info))), "25obj.nc", 1868, 2007);
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sDynamicSizeOfExpNode_finalize;
        _inf_value5->clone=(void*)sDynamicSizeOfExpNode_clone;
        _inf_value5->compile=(void*)sDynamicSizeOfExpNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sDynamicSizeOfExpNode_kind;
        _inf_value5->left_value=(void*)sNodeBase_left_value;
        __dec_obj175=len,
        len=(struct sNode*)come_increment_ref_count(_inf_value5, "25obj.nc", 1868, 2017);
        (__dec_obj175 ? __dec_obj175 = come_decrement_ref_count(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 1868, 2016) :0);
        come_call_finalizer(sDynamicSizeOfExpNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 1868, 2018);
        (var_name_56 = come_decrement_ref_count(var_name_56, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 1891, 2019));
        ((svar_57) ? svar_57 = come_decrement_ref_count(svar_57, ((struct sNode*)svar_57)->finalize, ((struct sNode*)svar_57)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1891, 2020):(void*)0);
    }
    else if(type2->mPointerNum==1&&((come_value->var&&come_value->var->mType->mHeap)||(come_value->mLoadField&&come_value->var&&is_buffer_like_type(come_value->var->mType)))) {
        __dec_obj176=head,
        head=(struct sNode*)come_increment_ref_count(node, "25obj.nc", 1874, 2022);
        (__dec_obj176 ? __dec_obj176 = come_decrement_ref_count(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 1874, 2021) :0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 1875, 2026, "struct sNode");
        _inf_obj_value6=(struct sDynamicSizeOfExpNode*)come_increment_ref_count(((struct sDynamicSizeOfExpNode*)(__right_value1=sDynamicSizeOfExpNode_initialize((struct sDynamicSizeOfExpNode* )come_increment_ref_count((struct sDynamicSizeOfExpNode *)come_calloc(1, sizeof(struct sDynamicSizeOfExpNode )*(1), "25obj.nc", 1875, 2023, "struct sDynamicSizeOfExpNode* "), "25obj.nc", 1875, 2024),(struct sNode*)come_increment_ref_count(node, "25obj.nc", 1875, 2025),info))), "25obj.nc", 1875, 2027);
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sDynamicSizeOfExpNode_finalize;
        _inf_value6->clone=(void*)sDynamicSizeOfExpNode_clone;
        _inf_value6->compile=(void*)sDynamicSizeOfExpNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sDynamicSizeOfExpNode_kind;
        _inf_value6->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __dec_obj177=len,
        len=(struct sNode*)come_increment_ref_count(_inf_value6, "25obj.nc", 1875, 2029);
        (__dec_obj177 ? __dec_obj177 = come_decrement_ref_count(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 1875, 2028) :0);
        come_call_finalizer(sDynamicSizeOfExpNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 1875, 2030);
    }
    else if(type2->mPointerNum==1) {
        __dec_obj178=head,
        head=(struct sNode*)come_increment_ref_count(node, "25obj.nc", 1878, 2032);
        (__dec_obj178 ? __dec_obj178 = come_decrement_ref_count(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 1878, 2031) :0);
        if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X0=(string_operator_equals(((char* )(__right_value1=node->kind(node->_protocol_obj))),"sRefferenceNode")));        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 1879, 2033));
_conditional_value_X0;})) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 1880, 2037, "struct sNode");
            _inf_obj_value7=(struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(__right_value2=sSizeOfExpNode_initialize((struct sSizeOfExpNode* )come_increment_ref_count((struct sSizeOfExpNode *)come_calloc(1, sizeof(struct sSizeOfExpNode )*(1), "25obj.nc", 1880, 2034, "struct sSizeOfExpNode* "), "25obj.nc", 1880, 2035),(struct sNode*)come_increment_ref_count(sNode_clone(node->left_value(node->_protocol_obj)), "25obj.nc", 1880, 2036),info))), "25obj.nc", 1880, 2038);
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sSizeOfExpNode_finalize;
            _inf_value7->clone=(void*)sSizeOfExpNode_clone;
            _inf_value7->compile=(void*)sSizeOfExpNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sSizeOfExpNode_kind;
            _inf_value7->left_value=(void*)sNodeBase_left_value;
            __right_value3 = (void*)0;
            __dec_obj181=len,
            len=(struct sNode*)come_increment_ref_count(_inf_value7, "25obj.nc", 1880, 2048);
            (__dec_obj181 ? __dec_obj181 = come_decrement_ref_count(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 1880, 2047) :0);
            come_call_finalizer(sSizeOfExpNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 1880, 2049);
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 1883, 2053, "struct sNode");
            _inf_obj_value8=(struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(__right_value1=sSizeOfExpNode_initialize((struct sSizeOfExpNode* )come_increment_ref_count((struct sSizeOfExpNode *)come_calloc(1, sizeof(struct sSizeOfExpNode )*(1), "25obj.nc", 1883, 2050, "struct sSizeOfExpNode* "), "25obj.nc", 1883, 2051),(struct sNode*)come_increment_ref_count(node, "25obj.nc", 1883, 2052),info))), "25obj.nc", 1883, 2054);
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sSizeOfExpNode_finalize;
            _inf_value8->clone=(void*)sSizeOfExpNode_clone;
            _inf_value8->compile=(void*)sSizeOfExpNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sSizeOfExpNode_kind;
            _inf_value8->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj182=len,
            len=(struct sNode*)come_increment_ref_count(_inf_value8, "25obj.nc", 1883, 2056);
            (__dec_obj182 ? __dec_obj182 = come_decrement_ref_count(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 1883, 2055) :0);
            come_call_finalizer(sSizeOfExpNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 1883, 2057);
        }
    }
    else {
        __dec_obj183=head,
        head=(struct sNode*)come_increment_ref_count(node, "25obj.nc", 1887, 2059);
        (__dec_obj183 ? __dec_obj183 = come_decrement_ref_count(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 1887, 2058) :0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 1888, 2063, "struct sNode");
        _inf_obj_value9=(struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(__right_value1=sSizeOfExpNode_initialize((struct sSizeOfExpNode* )come_increment_ref_count((struct sSizeOfExpNode *)come_calloc(1, sizeof(struct sSizeOfExpNode )*(1), "25obj.nc", 1888, 2060, "struct sSizeOfExpNode* "), "25obj.nc", 1888, 2061),(struct sNode*)come_increment_ref_count(node, "25obj.nc", 1888, 2062),info))), "25obj.nc", 1888, 2064);
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sSizeOfExpNode_finalize;
        _inf_value9->clone=(void*)sSizeOfExpNode_clone;
        _inf_value9->compile=(void*)sSizeOfExpNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sSizeOfExpNode_kind;
        _inf_value9->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __dec_obj184=len,
        len=(struct sNode*)come_increment_ref_count(_inf_value9, "25obj.nc", 1888, 2066);
        (__dec_obj184 ? __dec_obj184 = come_decrement_ref_count(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 1888, 2065) :0);
        come_call_finalizer(sSizeOfExpNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 1888, 2067);
    }
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(((struct tuple2$2sNode$phsNode$ph*)(__right_value1=tuple2$2sNode$phsNode$ph_initialize((struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count((struct tuple2$2sNode$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2sNode$phsNode$ph)*(1), "25obj.nc", 1891, 2068, "struct tuple2$2sNode$phsNode$ph"), "25obj.nc", 1891, 2080),(struct sNode*)come_increment_ref_count(head, "25obj.nc", 1891, 2081),(struct sNode*)come_increment_ref_count(len, "25obj.nc", 1891, 2082)))), "25obj.nc", 1891, 2083);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1891, 2084):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1891, 2085);
    ((head) ? head = come_decrement_ref_count(head, ((struct sNode*)head)->finalize, ((struct sNode*)head)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1891, 2086):(void*)0);
    ((len) ? len = come_decrement_ref_count(len, ((struct sNode*)len)->finalize, ((struct sNode*)len)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1891, 2087):(void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1891, 2088);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1891, 2089);
    come_call_finalizer(tuple2$2sNode$phsNode$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 1891, 2090);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sNode$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 1891, 2091);
    return __result_obj__0;
}

static struct sHeapSizeOfNode* sHeapSizeOfNode_clone(struct sHeapSizeOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sHeapSizeOfNode_clone"; neo_current_frame = &fr;
    struct sHeapSizeOfNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sHeapSizeOfNode*  result  ;
    char*  __dec_obj169  ;
    struct sType*  __dec_obj170  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sHeapSizeOfNode* )come_increment_ref_count((struct sHeapSizeOfNode *)come_calloc(1, sizeof(struct sHeapSizeOfNode )*(1), "sHeapSizeOfNode_clone", 5, 1986, "struct sHeapSizeOfNode* "), "sHeapSizeOfNode_clone", 5, 1987);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj169=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sHeapSizeOfNode_clone", 7, 1988, "char* "), "sHeapSizeOfNode_clone", 7, 1990);
        __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0,0, (void*)0, "sHeapSizeOfNode_clone", 7, 1989);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj170=result->type,
        result->type=(struct sType* )come_increment_ref_count(sType_clone(self->type), "sHeapSizeOfNode_clone", 9, 1992);
        come_call_finalizer(sType_finalize, __dec_obj170,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sHeapSizeOfNode_clone", 9, 1991);
    }
        __result_obj__0 = result;
    come_call_finalizer(sHeapSizeOfNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sHeapSizeOfNode_clone}", 10, 1993);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sDynamicSizeOfExpNode* sDynamicSizeOfExpNode_clone(struct sDynamicSizeOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicSizeOfExpNode_clone"; neo_current_frame = &fr;
    struct sDynamicSizeOfExpNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sDynamicSizeOfExpNode*  result  ;
    char*  __dec_obj173  ;
    struct sNode* __dec_obj174;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sDynamicSizeOfExpNode* )come_increment_ref_count((struct sDynamicSizeOfExpNode *)come_calloc(1, sizeof(struct sDynamicSizeOfExpNode )*(1), "sDynamicSizeOfExpNode_clone", 5, 2008, "struct sDynamicSizeOfExpNode* "), "sDynamicSizeOfExpNode_clone", 5, 2009);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj173=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sDynamicSizeOfExpNode_clone", 7, 2010, "char* "), "sDynamicSizeOfExpNode_clone", 7, 2012);
        __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0,0, (void*)0, "sDynamicSizeOfExpNode_clone", 7, 2011);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj174=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp), "sDynamicSizeOfExpNode_clone", 9, 2014);
        (__dec_obj174 ? __dec_obj174 = come_decrement_ref_count(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0, (void*)0, "sDynamicSizeOfExpNode_clone", 9, 2013) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sDynamicSizeOfExpNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sDynamicSizeOfExpNode_clone}", 10, 2015);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfExpNode_clone"; neo_current_frame = &fr;
    struct sSizeOfExpNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sSizeOfExpNode*  result  ;
    char*  __dec_obj179  ;
    struct sNode* __dec_obj180;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sSizeOfExpNode* )come_increment_ref_count((struct sSizeOfExpNode *)come_calloc(1, sizeof(struct sSizeOfExpNode )*(1), "sSizeOfExpNode_clone", 5, 2039, "struct sSizeOfExpNode* "), "sSizeOfExpNode_clone", 5, 2040);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj179=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sSizeOfExpNode_clone", 7, 2041, "char* "), "sSizeOfExpNode_clone", 7, 2043);
        __dec_obj179 = come_decrement_ref_count(__dec_obj179, (void*)0, (void*)0, 0,0, (void*)0, "sSizeOfExpNode_clone", 7, 2042);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj180=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp), "sSizeOfExpNode_clone", 9, 2045);
        (__dec_obj180 ? __dec_obj180 = come_decrement_ref_count(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0, (void*)0, "sSizeOfExpNode_clone", 9, 2044) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sSizeOfExpNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sSizeOfExpNode_clone}", 10, 2046);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2sNode$phsNode$ph* tuple2$2sNode$phsNode$ph_initialize(struct tuple2$2sNode$phsNode$ph* self, struct sNode* v1, struct sNode* v2)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2sNode$phsNode$ph_initialize"; neo_current_frame = &fr;
    struct sNode* __dec_obj185;
    struct sNode* __dec_obj186;
    struct tuple2$2sNode$phsNode$ph* __result_obj__0;
    __dec_obj185=self->v1,
    self->v1=(struct sNode*)come_increment_ref_count(v1, "/usr/local/include/neo-c.h", 3911, 2070);
    (__dec_obj185 ? __dec_obj185 = come_decrement_ref_count(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 3911, 2069) :0);
    __dec_obj186=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2, "/usr/local/include/neo-c.h", 3912, 2072);
    (__dec_obj186 ? __dec_obj186 = come_decrement_ref_count(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 3912, 2071) :0);
        __result_obj__0 = (struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 3914, 2073);
    come_call_finalizer(tuple2$2sNode$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3914, 2076);
    ((v1) ? v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 3914, 2077):(void*)0);
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 3914, 2078):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sNode$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3914, 2079);
    return __result_obj__0;
}

static void tuple2$2sNode$phsNode$ph$p_finalize(struct tuple2$2sNode$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2sNode$phsNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        ((self->v1) ? self->v1 = come_decrement_ref_count(self->v1, ((struct sNode*)self->v1)->finalize, ((struct sNode*)self->v1)->_protocol_obj, 0, 0,(void*)0, "tuple2$2sNode$phsNode$ph$p_finalize", 2, 2074):(void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0, "tuple2$2sNode$phsNode$ph$p_finalize", 3, 2075):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sSpanNode* sSpanNode_initialize(struct sSpanNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSpanNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj187;
    struct sSpanNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sSpanNode*)come_increment_ref_count(self, "25obj.nc", 1898, 2092),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 1898, 2093);
    __dec_obj187=self->node,
    self->node=(struct sNode*)come_increment_ref_count(node, "25obj.nc", 1900, 2095);
    (__dec_obj187 ? __dec_obj187 = come_decrement_ref_count(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 1900, 2094) :0);
        __result_obj__0 = (struct sSpanNode*)come_increment_ref_count(self, "25obj.nc", 1903, 2096);
    come_call_finalizer(sSpanNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 1903, 2099);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1903, 2100):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sSpanNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "25obj.nc}", 1903, 2101);
    return __result_obj__0;
}

char*  sSpanNode_kind(struct sSpanNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSpanNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sSpanNode"))), "25obj.nc", 1905, 2102);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "25obj.nc", 1905, 2103));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "25obj.nc", 1905, 2104));
    return __result_obj__0;
}

_Bool sSpanNode_compile(struct sSpanNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSpanNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  origin  ;
    _Bool global_;
    _Bool heap_;
    _Bool local_;
    struct sType*  type_  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sType*  generics_type  ;
    struct sType*  type  ;
    struct sType*  type2  ;
    struct sNode* obj;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct tuple2$2sNode$phsNode$ph* multiple_assign_var8
;    struct sNode* head=0;
    struct sNode* len=0;
    struct sNode* node2;
    struct sNode* stacktop;
    void* __right_value3 = (void*)0;
    struct sNode* method_node;
    _Bool Value_58;
    memset(&global_, 0, sizeof(global_));
    memset(&heap_, 0, sizeof(heap_));
    memset(&local_, 0, sizeof(local_));
    node=(struct sNode*)come_increment_ref_count(self->node, "25obj.nc", 1910, 2105);
    Value=node_compile(node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1913, 2106):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "25obj.nc", 1916, 2107);
    origin=(struct sType* )come_increment_ref_count(come_value->type->mTypedefOriginalType, "25obj.nc", 1918, 2108);
    if(come_value->type->mPointerNum!=1&&come_value->type->mArrayPointerNum!=1&&origin->mPointerNum!=1) {
        err_msg(info,"require pointer for span");
        show_type(come_value->type,info);
                __result_obj__0 = (_Bool)1;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1923, 2109):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1923, 2110);
        come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1923, 2111);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(come_value->var) {
        if(come_value->type->mHeap) {
            err_msg(info,"require borrow and do not owned for span");
            show_type(come_value->type,info);
                        __result_obj__0 = (_Bool)1;
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1934, 2112):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1934, 2113);
            come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1934, 2114);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        global_=come_value->var->mGlobal;
        heap_=come_value->var->mType->mHeap;
        local_=!global_&&!heap_;
    }
    else {
        err_msg(info,"require variable name for span");
                __result_obj__0 = (_Bool)1;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1942, 2115):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1942, 2116);
        come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1942, 2117);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    type_=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "25obj.nc", 1945, 2118);
    if(type_->mPointerNum==1&&list$1sNode$ph_length(type_->mArrayNum)>0) {
        type_->mPointerNum=1;
        list$1sNode$ph_reset(type_->mArrayNum);
        type_->mArrayPointerNum=0;
        type_->mArrayPointerType=(_Bool)0;
    }
    __right_value0 = (void*)0;
    generics_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "25obj.nc", 1955, 2119, "struct sType* "), "25obj.nc", 1955, 2120),(char*)come_increment_ref_count(xsprintf("span"), "25obj.nc", 1955, 2121),(_Bool)0,info,(_Bool)0,0), "25obj.nc", 1955, 2122);
    list$1sType$ph_add(generics_type->mGenericsTypes,(struct sType* )come_increment_ref_count(type_, "25obj.nc", 1956, 2123));
    if(type_->mArrayPointerNum==1) {
        type_->mArrayPointerNum=0;
        type_->mPointerNum=1;
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "25obj.nc", 1962, 2124, "struct sType* "), "25obj.nc", 1962, 2125),(char*)come_increment_ref_count(xsprintf("span"), "25obj.nc", 1962, 2126),(_Bool)0,info,(_Bool)0,0), "25obj.nc", 1962, 2127);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    list$1sType$ph_add(type->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "25obj.nc", 1963, 2128, "struct sType* "), "25obj.nc", 1963, 2129),(char*)come_increment_ref_count(xsprintf("__generics_type0"), "25obj.nc", 1963, 2130),(_Bool)0,info,(_Bool)0,0), "25obj.nc", 1963, 2131));
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_generics(type,generics_type,info), "25obj.nc", 1965, 2132);
    __right_value0 = (void*)0;
    obj=(struct sNode*)come_increment_ref_count(create_new_object((struct sType* )come_increment_ref_count(type2, "25obj.nc", 1967, 2133),info), "25obj.nc", 1967, 2134);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "25obj.nc", 1969, 2135, "struct list$1tuple2$2char$phsNode$ph$ph*"), "25obj.nc", 1969, 2136)), "25obj.nc", 1969, 2137);
    __right_value0 = (void*)0;
    multiple_assign_var8=((struct tuple2$2sNode$phsNode$ph*)(__right_value0=get_head_and_len((struct sNode*)come_increment_ref_count(node, "25obj.nc", 1971, 2138),(struct CVALUE* )come_increment_ref_count(come_value, "25obj.nc", 1971, 2139),info)));
    head=(struct sNode*)come_increment_ref_count(multiple_assign_var8->v1, "25obj.nc", 1971, 2140);
    len=(struct sNode*)come_increment_ref_count(multiple_assign_var8->v2, "25obj.nc", 1971, 2141);
    come_call_finalizer(tuple2$2sNode$phsNode$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 1971, 2142);
    __right_value0 = (void*)0;
    node2=(struct sNode*)come_increment_ref_count(create_load_var("neo_current_frame",info), "25obj.nc", 1973, 2143);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    stacktop=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(node2, "25obj.nc", 1974, 2144),(char*)come_increment_ref_count(xsprintf("stacktop"), "25obj.nc", 1974, 2145),info), "25obj.nc", 1974, 2146);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1976, 2147, "struct tuple2$2char$phsNode$ph"), "25obj.nc", 1976, 2148),(char* )come_increment_ref_count((char* )((void*)0), "25obj.nc", 1976, 2149),(struct sNode*)come_increment_ref_count(obj, "25obj.nc", 1976, 2150)), "25obj.nc", 1976, 2151));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1977, 2152, "struct tuple2$2char$phsNode$ph"), "25obj.nc", 1977, 2153),(char* )come_increment_ref_count((char* )((void*)0), "25obj.nc", 1977, 2154),(struct sNode*)come_increment_ref_count(head, "25obj.nc", 1977, 2155)), "25obj.nc", 1977, 2156));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1978, 2157, "struct tuple2$2char$phsNode$ph"), "25obj.nc", 1978, 2158),(char* )come_increment_ref_count((char* )((void*)0), "25obj.nc", 1978, 2159),(struct sNode*)come_increment_ref_count(len, "25obj.nc", 1978, 2160)), "25obj.nc", 1978, 2161));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1979, 2162, "struct tuple2$2char$phsNode$ph"), "25obj.nc", 1979, 2163),(char* )come_increment_ref_count((char* )((void*)0), "25obj.nc", 1979, 2164),(struct sNode*)come_increment_ref_count(((local_)?(((struct sNode*)(__right_value0=create_true_object(info)))):(((struct sNode*)(__right_value1=create_false_object(info))))), "25obj.nc", 1979, 2165)), "25obj.nc", 1979, 2166));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 1979, 2167):(void*)0);
    ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 1979, 2168):(void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    __right_value3 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1980, 2169, "struct tuple2$2char$phsNode$ph"), "25obj.nc", 1980, 2170),(char* )come_increment_ref_count((char* )((void*)0), "25obj.nc", 1980, 2171),(struct sNode*)come_increment_ref_count(((heap_)?(((struct sNode*)(__right_value0=create_true_object(info)))):(((struct sNode*)(__right_value1=create_false_object(info))))), "25obj.nc", 1980, 2172)), "25obj.nc", 1980, 2173));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 1980, 2174):(void*)0);
    ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 1980, 2175):(void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    __right_value3 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1981, 2176, "struct tuple2$2char$phsNode$ph"), "25obj.nc", 1981, 2177),(char* )come_increment_ref_count((char* )((void*)0), "25obj.nc", 1981, 2178),(struct sNode*)come_increment_ref_count(((global_)?(((struct sNode*)(__right_value0=create_true_object(info)))):(((struct sNode*)(__right_value1=create_false_object(info))))), "25obj.nc", 1981, 2179)), "25obj.nc", 1981, 2180));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 1981, 2181):(void*)0);
    ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 1981, 2182):(void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1982, 2183, "struct tuple2$2char$phsNode$ph"), "25obj.nc", 1982, 2184),(char* )come_increment_ref_count((char* )((void*)0), "25obj.nc", 1982, 2185),(struct sNode*)come_increment_ref_count(stacktop, "25obj.nc", 1982, 2186)), "25obj.nc", 1982, 2187));
    __right_value0 = (void*)0;
    method_node=(struct sNode*)come_increment_ref_count(create_method_call("initialize",(struct sNode*)come_increment_ref_count(obj, "25obj.nc", 1984, 2188),params,((void*)0),0,((void*)0),info,(_Bool)0), "25obj.nc", 1984, 2189);
    Value_58=node_compile(method_node,info);
    if(!Value_58) {
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1987, 2190):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1987, 2191);
        come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1987, 2192);
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1987, 2193);
        come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1987, 2194);
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1987, 2195);
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1987, 2196);
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1987, 2197):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1987, 2198);
        ((head) ? head = come_decrement_ref_count(head, ((struct sNode*)head)->finalize, ((struct sNode*)head)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1987, 2199):(void*)0);
        ((len) ? len = come_decrement_ref_count(len, ((struct sNode*)len)->finalize, ((struct sNode*)len)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1987, 2200):(void*)0);
        ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1987, 2201):(void*)0);
        ((stacktop) ? stacktop = come_decrement_ref_count(stacktop, ((struct sNode*)stacktop)->finalize, ((struct sNode*)stacktop)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1987, 2202):(void*)0);
        ((method_node) ? method_node = come_decrement_ref_count(method_node, ((struct sNode*)method_node)->finalize, ((struct sNode*)method_node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1987, 2203):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
        __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1990, 2204):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1990, 2205);
    come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1990, 2206);
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1990, 2207);
    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1990, 2208);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1990, 2209);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1990, 2210);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1990, 2211):(void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 1990, 2212);
    ((head) ? head = come_decrement_ref_count(head, ((struct sNode*)head)->finalize, ((struct sNode*)head)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1990, 2213):(void*)0);
    ((len) ? len = come_decrement_ref_count(len, ((struct sNode*)len)->finalize, ((struct sNode*)len)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1990, 2214):(void*)0);
    ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1990, 2215):(void*)0);
    ((stacktop) ? stacktop = come_decrement_ref_count(stacktop, ((struct sNode*)stacktop)->finalize, ((struct sNode*)stacktop)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1990, 2216):(void*)0);
    ((method_node) ? method_node = come_decrement_ref_count(method_node, ((struct sNode*)method_node)->finalize, ((struct sNode*)method_node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 1990, 2217):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sSpanNode_finalize(struct sSpanNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSpanNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sSpanNode_finalize", 2, 2097));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0, "sSpanNode_finalize", 3, 2098):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_node_v21"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var9
;    struct sType*  type  =0;
    char*  name  =0;
    _Bool err=0;
    struct sNode* exp;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value10;
    struct sNewNode* _inf_obj_value10;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    struct sNode* _inf_value11;
    struct sNewNode* _inf_obj_value11;
    struct sNode* obj;
    char*  fun_name  ;
    struct list$1tuple2$2char$phsNode$ph$ph* initializer;
    char*  word  ;
    _Bool no_comma;
    struct sNode* exp_59;
    struct sNode* exp_60;
    struct sNode* _inf_value12;
    struct sNewNode* _inf_obj_value12;
    struct sNode* _inf_value13;
    struct sNewNode* _inf_obj_value13;
    struct sNode* _inf_value14;
    struct sTrueNode* _inf_obj_value14;
    struct sBlock*  block  ;
    struct sNode* _inf_value15;
    struct sDeferNode* _inf_obj_value15;
    struct sNode* _inf_value16;
    struct sFalseNode* _inf_obj_value16;
    struct sNode* node;
    struct sNode* _inf_value17;
    struct sDeleteNode* _inf_obj_value17;
    struct sNode* node_76;
    struct sNode* _inf_value18;
    struct sBorrowNode* _inf_obj_value18;
    struct sNode* node_77;
    struct sNode* _inf_value19;
    struct sCloneNode* _inf_obj_value19;
    struct sNode* node_78;
    struct sNode* _inf_value20;
    struct sDupeNode* _inf_obj_value20;
    struct sNode* node_79;
    struct sNode* _inf_value21;
    struct sDummyHeapNode* _inf_obj_value21;
    struct sNode* node_80;
    struct sNode* _inf_value22;
    struct sGCIncNode* _inf_obj_value22;
    struct sNode* node_81;
    struct sNode* _inf_value23;
    struct sGCDecNode* _inf_obj_value23;
    struct sNode* node_82;
    struct sNode* _inf_value24;
    struct sGCDecNoFreeNode* _inf_obj_value24;
    struct sNode* node_83;
    struct sNode* _inf_value25;
    struct sGCDecNoFreeNode* _inf_obj_value25;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var10
;    struct sType*  param_type  =0;
    char*  param_name  =0;
    _Bool err_84=0;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    struct sNode* _inf_value26;
    struct sIsHeap* _inf_obj_value26;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var11
;    struct sType*  param_type_85  =0;
    char*  param_name_86  =0;
    _Bool err_87=0;
    struct sType*  type2__88  ;
    struct sType*  type2_89  ;
    struct sNode* _inf_value27;
    struct sIsPointer* _inf_obj_value27;
    struct sNode* node_90;
    struct sNode* _inf_value28;
    struct sOptionalNode* _inf_obj_value28;
    struct sNode* node_91;
    struct sNode* _inf_value29;
    struct sRefNode* _inf_obj_value29;
    struct sNode* node_92;
    struct sNode* _inf_value30;
    struct sSpanNode* _inf_obj_value30;
    _Bool come_c;
    struct sNode* node_93;
    _Bool come_safe;
    struct sNode* node_94;
    _Bool come_safe_95;
    struct sNode* node_96;
    _Bool no_comma_97;
    struct sNode* exp_98;
    struct list$1sType$ph* types;
    struct list$1sNode$ph* exps;
    struct sNode* default_exp;
    _Bool no_comma_99;
    struct sNode* __dec_obj228;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var12
;    struct sType*  type_100  =0;
    char*  name_101  =0;
    _Bool err_102=0;
    _Bool no_comma_103;
    struct sNode* node_104;
    struct sNode* _inf_value31;
    struct sGeneric* _inf_obj_value31;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var13
;    struct sType*  type_105  =0;
    char*  name_106  =0;
    _Bool err_107=0;
    char*  word_108  ;
    struct sNode* _inf_value32;
    struct sOffsetOf* _inf_obj_value32;
    _Bool paren;
    _Bool is_type_name_flag;
    char* p;
    int sline;
    char*  word_109  ;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var14
;    struct sType*  type_110  =0;
    char*  name_111  =0;
    _Bool err_112=0;
    struct sNode* _inf_value33;
    struct sSizeOfNode* _inf_obj_value33;
    struct sNode* exp_113;
    _Bool no_comma_114;
    struct sNode* __dec_obj239;
    struct sNode* __dec_obj240;
    struct sNode* _inf_value34;
    struct sSizeOfExpNode* _inf_obj_value34;
    _Bool paren_115;
    struct sNode* exp_116;
    _Bool no_comma_117;
    struct sNode* __dec_obj241;
    struct sNode* __dec_obj242;
    struct sNode* _inf_value35;
    struct sDynamicTypeOf* _inf_obj_value35;
    _Bool paren_118;
    struct sNode* exp_119;
    _Bool no_comma_120;
    struct sNode* __dec_obj245;
    struct sNode* __dec_obj246;
    struct sNode* _inf_value36;
    struct sDynamicSizeOfExpNode* _inf_obj_value36;
    _Bool paren_121;
    _Bool is_type_name_flag_122;
    char* p_123;
    int sline_124;
    char*  word_125  ;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var15
;    struct sType*  type_126  =0;
    char*  name_127  =0;
    _Bool err_128=0;
    struct sNode* _inf_value37;
    struct sAlignOfNode* _inf_obj_value37;
    struct sNode* exp_129;
    _Bool no_comma_130;
    struct sNode* __dec_obj249;
    struct sNode* __dec_obj250;
    struct sNode* _inf_value38;
    struct sAlignOfExpNode* _inf_obj_value38;
    _Bool paren_131;
    _Bool is_type_name_flag_132;
    char* p_133;
    int sline_134;
    char*  word_135  ;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var16
;    struct sType*  type_136  =0;
    char*  name_137  =0;
    _Bool err_138=0;
    struct sNode* _inf_value39;
    struct sAlignOfNode2* _inf_obj_value39;
    struct sNode* exp_139;
    _Bool no_comma_140;
    struct sNode* __dec_obj255;
    struct sNode* __dec_obj256;
    struct sNode* _inf_value40;
    struct sAlignOfExpNode2* _inf_obj_value40;
    memset(&exp_113, 0, sizeof(exp_113));
    memset(&exp_116, 0, sizeof(exp_116));
    memset(&exp_119, 0, sizeof(exp_119));
    memset(&exp_129, 0, sizeof(exp_129));
    memset(&exp_139, 0, sizeof(exp_139));
    if(!gComeC&&charp_operator_equals(buf,"new")) {
        multiple_assign_var9=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type=(struct sType* )come_increment_ref_count(multiple_assign_var9->v1, "25obj.nc", 1998, 2218);
        name=(char* )come_increment_ref_count(multiple_assign_var9->v2, "25obj.nc", 1998, 2219);
        err=multiple_assign_var9->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 1998, 2222);
        if(!err) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        if(span$1char$p_operator_derefference(info->p)==40) {
            if(type->mClass->mNumber) {
                info->p->p++;
                skip_spaces_and_lf(info);
                __right_value0 = (void*)0;
                exp=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "25obj.nc", 2008, 2223);
                expected_next_character(41,info);
                                __right_value0 = (void*)0;
                _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 2012, 2227, "struct sNode");
                _inf_obj_value10=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value1=sNewNode_initialize((struct sNewNode* )come_increment_ref_count((struct sNewNode *)come_calloc(1, sizeof(struct sNewNode )*(1), "25obj.nc", 2012, 2224, "struct sNewNode* "), "25obj.nc", 2012, 2225),type,((void*)0),(struct sNode*)come_increment_ref_count(exp, "25obj.nc", 2012, 2226),info))), "25obj.nc", 2012, 2228);
                _inf_value10->_protocol_obj=_inf_obj_value10;
                _inf_value10->finalize=(void*)sNewNode_finalize;
                _inf_value10->clone=(void*)sNewNode_clone;
                _inf_value10->compile=(void*)sNewNode_compile;
                _inf_value10->sline=(void*)sNodeBase_sline;
                _inf_value10->sline_real=(void*)sNodeBase_sline_real;
                _inf_value10->sname=(void*)sNodeBase_sname;
                _inf_value10->terminated=(void*)sNodeBase_terminated;
                _inf_value10->kind=(void*)sNewNode_kind;
                _inf_value10->left_value=(void*)sNodeBase_left_value;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value10)), "25obj.nc", 2012, 2229);
                ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2012, 2230):(void*)0);
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 2012, 2231);
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 2012, 2232));
                come_call_finalizer(sNewNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 2012, 2233);
                ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2012, 2234):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2012, 2235):(void*)0);
                return __result_obj__0;
                ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2020, 2236):(void*)0);
            }
            else {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 2015, 2239, "struct sNode");
                _inf_obj_value11=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value1=sNewNode_initialize((struct sNewNode* )come_increment_ref_count((struct sNewNode *)come_calloc(1, sizeof(struct sNewNode )*(1), "25obj.nc", 2015, 2237, "struct sNewNode* "), "25obj.nc", 2015, 2238),type,((void*)0),((void*)0),info))), "25obj.nc", 2015, 2240);
                _inf_value11->_protocol_obj=_inf_obj_value11;
                _inf_value11->finalize=(void*)sNewNode_finalize;
                _inf_value11->clone=(void*)sNewNode_clone;
                _inf_value11->compile=(void*)sNewNode_compile;
                _inf_value11->sline=(void*)sNodeBase_sline;
                _inf_value11->sline_real=(void*)sNodeBase_sline_real;
                _inf_value11->sname=(void*)sNodeBase_sname;
                _inf_value11->terminated=(void*)sNodeBase_terminated;
                _inf_value11->kind=(void*)sNewNode_kind;
                _inf_value11->left_value=(void*)sNodeBase_left_value;
                __right_value2 = (void*)0;
                obj=(struct sNode*)come_increment_ref_count(_inf_value11, "25obj.nc", 2015, 2241);
                come_call_finalizer(sNewNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 2015, 2242);
                __right_value0 = (void*)0;
                fun_name=(char* )come_increment_ref_count(__builtin_string("initialize"), "25obj.nc", 2016, 2243);
                                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=parse_method_call_v20((struct sNode*)come_increment_ref_count(sNode_clone(obj), "25obj.nc", 2018, 2244),(char* )come_increment_ref_count(__builtin_string(fun_name), "25obj.nc", 2018, 2245),info,(_Bool)0))), "25obj.nc", 2018, 2246);
                ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2018, 2247):(void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 2018, 2248));
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 2018, 2249);
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 2018, 2250));
                ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2018, 2251):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2018, 2252):(void*)0);
                return __result_obj__0;
                ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2020, 2253):(void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 2020, 2254));
            }
        }
        else if(span$1char$p_operator_derefference(info->p)==123) {
            info->p->p++;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "25obj.nc", 2025, 2255, "struct list$1tuple2$2char$phsNode$ph$ph*"), "25obj.nc", 2025, 2256)), "25obj.nc", 2025, 2257);
            while((_Bool)1) {
                __right_value0 = (void*)0;
                word=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "25obj.nc", 2028, 2258);
                if(span$1char$p_operator_derefference(info->p)==58) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                    no_comma=info->no_comma;
                    info->no_comma=(_Bool)1;
                    __right_value0 = (void*)0;
                    exp_59=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "25obj.nc", 2036, 2259);
                    info->no_comma=no_comma;
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    list$1tuple2$2char$phsNode$ph$ph_add(initializer,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 2039, 2260, "struct tuple2$2char$phsNode$ph"), "25obj.nc", 2039, 2261),(char* )come_increment_ref_count(word, "25obj.nc", 2039, 2262),(struct sNode*)come_increment_ref_count(exp_59, "25obj.nc", 2039, 2263)), "25obj.nc", 2039, 2264));
                    ((exp_59) ? exp_59 = come_decrement_ref_count(exp_59, ((struct sNode*)exp_59)->finalize, ((struct sNode*)exp_59)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2051, 2265):(void*)0);
                }
                else if(span$1char$p_operator_derefference(info->p)==44) {
                    __right_value0 = (void*)0;
                    exp_60=(struct sNode*)come_increment_ref_count(create_load_var(word,info), "25obj.nc", 2042, 2266);
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    list$1tuple2$2char$phsNode$ph$ph_add(initializer,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 2044, 2267, "struct tuple2$2char$phsNode$ph"), "25obj.nc", 2044, 2268),(char* )come_increment_ref_count(word, "25obj.nc", 2044, 2269),(struct sNode*)come_increment_ref_count(exp_60, "25obj.nc", 2044, 2270)), "25obj.nc", 2044, 2271));
                    ((exp_60) ? exp_60 = come_decrement_ref_count(exp_60, ((struct sNode*)exp_60)->finalize, ((struct sNode*)exp_60)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2051, 2272):(void*)0);
                }
                else {
                    err_msg(info,"invalid character(21) %c",span$1char$p_operator_derefference(info->p));
                    exit(2);
                }
                if(span$1char$p_operator_derefference(info->p)==44) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                }
                else if(span$1char$p_operator_derefference(info->p)==125) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                    (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 2058, 2273));
                    break;
                }
                else {
                    err_msg(info,"invalid character(30) %c",span$1char$p_operator_derefference(info->p));
                    exit(2);
                }
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 2065, 2274));
            }
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 2065, 2278, "struct sNode");
            _inf_obj_value12=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value1=sNewNode_initialize((struct sNewNode* )come_increment_ref_count((struct sNewNode *)come_calloc(1, sizeof(struct sNewNode )*(1), "25obj.nc", 2065, 2275, "struct sNewNode* "), "25obj.nc", 2065, 2276),type,(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(initializer, "25obj.nc", 2065, 2277),((void*)0),info))), "25obj.nc", 2065, 2279);
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sNewNode_finalize;
            _inf_value12->clone=(void*)sNewNode_clone;
            _inf_value12->compile=(void*)sNewNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sNewNode_kind;
            _inf_value12->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value12)), "25obj.nc", 2065, 2280);
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 2065, 2281);
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 2065, 2282);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 2065, 2283));
            come_call_finalizer(sNewNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 2065, 2284);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2065, 2285):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2065, 2286):(void*)0);
            return __result_obj__0;
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 2070, 2287);
        }
        else {
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 2068, 2290, "struct sNode");
            _inf_obj_value13=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value1=sNewNode_initialize((struct sNewNode* )come_increment_ref_count((struct sNewNode *)come_calloc(1, sizeof(struct sNewNode )*(1), "25obj.nc", 2068, 2288, "struct sNewNode* "), "25obj.nc", 2068, 2289),type,((void*)0),((void*)0),info))), "25obj.nc", 2068, 2291);
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sNewNode_finalize;
            _inf_value13->clone=(void*)sNewNode_clone;
            _inf_value13->compile=(void*)sNewNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sNewNode_kind;
            _inf_value13->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value13)), "25obj.nc", 2068, 2292);
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 2068, 2293);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 2068, 2294));
            come_call_finalizer(sNewNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 2068, 2295);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2068, 2296):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2068, 2297):(void*)0);
            return __result_obj__0;
        }
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 2712, 2298);
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 2712, 2299));
    }
    else if(charp_operator_equals(buf,"true")) {
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 2072, 2302, "struct sNode");
        _inf_obj_value14=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(__right_value1=sTrueNode_initialize((struct sTrueNode* )come_increment_ref_count((struct sTrueNode *)come_calloc(1, sizeof(struct sTrueNode )*(1), "25obj.nc", 2072, 2300, "struct sTrueNode* "), "25obj.nc", 2072, 2301),info))), "25obj.nc", 2072, 2303);
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sTrueNode_finalize;
        _inf_value14->clone=(void*)sTrueNode_clone;
        _inf_value14->compile=(void*)sTrueNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sline_real=(void*)sNodeBase_sline_real;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sTrueNode_kind;
        _inf_value14->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value14)), "25obj.nc", 2072, 2304);
        come_call_finalizer(sTrueNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 2072, 2305);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2072, 2306):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2072, 2307):(void*)0);
        return __result_obj__0;
    }
    else if(charp_operator_equals(buf,"defer")) {
        __right_value0 = (void*)0;
        block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "25obj.nc", 2075, 2308);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 2077, 2312, "struct sNode");
        _inf_obj_value15=(struct sDeferNode*)come_increment_ref_count(((struct sDeferNode*)(__right_value1=sDeferNode_initialize((struct sDeferNode* )come_increment_ref_count((struct sDeferNode *)come_calloc(1, sizeof(struct sDeferNode )*(1), "25obj.nc", 2077, 2309, "struct sDeferNode* "), "25obj.nc", 2077, 2310),(struct sBlock* )come_increment_ref_count(block, "25obj.nc", 2077, 2311),info))), "25obj.nc", 2077, 2313);
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sDeferNode_finalize;
        _inf_value15->clone=(void*)sDeferNode_clone;
        _inf_value15->compile=(void*)sDeferNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sline_real=(void*)sNodeBase_sline_real;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sDeferNode_kind;
        _inf_value15->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value15)), "25obj.nc", 2077, 2465);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 2077, 2466);
        come_call_finalizer(sDeferNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 2077, 2467);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2077, 2468):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2077, 2469):(void*)0);
        return __result_obj__0;
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 2712, 2470);
    }
    else if(charp_operator_equals(buf,"false")) {
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 2080, 2473, "struct sNode");
        _inf_obj_value16=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(__right_value1=sFalseNode_initialize((struct sFalseNode* )come_increment_ref_count((struct sFalseNode *)come_calloc(1, sizeof(struct sFalseNode )*(1), "25obj.nc", 2080, 2471, "struct sFalseNode* "), "25obj.nc", 2080, 2472),info))), "25obj.nc", 2080, 2474);
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=(void*)sFalseNode_finalize;
        _inf_value16->clone=(void*)sFalseNode_clone;
        _inf_value16->compile=(void*)sFalseNode_compile;
        _inf_value16->sline=(void*)sNodeBase_sline;
        _inf_value16->sline_real=(void*)sNodeBase_sline_real;
        _inf_value16->sname=(void*)sNodeBase_sname;
        _inf_value16->terminated=(void*)sNodeBase_terminated;
        _inf_value16->kind=(void*)sFalseNode_kind;
        _inf_value16->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value16)), "25obj.nc", 2080, 2475);
        come_call_finalizer(sFalseNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 2080, 2476);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2080, 2477):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2080, 2478):(void*)0);
        return __result_obj__0;
    }
    else if(!gComeC&&charp_operator_equals(buf,"delete")&&span$1char$p_operator_derefference(info->p)!=40) {
        __right_value0 = (void*)0;
        node=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "25obj.nc", 2083, 2479);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 2085, 2483, "struct sNode");
        _inf_obj_value17=(struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)(__right_value1=sDeleteNode_initialize((struct sDeleteNode* )come_increment_ref_count((struct sDeleteNode *)come_calloc(1, sizeof(struct sDeleteNode )*(1), "25obj.nc", 2085, 2480, "struct sDeleteNode* "), "25obj.nc", 2085, 2481),(struct sNode*)come_increment_ref_count(node, "25obj.nc", 2085, 2482),info))), "25obj.nc", 2085, 2484);
        _inf_value17->_protocol_obj=_inf_obj_value17;
        _inf_value17->finalize=(void*)sDeleteNode_finalize;
        _inf_value17->clone=(void*)sDeleteNode_clone;
        _inf_value17->compile=(void*)sDeleteNode_compile;
        _inf_value17->sline=(void*)sNodeBase_sline;
        _inf_value17->sline_real=(void*)sNodeBase_sline_real;
        _inf_value17->sname=(void*)sNodeBase_sname;
        _inf_value17->terminated=(void*)sNodeBase_terminated;
        _inf_value17->kind=(void*)sDeleteNode_kind;
        _inf_value17->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value17)), "25obj.nc", 2085, 2493);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2085, 2494):(void*)0);
        come_call_finalizer(sDeleteNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 2085, 2495);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2085, 2496):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2085, 2497):(void*)0);
        return __result_obj__0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2712, 2498):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(buf,"borrow")&&span$1char$p_operator_derefference(info->p)!=40) {
        __right_value0 = (void*)0;
        node_76=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "25obj.nc", 2088, 2499);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 2090, 2503, "struct sNode");
        _inf_obj_value18=(struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)(__right_value1=sBorrowNode_initialize((struct sBorrowNode* )come_increment_ref_count((struct sBorrowNode *)come_calloc(1, sizeof(struct sBorrowNode )*(1), "25obj.nc", 2090, 2500, "struct sBorrowNode* "), "25obj.nc", 2090, 2501),(struct sNode*)come_increment_ref_count(node_76, "25obj.nc", 2090, 2502),info))), "25obj.nc", 2090, 2504);
        _inf_value18->_protocol_obj=_inf_obj_value18;
        _inf_value18->finalize=(void*)sBorrowNode_finalize;
        _inf_value18->clone=(void*)sBorrowNode_clone;
        _inf_value18->compile=(void*)sBorrowNode_compile;
        _inf_value18->sline=(void*)sNodeBase_sline;
        _inf_value18->sline_real=(void*)sNodeBase_sline_real;
        _inf_value18->sname=(void*)sNodeBase_sname;
        _inf_value18->terminated=(void*)sNodeBase_terminated;
        _inf_value18->kind=(void*)sBorrowNode_kind;
        _inf_value18->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value18)), "25obj.nc", 2090, 2513);
        ((node_76) ? node_76 = come_decrement_ref_count(node_76, ((struct sNode*)node_76)->finalize, ((struct sNode*)node_76)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2090, 2514):(void*)0);
        come_call_finalizer(sBorrowNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 2090, 2515);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2090, 2516):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2090, 2517):(void*)0);
        return __result_obj__0;
        ((node_76) ? node_76 = come_decrement_ref_count(node_76, ((struct sNode*)node_76)->finalize, ((struct sNode*)node_76)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2712, 2518):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(buf,"clone")&&span$1char$p_operator_derefference(info->p)!=40) {
        __right_value0 = (void*)0;
        node_77=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "25obj.nc", 2093, 2519);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 2095, 2523, "struct sNode");
        _inf_obj_value19=(struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)(__right_value1=sCloneNode_initialize((struct sCloneNode* )come_increment_ref_count((struct sCloneNode *)come_calloc(1, sizeof(struct sCloneNode )*(1), "25obj.nc", 2095, 2520, "struct sCloneNode* "), "25obj.nc", 2095, 2521),(struct sNode*)come_increment_ref_count(node_77, "25obj.nc", 2095, 2522),info))), "25obj.nc", 2095, 2524);
        _inf_value19->_protocol_obj=_inf_obj_value19;
        _inf_value19->finalize=(void*)sCloneNode_finalize;
        _inf_value19->clone=(void*)sCloneNode_clone;
        _inf_value19->compile=(void*)sCloneNode_compile;
        _inf_value19->sline=(void*)sNodeBase_sline;
        _inf_value19->sline_real=(void*)sNodeBase_sline_real;
        _inf_value19->sname=(void*)sNodeBase_sname;
        _inf_value19->terminated=(void*)sNodeBase_terminated;
        _inf_value19->kind=(void*)sCloneNode_kind;
        _inf_value19->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value19)), "25obj.nc", 2095, 2533);
        ((node_77) ? node_77 = come_decrement_ref_count(node_77, ((struct sNode*)node_77)->finalize, ((struct sNode*)node_77)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2095, 2534):(void*)0);
        come_call_finalizer(sCloneNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 2095, 2535);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2095, 2536):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2095, 2537):(void*)0);
        return __result_obj__0;
        ((node_77) ? node_77 = come_decrement_ref_count(node_77, ((struct sNode*)node_77)->finalize, ((struct sNode*)node_77)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2712, 2538):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(buf,"dupe")) {
        __right_value0 = (void*)0;
        node_78=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "25obj.nc", 2098, 2539);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 2100, 2543, "struct sNode");
        _inf_obj_value20=(struct sDupeNode*)come_increment_ref_count(((struct sDupeNode*)(__right_value1=sDupeNode_initialize((struct sDupeNode* )come_increment_ref_count((struct sDupeNode *)come_calloc(1, sizeof(struct sDupeNode )*(1), "25obj.nc", 2100, 2540, "struct sDupeNode* "), "25obj.nc", 2100, 2541),(struct sNode*)come_increment_ref_count(node_78, "25obj.nc", 2100, 2542),info))), "25obj.nc", 2100, 2544);
        _inf_value20->_protocol_obj=_inf_obj_value20;
        _inf_value20->finalize=(void*)sDupeNode_finalize;
        _inf_value20->clone=(void*)sDupeNode_clone;
        _inf_value20->compile=(void*)sDupeNode_compile;
        _inf_value20->sline=(void*)sNodeBase_sline;
        _inf_value20->sline_real=(void*)sNodeBase_sline_real;
        _inf_value20->sname=(void*)sNodeBase_sname;
        _inf_value20->terminated=(void*)sNodeBase_terminated;
        _inf_value20->kind=(void*)sDupeNode_kind;
        _inf_value20->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value20)), "25obj.nc", 2100, 2553);
        ((node_78) ? node_78 = come_decrement_ref_count(node_78, ((struct sNode*)node_78)->finalize, ((struct sNode*)node_78)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2100, 2554):(void*)0);
        come_call_finalizer(sDupeNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 2100, 2555);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2100, 2556):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2100, 2557):(void*)0);
        return __result_obj__0;
        ((node_78) ? node_78 = come_decrement_ref_count(node_78, ((struct sNode*)node_78)->finalize, ((struct sNode*)node_78)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2712, 2558):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(buf,"dummy_heap")) {
        __right_value0 = (void*)0;
        node_79=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "25obj.nc", 2103, 2559);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 2105, 2563, "struct sNode");
        _inf_obj_value21=(struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)(__right_value1=sDummyHeapNode_initialize((struct sDummyHeapNode* )come_increment_ref_count((struct sDummyHeapNode *)come_calloc(1, sizeof(struct sDummyHeapNode )*(1), "25obj.nc", 2105, 2560, "struct sDummyHeapNode* "), "25obj.nc", 2105, 2561),(struct sNode*)come_increment_ref_count(node_79, "25obj.nc", 2105, 2562),info))), "25obj.nc", 2105, 2564);
        _inf_value21->_protocol_obj=_inf_obj_value21;
        _inf_value21->finalize=(void*)sDummyHeapNode_finalize;
        _inf_value21->clone=(void*)sDummyHeapNode_clone;
        _inf_value21->compile=(void*)sDummyHeapNode_compile;
        _inf_value21->sline=(void*)sNodeBase_sline;
        _inf_value21->sline_real=(void*)sNodeBase_sline_real;
        _inf_value21->sname=(void*)sNodeBase_sname;
        _inf_value21->terminated=(void*)sNodeBase_terminated;
        _inf_value21->kind=(void*)sDummyHeapNode_kind;
        _inf_value21->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value21)), "25obj.nc", 2105, 2573);
        ((node_79) ? node_79 = come_decrement_ref_count(node_79, ((struct sNode*)node_79)->finalize, ((struct sNode*)node_79)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2105, 2574):(void*)0);
        come_call_finalizer(sDummyHeapNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 2105, 2575);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2105, 2576):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2105, 2577):(void*)0);
        return __result_obj__0;
        ((node_79) ? node_79 = come_decrement_ref_count(node_79, ((struct sNode*)node_79)->finalize, ((struct sNode*)node_79)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2712, 2578):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(buf,"gc_inc")&&span$1char$p_operator_derefference(info->p)==40) {
        info->p->p++;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        node_80=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "25obj.nc", 2111, 2579);
        expected_next_character(41,info);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 2115, 2583, "struct sNode");
        _inf_obj_value22=(struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)(__right_value1=sGCIncNode_initialize((struct sGCIncNode* )come_increment_ref_count((struct sGCIncNode *)come_calloc(1, sizeof(struct sGCIncNode )*(1), "25obj.nc", 2115, 2580, "struct sGCIncNode* "), "25obj.nc", 2115, 2581),(struct sNode*)come_increment_ref_count(node_80, "25obj.nc", 2115, 2582),info))), "25obj.nc", 2115, 2584);
        _inf_value22->_protocol_obj=_inf_obj_value22;
        _inf_value22->finalize=(void*)sGCIncNode_finalize;
        _inf_value22->clone=(void*)sGCIncNode_clone;
        _inf_value22->compile=(void*)sGCIncNode_compile;
        _inf_value22->sline=(void*)sNodeBase_sline;
        _inf_value22->sline_real=(void*)sNodeBase_sline_real;
        _inf_value22->sname=(void*)sNodeBase_sname;
        _inf_value22->terminated=(void*)sNodeBase_terminated;
        _inf_value22->kind=(void*)sGCIncNode_kind;
        _inf_value22->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value22)), "25obj.nc", 2115, 2593);
        ((node_80) ? node_80 = come_decrement_ref_count(node_80, ((struct sNode*)node_80)->finalize, ((struct sNode*)node_80)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2115, 2594):(void*)0);
        come_call_finalizer(sGCIncNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 2115, 2595);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2115, 2596):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2115, 2597):(void*)0);
        return __result_obj__0;
        ((node_80) ? node_80 = come_decrement_ref_count(node_80, ((struct sNode*)node_80)->finalize, ((struct sNode*)node_80)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2712, 2598):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(buf,"gc_dec")&&span$1char$p_operator_derefference(info->p)==40) {
        info->p->p++;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        node_81=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "25obj.nc", 2121, 2599);
        expected_next_character(41,info);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 2125, 2603, "struct sNode");
        _inf_obj_value23=(struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)(__right_value1=sGCDecNode_initialize((struct sGCDecNode* )come_increment_ref_count((struct sGCDecNode *)come_calloc(1, sizeof(struct sGCDecNode )*(1), "25obj.nc", 2125, 2600, "struct sGCDecNode* "), "25obj.nc", 2125, 2601),(struct sNode*)come_increment_ref_count(node_81, "25obj.nc", 2125, 2602),info))), "25obj.nc", 2125, 2604);
        _inf_value23->_protocol_obj=_inf_obj_value23;
        _inf_value23->finalize=(void*)sGCDecNode_finalize;
        _inf_value23->clone=(void*)sGCDecNode_clone;
        _inf_value23->compile=(void*)sGCDecNode_compile;
        _inf_value23->sline=(void*)sNodeBase_sline;
        _inf_value23->sline_real=(void*)sNodeBase_sline_real;
        _inf_value23->sname=(void*)sNodeBase_sname;
        _inf_value23->terminated=(void*)sNodeBase_terminated;
        _inf_value23->kind=(void*)sGCDecNode_kind;
        _inf_value23->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value23)), "25obj.nc", 2125, 2613);
        ((node_81) ? node_81 = come_decrement_ref_count(node_81, ((struct sNode*)node_81)->finalize, ((struct sNode*)node_81)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2125, 2614):(void*)0);
        come_call_finalizer(sGCDecNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 2125, 2615);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2125, 2616):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2125, 2617):(void*)0);
        return __result_obj__0;
        ((node_81) ? node_81 = come_decrement_ref_count(node_81, ((struct sNode*)node_81)->finalize, ((struct sNode*)node_81)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2712, 2618):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(buf,"gc_dec_nofree")&&span$1char$p_operator_derefference(info->p)==40) {
        info->p->p++;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        node_82=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "25obj.nc", 2131, 2619);
        expected_next_character(41,info);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 2135, 2623, "struct sNode");
        _inf_obj_value24=(struct sGCDecNoFreeNode*)come_increment_ref_count(((struct sGCDecNoFreeNode*)(__right_value1=sGCDecNoFreeNode_initialize((struct sGCDecNoFreeNode* )come_increment_ref_count((struct sGCDecNoFreeNode *)come_calloc(1, sizeof(struct sGCDecNoFreeNode )*(1), "25obj.nc", 2135, 2620, "struct sGCDecNoFreeNode* "), "25obj.nc", 2135, 2621),(struct sNode*)come_increment_ref_count(node_82, "25obj.nc", 2135, 2622),info))), "25obj.nc", 2135, 2624);
        _inf_value24->_protocol_obj=_inf_obj_value24;
        _inf_value24->finalize=(void*)sGCDecNoFreeNode_finalize;
        _inf_value24->clone=(void*)sGCDecNoFreeNode_clone;
        _inf_value24->compile=(void*)sGCDecNoFreeNode_compile;
        _inf_value24->sline=(void*)sNodeBase_sline;
        _inf_value24->sline_real=(void*)sNodeBase_sline_real;
        _inf_value24->sname=(void*)sNodeBase_sname;
        _inf_value24->terminated=(void*)sNodeBase_terminated;
        _inf_value24->kind=(void*)sGCDecNoFreeNode_kind;
        _inf_value24->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value24)), "25obj.nc", 2135, 2633);
        ((node_82) ? node_82 = come_decrement_ref_count(node_82, ((struct sNode*)node_82)->finalize, ((struct sNode*)node_82)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2135, 2634):(void*)0);
        come_call_finalizer(sGCDecNoFreeNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 2135, 2635);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2135, 2636):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2135, 2637):(void*)0);
        return __result_obj__0;
        ((node_82) ? node_82 = come_decrement_ref_count(node_82, ((struct sNode*)node_82)->finalize, ((struct sNode*)node_82)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2712, 2638):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(buf,"lock")&&span$1char$p_operator_derefference(info->p)==40) {
        info->p->p++;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        node_83=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "25obj.nc", 2141, 2639);
        expected_next_character(41,info);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 2145, 2643, "struct sNode");
        _inf_obj_value25=(struct sGCDecNoFreeNode*)come_increment_ref_count(((struct sGCDecNoFreeNode*)(__right_value1=sGCDecNoFreeNode_initialize((struct sGCDecNoFreeNode* )come_increment_ref_count((struct sGCDecNoFreeNode *)come_calloc(1, sizeof(struct sGCDecNoFreeNode )*(1), "25obj.nc", 2145, 2640, "struct sGCDecNoFreeNode* "), "25obj.nc", 2145, 2641),(struct sNode*)come_increment_ref_count(node_83, "25obj.nc", 2145, 2642),info))), "25obj.nc", 2145, 2644);
        _inf_value25->_protocol_obj=_inf_obj_value25;
        _inf_value25->finalize=(void*)sGCDecNoFreeNode_finalize;
        _inf_value25->clone=(void*)sGCDecNoFreeNode_clone;
        _inf_value25->compile=(void*)sGCDecNoFreeNode_compile;
        _inf_value25->sline=(void*)sNodeBase_sline;
        _inf_value25->sline_real=(void*)sNodeBase_sline_real;
        _inf_value25->sname=(void*)sNodeBase_sname;
        _inf_value25->terminated=(void*)sNodeBase_terminated;
        _inf_value25->kind=(void*)sGCDecNoFreeNode_kind;
        _inf_value25->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value25)), "25obj.nc", 2145, 2645);
        ((node_83) ? node_83 = come_decrement_ref_count(node_83, ((struct sNode*)node_83)->finalize, ((struct sNode*)node_83)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2145, 2646):(void*)0);
        come_call_finalizer(sGCDecNoFreeNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 2145, 2647);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2145, 2648):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2145, 2649):(void*)0);
        return __result_obj__0;
        ((node_83) ? node_83 = come_decrement_ref_count(node_83, ((struct sNode*)node_83)->finalize, ((struct sNode*)node_83)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2712, 2650):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(buf,"isheap")&&span$1char$p_operator_derefference(info->p)==40) {
        info->p->p++;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        multiple_assign_var10=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        param_type=(struct sType* )come_increment_ref_count(multiple_assign_var10->v1, "25obj.nc", 2151, 2651);
        param_name=(char* )come_increment_ref_count(multiple_assign_var10->v2, "25obj.nc", 2151, 2652);
        err_84=multiple_assign_var10->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 2151, 2653);
        if(!err_84) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        __right_value0 = (void*)0;
        type2_=(struct sType* )come_increment_ref_count(solve_generics(param_type,info->generics_type,info), "25obj.nc", 2157, 2654);
        __right_value0 = (void*)0;
        type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "25obj.nc", 2158, 2655);
        expected_next_character(41,info);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 2162, 2658, "struct sNode");
        _inf_obj_value26=(struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)(__right_value1=sIsHeap_initialize((struct sIsHeap* )come_increment_ref_count((struct sIsHeap *)come_calloc(1, sizeof(struct sIsHeap )*(1), "25obj.nc", 2162, 2656, "struct sIsHeap* "), "25obj.nc", 2162, 2657),type2,info))), "25obj.nc", 2162, 2659);
        _inf_value26->_protocol_obj=_inf_obj_value26;
        _inf_value26->finalize=(void*)sIsHeap_finalize;
        _inf_value26->clone=(void*)sIsHeap_clone;
        _inf_value26->compile=(void*)sIsHeap_compile;
        _inf_value26->sline=(void*)sNodeBase_sline;
        _inf_value26->sline_real=(void*)sNodeBase_sline_real;
        _inf_value26->sname=(void*)sNodeBase_sname;
        _inf_value26->terminated=(void*)sNodeBase_terminated;
        _inf_value26->kind=(void*)sIsHeap_kind;
        _inf_value26->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value26)), "25obj.nc", 2162, 2668);
        come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 2162, 2669);
        (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 2162, 2670));
        come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 2162, 2671);
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 2162, 2672);
        come_call_finalizer(sIsHeap_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 2162, 2673);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2162, 2674):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2162, 2675):(void*)0);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 2712, 2676);
        (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 2712, 2677));
        come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 2712, 2678);
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 2712, 2679);
    }
    else if(charp_operator_equals(buf,"ispointer")&&span$1char$p_operator_derefference(info->p)==40) {
        info->p->p++;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        multiple_assign_var11=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        param_type_85=(struct sType* )come_increment_ref_count(multiple_assign_var11->v1, "25obj.nc", 2168, 2680);
        param_name_86=(char* )come_increment_ref_count(multiple_assign_var11->v2, "25obj.nc", 2168, 2681);
        err_87=multiple_assign_var11->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 2168, 2682);
        if(!err_87) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        __right_value0 = (void*)0;
        type2__88=(struct sType* )come_increment_ref_count(solve_generics(param_type_85,info->generics_type,info), "25obj.nc", 2174, 2683);
        __right_value0 = (void*)0;
        type2_89=(struct sType* )come_increment_ref_count(solve_method_generics(type2__88,info), "25obj.nc", 2175, 2684);
        expected_next_character(41,info);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 2179, 2687, "struct sNode");
        _inf_obj_value27=(struct sIsPointer*)come_increment_ref_count(((struct sIsPointer*)(__right_value1=sIsPointer_initialize((struct sIsPointer* )come_increment_ref_count((struct sIsPointer *)come_calloc(1, sizeof(struct sIsPointer )*(1), "25obj.nc", 2179, 2685, "struct sIsPointer* "), "25obj.nc", 2179, 2686),type2_89,info))), "25obj.nc", 2179, 2688);
        _inf_value27->_protocol_obj=_inf_obj_value27;
        _inf_value27->finalize=(void*)sIsPointer_finalize;
        _inf_value27->clone=(void*)sIsPointer_clone;
        _inf_value27->compile=(void*)sIsPointer_compile;
        _inf_value27->sline=(void*)sNodeBase_sline;
        _inf_value27->sline_real=(void*)sNodeBase_sline_real;
        _inf_value27->sname=(void*)sNodeBase_sname;
        _inf_value27->terminated=(void*)sNodeBase_terminated;
        _inf_value27->kind=(void*)sIsPointer_kind;
        _inf_value27->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value27)), "25obj.nc", 2179, 2697);
        come_call_finalizer(sType_finalize, param_type_85, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 2179, 2698);
        (param_name_86 = come_decrement_ref_count(param_name_86, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 2179, 2699));
        come_call_finalizer(sType_finalize, type2__88, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 2179, 2700);
        come_call_finalizer(sType_finalize, type2_89, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 2179, 2701);
        come_call_finalizer(sIsPointer_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 2179, 2702);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2179, 2703):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2179, 2704):(void*)0);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, param_type_85, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 2712, 2705);
        (param_name_86 = come_decrement_ref_count(param_name_86, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 2712, 2706));
        come_call_finalizer(sType_finalize, type2__88, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 2712, 2707);
        come_call_finalizer(sType_finalize, type2_89, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 2712, 2708);
    }
    else if(!gComeC&&charp_operator_equals(buf,"opt")&&span$1char$p_operator_derefference(info->p)!=60) {
        __right_value0 = (void*)0;
        node_90=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "25obj.nc", 2183, 2709);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 2185, 2713, "struct sNode");
        _inf_obj_value28=(struct sOptionalNode*)come_increment_ref_count(((struct sOptionalNode*)(__right_value1=sOptionalNode_initialize((struct sOptionalNode* )come_increment_ref_count((struct sOptionalNode *)come_calloc(1, sizeof(struct sOptionalNode )*(1), "25obj.nc", 2185, 2710, "struct sOptionalNode* "), "25obj.nc", 2185, 2711),(struct sNode*)come_increment_ref_count(node_90, "25obj.nc", 2185, 2712),info))), "25obj.nc", 2185, 2714);
        _inf_value28->_protocol_obj=_inf_obj_value28;
        _inf_value28->finalize=(void*)sOptionalNode_finalize;
        _inf_value28->clone=(void*)sOptionalNode_clone;
        _inf_value28->compile=(void*)sOptionalNode_compile;
        _inf_value28->sline=(void*)sNodeBase_sline;
        _inf_value28->sline_real=(void*)sNodeBase_sline_real;
        _inf_value28->sname=(void*)sNodeBase_sname;
        _inf_value28->terminated=(void*)sNodeBase_terminated;
        _inf_value28->kind=(void*)sOptionalNode_kind;
        _inf_value28->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value28)), "25obj.nc", 2185, 2723);
        ((node_90) ? node_90 = come_decrement_ref_count(node_90, ((struct sNode*)node_90)->finalize, ((struct sNode*)node_90)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2185, 2724):(void*)0);
        come_call_finalizer(sOptionalNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 2185, 2725);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2185, 2726):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2185, 2727):(void*)0);
        return __result_obj__0;
        ((node_90) ? node_90 = come_decrement_ref_count(node_90, ((struct sNode*)node_90)->finalize, ((struct sNode*)node_90)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2712, 2728):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(buf,"ref")&&span$1char$p_operator_derefference(info->p)!=60) {
        __right_value0 = (void*)0;
        node_91=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "25obj.nc", 2188, 2729);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 2190, 2733, "struct sNode");
        _inf_obj_value29=(struct sRefNode*)come_increment_ref_count(((struct sRefNode*)(__right_value1=sRefNode_initialize((struct sRefNode* )come_increment_ref_count((struct sRefNode *)come_calloc(1, sizeof(struct sRefNode )*(1), "25obj.nc", 2190, 2730, "struct sRefNode* "), "25obj.nc", 2190, 2731),(struct sNode*)come_increment_ref_count(node_91, "25obj.nc", 2190, 2732),info))), "25obj.nc", 2190, 2734);
        _inf_value29->_protocol_obj=_inf_obj_value29;
        _inf_value29->finalize=(void*)sRefNode_finalize;
        _inf_value29->clone=(void*)sRefNode_clone;
        _inf_value29->compile=(void*)sRefNode_compile;
        _inf_value29->sline=(void*)sNodeBase_sline;
        _inf_value29->sline_real=(void*)sNodeBase_sline_real;
        _inf_value29->sname=(void*)sNodeBase_sname;
        _inf_value29->terminated=(void*)sNodeBase_terminated;
        _inf_value29->kind=(void*)sRefNode_kind;
        _inf_value29->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value29)), "25obj.nc", 2190, 2743);
        ((node_91) ? node_91 = come_decrement_ref_count(node_91, ((struct sNode*)node_91)->finalize, ((struct sNode*)node_91)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2190, 2744):(void*)0);
        come_call_finalizer(sRefNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 2190, 2745);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2190, 2746):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2190, 2747):(void*)0);
        return __result_obj__0;
        ((node_91) ? node_91 = come_decrement_ref_count(node_91, ((struct sNode*)node_91)->finalize, ((struct sNode*)node_91)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2712, 2748):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(buf,"span")&&span$1char$p_operator_derefference(info->p)!=60) {
        __right_value0 = (void*)0;
        node_92=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "25obj.nc", 2193, 2749);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 2195, 2753, "struct sNode");
        _inf_obj_value30=(struct sSpanNode*)come_increment_ref_count(((struct sSpanNode*)(__right_value1=sSpanNode_initialize((struct sSpanNode* )come_increment_ref_count((struct sSpanNode *)come_calloc(1, sizeof(struct sSpanNode )*(1), "25obj.nc", 2195, 2750, "struct sSpanNode* "), "25obj.nc", 2195, 2751),(struct sNode*)come_increment_ref_count(node_92, "25obj.nc", 2195, 2752),info))), "25obj.nc", 2195, 2754);
        _inf_value30->_protocol_obj=_inf_obj_value30;
        _inf_value30->finalize=(void*)sSpanNode_finalize;
        _inf_value30->clone=(void*)sSpanNode_clone;
        _inf_value30->compile=(void*)sSpanNode_compile;
        _inf_value30->sline=(void*)sNodeBase_sline;
        _inf_value30->sline_real=(void*)sNodeBase_sline_real;
        _inf_value30->sname=(void*)sNodeBase_sname;
        _inf_value30->terminated=(void*)sNodeBase_terminated;
        _inf_value30->kind=(void*)sSpanNode_kind;
        _inf_value30->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value30)), "25obj.nc", 2195, 2763);
        ((node_92) ? node_92 = come_decrement_ref_count(node_92, ((struct sNode*)node_92)->finalize, ((struct sNode*)node_92)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2195, 2764):(void*)0);
        come_call_finalizer(sSpanNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 2195, 2765);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2195, 2766):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2195, 2767):(void*)0);
        return __result_obj__0;
        ((node_92) ? node_92 = come_decrement_ref_count(node_92, ((struct sNode*)node_92)->finalize, ((struct sNode*)node_92)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2712, 2768):(void*)0);
    }
    else if(charp_operator_equals(buf,"using")) {
        if(parsecmp("neo-c-pthread",info)) {
            info->p->p+=strlen("neo-c-pthread");
            skip_spaces_and_lf(info);
            gComePthread=(_Bool)1;
                        __right_value0 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))), "25obj.nc", 2204, 2769);
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2204, 2770):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2204, 2771):(void*)0);
            return __result_obj__0;
        }
        else if(parsecmp("comelang",info)) {
            info->p->p+=strlen("comelang");
            skip_spaces_and_lf(info);
            gComelang=(_Bool)1;
                        __right_value0 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))), "25obj.nc", 2212, 2772);
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2212, 2773):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2212, 2774):(void*)0);
            return __result_obj__0;
        }
        else if(parsecmp("neo-c-net",info)) {
            info->p->p+=strlen("neo-c-net");
            skip_spaces_and_lf(info);
                        __right_value0 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))), "25obj.nc", 2218, 2775);
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2218, 2776):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2218, 2777):(void*)0);
            return __result_obj__0;
        }
        else if(parsecmp("neo-c",info)) {
            info->p->p+=strlen("neo-c");
            skip_spaces_and_lf(info);
            gComeC=(_Bool)0;
                        __right_value0 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))), "25obj.nc", 2226, 2778);
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2226, 2779):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2226, 2780):(void*)0);
            return __result_obj__0;
        }
        else if(parsecmp("c",info)||parsecmp("C",info)) {
            info->p->p+=strlen("c");
            skip_spaces_and_lf(info);
            come_c=gComeC;
            gComeC=(_Bool)1;
            if(span$1char$p_operator_derefference(info->p)==123) {
                __right_value0 = (void*)0;
                node_93=(struct sNode*)come_increment_ref_count(parse_normal_block((_Bool)1,(_Bool)0,info), "25obj.nc", 2236, 2781);
                gComeC=come_c;
                                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_93, "25obj.nc", 2240, 2782);
                ((node_93) ? node_93 = come_decrement_ref_count(node_93, ((struct sNode*)node_93)->finalize, ((struct sNode*)node_93)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2240, 2783):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2240, 2784):(void*)0);
                return __result_obj__0;
                ((node_93) ? node_93 = come_decrement_ref_count(node_93, ((struct sNode*)node_93)->finalize, ((struct sNode*)node_93)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2245, 2785):(void*)0);
            }
            else {
                                __right_value0 = (void*)0;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))), "25obj.nc", 2243, 2786);
                ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2243, 2787):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2243, 2788):(void*)0);
                return __result_obj__0;
            }
        }
        else if(parsecmp("unsafe",info)) {
            info->p->p+=strlen("unsafe");
            skip_spaces_and_lf(info);
            come_safe=gComeSafe;
            gComeSafe=(_Bool)0;
            if(span$1char$p_operator_derefference(info->p)==123) {
                __right_value0 = (void*)0;
                node_94=(struct sNode*)come_increment_ref_count(parse_normal_block((_Bool)0,(_Bool)1,info), "25obj.nc", 2254, 2789);
                gComeSafe=come_safe;
                                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_94, "25obj.nc", 2258, 2790);
                ((node_94) ? node_94 = come_decrement_ref_count(node_94, ((struct sNode*)node_94)->finalize, ((struct sNode*)node_94)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2258, 2791):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2258, 2792):(void*)0);
                return __result_obj__0;
                ((node_94) ? node_94 = come_decrement_ref_count(node_94, ((struct sNode*)node_94)->finalize, ((struct sNode*)node_94)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2263, 2793):(void*)0);
            }
            else {
                                __right_value0 = (void*)0;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))), "25obj.nc", 2261, 2794);
                ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2261, 2795):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2261, 2796):(void*)0);
                return __result_obj__0;
            }
        }
        else if(parsecmp("safe",info)) {
            info->p->p+=strlen("safe");
            skip_spaces_and_lf(info);
            come_safe_95=gComeSafe;
            gComeSafe=(_Bool)1;
            if(span$1char$p_operator_derefference(info->p)==123) {
                __right_value0 = (void*)0;
                node_96=(struct sNode*)come_increment_ref_count(parse_normal_block((_Bool)0,(_Bool)0,info), "25obj.nc", 2272, 2797);
                gComeSafe=come_safe_95;
                                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_96, "25obj.nc", 2276, 2798);
                ((node_96) ? node_96 = come_decrement_ref_count(node_96, ((struct sNode*)node_96)->finalize, ((struct sNode*)node_96)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2276, 2799):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2276, 2800):(void*)0);
                return __result_obj__0;
                ((node_96) ? node_96 = come_decrement_ref_count(node_96, ((struct sNode*)node_96)->finalize, ((struct sNode*)node_96)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2281, 2801):(void*)0);
            }
            else {
                                __right_value0 = (void*)0;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))), "25obj.nc", 2279, 2802);
                ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2279, 2803):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2279, 2804):(void*)0);
                return __result_obj__0;
            }
        }
        else {
            err_msg(info,"invalid using");
            exit(2);
        }
    }
    else if(charp_operator_equals(buf,"_Generic")&&span$1char$p_operator_derefference(info->p)==40) {
        info->p->p++;
        skip_spaces_and_lf(info);
        no_comma_97=info->no_comma;
        info->no_comma=(_Bool)1;
        __right_value0 = (void*)0;
        exp_98=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "25obj.nc", 2293, 2805);
        info->no_comma=no_comma_97;
        expected_next_character(44,info);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "25obj.nc", 2298, 2806, "struct list$1sType$ph*"), "25obj.nc", 2298, 2807)), "25obj.nc", 2298, 2808);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "25obj.nc", 2299, 2809, "struct list$1sNode$ph*"), "25obj.nc", 2299, 2810)), "25obj.nc", 2299, 2811);
        default_exp=((void*)0);
        while(1) {
            if(strncmp(info->p->p,"default",strlen("default"))==0) {
                info->p->p+=strlen("default");
                skip_spaces_and_lf(info);
                expected_next_character(58,info);
                no_comma_99=info->no_comma;
                info->no_comma=(_Bool)1;
                __right_value0 = (void*)0;
                __dec_obj228=default_exp,
                default_exp=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "25obj.nc", 2311, 2813);
                (__dec_obj228 ? __dec_obj228 = come_decrement_ref_count(__dec_obj228, ((struct sNode*)__dec_obj228)->finalize, ((struct sNode*)__dec_obj228)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 2311, 2812) :0);
                info->no_comma=no_comma_99;
            }
            else {
                __right_value0 = (void*)0;
                multiple_assign_var12=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_100=(struct sType* )come_increment_ref_count(multiple_assign_var12->v1, "25obj.nc", 2315, 2814);
                name_101=(char* )come_increment_ref_count(multiple_assign_var12->v2, "25obj.nc", 2315, 2815);
                err_102=multiple_assign_var12->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 2315, 2816);
                list$1sType$ph_add(types,(struct sType* )come_increment_ref_count(type_100, "25obj.nc", 2317, 2817));
                expected_next_character(58,info);
                no_comma_103=info->no_comma;
                info->no_comma=(_Bool)1;
                __right_value0 = (void*)0;
                node_104=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "25obj.nc", 2323, 2818);
                info->no_comma=no_comma_103;
                list$1sNode$ph_add(exps,(struct sNode*)come_increment_ref_count(node_104, "25obj.nc", 2326, 2819));
                come_call_finalizer(sType_finalize, type_100, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 2329, 2820);
                (name_101 = come_decrement_ref_count(name_101, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 2329, 2821));
                ((node_104) ? node_104 = come_decrement_ref_count(node_104, ((struct sNode*)node_104)->finalize, ((struct sNode*)node_104)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2329, 2822):(void*)0);
            }
            if(span$1char$p_operator_derefference(info->p)==44) {
                info->p->p++;
                skip_spaces_and_lf(info);
            }
            else if(span$1char$p_operator_derefference(info->p)==0) {
                err_msg(info,"invalid source end");
                exit(2);
            }
            else if(span$1char$p_operator_derefference(info->p)==41) {
                info->p->p++;
                skip_spaces_and_lf(info);
                break;
            }
        }
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 2344, 2829, "struct sNode");
        _inf_obj_value31=(struct sGeneric*)come_increment_ref_count(((struct sGeneric*)(__right_value1=sGeneric_initialize((struct sGeneric* )come_increment_ref_count((struct sGeneric *)come_calloc(1, sizeof(struct sGeneric )*(1), "25obj.nc", 2344, 2823, "struct sGeneric* "), "25obj.nc", 2344, 2824),(struct sNode*)come_increment_ref_count(exp_98, "25obj.nc", 2344, 2825),(struct list$1sType$ph*)come_increment_ref_count(types, "25obj.nc", 2344, 2826),(struct list$1sNode$ph*)come_increment_ref_count(exps, "25obj.nc", 2344, 2827),(struct sNode*)come_increment_ref_count(default_exp, "25obj.nc", 2344, 2828),info))), "25obj.nc", 2344, 2830);
        _inf_value31->_protocol_obj=_inf_obj_value31;
        _inf_value31->finalize=(void*)sGeneric_finalize;
        _inf_value31->clone=(void*)sGeneric_clone;
        _inf_value31->compile=(void*)sGeneric_compile;
        _inf_value31->sline=(void*)sNodeBase_sline;
        _inf_value31->sline_real=(void*)sNodeBase_sline_real;
        _inf_value31->sname=(void*)sNodeBase_sname;
        _inf_value31->terminated=(void*)sNodeBase_terminated;
        _inf_value31->kind=(void*)sGeneric_kind;
        _inf_value31->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value31)), "25obj.nc", 2344, 2845);
        ((exp_98) ? exp_98 = come_decrement_ref_count(exp_98, ((struct sNode*)exp_98)->finalize, ((struct sNode*)exp_98)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2344, 2846):(void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 2344, 2847);
        come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 2344, 2848);
        ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2344, 2849):(void*)0);
        come_call_finalizer(sGeneric_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 2344, 2850);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2344, 2851):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2344, 2852):(void*)0);
        return __result_obj__0;
        ((exp_98) ? exp_98 = come_decrement_ref_count(exp_98, ((struct sNode*)exp_98)->finalize, ((struct sNode*)exp_98)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2712, 2853):(void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 2712, 2854);
        come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 2712, 2855);
        ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2712, 2856):(void*)0);
    }
    else if(charp_operator_equals(buf,"offsetof")||charp_operator_equals(buf,"__builtin_offsetof")) {
        expected_next_character(40,info);
        info->in_offsetof=(_Bool)1;
        __right_value0 = (void*)0;
        multiple_assign_var13=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
        type_105=(struct sType* )come_increment_ref_count(multiple_assign_var13->v1, "25obj.nc", 2350, 2857);
        name_106=(char* )come_increment_ref_count(multiple_assign_var13->v2, "25obj.nc", 2350, 2858);
        err_107=multiple_assign_var13->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 2350, 2859);
        info->in_offsetof=(_Bool)0;
        if(!err_107) {
            err_msg(info,"parse type");
            exit(2);
        }
        expected_next_character(44,info);
        __right_value0 = (void*)0;
        word_108=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "25obj.nc", 2360, 2860);
        expected_next_character(41,info);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 2364, 2864, "struct sNode");
        _inf_obj_value32=(struct sOffsetOf*)come_increment_ref_count(((struct sOffsetOf*)(__right_value1=sOffsetOf_initialize((struct sOffsetOf* )come_increment_ref_count((struct sOffsetOf *)come_calloc(1, sizeof(struct sOffsetOf )*(1), "25obj.nc", 2364, 2861, "struct sOffsetOf* "), "25obj.nc", 2364, 2862),type_105,(char* )come_increment_ref_count(word_108, "25obj.nc", 2364, 2863),info))), "25obj.nc", 2364, 2865);
        _inf_value32->_protocol_obj=_inf_obj_value32;
        _inf_value32->finalize=(void*)sOffsetOf_finalize;
        _inf_value32->clone=(void*)sOffsetOf_clone;
        _inf_value32->compile=(void*)sOffsetOf_compile;
        _inf_value32->sline=(void*)sNodeBase_sline;
        _inf_value32->sline_real=(void*)sNodeBase_sline_real;
        _inf_value32->sname=(void*)sNodeBase_sname;
        _inf_value32->terminated=(void*)sNodeBase_terminated;
        _inf_value32->kind=(void*)sOffsetOf_kind;
        _inf_value32->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value32)), "25obj.nc", 2364, 2877);
        come_call_finalizer(sType_finalize, type_105, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 2364, 2878);
        (name_106 = come_decrement_ref_count(name_106, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 2364, 2879));
        (word_108 = come_decrement_ref_count(word_108, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 2364, 2880));
        come_call_finalizer(sOffsetOf_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 2364, 2881);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2364, 2882):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2364, 2883):(void*)0);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, type_105, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 2712, 2884);
        (name_106 = come_decrement_ref_count(name_106, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 2712, 2885));
        (word_108 = come_decrement_ref_count(word_108, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 2712, 2886));
    }
    else if(charp_operator_equals(buf,"sizeof")) {
        paren=(_Bool)0;
        if(span$1char$p_operator_derefference(info->p)==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
            paren=(_Bool)1;
        }
        is_type_name_flag=(_Bool)0;
        {
            p=info->p->p;
            sline=info->sline;
            if(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
                __right_value0 = (void*)0;
                word_109=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "25obj.nc", 2382, 2887);
                if(is_type_name(word_109,info)) {
                    is_type_name_flag=(_Bool)1;
                }
                (word_109 = come_decrement_ref_count(word_109, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 2389, 2888));
            }
            info->p->p=p;
            info->sline=sline;
        }
        if(is_type_name_flag) {
            __right_value0 = (void*)0;
            multiple_assign_var14=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_110=(struct sType* )come_increment_ref_count(multiple_assign_var14->v1, "25obj.nc", 2394, 2889);
            name_111=(char* )come_increment_ref_count(multiple_assign_var14->v2, "25obj.nc", 2394, 2890);
            err_112=multiple_assign_var14->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 2394, 2891);
            if(!err_112) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(paren&&span$1char$p_operator_derefference(info->p)==41) {
                info->p->p++;
                skip_spaces_and_lf(info);
            }
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 2407, 2894, "struct sNode");
            _inf_obj_value33=(struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)(__right_value1=sSizeOfNode_initialize((struct sSizeOfNode* )come_increment_ref_count((struct sSizeOfNode *)come_calloc(1, sizeof(struct sSizeOfNode )*(1), "25obj.nc", 2407, 2892, "struct sSizeOfNode* "), "25obj.nc", 2407, 2893),type_110,info))), "25obj.nc", 2407, 2895);
            _inf_value33->_protocol_obj=_inf_obj_value33;
            _inf_value33->finalize=(void*)sSizeOfNode_finalize;
            _inf_value33->clone=(void*)sSizeOfNode_clone;
            _inf_value33->compile=(void*)sSizeOfNode_compile;
            _inf_value33->sline=(void*)sNodeBase_sline;
            _inf_value33->sline_real=(void*)sNodeBase_sline_real;
            _inf_value33->sname=(void*)sNodeBase_sname;
            _inf_value33->terminated=(void*)sNodeBase_terminated;
            _inf_value33->kind=(void*)sSizeOfNode_kind;
            _inf_value33->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value33)), "25obj.nc", 2407, 2904);
            come_call_finalizer(sType_finalize, type_110, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 2407, 2905);
            (name_111 = come_decrement_ref_count(name_111, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 2407, 2906));
            come_call_finalizer(sSizeOfNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 2407, 2907);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2407, 2908):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2407, 2909):(void*)0);
            return __result_obj__0;
            come_call_finalizer(sType_finalize, type_110, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 2430, 2910);
            (name_111 = come_decrement_ref_count(name_111, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 2430, 2911));
        }
        else {
            if(!paren) {
                no_comma_114=info->no_comma;
                info->no_comma=(_Bool)1;
                __right_value0 = (void*)0;
                __dec_obj239=exp_113,
                exp_113=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "25obj.nc", 2414, 2913);
                (__dec_obj239 ? __dec_obj239 = come_decrement_ref_count(__dec_obj239, ((struct sNode*)__dec_obj239)->finalize, ((struct sNode*)__dec_obj239)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 2414, 2912) :0);
                info->no_comma=no_comma_114;
            }
            else {
                __right_value0 = (void*)0;
                __dec_obj240=exp_113,
                exp_113=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "25obj.nc", 2418, 2915);
                (__dec_obj240 ? __dec_obj240 = come_decrement_ref_count(__dec_obj240, ((struct sNode*)__dec_obj240)->finalize, ((struct sNode*)__dec_obj240)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 2418, 2914) :0);
            }
            if(paren&&span$1char$p_operator_derefference(info->p)==41) {
                info->p->p++;
                skip_spaces_and_lf(info);
            }
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 2428, 2919, "struct sNode");
            _inf_obj_value34=(struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(__right_value1=sSizeOfExpNode_initialize((struct sSizeOfExpNode* )come_increment_ref_count((struct sSizeOfExpNode *)come_calloc(1, sizeof(struct sSizeOfExpNode )*(1), "25obj.nc", 2428, 2916, "struct sSizeOfExpNode* "), "25obj.nc", 2428, 2917),(struct sNode*)come_increment_ref_count(exp_113, "25obj.nc", 2428, 2918),info))), "25obj.nc", 2428, 2920);
            _inf_value34->_protocol_obj=_inf_obj_value34;
            _inf_value34->finalize=(void*)sSizeOfExpNode_finalize;
            _inf_value34->clone=(void*)sSizeOfExpNode_clone;
            _inf_value34->compile=(void*)sSizeOfExpNode_compile;
            _inf_value34->sline=(void*)sNodeBase_sline;
            _inf_value34->sline_real=(void*)sNodeBase_sline_real;
            _inf_value34->sname=(void*)sNodeBase_sname;
            _inf_value34->terminated=(void*)sNodeBase_terminated;
            _inf_value34->kind=(void*)sSizeOfExpNode_kind;
            _inf_value34->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value34)), "25obj.nc", 2428, 2921);
            ((exp_113) ? exp_113 = come_decrement_ref_count(exp_113, ((struct sNode*)exp_113)->finalize, ((struct sNode*)exp_113)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2428, 2922):(void*)0);
            come_call_finalizer(sSizeOfExpNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 2428, 2923);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2428, 2924):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2428, 2925):(void*)0);
            return __result_obj__0;
            ((exp_113) ? exp_113 = come_decrement_ref_count(exp_113, ((struct sNode*)exp_113)->finalize, ((struct sNode*)exp_113)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2430, 2926):(void*)0);
        }
    }
    else if(charp_operator_equals(buf,"dynamic_typeof")) {
        paren_115=(_Bool)0;
        if(span$1char$p_operator_derefference(info->p)==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
            paren_115=(_Bool)1;
        }
        if(!paren_115) {
            no_comma_117=info->no_comma;
            info->no_comma=(_Bool)1;
            __right_value0 = (void*)0;
            __dec_obj241=exp_116,
            exp_116=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "25obj.nc", 2513, 2928);
            (__dec_obj241 ? __dec_obj241 = come_decrement_ref_count(__dec_obj241, ((struct sNode*)__dec_obj241)->finalize, ((struct sNode*)__dec_obj241)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 2513, 2927) :0);
            info->no_comma=no_comma_117;
        }
        else {
            __right_value0 = (void*)0;
            __dec_obj242=exp_116,
            exp_116=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "25obj.nc", 2517, 2930);
            (__dec_obj242 ? __dec_obj242 = come_decrement_ref_count(__dec_obj242, ((struct sNode*)__dec_obj242)->finalize, ((struct sNode*)__dec_obj242)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 2517, 2929) :0);
        }
        if(paren_115&&span$1char$p_operator_derefference(info->p)==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 2527, 2934, "struct sNode");
        _inf_obj_value35=(struct sDynamicTypeOf*)come_increment_ref_count(((struct sDynamicTypeOf*)(__right_value1=sDynamicTypeOf_initialize((struct sDynamicTypeOf* )come_increment_ref_count((struct sDynamicTypeOf *)come_calloc(1, sizeof(struct sDynamicTypeOf )*(1), "25obj.nc", 2527, 2931, "struct sDynamicTypeOf* "), "25obj.nc", 2527, 2932),(struct sNode*)come_increment_ref_count(exp_116, "25obj.nc", 2527, 2933),info))), "25obj.nc", 2527, 2935);
        _inf_value35->_protocol_obj=_inf_obj_value35;
        _inf_value35->finalize=(void*)sDynamicTypeOf_finalize;
        _inf_value35->clone=(void*)sDynamicTypeOf_clone;
        _inf_value35->compile=(void*)sDynamicTypeOf_compile;
        _inf_value35->sline=(void*)sNodeBase_sline;
        _inf_value35->sline_real=(void*)sNodeBase_sline_real;
        _inf_value35->sname=(void*)sNodeBase_sname;
        _inf_value35->terminated=(void*)sNodeBase_terminated;
        _inf_value35->kind=(void*)sDynamicTypeOf_kind;
        _inf_value35->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value35)), "25obj.nc", 2527, 2944);
        ((exp_116) ? exp_116 = come_decrement_ref_count(exp_116, ((struct sNode*)exp_116)->finalize, ((struct sNode*)exp_116)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2527, 2945):(void*)0);
        come_call_finalizer(sDynamicTypeOf_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 2527, 2946);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2527, 2947):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2527, 2948):(void*)0);
        return __result_obj__0;
        ((exp_116) ? exp_116 = come_decrement_ref_count(exp_116, ((struct sNode*)exp_116)->finalize, ((struct sNode*)exp_116)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2712, 2949):(void*)0);
    }
    else if(charp_operator_equals(buf,"dynamic_sizeof")) {
        paren_118=(_Bool)0;
        if(span$1char$p_operator_derefference(info->p)==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
            paren_118=(_Bool)1;
        }
        if(!paren_118) {
            no_comma_120=info->no_comma;
            info->no_comma=(_Bool)1;
            __right_value0 = (void*)0;
            __dec_obj245=exp_119,
            exp_119=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "25obj.nc", 2543, 2951);
            (__dec_obj245 ? __dec_obj245 = come_decrement_ref_count(__dec_obj245, ((struct sNode*)__dec_obj245)->finalize, ((struct sNode*)__dec_obj245)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 2543, 2950) :0);
            info->no_comma=no_comma_120;
        }
        else {
            __right_value0 = (void*)0;
            __dec_obj246=exp_119,
            exp_119=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "25obj.nc", 2547, 2953);
            (__dec_obj246 ? __dec_obj246 = come_decrement_ref_count(__dec_obj246, ((struct sNode*)__dec_obj246)->finalize, ((struct sNode*)__dec_obj246)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 2547, 2952) :0);
        }
        if(paren_118&&span$1char$p_operator_derefference(info->p)==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value36=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 2557, 2957, "struct sNode");
        _inf_obj_value36=(struct sDynamicSizeOfExpNode*)come_increment_ref_count(((struct sDynamicSizeOfExpNode*)(__right_value1=sDynamicSizeOfExpNode_initialize((struct sDynamicSizeOfExpNode* )come_increment_ref_count((struct sDynamicSizeOfExpNode *)come_calloc(1, sizeof(struct sDynamicSizeOfExpNode )*(1), "25obj.nc", 2557, 2954, "struct sDynamicSizeOfExpNode* "), "25obj.nc", 2557, 2955),(struct sNode*)come_increment_ref_count(exp_119, "25obj.nc", 2557, 2956),info))), "25obj.nc", 2557, 2958);
        _inf_value36->_protocol_obj=_inf_obj_value36;
        _inf_value36->finalize=(void*)sDynamicSizeOfExpNode_finalize;
        _inf_value36->clone=(void*)sDynamicSizeOfExpNode_clone;
        _inf_value36->compile=(void*)sDynamicSizeOfExpNode_compile;
        _inf_value36->sline=(void*)sNodeBase_sline;
        _inf_value36->sline_real=(void*)sNodeBase_sline_real;
        _inf_value36->sname=(void*)sNodeBase_sname;
        _inf_value36->terminated=(void*)sNodeBase_terminated;
        _inf_value36->kind=(void*)sDynamicSizeOfExpNode_kind;
        _inf_value36->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value36)), "25obj.nc", 2557, 2959);
        ((exp_119) ? exp_119 = come_decrement_ref_count(exp_119, ((struct sNode*)exp_119)->finalize, ((struct sNode*)exp_119)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2557, 2960):(void*)0);
        come_call_finalizer(sDynamicSizeOfExpNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 2557, 2961);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2557, 2962):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2557, 2963):(void*)0);
        return __result_obj__0;
        ((exp_119) ? exp_119 = come_decrement_ref_count(exp_119, ((struct sNode*)exp_119)->finalize, ((struct sNode*)exp_119)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2712, 2964):(void*)0);
    }
    else if(charp_operator_equals(buf,"_Alignof")) {
        paren_121=(_Bool)0;
        if(span$1char$p_operator_derefference(info->p)==40) {
            paren_121=(_Bool)1;
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        is_type_name_flag_122=(_Bool)0;
        {
            p_123=info->p->p;
            sline_124=info->sline;
            if(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
                __right_value0 = (void*)0;
                word_125=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "25obj.nc", 2574, 2965);
                if(is_type_name(word_125,info)) {
                    is_type_name_flag_122=(_Bool)1;
                }
                (word_125 = come_decrement_ref_count(word_125, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 2581, 2966));
            }
            info->p->p=p_123;
            info->sline=sline_124;
        }
        if(is_type_name_flag_122) {
            __right_value0 = (void*)0;
            multiple_assign_var15=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_126=(struct sType* )come_increment_ref_count(multiple_assign_var15->v1, "25obj.nc", 2586, 2967);
            name_127=(char* )come_increment_ref_count(multiple_assign_var15->v2, "25obj.nc", 2586, 2968);
            err_128=multiple_assign_var15->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 2586, 2969);
            if(!err_128) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(paren_121&&span$1char$p_operator_derefference(info->p)==41) {
                info->p->p++;
                skip_spaces_and_lf(info);
            }
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value37=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 2597, 2972, "struct sNode");
            _inf_obj_value37=(struct sAlignOfNode*)come_increment_ref_count(((struct sAlignOfNode*)(__right_value1=sAlignOfNode_initialize((struct sAlignOfNode* )come_increment_ref_count((struct sAlignOfNode *)come_calloc(1, sizeof(struct sAlignOfNode )*(1), "25obj.nc", 2597, 2970, "struct sAlignOfNode* "), "25obj.nc", 2597, 2971),type_126,info))), "25obj.nc", 2597, 2973);
            _inf_value37->_protocol_obj=_inf_obj_value37;
            _inf_value37->finalize=(void*)sAlignOfNode_finalize;
            _inf_value37->clone=(void*)sAlignOfNode_clone;
            _inf_value37->compile=(void*)sAlignOfNode_compile;
            _inf_value37->sline=(void*)sNodeBase_sline;
            _inf_value37->sline_real=(void*)sNodeBase_sline_real;
            _inf_value37->sname=(void*)sNodeBase_sname;
            _inf_value37->terminated=(void*)sNodeBase_terminated;
            _inf_value37->kind=(void*)sAlignOfNode_kind;
            _inf_value37->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value37)), "25obj.nc", 2597, 2982);
            come_call_finalizer(sType_finalize, type_126, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 2597, 2983);
            (name_127 = come_decrement_ref_count(name_127, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 2597, 2984));
            come_call_finalizer(sAlignOfNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 2597, 2985);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2597, 2986):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2597, 2987):(void*)0);
            return __result_obj__0;
            come_call_finalizer(sType_finalize, type_126, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 2613, 2988);
            (name_127 = come_decrement_ref_count(name_127, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 2613, 2989));
        }
        else {
            if(!paren_121) {
                no_comma_130=info->no_comma;
                info->no_comma=(_Bool)1;
                __right_value0 = (void*)0;
                __dec_obj249=exp_129,
                exp_129=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "25obj.nc", 2604, 2991);
                (__dec_obj249 ? __dec_obj249 = come_decrement_ref_count(__dec_obj249, ((struct sNode*)__dec_obj249)->finalize, ((struct sNode*)__dec_obj249)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 2604, 2990) :0);
                info->no_comma=no_comma_130;
            }
            else {
                __right_value0 = (void*)0;
                __dec_obj250=exp_129,
                exp_129=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "25obj.nc", 2608, 2993);
                (__dec_obj250 ? __dec_obj250 = come_decrement_ref_count(__dec_obj250, ((struct sNode*)__dec_obj250)->finalize, ((struct sNode*)__dec_obj250)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 2608, 2992) :0);
            }
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value38=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 2611, 2997, "struct sNode");
            _inf_obj_value38=(struct sAlignOfExpNode*)come_increment_ref_count(((struct sAlignOfExpNode*)(__right_value1=sAlignOfExpNode_initialize((struct sAlignOfExpNode* )come_increment_ref_count((struct sAlignOfExpNode *)come_calloc(1, sizeof(struct sAlignOfExpNode )*(1), "25obj.nc", 2611, 2994, "struct sAlignOfExpNode* "), "25obj.nc", 2611, 2995),(struct sNode*)come_increment_ref_count(exp_129, "25obj.nc", 2611, 2996),info))), "25obj.nc", 2611, 2998);
            _inf_value38->_protocol_obj=_inf_obj_value38;
            _inf_value38->finalize=(void*)sAlignOfExpNode_finalize;
            _inf_value38->clone=(void*)sAlignOfExpNode_clone;
            _inf_value38->compile=(void*)sAlignOfExpNode_compile;
            _inf_value38->sline=(void*)sNodeBase_sline;
            _inf_value38->sline_real=(void*)sNodeBase_sline_real;
            _inf_value38->sname=(void*)sNodeBase_sname;
            _inf_value38->terminated=(void*)sNodeBase_terminated;
            _inf_value38->kind=(void*)sAlignOfExpNode_kind;
            _inf_value38->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value38)), "25obj.nc", 2611, 3007);
            ((exp_129) ? exp_129 = come_decrement_ref_count(exp_129, ((struct sNode*)exp_129)->finalize, ((struct sNode*)exp_129)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2611, 3008):(void*)0);
            come_call_finalizer(sAlignOfExpNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 2611, 3009);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2611, 3010):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2611, 3011):(void*)0);
            return __result_obj__0;
            ((exp_129) ? exp_129 = come_decrement_ref_count(exp_129, ((struct sNode*)exp_129)->finalize, ((struct sNode*)exp_129)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2613, 3012):(void*)0);
        }
    }
    else if(charp_operator_equals(buf,"__alignof__")) {
        paren_131=(_Bool)0;
        if(span$1char$p_operator_derefference(info->p)==40) {
            paren_131=(_Bool)1;
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        is_type_name_flag_132=(_Bool)0;
        {
            p_133=info->p->p;
            sline_134=info->sline;
            if(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
                __right_value0 = (void*)0;
                word_135=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "25obj.nc", 2629, 3013);
                if(is_type_name(word_135,info)) {
                    is_type_name_flag_132=(_Bool)1;
                }
                (word_135 = come_decrement_ref_count(word_135, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 2636, 3014));
            }
            info->p->p=p_133;
            info->sline=sline_134;
        }
        if(is_type_name_flag_132) {
            __right_value0 = (void*)0;
            multiple_assign_var16=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_136=(struct sType* )come_increment_ref_count(multiple_assign_var16->v1, "25obj.nc", 2641, 3015);
            name_137=(char* )come_increment_ref_count(multiple_assign_var16->v2, "25obj.nc", 2641, 3016);
            err_138=multiple_assign_var16->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 2641, 3017);
            if(!err_138) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(paren_131&&span$1char$p_operator_derefference(info->p)==41) {
                info->p->p++;
                skip_spaces_and_lf(info);
            }
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value39=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 2652, 3020, "struct sNode");
            _inf_obj_value39=(struct sAlignOfNode2*)come_increment_ref_count(((struct sAlignOfNode2*)(__right_value1=sAlignOfNode2_initialize((struct sAlignOfNode2* )come_increment_ref_count((struct sAlignOfNode2 *)come_calloc(1, sizeof(struct sAlignOfNode2 )*(1), "25obj.nc", 2652, 3018, "struct sAlignOfNode2* "), "25obj.nc", 2652, 3019),type_136,info))), "25obj.nc", 2652, 3021);
            _inf_value39->_protocol_obj=_inf_obj_value39;
            _inf_value39->finalize=(void*)sAlignOfNode2_finalize;
            _inf_value39->clone=(void*)sAlignOfNode2_clone;
            _inf_value39->compile=(void*)sAlignOfNode2_compile;
            _inf_value39->sline=(void*)sNodeBase_sline;
            _inf_value39->sline_real=(void*)sNodeBase_sline_real;
            _inf_value39->sname=(void*)sNodeBase_sname;
            _inf_value39->terminated=(void*)sNodeBase_terminated;
            _inf_value39->kind=(void*)sAlignOfNode2_kind;
            _inf_value39->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value39)), "25obj.nc", 2652, 3030);
            come_call_finalizer(sType_finalize, type_136, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 2652, 3031);
            (name_137 = come_decrement_ref_count(name_137, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 2652, 3032));
            come_call_finalizer(sAlignOfNode2_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 2652, 3033);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2652, 3034):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2652, 3035):(void*)0);
            return __result_obj__0;
            come_call_finalizer(sType_finalize, type_136, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 2668, 3036);
            (name_137 = come_decrement_ref_count(name_137, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 2668, 3037));
        }
        else {
            if(!paren_131) {
                no_comma_140=info->no_comma;
                info->no_comma=(_Bool)1;
                __right_value0 = (void*)0;
                __dec_obj255=exp_139,
                exp_139=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "25obj.nc", 2659, 3039);
                (__dec_obj255 ? __dec_obj255 = come_decrement_ref_count(__dec_obj255, ((struct sNode*)__dec_obj255)->finalize, ((struct sNode*)__dec_obj255)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 2659, 3038) :0);
                info->no_comma=no_comma_140;
            }
            else {
                __right_value0 = (void*)0;
                __dec_obj256=exp_139,
                exp_139=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "25obj.nc", 2663, 3041);
                (__dec_obj256 ? __dec_obj256 = come_decrement_ref_count(__dec_obj256, ((struct sNode*)__dec_obj256)->finalize, ((struct sNode*)__dec_obj256)->_protocol_obj, 0,0, (void*)0, "25obj.nc", 2663, 3040) :0);
            }
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value40=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 2666, 3045, "struct sNode");
            _inf_obj_value40=(struct sAlignOfExpNode2*)come_increment_ref_count(((struct sAlignOfExpNode2*)(__right_value1=sAlignOfExpNode2_initialize((struct sAlignOfExpNode2* )come_increment_ref_count((struct sAlignOfExpNode2 *)come_calloc(1, sizeof(struct sAlignOfExpNode2 )*(1), "25obj.nc", 2666, 3042, "struct sAlignOfExpNode2* "), "25obj.nc", 2666, 3043),(struct sNode*)come_increment_ref_count(exp_139, "25obj.nc", 2666, 3044),info))), "25obj.nc", 2666, 3046);
            _inf_value40->_protocol_obj=_inf_obj_value40;
            _inf_value40->finalize=(void*)sAlignOfExpNode2_finalize;
            _inf_value40->clone=(void*)sAlignOfExpNode2_clone;
            _inf_value40->compile=(void*)sAlignOfExpNode2_compile;
            _inf_value40->sline=(void*)sNodeBase_sline;
            _inf_value40->sline_real=(void*)sNodeBase_sline_real;
            _inf_value40->sname=(void*)sNodeBase_sname;
            _inf_value40->terminated=(void*)sNodeBase_terminated;
            _inf_value40->kind=(void*)sAlignOfExpNode2_kind;
            _inf_value40->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value40)), "25obj.nc", 2666, 3055);
            ((exp_139) ? exp_139 = come_decrement_ref_count(exp_139, ((struct sNode*)exp_139)->finalize, ((struct sNode*)exp_139)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2666, 3056):(void*)0);
            come_call_finalizer(sAlignOfExpNode2_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 2666, 3057);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2666, 3058):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2666, 3059):(void*)0);
            return __result_obj__0;
            ((exp_139) ? exp_139 = come_decrement_ref_count(exp_139, ((struct sNode*)exp_139)->finalize, ((struct sNode*)exp_139)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2668, 3060):(void*)0);
        }
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=string_node_v20(buf,head,head_sline,info))), "25obj.nc", 2712, 3061);
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2712, 3062):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2712, 3063):(void*)0);
    return __result_obj__0;
}

static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3sType$phchar$ph_Bool$$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize}", 2, 2220);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize", 3, 2221));
    }
            neo_current_frame = fr.prev;
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

static struct sDeferNode* sDeferNode_clone(struct sDeferNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDeferNode_clone"; neo_current_frame = &fr;
    struct sDeferNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sDeferNode*  result  ;
    char*  __dec_obj188  ;
    struct sBlock*  __dec_obj201  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sDeferNode* )come_increment_ref_count((struct sDeferNode *)come_calloc(1, sizeof(struct sDeferNode )*(1), "sDeferNode_clone", 5, 2314, "struct sDeferNode* "), "sDeferNode_clone", 5, 2315);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj188=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sDeferNode_clone", 7, 2316, "char* "), "sDeferNode_clone", 7, 2318);
        __dec_obj188 = come_decrement_ref_count(__dec_obj188, (void*)0, (void*)0, 0,0, (void*)0, "sDeferNode_clone", 7, 2317);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->block!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj201=result->block,
        result->block=(struct sBlock* )come_increment_ref_count(sBlock_clone(self->block), "sDeferNode_clone", 9, 2463);
        come_call_finalizer(sBlock_finalize, __dec_obj201,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sDeferNode_clone", 9, 2462);
    }
        __result_obj__0 = result;
    come_call_finalizer(sDeferNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sDeferNode_clone}", 10, 2464);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sBlock*  sBlock_clone(struct sBlock*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_clone"; neo_current_frame = &fr;
    struct sBlock*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sBlock*  result  ;
    struct list$1sNode$ph* __dec_obj189;
    struct sVarTable*  __dec_obj200  ;
    if(self==(void*)0) {
                __result_obj__0 = (struct sBlock* )come_increment_ref_count((void*)0, "sBlock_clone", 4, 2319);
        neo_current_frame = fr.prev;
        come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBlock_clone}", 4, 2320);
        return __result_obj__0;
    }
    result=(struct sBlock* )come_increment_ref_count((struct sBlock *)come_calloc(1, sizeof(struct sBlock )*(1), "sBlock_clone", 5, 2321, "struct sBlock* "), "sBlock_clone", 5, 2322);
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj189=result->mNodes,
        result->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mNodes), "sBlock_clone", 6, 2324);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj189,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_clone", 6, 2323);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj200=result->mVarTable,
        result->mVarTable=(struct sVarTable* )come_increment_ref_count(sVarTable_clone(self->mVarTable), "sBlock_clone", 7, 2458);
        come_call_finalizer(sVarTable_finalize, __dec_obj200,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_clone", 7, 2457);
    }
    if(self!=((void*)0)) {
        result->mOmitSemicolon=self->mOmitSemicolon;
    }
        __result_obj__0 = (struct sBlock* )come_increment_ref_count(result, "sBlock_clone", 9, 2459);
    come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBlock_clone}", 9, 2460);
    neo_current_frame = fr.prev;
    come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBlock_clone}", 9, 2461);
    return __result_obj__0;
}

static struct sVarTable*  sVarTable_clone(struct sVarTable*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVarTable_clone"; neo_current_frame = &fr;
    struct sVarTable*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sVarTable*  result  ;
    struct map$2char$phsVar$ph* __dec_obj199;
    if(self==(void*)0) {
                __result_obj__0 = (struct sVarTable* )come_increment_ref_count((void*)0, "sVarTable_clone", 4, 2325);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVarTable_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 4, 2326);
        return __result_obj__0;
    }
    result=(struct sVarTable* )come_increment_ref_count((struct sVarTable *)come_calloc(1, sizeof(struct sVarTable )*(1), "sVarTable_clone", 5, 2327, "struct sVarTable* "), "sVarTable_clone", 5, 2328);
    if(self!=((void*)0)&&self->mVars!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj199=result->mVars,
        result->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph$p_clone(self->mVars), "sVarTable_clone", 6, 2453);
        come_call_finalizer(map$2char$phsVar$ph_finalize, __dec_obj199,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sVarTable_clone", 6, 2452);
    }
    if(self!=((void*)0)) {
        result->mGlobal=self->mGlobal;
    }
    if(self!=((void*)0)) {
        result->mParent=self->mParent;
    }
        __result_obj__0 = (struct sVarTable* )come_increment_ref_count(result, "sVarTable_clone", 9, 2454);
    come_call_finalizer(sVarTable_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 9, 2455);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVarTable_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 9, 2456);
    return __result_obj__0;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_clone"; neo_current_frame = &fr;
    struct map$2char$phsVar$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct map$2char$phsVar$ph* result;
    struct list$1char$ph* __dec_obj191;
    char*  it  ;
    struct sVar*  default_value  ;
    struct sVar*  it2  ;
    if(self==((void*)0)) {
                __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 3071, 2329);
        neo_current_frame = fr.prev;
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3071, 2334);
        return __result_obj__0;
    }
    result=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc(1, sizeof(struct map$2char$phsVar$ph)*(1), "/usr/local/include/neo-c.h", 3074, 2335, "struct map$2char$phsVar$ph*"), "/usr/local/include/neo-c.h", 3074, 2349)), "/usr/local/include/neo-c.h", 3074, 2350);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj191=result->key_list,
    result->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 3076, 2351, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 3076, 2352)), "/usr/local/include/neo-c.h", 3076, 2354);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj191,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3076, 2353);
    for(it=map$2char$phsVar$ph_begin(self)    ;!map$2char$phsVar$ph_end(self);it=map$2char$phsVar$ph_next(self)){
        memset(&default_value,0,sizeof(struct sVar* ));
        __right_value0 = (void*)0;
        it2=(struct sVar* )come_increment_ref_count(map$2char$phsVar$ph_at(self,it,(struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3082, 2370),(_Bool)0), "/usr/local/include/neo-c.h", 3082, 2371);
        if(1&&1) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count((char* )come_memdup(it, "/usr/local/include/neo-c.h", 3085, 2415, "char* "), "/usr/local/include/neo-c.h", 3085, 2416),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "/usr/local/include/neo-c.h", 3085, 2435),(_Bool)0);
        }
        else if(1) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count((char* )come_memdup(it, "/usr/local/include/neo-c.h", 3088, 2436, "char* "), "/usr/local/include/neo-c.h", 3088, 2437),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "/usr/local/include/neo-c.h", 3088, 2438),(_Bool)0);
        }
        else if(1) {
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count(it, "/usr/local/include/neo-c.h", 3091, 2439),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "/usr/local/include/neo-c.h", 3091, 2440),(_Bool)0);
        }
        else {
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count(it, "/usr/local/include/neo-c.h", 3094, 2441),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "/usr/local/include/neo-c.h", 3094, 2442),(_Bool)0);
        }
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3098, 2443);
        come_call_finalizer(sVar_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3098, 2444);
    }
        __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 3098, 2445);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3098, 2446);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3098, 2447);
    return __result_obj__0;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_61;
    for(i=0    ;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3047, 2330);
            }
        }
    }
    come_free((char*)self->items);
    for(i_61=0    ;i_61<self->size;i_61++){
        if(self->item_existance[i_61]) {
            if(1) {
                (self->keys[i_61] = come_decrement_ref_count(self->keys[i_61], (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3056, 2331));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3062, 2332);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3064, 2333));
            neo_current_frame = fr.prev;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int i;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __dec_obj190;
    struct map$2char$phsVar$ph* __result_obj__0;
    self->keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(128)), "/usr/local/include/neo-c.h", 2997, 2336, "char** "))), "/usr/local/include/neo-c.h", 2997, 2337);
    __right_value0 = (void*)0;
    self->items=(struct sVar** )come_increment_ref_count(((struct sVar** )(__right_value0=(struct sVar* *)come_calloc(1, sizeof(struct sVar* )*(1*(128)), "/usr/local/include/neo-c.h", 2998, 2338, "struct sVar** "))), "/usr/local/include/neo-c.h", 2998, 2339);
    __right_value0 = (void*)0;
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/neo-c.h", 2999, 2340, "_Bool*"))), "/usr/local/include/neo-c.h", 2999, 2341);
    for(i=0    ;i<128;i++){
        self->item_existance[i]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __right_value0 = (void*)0;
    __dec_obj190=self->key_list,
    self->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 3009, 2342, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 3009, 2343)), "/usr/local/include/neo-c.h", 3009, 2345);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj190,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3009, 2344);
    self->it=0;
        __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 3013, 2346);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3013, 2347);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3013, 2348);
    return __result_obj__0;
}

static char*  map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_62  ;
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
    memset(&result_62,0,sizeof(char* ));
        __result_obj__0 = result_62;
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
    char*  result_63  ;
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
    memset(&result_63,0,sizeof(char* ));
        __result_obj__0 = result_63;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sVar*  map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char*  key  , struct sVar*  default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_at"; neo_current_frame = &fr;
    struct sVar*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3139, 2355);
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3139, 2356);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3139, 2357);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3150, 2358);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3150, 2359);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3150, 2360);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3159, 2361);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3159, 2362);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3159, 2363);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3163, 2364);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3163, 2365);
            neo_current_frame = fr.prev;
            come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3163, 2366);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3167, 2367);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3167, 2368);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3167, 2369);
    return __result_obj__0;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char*  key  , struct sVar*  item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_put"; neo_current_frame = &fr;
    struct map$2char$phsVar$ph* __result_obj__0;
    unsigned int hash;
    int it;
    _Bool same_key_exist;
    char*  it2  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3428, 2372));
        come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3428, 2373);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len*2>=self->size) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                if(1) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3443, 2388));
                    list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                    self->keys[it]=(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3445, 2393);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                    self->keys[it]=key;
                }
                if(1) {
                    come_call_finalizer(sVar_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3452, 2394);
                    self->items[it]=(struct sVar* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 3453, 2395);
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
                self->keys[it]=(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3475, 2396);
            }
            else {
                self->keys[it]=key;
            }
            if(1) {
                self->items[it]=(struct sVar* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 3481, 2397);
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
        list$1char$ph_push_back(self->key_list,(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3501, 2412));
    }
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3504, 2413));
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3504, 2414);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_rehash"; neo_current_frame = &fr;
    int size;
    void* __right_value0 = (void*)0;
    char**  keys  ;
    struct sVar**  items  ;
    _Bool* item_existance;
    int len;
    char*  it  ;
    struct sVar*  default_value  ;
    struct sVar*  it2  ;
    unsigned int hash;
    int n;
    struct sVar*  default_value_64  ;
    size=self->size*10;
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "/usr/local/include/neo-c.h", 3270, 2374, "char** "))), "/usr/local/include/neo-c.h", 3270, 2375);
    __right_value0 = (void*)0;
    items=(struct sVar** )come_increment_ref_count(((struct sVar** )(__right_value0=(struct sVar* *)come_calloc(1, sizeof(struct sVar* )*(1*(size)), "/usr/local/include/neo-c.h", 3271, 2376, "struct sVar** "))), "/usr/local/include/neo-c.h", 3271, 2377);
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/neo-c.h", 3272, 2378, "_Bool*"))), "/usr/local/include/neo-c.h", 3272, 2379);
    len=0;
    for(it=map$2char$phsVar$ph_begin(self)    ;!map$2char$phsVar$ph_end(self);it=map$2char$phsVar$ph_next(self)){
        memset(&default_value,0,sizeof(struct sVar* ));
        __right_value0 = (void*)0;
        it2=(struct sVar* )come_increment_ref_count(map$2char$phsVar$ph_at(self,it,(struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3279, 2380),(_Bool)0), "/usr/local/include/neo-c.h", 3279, 2381);
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
                memset(&default_value_64,0,sizeof(struct sVar* ));
                __right_value0 = (void*)0;
                items[n]=((struct sVar* )(__right_value0=map$2char$phsVar$ph_at(self,it,(struct sVar* )come_increment_ref_count(default_value_64, "/usr/local/include/neo-c.h", 3302, 2382),(_Bool)0)));
                len++;
                come_call_finalizer(sVar_finalize, default_value_64, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3305, 2383);
                break;
                come_call_finalizer(sVar_finalize, default_value_64, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3307, 2384);
            }
        }
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3310, 2385);
        come_call_finalizer(sVar_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3310, 2386);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3311, 2387));
    come_free((char*)self->keys);
    self->keys=keys;
    self->items=items;
    self->item_existance=item_existance;
    self->size=size;
    self->len=len;
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
    struct list_item$1char$ph* it_65;
    int i_66;
    struct list_item$1char$ph* prev_it_67;
    struct list_item$1char$ph* it_68;
    struct list_item$1char$ph* head_prev_it;
    struct list_item$1char$ph* tail_it;
    int i_69;
    struct list_item$1char$ph* prev_it_70;
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
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1932, 2390);
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
        it_65=self->head;
        i_66=0;
        while(it_65!=((void*)0)) {
            if(i_66==head) {
                self->tail=it_65->prev;
                self->tail->next=((void*)0);
            }
            if(i_66>=head) {
                prev_it_67=it_65;
                it_65=it_65->next;
                i_66++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_67, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1962, 2391);
                self->len--;
            }
            else {
                it_65=it_65->next;
                i_66++;
            }
        }
    }
    else {
        it_68=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_69=0;
        while(it_68!=((void*)0)) {
            if(i_69==head) {
                head_prev_it=it_68->prev;
            }
            if(i_69==tail) {
                tail_it=it_68;
            }
            if(i_69>=head&&i_69<tail) {
                prev_it_70=it_68;
                it_68=it_68->next;
                i_69++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_70, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1995, 2392);
                self->len--;
            }
            else {
                it_68=it_68->next;
                i_69++;
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1854, 2389);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static char*  list$1char$ph_begin(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_71  ;
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
    memset(&result_71,0,sizeof(char* ));
        __result_obj__0 = result_71;
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
    char*  result_72  ;
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
    memset(&result_72,0,sizeof(char* ));
        __result_obj__0 = result_72;
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
    struct list_item$1char$ph* litem_73;
    char*  __dec_obj193  ;
    struct list_item$1char$ph* litem_74;
    char*  __dec_obj194  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1613, 2398));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1617, 2399, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1617, 2400);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj192=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1621, 2402);
        __dec_obj192 = come_decrement_ref_count(__dec_obj192, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1621, 2401);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_73=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1627, 2403, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1627, 2404);
        litem_73->prev=self->head;
        litem_73->next=((void*)0);
        __dec_obj193=litem_73->item,
        litem_73->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1631, 2406);
        __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1631, 2405);
        self->tail=litem_73;
        self->head->next=litem_73;
    }
    else {
        __right_value0 = (void*)0;
        litem_74=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1637, 2407, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1637, 2408);
        litem_74->prev=self->tail;
        litem_74->next=((void*)0);
        __dec_obj194=litem_74->item,
        litem_74->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1641, 2410);
        __dec_obj194 = come_decrement_ref_count(__dec_obj194, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1641, 2409);
        self->tail->next=litem_74;
        self->tail=litem_74;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1649, 2411));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sVar*  sVar_clone(struct sVar*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_clone"; neo_current_frame = &fr;
    struct sVar*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sVar*  result  ;
    char*  __dec_obj195  ;
    char*  __dec_obj196  ;
    struct sType*  __dec_obj197  ;
    char*  __dec_obj198  ;
    if(self==(void*)0) {
                __result_obj__0 = (struct sVar* )come_increment_ref_count((void*)0, "sVar_clone", 4, 2417);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 4, 2418);
        return __result_obj__0;
    }
    result=(struct sVar* )come_increment_ref_count((struct sVar *)come_calloc(1, sizeof(struct sVar )*(1), "sVar_clone", 5, 2419, "struct sVar* "), "sVar_clone", 5, 2420);
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj195=result->mName,
        result->mName=(char* )come_increment_ref_count((char* )come_memdup(self->mName, "sVar_clone", 6, 2421, "char* "), "sVar_clone", 6, 2423);
        __dec_obj195 = come_decrement_ref_count(__dec_obj195, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 6, 2422);
    }
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj196=result->mCValueName,
        result->mCValueName=(char* )come_increment_ref_count((char* )come_memdup(self->mCValueName, "sVar_clone", 7, 2424, "char* "), "sVar_clone", 7, 2426);
        __dec_obj196 = come_decrement_ref_count(__dec_obj196, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 7, 2425);
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj197=result->mType,
        result->mType=(struct sType* )come_increment_ref_count(sType_clone(self->mType), "sVar_clone", 8, 2428);
        come_call_finalizer(sType_finalize, __dec_obj197,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_clone", 8, 2427);
    }
    if(self!=((void*)0)) {
        result->mGlobal=self->mGlobal;
    }
    if(self!=((void*)0)) {
        result->mAllocaValue=self->mAllocaValue;
    }
    if(self!=((void*)0)) {
        result->mNoFree=self->mNoFree;
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj198=result->mFunName,
        result->mFunName=(char* )come_increment_ref_count((char* )come_memdup(self->mFunName, "sVar_clone", 12, 2429, "char* "), "sVar_clone", 12, 2431);
        __dec_obj198 = come_decrement_ref_count(__dec_obj198, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 12, 2430);
    }
    if(self!=((void*)0)) {
        result->no_output_come_code=self->no_output_come_code;
    }
        __result_obj__0 = (struct sVar* )come_increment_ref_count(result, "sVar_clone", 14, 2432);
    come_call_finalizer(sVar_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 14, 2433);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 14, 2434);
    return __result_obj__0;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_finalize"; neo_current_frame = &fr;
    int i;
    int i_75;
    for(i=0    ;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3047, 2448);
            }
        }
    }
    come_free((char*)self->items);
    for(i_75=0    ;i_75<self->size;i_75++){
        if(self->item_existance[i_75]) {
            if(1) {
                (self->keys[i_75] = come_decrement_ref_count(self->keys[i_75], (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3056, 2449));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3062, 2450);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3064, 2451));
            neo_current_frame = fr.prev;
}

static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDeleteNode_clone"; neo_current_frame = &fr;
    struct sDeleteNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sDeleteNode*  result  ;
    char*  __dec_obj202  ;
    struct sNode* __dec_obj203;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sDeleteNode* )come_increment_ref_count((struct sDeleteNode *)come_calloc(1, sizeof(struct sDeleteNode )*(1), "sDeleteNode_clone", 5, 2485, "struct sDeleteNode* "), "sDeleteNode_clone", 5, 2486);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj202=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sDeleteNode_clone", 7, 2487, "char* "), "sDeleteNode_clone", 7, 2489);
        __dec_obj202 = come_decrement_ref_count(__dec_obj202, (void*)0, (void*)0, 0,0, (void*)0, "sDeleteNode_clone", 7, 2488);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj203=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node), "sDeleteNode_clone", 9, 2491);
        (__dec_obj203 ? __dec_obj203 = come_decrement_ref_count(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0,0, (void*)0, "sDeleteNode_clone", 9, 2490) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sDeleteNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sDeleteNode_clone}", 10, 2492);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBorrowNode_clone"; neo_current_frame = &fr;
    struct sBorrowNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sBorrowNode*  result  ;
    char*  __dec_obj204  ;
    struct sNode* __dec_obj205;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sBorrowNode* )come_increment_ref_count((struct sBorrowNode *)come_calloc(1, sizeof(struct sBorrowNode )*(1), "sBorrowNode_clone", 5, 2505, "struct sBorrowNode* "), "sBorrowNode_clone", 5, 2506);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj204=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sBorrowNode_clone", 7, 2507, "char* "), "sBorrowNode_clone", 7, 2509);
        __dec_obj204 = come_decrement_ref_count(__dec_obj204, (void*)0, (void*)0, 0,0, (void*)0, "sBorrowNode_clone", 7, 2508);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj205=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node), "sBorrowNode_clone", 9, 2511);
        (__dec_obj205 ? __dec_obj205 = come_decrement_ref_count(__dec_obj205, ((struct sNode*)__dec_obj205)->finalize, ((struct sNode*)__dec_obj205)->_protocol_obj, 0,0, (void*)0, "sBorrowNode_clone", 9, 2510) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sBorrowNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBorrowNode_clone}", 10, 2512);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCloneNode_clone"; neo_current_frame = &fr;
    struct sCloneNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sCloneNode*  result  ;
    char*  __dec_obj206  ;
    struct sNode* __dec_obj207;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sCloneNode* )come_increment_ref_count((struct sCloneNode *)come_calloc(1, sizeof(struct sCloneNode )*(1), "sCloneNode_clone", 5, 2525, "struct sCloneNode* "), "sCloneNode_clone", 5, 2526);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj206=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sCloneNode_clone", 7, 2527, "char* "), "sCloneNode_clone", 7, 2529);
        __dec_obj206 = come_decrement_ref_count(__dec_obj206, (void*)0, (void*)0, 0,0, (void*)0, "sCloneNode_clone", 7, 2528);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj207=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node), "sCloneNode_clone", 9, 2531);
        (__dec_obj207 ? __dec_obj207 = come_decrement_ref_count(__dec_obj207, ((struct sNode*)__dec_obj207)->finalize, ((struct sNode*)__dec_obj207)->_protocol_obj, 0,0, (void*)0, "sCloneNode_clone", 9, 2530) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sCloneNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sCloneNode_clone}", 10, 2532);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDupeNode_clone"; neo_current_frame = &fr;
    struct sDupeNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sDupeNode*  result  ;
    char*  __dec_obj208  ;
    struct sNode* __dec_obj209;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sDupeNode* )come_increment_ref_count((struct sDupeNode *)come_calloc(1, sizeof(struct sDupeNode )*(1), "sDupeNode_clone", 5, 2545, "struct sDupeNode* "), "sDupeNode_clone", 5, 2546);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj208=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sDupeNode_clone", 7, 2547, "char* "), "sDupeNode_clone", 7, 2549);
        __dec_obj208 = come_decrement_ref_count(__dec_obj208, (void*)0, (void*)0, 0,0, (void*)0, "sDupeNode_clone", 7, 2548);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj209=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node), "sDupeNode_clone", 9, 2551);
        (__dec_obj209 ? __dec_obj209 = come_decrement_ref_count(__dec_obj209, ((struct sNode*)__dec_obj209)->finalize, ((struct sNode*)__dec_obj209)->_protocol_obj, 0,0, (void*)0, "sDupeNode_clone", 9, 2550) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sDupeNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sDupeNode_clone}", 10, 2552);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDummyHeapNode_clone"; neo_current_frame = &fr;
    struct sDummyHeapNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sDummyHeapNode*  result  ;
    char*  __dec_obj210  ;
    struct sNode* __dec_obj211;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sDummyHeapNode* )come_increment_ref_count((struct sDummyHeapNode *)come_calloc(1, sizeof(struct sDummyHeapNode )*(1), "sDummyHeapNode_clone", 5, 2565, "struct sDummyHeapNode* "), "sDummyHeapNode_clone", 5, 2566);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj210=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sDummyHeapNode_clone", 7, 2567, "char* "), "sDummyHeapNode_clone", 7, 2569);
        __dec_obj210 = come_decrement_ref_count(__dec_obj210, (void*)0, (void*)0, 0,0, (void*)0, "sDummyHeapNode_clone", 7, 2568);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj211=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node), "sDummyHeapNode_clone", 9, 2571);
        (__dec_obj211 ? __dec_obj211 = come_decrement_ref_count(__dec_obj211, ((struct sNode*)__dec_obj211)->finalize, ((struct sNode*)__dec_obj211)->_protocol_obj, 0,0, (void*)0, "sDummyHeapNode_clone", 9, 2570) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sDummyHeapNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sDummyHeapNode_clone}", 10, 2572);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCIncNode_clone"; neo_current_frame = &fr;
    struct sGCIncNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sGCIncNode*  result  ;
    char*  __dec_obj212  ;
    struct sNode* __dec_obj213;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sGCIncNode* )come_increment_ref_count((struct sGCIncNode *)come_calloc(1, sizeof(struct sGCIncNode )*(1), "sGCIncNode_clone", 5, 2585, "struct sGCIncNode* "), "sGCIncNode_clone", 5, 2586);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj212=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sGCIncNode_clone", 7, 2587, "char* "), "sGCIncNode_clone", 7, 2589);
        __dec_obj212 = come_decrement_ref_count(__dec_obj212, (void*)0, (void*)0, 0,0, (void*)0, "sGCIncNode_clone", 7, 2588);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj213=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node), "sGCIncNode_clone", 9, 2591);
        (__dec_obj213 ? __dec_obj213 = come_decrement_ref_count(__dec_obj213, ((struct sNode*)__dec_obj213)->finalize, ((struct sNode*)__dec_obj213)->_protocol_obj, 0,0, (void*)0, "sGCIncNode_clone", 9, 2590) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sGCIncNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sGCIncNode_clone}", 10, 2592);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNode_clone"; neo_current_frame = &fr;
    struct sGCDecNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sGCDecNode*  result  ;
    char*  __dec_obj214  ;
    struct sNode* __dec_obj215;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sGCDecNode* )come_increment_ref_count((struct sGCDecNode *)come_calloc(1, sizeof(struct sGCDecNode )*(1), "sGCDecNode_clone", 5, 2605, "struct sGCDecNode* "), "sGCDecNode_clone", 5, 2606);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj214=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sGCDecNode_clone", 7, 2607, "char* "), "sGCDecNode_clone", 7, 2609);
        __dec_obj214 = come_decrement_ref_count(__dec_obj214, (void*)0, (void*)0, 0,0, (void*)0, "sGCDecNode_clone", 7, 2608);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj215=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node), "sGCDecNode_clone", 9, 2611);
        (__dec_obj215 ? __dec_obj215 = come_decrement_ref_count(__dec_obj215, ((struct sNode*)__dec_obj215)->finalize, ((struct sNode*)__dec_obj215)->_protocol_obj, 0,0, (void*)0, "sGCDecNode_clone", 9, 2610) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sGCDecNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sGCDecNode_clone}", 10, 2612);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sGCDecNoFreeNode* sGCDecNoFreeNode_clone(struct sGCDecNoFreeNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNoFreeNode_clone"; neo_current_frame = &fr;
    struct sGCDecNoFreeNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sGCDecNoFreeNode*  result  ;
    char*  __dec_obj216  ;
    struct sNode* __dec_obj217;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sGCDecNoFreeNode* )come_increment_ref_count((struct sGCDecNoFreeNode *)come_calloc(1, sizeof(struct sGCDecNoFreeNode )*(1), "sGCDecNoFreeNode_clone", 5, 2625, "struct sGCDecNoFreeNode* "), "sGCDecNoFreeNode_clone", 5, 2626);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj216=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sGCDecNoFreeNode_clone", 7, 2627, "char* "), "sGCDecNoFreeNode_clone", 7, 2629);
        __dec_obj216 = come_decrement_ref_count(__dec_obj216, (void*)0, (void*)0, 0,0, (void*)0, "sGCDecNoFreeNode_clone", 7, 2628);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj217=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node), "sGCDecNoFreeNode_clone", 9, 2631);
        (__dec_obj217 ? __dec_obj217 = come_decrement_ref_count(__dec_obj217, ((struct sNode*)__dec_obj217)->finalize, ((struct sNode*)__dec_obj217)->_protocol_obj, 0,0, (void*)0, "sGCDecNoFreeNode_clone", 9, 2630) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sGCDecNoFreeNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sGCDecNoFreeNode_clone}", 10, 2632);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIsHeap_clone"; neo_current_frame = &fr;
    struct sIsHeap* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sIsHeap*  result  ;
    char*  __dec_obj218  ;
    struct sType*  __dec_obj219  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sIsHeap* )come_increment_ref_count((struct sIsHeap *)come_calloc(1, sizeof(struct sIsHeap )*(1), "sIsHeap_clone", 5, 2660, "struct sIsHeap* "), "sIsHeap_clone", 5, 2661);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj218=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sIsHeap_clone", 7, 2662, "char* "), "sIsHeap_clone", 7, 2664);
        __dec_obj218 = come_decrement_ref_count(__dec_obj218, (void*)0, (void*)0, 0,0, (void*)0, "sIsHeap_clone", 7, 2663);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj219=result->type,
        result->type=(struct sType* )come_increment_ref_count(sType_clone(self->type), "sIsHeap_clone", 9, 2666);
        come_call_finalizer(sType_finalize, __dec_obj219,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sIsHeap_clone", 9, 2665);
    }
        __result_obj__0 = result;
    come_call_finalizer(sIsHeap_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sIsHeap_clone}", 10, 2667);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIsPointer_clone"; neo_current_frame = &fr;
    struct sIsPointer* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sIsPointer*  result  ;
    char*  __dec_obj220  ;
    struct sType*  __dec_obj221  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sIsPointer* )come_increment_ref_count((struct sIsPointer *)come_calloc(1, sizeof(struct sIsPointer )*(1), "sIsPointer_clone", 5, 2689, "struct sIsPointer* "), "sIsPointer_clone", 5, 2690);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj220=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sIsPointer_clone", 7, 2691, "char* "), "sIsPointer_clone", 7, 2693);
        __dec_obj220 = come_decrement_ref_count(__dec_obj220, (void*)0, (void*)0, 0,0, (void*)0, "sIsPointer_clone", 7, 2692);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj221=result->type,
        result->type=(struct sType* )come_increment_ref_count(sType_clone(self->type), "sIsPointer_clone", 9, 2695);
        come_call_finalizer(sType_finalize, __dec_obj221,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sIsPointer_clone", 9, 2694);
    }
        __result_obj__0 = result;
    come_call_finalizer(sIsPointer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sIsPointer_clone}", 10, 2696);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sOptionalNode* sOptionalNode_clone(struct sOptionalNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOptionalNode_clone"; neo_current_frame = &fr;
    struct sOptionalNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sOptionalNode*  result  ;
    char*  __dec_obj222  ;
    struct sNode* __dec_obj223;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sOptionalNode* )come_increment_ref_count((struct sOptionalNode *)come_calloc(1, sizeof(struct sOptionalNode )*(1), "sOptionalNode_clone", 5, 2715, "struct sOptionalNode* "), "sOptionalNode_clone", 5, 2716);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj222=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sOptionalNode_clone", 7, 2717, "char* "), "sOptionalNode_clone", 7, 2719);
        __dec_obj222 = come_decrement_ref_count(__dec_obj222, (void*)0, (void*)0, 0,0, (void*)0, "sOptionalNode_clone", 7, 2718);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj223=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node), "sOptionalNode_clone", 9, 2721);
        (__dec_obj223 ? __dec_obj223 = come_decrement_ref_count(__dec_obj223, ((struct sNode*)__dec_obj223)->finalize, ((struct sNode*)__dec_obj223)->_protocol_obj, 0,0, (void*)0, "sOptionalNode_clone", 9, 2720) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sOptionalNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sOptionalNode_clone}", 10, 2722);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sRefNode* sRefNode_clone(struct sRefNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRefNode_clone"; neo_current_frame = &fr;
    struct sRefNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sRefNode*  result  ;
    char*  __dec_obj224  ;
    struct sNode* __dec_obj225;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sRefNode* )come_increment_ref_count((struct sRefNode *)come_calloc(1, sizeof(struct sRefNode )*(1), "sRefNode_clone", 5, 2735, "struct sRefNode* "), "sRefNode_clone", 5, 2736);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj224=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sRefNode_clone", 7, 2737, "char* "), "sRefNode_clone", 7, 2739);
        __dec_obj224 = come_decrement_ref_count(__dec_obj224, (void*)0, (void*)0, 0,0, (void*)0, "sRefNode_clone", 7, 2738);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj225=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node), "sRefNode_clone", 9, 2741);
        (__dec_obj225 ? __dec_obj225 = come_decrement_ref_count(__dec_obj225, ((struct sNode*)__dec_obj225)->finalize, ((struct sNode*)__dec_obj225)->_protocol_obj, 0,0, (void*)0, "sRefNode_clone", 9, 2740) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sRefNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sRefNode_clone}", 10, 2742);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sSpanNode* sSpanNode_clone(struct sSpanNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSpanNode_clone"; neo_current_frame = &fr;
    struct sSpanNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sSpanNode*  result  ;
    char*  __dec_obj226  ;
    struct sNode* __dec_obj227;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sSpanNode* )come_increment_ref_count((struct sSpanNode *)come_calloc(1, sizeof(struct sSpanNode )*(1), "sSpanNode_clone", 5, 2755, "struct sSpanNode* "), "sSpanNode_clone", 5, 2756);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj226=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sSpanNode_clone", 7, 2757, "char* "), "sSpanNode_clone", 7, 2759);
        __dec_obj226 = come_decrement_ref_count(__dec_obj226, (void*)0, (void*)0, 0,0, (void*)0, "sSpanNode_clone", 7, 2758);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj227=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node), "sSpanNode_clone", 9, 2761);
        (__dec_obj227 ? __dec_obj227 = come_decrement_ref_count(__dec_obj227, ((struct sNode*)__dec_obj227)->finalize, ((struct sNode*)__dec_obj227)->_protocol_obj, 0,0, (void*)0, "sSpanNode_clone", 9, 2760) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sSpanNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sSpanNode_clone}", 10, 2762);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sGeneric* sGeneric_clone(struct sGeneric* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGeneric_clone"; neo_current_frame = &fr;
    struct sGeneric* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sGeneric*  result  ;
    char*  __dec_obj229  ;
    struct sNode* __dec_obj230;
    struct list$1sType$ph* __dec_obj231;
    struct list$1sNode$ph* __dec_obj232;
    struct sNode* __dec_obj233;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sGeneric* )come_increment_ref_count((struct sGeneric *)come_calloc(1, sizeof(struct sGeneric )*(1), "sGeneric_clone", 5, 2831, "struct sGeneric* "), "sGeneric_clone", 5, 2832);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj229=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sGeneric_clone", 7, 2833, "char* "), "sGeneric_clone", 7, 2835);
        __dec_obj229 = come_decrement_ref_count(__dec_obj229, (void*)0, (void*)0, 0,0, (void*)0, "sGeneric_clone", 7, 2834);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj230=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp), "sGeneric_clone", 9, 2837);
        (__dec_obj230 ? __dec_obj230 = come_decrement_ref_count(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0,0, (void*)0, "sGeneric_clone", 9, 2836) :0);
    }
    if(self!=((void*)0)&&self->types!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj231=result->types,
        result->types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->types), "sGeneric_clone", 10, 2839);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj231,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sGeneric_clone", 10, 2838);
    }
    if(self!=((void*)0)&&self->exps!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj232=result->exps,
        result->exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->exps), "sGeneric_clone", 11, 2841);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj232,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sGeneric_clone", 11, 2840);
    }
    if(self!=((void*)0)&&self->default_exp!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj233=result->default_exp,
        result->default_exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->default_exp), "sGeneric_clone", 12, 2843);
        (__dec_obj233 ? __dec_obj233 = come_decrement_ref_count(__dec_obj233, ((struct sNode*)__dec_obj233)->finalize, ((struct sNode*)__dec_obj233)->_protocol_obj, 0,0, (void*)0, "sGeneric_clone", 12, 2842) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sGeneric_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sGeneric_clone}", 13, 2844);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sOffsetOf* sOffsetOf_clone(struct sOffsetOf* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOffsetOf_clone"; neo_current_frame = &fr;
    struct sOffsetOf* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sOffsetOf*  result  ;
    char*  __dec_obj234  ;
    struct sType*  __dec_obj235  ;
    char*  __dec_obj236  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sOffsetOf* )come_increment_ref_count((struct sOffsetOf *)come_calloc(1, sizeof(struct sOffsetOf )*(1), "sOffsetOf_clone", 5, 2866, "struct sOffsetOf* "), "sOffsetOf_clone", 5, 2867);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj234=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sOffsetOf_clone", 7, 2868, "char* "), "sOffsetOf_clone", 7, 2870);
        __dec_obj234 = come_decrement_ref_count(__dec_obj234, (void*)0, (void*)0, 0,0, (void*)0, "sOffsetOf_clone", 7, 2869);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj235=result->type,
        result->type=(struct sType* )come_increment_ref_count(sType_clone(self->type), "sOffsetOf_clone", 9, 2872);
        come_call_finalizer(sType_finalize, __dec_obj235,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sOffsetOf_clone", 9, 2871);
    }
    if(self!=((void*)0)&&self->name!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj236=result->name,
        result->name=(char* )come_increment_ref_count((char* )come_memdup(self->name, "sOffsetOf_clone", 10, 2873, "char* "), "sOffsetOf_clone", 10, 2875);
        __dec_obj236 = come_decrement_ref_count(__dec_obj236, (void*)0, (void*)0, 0,0, (void*)0, "sOffsetOf_clone", 10, 2874);
    }
        __result_obj__0 = result;
    come_call_finalizer(sOffsetOf_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sOffsetOf_clone}", 11, 2876);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfNode_clone"; neo_current_frame = &fr;
    struct sSizeOfNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sSizeOfNode*  result  ;
    char*  __dec_obj237  ;
    struct sType*  __dec_obj238  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sSizeOfNode* )come_increment_ref_count((struct sSizeOfNode *)come_calloc(1, sizeof(struct sSizeOfNode )*(1), "sSizeOfNode_clone", 5, 2896, "struct sSizeOfNode* "), "sSizeOfNode_clone", 5, 2897);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj237=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sSizeOfNode_clone", 7, 2898, "char* "), "sSizeOfNode_clone", 7, 2900);
        __dec_obj237 = come_decrement_ref_count(__dec_obj237, (void*)0, (void*)0, 0,0, (void*)0, "sSizeOfNode_clone", 7, 2899);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj238=result->type,
        result->type=(struct sType* )come_increment_ref_count(sType_clone(self->type), "sSizeOfNode_clone", 9, 2902);
        come_call_finalizer(sType_finalize, __dec_obj238,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sSizeOfNode_clone", 9, 2901);
    }
        __result_obj__0 = result;
    come_call_finalizer(sSizeOfNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sSizeOfNode_clone}", 10, 2903);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sDynamicTypeOf* sDynamicTypeOf_clone(struct sDynamicTypeOf* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicTypeOf_clone"; neo_current_frame = &fr;
    struct sDynamicTypeOf* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sDynamicTypeOf*  result  ;
    char*  __dec_obj243  ;
    struct sNode* __dec_obj244;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sDynamicTypeOf* )come_increment_ref_count((struct sDynamicTypeOf *)come_calloc(1, sizeof(struct sDynamicTypeOf )*(1), "sDynamicTypeOf_clone", 5, 2936, "struct sDynamicTypeOf* "), "sDynamicTypeOf_clone", 5, 2937);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj243=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sDynamicTypeOf_clone", 7, 2938, "char* "), "sDynamicTypeOf_clone", 7, 2940);
        __dec_obj243 = come_decrement_ref_count(__dec_obj243, (void*)0, (void*)0, 0,0, (void*)0, "sDynamicTypeOf_clone", 7, 2939);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj244=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp), "sDynamicTypeOf_clone", 9, 2942);
        (__dec_obj244 ? __dec_obj244 = come_decrement_ref_count(__dec_obj244, ((struct sNode*)__dec_obj244)->finalize, ((struct sNode*)__dec_obj244)->_protocol_obj, 0,0, (void*)0, "sDynamicTypeOf_clone", 9, 2941) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sDynamicTypeOf_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sDynamicTypeOf_clone}", 10, 2943);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode_clone"; neo_current_frame = &fr;
    struct sAlignOfNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sAlignOfNode*  result  ;
    char*  __dec_obj247  ;
    struct sType*  __dec_obj248  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sAlignOfNode* )come_increment_ref_count((struct sAlignOfNode *)come_calloc(1, sizeof(struct sAlignOfNode )*(1), "sAlignOfNode_clone", 5, 2974, "struct sAlignOfNode* "), "sAlignOfNode_clone", 5, 2975);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj247=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sAlignOfNode_clone", 7, 2976, "char* "), "sAlignOfNode_clone", 7, 2978);
        __dec_obj247 = come_decrement_ref_count(__dec_obj247, (void*)0, (void*)0, 0,0, (void*)0, "sAlignOfNode_clone", 7, 2977);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj248=result->type,
        result->type=(struct sType* )come_increment_ref_count(sType_clone(self->type), "sAlignOfNode_clone", 9, 2980);
        come_call_finalizer(sType_finalize, __dec_obj248,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sAlignOfNode_clone", 9, 2979);
    }
        __result_obj__0 = result;
    come_call_finalizer(sAlignOfNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sAlignOfNode_clone}", 10, 2981);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode_clone"; neo_current_frame = &fr;
    struct sAlignOfExpNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sAlignOfExpNode*  result  ;
    char*  __dec_obj251  ;
    struct sNode* __dec_obj252;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sAlignOfExpNode* )come_increment_ref_count((struct sAlignOfExpNode *)come_calloc(1, sizeof(struct sAlignOfExpNode )*(1), "sAlignOfExpNode_clone", 5, 2999, "struct sAlignOfExpNode* "), "sAlignOfExpNode_clone", 5, 3000);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj251=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sAlignOfExpNode_clone", 7, 3001, "char* "), "sAlignOfExpNode_clone", 7, 3003);
        __dec_obj251 = come_decrement_ref_count(__dec_obj251, (void*)0, (void*)0, 0,0, (void*)0, "sAlignOfExpNode_clone", 7, 3002);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj252=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp), "sAlignOfExpNode_clone", 9, 3005);
        (__dec_obj252 ? __dec_obj252 = come_decrement_ref_count(__dec_obj252, ((struct sNode*)__dec_obj252)->finalize, ((struct sNode*)__dec_obj252)->_protocol_obj, 0,0, (void*)0, "sAlignOfExpNode_clone", 9, 3004) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sAlignOfExpNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sAlignOfExpNode_clone}", 10, 3006);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode2_clone"; neo_current_frame = &fr;
    struct sAlignOfNode2* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sAlignOfNode2*  result  ;
    char*  __dec_obj253  ;
    struct sType*  __dec_obj254  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sAlignOfNode2* )come_increment_ref_count((struct sAlignOfNode2 *)come_calloc(1, sizeof(struct sAlignOfNode2 )*(1), "sAlignOfNode2_clone", 5, 3022, "struct sAlignOfNode2* "), "sAlignOfNode2_clone", 5, 3023);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj253=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sAlignOfNode2_clone", 7, 3024, "char* "), "sAlignOfNode2_clone", 7, 3026);
        __dec_obj253 = come_decrement_ref_count(__dec_obj253, (void*)0, (void*)0, 0,0, (void*)0, "sAlignOfNode2_clone", 7, 3025);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj254=result->type,
        result->type=(struct sType* )come_increment_ref_count(sType_clone(self->type), "sAlignOfNode2_clone", 9, 3028);
        come_call_finalizer(sType_finalize, __dec_obj254,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sAlignOfNode2_clone", 9, 3027);
    }
        __result_obj__0 = result;
    come_call_finalizer(sAlignOfNode2_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sAlignOfNode2_clone}", 10, 3029);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode2_clone"; neo_current_frame = &fr;
    struct sAlignOfExpNode2* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sAlignOfExpNode2*  result  ;
    char*  __dec_obj257  ;
    struct sNode* __dec_obj258;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sAlignOfExpNode2* )come_increment_ref_count((struct sAlignOfExpNode2 *)come_calloc(1, sizeof(struct sAlignOfExpNode2 )*(1), "sAlignOfExpNode2_clone", 5, 3047, "struct sAlignOfExpNode2* "), "sAlignOfExpNode2_clone", 5, 3048);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj257=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sAlignOfExpNode2_clone", 7, 3049, "char* "), "sAlignOfExpNode2_clone", 7, 3051);
        __dec_obj257 = come_decrement_ref_count(__dec_obj257, (void*)0, (void*)0, 0,0, (void*)0, "sAlignOfExpNode2_clone", 7, 3050);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj258=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp), "sAlignOfExpNode2_clone", 9, 3053);
        (__dec_obj258 ? __dec_obj258 = come_decrement_ref_count(__dec_obj258, ((struct sNode*)__dec_obj258)->finalize, ((struct sNode*)__dec_obj258)->_protocol_obj, 0,0, (void*)0, "sAlignOfExpNode2_clone", 9, 3052) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sAlignOfExpNode2_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sAlignOfExpNode2_clone}", 10, 3054);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "top_level_v94"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __result_obj__0;
    _Bool come_c;
    _Bool come_safe;
    _Bool come_safe_141;
    if(charp_operator_equals(buf,"using")) {
        if(parsecmp("neo-c-pthread",info)) {
            info->p->p+=strlen("neo-c-pthread");
            skip_spaces_and_lf(info);
            gComePthread=(_Bool)1;
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))), "25obj.nc", 2724, 3064);
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2724, 3065):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2724, 3066):(void*)0);
            return __result_obj__0;
        }
        else if(parsecmp("comelang",info)) {
            info->p->p+=strlen("comelang");
            skip_spaces_and_lf(info);
            gComelang=(_Bool)1;
                        __right_value0 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))), "25obj.nc", 2732, 3067);
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2732, 3068):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2732, 3069):(void*)0);
            return __result_obj__0;
        }
        else if(parsecmp("neo-c-net",info)) {
            info->p->p+=strlen("neo-c-net");
            skip_spaces_and_lf(info);
                        __right_value0 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))), "25obj.nc", 2738, 3070);
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2738, 3071):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2738, 3072):(void*)0);
            return __result_obj__0;
        }
        else if(parsecmp("neo-c",info)) {
            info->p->p+=strlen("neo-c");
            skip_spaces_and_lf(info);
            gComeC=(_Bool)0;
        }
        else if(parsecmp("c",info)||parsecmp("C",info)) {
            info->p->p+=strlen("c");
            skip_spaces_and_lf(info);
            if(span$1char$p_operator_derefference(info->p)==123) {
                info->p->p++;
                skip_spaces_and_lf(info);
                come_c=gComeC;
                gComeC=(_Bool)1;
                transpile_toplevel((_Bool)1,info);
                gComeC=come_c;
            }
            else {
                gComeC=(_Bool)1;
            }
        }
        else if(parsecmp("unsafe",info)) {
            info->p->p+=strlen("unsafe");
            skip_spaces_and_lf(info);
            if(span$1char$p_operator_derefference(info->p)==123) {
                info->p->p++;
                skip_spaces_and_lf(info);
                come_safe=gComeSafe;
                gComeSafe=(_Bool)0;
                transpile_toplevel((_Bool)1,info);
                gComeSafe=come_safe;
            }
            else {
                gComeSafe=(_Bool)0;
            }
        }
        else if(parsecmp("safe",info)) {
            info->p->p+=strlen("safe");
            skip_spaces_and_lf(info);
            if(span$1char$p_operator_derefference(info->p)==123) {
                info->p->p++;
                skip_spaces_and_lf(info);
                come_safe_141=gComeSafe;
                gComeSafe=(_Bool)1;
                transpile_toplevel((_Bool)1,info);
                gComeSafe=come_safe_141;
            }
            else {
                gComeSafe=(_Bool)1;
            }
        }
        else {
            err_msg(info,"invalid using");
            exit(2);
        }
                __right_value0 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))), "25obj.nc", 2808, 3073);
        ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2808, 3074):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2808, 3075):(void*)0);
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=top_level_v93(buf,head,head_sline,info))), "25obj.nc", 2811, 3076);
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2811, 3077):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2811, 3078):(void*)0);
    return __result_obj__0;
}

struct sNode* create_implements(struct sNode* node, struct sType*  inf_type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_implements"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value41;
    struct sImplementsNode* _inf_obj_value41;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
        _inf_value41=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 2816, 3082, "struct sNode");
    _inf_obj_value41=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(__right_value1=sImplementsNode_initialize((struct sImplementsNode* )come_increment_ref_count((struct sImplementsNode *)come_calloc(1, sizeof(struct sImplementsNode )*(1), "25obj.nc", 2816, 3079, "struct sImplementsNode* "), "25obj.nc", 2816, 3080),(struct sNode*)come_increment_ref_count(node, "25obj.nc", 2816, 3081),inf_type,info))), "25obj.nc", 2816, 3083);
    _inf_value41->_protocol_obj=_inf_obj_value41;
    _inf_value41->finalize=(void*)sImplementsNode_finalize;
    _inf_value41->clone=(void*)sImplementsNode_clone;
    _inf_value41->compile=(void*)sImplementsNode_compile;
    _inf_value41->sline=(void*)sNodeBase_sline;
    _inf_value41->sline_real=(void*)sNodeBase_sline_real;
    _inf_value41->sname=(void*)sNodeBase_sname;
    _inf_value41->terminated=(void*)sNodeBase_terminated;
    _inf_value41->kind=(void*)sImplementsNode_kind;
    _inf_value41->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value41)), "25obj.nc", 2816, 3094);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2816, 3095):(void*)0);
    come_call_finalizer(sImplementsNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 2816, 3096);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2816, 3097):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2816, 3098):(void*)0);
    return __result_obj__0;
}

static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sImplementsNode_clone"; neo_current_frame = &fr;
    struct sImplementsNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sImplementsNode*  result  ;
    char*  __dec_obj259  ;
    struct sNode* __dec_obj260;
    struct sType*  __dec_obj261  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sImplementsNode* )come_increment_ref_count((struct sImplementsNode *)come_calloc(1, sizeof(struct sImplementsNode )*(1), "sImplementsNode_clone", 5, 3084, "struct sImplementsNode* "), "sImplementsNode_clone", 5, 3085);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj259=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sImplementsNode_clone", 7, 3086, "char* "), "sImplementsNode_clone", 7, 3088);
        __dec_obj259 = come_decrement_ref_count(__dec_obj259, (void*)0, (void*)0, 0,0, (void*)0, "sImplementsNode_clone", 7, 3087);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->obj_exp!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj260=result->obj_exp,
        result->obj_exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->obj_exp), "sImplementsNode_clone", 9, 3090);
        (__dec_obj260 ? __dec_obj260 = come_decrement_ref_count(__dec_obj260, ((struct sNode*)__dec_obj260)->finalize, ((struct sNode*)__dec_obj260)->_protocol_obj, 0,0, (void*)0, "sImplementsNode_clone", 9, 3089) :0);
    }
    if(self!=((void*)0)&&self->inf_type!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj261=result->inf_type,
        result->inf_type=(struct sType* )come_increment_ref_count(sType_clone(self->inf_type), "sImplementsNode_clone", 10, 3092);
        come_call_finalizer(sType_finalize, __dec_obj261,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sImplementsNode_clone", 10, 3091);
    }
        __result_obj__0 = result;
    come_call_finalizer(sImplementsNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sImplementsNode_clone}", 11, 3093);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "post_position_operator_v21"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var17
;    struct sType*  type3  =0;
    char*  name2  =0;
    _Bool err=0;
    struct sType*  inf_type  ;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value42;
    struct sImplementsNode* _inf_obj_value42;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    if(!node->terminated(node->_protocol_obj)&&!gComeC&&parsecmp("implements",info)) {
        info->p->p+=strlen("implements");
        skip_spaces_and_lf(info);
        multiple_assign_var17=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
        type3=(struct sType* )come_increment_ref_count(multiple_assign_var17->v1, "25obj.nc", 2825, 3099);
        name2=(char* )come_increment_ref_count(multiple_assign_var17->v2, "25obj.nc", 2825, 3100);
        err=multiple_assign_var17->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 2825, 3101);
        if(!err) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        __right_value0 = (void*)0;
        inf_type=(struct sType* )come_increment_ref_count(sType_clone(type3), "25obj.nc", 2831, 3102);
                __right_value0 = (void*)0;
        _inf_value42=(struct sNode*)come_calloc(1, sizeof(struct sNode), "25obj.nc", 2833, 3106, "struct sNode");
        _inf_obj_value42=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(__right_value1=sImplementsNode_initialize((struct sImplementsNode* )come_increment_ref_count((struct sImplementsNode *)come_calloc(1, sizeof(struct sImplementsNode )*(1), "25obj.nc", 2833, 3103, "struct sImplementsNode* "), "25obj.nc", 2833, 3104),(struct sNode*)come_increment_ref_count(node, "25obj.nc", 2833, 3105),inf_type,info))), "25obj.nc", 2833, 3107);
        _inf_value42->_protocol_obj=_inf_obj_value42;
        _inf_value42->finalize=(void*)sImplementsNode_finalize;
        _inf_value42->clone=(void*)sImplementsNode_clone;
        _inf_value42->compile=(void*)sImplementsNode_compile;
        _inf_value42->sline=(void*)sNodeBase_sline;
        _inf_value42->sline_real=(void*)sNodeBase_sline_real;
        _inf_value42->sname=(void*)sNodeBase_sname;
        _inf_value42->terminated=(void*)sNodeBase_terminated;
        _inf_value42->kind=(void*)sImplementsNode_kind;
        _inf_value42->left_value=(void*)sNodeBase_left_value;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value42)), "25obj.nc", 2833, 3108);
        come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 2833, 3109);
        (name2 = come_decrement_ref_count(name2, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 2833, 3110));
        come_call_finalizer(sType_finalize, inf_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 2833, 3111);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2833, 3112):(void*)0);
        come_call_finalizer(sImplementsNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "25obj.nc}", 2833, 3113);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2833, 3114):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2833, 3115):(void*)0);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 2843, 3116);
        (name2 = come_decrement_ref_count(name2, (void*)0, (void*)0, 0, 0, (void*)0, "25obj.nc", 2843, 3117));
        come_call_finalizer(sType_finalize, inf_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "25obj.nc}", 2843, 3118);
    }
    else if(span$1char$p_operator_derefference(info->p)==64) {
        info->p->p++;
        while(xisalnum(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
            info->p->p++;
        }
        skip_spaces_and_lf(info);
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=post_position_operator_v19((struct sNode*)come_increment_ref_count(node, "25obj.nc", 2843, 3119),info))), "25obj.nc", 2843, 3120);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "25obj.nc", 2843, 3121):(void*)0);
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "25obj.nc", 2843, 3122):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "25obj.nc", 2843, 3123):(void*)0);
    return __result_obj__0;
}

