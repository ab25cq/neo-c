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

typedef union anonymous_typeZ1 __darwin_mbstate_t  ;

typedef long __darwin_ptrdiff_t;

typedef unsigned long  int __darwin_size_t;

typedef __builtin_va_list __darwin_va_list;

typedef int __darwin_wchar_t;

typedef int __darwin_rune_t  ;

typedef unsigned int __darwin_wint_t;

typedef unsigned long  int __darwin_clock_t;

typedef unsigned int __darwin_socklen_t  ;

typedef long __darwin_ssize_t;

typedef long __darwin_time_t;

typedef long long __darwin_blkcnt_t  ;

typedef int __darwin_blksize_t  ;

typedef int __darwin_dev_t  ;

typedef unsigned int __darwin_fsblkcnt_t;

typedef unsigned int __darwin_fsfilcnt_t;

typedef unsigned int __darwin_gid_t  ;

typedef unsigned int __darwin_id_t  ;

typedef unsigned long  long __darwin_ino64_t  ;

typedef unsigned long  long __darwin_ino_t  ;

typedef unsigned int __darwin_mach_port_name_t  ;

typedef unsigned int __darwin_mach_port_t  ;

typedef unsigned short int __darwin_mode_t  ;

typedef long long __darwin_off_t  ;

typedef int __darwin_pid_t  ;

typedef unsigned int __darwin_sigset_t  ;

typedef int __darwin_suseconds_t  ;

typedef unsigned int __darwin_uid_t  ;

typedef unsigned int __darwin_useconds_t  ;

typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t  ;

typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t  ;

typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t  ;

typedef unsigned long  int __darwin_pthread_key_t;

typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t  ;

typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t  ;

typedef struct _opaque_pthread_once_t __darwin_pthread_once_t  ;

typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t  ;

typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t  ;

typedef struct _opaque_pthread_t* __darwin_pthread_t  ;

typedef int __darwin_nl_item;

typedef int __darwin_wctrans_t;

typedef unsigned int __darwin_wctype_t  ;

typedef char int8_t;

typedef short int16_t;

typedef int int32_t;

typedef long long int64_t;

typedef unsigned char u_int8_t;

typedef unsigned short int u_int16_t;

typedef unsigned int u_int32_t;

typedef unsigned long  long u_int64_t;

typedef long long register_t  ;

typedef long intptr_t  ;

typedef unsigned long  int uintptr_t;

typedef unsigned long  long user_addr_t  ;

typedef unsigned long  long user_size_t  ;

typedef long long user_ssize_t  ;

typedef long long user_long_t  ;

typedef unsigned long  long user_ulong_t  ;

typedef long long user_time_t  ;

typedef long long user_off_t  ;

typedef unsigned long  long syscall_arg_t  ;

typedef unsigned long  int size_t  ;

typedef long long fpos_t  ;

typedef struct __sFILE FILE  ;

typedef long long off_t  ;

typedef long ssize_t  ;

typedef enum anonymous_typeY1 idtype_t;

typedef int pid_t  ;

typedef unsigned int id_t  ;

typedef int sig_atomic_t;

typedef struct __darwin_mcontext64* mcontext_t  ;

typedef struct _opaque_pthread_attr_t pthread_attr_t  ;

typedef struct __darwin_sigaltstack stack_t  ;

typedef struct __darwin_ucontext ucontext_t  ;

typedef unsigned int sigset_t  ;

typedef unsigned int uid_t  ;

typedef struct __siginfo siginfo_t  ;

typedef void (*sig_t)(int);

typedef unsigned char uint8_t;

typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;

typedef unsigned long  long uint64_t;

typedef char int_least8_t  ;

typedef short int_least16_t  ;

typedef int int_least32_t  ;

typedef long long int_least64_t  ;

typedef unsigned char uint_least8_t  ;

typedef unsigned short int uint_least16_t  ;

typedef unsigned int uint_least32_t  ;

typedef unsigned long  long uint_least64_t  ;

typedef char int_fast8_t  ;

typedef short int_fast16_t  ;

typedef int int_fast32_t  ;

typedef long long int_fast64_t  ;

typedef unsigned char uint_fast8_t  ;

typedef unsigned short int uint_fast16_t  ;

typedef unsigned int uint_fast32_t  ;

typedef unsigned long  long uint_fast64_t  ;

typedef long  int intmax_t;

typedef unsigned long  int uintmax_t;

typedef unsigned long  long rlim_t  ;

typedef void* rusage_info_t;

typedef struct rusage_info_v6 rusage_info_current  ;

typedef int ct_rune_t  ;

typedef int rune_t  ;

typedef int wchar_t  ;

typedef struct anonymous_typeX8 div_t;

typedef struct anonymous_typeX9 ldiv_t;

typedef struct anonymous_typeX10 lldiv_t;

typedef unsigned long  long malloc_type_id_t;

typedef struct _malloc_zone_t malloc_zone_t;

typedef int dev_t  ;

typedef unsigned short int mode_t  ;

typedef unsigned long  int rsize_t  ;

typedef int errno_t;

typedef __builtin_va_list __gnuc_va_list  ;

typedef __builtin_va_list va_list  ;

typedef struct _xlocale* locale_t  ;

typedef struct re_program* re_t  ;

typedef struct re_capture re_capture  ;

typedef struct regex_t regex_t;

typedef struct re_program regex_program_t  ;

typedef struct anonymous_typeX15 compiler_state;

typedef struct anonymous_typeX16 match_context;

typedef union anonymous_typeZ1 mbstate_t  ;

typedef unsigned long  int clock_t  ;

typedef long time_t  ;

typedef enum anonymous_typeY16 clockid_t;

typedef unsigned int wint_t  ;

typedef unsigned int wctype_t  ;

typedef struct anonymous_typeX17 _RuneEntry;

typedef struct anonymous_typeX18 _RuneRange;

typedef struct anonymous_typeX19 _RuneCharClass;

typedef struct anonymous_typeX20 _RuneLocale;

typedef int* wstring  ;

/// previous struct definition ///
struct __sFILEX;

struct _xlocale;

struct re_program;

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
    struct __darwin_pthread_handler_rec* __next  ;
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
    struct __darwin_pthread_handler_rec* __cleanup_stack  ;
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
    struct __sbuf _bf  ;
    int _lbfsize;
    void* _cookie;
    int (*_close)(void*);
    int (*_read)(void*,char*,int);
    long long (*_seek)(void*,long long,int);
    int (*_write)(void*,const char*,int);
    struct __sbuf _ub  ;
    struct __sFILEX* _extra  ;
    int _ur;
    unsigned char _ubuf[3];
    unsigned char _nbuf[1];
    struct __sbuf _lb  ;
    int _blksize;
    long long _offset  ;
};

enum   anonymous_typeY1 { P_ALL 
,P_PID 
,P_PGID 
};

struct __darwin_arm_exception_state
{
    unsigned int __exception  ;
    unsigned int __fsr  ;
    unsigned int __far  ;
};

struct __darwin_arm_exception_state64
{
    unsigned long  long __far  ;
    unsigned int __esr  ;
    unsigned int __exception  ;
};

struct __darwin_arm_exception_state64_v2
{
    unsigned long  long __far  ;
    unsigned long  long __esr  ;
};

struct __darwin_arm_thread_state
{
    unsigned int __r[13]  ;
    unsigned int __sp  ;
    unsigned int __lr  ;
    unsigned int __pc  ;
    unsigned int __cpsr  ;
};

struct __darwin_arm_thread_state64
{
    unsigned long  long __x[29]  ;
    unsigned long  long __fp  ;
    unsigned long  long __lr  ;
    unsigned long  long __sp  ;
    unsigned long  long __pc  ;
    unsigned int __cpsr  ;
    unsigned int __pad  ;
};

struct __darwin_arm_vfp_state
{
    unsigned int __r[64]  ;
    unsigned int __fpscr  ;
};

struct __darwin_arm_neon_state64
{
    __uint128_t __v[32];
    unsigned int __fpsr  ;
    unsigned int __fpcr  ;
};

struct __darwin_arm_neon_state
{
    __uint128_t __v[16];
    unsigned int __fpsr  ;
    unsigned int __fpcr  ;
};

struct __arm_pagein_state
{
    int __pagein_error;
};

struct __darwin_arm_sme_state
{
    unsigned long  long __svcr  ;
    unsigned long  long __tpidr2_el0  ;
    unsigned short int __svl_b  ;
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
    unsigned int __bvr[16]  ;
    unsigned int __bcr[16]  ;
    unsigned int __wvr[16]  ;
    unsigned int __wcr[16]  ;
};

struct __darwin_arm_debug_state32
{
    unsigned int __bvr[16]  ;
    unsigned int __bcr[16]  ;
    unsigned int __wvr[16]  ;
    unsigned int __wcr[16]  ;
    unsigned long  long __mdscr_el1  ;
};

struct __darwin_arm_debug_state64
{
    unsigned long  long __bvr[16]  ;
    unsigned long  long __bcr[16]  ;
    unsigned long  long __wvr[16]  ;
    unsigned long  long __wcr[16]  ;
    unsigned long  long __mdscr_el1  ;
};

struct __darwin_arm_cpmu_state64
{
    unsigned long  long __ctrs[16]  ;
};

struct __darwin_mcontext32
{
    struct __darwin_arm_exception_state __es  ;
    struct __darwin_arm_thread_state __ss  ;
    struct __darwin_arm_vfp_state __fs  ;
};

struct __darwin_mcontext64
{
    struct __darwin_arm_exception_state64 __es  ;
    struct __darwin_arm_thread_state64 __ss  ;
    struct __darwin_arm_neon_state64 __ns  ;
};

struct __darwin_sigaltstack
{
    void* ss_sp;
    unsigned long  int ss_size  ;
    int ss_flags;
};

struct __darwin_ucontext
{
    int uc_onstack;
    unsigned int uc_sigmask  ;
    struct __darwin_sigaltstack uc_stack  ;
    struct __darwin_ucontext* uc_link  ;
    unsigned long  int uc_mcsize  ;
    struct __darwin_mcontext64* uc_mcontext  ;
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
    union sigval sigev_value  ;
    void (*sigev_notify_function)(union sigval);
    struct _opaque_pthread_attr_t* sigev_notify_attributes  ;
};

struct __siginfo
{
    int si_signo;
    int si_errno;
    int si_code;
    int si_pid  ;
    unsigned int si_uid  ;
    int si_status;
    void* si_addr;
    union sigval si_value  ;
    long si_band;
    unsigned long  int __pad[7];
};

union __sigaction_u
{
void (*__sa_handler)(int);
void (*__sa_sigaction)(int,struct __siginfo*,void*);
};

struct __sigaction
{
    union __sigaction_u __sigaction_u  ;
    void (*sa_tramp)(void*,int,int,struct __siginfo*,void*);
    unsigned int sa_mask  ;
    int sa_flags;
};

struct sigaction
{
    union __sigaction_u __sigaction_u  ;
    unsigned int sa_mask  ;
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
    long tv_sec  ;
    int tv_usec  ;
};

struct rusage
{
    struct timeval ru_utime  ;
    struct timeval ru_stime  ;
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
    unsigned char ri_uuid[16]  ;
    unsigned long  long ri_user_time  ;
    unsigned long  long ri_system_time  ;
    unsigned long  long ri_pkg_idle_wkups  ;
    unsigned long  long ri_interrupt_wkups  ;
    unsigned long  long ri_pageins  ;
    unsigned long  long ri_wired_size  ;
    unsigned long  long ri_resident_size  ;
    unsigned long  long ri_phys_footprint  ;
    unsigned long  long ri_proc_start_abstime  ;
    unsigned long  long ri_proc_exit_abstime  ;
};

struct rusage_info_v1
{
    unsigned char ri_uuid[16]  ;
    unsigned long  long ri_user_time  ;
    unsigned long  long ri_system_time  ;
    unsigned long  long ri_pkg_idle_wkups  ;
    unsigned long  long ri_interrupt_wkups  ;
    unsigned long  long ri_pageins  ;
    unsigned long  long ri_wired_size  ;
    unsigned long  long ri_resident_size  ;
    unsigned long  long ri_phys_footprint  ;
    unsigned long  long ri_proc_start_abstime  ;
    unsigned long  long ri_proc_exit_abstime  ;
    unsigned long  long ri_child_user_time  ;
    unsigned long  long ri_child_system_time  ;
    unsigned long  long ri_child_pkg_idle_wkups  ;
    unsigned long  long ri_child_interrupt_wkups  ;
    unsigned long  long ri_child_pageins  ;
    unsigned long  long ri_child_elapsed_abstime  ;
};

struct rusage_info_v2
{
    unsigned char ri_uuid[16]  ;
    unsigned long  long ri_user_time  ;
    unsigned long  long ri_system_time  ;
    unsigned long  long ri_pkg_idle_wkups  ;
    unsigned long  long ri_interrupt_wkups  ;
    unsigned long  long ri_pageins  ;
    unsigned long  long ri_wired_size  ;
    unsigned long  long ri_resident_size  ;
    unsigned long  long ri_phys_footprint  ;
    unsigned long  long ri_proc_start_abstime  ;
    unsigned long  long ri_proc_exit_abstime  ;
    unsigned long  long ri_child_user_time  ;
    unsigned long  long ri_child_system_time  ;
    unsigned long  long ri_child_pkg_idle_wkups  ;
    unsigned long  long ri_child_interrupt_wkups  ;
    unsigned long  long ri_child_pageins  ;
    unsigned long  long ri_child_elapsed_abstime  ;
    unsigned long  long ri_diskio_bytesread  ;
    unsigned long  long ri_diskio_byteswritten  ;
};

struct rusage_info_v3
{
    unsigned char ri_uuid[16]  ;
    unsigned long  long ri_user_time  ;
    unsigned long  long ri_system_time  ;
    unsigned long  long ri_pkg_idle_wkups  ;
    unsigned long  long ri_interrupt_wkups  ;
    unsigned long  long ri_pageins  ;
    unsigned long  long ri_wired_size  ;
    unsigned long  long ri_resident_size  ;
    unsigned long  long ri_phys_footprint  ;
    unsigned long  long ri_proc_start_abstime  ;
    unsigned long  long ri_proc_exit_abstime  ;
    unsigned long  long ri_child_user_time  ;
    unsigned long  long ri_child_system_time  ;
    unsigned long  long ri_child_pkg_idle_wkups  ;
    unsigned long  long ri_child_interrupt_wkups  ;
    unsigned long  long ri_child_pageins  ;
    unsigned long  long ri_child_elapsed_abstime  ;
    unsigned long  long ri_diskio_bytesread  ;
    unsigned long  long ri_diskio_byteswritten  ;
    unsigned long  long ri_cpu_time_qos_default  ;
    unsigned long  long ri_cpu_time_qos_maintenance  ;
    unsigned long  long ri_cpu_time_qos_background  ;
    unsigned long  long ri_cpu_time_qos_utility  ;
    unsigned long  long ri_cpu_time_qos_legacy  ;
    unsigned long  long ri_cpu_time_qos_user_initiated  ;
    unsigned long  long ri_cpu_time_qos_user_interactive  ;
    unsigned long  long ri_billed_system_time  ;
    unsigned long  long ri_serviced_system_time  ;
};

struct rusage_info_v4
{
    unsigned char ri_uuid[16]  ;
    unsigned long  long ri_user_time  ;
    unsigned long  long ri_system_time  ;
    unsigned long  long ri_pkg_idle_wkups  ;
    unsigned long  long ri_interrupt_wkups  ;
    unsigned long  long ri_pageins  ;
    unsigned long  long ri_wired_size  ;
    unsigned long  long ri_resident_size  ;
    unsigned long  long ri_phys_footprint  ;
    unsigned long  long ri_proc_start_abstime  ;
    unsigned long  long ri_proc_exit_abstime  ;
    unsigned long  long ri_child_user_time  ;
    unsigned long  long ri_child_system_time  ;
    unsigned long  long ri_child_pkg_idle_wkups  ;
    unsigned long  long ri_child_interrupt_wkups  ;
    unsigned long  long ri_child_pageins  ;
    unsigned long  long ri_child_elapsed_abstime  ;
    unsigned long  long ri_diskio_bytesread  ;
    unsigned long  long ri_diskio_byteswritten  ;
    unsigned long  long ri_cpu_time_qos_default  ;
    unsigned long  long ri_cpu_time_qos_maintenance  ;
    unsigned long  long ri_cpu_time_qos_background  ;
    unsigned long  long ri_cpu_time_qos_utility  ;
    unsigned long  long ri_cpu_time_qos_legacy  ;
    unsigned long  long ri_cpu_time_qos_user_initiated  ;
    unsigned long  long ri_cpu_time_qos_user_interactive  ;
    unsigned long  long ri_billed_system_time  ;
    unsigned long  long ri_serviced_system_time  ;
    unsigned long  long ri_logical_writes  ;
    unsigned long  long ri_lifetime_max_phys_footprint  ;
    unsigned long  long ri_instructions  ;
    unsigned long  long ri_cycles  ;
    unsigned long  long ri_billed_energy  ;
    unsigned long  long ri_serviced_energy  ;
    unsigned long  long ri_interval_max_phys_footprint  ;
    unsigned long  long ri_runnable_time  ;
};

struct rusage_info_v5
{
    unsigned char ri_uuid[16]  ;
    unsigned long  long ri_user_time  ;
    unsigned long  long ri_system_time  ;
    unsigned long  long ri_pkg_idle_wkups  ;
    unsigned long  long ri_interrupt_wkups  ;
    unsigned long  long ri_pageins  ;
    unsigned long  long ri_wired_size  ;
    unsigned long  long ri_resident_size  ;
    unsigned long  long ri_phys_footprint  ;
    unsigned long  long ri_proc_start_abstime  ;
    unsigned long  long ri_proc_exit_abstime  ;
    unsigned long  long ri_child_user_time  ;
    unsigned long  long ri_child_system_time  ;
    unsigned long  long ri_child_pkg_idle_wkups  ;
    unsigned long  long ri_child_interrupt_wkups  ;
    unsigned long  long ri_child_pageins  ;
    unsigned long  long ri_child_elapsed_abstime  ;
    unsigned long  long ri_diskio_bytesread  ;
    unsigned long  long ri_diskio_byteswritten  ;
    unsigned long  long ri_cpu_time_qos_default  ;
    unsigned long  long ri_cpu_time_qos_maintenance  ;
    unsigned long  long ri_cpu_time_qos_background  ;
    unsigned long  long ri_cpu_time_qos_utility  ;
    unsigned long  long ri_cpu_time_qos_legacy  ;
    unsigned long  long ri_cpu_time_qos_user_initiated  ;
    unsigned long  long ri_cpu_time_qos_user_interactive  ;
    unsigned long  long ri_billed_system_time  ;
    unsigned long  long ri_serviced_system_time  ;
    unsigned long  long ri_logical_writes  ;
    unsigned long  long ri_lifetime_max_phys_footprint  ;
    unsigned long  long ri_instructions  ;
    unsigned long  long ri_cycles  ;
    unsigned long  long ri_billed_energy  ;
    unsigned long  long ri_serviced_energy  ;
    unsigned long  long ri_interval_max_phys_footprint  ;
    unsigned long  long ri_runnable_time  ;
    unsigned long  long ri_flags  ;
};

struct rusage_info_v6
{
    unsigned char ri_uuid[16]  ;
    unsigned long  long ri_user_time  ;
    unsigned long  long ri_system_time  ;
    unsigned long  long ri_pkg_idle_wkups  ;
    unsigned long  long ri_interrupt_wkups  ;
    unsigned long  long ri_pageins  ;
    unsigned long  long ri_wired_size  ;
    unsigned long  long ri_resident_size  ;
    unsigned long  long ri_phys_footprint  ;
    unsigned long  long ri_proc_start_abstime  ;
    unsigned long  long ri_proc_exit_abstime  ;
    unsigned long  long ri_child_user_time  ;
    unsigned long  long ri_child_system_time  ;
    unsigned long  long ri_child_pkg_idle_wkups  ;
    unsigned long  long ri_child_interrupt_wkups  ;
    unsigned long  long ri_child_pageins  ;
    unsigned long  long ri_child_elapsed_abstime  ;
    unsigned long  long ri_diskio_bytesread  ;
    unsigned long  long ri_diskio_byteswritten  ;
    unsigned long  long ri_cpu_time_qos_default  ;
    unsigned long  long ri_cpu_time_qos_maintenance  ;
    unsigned long  long ri_cpu_time_qos_background  ;
    unsigned long  long ri_cpu_time_qos_utility  ;
    unsigned long  long ri_cpu_time_qos_legacy  ;
    unsigned long  long ri_cpu_time_qos_user_initiated  ;
    unsigned long  long ri_cpu_time_qos_user_interactive  ;
    unsigned long  long ri_billed_system_time  ;
    unsigned long  long ri_serviced_system_time  ;
    unsigned long  long ri_logical_writes  ;
    unsigned long  long ri_lifetime_max_phys_footprint  ;
    unsigned long  long ri_instructions  ;
    unsigned long  long ri_cycles  ;
    unsigned long  long ri_billed_energy  ;
    unsigned long  long ri_serviced_energy  ;
    unsigned long  long ri_interval_max_phys_footprint  ;
    unsigned long  long ri_runnable_time  ;
    unsigned long  long ri_flags  ;
    unsigned long  long ri_user_ptime  ;
    unsigned long  long ri_system_ptime  ;
    unsigned long  long ri_pinstructions  ;
    unsigned long  long ri_pcycles  ;
    unsigned long  long ri_energy_nj  ;
    unsigned long  long ri_penergy_nj  ;
    unsigned long  long ri_secure_time_in_system  ;
    unsigned long  long ri_secure_ptime_in_system  ;
    unsigned long  long ri_neural_footprint  ;
    unsigned long  long ri_lifetime_max_neural_footprint  ;
    unsigned long  long ri_interval_max_neural_footprint  ;
    unsigned long  long ri_reserved[9]  ;
};

struct rlimit
{
    unsigned long  long rlim_cur  ;
    unsigned long  long rlim_max  ;
};

struct proc_rlimit_control_wakeupmon
{
    unsigned int wm_flags  ;
    int wm_rate  ;
};

union anonymous_typeZ2
{
unsigned long  long _ull  ;
unsigned int _ul[2]  ;
};

union anonymous_typeZ3
{
unsigned long  long _ull  ;
unsigned int _ul[2]  ;
};

union anonymous_typeZ4
{
unsigned long  long _ull  ;
unsigned int _ul[2]  ;
};

union anonymous_typeZ5
{
unsigned long  long _ull  ;
unsigned int _ul[2]  ;
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

struct sMemHeaderTiny
{
    long size;
    int allocated;
    struct sMemHeaderTiny* next  ;
    struct sMemHeaderTiny* prev  ;
    struct sMemHeaderTiny* free_next  ;
    char* class_name;
    char* sname;
    int sline;
};

struct sMemHeader
{
    long size;
    int allocated;
    struct sMemHeader* next  ;
    struct sMemHeader* prev  ;
    struct sMemHeader* free_next  ;
    char* sname[16];
    int sline[16];
    int id[16];
    char* class_name;
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
    char* item  ;
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
    struct regex_t* first  ;
    struct regex_t* last  ;
    int id;
};

union anonymous_typeZ11
{
unsigned char ch;
unsigned char* ccl;
    struct {
        struct regex_t* first  ;
        struct regex_t* last  ;
        int id;
    } group;
};

struct anonymous_typeX14
{
    struct regex_t* first  ;
    struct regex_t* last  ;
    int id;
};

union anonymous_typeZ13
{
unsigned char ch;
unsigned char* ccl;
    struct {
        struct regex_t* first  ;
        struct regex_t* last  ;
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
            struct regex_t* first  ;
            struct regex_t* last  ;
            int id;
        } group;
    } u;
    struct regex_t* next  ;
};

struct re_program
{
    struct regex_t* start  ;
    int group_count;
};

struct anonymous_typeX15
{
    struct regex_t* pool  ;
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
    struct re_capture* captures  ;
    int capture_capacity;
    int total_groups;
    _Bool ignore_case;
};

struct timespec
{
    long tv_sec  ;
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

enum   anonymous_typeY16 { _CLOCK_REALTIME=(0),
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
    int __min  ;
    int __max  ;
    int __map  ;
    unsigned int* __types  ;
};

struct anonymous_typeX18
{
    int __nranges;
    struct {
        int __min  ;
        int __max  ;
        int __map  ;
        unsigned int* __types  ;
    } __ranges;
};

struct anonymous_typeX19
{
    char __name[14];
    unsigned int __mask  ;
};

struct anonymous_typeX20
{
    char __magic[8];
    char __encoding[32];
    int (*__sgetrune)(const char*,unsigned long  int,char**);
    int (*__sputrune)(int,char*,unsigned long  int,char**);
    int __invalid_rune  ;
    unsigned int __runetype[(1<<8)]  ;
    int __maplower[(1<<8)]  ;
    int __mapupper[(1<<8)]  ;
    struct {
        int __nranges;
        struct {
            int __min  ;
            int __max  ;
            int __map  ;
            unsigned int* __types  ;
        } __ranges;
    } __runetype_ext;
    struct {
        int __nranges;
        struct {
            int __min  ;
            int __max  ;
            int __map  ;
            unsigned int* __types  ;
        } __ranges;
    } __maplower_ext;
    struct {
        int __nranges;
        struct {
            int __min  ;
            int __max  ;
            int __map  ;
            unsigned int* __types  ;
        } __ranges;
    } __mapupper_ext;
    void* __variable;
    int __variable_len;
    int __ncharclasses;
    struct {
        char __name[14];
        unsigned int __mask  ;
    } __charclasses;
};

struct sTask
{
    unsigned int sp  ;
    unsigned int pc  ;
    unsigned int r4  ;
    unsigned int r5  ;
    unsigned int r6  ;
    unsigned int r7  ;
    unsigned int r8  ;
    unsigned int r9  ;
    unsigned int r10  ;
    unsigned int r11  ;
};

struct list_item$1sTask$ph
{
    struct sTask* item  ;
    struct list_item$1sTask$ph* prev;
    struct list_item$1sTask$ph* next;
};

struct list$1sTask$ph
{
    struct list_item$1sTask$ph* head;
    struct list_item$1sTask$ph* tail;
    int len;
    struct list_item$1sTask$ph* it;
};

/// variable definition ///
extern struct __sFILE* __stdinp  ;
extern struct __sFILE* __stdoutp  ;
extern struct __sFILE* __stderrp  ;
extern const int sys_nerr;
extern const char* sys_errlist[];
extern int __mb_cur_max;
extern char* suboptarg;
extern char* gComeStackFrameSName[128];

extern int gComeStackFrameSLine[128];

extern int gComeStackFrameID[128];

extern int gNumComeStackFrame;

extern char* gComeStackFrameBuffer;

extern struct sMemHeader* gAllocMem  ;

extern int gComeDebugLib;

extern int gNumAlloc;

extern int gNumFree;

extern char* tzname[];
extern int getdate_err;
extern long timezone;
extern int daylight;
extern struct anonymous_typeX20 _DefaultRuneLocale  ;
extern struct anonymous_typeX20* _CurrentRuneLocale  ;
unsigned int SP  ;
unsigned int PC  ;
unsigned int R4  ;
unsigned int R5  ;
unsigned int R6  ;
unsigned int R7  ;
unsigned int R8  ;
unsigned int R9  ;
unsigned int R10  ;
unsigned int R11  ;
unsigned int* O  ;
unsigned int* P  ;
unsigned int* Q  ;
struct list$1sTask$ph* gTasks;
int gCurrentTask=0;
// source head

// header function
int renameat(int , const char* , int , const char* );
int renamex_np(const char* , const char* , unsigned int );
int renameatx_np(int , const char* , int , const char* , unsigned int );
int printf(const char* , ...);
void clearerr(struct __sFILE*   );
int fclose(struct __sFILE*   );
int feof(struct __sFILE*   );
int ferror(struct __sFILE*   );
int fflush(struct __sFILE*   );
int fgetc(struct __sFILE*   );
int fgetpos(struct __sFILE*   , long long*   );
char* fgets(char* , int __size, struct __sFILE*   );
struct __sFILE* fopen(const char* __filename, const char* __mode);
int fprintf(struct __sFILE*   , const char* , ...);
int fputc(int , struct __sFILE*   );
int fputs(const char* , struct __sFILE*   );
unsigned long  int fread(void* __ptr, unsigned long  int __size  , unsigned long  int __nitems  , struct __sFILE* __stream  );
struct __sFILE* freopen(const char* , const char* , struct __sFILE*   );
int fscanf(struct __sFILE*   , const char* , ...);
int fseek(struct __sFILE*   , long , int );
int fsetpos(struct __sFILE*   , const long long*   );
long ftell(struct __sFILE*   );
unsigned long  int fwrite(const void* __ptr, unsigned long  int __size  , unsigned long  int __nitems  , struct __sFILE* __stream  );
int getc(struct __sFILE*   );
int getchar();
char* gets(char* );
void perror(const char* );
int putc(int , struct __sFILE*   );
int putchar(int );
int puts(const char* );
int remove(const char* );
int rename(const char* __old, const char* __new);
void rewind(struct __sFILE*   );
int scanf(const char* , ...);
void setbuf(struct __sFILE*   , char* );
int setvbuf(struct __sFILE*   , char* , int , unsigned long  int __size  );
int sprintf(char* , const char* , ...);
int sscanf(const char* , const char* , ...);
struct __sFILE* tmpfile();
char* tmpnam(char* );
int ungetc(int , struct __sFILE*   );
int vfprintf(struct __sFILE*   , const char* , __darwin_va_list   );
int vprintf(const char* , __darwin_va_list   );
int vsprintf(char* , const char* , __darwin_va_list   );
char* ctermid(char* );
struct __sFILE* fdopen(int , const char* );
int fileno(struct __sFILE*   );
int pclose(struct __sFILE*   );
struct __sFILE* popen(const char* , const char* );
int __srget(struct __sFILE*   );
int __svfscanf(struct __sFILE*   , const char* , __darwin_va_list   );
int __swbuf(int , struct __sFILE*   );
void flockfile(struct __sFILE*   );
int ftrylockfile(struct __sFILE*   );
void funlockfile(struct __sFILE*   );
int getc_unlocked(struct __sFILE*   );
int getchar_unlocked();
int putc_unlocked(int , struct __sFILE*   );
int putchar_unlocked(int );
char* tempnam(const char* __dir, const char* __prefix);
int fseeko(struct __sFILE* __stream  , long long __offset  , int __whence);
long long ftello(struct __sFILE* __stream  );
int snprintf(char* __str, unsigned long  int __size  , const char* __format, ...);
int vfscanf(struct __sFILE* __stream  , const char* __format, __darwin_va_list   );
int vscanf(const char* __format, __darwin_va_list   );
int vsnprintf(char* __str, unsigned long  int __size  , const char* __format, __darwin_va_list   );
int vsscanf(const char* __str, const char* __format, __darwin_va_list   );
int dprintf(int , const char* , ...);
int vdprintf(int , const char* , __darwin_va_list   );
long getdelim(char** __linep, unsigned long  int* __linecapp  , int __delimiter, struct __sFILE* __stream  );
long getline(char** __linep, unsigned long  int* __linecapp  , struct __sFILE* __stream  );
struct __sFILE* fmemopen(void* __buf, unsigned long  int __size  , const char* __mode);
struct __sFILE* open_memstream(char** __bufp, unsigned long  int* __sizep  );
int asprintf(char** , const char* , ...);
char* ctermid_r(char* );
char* fgetln(struct __sFILE*   , unsigned long  int* __len  );
const char* fmtcheck(const char* , const char* );
int fpurge(struct __sFILE*   );
void setbuffer(struct __sFILE*   , char* , int __size);
int setlinebuf(struct __sFILE*   );
int vasprintf(char** , const char* , __darwin_va_list   );
struct __sFILE* funopen(const void* , int (*anonymous_lambda_var_nameZ1)(void*,char*,int), int (*anonymous_lambda_var_nameZ2)(void*,const char*,int), long long (*anonymous_lambda_var_nameZ3)(void*,long long,int), int (*anonymous_lambda_var_nameZ4)(void*));
int __snprintf_chk(char* , unsigned long  int __maxlen  , int , unsigned long  int   , const char* , ...);
int __vsnprintf_chk(char* , unsigned long  int __maxlen  , int , unsigned long  int   , const char* , __darwin_va_list   );
int __sprintf_chk(char* , int , unsigned long  int   , const char* , ...);
int __vsprintf_chk(char* , int , unsigned long  int   , const char* , __darwin_va_list   );
void (*signal(int _function_pointer_result_var_name_a1, void (*_function_pointer_result_var_name_a2)(int)))(int);
int getpriority(int , unsigned int   );
int getiopolicy_np(int , int );
int getrlimit(int , struct rlimit*   );
int getrusage(int , struct rusage*   );
int setpriority(int , unsigned int   , int );
int setiopolicy_np(int , int , int );
int setrlimit(int , const struct rlimit*   );
int wait(int* );
int waitpid(int   , int* , int );
int waitid(enum anonymous_typeY1   , unsigned int   , struct __siginfo*   , int );
int wait3(int* , int , struct rusage*   );
int wait4(int   , int* , int , struct rusage*   );
void* alloca(unsigned long  int __size  );
void* malloc_type_malloc(unsigned long  int size  , unsigned long  long type_id  );
void* malloc_type_calloc(unsigned long  int count  , unsigned long  int size  , unsigned long  long type_id  );
void malloc_type_free(void* ptr, unsigned long  long type_id  );
void* malloc_type_realloc(void* ptr, unsigned long  int size  , unsigned long  long type_id  );
void* malloc_type_valloc(unsigned long  int size  , unsigned long  long type_id  );
void* malloc_type_aligned_alloc(unsigned long  int alignment  , unsigned long  int size  , unsigned long  long type_id  );
int malloc_type_posix_memalign(void** memptr, unsigned long  int alignment  , unsigned long  int size  , unsigned long  long type_id  );
void* malloc_type_zone_malloc(struct _malloc_zone_t* zone  , unsigned long  int size  , unsigned long  long type_id  );
void* malloc_type_zone_calloc(struct _malloc_zone_t* zone  , unsigned long  int count  , unsigned long  int size  , unsigned long  long type_id  );
void malloc_type_zone_free(struct _malloc_zone_t* zone  , void* ptr, unsigned long  long type_id  );
void* malloc_type_zone_realloc(struct _malloc_zone_t* zone  , void* ptr, unsigned long  int size  , unsigned long  long type_id  );
void* malloc_type_zone_valloc(struct _malloc_zone_t* zone  , unsigned long  int size  , unsigned long  long type_id  );
void* malloc_type_zone_memalign(struct _malloc_zone_t* zone  , unsigned long  int alignment  , unsigned long  int size  , unsigned long  long type_id  );
void* malloc(unsigned long  int __size  );
void* calloc(unsigned long  int __count  , unsigned long  int __size  );
void free(void* );
void* realloc(void* __ptr, unsigned long  int __size  );
void* reallocf(void* __ptr, unsigned long  int __size  );
void* valloc(unsigned long  int __size  );
void* aligned_alloc(unsigned long  int __alignment  , unsigned long  int __size  );
int posix_memalign(void** __memptr, unsigned long  int __alignment  , unsigned long  int __size  );
void abort();
int abs(int );
int atexit(void (*anonymous_lambda_var_nameZ6)());
int at_quick_exit(void (*anonymous_lambda_var_nameZ7)());
double atof(const char* );
int atoi(const char* );
long atol(const char* );
long long atoll(const char* );
void* bsearch(const void* __key, const void* __base, unsigned long  int __nel  , unsigned long  int __width  , int (*__compar)(const void*,const void*));
struct anonymous_typeX8 div(int , int );
void exit(int );
char* getenv(const char* );
long labs(long );
struct anonymous_typeX9 ldiv(long , long );
long long llabs(long  long );
struct anonymous_typeX10 lldiv(long  long , long  long );
int mblen(const char* __s, unsigned long  int __n  );
unsigned long  int mbstowcs(int*   , const char* , unsigned long  int __n  );
int mbtowc(int*   , const char* , unsigned long  int __n  );
void qsort(void* __base, unsigned long  int __nel  , unsigned long  int __width  , int (*__compar)(const void*,const void*));
void quick_exit(int );
int rand();
void srand(unsigned int );
double strtod(const char* , char** );
float strtof(const char* , char** );
long strtol(const char* __str, char** __endptr, int __base);
long  double strtold(const char* , char** );
long long strtoll(const char* __str, char** __endptr, int __base);
unsigned long  int strtoul(const char* __str, char** __endptr, int __base);
unsigned long  long strtoull(const char* __str, char** __endptr, int __base);
int system(const char* );
unsigned long  int wcstombs(char* , const int*   , unsigned long  int __n  );
int wctomb(char* , int   );
void _Exit(int );
long a64l(const char* );
double drand48();
char* ecvt(double , int , int* , int* );
double erand48(unsigned short int [3]);
char* fcvt(double , int , int* , int* );
char* gcvt(double , int , char* );
int getsubopt(char** , char** , char** );
int grantpt(int );
char* initstate(unsigned int , char* , unsigned long  int __size  );
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
int ptsname_r(int fildes, char* buffer, unsigned long  int buflen  );
int putenv(char* );
long random();
int rand_r(unsigned int* );
char* realpath(const char* , char* );
unsigned short int* seed48(unsigned short int [3]);
int setenv(const char* __name, const char* __value, int __overwrite);
void setkey(const char* );
char* setstate(const char* );
void srand48(long );
void srandom(unsigned int );
int unlockpt(int );
int unsetenv(const char* );
unsigned int arc4random();
void arc4random_addrandom(unsigned char* , int __datlen);
void arc4random_buf(void* __buf, unsigned long  int __nbytes  );
void arc4random_stir();
unsigned int arc4random_uniform(unsigned int __upper_bound  );
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
int daemon(int , int );
char* devname(int   , unsigned short int   );
char* devname_r(int   , unsigned short int   , char* buf, int len);
char* getbsize(int* , long* );
int getloadavg(double [], int __nelem);
const char* getprogname();
void setprogname(const char* );
int heapsort(void* __base, unsigned long  int __nel  , unsigned long  int __width  , int (*__compar)(const void*,const void*));
int mergesort(void* __base, unsigned long  int __nel  , unsigned long  int __width  , int (*__compar)(const void*,const void*));
void psort(void* __base, unsigned long  int __nel  , unsigned long  int __width  , int (*__compar)(const void*,const void*));
void psort_r(void* __base, unsigned long  int __nel  , unsigned long  int __width  , void* , int (*__compar)(void*,const void*,const void*));
void qsort_r(void* __base, unsigned long  int __nel  , unsigned long  int __width  , void* , int (*__compar)(void*,const void*,const void*));
int radixsort(const unsigned char** __base, int __nel, const unsigned char* __table, unsigned int __endbyte);
int rpmatch(const char* );
int sradixsort(const unsigned char** __base, int __nel, const unsigned char* __table, unsigned int __endbyte);
void sranddev();
void srandomdev();
long long strtonum(const char* __numstr, long long __minval, long long __maxval, const char** __errstrp);
long long strtoq(const char* __str, char** __endptr, int __base);
unsigned long  long strtouq(const char* __str, char** __endptr, int __base);
void* memchr(const void* __s, int __c, unsigned long  int __n  );
int memcmp(const void* __s1, const void* __s2, unsigned long  int __n  );
void* memcpy(void* __dst, const void* __src, unsigned long  int __n  );
void* memmove(void* __dst, const void* __src, unsigned long  int __len  );
void* memset(void* __b, int __c, unsigned long  int __len  );
char* strcat(char* __s1, const char* __s2);
char* strchr(const char* __s, int __c);
int strcmp(const char* __s1, const char* __s2);
int strcoll(const char* __s1, const char* __s2);
char* strcpy(char* __dst, const char* __src);
unsigned long  int strcspn(const char* __s, const char* __charset);
char* strerror(int __errnum);
unsigned long  int strlen(const char* __s);
char* strncat(char* __s1, const char* __s2, unsigned long  int __n  );
int strncmp(const char* __s1, const char* __s2, unsigned long  int __n  );
char* strncpy(char* __dst, const char* __src, unsigned long  int __n  );
char* strpbrk(const char* __s, const char* __charset);
char* strrchr(const char* __s, int __c);
unsigned long  int strspn(const char* __s, const char* __charset);
char* strstr(const char* __big, const char* __little);
char* strtok(char* __str, const char* __sep);
unsigned long  int strxfrm(char* __s1, const char* __s2, unsigned long  int __n  );
char* strtok_r(char* __str, const char* __sep, char** __lasts);
int strerror_r(int __errnum, char* __strerrbuf, unsigned long  int __buflen  );
char* strdup(const char* __s1);
void* memccpy(void* __dst, const void* __src, int __c, unsigned long  int __n  );
char* stpcpy(char* __dst, const char* __src);
char* stpncpy(char* __dst, const char* __src, unsigned long  int __n  );
char* strndup(const char* __s1, unsigned long  int __n  );
unsigned long  int strnlen(const char* __s1, unsigned long  int __n  );
char* strsignal(int __sig);
int memset_s(void* __s, unsigned long  int __smax  , int __c, unsigned long  int __n  );
void* memmem(const void* __big, unsigned long  int __big_len  , const void* __little, unsigned long  int __little_len  );
void memset_pattern4(void* __b, const void* __pattern4, unsigned long  int __len  );
void memset_pattern8(void* __b, const void* __pattern8, unsigned long  int __len  );
void memset_pattern16(void* __b, const void* __pattern16, unsigned long  int __len  );
char* strcasestr(const char* __big, const char* __little);
char* strchrnul(const char* __s, int __c);
char* strnstr(const char* __big, const char* __little, unsigned long  int __len  );
unsigned long  int strlcat(char* __dst, const char* __source, unsigned long  int __size  );
unsigned long  int strlcpy(char* __dst, const char* __source, unsigned long  int __size  );
void strmode(int __mode, char* __bp);
char* strsep(char** __stringp, const char* __delim);
void swab(const void* , void* , long __len  );
int timingsafe_bcmp(const void* __b1, const void* __b2, unsigned long  int __len  );
int strsignal_r(int __sig, char* __strsignalbuf, unsigned long  int __buflen  );
int ffs(int );
int strcasecmp(const char* , const char* );
int strncasecmp(const char* , const char* , unsigned long  int   );
int ffsl(long );
int ffsll(long  long );
int fls(int );
int flsl(long );
int flsll(long  long );
struct _xlocale* duplocale(struct _xlocale*   );
int freelocale(struct _xlocale*   );
struct _xlocale* newlocale(int , const char* , struct _xlocale*   );
struct _xlocale* uselocale(struct _xlocale*   );
struct lconv* localeconv();
char* setlocale(int , const char* );
int* __error();
void __assert_rtn(const char* , const char* , int , const char* );
char* asctime(const struct tm*   );
unsigned long  int clock();
char* ctime(const long*   );
double difftime(long   , long   );
struct tm* getdate(const char* );
struct tm* gmtime(const long*   );
struct tm* localtime(const long*   );
long mktime(struct tm*   );
unsigned long  int strftime(char* , unsigned long  int __maxsize  , const char* , const struct tm*   );
char* strptime(const char* , const char* , struct tm*   );
long time(long*   );
void tzset();
char* asctime_r(const struct tm*   , char* );
char* ctime_r(const long*   , char* );
struct tm* gmtime_r(const long*   , struct tm*   );
struct tm* localtime_r(const long*   , struct tm*   );
long posix2time(long   );
void tzsetwall();
long time2posix(long   );
long timelocal(struct tm*   );
long timegm(struct tm*   );
int nanosleep(const struct timespec* __rqtp  , struct timespec* __rmtp  );
int clock_getres(enum anonymous_typeY16 __clock_id  , struct timespec* __res  );
int clock_gettime(enum anonymous_typeY16 __clock_id  , struct timespec* __tp  );
unsigned long  long clock_gettime_nsec_np(enum anonymous_typeY16 __clock_id  );
int clock_settime(enum anonymous_typeY16 __clock_id  , const struct timespec* __tp  );
int timespec_get(struct timespec* ts  , int base);
unsigned long  int ___runetype(int   );
int ___tolower(int   );
int ___toupper(int   );
int __maskrune(int   , unsigned long  int );
int __toupper(int   );
int __tolower(int   );
unsigned int wctype(const char* );
unsigned int btowc(int );
unsigned int fgetwc(struct __sFILE*   );
int* fgetws(int*   , int __n, struct __sFILE*   );
unsigned int fputwc(int   , struct __sFILE*   );
int fputws(const int*   , struct __sFILE*   );
int fwide(struct __sFILE*   , int );
int fwprintf(struct __sFILE*   , const int*   , ...);
int fwscanf(struct __sFILE*   , const int*   , ...);
unsigned int getwc(struct __sFILE*   );
unsigned int getwchar();
unsigned long  int mbrlen(const char* , unsigned long  int __n  , union anonymous_typeZ1*   );
unsigned long  int mbrtowc(int*   , const char* , unsigned long  int __n  , union anonymous_typeZ1*   );
int mbsinit(const union anonymous_typeZ1*   );
unsigned long  int mbsrtowcs(int*   , const char** , unsigned long  int __len  , union anonymous_typeZ1*   );
unsigned int putwc(int   , struct __sFILE*   );
unsigned int putwchar(int   );
int swprintf(int*   , unsigned long  int __maxlen  , const int*   , ...);
int swscanf(const int*   , const int*   , ...);
unsigned int ungetwc(unsigned int   , struct __sFILE*   );
int vfwprintf(struct __sFILE*   , const int*   , __darwin_va_list   );
int vswprintf(int*   , unsigned long  int __maxlen  , const int*   , __darwin_va_list   );
int vwprintf(const int*   , __darwin_va_list   );
unsigned long  int wcrtomb(char* , int   , union anonymous_typeZ1*   );
int* wcscat(int*   , const int*   );
int* wcschr(const int*   , int   );
int wcscmp(const int*   , const int*   );
int wcscoll(const int*   , const int*   );
int* wcscpy(int*   , const int*   );
unsigned long  int wcscspn(const int*   , const int*   );
unsigned long  int wcsftime(int*   , unsigned long  int __maxlen  , const int*   , const struct tm*   );
unsigned long  int wcslen(const int*   );
int* wcsncat(int*   , const int*   , unsigned long  int __n  );
int wcsncmp(const int*   , const int*   , unsigned long  int   );
int* wcsncpy(int*   , const int*   , unsigned long  int __n  );
int* wcspbrk(const int*   , const int*   );
int* wcsrchr(const int*   , int   );
unsigned long  int wcsrtombs(char* , const int**   , unsigned long  int __len  , union anonymous_typeZ1*   );
unsigned long  int wcsspn(const int*   , const int*   );
int* wcsstr(const int*   , const int*   );
unsigned long  int wcsxfrm(int*   , const int*   , unsigned long  int __n  );
int wctob(unsigned int   );
double wcstod(const int*   , int**   );
int* wcstok(int*   , const int*   , int**   );
long wcstol(const int*   , int**   , int );
unsigned long  int wcstoul(const int*   , int**   , int );
int* wmemchr(const int*   , int   , unsigned long  int __n  );
int wmemcmp(const int*   , const int*   , unsigned long  int __n  );
int* wmemcpy(int*   , const int*   , unsigned long  int __n  );
int* wmemmove(int*   , const int*   , unsigned long  int __n  );
int* wmemset(int*   , int   , unsigned long  int __n  );
int wprintf(const int*   , ...);
int wscanf(const int*   , ...);
int wcswidth(const int*   , unsigned long  int __n  );
int wcwidth(int   );
int vfwscanf(struct __sFILE*   , const int*   , __darwin_va_list   );
int vswscanf(const int*   , const int*   , __darwin_va_list   );
int vwscanf(const int*   , __darwin_va_list   );
float wcstof(const int*   , int**   );
long  double wcstold(const int*   , int**   );
long long wcstoll(const int*   , int**   , int );
unsigned long  long wcstoull(const int*   , int**   , int );
unsigned long  int mbsnrtowcs(int*   , const char** , unsigned long  int   , unsigned long  int __len  , union anonymous_typeZ1*   );
int* wcpcpy(int*   , const int*   );
int* wcpncpy(int*   , const int*   , unsigned long  int __n  );
int* wcsdup(const int*   );
int wcscasecmp(const int*   , const int*   );
int wcsncasecmp(const int*   , const int*   , unsigned long  int n  );
unsigned long  int wcsnlen(const int*   , unsigned long  int __n  );
unsigned long  int wcsnrtombs(char* , const int**   , unsigned long  int   , unsigned long  int __len  , union anonymous_typeZ1*   );
struct __sFILE* open_wmemstream(int** __bufp  , unsigned long  int* __sizep  );
int* fgetwln(struct __sFILE*   , unsigned long  int* __len  );
unsigned long  int wcslcat(int*   , const int*   , unsigned long  int __len  );
unsigned long  int wcslcpy(int*   , const int*   , unsigned long  int __len  );
char* basename(char* );
char* dirname(char* );
char* basename_r(const char* , char* );
char* dirname_r(const char* , char* );
void init_task(void (*fun)());
static struct list$1sTask$ph* list$1sTask$ph_add(struct list$1sTask$ph* self, struct sTask* item  );
static void sTask_finalize(struct sTask* self  );
void save_context(struct sTask* task  );
void restore_context(struct sTask* task  );
_Bool timer_callback(struct repeating_timer* t);
static struct sTask* list$1sTask$ph$p_operator_load_element(struct list$1sTask$ph* self, int position);
static struct sTask* list$1sTask$ph_operator_load_element(struct list$1sTask$ph* self, int position);
static int list$1sTask$ph_length(struct list$1sTask$ph* self);
void task1();
void task2();
int main();
static struct list$1sTask$ph* list$1sTask$ph_initialize(struct list$1sTask$ph* self);
static void list$1sTask$ph$p_finalize(struct list$1sTask$ph* self);
static void list_item$1sTask$ph$p_finalize(struct list_item$1sTask$ph* self);
static void list$1sTask$ph_finalize(struct list$1sTask$ph* self);
static void repeating_timer_finalize(struct repeating_timer* self);
void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void come_save_stackframe(char* sname, int sline);
void stackframe();
char* come_get_stackframe();
_Bool die(char* msg);
void come_heap_init(int come_debug);
void come_heap_final();
void* alloc_from_pages(unsigned long  int size  );
void come_free_mem_of_heap_pool(void* mem);
void* come_alloc_mem_from_heap_pool(unsigned long  int size  , char* sname, int sline, char* class_name);
char* come_dynamic_typeof(void* mem);
void* come_calloc(unsigned long  int count  , unsigned long  int size  , char* sname, int sline, char* class_name);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
int come_get_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj);
void xassert(char* msg, _Bool test);
char* __builtin_string(char* str);
void come_push_stackframe_v2(char* sname, int sline, int id);
void come_pop_stackframe_v2();
void come_save_stackframe_v2(char* sname, int sline);
void stackframe_v2();
char* come_get_stackframe_v2();
void* come_calloc_v2(unsigned long  int count  , unsigned long  int size  , char* sname, int sline, char* class_name);
void come_free_v2(void* mem);
struct buffer* buffer_initialize(struct buffer* self  );
struct buffer* buffer_initialize_with_value(struct buffer* self  , char* mem, unsigned long  int size  );
void buffer_finalize(struct buffer* self  );
struct buffer* buffer_clone(struct buffer* self  );
_Bool buffer_equals(struct buffer* left  , struct buffer* right  );
int buffer_length(struct buffer* self  );
void buffer_reset(struct buffer* self  );
void buffer_trim(struct buffer* self  , int len);
struct buffer* buffer_append(struct buffer* self  , char* mem, unsigned long  int size  );
struct buffer* buffer_append_char(struct buffer* self  , char c);
struct buffer* buffer_append_str(struct buffer* self  , char* mem);
struct buffer* buffer_append_format(struct buffer* self  , char* msg, ...);
struct buffer* buffer_append_nullterminated_str(struct buffer* self  , char* mem);
struct buffer* buffer_append_int(struct buffer* self  , int value);
struct buffer* buffer_append_long(struct buffer* self  , long value);
struct buffer* buffer_append_short(struct buffer* self  , short value);
struct buffer* buffer_alignment(struct buffer* self  );
int buffer_compare(struct buffer* left  , struct buffer* right  );
struct buffer* charp_to_buffer(char* self);
char* buffer_to_string(struct buffer* self  );
unsigned char* buffer_head_pointer(struct buffer* self  );
struct buffer* chara_to_buffer(char* self, unsigned long  int len  );
struct buffer* charpa_to_buffer(char** self, unsigned long  int len  );
struct buffer* shorta_to_buffer(short* self, unsigned long  int len  );
struct buffer* inta_to_buffer(int* self, unsigned long  int len  );
struct buffer* longa_to_buffer(long* self, unsigned long  int len  );
struct buffer* floata_to_buffer(float* self, unsigned long  int len  );
struct buffer* doublea_to_buffer(double* self, unsigned long  int len  );
char* buffer_printable(struct buffer* self  );
static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values);
static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item);
static void list$1char$$p_finalize(struct list$1char$* self);
static void list_item$1char$$p_finalize(struct list_item$1char$* self);
struct list$1char$* chara_to_list(char* self, unsigned long  int len  );
static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values);
static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
struct list$1char$p* charpa_to_list(char** self, unsigned long  int len  );
static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values);
static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item);
static void list$1short$$p_finalize(struct list$1short$* self);
static void list_item$1short$$p_finalize(struct list_item$1short$* self);
struct list$1short$* shorta_to_list(short* self, unsigned long  int len  );
static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values);
static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
struct list$1int$* inta_to_list(int* self, unsigned long  int len  );
static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values);
static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item);
static void list$1long$$p_finalize(struct list$1long$* self);
static void list_item$1long$$p_finalize(struct list_item$1long$* self);
struct list$1long$* longa_to_list(long* self, unsigned long  int len  );
static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values);
static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item);
static void list$1float$$p_finalize(struct list$1float$* self);
static void list_item$1float$$p_finalize(struct list_item$1float$* self);
struct list$1float$* floata_to_list(float* self, unsigned long  int len  );
static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values);
static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item);
static void list$1double$$p_finalize(struct list$1double$* self);
static void list_item$1double$$p_finalize(struct list_item$1double$* self);
struct list$1double$* doublea_to_list(double* self, unsigned long  int len  );
_Bool _Bool_equals(_Bool self, _Bool right);
_Bool char_equals(char self, char right);
_Bool short_equals(short self, short right);
_Bool int_equals(int self, int right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(unsigned long  int self  , unsigned long  int right  );
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
_Bool charp_equals(char* self, char* right);
_Bool string_equals(char* self, char* right);
_Bool voidp_equals(void* self, void* right);
_Bool _Boolp_equals(_Bool* self, _Bool* right);
_Bool string_operator_equals(char* self, char* right);
_Bool charp_operator_equals(char* self, char* right);
_Bool voidp_operator_equals(char* self, char* right);
_Bool voidp_operator_not_equals(char* self, char* right);
_Bool string_operator_not_equals(char* self, char* right);
_Bool charp_operator_not_equals(char* self, char* right);
char* charp_operator_add(char* self, char* right);
char* string_operator_add(char* self, char* right);
char* charp_operator_mult(char* self, int right);
char* string_operator_mult(char* self, int right);
_Bool charpa_contained(char** self, unsigned long  int len  , char* str);
unsigned long  int shorta_length(short* self, unsigned long  int len  );
unsigned long  int inta_length(int* self, unsigned long  int len  );
unsigned long  int longa_length(long* self, unsigned long  int len  );
unsigned long  int floata_length(float* self, unsigned long  int len  );
unsigned long  int doublea_length(double* self, unsigned long  int len  );
unsigned int _Bool_get_hash_key(_Bool value);
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short int value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(unsigned long  int value  );
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int charp_get_hash_key(char* value);
unsigned int string_get_hash_key(char* value);
unsigned int voidp_get_hash_key(void* value);
_Bool _Bool_clone(_Bool self);
char char_clone(char self);
short int short_clone(short self);
int int_clone(int self);
long  int long_clone(long self);
unsigned long  int size_t_clone(unsigned long  int self  );
double double_clone(double self);
float float_clone(float self);
_Bool xisalpha(char c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisspace(char c);
_Bool xisalnum(char c);
_Bool xisascii(char c);
_Bool xispunct(char c);
int string_length(char* str);
int charp_length(char* str);
int chara_length(char* str);
char* charp_reverse(char* str);
char* string_operator_load_range_element(char* str, int head, int tail);
char* charp_operator_load_range_element(char* str, int head, int tail);
char* charp_substring(char* str, int head, int tail);
char* xsprintf(char* msg, ...);
char* charp_delete(char* str, int head, int tail);
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item  );
struct list$1char$ph* charp_split_char(char* self, char c);
char* charp_xsprintf(char* self, char* msg, ...);
char* int_xsprintf(int self, char* msg, ...);
char* charp_printable(char* str);
char* chara_printable(char* str);
char* charp_sub_plain(char* self, char* str, char* replace);
char* xbasename(char* path);
char* xnoextname(char* path);
char* xextname(char* path);
char* _Bool_to_string(_Bool self);
char* char_to_string(char self);
char* short_to_string(short self);
char* int_to_string(int self);
char* long_to_string(long self);
char* size_t_to_string(unsigned long  int self  );
char* float_to_string(float self);
char* double_to_string(double self);
char* string_to_string(char* self);
char* charp_to_string(char* self);
int _Bool_compare(_Bool left, _Bool right);
int char_compare(char left, char right);
int short_compare(short left, short right);
int int_compare(int left, int right);
int long_compare(long left, long right);
int size_t_compare(unsigned long  int left  , unsigned long  int right  );
int float_compare(float left, float right);
int double_compare(double left, double right);
int string_compare(char* left, char* right);
int charp_compare(char* left, char* right);
char* charp_puts(char* self);
char* charp_print(char* self);
char* charp_printf(char* self, ...);
int int_printf(int self, char* msg);
long long_printf(long self, char* msg);
void int_times(int self, void* parent, void (*block)(void*,int));
static void match_context_finalize(struct anonymous_typeX16* self  );
int re_matchp_ex(struct re_program* pattern  , const char* text, int* matchlength, struct re_capture* captures  , int max_captures, _Bool ignore_case);
int re_matchp(struct re_program* pattern  , const char* text, int* matchlength, struct re_capture* captures  , int max_captures);
int re_match(const char* pattern, const char* text, int* matchlength);
static void regex_program_t_finalize(struct re_program* self  );
static void compiler_state_finalize(struct anonymous_typeX15* self  );
struct re_program* re_compile(const char* pattern);
void re_print(struct re_program* pattern  );
void clear_captures(struct anonymous_typeX16* ctx  );
void snapshot_captures(const struct anonymous_typeX16* ctx  , struct re_capture* buffer_  );
void restore_captures(struct anonymous_typeX16* ctx  , const struct re_capture* buffer_  );
struct regex_t* new_token(struct anonymous_typeX15* st  );
int append_token(struct regex_t** head  , struct regex_t** tail  , struct regex_t* token  );
struct regex_t* compile_sequence(struct anonymous_typeX15* st  , const char* pattern, int* pos, int in_group);
const char* matchpattern(struct regex_t* pattern  , const char* text, struct anonymous_typeX16* ctx  );
const char* matchgroup(struct regex_t* token  , struct regex_t* rest  , const char* text, struct anonymous_typeX16* ctx  );
const char* matchstar(struct regex_t* token  , struct regex_t* rest  , const char* text, struct anonymous_typeX16* ctx  );
const char* matchplus(struct regex_t* token  , struct regex_t* rest  , const char* text, struct anonymous_typeX16* ctx  );
const char* matchquestion(struct regex_t* token  , struct regex_t* rest  , const char* text, struct anonymous_typeX16* ctx  );
unsigned char re_fold_char(unsigned char c, _Bool ignore_case);
const char* matchtoken(struct regex_t* token  , const char* text, struct anonymous_typeX16* ctx  );
int matchdigit(char c);
int matchalpha(char c);
int matchwhitespace(char c);
int matchalphanum(char c);
int matchrange(char c, const char* str, _Bool ignore_case);
int matchdot(char c);
int ismetachar(char c);
int matchmetachar(char c, const char* str);
int matchcharclass(char c, const char* str, _Bool ignore_case);
void re_print_internal(struct regex_t* pattern  , int depth);
int re_get_group_count(struct re_program* pattern  );
int charp_index_regex(char* self, char* reg, int default_value, _Bool ignore_case);
int charp_rindex_regex(char* self, char* reg, int default_value, _Bool ignore_case);
char* string_chomp(char* str);
int string_rindex_regex(char* self, char* reg, int default_value, _Bool ignore_case);
int string_index_regex(char* self, char* reg, int default_value, _Bool ignore_case);
_Bool charp_match(char* self, char* reg, _Bool ignore_case);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item  );
struct list$1char$ph* charp_scan(char* self, char* reg, _Bool ignore_case);
struct list$1char$ph* charp_split(char* self, char* reg, _Bool ignore_case);
char* string_sub(char* self, char* reg, char* replace, _Bool ignore_case);
struct list$1char$ph* string_scan(char* self, char* reg, _Bool ignore_case);
struct list$1char$ph* string_split(char* self, char* reg, _Bool ignore_case);
_Bool string_match(char* self, char* reg, _Bool ignore_case);
char* charp_sub(char* self, char* reg, char* replace, _Bool global, _Bool ignore_case);
char* charp_sub_block(char* self, char* reg, _Bool global, _Bool ignore_case, void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
struct list$1char$ph* charp_scan_block(char* self, char* reg, _Bool ignore_case, void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
char* string_sub_block(char* self, char* reg, _Bool global, _Bool ignore_case, void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
int* __builtin_wstring(char* str);
int wchar_tp_length(int* str  );
int wchar_ta_length(int* str  );
int wstring_length(int* str  );
char* string_lower_case(char* str);
char* string_upper_case(char* str);
int* wchar_tp_substring(int* str  , int head, int tail);
int charp_index_count(char* str, char* search_str, int count, int default_value);
int charp_rindex(char* str, char* search_str, int default_value);
int charp_rindex_count(char* str, char* search_str, int count, int default_value);
char* charp_strip(char* self);
char* wchar_tp_to_string(int* wstr  );
char* wchar_ta_to_string(int* wstr  );
int* charp_to_wstring(char* str);
int* chara_to_wstring(char* str);
int* wchar_tp_delete(int* str  , int head, int tail);
int wchar_tp_index(int* str  , int* search_str  , int default_value);
int wchar_tp_rindex(int* str  , int* search_str  , int default_value);
int* wchar_tp_reverse(int* str  );
int* wchar_tp_multiply(int* str  , int n);
int* wchar_tp_printable(int* str  );
int wchar_tp_compare(int* left  , int* right  );
int wstring_compare(int* left  , int* right  );
int* wchar_tp_operator_mult(int* str  , int n);
int* wstring_operator_mult(int* str  , int n);
_Bool wstring_operator_equals(int* left  , int* right  );
_Bool wstring_operator_not_equals(int* left  , int* right  );
int* wchar_tp_operator_add(int* left  , int* right  );
int* wstring_operator_add(int* left  , int* right  );
int charp_index(char* str, char* search_str, int default_value);
char* charp_replace(char* self, int index, char c);
char* charp_multiply(char* str, int n);
struct list$1char$ph* charp_split_str(char* self, char* str);
unsigned int wchar_tp_get_hash_key(int* value  );
_Bool wstring_equals(int* left  , int* right  );
_Bool wchar_t_operator_equals(int left  , int right  );
_Bool wchar_t_operator_not_equals(int left  , int right  );
unsigned int wchar_t_get_hash_key(int value  );
_Bool wchar_t_equals(int left  , int right  );
char* wchar_t_to_string(int wc  );
char* xrealpath(char* path);
char* xdirname(char* path);
unsigned long  int xwcslen(int* wstr  );
int* wstring_substring(int* str  , int head, int tail);
int string_index_count(char* str, char* search_str, int count, int default_value);
int string_rindex(char* str, char* search_str, int default_value);
int string_rindex_count(char* str, char* search_str, int count, int default_value);
char* string_strip(char* self);
char* wstring_to_string(int* wstr  );
int* int_to_wstring(int self);
int* wstring_delete(int* str  , int head, int tail);
int wstring_index(int* str  , int* search_str  , int default_value);
int wstring_rindex(int* str  , int* search_str  , int default_value);
int* wstring_reverse(int* str  );
int* wstring_multiply(int* str  , int n);
int* wstring_printable(int* str  );
unsigned int wstring_get_hash_key(int* value  );
int string_index(char* str, char* search_str, int default_value);
char* string_replace(char* self, int index, char c);
char* string_multiply(char* str, int n);
struct list$1char$ph* string_split_str(char* self, char* str);
int* string_to_wstring(char* str);
char* charp_chomp(char* str);
_Bool wchar_tp_equals(int* left  , int* right  );
_Bool wchar_tp_operator_equals(int* left  , int* right  );
_Bool wchar_tp_operator_not_equals(int* left  , int* right  );
char* FILE_read(struct __sFILE* f  );
int FILE_write(struct __sFILE* f  , char* str);
int FILE_fclose(struct __sFILE* f  );
struct __sFILE* FILE_fprintf(struct __sFILE* f  , const char* msg, ...);
int charp_write(char* self, char* file_name, _Bool append);
char* charp_read(char* file_name);
struct list$1char$ph* FILE_readlines(struct __sFILE* f  );
_Bool xiswalpha(int c  );
_Bool xiswblank(int c  );
_Bool xiswdigit(int c  );
_Bool xiswalnum(int c  );
_Bool xiswascii(int c  );
// uniq global variable
char* gComeStackFrameSName[128];

int gComeStackFrameSLine[128];

int gComeStackFrameID[128];

int gNumComeStackFrame=0;

char* gComeStackFrameBuffer=0;

struct sMemHeader* gAllocMem  ;

int gComeDebugLib=0;

int gNumAlloc=0;

int gNumFree=0;

// inline function
inline int __sputc(int _c, struct __sFILE* _p  )
{
    if(--_p->_w>=0||(_p->_w>=_p->_lbfsize&&(char)_c!=10)) {
        return (*_p->_p++=_c);
    }
    else {
        return (__swbuf(_c,_p));
    }
}
static inline unsigned short int _OSSwapInt16(unsigned short int _data  )
{
    return (unsigned short int)(_data<<8|_data>>8);
}
static inline unsigned int _OSSwapInt32(unsigned int _data  )
{
    _data=(((_data^(_data>>16|(_data<<16)))&0xFF00FFFF)>>8)^(_data>>8|_data<<24);
    return _data;
}
static inline unsigned long  long _OSSwapInt64(unsigned long  long _data  )
{
    union anonymous_typeZ5 _u;
    _u._ul[0]=(unsigned int)(_data>>32);
    _u._ul[1]=(unsigned int)(_data&0xffffffff);
    _u._ul[0]=_OSSwapInt32(_u._ul[0]);
    _u._ul[1]=_OSSwapInt32(_u._ul[1]);
    return _u._ull;
}
inline int isascii(int _c)
{
    return ((_c&~0x7F)==0);
}
inline int __istype(int _c  , unsigned long  int _f)
{
    return (((isascii(_c))?(!!(_DefaultRuneLocale.__runetype[_c]&_f)):(!!__maskrune(_c,_f))));
}
inline int __isctype(int _c  , unsigned long  int _f)
{
    return (((_c<0||_c>=(1<<8)))?(0):(!!(_DefaultRuneLocale.__runetype[_c]&_f)));
}
inline int __wcwidth(int _c  )
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
inline int iswalnum(unsigned int _wc  )
{
    return (__istype(_wc,0x00000100L|0x00000400L));
}
inline int iswalpha(unsigned int _wc  )
{
    return (__istype(_wc,0x00000100L));
}
inline int iswcntrl(unsigned int _wc  )
{
    return (__istype(_wc,0x00000200L));
}
inline int iswctype(unsigned int _wc  , unsigned int _charclass  )
{
    return (__istype(_wc,_charclass));
}
inline int iswdigit(unsigned int _wc  )
{
    return (__isctype(_wc,0x00000400L));
}
inline int iswgraph(unsigned int _wc  )
{
    return (__istype(_wc,0x00000800L));
}
inline int iswlower(unsigned int _wc  )
{
    return (__istype(_wc,0x00001000L));
}
inline int iswprint(unsigned int _wc  )
{
    return (__istype(_wc,0x00040000L));
}
inline int iswpunct(unsigned int _wc  )
{
    return (__istype(_wc,0x00002000L));
}
inline int iswspace(unsigned int _wc  )
{
    return (__istype(_wc,0x00004000L));
}
inline int iswupper(unsigned int _wc  )
{
    return (__istype(_wc,0x00008000L));
}
inline int iswxdigit(unsigned int _wc  )
{
    return (__isctype(_wc,0x00010000L));
}
inline unsigned int towlower(unsigned int _wc  )
{
    return (__tolower(_wc));
}
inline unsigned int towupper(unsigned int _wc  )
{
    return (__toupper(_wc));
}

// body function
void init_task(void (*fun)())
{
    unsigned int* stack  ;
    unsigned int* stack_end  ;
    int i;
    void* __right_value0 = (void*)0;
    struct sTask* task  ;
    memset(&i, 0, sizeof(i));
    stack=(unsigned int*)calloc(1,sizeof(unsigned int)*1024);
    stack_end=(unsigned int*)(&stack[1024-1]);
    *(--stack_end)=0x01000000;
    *(--stack_end)=(unsigned int)fun;
    *(--stack_end)=0xFFFFFFFD;
    for(i=0;i<5;i++){
        *(--stack_end)=0;
    }
    task=(struct sTask*)come_increment_ref_count((struct sTask*)come_calloc_v2(1, sizeof(struct sTask)*(1), "main.c", 48, "struct sTask*"));
    task->sp=(unsigned int)stack_end;
    list$1sTask$ph_add(gTasks,(struct sTask*)come_increment_ref_count(task));
    come_call_finalizer(sTask_finalize, task, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct list$1sTask$ph* list$1sTask$ph_add(struct list$1sTask$ph* self, struct sTask* item  )
{
    struct list$1sTask$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sTask$ph* litem;
    struct sTask* __dec_obj1  ;
    struct list_item$1sTask$ph* litem_0;
    struct sTask* __dec_obj2  ;
    struct list_item$1sTask$ph* litem_1;
    struct sTask* __dec_obj3  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(sTask_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sTask$ph*)come_increment_ref_count(((struct list_item$1sTask$ph*)(__right_value0=(struct list_item$1sTask$ph*)come_calloc_v2(1, sizeof(struct list_item$1sTask$ph)*(1), "/usr/local/include/neo-c.h", 947, "struct list_item$1sTask$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj1=litem->item,
        litem->item=(struct sTask*)come_increment_ref_count(item);
        come_call_finalizer(sTask_finalize, __dec_obj1,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_0=(struct list_item$1sTask$ph*)come_increment_ref_count(((struct list_item$1sTask$ph*)(__right_value0=(struct list_item$1sTask$ph*)come_calloc_v2(1, sizeof(struct list_item$1sTask$ph)*(1), "/usr/local/include/neo-c.h", 957, "struct list_item$1sTask$ph*"))));
        litem_0->prev=self->head;
        litem_0->next=((void*)0);
        __dec_obj2=litem_0->item,
        litem_0->item=(struct sTask*)come_increment_ref_count(item);
        come_call_finalizer(sTask_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_0;
        self->head->next=litem_0;
    }
    else {
        litem_1=(struct list_item$1sTask$ph*)come_increment_ref_count(((struct list_item$1sTask$ph*)(__right_value0=(struct list_item$1sTask$ph*)come_calloc_v2(1, sizeof(struct list_item$1sTask$ph)*(1), "/usr/local/include/neo-c.h", 967, "struct list_item$1sTask$ph*"))));
        litem_1->prev=self->tail;
        litem_1->next=((void*)0);
        __dec_obj3=litem_1->item,
        litem_1->item=(struct sTask*)come_increment_ref_count(item);
        come_call_finalizer(sTask_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_1;
        self->tail=litem_1;
    }
    self->len++;
    __result_obj__0 = self;
    come_call_finalizer(sTask_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void sTask_finalize(struct sTask* self  )
{
}

void save_context(struct sTask* task  )
{
    __asm volatile("ldr r0, =R4; \n"
        "str r4, [r0];\n"
        :
        :
        : "r0", "r4"
    );
    task->r4=R4;
    __asm volatile("ldr r0, =R5; \n"
        "str r5, [r0];\n"
        :
        :
        : "r0", "r5"
    );
    task->r5=R5;
    __asm volatile("ldr r0, =R6; \n"
        "str r6, [r0];\n"
        :
        :
        : "r0", "r6"
    );
    task->r6=R6;
    __asm volatile("ldr r0, =R7; \n"
        "str r7, [r0];\n"
        :
        :
        : "r0", "r7"
    );
    task->r7=R7;
    __asm volatile("ldr r0, =R8; \n"
        "mov r3, r8;\n"
        "str r3, [r0];\n"
        :
        :
        : "r0", "r3", "r8"
    );
    task->r8=R8;
    __asm volatile("ldr r0, =R9; \n"
        "mov r3, r9;\n"
        "str r3, [r0];\n"
        :
        :
        : "r0", "r3", "r9"
    );
    task->r9=R9;
    __asm volatile("ldr r0, =R10; \n"
        "mov r3, r10;\n"
        "str r3, [r0];\n"
        :
        :
        : "r0", "r3", "r10"
    );
    task->r10=R10;
    __asm volatile("ldr r0, =R11; \n"
        "mov r3, r11;\n"
        "str r3, [r0];\n"
        :
        :
        : "r0", "r3", "r11"
    );
    task->r11=R11;
    __asm volatile("mrs r1, psp\n"
        "ldr r0, =SP; \n"
        "str r1, [r0]; \n"
        : 
        :
        : "r0", "r1"
    );
    task->sp=SP;
}

void restore_context(struct sTask* task  )
{
    SP=task->sp;
    PC=*((unsigned int*)SP+6);
    __asm volatile("ldr r0, =SP; \n"
        "ldr r3, [r0]; \n"
        "msr psp, r3; \n"
        :
        :
        : "r0", "r3"
    );
    R11=task->r11;
    __asm volatile("ldr r0, =R11; \n"
        "ldr r4, [r0];\n"
        "mov r11, r4;\n"
        :
        :
        : "r0", "r4", "r11"
    );
    R10=task->r10;
    __asm volatile("ldr r0, =R10; \n"
        "ldr r4, [r0];\n"
        "mov r10, r4;\n"
        :
        :
        : "r0", "r4", "r10"
    );
    R9=task->r9;
    __asm volatile("ldr r0, =R9; \n"
        "ldr r4, [r0];\n"
        "mov r9, r4;\n"
        :
        :
        : "r0", "r4", "r9"
    );
    R8=task->r8;
    __asm volatile("ldr r0, =R8; \n"
        "ldr r4, [r0];\n"
        "mov r8, r4;\n"
        :
        :
        : "r0", "r4", "r8"
    );
    R7=task->r7;
    __asm volatile("ldr r0, =R7; \n"
        "ldr r7, [r0];\n"
        :
        :
        : "r0", "r7"
    );
    R6=task->r6;
    __asm volatile("ldr r0, =R6; \n"
        "ldr r6, [r0];\n"
        :
        :
        : "r0", "r6"
    );
    R5=task->r5;
    __asm volatile("ldr r0, =R5; \n"
        "ldr r5, [r0];\n"
        :
        :
        : "r0", "r5"
    );
    R4=task->r4;
    __asm volatile("ldr r0, =R4; \n"
        "ldr r4, [r0];\n"
        :
        :
        : "r0", "r4"
    );
}

_Bool timer_callback(struct repeating_timer* t)
{
    void* __right_value0 = (void*)0;
    save_context(((struct sTask*)(__right_value0=list$1sTask$ph_operator_load_element(gTasks,gCurrentTask))));
    come_call_finalizer(sTask_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gCurrentTask=(gCurrentTask+1)%list$1sTask$ph_length(gTasks);
    restore_context(((struct sTask*)(__right_value0=list$1sTask$ph_operator_load_element(gTasks,gCurrentTask))));
    come_call_finalizer(sTask_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return 1;
}

static struct sTask* list$1sTask$ph$p_operator_load_element(struct list$1sTask$ph* self, int position)
{
    struct sTask* default_value  ;
    struct sTask* __result_obj__0  ;
    struct list_item$1sTask$ph* it;
    int i;
    struct sTask* default_value_2  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sTask*));
        __result_obj__0 = (struct sTask*)come_increment_ref_count(default_value);
        come_call_finalizer(sTask_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sTask_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
        come_call_finalizer(sTask_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct sTask*)come_increment_ref_count(it->item);
            come_call_finalizer(sTask_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_2,0,sizeof(struct sTask*));
    __result_obj__0 = (struct sTask*)come_increment_ref_count(default_value_2);
    come_call_finalizer(sTask_finalize, default_value_2, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sTask_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sTask* list$1sTask$ph_operator_load_element(struct list$1sTask$ph* self, int position)
{
    struct sTask* default_value  ;
    struct sTask* __result_obj__0  ;
    struct list_item$1sTask$ph* it;
    int i;
    struct sTask* default_value_3  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sTask*));
        __result_obj__0 = (struct sTask*)come_increment_ref_count(default_value);
        come_call_finalizer(sTask_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sTask_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
        come_call_finalizer(sTask_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct sTask*)come_increment_ref_count(it->item);
            come_call_finalizer(sTask_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_3,0,sizeof(struct sTask*));
    __result_obj__0 = (struct sTask*)come_increment_ref_count(default_value_3);
    come_call_finalizer(sTask_finalize, default_value_3, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sTask_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static int list$1sTask$ph_length(struct list$1sTask$ph* self)
{
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

void task1()
{
    while(1) {
        puts("TASK1");
        sleep_ms(1000);
        puts("TASK1-2");
        sleep_ms(1000);
    }
}

void task2()
{
    while(1) {
        puts("TASK2");
        sleep_ms(1000);
        puts("TASK2-2");
        sleep_ms(1000);
    }
}

int main()
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sTask$ph* __dec_obj4;
    struct repeating_timer timer;
    int __result_obj__0;
    memset(&timer, 0, sizeof(timer));
    come_heap_init(0);
    stdio_init_all();
    sleep_ms(5000);
    __dec_obj4=gTasks,
    gTasks=(struct list$1sTask$ph*)come_increment_ref_count(list$1sTask$ph_initialize((struct list$1sTask$ph*)come_increment_ref_count((struct list$1sTask$ph*)come_calloc_v2(1, sizeof(struct list$1sTask$ph)*(1), "main.c", 257, "struct list$1sTask$ph*"))));
    come_call_finalizer(list$1sTask$ph_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    init_task(task1);
    init_task(task2);
    SP=((struct sTask*)(__right_value0=list$1sTask$ph_operator_load_element(gTasks,gCurrentTask)))->sp;
    come_call_finalizer(sTask_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    add_repeating_timer_ms(1000,timer_callback,0,&timer);
    __asm volatile("ldr r0, =SP; \n"
        "ldr r4, [r0]; \n"
        "msr psp, r4\n"
        "mov r0, #0x02\n"
        "msr CONTROL, r0\n"
        "isb\n"
        :
        : 
        : "r0","r4"            // 使用するレジスタ
    );
    task1();
    while(1) {
    }
    __result_obj__0 = 0;
    come_call_finalizer(repeating_timer_finalize, (&timer), (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer(list$1sTask$ph$p_finalize, gTasks, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_heap_final();
    return __result_obj__0;
}

static struct list$1sTask$ph* list$1sTask$ph_initialize(struct list$1sTask$ph* self)
{
    struct list$1sTask$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__0 = (struct list$1sTask$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sTask$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sTask$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void list$1sTask$ph$p_finalize(struct list$1sTask$ph* self)
{
    struct list_item$1sTask$ph* it;
    struct list_item$1sTask$ph* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sTask$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTask$ph$p_finalize(struct list_item$1sTask$ph* self)
{
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sTask_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list$1sTask$ph_finalize(struct list$1sTask$ph* self)
{
    struct list_item$1sTask$ph* it;
    struct list_item$1sTask$ph* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sTask$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void repeating_timer_finalize(struct repeating_timer* self)
{
}

void come_push_stackframe(char* sname, int sline, int id)
{
    if(gNumComeStackFrame<128) {
        gComeStackFrameSName[gNumComeStackFrame]=sname;
        gComeStackFrameSLine[gNumComeStackFrame]=sline;
        gComeStackFrameID[gNumComeStackFrame]=id;
        gNumComeStackFrame++;
    }
}

void come_pop_stackframe()
{
    if(gNumComeStackFrame>0) {
        gNumComeStackFrame--;
    }
}

void come_save_stackframe(char* sname, int sline)
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer* buf  ;
    int i;
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 208, "struct buffer*"))));
    buffer_append_format(buf,"%s %d\n",sname,sline);
    for(i=gNumComeStackFrame-2;i>=0;i--){
        buffer_append_format(buf,"%s %d #%d\n",gComeStackFrameSName[i],gComeStackFrameSLine[i],gComeStackFrameID[i]);
    }
    if(gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value0=buffer_to_string(buf))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void stackframe()
{
    int i;
    for(i=gNumComeStackFrame-1;i>=0;i--){
        printf("%s %d #%d\n",gComeStackFrameSName[i],gComeStackFrameSLine[i],gComeStackFrameID[i]);
    }
}

char* come_get_stackframe()
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(gComeStackFrameBuffer))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool die(char* msg)
{
    perror(msg);
    stackframe_v2();
    exit(4);
    return 0;
}

void come_heap_init(int come_debug)
{
    gComeDebugLib=come_debug;
    gComeStackFrameBuffer=0;
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gAllocMem=0;
}

void come_heap_final()
{
    struct sMemHeader* it  ;
    int n;
    _Bool flag;
    int i;
    struct sMemHeaderTiny* it_4  ;
    int n_5;
    if(gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    if(gComeDebugLib) {
        it=gAllocMem;
        n=0;
        while(it) {
            n++;
            flag=0;
            printf("#%d ",n);
            if(it->class_name) {
                printf("%p (%s): ",(char*)it+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it->class_name);
            }
            for(i=0;i<16;i++){
                if(it->sname[i]) {
                    printf("%s %d #%d, ",it->sname[i],it->sline[i],it->id[i]);
                    flag=1;
                }
            }
            if(flag) {
                puts("");
            }
            it=it->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n,gNumAlloc,gNumFree);
    }
    else {
        it_4=(struct sMemHeaderTiny*)gAllocMem;
        n_5=0;
        while(it_4) {
            n_5++;
            if(it_4->class_name) {
                printf("#%d %p (%s) %s %d\n",n_5,(char*)it_4+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_4->class_name,it_4->sname,it_4->sline);
            }
            it_4=it_4->next;
        }
        if(n_5>0) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_5,gNumAlloc,gNumFree);
        }
    }
}

void* alloc_from_pages(unsigned long  int size  )
{
    void* __result_obj__0;
    __result_obj__0 = calloc(1,size);
    return __result_obj__0;
}

void come_free_mem_of_heap_pool(void* mem)
{
    struct sMemHeader* it  ;
    struct sMemHeader* prev_it  ;
    struct sMemHeader* next_it  ;
    unsigned long  int size  ;
    struct sMemHeaderTiny* it_6  ;
    struct sMemHeaderTiny* prev_it_7  ;
    struct sMemHeaderTiny* next_it_8  ;
    unsigned long  int size_9  ;
    if(mem) {
        if(gComeDebugLib) {
            it=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(it->allocated!=177783) {
                return;
            }
            it->allocated=0;
            prev_it=it->prev;
            next_it=it->next;
            if(gAllocMem==it) {
                gAllocMem=next_it;
                if(gAllocMem) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(prev_it) {
                    prev_it->next=next_it;
                }
                if(next_it) {
                    next_it->prev=prev_it;
                }
            }
            size=it->size;
            free(it);
            gNumFree++;
        }
        else {
            it_6=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(it_6->allocated!=177783) {
                return;
            }
            it_6->allocated=0;
            prev_it_7=it_6->prev;
            next_it_8=it_6->next;
            if(gAllocMem==it_6) {
                gAllocMem=(struct sMemHeader*)next_it_8;
                if(gAllocMem) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(prev_it_7) {
                    prev_it_7->next=next_it_8;
                }
                if(next_it_8) {
                    next_it_8->prev=prev_it_7;
                }
            }
            size_9=it_6->size;
            free(it_6);
            gNumFree++;
        }
    }
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size  , char* sname, int sline, char* class_name)
{
    unsigned long  int size2  ;
    void* result;
    struct sMemHeader* it  ;
    int i;
    int i_10;
    void* __result_obj__0;
    unsigned long  int size2_11  ;
    void* result_12;
    struct sMemHeaderTiny* it_13  ;
    memset(&i, 0, sizeof(i));
    memset(&i_10, 0, sizeof(i_10));
    if(gComeDebugLib) {
        size2=size+sizeof(struct sMemHeader);
        size2=(size2+3&~0x3);
        result=alloc_from_pages(size2);
        it=result;
        it->allocated=177783;
        it->size=size2;
        it->free_next=0;
        come_push_stackframe_v2(sname,sline,0);
        if(gNumComeStackFrame<16) {
            for(i=0;i<gNumComeStackFrame;i++){
                it->sname[i]=gComeStackFrameSName[i];
                it->sline[i]=gComeStackFrameSLine[i];
                it->id[i]=gComeStackFrameID[i];
            }
        }
        else {
            for(i_10=0;i_10<16;i_10++){
                it->sname[i_10]=gComeStackFrameSName[gNumComeStackFrame-1-i_10];
                it->sline[i_10]=gComeStackFrameSLine[gNumComeStackFrame-1-i_10];
                it->id[i_10]=gComeStackFrameID[gNumComeStackFrame-1-i_10];
            }
        }
        come_pop_stackframe_v2();
        it->next=gAllocMem;
        it->prev=((void*)0);
        it->class_name=class_name;
        if(gAllocMem) {
            gAllocMem->prev=it;
        }
        gAllocMem=it;
        gNumAlloc++;
        __result_obj__0 = (char*)result+sizeof(struct sMemHeader);
        return __result_obj__0;
    }
    else {
        size2_11=size+sizeof(struct sMemHeaderTiny);
        size2_11=(size2_11+3&~0x3);
        result_12=alloc_from_pages(size2_11);
        it_13=result_12;
        it_13->allocated=177783;
        it_13->class_name=class_name;
        it_13->sname=sname;
        it_13->sline=sline;
        it_13->size=size2_11;
        it_13->free_next=0;
        it_13->next=(struct sMemHeaderTiny*)gAllocMem;
        it_13->prev=((void*)0);
        if(gAllocMem) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_13;
        }
        gAllocMem=(struct sMemHeader*)it_13;
        gNumAlloc++;
        __result_obj__0 = (char*)result_12+sizeof(struct sMemHeaderTiny);
        return __result_obj__0;
    }
}

char* come_dynamic_typeof(void* mem)
{
    struct sMemHeader* it  ;
    char* __result_obj__0;
    struct sMemHeaderTiny* it_14  ;
    if(gComeDebugLib) {
        it=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(it->allocated!=177783) {
            printf("invalid heap object(%p)(1)\n",it);
            exit(2);
        }
        __result_obj__0 = it->class_name;
        return __result_obj__0;
    }
    else {
        it_14=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(it_14->allocated!=177783) {
            printf("invalid heap object(%p)(2)\n",it_14);
            exit(2);
        }
        __result_obj__0 = it_14->class_name;
        return __result_obj__0;
    }
}

void* come_calloc(unsigned long  int count  , unsigned long  int size  , char* sname, int sline, char* class_name)
{
    char* mem;
    unsigned long  int* ref_count  ;
    unsigned long  int* size2  ;
    void* __result_obj__0;
    mem=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count=(unsigned long  int*)mem;
    *ref_count=0;
    size2=(unsigned long  int*)(mem+sizeof(unsigned long  int));
    *size2=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__0 = mem+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__0;
}

void come_free(void* mem)
{
    unsigned long  int* ref_count  ;
    if(mem==0) {
        return;
    }
    ref_count=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name)
{
    void* __result_obj__0;
    char* mem;
    unsigned long  int* size_p  ;
    unsigned long  int size  ;
    void* result;
    if(!block) {
        __result_obj__0 = ((void*)0);
        return __result_obj__0;
    }
    mem=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p=(unsigned long  int*)(mem+sizeof(unsigned long  int));
    size=*size_p-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result=come_calloc_v2(1,size,sname,sline,class_name);
    memcpy(result,block,size);
    __result_obj__0 = result;
    return __result_obj__0;
}

void* come_increment_ref_count(void* mem)
{
    void* __result_obj__0;
    unsigned long  int* ref_count  ;
    if(mem==0) {
        __result_obj__0 = mem;
        return __result_obj__0;
    }
    ref_count=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count)++;
    __result_obj__0 = mem;
    return __result_obj__0;
}

void* come_print_ref_count(void* mem)
{
    void* __result_obj__0;
    unsigned long  int* ref_count  ;
    if(mem==0) {
        __result_obj__0 = mem;
        return __result_obj__0;
    }
    ref_count=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count);
    __result_obj__0 = mem;
    return __result_obj__0;
}

int come_get_ref_count(void* mem)
{
    unsigned long  int* ref_count  ;
    if(mem==0) {
        return 0;
    }
    ref_count=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj)
{
    void* __result_obj__0;
    long* ref_count;
    long count;
    void (*finalizer)(void*);
    if(result_obj) {
        if(mem==result_obj) {
            __result_obj__0 = mem;
            return __result_obj__0;
        }
    }
    if(mem==0) {
        __result_obj__0 = 0;
        return __result_obj__0;
    }
    ref_count=(long*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(!no_decrement) {
        (*ref_count)--;
    }
    count=*ref_count;
    if(!no_free&&count<=0) {
        if(protocol_obj&&protocol_fun) {
            finalizer=protocol_fun;
            finalizer(protocol_obj);
            come_free_v2(protocol_obj);
        }
        come_free_v2(mem);
        __result_obj__0 = 0;
        return __result_obj__0;
    }
    __result_obj__0 = mem;
    return __result_obj__0;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj)
{
    void (*finalizer)(void*);
    void (*finalizer_15)(void*);
    void (*finalizer_16)(void*);
    long* ref_count;
    long count;
    void (*finalizer_17)(void*);
    void (*finalizer_18)(void*);
    void (*finalizer_19)(void*);
    if(result_obj) {
        if(mem==result_obj) {
            return;
        }
    }
    if(mem==0) {
        return;
    }
    if(call_finalizer_only) {
        if(fun) {
            if(protocol_obj&&protocol_fun) {
                finalizer=protocol_fun;
                finalizer(protocol_obj);
            }
            finalizer_15=fun;
            finalizer_15(mem);
        }
        else {
            if(protocol_obj&&protocol_fun) {
                finalizer_16=protocol_fun;
                finalizer_16(protocol_obj);
            }
        }
    }
    else {
        ref_count=(long*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(!no_decrement) {
            (*ref_count)--;
        }
        count=*ref_count;
        if(!no_free&&count<=0) {
            if(mem) {
                if(fun) {
                    if(protocol_obj&&protocol_fun) {
                        finalizer_17=protocol_fun;
                        finalizer_17(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(fun) {
                        finalizer_18=fun;
                        finalizer_18(mem);
                    }
                }
                else {
                    if(protocol_obj&&protocol_fun) {
                        finalizer_19=protocol_fun;
                        finalizer_19(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                }
                come_free_v2(mem);
            }
        }
    }
}

void xassert(char* msg, _Bool test)
{
    printf("%s...",msg);
    if(!test) {
        puts("false");
        exit(2);
    }
    puts("ok");
}

char* __builtin_string(char* str)
{
    char* __result_obj__0  ;
    int len;
    void* __right_value0 = (void*)0;
    char* result;
    if(str==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(str)+1;
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len)), "/usr/local/include/neo-c.h", 831, "char*"));
    strncpy(result,str,len);
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

void come_push_stackframe_v2(char* sname, int sline, int id)
{
    come_push_stackframe(sname,sline,id);
}

void come_pop_stackframe_v2()
{
    come_pop_stackframe();
}

void come_save_stackframe_v2(char* sname, int sline)
{
    come_save_stackframe(sname,sline);
}

void stackframe_v2()
{
    stackframe();
}

char* come_get_stackframe_v2()
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=come_get_stackframe())));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

void* come_calloc_v2(unsigned long  int count  , unsigned long  int size  , char* sname, int sline, char* class_name)
{
    void* __result_obj__0;
    __result_obj__0 = come_calloc(count,size,sname,sline,class_name);
    return __result_obj__0;
}

void come_free_v2(void* mem)
{
    come_free(mem);
}

struct buffer* buffer_initialize(struct buffer* self  )
{
    void* __right_value0 = (void*)0;
    char* __dec_obj5;
    struct buffer* __result_obj__0  ;
    self->size=128;
    __dec_obj5=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/neo-c.h", 3174, "char*"));
    __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__0 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct buffer* buffer_initialize_with_value(struct buffer* self  , char* mem, unsigned long  int size  )
{
    void* __right_value0 = (void*)0;
    char* __dec_obj6;
    struct buffer* __result_obj__0  ;
    self->size=128;
    __dec_obj6=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/neo-c.h", 3184, "char*"));
    __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result_obj__0 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

void buffer_finalize(struct buffer* self  )
{
    if(self&&self->buf) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct buffer* buffer_clone(struct buffer* self  )
{
    struct buffer* __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct buffer* result  ;
    char* __dec_obj7;
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 3204, "struct buffer*"));
    result->size=self->size;
    __dec_obj7=result->buf,
    result->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/neo-c.h", 3207, "char*"));
    __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0, (void*)0);
    result->len=self->len;
    memcpy(result->buf,self->buf,self->len);
    __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

_Bool buffer_equals(struct buffer* left  , struct buffer* right  )
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    _Bool __result_obj__0;
    if(left==((void*)0)&&right==((void*)0)) {
        return 1;
    }
    else if(left==((void*)0)||right==((void*)0)) {
        return 0;
    }
    __result_obj__0 = string_equals(((char*)(__right_value0=buffer_to_string(left))),((char*)(__right_value1=buffer_to_string(right))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    return __result_obj__0;
}

int buffer_length(struct buffer* self  )
{
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

void buffer_reset(struct buffer* self  )
{
    if(self==((void*)0)) {
        return;
    }
    self->buf[0]=0;
    self->len=0;
}

void buffer_trim(struct buffer* self  , int len)
{
    if(self==((void*)0)) {
        return;
    }
    self->len-=len;
    if(self->len>=0) {
        self->buf[self->len]=0;
    }
    else {
        self->len=0;
        self->buf[0]=0;
    }
}

struct buffer* buffer_append(struct buffer* self  , char* mem, unsigned long  int size  )
{
    struct buffer* __result_obj__0  ;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj8;
    if(self==((void*)0)||mem==((void*)0)) {
        __result_obj__0 = self;
        return __result_obj__0;
    }
    if(self->len+size+1+1>=self->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/neo-c.h", 3264, "char*"));
        memcpy(old_buf,self->buf,self->size);
        old_len=self->len;
        new_size=(self->size+size+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 3269, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(self->buf,old_buf,old_len);
        self->buf[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__0 = self;
    return __result_obj__0;
}

struct buffer* buffer_append_char(struct buffer* self  , char c)
{
    struct buffer* __result_obj__0  ;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj9;
    if(self==((void*)0)) {
        __result_obj__0 = ((void*)0);
        return __result_obj__0;
    }
    if(self->len+1+1+1>=self->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/neo-c.h", 3288, "char*"));
        memcpy(old_buf,self->buf,self->size);
        old_len=self->len;
        new_size=(self->size+10+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 3293, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(self->buf,old_buf,old_len);
        self->buf[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__0 = self;
    return __result_obj__0;
}

struct buffer* buffer_append_str(struct buffer* self  , char* mem)
{
    struct buffer* __result_obj__0  ;
    int size;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj10;
    if(self==((void*)0)||mem==((void*)0)) {
        __result_obj__0 = self;
        return __result_obj__0;
    }
    size=strlen(mem);
    if(self->len+size+1+1>=self->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/neo-c.h", 3315, "char*"));
        memcpy(old_buf,self->buf,self->size);
        old_len=self->len;
        new_size=(self->size+size+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 3319, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(self->buf,old_buf,old_len);
        self->buf[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__0 = self;
    return __result_obj__0;
}

struct buffer* buffer_append_format(struct buffer* self  , char* msg, ...)
{
    struct buffer* __result_obj__0  ;
    __builtin_va_list args  ;
    char* result;
    int len;
    void* __right_value0 = (void*)0;
    char* mem  ;
    int size;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj11;
    memset(&result, 0, sizeof(result));
    if(self==((void*)0)||msg==((void*)0)) {
        __result_obj__0 = self;
        return __result_obj__0;
    }
    __builtin_va_start(args,msg);
    len=vasprintf(&result,msg,args);
    __builtin_va_end(args);
    if(len<0) {
        __result_obj__0 = self;
        return __result_obj__0;
    }
    mem=(char*)come_increment_ref_count(__builtin_string(result));
    size=strlen(mem);
    if(self->len+size+1+1>=self->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/neo-c.h", 3392, "char*"));
        memcpy(old_buf,self->buf,self->size);
        old_len=self->len;
        new_size=(self->size+size+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 3396, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(self->buf,old_buf,old_len);
        self->buf[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    free(result);
    __result_obj__0 = self;
    (mem = come_decrement_ref_count(mem, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__0;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self  , char* mem)
{
    struct buffer* __result_obj__0  ;
    int size;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj12;
    if(self==((void*)0)||mem==((void*)0)) {
        __result_obj__0 = self;
        return __result_obj__0;
    }
    size=strlen(mem)+1;
    if(self->len+size+1+1+1>=self->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/neo-c.h", 3419, "char*"));
        memcpy(old_buf,self->buf,self->size);
        old_len=self->len;
        new_size=(self->size+size+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 3423, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(self->buf,old_buf,old_len);
        self->buf[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__0 = self;
    return __result_obj__0;
}

struct buffer* buffer_append_int(struct buffer* self  , int value)
{
    struct buffer* __result_obj__0  ;
    int* mem;
    int size;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj13;
    if(self==((void*)0)) {
        __result_obj__0 = ((void*)0);
        return __result_obj__0;
    }
    mem=&value;
    size=sizeof(int);
    if(self->len+size+1+1>=self->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/neo-c.h", 3446, "char*"));
        memcpy(old_buf,self->buf,self->size);
        old_len=self->len;
        new_size=(self->size+size+1)*2;
        __dec_obj13=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 3450, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(self->buf,old_buf,old_len);
        self->buf[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__0 = self;
    return __result_obj__0;
}

struct buffer* buffer_append_long(struct buffer* self  , long value)
{
    struct buffer* __result_obj__0  ;
    long* mem;
    int size;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj14;
    if(self==((void*)0)) {
        __result_obj__0 = ((void*)0);
        return __result_obj__0;
    }
    mem=&value;
    size=sizeof(long);
    if(self->len+size+1+1>=self->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/neo-c.h", 3472, "char*"));
        memcpy(old_buf,self->buf,self->size);
        old_len=self->len;
        new_size=(self->size+size+1)*2;
        __dec_obj14=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 3476, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(self->buf,old_buf,old_len);
        self->buf[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__0 = self;
    return __result_obj__0;
}

struct buffer* buffer_append_short(struct buffer* self  , short value)
{
    struct buffer* __result_obj__0  ;
    short* mem;
    int size;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj15;
    if(self==((void*)0)) {
        __result_obj__0 = ((void*)0);
        return __result_obj__0;
    }
    mem=&value;
    size=sizeof(short);
    if(self->len+size+1+1>=self->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/neo-c.h", 3499, "char*"));
        memcpy(old_buf,self->buf,self->size);
        old_len=self->len;
        new_size=(self->size+size+1)*2;
        __dec_obj15=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 3503, "char*"));
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(self->buf,old_buf,old_len);
        self->buf[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__0 = self;
    return __result_obj__0;
}

struct buffer* buffer_alignment(struct buffer* self  )
{
    struct buffer* __result_obj__0  ;
    int len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj16;
    int i;
    if(self==((void*)0)) {
        __result_obj__0 = ((void*)0);
        return __result_obj__0;
    }
    len=self->len;
    len=(len+3)&~3;
    if(len>=self->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/neo-c.h", 3526, "char*"));
        memcpy(old_buf,self->buf,self->size);
        old_len=self->len;
        new_size=(self->size+1+1)*2;
        __dec_obj16=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 3530, "char*"));
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(self->buf,old_buf,old_len);
        self->buf[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    for(i=self->len;i<len;i++){
        self->buf[i]=0;
    }
    self->len=len;
    __result_obj__0 = self;
    return __result_obj__0;
}

int buffer_compare(struct buffer* left  , struct buffer* right  )
{
    if(left==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else if(left==((void*)0)) {
        return -1;
    }
    else if(right==((void*)0)) {
        return 1;
    }
    return strcmp(left->buf,right->buf);
}

struct buffer* charp_to_buffer(char* self)
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer* result  ;
    struct buffer* __result_obj__0  ;
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 3562, "struct buffer*"))));
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append_str(result,self);
    __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* buffer_to_string(struct buffer* self  )
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    if(self==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(self->buf))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

unsigned char* buffer_head_pointer(struct buffer* self  )
{
    unsigned char* __result_obj__0;
    if(self==((void*)0)) {
        __result_obj__0 = ((void*)0);
        return __result_obj__0;
    }
    __result_obj__0 = self->buf;
    return __result_obj__0;
}

struct buffer* chara_to_buffer(char* self, unsigned long  int len  )
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer* result  ;
    struct buffer* __result_obj__0  ;
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 3592, "struct buffer*"))));
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append(result,self,sizeof(char)*len);
    __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct buffer* charpa_to_buffer(char** self, unsigned long  int len  )
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer* result  ;
    struct buffer* __result_obj__0  ;
    int i;
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 3602, "struct buffer*"))));
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    for(i=0;i<len;i++){
        buffer_append(result,self[i],strlen(self[i]));
    }
    __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct buffer* shorta_to_buffer(short* self, unsigned long  int len  )
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer* result  ;
    struct buffer* __result_obj__0  ;
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 3614, "struct buffer*"))));
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(short)*len);
    __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct buffer* inta_to_buffer(int* self, unsigned long  int len  )
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer* result  ;
    struct buffer* __result_obj__0  ;
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 3624, "struct buffer*"))));
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(int)*len);
    __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct buffer* longa_to_buffer(long* self, unsigned long  int len  )
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer* result  ;
    struct buffer* __result_obj__0  ;
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 3634, "struct buffer*"))));
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(long)*len);
    __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct buffer* floata_to_buffer(float* self, unsigned long  int len  )
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer* result  ;
    struct buffer* __result_obj__0  ;
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 3644, "struct buffer*"))));
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(float)*len);
    __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct buffer* doublea_to_buffer(double* self, unsigned long  int len  )
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer* result  ;
    struct buffer* __result_obj__0  ;
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 3654, "struct buffer*"))));
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(double)*len);
    __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* buffer_printable(struct buffer* self  )
{
    int len;
    void* __right_value0 = (void*)0;
    char* result  ;
    char* __result_obj__0  ;
    int n;
    int i;
    unsigned char c;
    len=self->len;
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len*2+1)), "/usr/local/include/neo-c.h", 3665, "char*"));
    if(self==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(result);
        (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    n=0;
    for(i=0;i<len;i++){
        c=self->buf[i];
        if((c>=0&&c<32)||c==127) {
            result[n++]=94;
            result[n++]=c+65-1;
        }
        else if(c>127) {
            result[n++]=63;
        }
        else {
            result[n++]=c;
        }
    }
    result[n]=0;
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values)
{
    int i;
    struct list$1char$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0;i<num_value;i++){
        list$1char$_push_back(self,values[i]);
    }
    __result_obj__0 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item)
{
    struct list$1char$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$* litem;
    struct list_item$1char$* litem_20;
    struct list_item$1char$* litem_21;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/neo-c.h", 1032, "struct list_item$1char$*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_20=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/neo-c.h", 1042, "struct list_item$1char$*"))));
        litem_20->prev=self->head;
        litem_20->next=((void*)0);
        litem_20->item=item;
        self->tail=litem_20;
        self->head->next=litem_20;
    }
    else {
        litem_21=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/neo-c.h", 1052, "struct list_item$1char$*"))));
        litem_21->prev=self->tail;
        litem_21->next=((void*)0);
        litem_21->item=item;
        self->tail->next=litem_21;
        self->tail=litem_21;
    }
    self->len++;
    __result_obj__0 = self;
    return __result_obj__0;
}

static void list$1char$$p_finalize(struct list$1char$* self)
{
    struct list_item$1char$* it;
    struct list_item$1char$* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self)
{
}

struct list$1char$* chara_to_list(char* self, unsigned long  int len  )
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$* __result_obj__0;
    __result_obj__0 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value1=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/neo-c.h", 3713, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values)
{
    int i;
    struct list$1char$p* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0;i<num_value;i++){
        list$1char$p_push_back(self,values[i]);
    }
    __result_obj__0 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item)
{
    struct list$1char$p* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$p* litem;
    struct list_item$1char$p* litem_22;
    struct list_item$1char$p* litem_23;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/neo-c.h", 1032, "struct list_item$1char$p*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_22=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/neo-c.h", 1042, "struct list_item$1char$p*"))));
        litem_22->prev=self->head;
        litem_22->next=((void*)0);
        litem_22->item=item;
        self->tail=litem_22;
        self->head->next=litem_22;
    }
    else {
        litem_23=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/neo-c.h", 1052, "struct list_item$1char$p*"))));
        litem_23->prev=self->tail;
        litem_23->next=((void*)0);
        litem_23->item=item;
        self->tail->next=litem_23;
        self->tail=litem_23;
    }
    self->len++;
    __result_obj__0 = self;
    return __result_obj__0;
}

static void list$1char$p$p_finalize(struct list$1char$p* self)
{
    struct list_item$1char$p* it;
    struct list_item$1char$p* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self)
{
}

struct list$1char$p* charpa_to_list(char** self, unsigned long  int len  )
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$p* __result_obj__0;
    __result_obj__0 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value1=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/neo-c.h", 3718, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values)
{
    int i;
    struct list$1short$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0;i<num_value;i++){
        list$1short$_push_back(self,values[i]);
    }
    __result_obj__0 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item)
{
    struct list$1short$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1short$* litem;
    struct list_item$1short$* litem_24;
    struct list_item$1short$* litem_25;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/neo-c.h", 1032, "struct list_item$1short$*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_24=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/neo-c.h", 1042, "struct list_item$1short$*"))));
        litem_24->prev=self->head;
        litem_24->next=((void*)0);
        litem_24->item=item;
        self->tail=litem_24;
        self->head->next=litem_24;
    }
    else {
        litem_25=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/neo-c.h", 1052, "struct list_item$1short$*"))));
        litem_25->prev=self->tail;
        litem_25->next=((void*)0);
        litem_25->item=item;
        self->tail->next=litem_25;
        self->tail=litem_25;
    }
    self->len++;
    __result_obj__0 = self;
    return __result_obj__0;
}

static void list$1short$$p_finalize(struct list$1short$* self)
{
    struct list_item$1short$* it;
    struct list_item$1short$* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self)
{
}

struct list$1short$* shorta_to_list(short* self, unsigned long  int len  )
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1short$* __result_obj__0;
    __result_obj__0 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value1=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/neo-c.h", 3723, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values)
{
    int i;
    struct list$1int$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0;i<num_value;i++){
        list$1int$_push_back(self,values[i]);
    }
    __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item)
{
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_26;
    struct list_item$1int$* litem_27;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1032, "struct list_item$1int$*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_26=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1042, "struct list_item$1int$*"))));
        litem_26->prev=self->head;
        litem_26->next=((void*)0);
        litem_26->item=item;
        self->tail=litem_26;
        self->head->next=litem_26;
    }
    else {
        litem_27=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1052, "struct list_item$1int$*"))));
        litem_27->prev=self->tail;
        litem_27->next=((void*)0);
        litem_27->item=item;
        self->tail->next=litem_27;
        self->tail=litem_27;
    }
    self->len++;
    __result_obj__0 = self;
    return __result_obj__0;
}

static void list$1int$$p_finalize(struct list$1int$* self)
{
    struct list_item$1int$* it;
    struct list_item$1int$* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self)
{
}

struct list$1int$* inta_to_list(int* self, unsigned long  int len  )
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1int$* __result_obj__0;
    __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value1=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/neo-c.h", 3728, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values)
{
    int i;
    struct list$1long$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0;i<num_value;i++){
        list$1long$_push_back(self,values[i]);
    }
    __result_obj__0 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item)
{
    struct list$1long$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1long$* litem;
    struct list_item$1long$* litem_28;
    struct list_item$1long$* litem_29;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/neo-c.h", 1032, "struct list_item$1long$*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_28=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/neo-c.h", 1042, "struct list_item$1long$*"))));
        litem_28->prev=self->head;
        litem_28->next=((void*)0);
        litem_28->item=item;
        self->tail=litem_28;
        self->head->next=litem_28;
    }
    else {
        litem_29=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/neo-c.h", 1052, "struct list_item$1long$*"))));
        litem_29->prev=self->tail;
        litem_29->next=((void*)0);
        litem_29->item=item;
        self->tail->next=litem_29;
        self->tail=litem_29;
    }
    self->len++;
    __result_obj__0 = self;
    return __result_obj__0;
}

static void list$1long$$p_finalize(struct list$1long$* self)
{
    struct list_item$1long$* it;
    struct list_item$1long$* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self)
{
}

struct list$1long$* longa_to_list(long* self, unsigned long  int len  )
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1long$* __result_obj__0;
    __result_obj__0 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value1=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/neo-c.h", 3733, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values)
{
    int i;
    struct list$1float$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0;i<num_value;i++){
        list$1float$_push_back(self,values[i]);
    }
    __result_obj__0 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item)
{
    struct list$1float$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1float$* litem;
    struct list_item$1float$* litem_30;
    struct list_item$1float$* litem_31;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/neo-c.h", 1032, "struct list_item$1float$*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_30=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/neo-c.h", 1042, "struct list_item$1float$*"))));
        litem_30->prev=self->head;
        litem_30->next=((void*)0);
        litem_30->item=item;
        self->tail=litem_30;
        self->head->next=litem_30;
    }
    else {
        litem_31=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/neo-c.h", 1052, "struct list_item$1float$*"))));
        litem_31->prev=self->tail;
        litem_31->next=((void*)0);
        litem_31->item=item;
        self->tail->next=litem_31;
        self->tail=litem_31;
    }
    self->len++;
    __result_obj__0 = self;
    return __result_obj__0;
}

static void list$1float$$p_finalize(struct list$1float$* self)
{
    struct list_item$1float$* it;
    struct list_item$1float$* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self)
{
}

struct list$1float$* floata_to_list(float* self, unsigned long  int len  )
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1float$* __result_obj__0;
    __result_obj__0 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value1=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/neo-c.h", 3738, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values)
{
    int i;
    struct list$1double$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0;i<num_value;i++){
        list$1double$_push_back(self,values[i]);
    }
    __result_obj__0 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item)
{
    struct list$1double$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1double$* litem;
    struct list_item$1double$* litem_32;
    struct list_item$1double$* litem_33;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/neo-c.h", 1032, "struct list_item$1double$*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_32=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/neo-c.h", 1042, "struct list_item$1double$*"))));
        litem_32->prev=self->head;
        litem_32->next=((void*)0);
        litem_32->item=item;
        self->tail=litem_32;
        self->head->next=litem_32;
    }
    else {
        litem_33=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/neo-c.h", 1052, "struct list_item$1double$*"))));
        litem_33->prev=self->tail;
        litem_33->next=((void*)0);
        litem_33->item=item;
        self->tail->next=litem_33;
        self->tail=litem_33;
    }
    self->len++;
    __result_obj__0 = self;
    return __result_obj__0;
}

static void list$1double$$p_finalize(struct list$1double$* self)
{
    struct list_item$1double$* it;
    struct list_item$1double$* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self)
{
}

struct list$1double$* doublea_to_list(double* self, unsigned long  int len  )
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1double$* __result_obj__0;
    __result_obj__0 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value1=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/neo-c.h", 3743, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

_Bool _Bool_equals(_Bool self, _Bool right)
{
    return self==right;
}

_Bool char_equals(char self, char right)
{
    return self==right;
}

_Bool short_equals(short self, short right)
{
    return self==right;
}

_Bool int_equals(int self, int right)
{
    return self==right;
}

_Bool long_equals(long self, long right)
{
    return self==right;
}

_Bool size_t_equals(unsigned long  int self  , unsigned long  int right  )
{
    return self==right;
}

_Bool float_equals(float self, float right)
{
    return self==right;
}

_Bool double_equals(double self, double right)
{
    return self==right;
}

_Bool _Bool_operator_equals(_Bool self, _Bool right)
{
    return self==right;
}

_Bool char_operator_equals(char self, char right)
{
    return self==right;
}

_Bool short_operator_equals(short self, short right)
{
    return self==right;
}

_Bool int_operator_equals(int self, int right)
{
    return self==right;
}

_Bool long_operator_equals(long self, long right)
{
    return self==right;
}

_Bool _Bool_operator_not_equals(_Bool self, _Bool right)
{
    return !(self==right);
}

_Bool char_operator_not_equals(char self, char right)
{
    return !(self==right);
}

_Bool short_operator_not_equals(short self, short right)
{
    return !(self==right);
}

_Bool int_operator_not_equals(int self, int right)
{
    return !(self==right);
}

_Bool long_operator_not_equals(long self, long right)
{
    return !(self==right);
}

_Bool charp_equals(char* self, char* right)
{
    if(self==((void*)0)&&right==((void*)0)) {
        return 1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        return 0;
    }
    return strcmp(self,right)==0;
}

_Bool string_equals(char* self, char* right)
{
    if(self==((void*)0)&&right==((void*)0)) {
        return 1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        return 0;
    }
    return strcmp(self,right)==0;
}

_Bool voidp_equals(void* self, void* right)
{
    return self==right;
}

_Bool _Boolp_equals(_Bool* self, _Bool* right)
{
    return *self==*right;
}

_Bool string_operator_equals(char* self, char* right)
{
    if(self==((void*)0)&&right==((void*)0)) {
        return 1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        return 0;
    }
    return strcmp(self,right)==0;
}

_Bool charp_operator_equals(char* self, char* right)
{
    if(self==((void*)0)&&right==((void*)0)) {
        return 1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        return 0;
    }
    return strcmp(self,right)==0;
}

_Bool voidp_operator_equals(char* self, char* right)
{
    return self==right;
}

_Bool voidp_operator_not_equals(char* self, char* right)
{
    return !charp_operator_equals(self,right);
}

_Bool string_operator_not_equals(char* self, char* right)
{
    if(self==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        return 1;
    }
    return strcmp(self,right)!=0;
}

_Bool charp_operator_not_equals(char* self, char* right)
{
    if(self==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        return 1;
    }
    return strcmp(self,right)!=0;
}

char* charp_operator_add(char* self, char* right)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    int len;
    char* result;
    if(self==((void*)0)||right==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(self)+strlen(right);
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len+1)), "/usr/local/include/neo-c.h", 3954, "char*"));
    strncpy(result,self,len+1);
    strncat(result,right,len+1);
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* string_operator_add(char* self, char* right)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    int len;
    char* result;
    if(self==((void*)0)||right==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(self)+strlen(right);
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len+1)), "/usr/local/include/neo-c.h", 3969, "char*"));
    strncpy(result,self,len+1);
    strncat(result,right,len+1);
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* charp_operator_mult(char* self, int right)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer* buf  ;
    int i;
    if(self==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 3982, "struct buffer*"))));
    for(i=0;i<right;i++){
        buffer_append_str(buf,self);
    }
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=buffer_to_string(buf))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* string_operator_mult(char* self, int right)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer* buf  ;
    int i;
    if(self==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 3996, "struct buffer*"))));
    for(i=0;i<right;i++){
        buffer_append_str(buf,self);
    }
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=buffer_to_string(buf))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool charpa_contained(char** self, unsigned long  int len  , char* str)
{
    _Bool result;
    int i;
    result=0;
    if(self==((void*)0)) {
        return result;
    }
    for(i=0;i<len;i++){
        if(strncmp(self[i],str,strlen(self[i]))==0) {
            result=1;
            break;
        }
    }
    return result;
}

unsigned long  int shorta_length(short* self, unsigned long  int len  )
{
    return len;
}

unsigned long  int inta_length(int* self, unsigned long  int len  )
{
    return len;
}

unsigned long  int longa_length(long* self, unsigned long  int len  )
{
    return len;
}

unsigned long  int floata_length(float* self, unsigned long  int len  )
{
    return len;
}

unsigned long  int doublea_length(double* self, unsigned long  int len  )
{
    return len;
}

unsigned int _Bool_get_hash_key(_Bool value)
{
    return (int_get_hash_key(((int)value)));
}

unsigned int char_get_hash_key(char value)
{
    return value;
}

unsigned int short_get_hash_key(short int value)
{
    return value;
}

unsigned int int_get_hash_key(int value)
{
    return value;
}

unsigned int long_get_hash_key(long value)
{
    return value;
}

unsigned int size_t_get_hash_key(unsigned long  int value  )
{
    return value;
}

unsigned int float_get_hash_key(float value)
{
    return (unsigned int)value;
}

unsigned int double_get_hash_key(double value)
{
    return (unsigned int)value;
}

unsigned int charp_get_hash_key(char* value)
{
    int result;
    char* p;
    if(value==((void*)0)) {
        return 0;
    }
    result=0;
    p=value;
    while(*p) {
        result+=(*p);
        p++;
    }
    return result;
}

unsigned int string_get_hash_key(char* value)
{
    int result;
    char* p;
    if(value==((void*)0)) {
        return 0;
    }
    result=0;
    p=value;
    while(*p) {
        result+=(*p);
        p++;
    }
    return result;
}

unsigned int voidp_get_hash_key(void* value)
{
    return (int_get_hash_key(((int)value)));
}

_Bool _Bool_clone(_Bool self)
{
    return self;
}

char char_clone(char self)
{
    return self;
}

short int short_clone(short self)
{
    return self;
}

int int_clone(int self)
{
    return self;
}

long  int long_clone(long self)
{
    return self;
}

unsigned long  int size_t_clone(unsigned long  int self  )
{
    return self;
}

double double_clone(double self)
{
    return self;
}

float float_clone(float self)
{
    return self;
}

_Bool xisalpha(char c)
{
    _Bool result;
    result=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result;
}

_Bool xisblank(char c)
{
    return c==32||c==9;
}

_Bool xisdigit(char c)
{
    return (c>=48&&c<=57);
}

_Bool xisspace(char c)
{
    return c==32||c==9||c==10||c==13||c==28||c==11;
}

_Bool xisalnum(char c)
{
    return xisalpha(c)||xisdigit(c);
}

_Bool xisascii(char c)
{
    _Bool result;
    result=(c>=32&&c<=126);
    return result;
}

_Bool xispunct(char c)
{
    return (c>=33&&c<=47)||(c>=58&&c<=64)||(c>=91&&c<=96)||(c>=123&&c<=126);
}

int string_length(char* str)
{
    if(str==((void*)0)) {
        return 0;
    }
    return strlen(str);
}

int charp_length(char* str)
{
    if(str==((void*)0)) {
        return 0;
    }
    return strlen(str);
}

int chara_length(char* str)
{
    if(str==((void*)0)) {
        return 0;
    }
    return strlen(str);
}

char* charp_reverse(char* str)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    int len;
    char* result;
    int i;
    if(str==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(str);
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len+1)), "/usr/local/include/neo-c.h", 4250, "char*"));
    for(i=0;i<len;i++){
        result[i]=str[len-i-1];
    }
    result[len]=0;
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* string_operator_load_range_element(char* str, int head, int tail)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    int len;
    void* __right_value1 = (void*)0;
    char* result  ;
    if(str==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
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
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value1=charp_reverse(((char*)(__right_value0=charp_substring(str,tail,head)))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
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
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(tail-head+1<1) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/neo-c.h", 4296, "char*"));
    memcpy(result,str+head,tail-head);
    result[tail-head]=0;
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* charp_operator_load_range_element(char* str, int head, int tail)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    int len;
    void* __right_value1 = (void*)0;
    char* result  ;
    if(str==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
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
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value1=charp_reverse(((char*)(__right_value0=charp_substring(str,tail,head)))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
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
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(tail-head+1<1) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/neo-c.h", 4339, "char*"));
    memcpy(result,str+head,tail-head);
    result[tail-head]=0;
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* charp_substring(char* str, int head, int tail)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    int len;
    void* __right_value1 = (void*)0;
    char* result  ;
    if(str==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
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
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value1=charp_reverse(((char*)(__right_value0=charp_substring(str,tail,head)))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
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
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(tail-head+1<1) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/neo-c.h", 4382, "char*"));
    memcpy(result,str+head,tail-head);
    result[tail-head]=0;
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* xsprintf(char* msg, ...)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __builtin_va_list args  ;
    char* result;
    int len;
    char* result2  ;
    memset(&result, 0, sizeof(result));
    if(msg==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __builtin_va_start(args,msg);
    len=vasprintf(&result,msg,args);
    __builtin_va_end(args);
    if(len<0) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result2=(char*)come_increment_ref_count(__builtin_string(result));
    free(result);
    __result_obj__0 = (char*)come_increment_ref_count(result2);
    (result2 = come_decrement_ref_count(result2, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* charp_delete(char* str, int head, int tail)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    int len;
    char* result;
    if(str==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(str);
    if(head>=len) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(str))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(strcmp(str,"")==0) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(str))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
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
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(str))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(tail>=len) {
        tail=len;
    }
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len-(tail-head)+1)), "/usr/local/include/neo-c.h", 4448, "char*"));
    memcpy(result,str,head);
    memcpy(result+head,str+tail,len-tail);
    result[len-(tail-head)]=0;
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct list$1char$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self)
{
    struct list_item$1char$ph* it;
    struct list_item$1char$ph* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item  )
{
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char* __dec_obj17  ;
    struct list_item$1char$ph* litem_34;
    char* __dec_obj18  ;
    struct list_item$1char$ph* litem_35;
    char* __dec_obj19  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1032, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj17=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_34=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1042, "struct list_item$1char$ph*"))));
        litem_34->prev=self->head;
        litem_34->next=((void*)0);
        __dec_obj18=litem_34->item,
        litem_34->item=(char*)come_increment_ref_count(item);
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_34;
        self->head->next=litem_34;
    }
    else {
        litem_35=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1052, "struct list_item$1char$ph*"))));
        litem_35->prev=self->tail;
        litem_35->next=((void*)0);
        __dec_obj19=litem_35->item,
        litem_35->item=(char*)come_increment_ref_count(item);
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_35;
        self->tail=litem_35;
    }
    self->len++;
    __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__0;
}

struct list$1char$ph* charp_split_char(char* self, char c)
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    struct list$1char$ph* result;
    struct buffer* str  ;
    int i;
    if(self==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 4461, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 4464, "struct list$1char$ph*"))));
    str=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 4466, "struct buffer*"))));
    for(i=0;i<charp_length(self);i++){
        if(self[i]==c) {
            list$1char$ph_push_back(result,(char*)come_increment_ref_count(__builtin_string(str->buf)));
            buffer_reset(str);
        }
        else {
            buffer_append_char(str,self[i]);
        }
    }
    if(buffer_length(str)!=0) {
        list$1char$ph_push_back(result,(char*)come_increment_ref_count(__builtin_string(str->buf)));
    }
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* charp_xsprintf(char* self, char* msg, ...)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf(msg,self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* int_xsprintf(int self, char* msg, ...)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf(msg,self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* charp_printable(char* str)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    int len;
    char* result  ;
    int n;
    int i;
    char c;
    if(str==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=charp_length(str);
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len*2+1)), "/usr/local/include/neo-c.h", 4500, "char*"));
    n=0;
    for(i=0;i<len;i++){
        c=str[i];
        if((c>=0&&c<32)||c==127) {
            result[n++]=94;
            result[n++]=c+65-1;
        }
        else {
            result[n++]=c;
        }
    }
    result[n]=0;
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* chara_printable(char* str)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=charp_printable(str))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* charp_sub_plain(char* self, char* str, char* replace)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer* result  ;
    char* p;
    char* p2;
    if(self==((void*)0)||str==((void*)0)||replace==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(self))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 4533, "struct buffer*"))));
    p=self;
    while(1) {
        p2=strstr(p,str);
        if(p2==((void*)0)) {
            p2=p;
            while(*p2) {
                p2++;
            }
            buffer_append(result,p,p2-p);
            break;
        }
        buffer_append(result,p,p2-p);
        buffer_append_str(result,replace);
        p=p2+strlen(str);
    }
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=buffer_to_string(result))));
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* xbasename(char* path)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    char* p;
    if(path==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
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
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(path))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    else {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(p+1))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* xnoextname(char* path)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    char* path2  ;
    char* p;
    if(path==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    path2=(char*)come_increment_ref_count(xbasename(path));
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
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(path2))));
        (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    else {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=charp_substring(path2,0,p-path2))));
        (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
    (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* xextname(char* path)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    char* p;
    if(path==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
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
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(path))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    else {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(p+1))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* _Bool_to_string(_Bool self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    if(self) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("true"))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    else {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("false"))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
}

char* char_to_string(char self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("%c",self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* short_to_string(short self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("%d",self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* int_to_string(int self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("%d",self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* long_to_string(long self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("%ld",self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* size_t_to_string(unsigned long  int self  )
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("%ld",self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* float_to_string(float self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("%f",self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* double_to_string(double self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("%lf",self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* string_to_string(char* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    if(self==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* charp_to_string(char* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    if(self==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int _Bool_compare(_Bool left, _Bool right)
{
    if(!left&&right) {
        return -1;
    }
    else if(left&&right) {
        return 0;
    }
    else if(!left&&!right) {
        return 0;
    }
    else {
        return 1;
    }
    return 0;
}

int char_compare(char left, char right)
{
    if(left<right) {
        return -1;
    }
    else if(left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int short_compare(short left, short right)
{
    if(left<right) {
        return -1;
    }
    else if(left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int int_compare(int left, int right)
{
    if(left<right) {
        return -1;
    }
    else if(left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int long_compare(long left, long right)
{
    if(left<right) {
        return -1;
    }
    else if(left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int size_t_compare(unsigned long  int left  , unsigned long  int right  )
{
    if(left<right) {
        return -1;
    }
    else if(left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int float_compare(float left, float right)
{
    if(left<right) {
        return -1;
    }
    else if(left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int double_compare(double left, double right)
{
    if(left<right) {
        return -1;
    }
    else if(left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int string_compare(char* left, char* right)
{
    if(left==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else if(left==((void*)0)) {
        return -1;
    }
    else if(right==((void*)0)) {
        return 1;
    }
    return strcmp(left,right);
}

int charp_compare(char* left, char* right)
{
    if(left==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else if(left==((void*)0)) {
        return -1;
    }
    else if(right==((void*)0)) {
        return 1;
    }
    return strcmp(left,right);
}

char* charp_puts(char* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    if(self==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    puts(self);
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* charp_print(char* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    if(self==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    printf("%s",self);
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* charp_printf(char* self, ...)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    char* msg2;
    __builtin_va_list args  ;
    memset(&msg2, 0, sizeof(msg2));
    if(self==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __builtin_va_start(args,self);
    vasprintf(&msg2,self,args);
    __builtin_va_end(args);
    printf("%s",msg2);
    free(msg2);
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int int_printf(int self, char* msg)
{
    if(self==((void*)0)) {
        return self;
    }
    printf(msg,self);
    return self;
}

long long_printf(long self, char* msg)
{
    if(self==((void*)0)) {
        return self;
    }
    printf(msg,self);
    return self;
}

void int_times(int self, void* parent, void (*block)(void*,int))
{
    int i;
    for(i=0;i<self;i++){
        block(parent,i);
    }
}

static void match_context_finalize(struct anonymous_typeX16* self  )
{
}

int re_matchp_ex(struct re_program* pattern  , const char* text, int* matchlength, struct re_capture* captures  , int max_captures, _Bool ignore_case)
{
    struct re_program* program  ;
    struct regex_t* start  ;
    struct anonymous_typeX16 ctx  ;
    int __result_obj__0;
    memset(&ctx, 0, sizeof(ctx));
    *matchlength=0;
    if(pattern==0) {
        return -1;
    }
    program=(struct re_program*)pattern;
    start=program->start;
    if(start==0) {
        return -1;
    }
    ctx.base=text;
    ctx.captures=(((captures!=0&&max_captures>0))?(captures):(0));
    ctx.capture_capacity=(((captures!=0&&max_captures>0))?(max_captures):(0));
    if(ctx.capture_capacity>64) {
        ctx.capture_capacity=64;
    }
    ctx.total_groups=program->group_count;
    ctx.ignore_case=ignore_case;
    if(ctx.captures!=0) {
        clear_captures(&ctx);
    }
    if(start->type==(2)) {
        const char* end=matchpattern(start->next,text,&ctx);
        if(end!=0) {
            *matchlength=(int)(end-text);
            if(ctx.captures!=0) {
            }
            __result_obj__0 = 0;
            come_call_finalizer(match_context_finalize, (&ctx), (void*)0, (void*)0, 1, 0, 0, (void*)0);
            return __result_obj__0;
        }
        __result_obj__0 = -1;
        come_call_finalizer(match_context_finalize, (&ctx), (void*)0, (void*)0, 1, 0, 0, (void*)0);
        return __result_obj__0;
    }
    else {
        const char* cursor=text;
        while(1) {
            if(ctx.captures!=0) {
                clear_captures(&ctx);
            }
            const char* end_36=matchpattern(start,cursor,&ctx);
            if(end_36!=0) {
                if(*cursor==0&&cursor!=text) {
                    __result_obj__0 = -1;
                    come_call_finalizer(match_context_finalize, (&ctx), (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    return __result_obj__0;
                }
                *matchlength=(int)(end_36-cursor);
                __result_obj__0 = (int)(cursor-text);
                come_call_finalizer(match_context_finalize, (&ctx), (void*)0, (void*)0, 1, 0, 0, (void*)0);
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
    return __result_obj__0;
}

int re_matchp(struct re_program* pattern  , const char* text, int* matchlength, struct re_capture* captures  , int max_captures)
{
    return re_matchp_ex(pattern,text,matchlength,captures,max_captures,0);
}

int re_match(const char* pattern, const char* text, int* matchlength)
{
    return re_matchp(re_compile(pattern),text,matchlength,(struct re_capture*)0,0);
}

static void regex_program_t_finalize(struct re_program* self  )
{
}

static void compiler_state_finalize(struct anonymous_typeX15* self  )
{
}

struct re_program* re_compile(const char* pattern)
{
    static struct re_program program  ;
    struct anonymous_typeX15 state  ;
    int pos;
    struct regex_t* head  ;
    struct re_program* __result_obj__0  ;
    memset(&program, 0, sizeof(program));
    memset(&state, 0, sizeof(state));
    static struct regex_t re_compiled[64]  ;
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
        state.ccl_buf[0]=0;
    }
    pos=0;
    head=compile_sequence(&state,pattern,&pos,0);
    if((head==0)||(pattern[pos]!=0)) {
        __result_obj__0 = 0;
        come_call_finalizer(regex_program_t_finalize, (&program), (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer(compiler_state_finalize, (&state), (void*)0, (void*)0, 1, 0, 0, (void*)0);
        return __result_obj__0;
    }
    program.start=head;
    program.group_count=state.group_count;
    __result_obj__0 = (struct re_program*)&program;
    come_call_finalizer(regex_program_t_finalize, (&program), (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer(compiler_state_finalize, (&state), (void*)0, (void*)0, 1, 0, 0, (void*)0);
    return __result_obj__0;
}

void re_print(struct re_program* pattern  )
{
    struct re_program* program  ;
    if(pattern==0) {
        return;
    }
    program=(struct re_program*)pattern;
    if(program->start==0) {
        return;
    }
    re_print_internal(program->start,0);
}

void clear_captures(struct anonymous_typeX16* ctx  )
{
    int i;
    if((ctx->captures==0)||(ctx->capture_capacity<=0)) {
        return;
    }
    for(i=0;i<ctx->capture_capacity;++i){
        ctx->captures[i].start=-1;
        ctx->captures[i].length=0;
    }
}

void snapshot_captures(const struct anonymous_typeX16* ctx  , struct re_capture* buffer_  )
{
    if((ctx->captures==0)||(ctx->capture_capacity<=0)) {
        return;
    }
    memcpy(buffer_,ctx->captures,sizeof(struct re_capture)*ctx->capture_capacity);
}

void restore_captures(struct anonymous_typeX16* ctx  , const struct re_capture* buffer_  )
{
    if((ctx->captures==0)||(ctx->capture_capacity<=0)) {
        return;
    }
    memcpy(ctx->captures,buffer_,sizeof(struct re_capture)*ctx->capture_capacity);
}

struct regex_t* new_token(struct anonymous_typeX15* st  )
{
    struct regex_t* __result_obj__0  ;
    struct regex_t* token  ;
    if(st->pool_size>=st->pool_capacity) {
        __result_obj__0 = 0;
        return __result_obj__0;
    }
    token=&st->pool[st->pool_size++];
    token->type=(0);
    token->u.ccl=0;
    token->next=0;
    token->u.group.first=0;
    token->u.group.last=0;
    token->u.group.id=0;
    __result_obj__0 = token;
    return __result_obj__0;
}

int append_token(struct regex_t** head  , struct regex_t** tail  , struct regex_t* token  )
{
    if(token==0) {
        return 0;
    }
    if(*head==0) {
        *head=token;
    }
    else {
        (*tail)->next=token;
    }
    *tail=token;
    return 1;
}

struct regex_t* compile_sequence(struct anonymous_typeX15* st  , const char* pattern, int* pos, int in_group)
{
    struct regex_t* head  ;
    struct regex_t* tail  ;
    char c;
    struct regex_t* token  ;
    struct regex_t* __result_obj__0  ;
    int buf_begin;
    int negated;
    struct regex_t* inner  ;
    struct regex_t* tail_37  ;
    struct regex_t* sentinel  ;
    head=(struct regex_t*)0;
    tail=(struct regex_t*)0;
    while(pattern[*pos]!=0) {
        c=pattern[*pos];
        if(in_group&&(c==41)) {
            break;
        }
        token=(struct regex_t*)0;
        switch (        c) {
            case 94:
            {
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = 0;
                    return __result_obj__0;
                }
                token->type=(2);
                (*pos)++;
            }
            break;
            case 36:
            {
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = 0;
                    return __result_obj__0;
                }
                token->type=(3);
                (*pos)++;
            }
            break;
            case 46:
            {
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = 0;
                    return __result_obj__0;
                }
                token->type=(1);
                (*pos)++;
            }
            break;
            case 42:
            {
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = 0;
                    return __result_obj__0;
                }
                token->type=(5);
                (*pos)++;
            }
            break;
            case 43:
            {
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = 0;
                    return __result_obj__0;
                }
                token->type=(6);
                (*pos)++;
            }
            break;
            case 63:
            {
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = 0;
                    return __result_obj__0;
                }
                token->type=(4);
                (*pos)++;
            }
            break;
            case 92:
            {
                (*pos)++;
                if(pattern[*pos]==0) {
                    __result_obj__0 = 0;
                    return __result_obj__0;
                }
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = 0;
                    return __result_obj__0;
                }
                switch (                pattern[*pos]) {
                    case 100:
                    token->type=(10);
                    break;
                    case 68:
                    token->type=(11);
                    break;
                    case 119:
                    token->type=(12);
                    break;
                    case 87:
                    token->type=(13);
                    break;
                    case 115:
                    token->type=(14);
                    break;
                    case 83:
                    token->type=(15);
                    break;
                    default:
                    {
                        token->type=(7);
                        token->u.ch=(unsigned char)pattern[*pos];
                    }
                    break;
                }
                (*pos)++;
            }
            break;
            case 91:
            {
                buf_begin=st->ccl_idx;
                negated=0;
                (*pos)++;
                if(pattern[*pos]==94) {
                    negated=1;
                    (*pos)++;
                    if(pattern[*pos]==0) {
                        __result_obj__0 = 0;
                        return __result_obj__0;
                    }
                }
                if(pattern[*pos]==0) {
                    __result_obj__0 = 0;
                    return __result_obj__0;
                }
                while((pattern[*pos]!=0)&&(pattern[*pos]!=93)) {
                    if(pattern[*pos]==92) {
                        if(st->ccl_idx>=(st->ccl_capacity-1)) {
                            __result_obj__0 = 0;
                            return __result_obj__0;
                        }
                        st->ccl_buf[st->ccl_idx++]=92;
                        (*pos)++;
                        if(pattern[*pos]==0) {
                            __result_obj__0 = 0;
                            return __result_obj__0;
                        }
                    }
                    if(st->ccl_idx>=st->ccl_capacity) {
                        __result_obj__0 = 0;
                        return __result_obj__0;
                    }
                    st->ccl_buf[st->ccl_idx++]=(unsigned char)pattern[*pos];
                    (*pos)++;
                }
                if(pattern[*pos]!=93) {
                    __result_obj__0 = 0;
                    return __result_obj__0;
                }
                if(st->ccl_idx>=st->ccl_capacity) {
                    __result_obj__0 = 0;
                    return __result_obj__0;
                }
                st->ccl_buf[st->ccl_idx++]=0;
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = 0;
                    return __result_obj__0;
                }
                token->type=((negated)?((9)):((8)));
                token->u.ccl=&st->ccl_buf[buf_begin];
                (*pos)++;
            }
            break;
            case 40:
            {
                (*pos)++;
                inner=compile_sequence(st,pattern,pos,1);
                if(inner==0) {
                    __result_obj__0 = 0;
                    return __result_obj__0;
                }
                if(pattern[*pos]!=41) {
                    __result_obj__0 = 0;
                    return __result_obj__0;
                }
                tail_37=inner;
                while((tail_37!=0)&&(tail_37->type!=(0))) {
                    tail_37=tail_37->next;
                }
                if(tail_37==0) {
                    __result_obj__0 = 0;
                    return __result_obj__0;
                }
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = 0;
                    return __result_obj__0;
                }
                token->type=(16);
                token->u.group.first=inner;
                token->u.group.last=tail_37;
                token->u.group.id=++st->group_count;
                tail_37->type=(17);
                tail_37->u.group.first=token;
                (*pos)++;
            }
            break;
            case 41:
            {
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = 0;
                    return __result_obj__0;
                }
                token->type=(7);
                token->u.ch=(unsigned char)c;
                (*pos)++;
            }
            break;
            default:
            {
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = 0;
                    return __result_obj__0;
                }
                token->type=(7);
                token->u.ch=(unsigned char)c;
                (*pos)++;
            }
            break;
        }
        if(!append_token(&head,&tail,token)) {
            __result_obj__0 = 0;
            return __result_obj__0;
        }
    }
    sentinel=new_token(st);
    if(sentinel==0) {
        __result_obj__0 = 0;
        return __result_obj__0;
    }
    sentinel->type=(0);
    sentinel->next=0;
    if(head==0) {
        head=sentinel;
    }
    else {
        tail->next=sentinel;
    }
    __result_obj__0 = head;
    return __result_obj__0;
}

const char* matchpattern(struct regex_t* pattern  , const char* text, struct anonymous_typeX16* ctx  )
{
    const char* __result_obj__0;
    struct regex_t* current  ;
    struct regex_t* next  ;
    struct regex_t* owner  ;
    int idx;
    int start;
    if(pattern==0) {
        __result_obj__0 = text;
        return __result_obj__0;
    }
    if(pattern->type==(0)) {
        __result_obj__0 = text;
        return __result_obj__0;
    }
    struct re_capture snapshot[64]  ;
    memset(&snapshot, 0, sizeof(snapshot));
    snapshot_captures(ctx,snapshot);
    current=pattern;
    const char* cursor=text;
    while(current!=0&&current->type!=(0)) {
        next=current->next;
        if(current->type==(17)) {
            owner=current->u.group.first;
            if((owner!=0)&&(owner->u.group.id>0)&&(ctx->captures!=0)) {
                idx=owner->u.group.id-1;
                if(idx<ctx->capture_capacity) {
                    start=ctx->captures[idx].start;
                    if(start>=0) {
                        ctx->captures[idx].length=(int)(cursor-ctx->base)-start;
                        if(ctx->captures[idx].length<0) {
                            ctx->captures[idx].length=0;
                        }
                    }
                }
            }
            current=current->next;
            continue;
        }
        if((next!=0)&&(next->type==(4))) {
            const char* result=matchquestion(current,next->next,cursor,ctx);
            if(result!=0) {
                __result_obj__0 = result;
                return __result_obj__0;
            }
            restore_captures(ctx,snapshot);
            __result_obj__0 = 0;
            return __result_obj__0;
        }
        else if((next!=0)&&(next->type==(5))) {
            const char* result_38=matchstar(current,next->next,cursor,ctx);
            if(result_38!=0) {
                __result_obj__0 = result_38;
                return __result_obj__0;
            }
            restore_captures(ctx,snapshot);
            __result_obj__0 = 0;
            return __result_obj__0;
        }
        else if((next!=0)&&(next->type==(6))) {
            const char* result_39=matchplus(current,next->next,cursor,ctx);
            if(result_39!=0) {
                __result_obj__0 = result_39;
                return __result_obj__0;
            }
            restore_captures(ctx,snapshot);
            __result_obj__0 = 0;
            return __result_obj__0;
        }
        else if(current->type==(16)) {
            const char* result_40=matchgroup(current,next,cursor,ctx);
            if(result_40!=0) {
                __result_obj__0 = result_40;
                return __result_obj__0;
            }
            restore_captures(ctx,snapshot);
            __result_obj__0 = 0;
            return __result_obj__0;
        }
        else if(current->type==(3)) {
            if(*cursor!=0) {
                restore_captures(ctx,snapshot);
                __result_obj__0 = 0;
                return __result_obj__0;
            }
            current=current->next;
        }
        else {
            const char* after=matchtoken(current,cursor,ctx);
            if(after==0) {
                restore_captures(ctx,snapshot);
                __result_obj__0 = 0;
                return __result_obj__0;
            }
            cursor=after;
            current=current->next;
        }
    }
    __result_obj__0 = cursor;
    return __result_obj__0;
}

const char* matchgroup(struct regex_t* token  , struct regex_t* rest  , const char* text, struct anonymous_typeX16* ctx  )
{
    struct regex_t* end_token  ;
    struct regex_t* saved_next  ;
    int idx;
    const char* __result_obj__0;
    struct re_capture snapshot_entry[64]  ;
    memset(&snapshot_entry, 0, sizeof(snapshot_entry));
    snapshot_captures(ctx,snapshot_entry);
    end_token=token->u.group.last;
    saved_next=((end_token!=0)?(end_token->next):(0));
    if(end_token!=0) {
        end_token->next=rest;
    }
    if(token->u.group.id>0&&ctx->captures!=0) {
        idx=token->u.group.id-1;
        if(idx<ctx->capture_capacity) {
            ctx->captures[idx].start=(int)(text-ctx->base);
            ctx->captures[idx].length=0;
        }
    }
    const char* result=matchpattern(token->u.group.first,text,ctx);
    if(end_token!=0) {
        end_token->next=saved_next;
    }
    if(result==0) {
        restore_captures(ctx,snapshot_entry);
    }
    __result_obj__0 = result;
    return __result_obj__0;
}

const char* matchstar(struct regex_t* token  , struct regex_t* rest  , const char* text, struct anonymous_typeX16* ctx  )
{
    const char* __result_obj__0;
    struct re_capture snapshot_entry[64]  ;
    memset(&snapshot_entry, 0, sizeof(snapshot_entry));
    snapshot_captures(ctx,snapshot_entry);
    const char* consume=matchtoken(token,text,ctx);
    while((consume!=0)&&(consume!=text)) {
        struct re_capture snapshot_after_token[64]  ;
        memset(&snapshot_after_token, 0, sizeof(snapshot_after_token));
        snapshot_captures(ctx,snapshot_after_token);
        const char* recursive=matchstar(token,rest,consume,ctx);
        if(recursive!=0) {
            __result_obj__0 = recursive;
            return __result_obj__0;
        }
        restore_captures(ctx,snapshot_after_token);
        consume=matchtoken(token,consume,ctx);
    }
    restore_captures(ctx,snapshot_entry);
    __result_obj__0 = matchpattern(rest,text,ctx);
    return __result_obj__0;
}

const char* matchplus(struct regex_t* token  , struct regex_t* rest  , const char* text, struct anonymous_typeX16* ctx  )
{
    const char* __result_obj__0;
    struct re_capture snapshot_entry[64]  ;
    memset(&snapshot_entry, 0, sizeof(snapshot_entry));
    snapshot_captures(ctx,snapshot_entry);
    const char* first=matchtoken(token,text,ctx);
    if((first==0)||(first==text)) {
        restore_captures(ctx,snapshot_entry);
        __result_obj__0 = 0;
        return __result_obj__0;
    }
    const char* result=matchstar(token,rest,first,ctx);
    if(result!=0) {
        __result_obj__0 = result;
        return __result_obj__0;
    }
    restore_captures(ctx,snapshot_entry);
    __result_obj__0 = 0;
    return __result_obj__0;
}

const char* matchquestion(struct regex_t* token  , struct regex_t* rest  , const char* text, struct anonymous_typeX16* ctx  )
{
    const char* __result_obj__0;
    struct re_capture snapshot_entry[64]  ;
    memset(&snapshot_entry, 0, sizeof(snapshot_entry));
    snapshot_captures(ctx,snapshot_entry);
    const char* skipped=matchpattern(rest,text,ctx);
    if(skipped!=0) {
        __result_obj__0 = skipped;
        return __result_obj__0;
    }
    restore_captures(ctx,snapshot_entry);
    const char* consumed=matchtoken(token,text,ctx);
    if((consumed==0)||(consumed==text)) {
        restore_captures(ctx,snapshot_entry);
        __result_obj__0 = 0;
        return __result_obj__0;
    }
    const char* with=matchpattern(rest,consumed,ctx);
    if(with!=0) {
        __result_obj__0 = with;
        return __result_obj__0;
    }
    restore_captures(ctx,snapshot_entry);
    __result_obj__0 = 0;
    return __result_obj__0;
}

unsigned char re_fold_char(unsigned char c, _Bool ignore_case)
{
    if(ignore_case&&c>=65&&c<=90) {
        return (unsigned char)(c-65+97);
    }
    return c;
}

const char* matchtoken(struct regex_t* token  , const char* text, struct anonymous_typeX16* ctx  )
{
    const char* __result_obj__0;
    switch (    token->type) {
        case (1):
        __result_obj__0 = (((*text!=0&&matchdot(*text)))?(text+1):(0));
        return __result_obj__0;
        case (7):
        __result_obj__0 = (((*text!=0&&re_fold_char(token->u.ch,ctx->ignore_case)==re_fold_char((unsigned char)*text,ctx->ignore_case)))?(text+1):(0));
        return __result_obj__0;
        case (8):
        __result_obj__0 = (((*text!=0&&matchcharclass(*text,(const char*)token->u.ccl,ctx->ignore_case)))?(text+1):(0));
        return __result_obj__0;
        case (9):
        __result_obj__0 = (((*text!=0&&!matchcharclass(*text,(const char*)token->u.ccl,ctx->ignore_case)))?(text+1):(0));
        return __result_obj__0;
        case (10):
        __result_obj__0 = (((*text!=0&&matchdigit(*text)))?(text+1):(0));
        return __result_obj__0;
        case (11):
        __result_obj__0 = (((*text!=0&&!matchdigit(*text)))?(text+1):(0));
        return __result_obj__0;
        case (12):
        __result_obj__0 = (((*text!=0&&matchalphanum(*text)))?(text+1):(0));
        return __result_obj__0;
        case (13):
        __result_obj__0 = (((*text!=0&&!matchalphanum(*text)))?(text+1):(0));
        return __result_obj__0;
        case (14):
        __result_obj__0 = (((*text!=0&&matchwhitespace(*text)))?(text+1):(0));
        return __result_obj__0;
        case (15):
        __result_obj__0 = (((*text!=0&&!matchwhitespace(*text)))?(text+1):(0));
        return __result_obj__0;
        case (16):
        __result_obj__0 = matchgroup(token,(struct regex_t*)0,text,ctx);
        return __result_obj__0;
        case (2):
        __result_obj__0 = (((text==ctx->base))?(text):(0));
        return __result_obj__0;
        case (3):
        __result_obj__0 = (((*text==0))?(text):(0));
        return __result_obj__0;
        default:
        break;
    }
    __result_obj__0 = (const char*)0;
    return __result_obj__0;
}

int matchdigit(char c)
{
    return xisdigit((unsigned char)c);
}

int matchalpha(char c)
{
    return xisalpha((unsigned char)c);
}

int matchwhitespace(char c)
{
    return xisspace((unsigned char)c);
}

int matchalphanum(char c)
{
    return ((c==95)||matchalpha(c)||matchdigit(c));
}

int matchrange(char c, const char* str, _Bool ignore_case)
{
    unsigned char needle;
    unsigned char start;
    unsigned char end;
    needle=(unsigned char)c;
    start=(unsigned char)str[0];
    end=(unsigned char)str[2];
    if(ignore_case) {
        needle=re_fold_char(needle,1);
        start=re_fold_char(start,1);
        end=re_fold_char(end,1);
    }
    return ((needle!=45)&&(str[0]!=0)&&(str[0]!=45)&&(str[1]==45)&&(str[2]!=0)&&((needle>=start)&&(needle<=end)));
}

int matchdot(char c)
{
    return c!=10&&c!=13;
}

int ismetachar(char c)
{
    return ((c==115)||(c==83)||(c==119)||(c==87)||(c==100)||(c==68));
}

int matchmetachar(char c, const char* str)
{
    switch (    str[0]) {
        case 100:
        return matchdigit(c);
        case 68:
        return !matchdigit(c);
        case 119:
        return matchalphanum(c);
        case 87:
        return !matchalphanum(c);
        case 115:
        return matchwhitespace(c);
        case 83:
        return !matchwhitespace(c);
        default:
        return (c==str[0]);
    }
}

int matchcharclass(char c, const char* str, _Bool ignore_case)
{
    unsigned char needle;
    needle=re_fold_char((unsigned char)c,ignore_case);
    do {
        if(matchrange((char)needle,str,ignore_case)) {
            return 1;
        }
        else if(str[0]==92) {
            str+=1;
            if(matchmetachar((char)needle,str)) {
                return 1;
            }
            else if((needle==re_fold_char((unsigned char)str[0],ignore_case))&&!ismetachar((char)needle)) {
                return 1;
            }
        }
        else if(needle==re_fold_char((unsigned char)str[0],ignore_case)) {
            if(needle==45) {
                return ((str[-1]==0)||(str[1]==0));
            }
            else {
                return 1;
            }
        }
    } while(*str++!=0);
    return 0;
}

void re_print_internal(struct regex_t* pattern  , int depth)
{
    int i;
    const char* types[]={
    "RE_UNUSED", "RE_DOT", "RE_BEGIN", "RE_END", "RE_QUESTIONMARK", "RE_STAR", "RE_PLUS", "RE_CHAR",
    "RE_CHAR_CLASS", "RE_INV_CHAR_CLASS", "RE_DIGIT", "RE_NOT_DIGIT", "RE_ALPHA", "RE_NOT_ALPHA",
    "RE_WHITESPACE", "RE_NOT_WHITESPACE", "RE_GROUP", "RE_GROUP_END"
  };
    while(pattern!=0&&pattern->type!=(0)) {
        for(i=0;i<depth;++i){
            putchar(32);
        }
        printf("type: %s",types[pattern->type]);
        if((pattern->type==(8))||(pattern->type==(9))) {
            printf(" [");
            const unsigned char* ccl=pattern->u.ccl;
            while(*ccl!=0&&*ccl!=93) {
                printf("%c",*ccl);
                ++ccl;
            }
            printf("]");
        }
        else if(pattern->type==(7)) {
            printf(" '%c'",pattern->u.ch);
        }
        else if(pattern->type==(16)) {
            printf(" id=%d\n",pattern->u.group.id);
            re_print_internal(pattern->u.group.first,depth+2);
            pattern=pattern->next;
            continue;
        }
        printf("\n");
        pattern=pattern->next;
    }
}

int re_get_group_count(struct re_program* pattern  )
{
    struct re_program* program  ;
    if(pattern==0) {
        return 0;
    }
    program=(struct re_program*)pattern;
    return program->group_count;
}

int charp_index_regex(char* self, char* reg, int default_value, _Bool ignore_case)
{
    struct re_program* re  ;
    int result;
    int offset;
    int n;
    int result_41;
    int matchlength;
    int max_captures;
    int regex_result;
    if(self==((void*)0)||reg==((void*)0)) {
        return default_value;
    }
    re=re_compile(reg);
    if(re==0) {
        return default_value;
    }
    result=default_value;
    offset=0;
    n=0;
    result_41=default_value;
    while(1) {
        matchlength=0;
        max_captures=8;
        struct re_capture captures[max_captures]  ;
        memset(&captures, 0, sizeof(captures));
        regex_result=re_matchp_ex(re,self,&matchlength,captures,max_captures,ignore_case);
        if(regex_result>=0) {
            result_41=regex_result;
            break;
        }
        {
            break;
        }
    }
    return result_41;
}

int charp_rindex_regex(char* self, char* reg, int default_value, _Bool ignore_case)
{
    struct re_program* re  ;
    int result;
    int offset;
    int n;
    void* __right_value0 = (void*)0;
    char* self2  ;
    int result_42;
    int matchlength;
    int max_captures;
    int regex_result;
    int __result_obj__0;
    if(self==((void*)0)||reg==((void*)0)) {
        return default_value;
    }
    re=re_compile(reg);
    if(re==0) {
        return default_value;
    }
    result=default_value;
    offset=0;
    n=0;
    self2=(char*)come_increment_ref_count(charp_reverse(self));
    result_42=default_value;
    while(1) {
        matchlength=0;
        max_captures=8;
        struct re_capture captures[max_captures]  ;
        memset(&captures, 0, sizeof(captures));
        regex_result=re_matchp_ex(re,self2,&matchlength,captures,max_captures,ignore_case);
        if(regex_result>=0) {
            result_42=strlen(self)-matchlength;
            break;
        }
        {
            break;
        }
    }
    __result_obj__0 = result_42;
    (self2 = come_decrement_ref_count(self2, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__0;
}

char* string_chomp(char* str)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    char* result  ;
    if(str==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(char*)come_increment_ref_count(__builtin_string(str));
    if(result[string_length(result)-1]==10) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=charp_substring(result,0,-2))));
        (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int string_rindex_regex(char* self, char* reg, int default_value, _Bool ignore_case)
{
    return charp_rindex_regex(self,reg,default_value,ignore_case);
}

int string_index_regex(char* self, char* reg, int default_value, _Bool ignore_case)
{
    return charp_index_regex(self,reg,default_value,ignore_case);
}

_Bool charp_match(char* self, char* reg, _Bool ignore_case)
{
    struct re_program* re  ;
    int offset;
    int n;
    int matchlength;
    int max_captures;
    int regex_result;
    _Bool __result_obj__0;
    if(self==((void*)0)||reg==((void*)0)) {
        return 0;
    }
    re=re_compile(reg);
    if(re==0) {
        return 0;
    }
    offset=0;
    n=0;
    matchlength=0;
    max_captures=8;
    struct re_capture captures[max_captures]  ;
    memset(&captures, 0, sizeof(captures));
    regex_result=re_matchp_ex(re,self,&matchlength,captures,max_captures,ignore_case);
    if(regex_result>=0) {
        __result_obj__0 = 1;
        return __result_obj__0;
    }
    else {
        __result_obj__0 = 0;
        return __result_obj__0;
    }
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item  )
{
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char* __dec_obj20  ;
    struct list_item$1char$ph* litem_43;
    char* __dec_obj21  ;
    struct list_item$1char$ph* litem_44;
    char* __dec_obj22  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 947, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj20=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_43=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 957, "struct list_item$1char$ph*"))));
        litem_43->prev=self->head;
        litem_43->next=((void*)0);
        __dec_obj21=litem_43->item,
        litem_43->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_43;
        self->head->next=litem_43;
    }
    else {
        litem_44=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 967, "struct list_item$1char$ph*"))));
        litem_44->prev=self->tail;
        litem_44->next=((void*)0);
        __dec_obj22=litem_44->item,
        litem_44->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_44;
        self->tail=litem_44;
    }
    self->len++;
    __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__0;
}

struct list$1char$ph* charp_scan(char* self, char* reg, _Bool ignore_case)
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    struct list$1char$ph* result;
    struct re_program* re  ;
    int offset;
    int n;
    int group_count;
    int matchlength;
    int max_captures;
    int regex_result;
    char* str  ;
    int i;
    struct re_capture cp  ;
    char* match_string  ;
    if(self==((void*)0)||reg==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 6343, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 6345, "struct list$1char$ph*"))));
    re=re_compile(reg);
    if(re==0) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 6350, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    offset=0;
    n=0;
    group_count=re_get_group_count(re);
    while(1) {
        matchlength=0;
        max_captures=8;
        struct re_capture captures[max_captures]  ;
        memset(&captures, 0, sizeof(captures));
        regex_result=re_matchp_ex(re,self+offset,&matchlength,captures,max_captures,ignore_case);
        if(regex_result>=0&&group_count==0) {
            str=(char*)come_increment_ref_count(charp_substring(self,offset+regex_result,offset+regex_result+matchlength));
            list$1char$ph_add(result,(char*)come_increment_ref_count(str));
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
                cp=captures[i];
                match_string=(char*)come_increment_ref_count(charp_substring((self+offset),cp.start,cp.start+cp.length));
                list$1char$ph_push_back(result,(char*)come_increment_ref_count(match_string));
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
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct list$1char$ph* charp_split(char* self, char* reg, _Bool ignore_case)
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    struct list$1char$ph* result;
    struct re_program* re  ;
    int offset;
    int n;
    int group_count;
    int matchlength;
    int max_captures;
    int regex_result;
    char* str  ;
    char* str_45  ;
    if(self==((void*)0)||reg==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 6406, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 6409, "struct list$1char$ph*"))));
    re=re_compile(reg);
    if(re==0) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 6414, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    offset=0;
    n=0;
    group_count=re_get_group_count(re);
    while(1) {
        matchlength=0;
        max_captures=8;
        struct re_capture captures[max_captures]  ;
        memset(&captures, 0, sizeof(captures));
        regex_result=re_matchp_ex(re,self+offset,&matchlength,captures,max_captures,ignore_case);
        if(regex_result>=0&&group_count==0) {
            str=(char*)come_increment_ref_count(charp_substring(self,offset,offset+regex_result));
            list$1char$ph_add(result,(char*)come_increment_ref_count(str));
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
    if(offset<charp_length(self)) {
        str_45=(char*)come_increment_ref_count(charp_substring(self,offset,-1));
        list$1char$ph_push_back(result,(char*)come_increment_ref_count(str_45));
        (str_45 = come_decrement_ref_count(str_45, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* string_sub(char* self, char* reg, char* replace, _Bool ignore_case)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=charp_sub(self,reg,replace,1,ignore_case))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

struct list$1char$ph* string_scan(char* self, char* reg, _Bool ignore_case)
{
    void* __right_value0 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value0=charp_scan(self,reg,ignore_case))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct list$1char$ph* string_split(char* self, char* reg, _Bool ignore_case)
{
    void* __right_value0 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value0=charp_split(self,reg,ignore_case))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

_Bool string_match(char* self, char* reg, _Bool ignore_case)
{
    return charp_match(self,reg,ignore_case);
}

char* charp_sub(char* self, char* reg, char* replace, _Bool global, _Bool ignore_case)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    struct re_program* re  ;
    int offset;
    int n;
    void* __right_value1 = (void*)0;
    struct buffer* result  ;
    int group_count;
    int matchlength;
    int max_captures;
    int regex_result;
    char* str  ;
    char* str_46  ;
    char* str_47  ;
    if(self==((void*)0)||reg==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    re=re_compile(reg);
    if(re==0) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    offset=0;
    n=0;
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 6499, "struct buffer*"))));
    group_count=re_get_group_count(re);
    while(1) {
        matchlength=0;
        max_captures=8;
        struct re_capture captures[max_captures]  ;
        memset(&captures, 0, sizeof(captures));
        regex_result=re_matchp_ex(re,self+offset,&matchlength,captures,max_captures,ignore_case);
        if(regex_result>=0&&group_count==0) {
            str=(char*)come_increment_ref_count(charp_substring(self,offset,offset+regex_result));
            buffer_append_str(result,str);
            buffer_append_str(result,replace);
            if(matchlength==0) {
                offset++;
            }
            else {
                offset=offset+regex_result+matchlength;
            }
            if(!global) {
                str_46=(char*)come_increment_ref_count(charp_substring(self,offset,-1));
                buffer_append_str(result,str_46);
                (str_46 = come_decrement_ref_count(str_46, (void*)0, (void*)0, 0, 0, (void*)0));
                (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
                (str_46 = come_decrement_ref_count(str_46, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            str_47=(char*)come_increment_ref_count(charp_substring(self,offset,-1));
            buffer_append_str(result,str_47);
            (str_47 = come_decrement_ref_count(str_47, (void*)0, (void*)0, 0, 0, (void*)0));
            break;
            (str_47 = come_decrement_ref_count(str_47, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=buffer_to_string(result))));
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* charp_sub_block(char* self, char* reg, _Bool global, _Bool ignore_case, void* parent, char* (*block)(void*,char*,struct list$1char$ph*))
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer* result  ;
    struct re_program* re  ;
    int offset;
    int n;
    int group_count;
    int matchlength;
    int max_captures;
    int regex_result;
    char* str  ;
    struct list$1char$ph* group_strings;
    char* match_string  ;
    char* block_result  ;
    char* str_48  ;
    char* str_49  ;
    struct list$1char$ph* group_strings_50;
    int i;
    struct re_capture cp  ;
    char* match_string_51  ;
    char* match_string_52  ;
    char* block_result_53  ;
    char* str_54  ;
    if(self==((void*)0)||reg==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 6547, "struct buffer*"))));
    re=re_compile(reg);
    if(re==0) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    offset=0;
    n=0;
    group_count=re_get_group_count(re);
    while(1) {
        matchlength=0;
        max_captures=8;
        struct re_capture captures[max_captures]  ;
        memset(&captures, 0, sizeof(captures));
        regex_result=re_matchp_ex(re,self+offset,&matchlength,captures,max_captures,ignore_case);
        if(regex_result>=0&&group_count==0) {
            str=(char*)come_increment_ref_count(charp_substring(self,offset,offset+regex_result));
            buffer_append_str(result,str);
            group_strings=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 6574, "struct list$1char$ph*"))));
            match_string=(char*)come_increment_ref_count(charp_substring(self,offset+regex_result,offset+regex_result+matchlength));
            block_result=(char*)come_increment_ref_count(block(parent,match_string,group_strings));
            buffer_append_str(result,block_result);
            if(matchlength==0) {
                offset++;
            }
            else {
                offset=offset+regex_result+matchlength;
            }
            if(!global) {
                str_48=(char*)come_increment_ref_count(charp_substring(self,offset,-1));
                buffer_append_str(result,str_48);
                (str_48 = come_decrement_ref_count(str_48, (void*)0, (void*)0, 0, 0, (void*)0));
                (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(list$1char$ph$p_finalize, group_strings, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (match_string = come_decrement_ref_count(match_string, (void*)0, (void*)0, 0, 0, (void*)0));
                (block_result = come_decrement_ref_count(block_result, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
                (str_48 = come_decrement_ref_count(str_48, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(list$1char$ph$p_finalize, group_strings, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (match_string = come_decrement_ref_count(match_string, (void*)0, (void*)0, 0, 0, (void*)0));
            (block_result = come_decrement_ref_count(block_result, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(regex_result>=0&&group_count>0) {
            str_49=(char*)come_increment_ref_count(charp_substring(self,offset,offset+regex_result));
            buffer_append_str(result,str_49);
            group_strings_50=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 6602, "struct list$1char$ph*"))));
            for(i=0;i<group_count;i++){
                cp=captures[i];
                match_string_51=(char*)come_increment_ref_count(charp_substring((self+offset),cp.start,cp.start+cp.length));
                list$1char$ph_push_back(group_strings_50,(char*)come_increment_ref_count(match_string_51));
                (match_string_51 = come_decrement_ref_count(match_string_51, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            match_string_52=(char*)come_increment_ref_count(charp_substring(self,offset+regex_result,offset+regex_result+matchlength));
            block_result_53=(char*)come_increment_ref_count(block(parent,match_string_52,group_strings_50));
            buffer_append_str(result,block_result_53);
            if(matchlength==0) {
                offset++;
            }
            else {
                offset=offset+regex_result+matchlength;
            }
            (str_49 = come_decrement_ref_count(str_49, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(list$1char$ph$p_finalize, group_strings_50, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (match_string_52 = come_decrement_ref_count(match_string_52, (void*)0, (void*)0, 0, 0, (void*)0));
            (block_result_53 = come_decrement_ref_count(block_result_53, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            str_54=(char*)come_increment_ref_count(charp_substring(self,offset,-1));
            buffer_append_str(result,str_54);
            (str_54 = come_decrement_ref_count(str_54, (void*)0, (void*)0, 0, 0, (void*)0));
            break;
            (str_54 = come_decrement_ref_count(str_54, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=buffer_to_string(result))));
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

struct list$1char$ph* charp_scan_block(char* self, char* reg, _Bool ignore_case, void* parent, char* (*block)(void*,char*,struct list$1char$ph*))
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    struct list$1char$ph* result;
    struct re_program* re  ;
    int offset;
    int n;
    int group_count;
    int matchlength;
    int max_captures;
    int regex_result;
    struct list$1char$ph* group_strings;
    char* match_string  ;
    char* block_result  ;
    struct list$1char$ph* group_strings_55;
    int i;
    struct re_capture cp  ;
    char* match_string_56  ;
    char* match_string_57  ;
    char* block_result_58  ;
    if(self==((void*)0)||reg==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 6636, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 6638, "struct list$1char$ph*"))));
    re=re_compile(reg);
    if(re==0) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 6643, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    offset=0;
    n=0;
    group_count=re_get_group_count(re);
    while(1) {
        matchlength=0;
        max_captures=8;
        struct re_capture captures[max_captures]  ;
        memset(&captures, 0, sizeof(captures));
        regex_result=re_matchp_ex(re,self+offset,&matchlength,captures,max_captures,ignore_case);
        if(regex_result>=0&&group_count==0) {
            group_strings=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 6661, "struct list$1char$ph*"))));
            match_string=(char*)come_increment_ref_count(charp_substring(self,offset+regex_result,offset+regex_result+matchlength));
            block_result=(char*)come_increment_ref_count(block(parent,match_string,group_strings));
            list$1char$ph_add(result,(char*)come_increment_ref_count(block_result));
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
            group_strings_55=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 6678, "struct list$1char$ph*"))));
            for(i=0;i<group_count;i++){
                cp=captures[i];
                match_string_56=(char*)come_increment_ref_count(charp_substring((self+offset),cp.start,cp.start+cp.length));
                list$1char$ph_push_back(group_strings_55,(char*)come_increment_ref_count(match_string_56));
                (match_string_56 = come_decrement_ref_count(match_string_56, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            match_string_57=(char*)come_increment_ref_count(charp_substring(self,offset+regex_result,offset+regex_result+matchlength));
            block_result_58=(char*)come_increment_ref_count(block(parent,match_string_57,group_strings_55));
            list$1char$ph_add(result,(char*)come_increment_ref_count(block_result_58));
            if(matchlength==0) {
                offset++;
            }
            else {
                offset=offset+regex_result+matchlength;
            }
            come_call_finalizer(list$1char$ph$p_finalize, group_strings_55, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (match_string_57 = come_decrement_ref_count(match_string_57, (void*)0, (void*)0, 0, 0, (void*)0));
            (block_result_58 = come_decrement_ref_count(block_result_58, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            break;
        }
    }
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* string_sub_block(char* self, char* reg, _Bool global, _Bool ignore_case, void* parent, char* (*block)(void*,char*,struct list$1char$ph*))
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=charp_sub_block(self,reg,global,ignore_case,parent,block))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int* __builtin_wstring(char* str)
{
    int* __result_obj__0  ;
    int len;
    void* __right_value0 = (void*)0;
    int* wstr  ;
    int ret;
    if(str==((void*)0)) {
        __result_obj__0 = (int*)come_increment_ref_count(((void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(str);
    wstr=(int*)come_increment_ref_count((int*)come_calloc_v2(1, sizeof(int)*(1*(len+1)), "/usr/local/include/neo-c.h", 6762, "int*"));
    ret=mbstowcs(wstr,str,len+1);
    wstr[ret]=0;
    if(ret<0) {
        wstr[0]=0;
    }
    __result_obj__0 = (int*)come_increment_ref_count(wstr);
    (wstr = come_decrement_ref_count(wstr, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int wchar_tp_length(int* str  )
{
    if(str==((void*)0)) {
        return 0;
    }
    return wcslen(str);
}

int wchar_ta_length(int* str  )
{
    if(str==((void*)0)) {
        return 0;
    }
    return wcslen(str);
}

int wstring_length(int* str  )
{
    return wchar_tp_length(str);
}

char* string_lower_case(char* str)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    char* result  ;
    int i;
    if(str==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(char*)come_increment_ref_count(__builtin_string(str));
    for(i=0;i<strlen(str);i++){
        if(str[i]>=65&&str[i]<=90) {
            result[i]=str[i]-65+97;
        }
    }
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* string_upper_case(char* str)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    char* result  ;
    int i;
    if(str==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(char*)come_increment_ref_count(__builtin_string(str));
    for(i=0;i<strlen(str);i++){
        if(str[i]>=97&&str[i]<=122) {
            result[i]=str[i]-97+65;
        }
    }
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int* wchar_tp_substring(int* str  , int head, int tail)
{
    void* __right_value0 = (void*)0;
    int* __result_obj__0  ;
    int len;
    int* result  ;
    if(str==((void*)0)) {
        __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
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
        __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
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
        __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(head==tail) {
        __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(tail-head+1<1) {
        __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(int*)come_increment_ref_count((int*)come_calloc_v2(1, sizeof(int)*(1*(tail-head+1)), "/usr/local/include/neo-c.h", 6864, "int*"));
    memcpy(result,str+head,sizeof(int)*(tail-head));
    result[tail-head]=0;
    __result_obj__0 = (int*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int charp_index_count(char* str, char* search_str, int count, int default_value)
{
    int n;
    int len;
    int i;
    int len2;
    int j;
    memset(&j, 0, sizeof(j));
    if(str==((void*)0)||search_str==((void*)0)) {
        return default_value;
    }
    n=0;
    len=strlen(str);
    for(i=0;i<len;i++){
        len2=strlen(search_str);
        for(j=0;j<len2;j++){
            if(str[i+j]!=search_str[j]) {
                break;
            }
        }
        if(j==len2) {
            n++;
            if(n==count) {
                return i;
            }
        }
    }
    return default_value;
}

int charp_rindex(char* str, char* search_str, int default_value)
{
    int len;
    char* p;
    if(str==((void*)0)||search_str==((void*)0)) {
        return default_value;
    }
    len=strlen(search_str);
    p=str+strlen(str)-len;
    while(p>=str) {
        if(strncmp(p,search_str,len)==0) {
            return p-str;
        }
        p--;
    }
    return default_value;
}

int charp_rindex_count(char* str, char* search_str, int count, int default_value)
{
    int len;
    char* p;
    int n;
    if(str==((void*)0)||search_str==((void*)0)) {
        return default_value;
    }
    len=strlen(search_str);
    p=str+strlen(str)-len;
    n=0;
    while(p>=str) {
        if(strncmp(p,search_str,len)==0) {
            n++;
            if(n==count) {
                return p-str;
            }
        }
        p--;
    }
    return default_value;
}

char* charp_strip(char* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    char* result  ;
    int len;
    if(self==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(char*)come_increment_ref_count(__builtin_string(self));
    len=strlen(self);
    if(self[len-1]==10) {
        result[len-1]=0;
    }
    else if(self[len-1]==13) {
        result[len-1]=0;
    }
    else if(len>2&&self[len-2]==13&&self[len-1]==10) {
        result[len-2]=0;
    }
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* wchar_tp_to_string(int* wstr  )
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    int len;
    char* result  ;
    if(wstr==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=6*(wcslen(wstr)+1);
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len)), "/usr/local/include/neo-c.h", 6977, "char*"));
    if(wcstombs(result,wstr,len)<0) {
        strncpy(result,"",len);
    }
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* wchar_ta_to_string(int* wstr  )
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    if(wstr==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=wchar_tp_to_string(wstr))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int* charp_to_wstring(char* str)
{
    void* __right_value0 = (void*)0;
    int* __result_obj__0  ;
    if(str==((void*)0)) {
        __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=__builtin_wstring(str))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int* chara_to_wstring(char* str)
{
    void* __right_value0 = (void*)0;
    int* __result_obj__0  ;
    if(str==((void*)0)) {
        __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=__builtin_wstring(str))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int* wchar_tp_delete(int* str  , int head, int tail)
{
    void* __right_value0 = (void*)0;
    int* __result_obj__0  ;
    int len;
    void* __right_value1 = (void*)0;
    int* sub_str  ;
    if(str==((void*)0)) {
        __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=wcslen(str);
    if(len==0) {
        __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value1=string_to_wstring(((char*)(__right_value0=wchar_tp_to_string(str)))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
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
        __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value1=string_to_wstring(((char*)(__right_value0=wchar_tp_to_string(str)))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(tail>=len) {
        tail=len;
    }
    sub_str=(int*)come_increment_ref_count(wchar_tp_substring(str,tail,-1));
    memcpy(str+head,sub_str,sizeof(int)*(wstring_length(sub_str)+1));
    __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value1=string_to_wstring(((char*)(__right_value0=wchar_tp_to_string(str)))))));
    (sub_str = come_decrement_ref_count(sub_str, (void*)0, (void*)0, 0, 0, (void*)0));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int wchar_tp_index(int* str  , int* search_str  , int default_value)
{
    int* head  ;
    if(str==((void*)0)||search_str==((void*)0)) {
        return default_value;
    }
    head=wcsstr(str,search_str);
    if(head==((void*)0)) {
        return default_value;
    }
    return head-str;
}

int wchar_tp_rindex(int* str  , int* search_str  , int default_value)
{
    int len;
    int* p  ;
    int len2;
    _Bool result;
    int i;
    memset(&i, 0, sizeof(i));
    if(str==((void*)0)||search_str==((void*)0)) {
        return default_value;
    }
    len=wcslen(search_str);
    p=str+wcslen(str)-len;
    while(p>=str) {
        len2=wcslen(p);
        result=1;
        for(i=0;i<len&&i<len2;i++){
            if(p[i]!=search_str[i]) {
                result=0;
            }
        }
        if(result) {
            return (p-str);
        }
        p--;
    }
    return default_value;
}

int* wchar_tp_reverse(int* str  )
{
    void* __right_value0 = (void*)0;
    int* __result_obj__0  ;
    int len;
    int* result  ;
    int i;
    if(str==((void*)0)) {
        __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=wcslen(str);
    result=(int*)come_increment_ref_count((int*)come_calloc_v2(1, sizeof(int)*(1*(len+1)), "/usr/local/include/neo-c.h", 7100, "int*"));
    for(i=0;i<len;i++){
        result[i]=str[len-i-1];
    }
    result[len]=0;
    __result_obj__0 = (int*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int* wchar_tp_multiply(int* str  , int n)
{
    void* __right_value0 = (void*)0;
    int* __result_obj__0  ;
    int len;
    int* result  ;
    int i;
    if(str==((void*)0)) {
        __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=wcslen(str)*n+1;
    result=(int*)come_increment_ref_count((int*)come_calloc_v2(1, sizeof(int)*(1*(len)), "/usr/local/include/neo-c.h", 7119, "int*"));
    result[0]=0;
    for(i=0;i<n;i++){
        wcscat(result,str);
    }
    __result_obj__0 = (int*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int* wchar_tp_printable(int* str  )
{
    void* __right_value0 = (void*)0;
    int* __result_obj__0  ;
    int len;
    int* result  ;
    int n;
    int i;
    int c  ;
    if(str==((void*)0)) {
        __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=wchar_tp_length(str);
    result=(int*)come_increment_ref_count((int*)come_calloc_v2(1, sizeof(int)*(1*(len*2+1)), "/usr/local/include/neo-c.h", 7136, "int*"));
    n=0;
    for(i=0;i<len;i++){
        c=str[i];
        if((c>=0&&c<32)||c==127) {
            result[n++]=94;
            result[n++]=c+65-1;
        }
        else {
            result[n++]=c;
        }
    }
    result[n]=0;
    __result_obj__0 = (int*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int wchar_tp_compare(int* left  , int* right  )
{
    if(left==((void*)0)) {
        if(right==((void*)0)) {
            return 0;
        }
        else {
            return 1;
        }
    }
    else if(right==((void*)0)) {
        if(left==((void*)0)) {
            return 0;
        }
        else {
            return -1;
        }
    }
    return wcscmp(left,right);
}

int wstring_compare(int* left  , int* right  )
{
    if(left==((void*)0)) {
        if(right==((void*)0)) {
            return 0;
        }
        else {
            return 1;
        }
    }
    else if(right==((void*)0)) {
        if(left==((void*)0)) {
            return 0;
        }
        else {
            return -1;
        }
    }
    return wcscmp(left,right);
}

int* wchar_tp_operator_mult(int* str  , int n)
{
    void* __right_value0 = (void*)0;
    int* __result_obj__0  ;
    __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=wchar_tp_multiply(str,n))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int* wstring_operator_mult(int* str  , int n)
{
    void* __right_value0 = (void*)0;
    int* __result_obj__0  ;
    __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=wchar_tp_multiply(str,n))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool wstring_operator_equals(int* left  , int* right  )
{
    return wcscmp(left,right)==0;
}

_Bool wstring_operator_not_equals(int* left  , int* right  )
{
    return wcscmp(left,right)!=0;
}

int* wchar_tp_operator_add(int* left  , int* right  )
{
    void* __right_value0 = (void*)0;
    int* __result_obj__0  ;
    int* result  ;
    if(left==((void*)0)||right==((void*)0)) {
        __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(int*)come_increment_ref_count((int*)come_calloc_v2(1, sizeof(int)*(1*(wcslen(left)+wcslen(right)+1)), "/usr/local/include/neo-c.h", 7244, "int*"));
    wcscpy(result,left);
    wcscat(result,right);
    __result_obj__0 = (int*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int* wstring_operator_add(int* left  , int* right  )
{
    void* __right_value0 = (void*)0;
    int* __result_obj__0  ;
    int* result  ;
    if(left==((void*)0)||right==((void*)0)) {
        __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(int*)come_increment_ref_count((int*)come_calloc_v2(1, sizeof(int)*(1*(wcslen(left)+wcslen(right)+1)), "/usr/local/include/neo-c.h", 7257, "int*"));
    wcscpy(result,left);
    wcscat(result,right);
    __result_obj__0 = (int*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int charp_index(char* str, char* search_str, int default_value)
{
    char* head;
    if(str==((void*)0)||search_str==((void*)0)) {
        return default_value;
    }
    head=strstr(str,search_str);
    if(head==((void*)0)) {
        return default_value;
    }
    return head-str;
}

char* charp_replace(char* self, int index, char c)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    int len;
    if(self==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(self);
    if(strcmp(self,"")==0) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(self))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
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
    self[index]=c;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* charp_multiply(char* str, int n)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    int len;
    char* result;
    int i;
    if(str==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(str)*n+1;
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len)), "/usr/local/include/neo-c.h", 7314, "char*"));
    result[0]=0;
    for(i=0;i<n;i++){
        strcat(result,str);
    }
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

struct list$1char$ph* charp_split_str(char* self, char* str)
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    struct list$1char$ph* result;
    struct buffer* buf  ;
    int i;
    if(self==((void*)0)||str==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 7328, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 7330, "struct list$1char$ph*"))));
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 7332, "struct buffer*"))));
    for(i=0;i<charp_length(self);i++){
        if(strstr(self+i,str)==self+i) {
            list$1char$ph_push_back(result,(char*)come_increment_ref_count(__builtin_string(buf->buf)));
            buffer_reset(buf);
            i+=strlen(str)-1;
        }
        else {
            buffer_append_char(buf,self[i]);
        }
    }
    if(buffer_length(buf)!=0) {
        list$1char$ph_push_back(result,(char*)come_increment_ref_count(__builtin_string(buf->buf)));
    }
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

unsigned int wchar_tp_get_hash_key(int* value  )
{
    int result;
    int* p  ;
    if(value==((void*)0)) {
        return 0;
    }
    result=0;
    p=value;
    while(*p) {
        result+=(*p);
        p++;
    }
    return result;
}

_Bool wstring_equals(int* left  , int* right  )
{
    if(left==((void*)0)&&right==((void*)0)) {
        return 1;
    }
    else if(left==((void*)0)||right==((void*)0)) {
        return 0;
    }
    return wcscmp(left,right)==0;
}

_Bool wchar_t_operator_equals(int left  , int right  )
{
    return left==right;
}

_Bool wchar_t_operator_not_equals(int left  , int right  )
{
    return left!=right;
}

unsigned int wchar_t_get_hash_key(int value  )
{
    return value;
}

_Bool wchar_t_equals(int left  , int right  )
{
    return left==right;
}

char* wchar_t_to_string(int wc  )
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("%ls",wc))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* xrealpath(char* path)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    char* result;
    char* result2  ;
    if(path==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=realpath(path,((void*)0));
    result2=(char*)come_increment_ref_count(__builtin_string(result));
    free(result);
    __result_obj__0 = (char*)come_increment_ref_count(result2);
    (result2 = come_decrement_ref_count(result2, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* xdirname(char* path)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    void* __right_value1 = (void*)0;
    if(path==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value1=__builtin_string(dirname(((char*)(__right_value0=__builtin_string(path))))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

unsigned long  int xwcslen(int* wstr  )
{
    int* p  ;
    unsigned long  int len  ;
    if(wstr==((void*)0)) {
        return 0;
    }
    p=wstr;
    len=0;
    while(*p) {
        p++;
        len++;
    }
    return len;
}

int* wstring_substring(int* str  , int head, int tail)
{
    void* __right_value0 = (void*)0;
    int* __result_obj__0  ;
    __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=wchar_tp_substring(str,head,tail))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int string_index_count(char* str, char* search_str, int count, int default_value)
{
    return charp_index_count(str,search_str,count,default_value);
}

int string_rindex(char* str, char* search_str, int default_value)
{
    return charp_rindex(str,search_str,default_value);
}

int string_rindex_count(char* str, char* search_str, int count, int default_value)
{
    return charp_rindex_count(str,search_str,count,default_value);
}

char* string_strip(char* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=charp_strip(self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* wstring_to_string(int* wstr  )
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=wchar_tp_to_string(wstr))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int* int_to_wstring(int self)
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    int* __result_obj__0  ;
    __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value1=string_to_wstring(((char*)(__right_value0=xsprintf("%d",self)))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int* wstring_delete(int* str  , int head, int tail)
{
    void* __right_value0 = (void*)0;
    int* __result_obj__0  ;
    __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=wchar_tp_delete(str,head,tail))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int wstring_index(int* str  , int* search_str  , int default_value)
{
    return wchar_tp_index(str,search_str,default_value);
}

int wstring_rindex(int* str  , int* search_str  , int default_value)
{
    return wchar_tp_rindex(str,search_str,default_value);
}

int* wstring_reverse(int* str  )
{
    void* __right_value0 = (void*)0;
    int* __result_obj__0  ;
    __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=wchar_tp_reverse(str))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int* wstring_multiply(int* str  , int n)
{
    void* __right_value0 = (void*)0;
    int* __result_obj__0  ;
    __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=wchar_tp_multiply(str,n))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int* wstring_printable(int* str  )
{
    void* __right_value0 = (void*)0;
    int* __result_obj__0  ;
    __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=wchar_tp_printable(str))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

unsigned int wstring_get_hash_key(int* value  )
{
    return wchar_tp_get_hash_key(value);
}

int string_index(char* str, char* search_str, int default_value)
{
    return charp_index(str,search_str,default_value);
}

char* string_replace(char* self, int index, char c)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=charp_replace(self,index,c))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* string_multiply(char* str, int n)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=charp_multiply(str,n))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

struct list$1char$ph* string_split_str(char* self, char* str)
{
    void* __right_value0 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value0=charp_split_str(self,str))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

int* string_to_wstring(char* str)
{
    void* __right_value0 = (void*)0;
    int* __result_obj__0  ;
    __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=charp_to_wstring(str))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* charp_chomp(char* str)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=string_chomp(str))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool wchar_tp_equals(int* left  , int* right  )
{
    return wcscmp(left,right)==0;
}

_Bool wchar_tp_operator_equals(int* left  , int* right  )
{
    return wcscmp(left,right)==0;
}

_Bool wchar_tp_operator_not_equals(int* left  , int* right  )
{
    return wcscmp(left,right)!=0;
}

char* FILE_read(struct __sFILE* f  )
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer* buf  ;
    int size;
    if(f==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 7583, "struct buffer*"))));
    while(1) {
        char buf2[1024];
        memset(&buf2, 0, sizeof(buf2));
        size=fread(buf2,1,1024,f);
        buffer_append(buf,buf2,size);
        if(size<1024) {
            break;
        }
    }
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=buffer_to_string(buf))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int FILE_write(struct __sFILE* f  , char* str)
{
    if(f==((void*)0)||str==((void*)0)) {
        return -1;
    }
    return fwrite(str,strlen(str),1,f);
}

int FILE_fclose(struct __sFILE* f  )
{
    int result;
    if(f==((void*)0)) {
        return -1;
    }
    result=fclose(f);
    if(result<0) {
        return result;
    }
    return result;
}

struct __sFILE* FILE_fprintf(struct __sFILE* f  , const char* msg, ...)
{
    struct __sFILE* __result_obj__0  ;
    __builtin_va_list args  ;
    int result;
    if(f==((void*)0)||msg==((void*)0)) {
        __result_obj__0 = f;
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
        return __result_obj__0;
    }
    __result_obj__0 = f;
    return __result_obj__0;
}

int charp_write(char* self, char* file_name, _Bool append)
{
    struct __sFILE* f  ;
    int result;
    int result2;
    memset(&f, 0, sizeof(f));
    if(self==((void*)0)||file_name==((void*)0)) {
        return -1;
    }
    if(append) {
        f=fopen(file_name,"a");
    }
    else {
        f=fopen(file_name,"w");
    }
    if(f==0) {
        return -1;
    }
    result=fwrite(self,strlen(self),1,f);
    if(result!=1) {
        return result;
    }
    result2=fclose(f);
    if(result2<0) {
        return result2;
    }
    return result;
}

char* charp_read(char* file_name)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    struct __sFILE* f  ;
    void* __right_value1 = (void*)0;
    struct buffer* buf  ;
    int size;
    char* result  ;
    int result2;
    if(file_name==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    f=fopen(file_name,"r");
    if(f==0) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 7690, "struct buffer*"))));
    while(1) {
        char buf2[1024];
        memset(&buf2, 0, sizeof(buf2));
        size=fread(buf2,1,1024,f);
        buffer_append(buf,buf2,size);
        if(size<1024) {
            break;
        }
    }
    result=(char*)come_increment_ref_count(buffer_to_string(buf));
    result2=fclose(f);
    if(result2<0) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char*)come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

struct list$1char$ph* FILE_readlines(struct __sFILE* f  )
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* result;
    struct list$1char$ph* __result_obj__0;
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 7717, "struct list$1char$ph*"))));
    if(f==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result);
        come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    while(1) {
        char buf[1024];
        memset(&buf, 0, sizeof(buf));
        if(fgets(buf,1024,f)==0) {
            break;
        }
        list$1char$ph_push_back(result,(char*)come_increment_ref_count(__builtin_string(buf)));
    }
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

_Bool xiswalpha(int c  )
{
    _Bool result;
    result=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result;
}

_Bool xiswblank(int c  )
{
    return c==32||c==9;
}

_Bool xiswdigit(int c  )
{
    return (c>=48&&c<=57);
}

_Bool xiswalnum(int c  )
{
    return xiswalpha(c)||xiswdigit(c);
}

_Bool xiswascii(int c  )
{
    _Bool result;
    result=(c>=32&&c<=126);
    return result;
}

