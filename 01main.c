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

typedef struct MacroSnapshot MacroSnapshot;

/// previous struct definition ///
struct __sFILEX;

struct _xlocale;

#include <assert.h>
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

struct neo_frame
{
    struct neo_frame* prev  ;
    char* fun_name;
};

struct sMemHeader
{
    long size;
    int allocated;
    struct sMemHeader* next  ;
    struct sMemHeader* prev  ;
    struct sMemHeader* free_next  ;
    char* fun_name[8];
    const char* class_name;
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

struct sNode
{
    void* _protocol_obj;
    void (*finalize)(void*);
    void* (*clone)(void*);
    _Bool (*compile)(void*,struct sInfo*);
    int (*sline)(void*);
    int (*sline_real)(void*);
    char* (*sname)(void*);
    _Bool (*terminated)(void*);
    char* (*kind)(void*);
};

struct tuple2$2char$phsType$ph
{
    char* v1  ;
    struct sType* v2  ;
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
    char* mName  ;
    int mGenericsNum;
    int mMethodGenericsNum;
    struct list$1tuple2$2char$phsType$ph$ph* mFields;
    char* mParentClassName  ;
    char* mAttribute  ;
};

struct list_item$1sType$ph
{
    struct sType* item  ;
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
    struct sClass* mClass  ;
    struct sType* mOriginalLoadVarType  ;
    struct sType* mChannelType  ;
    struct list$1sType$ph* mGenericsTypes;
    struct sType* mNoSolvedGenericsType  ;
    struct sNode* mSizeNum;
    struct sNode* mAlignas;
    _Bool mAlignasDouble;
    char* mTupleName  ;
    char* mAttribute  ;
    char* mVarAttribute  ;
    _Bool mAllocaValue;
    _Bool mUnsigned;
    _Bool mShort;
    _Bool mLong;
    _Bool mLongLong;
    _Bool mConstant;
    _Bool mAtomic;
    _Bool mThreadLocal;
    _Bool mThread;
    _Bool mComplex;
    _Bool mRegister;
    _Bool mVolatile;
    _Bool mStatic;
    _Bool mUniq;
    _Bool mExtern;
    _Bool mRestrict;
    _Bool mHeap;
    _Bool mChannel;
    _Bool mDefferRightValue;
    _Bool mNoHeap;
    _Bool mNoCallingDestructor;
    _Bool mException;
    _Bool mTypeName;
    _Bool mAnonymous;
    char* mAnonymousName  ;
    _Bool mInnerStruct;
    char* mInnerStructName  ;
    _Bool mAnonymousVarName;
    _Bool mInline;
    _Bool mNullValue;
    _Bool mGuardValue;
    char* mAsmName  ;
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
    struct sType* mTypedefOriginalType  ;
    char* mOriginalTypeName  ;
    int mOriginalTypePointerNum;
    int mOriginalTypePointerHeap;
    _Bool mArrayPointerType;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct sType* mResultType  ;
    _Bool mVarArgs;
    struct sNode* mTypeOfNode;
};

struct sVar
{
    char* mName  ;
    char* mCValueName  ;
    struct sType* mType  ;
    _Bool mGlobal;
    _Bool mAllocaValue;
    _Bool mNoFree;
    char* mFunName  ;
};

struct list_item$1sVar$ph
{
    struct sVar* item  ;
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
    char* mName  ;
    struct sType* mResultType  ;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct list$1char$ph* mParamDefaultParametors;
    struct sType* mLambdaType  ;
    struct list$1sVar$ph* mAllVar;
    struct sBlock* mBlock  ;
    char* mTextBlock  ;
    char* mTextBlockSName  ;
    int mTextBlockSline;
    struct buffer* mSource  ;
    struct buffer* mSourceHead  ;
    struct buffer* mSourceHead2  ;
    struct buffer* mSourceDefer  ;
    _Bool mStatic;
    _Bool mInline;
    _Bool mUniq;
    _Bool mGenerate;
    _Bool mExternal;
    _Bool mVarArgs;
    _Bool mNoResultType;
    _Bool mConstFun;
    char* mAttribute  ;
    char* mFunAttribute  ;
    _Bool mGenericsFun;
    _Bool mDefineReturnVar;
};

struct sGenericsFun
{
    struct sType* mImplType  ;
    struct list$1char$ph* mGenericsTypeNames;
    struct list$1char$ph* mMethodGenericsTypeNames;
    char* mName  ;
    struct sType* mResultType  ;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct list$1char$ph* mParamDefaultParametors;
    char* mBlock  ;
    int mSLine;
    _Bool mVarArgs;
    _Bool mGenerate;
    char* mGenericsSName  ;
    int mGenericsSLine;
    _Bool mConstFun;
};

struct CVALUE
{
    char* c_value  ;
    struct sType* type  ;
    struct sVar* var  ;
    struct sRightValueObject* right_value_objects  ;
    char* c_value_without_right_value_objects  ;
    char* c_value_without_cast_object_value  ;
};

struct map$2char$phchar$ph
{
    char** keys  ;
    _Bool* item_existance;
    char** items  ;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct sModule
{
    struct buffer* mSourceHead  ;
    struct buffer* mSource  ;
    char* mLastCode  ;
    char* mLastCode2  ;
    struct map$2char$phchar$ph* mHeader;
};

struct map$2char$phsVar$ph
{
    char** keys  ;
    _Bool* item_existance;
    struct sVar** items  ;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct sVarTable
{
    struct map$2char$phsVar$ph* mVars;
    _Bool mGlobal;
    struct sVarTable* mParent  ;
};

struct sBlock
{
    struct list$1sNode$ph* mNodes;
    struct sVarTable* mVarTable  ;
    _Bool mOmitSemicolon;
};

struct sRightValueObject
{
    struct sType* mType  ;
    char* mVarName  ;
    char* mFunName  ;
    _Bool mFreed;
    int mID;
    int mBlockLevel;
    _Bool mStored;
    _Bool mDecrementRefCount;
    struct sType* mObjType  ;
    char* mObjValue  ;
    struct sVar* mObjVar  ;
    _Bool mNoFree;
};

struct sClassModule
{
    char* mName  ;
    char* mText  ;
    struct list$1char$ph* mParams;
    char* mSName  ;
    int mSLine;
};

struct map$2char$phsFun$ph
{
    char** keys  ;
    _Bool* item_existance;
    struct sFun** items  ;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsGenericsFun$ph
{
    char** keys  ;
    _Bool* item_existance;
    struct sGenericsFun** items  ;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsClass$ph
{
    char** keys  ;
    _Bool* item_existance;
    struct sClass** items  ;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsClassModule$ph
{
    char** keys  ;
    _Bool* item_existance;
    struct sClassModule** items  ;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsType$ph
{
    char** keys  ;
    _Bool* item_existance;
    struct sType** items  ;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phbuffer$ph
{
    char** keys  ;
    _Bool* item_existance;
    struct buffer** items  ;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct list_item$1sRightValueObject$ph
{
    struct sRightValueObject* item  ;
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
    struct CVALUE* item  ;
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
    struct buffer* source  ;
    char* end;
    char* sname  ;
    char* sname_at_head  ;
    char* base_sname  ;
    int sline;
    int err_num;
    int warning_num;
    char* clang_option  ;
    char* cpp_option  ;
    char* linker_option  ;
    char* linker_option2  ;
    _Bool no_output_err;
    _Bool no_output_come_code;
    _Bool undefined_array_num_var;
    struct sFun* come_fun  ;
    struct sFun* caller_fun  ;
    int caller_line;
    char* caller_sname;
    int block_level;
    struct map$2char$phsFun$ph* funcs;
    struct map$2char$phsFun$ph* uniq_funcs;
    struct map$2char$phsGenericsFun$ph* generics_funcs;
    struct map$2char$phsClass$ph* classes;
    struct map$2char$phsClassModule$ph* modules;
    struct map$2char$phsType$ph* types;
    struct map$2char$phsClass$ph* generics_classes;
    struct map$2char$phbuffer$ph* struct_definition;
    struct map$2char$phbuffer$ph* c_include_definition;
    struct map$2char$phbuffer$ph* var_definition;
    struct map$2char$phbuffer$ph* previous_struct_definition;
    struct map$2char$phbuffer$ph* typedef_definition;
    struct map$2char$phsType$ph* named_child_struct;
    struct map$2char$phchar$ph* reflection_vars;
    struct sModule* module  ;
    struct sType* type  ;
    struct list$1sRightValueObject$ph* right_value_objects;
    struct sType* generics_type  ;
    struct list$1sType$ph* method_generics_types;
    struct list$1CVALUE$ph* stack;
    struct sType* come_function_result_type  ;
    struct sType* come_method_block_function_result_type  ;
    struct sVarTable* lv_table  ;
    struct sVarTable* gv_table  ;
    _Bool no_comma;
    _Bool no_assign;
    _Bool no_label;
    _Bool last_statment_is_return;
    struct list$1char$ph* generics_type_names;
    struct list$1char$ph* method_generics_type_names;
    struct sType* impl_type  ;
    struct sType* class_type  ;
    int current_stack_num;
    int num_method_block;
    struct sClass* current_stack_frame_struct  ;
    _Bool define_struct;
    _Bool in_typedef;
    char* output_file_name  ;
    struct sVarTable* current_loop_vtable  ;
    _Bool verbose;
    int num_current_stack;
    int num_source_files;
    int max_source_files;
    _Bool writing_source_file_position;
    struct sType* function_result_type  ;
    _Bool in_class;
    struct map$2char$phchar$ph* module_params;
    _Bool constructor_;
    struct sClass* defining_class  ;
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
    struct sFun* calling_fun  ;
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
    char* pragma  ;
    _Bool in_refference;
    struct buffer* paren_block_buffer  ;
    _Bool in_typeof;
    _Bool in_store_array;
    int parse_struct_recursive_count;
    _Bool exp_value;
    struct buffer* if_expression_buffer  ;
    char* if_result_value_name  ;
    _Bool if_result_value_name_defined;
    struct sType* if_result_type  ;
};

struct sNodeBase
{
    int sline;
    char* sname  ;
    int sline_real;
};

struct sCurrentNode
{
    int sline;
    char* sname  ;
    int sline_real;
};

struct tuple2$2sType$phchar$ph
{
    struct sType* v1  ;
    char* v2  ;
};

struct tuple2$2char$phsGenericsFun$p
{
    char* v1  ;
    struct sGenericsFun* v2  ;
};

struct tuple3$3sType$phchar$ph_Bool$
{
    struct sType* v1  ;
    char* v2  ;
    _Bool v3;
};

struct tuple2$2char$phchar$ph
{
    char* v1  ;
    char* v2  ;
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
    struct sFun* v1  ;
    char* v2  ;
};

struct tuple2$2char$ph_Bool$
{
    char* v1  ;
    _Bool v2;
};

struct tuple3$3sType$phchar$phsNode$ph
{
    struct sType* v1  ;
    char* v2  ;
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
    char* v1  ;
    struct sFun* v2  ;
    struct sGenericsFun* v3  ;
};

struct tuple2$2char$phsNode$ph
{
    char* v1  ;
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
    char* sname  ;
    int sline_real;
};

/// variable definition ///
extern struct __sFILE* __stdinp  ;
extern struct __sFILE* __stdoutp  ;
extern struct __sFILE* __stderrp  ;
extern const int sys_nerr;
extern const char* sys_errlist[];
extern int __mb_cur_max;
extern char* suboptarg;
extern struct neo_frame* neo_current_frame  ;

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
extern _Bool gComeDebug;
extern _Bool gComeUniq;
extern _Bool gComeC;
extern _Bool gComePthread;
extern _Bool gComeNet;
extern _Bool gComeMalloc;
extern _Bool gComeBareMetal;
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
_Bool transpile_conditional_with_free_right_object_value(struct sNode* node, struct sInfo* info  );
int err_msg(struct sInfo* info  , const char* msg, ...);
int warning_msg(struct sInfo* info  , const char* msg, ...);
int expected_next_character(char c, struct sInfo* info  );
_Bool node_compile(struct sNode* node, struct sInfo* info  );
_Bool node_conditional_compile(struct sNode* node, struct sInfo* info  );
int come_main(int argc, char** argv);
char* make_type_name_string(struct sType* type  , struct sInfo* info  , _Bool no_static, _Bool cast_type, _Bool typedef_extended);
char* make_come_type_name_string(struct sType* type  , struct sInfo* info  );
char* make_come_define_var(struct sType* type  , char* name, struct sInfo* info  );
struct sType* get_no_solved_type(struct sType* type  );
struct sType* get_no_solved_type2(struct sType* type  );
char* header_function(struct sFun* fun  , struct sInfo* info  );
_Bool output_source_file(struct sInfo* info  );
void show_type(struct sType* type  , struct sInfo* info  );
char* create_generics_name(struct sType* generics_type  , struct sInfo* info  );
void add_last_code_to_source(struct sInfo* info  );
void add_come_code_at_function_head(struct sInfo* info  , const char* code, ...);
void add_come_code_at_come_header(struct sInfo* info  , char* id  , const char* msg, ...);
void add_come_code_no_indent(struct sInfo* info  , const char* msg, ...);
void add_come_code_at_come_struct_header(struct sInfo* info  , char* id  , const char* msg, ...);
void add_come_code_at_function_head2(struct sInfo* info  , const char* code, ...);
void add_come_code(struct sInfo* info  , const char* msg, ...);
void add_come_last_code(struct sInfo* info  , const char* msg, ...);
void add_come_last_code2(struct sInfo* info  , const char* msg, ...);
void dec_stack_ptr(int value, struct sInfo* info  );
struct CVALUE* get_value_from_stack(int offset, struct sInfo* info  );
char* make_define_var(struct sType* type  , char* name, struct sInfo* info  , _Bool no_static, _Bool in_typedef);
char* make_var_name(struct sType* type  , char* name, struct sInfo* info  , _Bool no_static);
void transpiler_clear_last_code(struct sInfo* info  );
_Bool output_header_file(struct sInfo* info  );
void on_drop_object(struct sType* type  , char* obj, struct sInfo* info  );
void on_load_object(struct sType* type  , char* obj, struct sInfo* info  );
struct sType* solve_method_generics(struct sType* type  , struct sInfo* info  );
_Bool existance_free_right_value_objects(struct sInfo* info  );
_Bool existance_free_objects_on_return(struct sBlock* current_block  , struct sInfo* info  , struct sVar* ret_value  , _Bool top_block);
void std_move(struct sType* left_type  , struct sType* right_type  , struct CVALUE* right_value  , struct sInfo* info  );
_Bool create_equals_method(struct sType* type  , struct sInfo* info  );
_Bool create_operator_equals_method(struct sType* type  , struct sInfo* info  );
_Bool create_operator_not_equals_method(struct sType* type  , struct sInfo* info  );
struct sType* solve_generics(struct sType* type  , struct sType* generics_type  , struct sInfo* info  );
struct sVar* get_variable_from_table(struct sVarTable* table  , char* name);
void free_objects_on_return(struct sBlock* current_block  , struct sInfo* info  , struct sVar* ret_value  , _Bool top_block);
void free_objects_of_match_lv_tables(struct sInfo* info  );
void free_objects_on_break(struct sInfo* info  );
void free_object(struct sType* type  , char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info  , _Bool ret_value);
struct tuple2$2sType$phchar$ph* clone_object(struct sType* type  , char* obj, struct sInfo* info  );
void free_right_value_objects(struct sInfo* info  );
void free_objects(struct sVarTable* table  , struct sVar* ret_value  , struct sInfo* info  );
void append_object_to_right_values(struct CVALUE* come_value  , struct sType* type  , struct sInfo* info  , _Bool decrement_ref_count, struct sType* obj_type  , char* obj_value, struct sVar* obj_var  );
void remove_object_from_right_values(int right_value_num, struct sInfo* info  );
void remove_value_from_right_value_objects(struct CVALUE* come_value  , struct sInfo* info  );
char* increment_ref_count_object(struct sType* type  , char* obj, struct sInfo* info  );
void decrement_ref_count_object(struct sType* type  , char* obj, struct sInfo* info  , _Bool no_free);
void transpile_toplevel(_Bool block, struct sInfo* info  );
struct sNode* reverse_node(struct sNode* value, struct sInfo* info  );
struct sFun* compile_uniq_function(struct sFun* fun  , struct sInfo* info  );
struct sNode* cast_node(struct sType* type  , struct sNode* node, struct sInfo* info  );
struct sNode* reffence_node(struct sNode* value, struct sInfo* info  );
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name  , struct list$1sType$ph* method_generics_types, struct sInfo* info  );
struct sNode* create_return_node(struct sNode* value, char* value_source  , struct sInfo* info  );
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info  );
_Bool create_method_generics_fun(char* fun_name  , struct sGenericsFun* generics_fun  , struct sInfo* info  );
_Bool operator_overload_fun_self(struct sType* type  , const char* fun_name, struct sNode* node, struct CVALUE* left_value  , struct sInfo* info  );
void caller_begin(struct sInfo* info  );
void caller_end(struct sInfo* info  );
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info  );
struct tuple3$3sType$phchar$ph_Bool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info  );
void skip_pointer_attribute(struct sInfo* info  );
void skip_paren(struct sInfo* info  );
struct sNode* parse_normal_block(_Bool clang, struct sInfo* info  );
void cast_type(struct sType* left_type  , struct sType* right_type  , struct CVALUE* come_value  , struct sInfo* info  );
_Bool check_assign_type(const char* msg, struct sType* left_type  , struct sType* right_type  , struct CVALUE* come_value  , struct sInfo* info  );
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info  , _Bool parse_function_attribute);
struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo* info  );
struct sNode* get_number(_Bool minus, struct sInfo* info  );
struct sNode* get_oct_number(struct sInfo* info  );
struct sNode* get_hex_number(_Bool minus, struct sInfo* info  );
struct sNode* create_int_node(char* value  , struct sInfo* info  );
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* parse_params(struct sInfo* info  , _Bool in_constructor_);
struct tuple2$2sFun$pchar$ph* create_pthread_fun(struct sType* type  , char* fun_name, struct sInfo* info  );
struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType* type  , const char* fun_name, struct sInfo* info  );
struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type  , const char* fun_name, struct sInfo* info  );
struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type  , const char* fun_name, struct sInfo* info  );
struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType* type  , const char* fun_name, struct sInfo* info  );
struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type  , const char* fun_name, struct sInfo* info  );
struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type  , const char* fun_name, struct sInfo* info  );
struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type  , const char* fun_name, struct sInfo* info  );
struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type  , const char* fun_name, struct sInfo* info  );
struct tuple2$2sFun$pchar$ph* create_compare_automatically(struct sType* type  , const char* fun_name, struct sInfo* info  );
char* skip_block(struct sInfo* info  , _Bool return_self_at_last);
_Bool is_contained_generics_class(struct sType* type  , struct sInfo* info  );
_Bool is_type_name(char* buf, struct sInfo* info  );
_Bool parsecmp(const char* p2, struct sInfo* info  );
char* parse_word(_Bool digits, struct sInfo* info  );
char* backtrace_parse_word(struct sInfo* info  );
void skip_spaces_and_lf(struct sInfo* info  );
void skip_spaces_and_lf2(struct sInfo* info  );
struct tuple2$2char$ph_Bool$* create_generics_fun(char* fun_name  , struct sGenericsFun* generics_fun  , struct sType* generics_type  , struct sInfo* info  );
struct tuple3$3sType$phchar$ph_Bool$* parse_type(struct sInfo* info  , _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sType$phchar$ph* parse_variable_name_on_multiple_declare(struct sType* base_type_name  , _Bool first, struct sInfo* info  );
struct sBlock* parse_block(struct sInfo* info  , _Bool return_self_at_last, _Bool in_function);
int transpile_block(struct sBlock* block  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info  , _Bool no_var_table, _Bool loop_block, _Bool if_result_value);
void arrange_stack(struct sInfo* info  , int top);
struct sNode* parse_function(struct sInfo* info  );
struct sNode* statment(struct sInfo* info  );
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info  );
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info  );
struct sNode* expression_node_v1(struct sInfo* info  );
struct sNode* expression_node_v99(struct sInfo* info  );
struct sNode* expression_node_v98(struct sInfo* info  );
struct sNode* expression_node_v97(struct sInfo* info  );
int transpile(struct sInfo* info  );
void parse_sharp_v5(struct sInfo* info  );
char* create_method_name(struct sType* obj_type  , _Bool no_pointer_name, const char* fun_name, struct sInfo* info  , _Bool array_equal_pointer);
char* create_method_name_original_obj_type(struct sType* obj_type  , _Bool no_pointer_name, const char* fun_name, struct sInfo* info  , _Bool array_equal_pointer);
char* create_non_method_name(struct sType* obj_type  , _Bool no_pointer_name, const char* fun_name, struct sInfo* info  , _Bool array_equal_pointer);
char* create_method_name_using_class(struct sClass* obj_class  , const char* fun_name, struct sInfo* info  );
struct sNode* create_null_return_value(struct sInfo* info  );
struct sNode* create_some(struct sNode* exp, struct sInfo* info  );
struct sNode* expression_node_v96(struct sInfo* info  );
struct sNode* parse_tuple(struct sInfo* info  , _Bool named_tuple);
struct sNode* parse_some(struct sInfo* info  );
struct sNode* parse_none(struct sInfo* info  );
_Bool is_inner_calling(struct sNode* node, struct sInfo* info  );
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info  );
struct sNode* expression_node_v95(struct sInfo* info  );
struct sNode* store_var(char* name  , struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type  , _Bool alloc, struct sNode* right_value, struct sInfo* info  );
struct sNode* create_load_var(const char* var_name, struct sInfo* info  );
struct sNode* parse_array_initializer(struct sInfo* info  );
struct sNode* parse_struct_initializer(struct sInfo* info  );
struct sNode* parse_global_variable(struct sInfo* info  );
struct sNode* load_var(char* name  , struct sInfo* info  );
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info  );
void add_variable_to_table(char* name, struct sType* type  , struct sInfo* info  , _Bool function_param, _Bool comma, _Bool to_function_table);
void add_variable_to_global_table(char* name, struct sType* type  , struct sInfo* info  );
void add_variable_to_global_table_with_int_value(char* name, struct sType* type  , char* c_value, struct sInfo* info  );
struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info  );
struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info  );
struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info  );
struct sNode* parse_less_method_call(struct sNode* expression_node, struct sInfo* info  );
struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info  );
struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info  );
struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info  );
struct sNode* string_node_v9(char* buf, char* head, int head_sline, struct sInfo* info  );
struct sNode* string_node_v10(char* buf, char* head, int head_sline, struct sInfo* info  );
struct sNode* string_node_v11(char* buf, char* head, int head_sline, struct sInfo* info  );
struct sNode* string_node_v12(char* buf, char* head, int head_sline, struct sInfo* info  );
struct sNode* create_comma_exp(struct sNode* node, struct sNode* node2, struct sInfo* info  );
struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo* info  );
struct sNode* create_null_node(struct sInfo* info  );
struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info  );
_Bool operator_overload_fun(struct sType* type  , const char* fun_name, struct sNode* left_node, struct sNode* right_node, struct CVALUE* left_value  , struct CVALUE* right_value  , _Bool break_guard, struct sInfo* info  );
struct sNode* expression_v13(struct sInfo* info  , _Bool type_name_exp);
struct sNode* post_op_v13(struct sNode* node, struct sInfo* info  );
struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info  );
void child_output_struct(struct sType* type  , char* struct_name  , struct buffer* buf  , _Bool* existance_generics, char* name  , int indent, struct sInfo* info  , _Bool* named_child);
char* parse_struct_attribute(struct sInfo* info  );
struct sNode* create_nothing_node(struct sInfo* info  );
_Bool is_contained_method_generics_types(struct sType* type  , struct sInfo* info  );
_Bool is_contained_generics_types(struct sType* type  , struct sInfo* info  );
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info  );
struct sNode* parse_struct(char* type_name  , char* struct_attribute  , struct sInfo* info  , _Bool anonymous);
char* get_none_generics_name(char* class_name);
struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info  );
_Bool output_generics_struct(struct sType* type  , struct sType* generics_type  , struct sInfo* info  );
void output_struct(struct sClass* klass  , char* pragma  , struct sInfo* info  , _Bool anonymous);
struct sNode* string_node_v15(char* buf, char* head, int head_sline, struct sInfo* info  );
struct sNode* parse_union(char* type_name  , char* union_attribute  , struct sInfo* info  , _Bool anonymous);
struct sNode* top_level_v97(char* buf, char* head, int head_sline, struct sInfo* info  );
struct sNode* string_node_v16(char* buf, char* head, int head_sline, struct sInfo* info  );
struct sNode* parse_enum(char* type_name  , char* attribute  , struct sInfo* info  );
struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info  );
_Bool add_typedef(char* type_name  , struct sType* type  , struct sInfo* info  );
struct sNode* top_level_v95(char* buf, char* head, int head_sline, struct sInfo* info  );
struct sNode* string_node_v17(char* buf, char* head, int head_sline, struct sInfo* info  );
struct sNode* create_nullable_node(struct sNode* left, struct sInfo* info  );
struct sNode* load_field(struct sNode* left, char* name  , struct sInfo* info  );
struct sNode* store_field(struct sNode* left, struct sNode* right, char* name  , struct sInfo* info  );
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info  );
struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name  , struct sInfo* info  );
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info  );
struct tuple3$3char$phsFun$psGenericsFun$p* get_method(const char* fun_name, struct sType* obj_type  , struct sInfo* info  );
struct sNode* create_method_call(const char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block  , int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo* info  );
struct sNode* create_guard_break_method_call(struct sNode* expression_node, struct sInfo* info  );
_Bool compile_method_block(struct buffer* method_block  , struct list$1CVALUE$ph* come_params, struct sFun* fun  , char* fun_name, int method_block_sline, struct sInfo* info  , _Bool no_create_current_stack);
struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType* type  , char* fun_name  , struct sInfo* info  , _Bool array_equal_pointer);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name  , struct sInfo* info  );
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info  );
struct sNode* create_implements(struct sNode* node, struct sType* inf_type  , struct sInfo* info  );
struct sNode* create_true_object(struct sInfo* info  );
struct sNode* create_false_object(struct sInfo* info  );
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info  );
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info  );
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info  );
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info  );
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info  );
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info  );
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo* info  );
void preprocess_file_neo_c(const char* path, struct __sFILE* out  );
void init_ccpp(int argc, char** argv);
void incldue_file_neo_c(char* path, int quoted, struct __sFILE* out  );
const char* get_macro(const char* macro_name);
void macro_define(const char* def);
void macro_undef(const char* name);
const char* call_func_macro(const char* macro_name, const char* args, const char* file, long line);
void set_macro(const char* name, const char* value);
struct MacroSnapshot* macro_snapshot_create();
char* macro_snapshot_diff_defines(struct MacroSnapshot* snap  );
void macro_snapshot_free(struct MacroSnapshot* snap  );
void init_global_opts();
int main(int argc, char** argv);
void stackframe();
_Bool die(const char* msg);
void come_heap_init(int come_debug);
void come_heap_final();
void* alloc_from_pages(unsigned long  int size  );
void come_free_mem_of_heap_pool(void* mem);
void* come_alloc_mem_from_heap_pool(unsigned long  int size  , const char* sname, int sline, const char* class_name);
char* come_dynamic_typeof(void* mem);
void* come_calloc(unsigned long  int count  , unsigned long  int size  , const char* sname, int sline, const char* class_name);
void come_free(void* mem);
void* come_memdup(void* block, const char* sname, int sline, const char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
int come_get_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj);
void xassert(const char* msg, _Bool test);
char* __builtin_string(const char* str);
struct buffer* buffer_initialize(struct buffer* self  );
struct buffer* buffer_initialize_with_value(struct buffer* self  , const char* mem, unsigned long  int size  );
void buffer_finalize(struct buffer* self  );
struct buffer* buffer_clone(struct buffer* self  );
_Bool buffer_equals(struct buffer* left  , struct buffer* right  );
int buffer_length(struct buffer* self  );
void buffer_reset(struct buffer* self  );
void buffer_trim(struct buffer* self  , int len);
struct buffer* buffer_append(struct buffer* self  , const char* mem, unsigned long  int size  );
struct buffer* buffer_append_char(struct buffer* self  , char c);
struct buffer* buffer_append_str(struct buffer* self  , const char* mem);
struct buffer* buffer_append_format(struct buffer* self  , const char* msg, ...);
struct buffer* buffer_append_nullterminated_str(struct buffer* self  , const char* mem);
struct buffer* buffer_append_int(struct buffer* self  , int value);
struct buffer* buffer_append_long(struct buffer* self  , long value);
struct buffer* buffer_append_short(struct buffer* self  , short value);
struct buffer* buffer_alignment(struct buffer* self  );
int buffer_compare(struct buffer* left  , struct buffer* right  );
struct buffer* charp_to_buffer(const char* self);
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
char* charp_operator_add(const char* self, const char* right);
char* string_operator_add(char* self, const char* right);
char* charp_operator_mult(const char* self, int right);
char* string_operator_mult(const char* self, int right);
_Bool charpa_contained(char** self, unsigned long  int len  , const char* str);
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
unsigned int charp_get_hash_key(const char* value);
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
int string_length(const char* str);
int charp_length(const char* str);
int chara_length(const char* str);
char* charp_reverse(const char* str);
char* string_operator_load_range_element(char* str, int head, int tail);
char* charp_operator_load_range_element(char* str, int head, int tail);
char* charp_substring(const char* str, int head, int tail);
char* xsprintf(const char* msg, ...);
char* charp_delete(char* str, int head, int tail);
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item  );
struct list$1char$ph* charp_split_char(char* self, char c);
char* charp_xsprintf(char* self, const char* msg, ...);
char* int_xsprintf(int self, const char* msg, ...);
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
char* charp_to_string(const char* self);
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
int charp_index_regex(const char* self, const char* reg, int default_value, _Bool ignore_case);
int charp_rindex_regex(const char* self, const char* reg, int default_value, _Bool ignore_case);
char* string_chomp(const char* str);
int string_rindex_regex(char* self, const char* reg, int default_value, _Bool ignore_case);
int string_index_regex(char* self, const char* reg, int default_value, _Bool ignore_case);
_Bool charp_match(char* self, const char* reg, _Bool ignore_case);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item  );
struct list$1char$ph* charp_scan(const char* self, const char* reg, _Bool ignore_case);
struct list$1char$ph* charp_split(const char* self, const char* reg, _Bool ignore_case);
char* string_sub(char* self, const char* reg, const char* replace, _Bool ignore_case);
struct list$1char$ph* string_scan(char* self, const char* reg, _Bool ignore_case);
struct list$1char$ph* string_split(char* self, const char* reg, _Bool ignore_case);
_Bool string_match(char* self, const char* reg, _Bool ignore_case);
char* charp_sub(char* self, const char* reg, const char* replace, _Bool global, _Bool ignore_case);
char* charp_sub_block(char* self, const char* reg, _Bool global, _Bool ignore_case, void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
struct list$1char$ph* charp_scan_block(const char* self, const char* reg, _Bool ignore_case, void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
char* string_sub_block(char* self, const char* reg, _Bool global, _Bool ignore_case, void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
int* __builtin_wstring(const char* str);
int wchar_tp_length(const int* str  );
int wchar_ta_length(const int* str  );
int wstring_length(const int* str  );
char* string_lower_case(char* str);
char* string_upper_case(char* str);
int* wchar_tp_substring(const int* str  , int head, int tail);
int charp_index_count(const char* str, const char* search_str, int count, int default_value);
int charp_rindex(const char* str, const char* search_str, int default_value);
int charp_rindex_count(const char* str, const char* search_str, int count, int default_value);
char* charp_strip(const char* self);
char* wchar_tp_to_string(const int* wstr  );
char* wchar_ta_to_string(const int* wstr  );
int* charp_to_wstring(const char* str);
int* chara_to_wstring(char* str);
int* wchar_tp_delete(const int* str  , int head, int tail);
int wchar_tp_index(const int* str  , const int* search_str  , int default_value);
int wchar_tp_rindex(const int* str  , const int* search_str  , int default_value);
int* wchar_tp_reverse(const int* str  );
int* wchar_tp_multiply(const int* str  , int n);
int* wchar_tp_printable(const int* str  );
int wchar_tp_compare(const int* left  , int* right  );
int wstring_compare(const int* left  , const int* right  );
int* wchar_tp_operator_mult(const int* str  , int n);
int* wstring_operator_mult(const int* str  , int n);
_Bool wstring_operator_equals(const int* left  , const int* right  );
_Bool wstring_operator_not_equals(const int* left  , const int* right  );
int* wchar_tp_operator_add(const int* left  , const int* right  );
int* wstring_operator_add(const int* left  , const int* right  );
int charp_index(const char* str, const char* search_str, int default_value);
char* charp_replace(char* self, int index, char c);
char* charp_multiply(const char* str, int n);
struct list$1char$ph* charp_split_str(const char* self, const char* str);
unsigned int wchar_tp_get_hash_key(const int* value  );
_Bool wstring_equals(const int* left  , const int* right  );
_Bool wchar_t_operator_equals(int left  , int right  );
_Bool wchar_t_operator_not_equals(int left  , int right  );
unsigned int wchar_t_get_hash_key(int value  );
_Bool wchar_t_equals(int left  , int right  );
char* wchar_t_to_string(int wc  );
char* xrealpath(const char* path);
char* xdirname(const char* path);
unsigned long  int xwcslen(const int* wstr  );
int* wstring_substring(const int* str  , int head, int tail);
int string_index_count(const char* str, const char* search_str, int count, int default_value);
int string_rindex(const char* str, const char* search_str, int default_value);
int string_rindex_count(const char* str, const char* search_str, int count, int default_value);
char* string_strip(const char* self);
char* wstring_to_string(const int* wstr  );
int* int_to_wstring(int self);
int* wstring_delete(const int* str  , int head, int tail);
int wstring_index(const int* str  , const int* search_str  , int default_value);
int wstring_rindex(const int* str  , const int* search_str  , int default_value);
int* wstring_reverse(const int* str  );
int* wstring_multiply(const int* str  , int n);
int* wstring_printable(const int* str  );
unsigned int wstring_get_hash_key(const int* value  );
int string_index(const char* str, const char* search_str, int default_value);
char* string_replace(char* self, int index, char c);
char* string_multiply(const char* str, int n);
struct list$1char$ph* string_split_str(const char* self, const char* str);
int* string_to_wstring(const char* str);
char* charp_chomp(const char* str);
_Bool wchar_tp_equals(const int* left  , const int* right  );
_Bool wchar_tp_operator_equals(const int* left  , const int* right  );
_Bool wchar_tp_operator_not_equals(const int* left  , const int* right  );
char* FILE_read(struct __sFILE* f  );
int FILE_write(struct __sFILE* f  , const char* str);
int FILE_fclose(struct __sFILE* f  );
struct __sFILE* FILE_fprintf(struct __sFILE* f  , const char* msg, ...);
int charp_write(const char* self, const char* file_name, _Bool append);
char* charp_read(const char* file_name);
struct list$1char$ph* FILE_readlines(struct __sFILE* f  );
_Bool xiswalpha(int c  );
_Bool xiswblank(int c  );
_Bool xiswdigit(int c  );
_Bool xiswalnum(int c  );
_Bool xiswascii(int c  );
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_initialize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static void sType_finalize(struct sType* self  );
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1tuple2$2char$phsType$ph$ph_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void sClass_finalize(struct sClass* self);
struct sClass* sClass_initialize(struct sClass* self, const char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, _Bool uniq_, _Bool typename, struct sInfo* info  );
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key  );
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key  );
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key  , struct sClass* item  , _Bool by_pointer);
static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self);
static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key  , struct sClass* default_value  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static struct list$1int$* list$1int$_initialize(struct list$1int$* self);
static void list$1int$_finalize(struct list$1int$* self);
static void list$1char$ph_finalize(struct list$1char$ph* self);
struct sType* sType_initialize(struct sType* self, char* name  , _Bool heap, struct sInfo* info  , _Bool unsinged_);
static struct list$1sVar$ph* list$1sVar$ph_initialize(struct list$1sVar$ph* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar* self  );
static void list$1sVar$ph_finalize(struct list$1sVar$ph* self);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item  );
static struct sType* sType_clone(struct sType* self  );
static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item  );
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item);
static struct list$1int$* list$1int$$p_clone(struct list$1int$* self);
static struct list$1int$* list$1int$_add(struct list$1int$* self, int item);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static void sBlock_finalize(struct sBlock* self  );
static void sFun_finalize(struct sFun* self);
struct sFun* sFun_initialize(struct sFun* self, char* name  , struct sType* result_type  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block  , _Bool static_, struct sInfo* info  , _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute  , char* fun_attribute  , _Bool const_fun, char* text_block  , char* generics_sname  , int generics_sline, _Bool immutable_);
static void sGenericsFun_finalize(struct sGenericsFun* self);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type  , struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name  , struct sType* result_type  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block  , struct sInfo* info  , char* generics_sname  , int generics_sline, _Bool const_fun);
static void CVALUE_finalize(struct CVALUE* self);
struct CVALUE* CVALUE_initialize(struct CVALUE* self);
static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self);
static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self);
static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self);
static void sModule_finalize(struct sModule* self);
struct sModule* sModule_initialize(struct sModule* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent  );
void sVarTable_finalize(struct sVarTable* self);
struct sBlock* sBlock_initialize(struct sBlock* self);
static void sClassModule_finalize(struct sClassModule* self);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name  , char* text  , char* sname  , int sline);
static void sNodeBase_finalize(struct sNodeBase* self);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info  );
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info  );
int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo* info  );
_Bool sNodeBase_terminated(struct sNodeBase* self);
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info  );
static void sCurrentNode_finalize(struct sCurrentNode* self);
struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info  );
int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info  );
char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info  );
char* sCurrentNode_kind(struct sCurrentNode* self);
static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key  );
static struct sVar* map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char* key  );
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1  , struct sType* v2  );
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self);
static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item  );
_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info  );
static void sNothingNode_finalize(struct sNothingNode* self);
struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info  );
_Bool sNothingNode_terminated(struct sNothingNode* self);
char* sNothingNode_kind(struct sNothingNode* self);
_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info  );
// uniq global variable
struct neo_frame* neo_current_frame  =((void*)0);

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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "isascii"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return ((_c&~0x7F)==0);
    neo_current_frame = fr.prev;
}
inline int __istype(int _c  , unsigned long  int _f)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__istype"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (((isascii(_c))?(!!(_DefaultRuneLocale.__runetype[_c]&_f)):(!!__maskrune(_c,_f))));
    neo_current_frame = fr.prev;
}
inline int __isctype(int _c  , unsigned long  int _f)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__isctype"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (((_c<0||_c>=(1<<8)))?(0):(!!(_DefaultRuneLocale.__runetype[_c]&_f)));
    neo_current_frame = fr.prev;
}
inline int __wcwidth(int _c  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__wcwidth"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "isalnum"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (__istype(_c,0x00000100L|0x00000400L));
    neo_current_frame = fr.prev;
}
inline int isalpha(int _c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "isalpha"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (__istype(_c,0x00000100L));
    neo_current_frame = fr.prev;
}
inline int isblank(int _c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "isblank"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (__istype(_c,0x00020000L));
    neo_current_frame = fr.prev;
}
inline int iscntrl(int _c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "iscntrl"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (__istype(_c,0x00000200L));
    neo_current_frame = fr.prev;
}
inline int isdigit(int _c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "isdigit"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (__isctype(_c,0x00000400L));
    neo_current_frame = fr.prev;
}
inline int isgraph(int _c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "isgraph"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (__istype(_c,0x00000800L));
    neo_current_frame = fr.prev;
}
inline int islower(int _c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "islower"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (__istype(_c,0x00001000L));
    neo_current_frame = fr.prev;
}
inline int isprint(int _c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "isprint"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (__istype(_c,0x00040000L));
    neo_current_frame = fr.prev;
}
inline int ispunct(int _c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "ispunct"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (__istype(_c,0x00002000L));
    neo_current_frame = fr.prev;
}
inline int isspace(int _c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "isspace"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (__istype(_c,0x00004000L));
    neo_current_frame = fr.prev;
}
inline int isupper(int _c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "isupper"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (__istype(_c,0x00008000L));
    neo_current_frame = fr.prev;
}
inline int isxdigit(int _c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "isxdigit"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (__isctype(_c,0x00010000L));
    neo_current_frame = fr.prev;
}
inline int toascii(int _c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "toascii"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (_c&0x7F);
    neo_current_frame = fr.prev;
}
inline int tolower(int _c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tolower"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (__tolower(_c));
    neo_current_frame = fr.prev;
}
inline int toupper(int _c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "toupper"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (__toupper(_c));
    neo_current_frame = fr.prev;
}
inline int digittoint(int _c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "digittoint"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (__maskrune(_c,0x0F));
    neo_current_frame = fr.prev;
}
inline int ishexnumber(int _c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "ishexnumber"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (__istype(_c,0x00010000L));
    neo_current_frame = fr.prev;
}
inline int isideogram(int _c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "isideogram"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (__istype(_c,0x00080000L));
    neo_current_frame = fr.prev;
}
inline int isnumber(int _c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "isnumber"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (__istype(_c,0x00000400L));
    neo_current_frame = fr.prev;
}
inline int isphonogram(int _c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "isphonogram"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (__istype(_c,0x00200000L));
    neo_current_frame = fr.prev;
}
inline int isrune(int _c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "isrune"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (__istype(_c,0xFFFFFFF0L));
    neo_current_frame = fr.prev;
}
inline int isspecial(int _c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "isspecial"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (__istype(_c,0x00100000L));
    neo_current_frame = fr.prev;
}
inline int iswalnum(unsigned int _wc  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "iswalnum"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (__istype(_wc,0x00000100L|0x00000400L));
    neo_current_frame = fr.prev;
}
inline int iswalpha(unsigned int _wc  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "iswalpha"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (__istype(_wc,0x00000100L));
    neo_current_frame = fr.prev;
}
inline int iswcntrl(unsigned int _wc  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "iswcntrl"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (__istype(_wc,0x00000200L));
    neo_current_frame = fr.prev;
}
inline int iswctype(unsigned int _wc  , unsigned int _charclass  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "iswctype"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (__istype(_wc,_charclass));
    neo_current_frame = fr.prev;
}
inline int iswdigit(unsigned int _wc  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "iswdigit"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (__isctype(_wc,0x00000400L));
    neo_current_frame = fr.prev;
}
inline int iswgraph(unsigned int _wc  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "iswgraph"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (__istype(_wc,0x00000800L));
    neo_current_frame = fr.prev;
}
inline int iswlower(unsigned int _wc  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "iswlower"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (__istype(_wc,0x00001000L));
    neo_current_frame = fr.prev;
}
inline int iswprint(unsigned int _wc  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "iswprint"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (__istype(_wc,0x00040000L));
    neo_current_frame = fr.prev;
}
inline int iswpunct(unsigned int _wc  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "iswpunct"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (__istype(_wc,0x00002000L));
    neo_current_frame = fr.prev;
}
inline int iswspace(unsigned int _wc  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "iswspace"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (__istype(_wc,0x00004000L));
    neo_current_frame = fr.prev;
}
inline int iswupper(unsigned int _wc  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "iswupper"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (__istype(_wc,0x00008000L));
    neo_current_frame = fr.prev;
}
inline int iswxdigit(unsigned int _wc  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "iswxdigit"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (__isctype(_wc,0x00010000L));
    neo_current_frame = fr.prev;
}
inline unsigned int towlower(unsigned int _wc  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "towlower"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (__tolower(_wc));
    neo_current_frame = fr.prev;
}
inline unsigned int towupper(unsigned int _wc  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "towupper"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (__toupper(_wc));
    neo_current_frame = fr.prev;
}

// body function
int main(int argc, char** argv)
{
    int __result_obj__0;
    come_heap_init(0);
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "main"; neo_current_frame = &fr;
    setlocale(0,"");
    __result_obj__0 = come_main(argc,argv);
    neo_current_frame = fr.prev;
    come_heap_final();
    return __result_obj__0;
}

void stackframe()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "stackframe"; neo_current_frame = &fr;
    struct neo_frame* f  ;
    char* fun_name;
    f=neo_current_frame;
    while(f) {
        fun_name=f->fun_name;
        printf("%s\n",fun_name);
        f=f->prev;
    }
    neo_current_frame = fr.prev;
}

_Bool die(const char* msg)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "die"; neo_current_frame = &fr;
    puts(msg);
    stackframe();
    exit(4);
    neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

void come_heap_init(int come_debug)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_heap_init"; neo_current_frame = &fr;
    gComeDebugLib=come_debug;
    gAllocMem=((void*)0);
    neo_current_frame = fr.prev;
}

void come_heap_final()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_heap_final"; neo_current_frame = &fr;
    struct sMemHeader* it  ;
    int n;
    _Bool flag;
    int i;
    it=gAllocMem;
    n=0;
    while(it) {
        n++;
        flag=(_Bool)0;
        printf("#%d ",n);
        if(it->class_name) {
            printf("%p (%s): ",(char*)it+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it->class_name);
        }
        for(i=0;i<8;i++){
            if(it->fun_name[i]) {
                printf("%s, ",it->fun_name[i]);
                flag=(_Bool)1;
            }
        }
        if(flag) {
            puts("");
        }
        it=it->next;
    }
    if(n>0) {
        printf("%d memory leaks. %d alloc, %d free.\n",n,gNumAlloc,gNumFree);
    }
    neo_current_frame = fr.prev;
}

void* alloc_from_pages(unsigned long  int size  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "alloc_from_pages"; neo_current_frame = &fr;
    void* __result_obj__0;
    __result_obj__0 = calloc(1,size);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void come_free_mem_of_heap_pool(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_free_mem_of_heap_pool"; neo_current_frame = &fr;
    struct sMemHeader* it  ;
    struct sMemHeader* prev_it  ;
    struct sMemHeader* next_it  ;
    unsigned long  int size  ;
    if(mem) {
        it=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
        if(it->allocated!=177783) {
            neo_current_frame = fr.prev;
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
    neo_current_frame = fr.prev;
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size  , const char* sname, int sline, const char* class_name)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_alloc_mem_from_heap_pool"; neo_current_frame = &fr;
    unsigned long  int size2  ;
    void* result;
    struct sMemHeader* it  ;
    int n;
    struct neo_frame* f  ;
    char* fun_name;
    void* __result_obj__0;
    size2=size+sizeof(struct sMemHeader);
    size2=(size2+7&~0x7);
    result=alloc_from_pages(size2);
    it=result;
    it->allocated=177783;
    it->size=size2;
    it->free_next=((void*)0);
    n=0;
    f=neo_current_frame;
    while(f&&n<8) {
        fun_name=f->fun_name;
        it->fun_name[n]=fun_name;
        n++;
        f=f->prev;
    }
    it->next=gAllocMem;
    it->prev=((void*)0);
    it->class_name=class_name;
    if(gAllocMem) {
        gAllocMem->prev=it;
    }
    gAllocMem=it;
    gNumAlloc++;
    __result_obj__0 = (char*)result+sizeof(struct sMemHeader);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char* come_dynamic_typeof(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_dynamic_typeof"; neo_current_frame = &fr;
    struct sMemHeader* it  ;
    char* __result_obj__0;
    it=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
    if(it->allocated!=177783) {
        printf("invalid heap object(%p)(1)\n",it);
        exit(2);
    }
    __result_obj__0 = (char*)it->class_name;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void* come_calloc(unsigned long  int count  , unsigned long  int size  , const char* sname, int sline, const char* class_name)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_calloc"; neo_current_frame = &fr;
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
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void come_free(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_free"; neo_current_frame = &fr;
    unsigned long  int* ref_count  ;
    if(mem==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    ref_count=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count);
    neo_current_frame = fr.prev;
}

void* come_memdup(void* block, const char* sname, int sline, const char* class_name)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_memdup"; neo_current_frame = &fr;
    void* __result_obj__0;
    char* mem;
    unsigned long  int* size_p  ;
    unsigned long  int size  ;
    void* result;
    if(!block) {
        __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    mem=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p=(unsigned long  int*)(mem+sizeof(unsigned long  int));
    size=*size_p-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result=come_calloc(1,size,sname,sline,class_name);
    memcpy(result,block,size);
    __result_obj__0 = result;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void* come_increment_ref_count(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_increment_ref_count"; neo_current_frame = &fr;
    void* __result_obj__0;
    unsigned long  int* ref_count  ;
    if(mem==((void*)0)) {
        __result_obj__0 = mem;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ref_count=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count)++;
    __result_obj__0 = mem;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void* come_print_ref_count(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_print_ref_count"; neo_current_frame = &fr;
    void* __result_obj__0;
    unsigned long  int* ref_count  ;
    if(mem==((void*)0)) {
        __result_obj__0 = mem;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ref_count=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count);
    __result_obj__0 = mem;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int come_get_ref_count(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_get_ref_count"; neo_current_frame = &fr;
    unsigned long  int* ref_count  ;
    if(mem==((void*)0)) {
        neo_current_frame = fr.prev;
        return 0;
    }
    ref_count=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    neo_current_frame = fr.prev;
    return *ref_count;
    neo_current_frame = fr.prev;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_decrement_ref_count"; neo_current_frame = &fr;
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
    ref_count=(long*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(!no_decrement) {
        (*ref_count)--;
    }
    count=*ref_count;
    if(!no_free&&count<=0) {
        if(protocol_obj&&protocol_fun) {
            finalizer=protocol_fun;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_call_finalizer"; neo_current_frame = &fr;
    void (*finalizer)(void*);
    void (*finalizer_0)(void*);
    void (*finalizer_1)(void*);
    long* ref_count;
    long count;
    void (*finalizer_2)(void*);
    void (*finalizer_3)(void*);
    void (*finalizer_4)(void*);
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
                finalizer=protocol_fun;
                finalizer(protocol_obj);
            }
            finalizer_0=fun;
            finalizer_0(mem);
        }
        else {
            if(protocol_obj&&protocol_fun) {
                finalizer_1=protocol_fun;
                finalizer_1(protocol_obj);
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
                        finalizer_2=protocol_fun;
                        finalizer_2(protocol_obj);
                        come_free(protocol_obj);
                    }
                    if(fun) {
                        finalizer_3=fun;
                        finalizer_3(mem);
                    }
                }
                else {
                    if(protocol_obj&&protocol_fun) {
                        finalizer_4=protocol_fun;
                        finalizer_4(protocol_obj);
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xassert"; neo_current_frame = &fr;
    printf("%s...",msg);
    if(!test) {
        puts("false");
        exit(2);
    }
    puts("ok");
    neo_current_frame = fr.prev;
}

char* __builtin_string(const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__builtin_string"; neo_current_frame = &fr;
    char* __result_obj__0  ;
    int len;
    void* __right_value0 = (void*)0;
    char* result;
    if(str==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(str)+1;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len)), (void*)0, 516, "char*"));
    strncpy(result,str,len);
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

struct buffer* buffer_initialize(struct buffer* self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __dec_obj1;
    struct buffer* __result_obj__0  ;
    self->size=128;
    __dec_obj1=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), (void*)0, 2750, "char*"));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__0 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct buffer* buffer_initialize_with_value(struct buffer* self  , const char* mem, unsigned long  int size  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_initialize_with_value"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __dec_obj2;
    struct buffer* __result_obj__0  ;
    self->size=128;
    __dec_obj2=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), (void*)0, 2760, "char*"));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result_obj__0 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

void buffer_finalize(struct buffer* self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_finalize"; neo_current_frame = &fr;
    if(self&&self->buf) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct buffer* buffer_clone(struct buffer* self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_clone"; neo_current_frame = &fr;
    struct buffer* __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct buffer* result  ;
    char* __dec_obj3;
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer*)come_increment_ref_count(((void*)0));
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), (void*)0, 2780, "struct buffer*"));
    result->size=self->size;
    __dec_obj3=result->buf,
    result->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), (void*)0, 2783, "char*"));
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0, (void*)0);
    result->len=self->len;
    memcpy(result->buf,self->buf,self->len);
    __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

_Bool buffer_equals(struct buffer* left  , struct buffer* right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_equals"; neo_current_frame = &fr;
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
    __result_obj__0 = string_equals(((char*)(__right_value0=buffer_to_string(left))),((char*)(__right_value1=buffer_to_string(right))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int buffer_length(struct buffer* self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_length"; neo_current_frame = &fr;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return 0;
    }
    neo_current_frame = fr.prev;
    return self->len;
    neo_current_frame = fr.prev;
}

void buffer_reset(struct buffer* self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_reset"; neo_current_frame = &fr;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    self->buf[0]=0;
    self->len=0;
    neo_current_frame = fr.prev;
}

void buffer_trim(struct buffer* self  , int len)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_trim"; neo_current_frame = &fr;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
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
    neo_current_frame = fr.prev;
}

struct buffer* buffer_append(struct buffer* self  , const char* mem, unsigned long  int size  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append"; neo_current_frame = &fr;
    struct buffer* __result_obj__0  ;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj4;
    if(self==((void*)0)||mem==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len+size+1+1>=self->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), (void*)0, 2840, "char*"));
        memcpy(old_buf,self->buf,self->size);
        old_len=self->len;
        new_size=(self->size+size+1)*2;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), (void*)0, 2845, "char*"));
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(self->buf,old_buf,old_len);
        self->buf[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer* buffer_append_char(struct buffer* self  , char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_char"; neo_current_frame = &fr;
    struct buffer* __result_obj__0  ;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj5;
    if(self==((void*)0)) {
        __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len+1+1+1>=self->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), (void*)0, 2864, "char*"));
        memcpy(old_buf,self->buf,self->size);
        old_len=self->len;
        new_size=(self->size+10+1)*2;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), (void*)0, 2869, "char*"));
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(self->buf,old_buf,old_len);
        self->buf[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer* buffer_append_str(struct buffer* self  , const char* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_str"; neo_current_frame = &fr;
    struct buffer* __result_obj__0  ;
    int size;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj6;
    if(self==((void*)0)||mem==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    size=strlen(mem);
    if(self->len+size+1+1>=self->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), (void*)0, 2891, "char*"));
        memcpy(old_buf,self->buf,self->size);
        old_len=self->len;
        new_size=(self->size+size+1)*2;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), (void*)0, 2895, "char*"));
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(self->buf,old_buf,old_len);
        self->buf[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer* buffer_append_format(struct buffer* self  , const char* msg, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_format"; neo_current_frame = &fr;
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
    char* __dec_obj7;
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
    mem=(char*)come_increment_ref_count(__builtin_string(result));
    size=strlen(mem);
    if(self->len+size+1+1>=self->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), (void*)0, 2968, "char*"));
        memcpy(old_buf,self->buf,self->size);
        old_len=self->len;
        new_size=(self->size+size+1)*2;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), (void*)0, 2972, "char*"));
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0, (void*)0);
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
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self  , const char* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_nullterminated_str"; neo_current_frame = &fr;
    struct buffer* __result_obj__0  ;
    int size;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj8;
    if(self==((void*)0)||mem==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    size=strlen(mem)+1;
    if(self->len+size+1+1+1>=self->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), (void*)0, 2995, "char*"));
        memcpy(old_buf,self->buf,self->size);
        old_len=self->len;
        new_size=(self->size+size+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), (void*)0, 2999, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0, (void*)0);
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
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer* buffer_append_int(struct buffer* self  , int value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_int"; neo_current_frame = &fr;
    struct buffer* __result_obj__0  ;
    int* mem;
    int size;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj9;
    if(self==((void*)0)) {
        __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    mem=&value;
    size=sizeof(int);
    if(self->len+size+1+1>=self->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), (void*)0, 3022, "char*"));
        memcpy(old_buf,self->buf,self->size);
        old_len=self->len;
        new_size=(self->size+size+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), (void*)0, 3026, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(self->buf,old_buf,old_len);
        self->buf[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer* buffer_append_long(struct buffer* self  , long value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_long"; neo_current_frame = &fr;
    struct buffer* __result_obj__0  ;
    long* mem;
    int size;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj10;
    if(self==((void*)0)) {
        __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    mem=&value;
    size=sizeof(long);
    if(self->len+size+1+1>=self->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), (void*)0, 3048, "char*"));
        memcpy(old_buf,self->buf,self->size);
        old_len=self->len;
        new_size=(self->size+size+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), (void*)0, 3052, "char*"));
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
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer* buffer_append_short(struct buffer* self  , short value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_short"; neo_current_frame = &fr;
    struct buffer* __result_obj__0  ;
    short* mem;
    int size;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj11;
    if(self==((void*)0)) {
        __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    mem=&value;
    size=sizeof(short);
    if(self->len+size+1+1>=self->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), (void*)0, 3075, "char*"));
        memcpy(old_buf,self->buf,self->size);
        old_len=self->len;
        new_size=(self->size+size+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), (void*)0, 3079, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(self->buf,old_buf,old_len);
        self->buf[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer* buffer_alignment(struct buffer* self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_alignment"; neo_current_frame = &fr;
    struct buffer* __result_obj__0  ;
    int len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj12;
    int i;
    if(self==((void*)0)) {
        __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    len=self->len;
    len=(len+3)&~3;
    if(len>=self->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), (void*)0, 3102, "char*"));
        memcpy(old_buf,self->buf,self->size);
        old_len=self->len;
        new_size=(self->size+1+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), (void*)0, 3106, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0);
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
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int buffer_compare(struct buffer* left  , struct buffer* right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_compare"; neo_current_frame = &fr;
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
    return strcmp(left->buf,right->buf);
    neo_current_frame = fr.prev;
}

struct buffer* charp_to_buffer(const char* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer* result  ;
    struct buffer* __result_obj__0  ;
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), (void*)0, 3138, "struct buffer*"))));
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append_str(result,self);
    __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* buffer_to_string(struct buffer* self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    if(self==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(self->buf))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

unsigned char* buffer_head_pointer(struct buffer* self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_head_pointer"; neo_current_frame = &fr;
    unsigned char* __result_obj__0;
    if(self==((void*)0)) {
        __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __result_obj__0 = self->buf;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer* chara_to_buffer(char* self, unsigned long  int len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "chara_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer* result  ;
    struct buffer* __result_obj__0  ;
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), (void*)0, 3168, "struct buffer*"))));
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append(result,self,sizeof(char)*len);
    __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct buffer* charpa_to_buffer(char** self, unsigned long  int len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charpa_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer* result  ;
    struct buffer* __result_obj__0  ;
    int i;
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), (void*)0, 3178, "struct buffer*"))));
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    for(i=0;i<len;i++){
        buffer_append(result,self[i],strlen(self[i]));
    }
    __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct buffer* shorta_to_buffer(short* self, unsigned long  int len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "shorta_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer* result  ;
    struct buffer* __result_obj__0  ;
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), (void*)0, 3190, "struct buffer*"))));
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(short)*len);
    __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct buffer* inta_to_buffer(int* self, unsigned long  int len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "inta_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer* result  ;
    struct buffer* __result_obj__0  ;
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), (void*)0, 3200, "struct buffer*"))));
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(int)*len);
    __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct buffer* longa_to_buffer(long* self, unsigned long  int len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "longa_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer* result  ;
    struct buffer* __result_obj__0  ;
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), (void*)0, 3210, "struct buffer*"))));
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(long)*len);
    __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct buffer* floata_to_buffer(float* self, unsigned long  int len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "floata_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer* result  ;
    struct buffer* __result_obj__0  ;
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), (void*)0, 3220, "struct buffer*"))));
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(float)*len);
    __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct buffer* doublea_to_buffer(double* self, unsigned long  int len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "doublea_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer* result  ;
    struct buffer* __result_obj__0  ;
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), (void*)0, 3230, "struct buffer*"))));
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(double)*len);
    __result_obj__0 = (struct buffer*)come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* buffer_printable(struct buffer* self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_printable"; neo_current_frame = &fr;
    int len;
    void* __right_value0 = (void*)0;
    char* result  ;
    char* __result_obj__0  ;
    int n;
    int i;
    unsigned char c;
    len=self->len;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len*2+1)), (void*)0, 3241, "char*"));
    if(self==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(result);
        (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
        neo_current_frame = fr.prev;
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
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$_initialize_with_values"; neo_current_frame = &fr;
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
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$_push_back"; neo_current_frame = &fr;
    struct list$1char$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$* litem;
    struct list_item$1char$* litem_5;
    struct list_item$1char$* litem_6;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), (void*)0, 701, "struct list_item$1char$*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_5=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), (void*)0, 711, "struct list_item$1char$*"))));
        litem_5->prev=self->head;
        litem_5->next=((void*)0);
        litem_5->item=item;
        self->tail=litem_5;
        self->head->next=litem_5;
    }
    else {
        litem_6=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), (void*)0, 721, "struct list_item$1char$*"))));
        litem_6->prev=self->tail;
        litem_6->next=((void*)0);
        litem_6->item=item;
        self->tail->next=litem_6;
        self->tail=litem_6;
    }
    self->len++;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1char$$p_finalize(struct list$1char$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$$p_finalize"; neo_current_frame = &fr;
    struct list_item$1char$* it;
    struct list_item$1char$* prev_it;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$$p_finalize"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
}

struct list$1char$* chara_to_list(char* self, unsigned long  int len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "chara_to_list"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$* __result_obj__0;
    __result_obj__0 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value1=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc(1, sizeof(struct list$1char$)*(1), (void*)0, 3289, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$p_initialize_with_values"; neo_current_frame = &fr;
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
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$p_push_back"; neo_current_frame = &fr;
    struct list$1char$p* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$p* litem;
    struct list_item$1char$p* litem_7;
    struct list_item$1char$p* litem_8;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), (void*)0, 701, "struct list_item$1char$p*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_7=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), (void*)0, 711, "struct list_item$1char$p*"))));
        litem_7->prev=self->head;
        litem_7->next=((void*)0);
        litem_7->item=item;
        self->tail=litem_7;
        self->head->next=litem_7;
    }
    else {
        litem_8=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), (void*)0, 721, "struct list_item$1char$p*"))));
        litem_8->prev=self->tail;
        litem_8->next=((void*)0);
        litem_8->item=item;
        self->tail->next=litem_8;
        self->tail=litem_8;
    }
    self->len++;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1char$p$p_finalize(struct list$1char$p* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$p$p_finalize"; neo_current_frame = &fr;
    struct list_item$1char$p* it;
    struct list_item$1char$p* prev_it;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$p$p_finalize"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
}

struct list$1char$p* charpa_to_list(char** self, unsigned long  int len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charpa_to_list"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$p* __result_obj__0;
    __result_obj__0 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value1=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), (void*)0, 3294, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1short$_initialize_with_values"; neo_current_frame = &fr;
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
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1short$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1short$_push_back"; neo_current_frame = &fr;
    struct list$1short$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1short$* litem;
    struct list_item$1short$* litem_9;
    struct list_item$1short$* litem_10;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), (void*)0, 701, "struct list_item$1short$*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_9=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), (void*)0, 711, "struct list_item$1short$*"))));
        litem_9->prev=self->head;
        litem_9->next=((void*)0);
        litem_9->item=item;
        self->tail=litem_9;
        self->head->next=litem_9;
    }
    else {
        litem_10=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), (void*)0, 721, "struct list_item$1short$*"))));
        litem_10->prev=self->tail;
        litem_10->next=((void*)0);
        litem_10->item=item;
        self->tail->next=litem_10;
        self->tail=litem_10;
    }
    self->len++;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1short$$p_finalize(struct list$1short$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1short$$p_finalize"; neo_current_frame = &fr;
    struct list_item$1short$* it;
    struct list_item$1short$* prev_it;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1short$$p_finalize"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
}

struct list$1short$* shorta_to_list(short* self, unsigned long  int len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "shorta_to_list"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1short$* __result_obj__0;
    __result_obj__0 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value1=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc(1, sizeof(struct list$1short$)*(1), (void*)0, 3299, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1short$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize_with_values"; neo_current_frame = &fr;
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
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_push_back"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_11;
    struct list_item$1int$* litem_12;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 701, "struct list_item$1int$*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_11=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 711, "struct list_item$1int$*"))));
        litem_11->prev=self->head;
        litem_11->next=((void*)0);
        litem_11->item=item;
        self->tail=litem_11;
        self->head->next=litem_11;
    }
    else {
        litem_12=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 721, "struct list_item$1int$*"))));
        litem_12->prev=self->tail;
        litem_12->next=((void*)0);
        litem_12->item=item;
        self->tail->next=litem_12;
        self->tail=litem_12;
    }
    self->len++;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1int$$p_finalize(struct list$1int$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$$p_finalize"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1int$$p_finalize"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
}

struct list$1int$* inta_to_list(int* self, unsigned long  int len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "inta_to_list"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1int$* __result_obj__0;
    __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value1=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), (void*)0, 3304, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1long$_initialize_with_values"; neo_current_frame = &fr;
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
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1long$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1long$_push_back"; neo_current_frame = &fr;
    struct list$1long$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1long$* litem;
    struct list_item$1long$* litem_13;
    struct list_item$1long$* litem_14;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), (void*)0, 701, "struct list_item$1long$*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_13=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), (void*)0, 711, "struct list_item$1long$*"))));
        litem_13->prev=self->head;
        litem_13->next=((void*)0);
        litem_13->item=item;
        self->tail=litem_13;
        self->head->next=litem_13;
    }
    else {
        litem_14=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), (void*)0, 721, "struct list_item$1long$*"))));
        litem_14->prev=self->tail;
        litem_14->next=((void*)0);
        litem_14->item=item;
        self->tail->next=litem_14;
        self->tail=litem_14;
    }
    self->len++;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1long$$p_finalize(struct list$1long$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1long$$p_finalize"; neo_current_frame = &fr;
    struct list_item$1long$* it;
    struct list_item$1long$* prev_it;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1long$$p_finalize"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
}

struct list$1long$* longa_to_list(long* self, unsigned long  int len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "longa_to_list"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1long$* __result_obj__0;
    __result_obj__0 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value1=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc(1, sizeof(struct list$1long$)*(1), (void*)0, 3309, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1long$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1float$_initialize_with_values"; neo_current_frame = &fr;
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
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1float$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1float$_push_back"; neo_current_frame = &fr;
    struct list$1float$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1float$* litem;
    struct list_item$1float$* litem_15;
    struct list_item$1float$* litem_16;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), (void*)0, 701, "struct list_item$1float$*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_15=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), (void*)0, 711, "struct list_item$1float$*"))));
        litem_15->prev=self->head;
        litem_15->next=((void*)0);
        litem_15->item=item;
        self->tail=litem_15;
        self->head->next=litem_15;
    }
    else {
        litem_16=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), (void*)0, 721, "struct list_item$1float$*"))));
        litem_16->prev=self->tail;
        litem_16->next=((void*)0);
        litem_16->item=item;
        self->tail->next=litem_16;
        self->tail=litem_16;
    }
    self->len++;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1float$$p_finalize(struct list$1float$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1float$$p_finalize"; neo_current_frame = &fr;
    struct list_item$1float$* it;
    struct list_item$1float$* prev_it;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1float$$p_finalize"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
}

struct list$1float$* floata_to_list(float* self, unsigned long  int len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "floata_to_list"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1float$* __result_obj__0;
    __result_obj__0 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value1=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc(1, sizeof(struct list$1float$)*(1), (void*)0, 3314, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1float$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1double$_initialize_with_values"; neo_current_frame = &fr;
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
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1double$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1double$_push_back"; neo_current_frame = &fr;
    struct list$1double$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1double$* litem;
    struct list_item$1double$* litem_17;
    struct list_item$1double$* litem_18;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), (void*)0, 701, "struct list_item$1double$*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_17=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), (void*)0, 711, "struct list_item$1double$*"))));
        litem_17->prev=self->head;
        litem_17->next=((void*)0);
        litem_17->item=item;
        self->tail=litem_17;
        self->head->next=litem_17;
    }
    else {
        litem_18=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), (void*)0, 721, "struct list_item$1double$*"))));
        litem_18->prev=self->tail;
        litem_18->next=((void*)0);
        litem_18->item=item;
        self->tail->next=litem_18;
        self->tail=litem_18;
    }
    self->len++;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1double$$p_finalize(struct list$1double$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1double$$p_finalize"; neo_current_frame = &fr;
    struct list_item$1double$* it;
    struct list_item$1double$* prev_it;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1double$$p_finalize"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
}

struct list$1double$* doublea_to_list(double* self, unsigned long  int len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "doublea_to_list"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1double$* __result_obj__0;
    __result_obj__0 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value1=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc(1, sizeof(struct list$1double$)*(1), (void*)0, 3319, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1double$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

_Bool _Bool_equals(_Bool self, _Bool right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool char_equals(char self, char right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool short_equals(short self, short right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool int_equals(int self, int right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool long_equals(long self, long right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool size_t_equals(unsigned long  int self  , unsigned long  int right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool float_equals(float self, float right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "float_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool double_equals(double self, double right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "double_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool _Bool_operator_equals(_Bool self, _Bool right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_operator_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool char_operator_equals(char self, char right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_operator_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool short_operator_equals(short self, short right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_operator_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool int_operator_equals(int self, int right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_operator_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool long_operator_equals(long self, long right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_operator_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool _Bool_operator_not_equals(_Bool self, _Bool right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_operator_not_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool char_operator_not_equals(char self, char right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_operator_not_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool short_operator_not_equals(short self, short right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_operator_not_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool int_operator_not_equals(int self, int right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_operator_not_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool long_operator_not_equals(long self, long right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_operator_not_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool charp_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_equals"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_equals"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool _Boolp_equals(_Bool* self, _Bool* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Boolp_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return *self==*right;
    neo_current_frame = fr.prev;
}

_Bool string_operator_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_equals"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_equals"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "chara_operator_equals"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_operator_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool voidp_operator_not_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_operator_not_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return !charp_operator_equals(self,right);
    neo_current_frame = fr.prev;
}

_Bool string_operator_not_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_not_equals"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_not_equals"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "chara_operator_not_equals"; neo_current_frame = &fr;
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

char* charp_operator_add(const char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_add"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    int len;
    char* result;
    if(self==((void*)0)||right==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(self)+strlen(right);
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), (void*)0, 3554, "char*"));
    strncpy(result,self,len+1);
    strncat(result,right,len+1);
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* string_operator_add(char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_add"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    int len;
    char* result;
    if(self==((void*)0)||right==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(self)+strlen(right);
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), (void*)0, 3569, "char*"));
    strncpy(result,self,len+1);
    strncat(result,right,len+1);
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* charp_operator_mult(const char* self, int right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_mult"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer* buf  ;
    int i;
    if(self==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), (void*)0, 3582, "struct buffer*"))));
    for(i=0;i<right;i++){
        buffer_append_str(buf,self);
    }
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=buffer_to_string(buf))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* string_operator_mult(const char* self, int right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_mult"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer* buf  ;
    int i;
    if(self==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), (void*)0, 3596, "struct buffer*"))));
    for(i=0;i<right;i++){
        buffer_append_str(buf,self);
    }
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=buffer_to_string(buf))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool charpa_contained(char** self, unsigned long  int len  , const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charpa_contained"; neo_current_frame = &fr;
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

unsigned long  int shorta_length(short* self, unsigned long  int len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "shorta_length"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  int inta_length(int* self, unsigned long  int len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "inta_length"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  int longa_length(long* self, unsigned long  int len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "longa_length"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  int floata_length(float* self, unsigned long  int len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "floata_length"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  int doublea_length(double* self, unsigned long  int len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "doublea_length"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned int _Bool_get_hash_key(_Bool value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_get_hash_key"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (int_get_hash_key(((int)value)));
    neo_current_frame = fr.prev;
}

unsigned int char_get_hash_key(char value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_get_hash_key"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int short_get_hash_key(short int value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_get_hash_key"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int int_get_hash_key(int value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_get_hash_key"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int long_get_hash_key(long value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_get_hash_key"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int size_t_get_hash_key(unsigned long  int value  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_get_hash_key"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int float_get_hash_key(float value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "float_get_hash_key"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (unsigned int)value;
    neo_current_frame = fr.prev;
}

unsigned int double_get_hash_key(double value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "double_get_hash_key"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (unsigned int)value;
    neo_current_frame = fr.prev;
}

unsigned int charp_get_hash_key(const char* value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_get_hash_key"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_get_hash_key"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_get_hash_key"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (int_get_hash_key(((int)value)));
    neo_current_frame = fr.prev;
}

_Bool _Bool_clone(_Bool self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_clone"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

char char_clone(char self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_clone"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

short int short_clone(short self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_clone"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

int int_clone(int self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_clone"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

long  int long_clone(long self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_clone"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

unsigned long  int size_t_clone(unsigned long  int self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_clone"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

double double_clone(double self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "double_clone"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

float float_clone(float self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "float_clone"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

_Bool xisalpha(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisalpha"; neo_current_frame = &fr;
    _Bool result;
    result=(c>=97&&c<=122)||(c>=65&&c<=90);
    neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool xisblank(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisblank"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return c==32||c==9;
    neo_current_frame = fr.prev;
}

_Bool xisdigit(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisdigit"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (c>=48&&c<=57);
    neo_current_frame = fr.prev;
}

_Bool xisspace(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisspace"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return c==32||c==9||c==10||c==13||c==28||c==11;
    neo_current_frame = fr.prev;
}

_Bool xisalnum(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisalnum"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return xisalpha(c)||xisdigit(c);
    neo_current_frame = fr.prev;
}

_Bool xisascii(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisascii"; neo_current_frame = &fr;
    _Bool result;
    result=(c>=32&&c<=126);
    neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool xispunct(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xispunct"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (c>=33&&c<=47)||(c>=58&&c<=64)||(c>=91&&c<=96)||(c>=123&&c<=126);
    neo_current_frame = fr.prev;
}

int string_length(const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_length"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_length"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "chara_length"; neo_current_frame = &fr;
    if(str==((void*)0)) {
        neo_current_frame = fr.prev;
        return 0;
    }
    neo_current_frame = fr.prev;
    return strlen(str);
    neo_current_frame = fr.prev;
}

char* charp_reverse(const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_reverse"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    int len;
    char* result;
    int i;
    if(str==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(str);
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), (void*)0, 3850, "char*"));
    for(i=0;i<len;i++){
        result[i]=str[len-i-1];
    }
    result[len]=0;
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* string_operator_load_range_element(char* str, int head, int tail)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_load_range_element"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    int len;
    void* __right_value1 = (void*)0;
    char* result  ;
    if(str==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
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
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value1=charp_reverse(((char*)(__right_value0=charp_substring(str,tail,head)))))));
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
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(tail-head+1<1) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), (void*)0, 3896, "char*"));
    memcpy(result,str+head,tail-head);
    result[tail-head]=0;
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* charp_operator_load_range_element(char* str, int head, int tail)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_load_range_element"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    int len;
    void* __right_value1 = (void*)0;
    char* result  ;
    if(str==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
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
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value1=charp_reverse(((char*)(__right_value0=charp_substring(str,tail,head)))))));
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
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(tail-head+1<1) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), (void*)0, 3939, "char*"));
    memcpy(result,str+head,tail-head);
    result[tail-head]=0;
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* charp_substring(const char* str, int head, int tail)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_substring"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    int len;
    void* __right_value1 = (void*)0;
    char* result  ;
    if(str==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
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
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value1=charp_reverse(((char*)(__right_value0=charp_substring(str,tail,head)))))));
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
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(tail-head+1<1) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), (void*)0, 3982, "char*"));
    memcpy(result,str+head,tail-head);
    result[tail-head]=0;
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* xsprintf(const char* msg, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xsprintf"; neo_current_frame = &fr;
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
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __builtin_va_start(args,msg);
    len=vasprintf(&result,msg,args);
    __builtin_va_end(args);
    if(len<0) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result2=(char*)come_increment_ref_count(__builtin_string(result));
    free(result);
    __result_obj__0 = (char*)come_increment_ref_count(result2);
    (result2 = come_decrement_ref_count(result2, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* charp_delete(char* str, int head, int tail)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_delete"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    int len;
    char* result;
    if(str==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(str);
    if(head>=len) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(str))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(strcmp(str,"")==0) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(str))));
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
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(str))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(tail>=len) {
        tail=len;
    }
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len-(tail-head)+1)), (void*)0, 4048, "char*"));
    memcpy(result,str,head);
    memcpy(result+head,str+tail,len-tail);
    result[len-(tail-head)]=0;
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph$p_finalize"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_push_back"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char* __dec_obj13  ;
    struct list_item$1char$ph* litem_19;
    char* __dec_obj14  ;
    struct list_item$1char$ph* litem_20;
    char* __dec_obj15  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 701, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj13=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_19=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 711, "struct list_item$1char$ph*"))));
        litem_19->prev=self->head;
        litem_19->next=((void*)0);
        __dec_obj14=litem_19->item,
        litem_19->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_19;
        self->head->next=litem_19;
    }
    else {
        litem_20=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 721, "struct list_item$1char$ph*"))));
        litem_20->prev=self->tail;
        litem_20->next=((void*)0);
        __dec_obj15=litem_20->item,
        litem_20->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_20;
        self->tail=litem_20;
    }
    self->len++;
    __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct list$1char$ph* charp_split_char(char* self, char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_split_char"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    struct list$1char$ph* result;
    struct buffer* str  ;
    int i;
    if(self==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 4061, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 4064, "struct list$1char$ph*"))));
    str=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), (void*)0, 4066, "struct buffer*"))));
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
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* charp_xsprintf(char* self, const char* msg, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_xsprintf"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf(msg,self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* int_xsprintf(int self, const char* msg, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_xsprintf"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf(msg,self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* charp_printable(char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_printable"; neo_current_frame = &fr;
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
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=charp_length(str);
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len*2+1)), (void*)0, 4100, "char*"));
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
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* chara_printable(char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "chara_printable"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=charp_printable(str))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* charp_sub_plain(char* self, char* str, char* replace)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_sub_plain"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer* result  ;
    char* p;
    char* p2;
    if(self==((void*)0)||str==((void*)0)||replace==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(self))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), (void*)0, 4133, "struct buffer*"))));
    p=self;
    while((_Bool)1) {
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
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* xbasename(char* path)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xbasename"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    char* p;
    if(path==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
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
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(path))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    else {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(p+1))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* xnoextname(char* path)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xnoextname"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    char* path2  ;
    char* p;
    if(path==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
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
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    else {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=charp_substring(path2,0,p-path2))));
        (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
    (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* xextname(char* path)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xextname"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    char* p;
    if(path==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
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
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(path))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    else {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(p+1))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* _Bool_to_string(_Bool self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    if(self) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("true"))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    else {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("false"))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    neo_current_frame = fr.prev;
}

char* char_to_string(char self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("%c",self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* short_to_string(short self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("%d",self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* int_to_string(int self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("%d",self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* long_to_string(long self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("%ld",self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* size_t_to_string(unsigned long  int self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("%ld",self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* float_to_string(float self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "float_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("%f",self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* double_to_string(double self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "double_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("%lf",self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* string_to_string(char* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    if(self==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* charp_to_string(const char* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    if(self==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int _Bool_compare(_Bool left, _Bool right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_compare"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_compare"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_compare"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_compare"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_compare"; neo_current_frame = &fr;
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

int size_t_compare(unsigned long  int left  , unsigned long  int right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_compare"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "float_compare"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "double_compare"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_compare"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_compare"; neo_current_frame = &fr;
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

char* charp_puts(char* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_puts"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    if(self==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    puts(self);
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* charp_print(char* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_print"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    if(self==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    printf("%s",self);
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* charp_printf(char* self, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_printf"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    char* msg2;
    __builtin_va_list args  ;
    memset(&msg2, 0, sizeof(msg2));
    if(self==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
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
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int int_printf(int self, char* msg)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_printf"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_printf"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_times"; neo_current_frame = &fr;
    int i;
    for(i=0;i<self;i++){
        block(parent,i);
    }
    neo_current_frame = fr.prev;
}

static void match_context_finalize(struct anonymous_typeX16* self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "match_context_finalize"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
}

int re_matchp_ex(struct re_program* pattern  , const char* text, int* matchlength, struct re_capture* captures  , int max_captures, _Bool ignore_case)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "re_matchp_ex"; neo_current_frame = &fr;
    struct re_program* program  ;
    struct regex_t* start  ;
    struct anonymous_typeX16 ctx  ;
    int __result_obj__0;
    memset(&ctx, 0, sizeof(ctx));
    *matchlength=0;
    if(pattern==0) {
        neo_current_frame = fr.prev;
        return -1;
    }
    program=(struct re_program*)pattern;
    start=program->start;
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
            const char* end_21=matchpattern(start,cursor,&ctx);
            if(end_21!=0) {
                if(*cursor==0&&cursor!=text) {
                    __result_obj__0 = -1;
                    come_call_finalizer(match_context_finalize, (&ctx), (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                *matchlength=(int)(end_21-cursor);
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

int re_matchp(struct re_program* pattern  , const char* text, int* matchlength, struct re_capture* captures  , int max_captures)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "re_matchp"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return re_matchp_ex(pattern,text,matchlength,captures,max_captures,(_Bool)0);
    neo_current_frame = fr.prev;
}

int re_match(const char* pattern, const char* text, int* matchlength)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "re_match"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return re_matchp(re_compile(pattern),text,matchlength,(struct re_capture*)0,0);
    neo_current_frame = fr.prev;
}

static void regex_program_t_finalize(struct re_program* self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "regex_program_t_finalize"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
}

static void compiler_state_finalize(struct anonymous_typeX15* self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "compiler_state_finalize"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
}

struct re_program* re_compile(const char* pattern)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "re_compile"; neo_current_frame = &fr;
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
        __result_obj__0 = ((void*)0);
        come_call_finalizer(regex_program_t_finalize, (&program), (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer(compiler_state_finalize, (&state), (void*)0, (void*)0, 1, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    program.start=head;
    program.group_count=state.group_count;
    __result_obj__0 = (struct re_program*)&program;
    come_call_finalizer(regex_program_t_finalize, (&program), (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer(compiler_state_finalize, (&state), (void*)0, (void*)0, 1, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void re_print(struct re_program* pattern  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "re_print"; neo_current_frame = &fr;
    struct re_program* program  ;
    if(pattern==0) {
        neo_current_frame = fr.prev;
        return;
    }
    program=(struct re_program*)pattern;
    if(program->start==0) {
        neo_current_frame = fr.prev;
        return;
    }
    re_print_internal(program->start,0);
    neo_current_frame = fr.prev;
}

void clear_captures(struct anonymous_typeX16* ctx  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "clear_captures"; neo_current_frame = &fr;
    int i;
    if((ctx->captures==0)||(ctx->capture_capacity<=0)) {
        neo_current_frame = fr.prev;
        return;
    }
    for(i=0;i<ctx->capture_capacity;++i){
        ctx->captures[i].start=-1;
        ctx->captures[i].length=0;
    }
    neo_current_frame = fr.prev;
}

void snapshot_captures(const struct anonymous_typeX16* ctx  , struct re_capture* buffer_  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "snapshot_captures"; neo_current_frame = &fr;
    if((ctx->captures==0)||(ctx->capture_capacity<=0)) {
        neo_current_frame = fr.prev;
        return;
    }
    memcpy(buffer_,ctx->captures,sizeof(struct re_capture)*ctx->capture_capacity);
    neo_current_frame = fr.prev;
}

void restore_captures(struct anonymous_typeX16* ctx  , const struct re_capture* buffer_  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "restore_captures"; neo_current_frame = &fr;
    if((ctx->captures==0)||(ctx->capture_capacity<=0)) {
        neo_current_frame = fr.prev;
        return;
    }
    memcpy(ctx->captures,buffer_,sizeof(struct re_capture)*ctx->capture_capacity);
    neo_current_frame = fr.prev;
}

struct regex_t* new_token(struct anonymous_typeX15* st  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "new_token"; neo_current_frame = &fr;
    struct regex_t* __result_obj__0  ;
    struct regex_t* token  ;
    if(st->pool_size>=st->pool_capacity) {
        __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    token=&st->pool[st->pool_size++];
    token->type=(0);
    token->u.ccl=((void*)0);
    token->next=((void*)0);
    token->u.group.first=((void*)0);
    token->u.group.last=((void*)0);
    token->u.group.id=0;
    __result_obj__0 = token;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int append_token(struct regex_t** head  , struct regex_t** tail  , struct regex_t* token  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "append_token"; neo_current_frame = &fr;
    if(token==0) {
        neo_current_frame = fr.prev;
        return 0;
    }
    if(*head==0) {
        *head=token;
    }
    else {
        (*tail)->next=token;
    }
    *tail=token;
    neo_current_frame = fr.prev;
    return 1;
    neo_current_frame = fr.prev;
}

struct regex_t* compile_sequence(struct anonymous_typeX15* st  , const char* pattern, int* pos, int in_group)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "compile_sequence"; neo_current_frame = &fr;
    struct regex_t* head  ;
    struct regex_t* tail  ;
    char c;
    struct regex_t* token  ;
    struct regex_t* __result_obj__0  ;
    int buf_begin;
    int negated;
    struct regex_t* inner  ;
    struct regex_t* tail_22  ;
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
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
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
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
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
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
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
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
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
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
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
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
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
                        __result_obj__0 = ((void*)0);
                        neo_current_frame = fr.prev;
                        return __result_obj__0;
                    }
                }
                if(pattern[*pos]==0) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                while((pattern[*pos]!=0)&&(pattern[*pos]!=93)) {
                    if(pattern[*pos]==92) {
                        if(st->ccl_idx>=(st->ccl_capacity-1)) {
                            __result_obj__0 = ((void*)0);
                            neo_current_frame = fr.prev;
                            return __result_obj__0;
                        }
                        st->ccl_buf[st->ccl_idx++]=92;
                        (*pos)++;
                        if(pattern[*pos]==0) {
                            __result_obj__0 = ((void*)0);
                            neo_current_frame = fr.prev;
                            return __result_obj__0;
                        }
                    }
                    if(st->ccl_idx>=st->ccl_capacity) {
                        __result_obj__0 = ((void*)0);
                        neo_current_frame = fr.prev;
                        return __result_obj__0;
                    }
                    st->ccl_buf[st->ccl_idx++]=(unsigned char)pattern[*pos];
                    (*pos)++;
                }
                if(pattern[*pos]!=93) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                if(st->ccl_idx>=st->ccl_capacity) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                st->ccl_buf[st->ccl_idx++]=0;
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
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
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                if(pattern[*pos]!=41) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                tail_22=inner;
                while((tail_22!=0)&&(tail_22->type!=(0))) {
                    tail_22=tail_22->next;
                }
                if(tail_22==0) {
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
                token->type=(16);
                token->u.group.first=inner;
                token->u.group.last=tail_22;
                token->u.group.id=++st->group_count;
                tail_22->type=(17);
                tail_22->u.group.first=token;
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
                token->type=(7);
                token->u.ch=(unsigned char)c;
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
                token->type=(7);
                token->u.ch=(unsigned char)c;
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
    sentinel->type=(0);
    sentinel->next=((void*)0);
    if(head==0) {
        head=sentinel;
    }
    else {
        tail->next=sentinel;
    }
    __result_obj__0 = head;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

const char* matchpattern(struct regex_t* pattern  , const char* text, struct anonymous_typeX16* ctx  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "matchpattern"; neo_current_frame = &fr;
    const char* __result_obj__0;
    struct regex_t* current  ;
    struct regex_t* next  ;
    struct regex_t* owner  ;
    int idx;
    int start;
    if(pattern==0) {
        __result_obj__0 = text;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(pattern->type==(0)) {
        __result_obj__0 = text;
        neo_current_frame = fr.prev;
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
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            restore_captures(ctx,snapshot);
            __result_obj__0 = ((void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else if((next!=0)&&(next->type==(5))) {
            const char* result_23=matchstar(current,next->next,cursor,ctx);
            if(result_23!=0) {
                __result_obj__0 = result_23;
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            restore_captures(ctx,snapshot);
            __result_obj__0 = ((void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else if((next!=0)&&(next->type==(6))) {
            const char* result_24=matchplus(current,next->next,cursor,ctx);
            if(result_24!=0) {
                __result_obj__0 = result_24;
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            restore_captures(ctx,snapshot);
            __result_obj__0 = ((void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else if(current->type==(16)) {
            const char* result_25=matchgroup(current,next,cursor,ctx);
            if(result_25!=0) {
                __result_obj__0 = result_25;
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            restore_captures(ctx,snapshot);
            __result_obj__0 = ((void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else if(current->type==(3)) {
            if(*cursor!=0) {
                restore_captures(ctx,snapshot);
                __result_obj__0 = ((void*)0);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            current=current->next;
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
            current=current->next;
        }
    }
    __result_obj__0 = cursor;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

const char* matchgroup(struct regex_t* token  , struct regex_t* rest  , const char* text, struct anonymous_typeX16* ctx  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "matchgroup"; neo_current_frame = &fr;
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
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

const char* matchstar(struct regex_t* token  , struct regex_t* rest  , const char* text, struct anonymous_typeX16* ctx  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "matchstar"; neo_current_frame = &fr;
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

const char* matchplus(struct regex_t* token  , struct regex_t* rest  , const char* text, struct anonymous_typeX16* ctx  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "matchplus"; neo_current_frame = &fr;
    const char* __result_obj__0;
    struct re_capture snapshot_entry[64]  ;
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

const char* matchquestion(struct regex_t* token  , struct regex_t* rest  , const char* text, struct anonymous_typeX16* ctx  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "matchquestion"; neo_current_frame = &fr;
    const char* __result_obj__0;
    struct re_capture snapshot_entry[64]  ;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "re_fold_char"; neo_current_frame = &fr;
    if(ignore_case&&c>=65&&c<=90) {
        neo_current_frame = fr.prev;
        return (unsigned char)(c-65+97);
    }
    neo_current_frame = fr.prev;
    return c;
    neo_current_frame = fr.prev;
}

const char* matchtoken(struct regex_t* token  , const char* text, struct anonymous_typeX16* ctx  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "matchtoken"; neo_current_frame = &fr;
    const char* __result_obj__0;
    switch (    token->type) {
        case (1):
        __result_obj__0 = (((*text!=0&&matchdot(*text)))?(text+1):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case (7):
        __result_obj__0 = (((*text!=0&&re_fold_char(token->u.ch,ctx->ignore_case)==re_fold_char((unsigned char)*text,ctx->ignore_case)))?(text+1):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case (8):
        __result_obj__0 = (((*text!=0&&matchcharclass(*text,(const char*)token->u.ccl,ctx->ignore_case)))?(text+1):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case (9):
        __result_obj__0 = (((*text!=0&&!matchcharclass(*text,(const char*)token->u.ccl,ctx->ignore_case)))?(text+1):(0));
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
        __result_obj__0 = matchgroup(token,(struct regex_t*)0,text,ctx);
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case (2):
        __result_obj__0 = (((text==ctx->base))?(text):(0));
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "matchdigit"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return xisdigit((unsigned char)c);
    neo_current_frame = fr.prev;
}

int matchalpha(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "matchalpha"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return xisalpha((unsigned char)c);
    neo_current_frame = fr.prev;
}

int matchwhitespace(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "matchwhitespace"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return xisspace((unsigned char)c);
    neo_current_frame = fr.prev;
}

int matchalphanum(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "matchalphanum"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return ((c==95)||matchalpha(c)||matchdigit(c));
    neo_current_frame = fr.prev;
}

int matchrange(char c, const char* str, _Bool ignore_case)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "matchrange"; neo_current_frame = &fr;
    unsigned char needle;
    unsigned char start;
    unsigned char end;
    needle=(unsigned char)c;
    start=(unsigned char)str[0];
    end=(unsigned char)str[2];
    if(ignore_case) {
        needle=re_fold_char(needle,(_Bool)1);
        start=re_fold_char(start,(_Bool)1);
        end=re_fold_char(end,(_Bool)1);
    }
    neo_current_frame = fr.prev;
    return ((needle!=45)&&(str[0]!=0)&&(str[0]!=45)&&(str[1]==45)&&(str[2]!=0)&&((needle>=start)&&(needle<=end)));
    neo_current_frame = fr.prev;
}

int matchdot(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "matchdot"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return c!=10&&c!=13;
    neo_current_frame = fr.prev;
}

int ismetachar(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "ismetachar"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return ((c==115)||(c==83)||(c==119)||(c==87)||(c==100)||(c==68));
    neo_current_frame = fr.prev;
}

int matchmetachar(char c, const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "matchmetachar"; neo_current_frame = &fr;
    switch (    str[0]) {
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
        return (c==str[0]);
    }
    neo_current_frame = fr.prev;
}

int matchcharclass(char c, const char* str, _Bool ignore_case)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "matchcharclass"; neo_current_frame = &fr;
    unsigned char needle;
    needle=re_fold_char((unsigned char)c,ignore_case);
    do {
        if(matchrange((char)needle,str,ignore_case)) {
            neo_current_frame = fr.prev;
            return 1;
        }
        else if(str[0]==92) {
            str+=1;
            if(matchmetachar((char)needle,str)) {
                neo_current_frame = fr.prev;
                return 1;
            }
            else if((needle==re_fold_char((unsigned char)str[0],ignore_case))&&!ismetachar((char)needle)) {
                neo_current_frame = fr.prev;
                return 1;
            }
        }
        else if(needle==re_fold_char((unsigned char)str[0],ignore_case)) {
            if(needle==45) {
                neo_current_frame = fr.prev;
                return ((str[-1]==0)||(str[1]==0));
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

void re_print_internal(struct regex_t* pattern  , int depth)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "re_print_internal"; neo_current_frame = &fr;
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
    neo_current_frame = fr.prev;
}

int re_get_group_count(struct re_program* pattern  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "re_get_group_count"; neo_current_frame = &fr;
    struct re_program* program  ;
    if(pattern==0) {
        neo_current_frame = fr.prev;
        return 0;
    }
    program=(struct re_program*)pattern;
    neo_current_frame = fr.prev;
    return program->group_count;
    neo_current_frame = fr.prev;
}

int charp_index_regex(const char* self, const char* reg, int default_value, _Bool ignore_case)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_index_regex"; neo_current_frame = &fr;
    struct re_program* re  ;
    int result;
    int offset;
    int n;
    int result_26;
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
    result_26=default_value;
    while((_Bool)1) {
        matchlength=0;
        max_captures=8;
        struct re_capture captures[max_captures]  ;
        memset(&captures, 0, sizeof(captures));
        regex_result=re_matchp_ex(re,self,&matchlength,captures,max_captures,ignore_case);
        if(regex_result>=0) {
            result_26=regex_result;
            break;
        }
        {
            break;
        }
    }
    neo_current_frame = fr.prev;
    return result_26;
    neo_current_frame = fr.prev;
}

int charp_rindex_regex(const char* self, const char* reg, int default_value, _Bool ignore_case)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_rindex_regex"; neo_current_frame = &fr;
    struct re_program* re  ;
    int result;
    int offset;
    int n;
    void* __right_value0 = (void*)0;
    char* self2  ;
    int result_27;
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
    self2=(char*)come_increment_ref_count(charp_reverse(self));
    result_27=default_value;
    while((_Bool)1) {
        matchlength=0;
        max_captures=8;
        struct re_capture captures[max_captures]  ;
        memset(&captures, 0, sizeof(captures));
        regex_result=re_matchp_ex(re,self2,&matchlength,captures,max_captures,ignore_case);
        if(regex_result>=0) {
            result_27=strlen(self)-matchlength;
            break;
        }
        {
            break;
        }
    }
    __result_obj__0 = result_27;
    (self2 = come_decrement_ref_count(self2, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char* string_chomp(const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_chomp"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    char* result  ;
    if(str==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(char*)come_increment_ref_count(__builtin_string(str));
    if(result[string_length(result)-1]==10) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=charp_substring(result,0,-2))));
        (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int string_rindex_regex(char* self, const char* reg, int default_value, _Bool ignore_case)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_rindex_regex"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return charp_rindex_regex(self,reg,default_value,ignore_case);
    neo_current_frame = fr.prev;
}

int string_index_regex(char* self, const char* reg, int default_value, _Bool ignore_case)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_index_regex"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return charp_index_regex(self,reg,default_value,ignore_case);
    neo_current_frame = fr.prev;
}

_Bool charp_match(char* self, const char* reg, _Bool ignore_case)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_match"; neo_current_frame = &fr;
    struct re_program* re  ;
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
    struct re_capture captures[max_captures]  ;
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

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_add"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char* __dec_obj16  ;
    struct list_item$1char$ph* litem_28;
    char* __dec_obj17  ;
    struct list_item$1char$ph* litem_29;
    char* __dec_obj18  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 616, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj16=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_28=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 626, "struct list_item$1char$ph*"))));
        litem_28->prev=self->head;
        litem_28->next=((void*)0);
        __dec_obj17=litem_28->item,
        litem_28->item=(char*)come_increment_ref_count(item);
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_28;
        self->head->next=litem_28;
    }
    else {
        litem_29=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 636, "struct list_item$1char$ph*"))));
        litem_29->prev=self->tail;
        litem_29->next=((void*)0);
        __dec_obj18=litem_29->item,
        litem_29->item=(char*)come_increment_ref_count(item);
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_29;
        self->tail=litem_29;
    }
    self->len++;
    __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct list$1char$ph* charp_scan(const char* self, const char* reg, _Bool ignore_case)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_scan"; neo_current_frame = &fr;
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
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 5953, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 5955, "struct list$1char$ph*"))));
    re=re_compile(reg);
    if(re==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 5960, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct list$1char$ph* charp_split(const char* self, const char* reg, _Bool ignore_case)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_split"; neo_current_frame = &fr;
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
    char* str_30  ;
    if(self==((void*)0)||reg==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 6016, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 6019, "struct list$1char$ph*"))));
    re=re_compile(reg);
    if(re==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 6024, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        str_30=(char*)come_increment_ref_count(charp_substring(self,offset,-1));
        list$1char$ph_push_back(result,(char*)come_increment_ref_count(str_30));
        (str_30 = come_decrement_ref_count(str_30, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* string_sub(char* self, const char* reg, const char* replace, _Bool ignore_case)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_sub"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=charp_sub(self,reg,replace,(_Bool)1,ignore_case))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

struct list$1char$ph* string_scan(char* self, const char* reg, _Bool ignore_case)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_scan"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_split"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_match"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return charp_match(self,reg,ignore_case);
    neo_current_frame = fr.prev;
}

char* charp_sub(char* self, const char* reg, const char* replace, _Bool global, _Bool ignore_case)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_sub"; neo_current_frame = &fr;
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
    char* str_31  ;
    char* str_32  ;
    if(self==((void*)0)||reg==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    re=re_compile(reg);
    if(re==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    offset=0;
    n=0;
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), (void*)0, 6109, "struct buffer*"))));
    group_count=re_get_group_count(re);
    while((_Bool)1) {
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
                str_31=(char*)come_increment_ref_count(charp_substring(self,offset,-1));
                buffer_append_str(result,str_31);
                (str_31 = come_decrement_ref_count(str_31, (void*)0, (void*)0, 0, 0, (void*)0));
                (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
                (str_31 = come_decrement_ref_count(str_31, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            str_32=(char*)come_increment_ref_count(charp_substring(self,offset,-1));
            buffer_append_str(result,str_32);
            (str_32 = come_decrement_ref_count(str_32, (void*)0, (void*)0, 0, 0, (void*)0));
            break;
            (str_32 = come_decrement_ref_count(str_32, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=buffer_to_string(result))));
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* charp_sub_block(char* self, const char* reg, _Bool global, _Bool ignore_case, void* parent, char* (*block)(void*,char*,struct list$1char$ph*))
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_sub_block"; neo_current_frame = &fr;
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
    char* str_33  ;
    char* str_34  ;
    struct list$1char$ph* group_strings_35;
    int i;
    struct re_capture cp  ;
    char* match_string_36  ;
    char* match_string_37  ;
    char* block_result_38  ;
    char* str_39  ;
    if(self==((void*)0)||reg==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), (void*)0, 6157, "struct buffer*"))));
    re=re_compile(reg);
    if(re==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
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
        struct re_capture captures[max_captures]  ;
        memset(&captures, 0, sizeof(captures));
        regex_result=re_matchp_ex(re,self+offset,&matchlength,captures,max_captures,ignore_case);
        if(regex_result>=0&&group_count==0) {
            str=(char*)come_increment_ref_count(charp_substring(self,offset,offset+regex_result));
            buffer_append_str(result,str);
            group_strings=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 6184, "struct list$1char$ph*"))));
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
                str_33=(char*)come_increment_ref_count(charp_substring(self,offset,-1));
                buffer_append_str(result,str_33);
                (str_33 = come_decrement_ref_count(str_33, (void*)0, (void*)0, 0, 0, (void*)0));
                (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(list$1char$ph$p_finalize, group_strings, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (match_string = come_decrement_ref_count(match_string, (void*)0, (void*)0, 0, 0, (void*)0));
                (block_result = come_decrement_ref_count(block_result, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
                (str_33 = come_decrement_ref_count(str_33, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(list$1char$ph$p_finalize, group_strings, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (match_string = come_decrement_ref_count(match_string, (void*)0, (void*)0, 0, 0, (void*)0));
            (block_result = come_decrement_ref_count(block_result, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(regex_result>=0&&group_count>0) {
            str_34=(char*)come_increment_ref_count(charp_substring(self,offset,offset+regex_result));
            buffer_append_str(result,str_34);
            group_strings_35=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 6212, "struct list$1char$ph*"))));
            for(i=0;i<group_count;i++){
                cp=captures[i];
                match_string_36=(char*)come_increment_ref_count(charp_substring((self+offset),cp.start,cp.start+cp.length));
                list$1char$ph_push_back(group_strings_35,(char*)come_increment_ref_count(match_string_36));
                (match_string_36 = come_decrement_ref_count(match_string_36, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            match_string_37=(char*)come_increment_ref_count(charp_substring(self,offset+regex_result,offset+regex_result+matchlength));
            block_result_38=(char*)come_increment_ref_count(block(parent,match_string_37,group_strings_35));
            buffer_append_str(result,block_result_38);
            if(matchlength==0) {
                offset++;
            }
            else {
                offset=offset+regex_result+matchlength;
            }
            (str_34 = come_decrement_ref_count(str_34, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(list$1char$ph$p_finalize, group_strings_35, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (match_string_37 = come_decrement_ref_count(match_string_37, (void*)0, (void*)0, 0, 0, (void*)0));
            (block_result_38 = come_decrement_ref_count(block_result_38, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            str_39=(char*)come_increment_ref_count(charp_substring(self,offset,-1));
            buffer_append_str(result,str_39);
            (str_39 = come_decrement_ref_count(str_39, (void*)0, (void*)0, 0, 0, (void*)0));
            break;
            (str_39 = come_decrement_ref_count(str_39, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=buffer_to_string(result))));
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

struct list$1char$ph* charp_scan_block(const char* self, const char* reg, _Bool ignore_case, void* parent, char* (*block)(void*,char*,struct list$1char$ph*))
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_scan_block"; neo_current_frame = &fr;
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
    struct list$1char$ph* group_strings_40;
    int i;
    struct re_capture cp  ;
    char* match_string_41  ;
    char* match_string_42  ;
    char* block_result_43  ;
    if(self==((void*)0)||reg==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 6246, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 6248, "struct list$1char$ph*"))));
    re=re_compile(reg);
    if(re==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 6253, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        struct re_capture captures[max_captures]  ;
        memset(&captures, 0, sizeof(captures));
        regex_result=re_matchp_ex(re,self+offset,&matchlength,captures,max_captures,ignore_case);
        if(regex_result>=0&&group_count==0) {
            group_strings=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 6271, "struct list$1char$ph*"))));
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
            group_strings_40=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 6288, "struct list$1char$ph*"))));
            for(i=0;i<group_count;i++){
                cp=captures[i];
                match_string_41=(char*)come_increment_ref_count(charp_substring((self+offset),cp.start,cp.start+cp.length));
                list$1char$ph_push_back(group_strings_40,(char*)come_increment_ref_count(match_string_41));
                (match_string_41 = come_decrement_ref_count(match_string_41, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            match_string_42=(char*)come_increment_ref_count(charp_substring(self,offset+regex_result,offset+regex_result+matchlength));
            block_result_43=(char*)come_increment_ref_count(block(parent,match_string_42,group_strings_40));
            list$1char$ph_add(result,(char*)come_increment_ref_count(block_result_43));
            if(matchlength==0) {
                offset++;
            }
            else {
                offset=offset+regex_result+matchlength;
            }
            come_call_finalizer(list$1char$ph$p_finalize, group_strings_40, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (match_string_42 = come_decrement_ref_count(match_string_42, (void*)0, (void*)0, 0, 0, (void*)0));
            (block_result_43 = come_decrement_ref_count(block_result_43, (void*)0, (void*)0, 0, 0, (void*)0));
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

char* string_sub_block(char* self, const char* reg, _Bool global, _Bool ignore_case, void* parent, char* (*block)(void*,char*,struct list$1char$ph*))
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_sub_block"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=charp_sub_block(self,reg,global,ignore_case,parent,block))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int* __builtin_wstring(const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__builtin_wstring"; neo_current_frame = &fr;
    int* __result_obj__0  ;
    int len;
    void* __right_value0 = (void*)0;
    int* wstr  ;
    int ret;
    if(str==((void*)0)) {
        __result_obj__0 = (int*)come_increment_ref_count(((void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(str);
    wstr=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(len+1)), (void*)0, 6340, "int*"));
    ret=mbstowcs(wstr,str,len+1);
    wstr[ret]=0;
    if(ret<0) {
        wstr[0]=0;
    }
    __result_obj__0 = (int*)come_increment_ref_count(wstr);
    (wstr = come_decrement_ref_count(wstr, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int wchar_tp_length(const int* str  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_length"; neo_current_frame = &fr;
    if(str==((void*)0)) {
        neo_current_frame = fr.prev;
        return 0;
    }
    neo_current_frame = fr.prev;
    return wcslen(str);
    neo_current_frame = fr.prev;
}

int wchar_ta_length(const int* str  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_ta_length"; neo_current_frame = &fr;
    if(str==((void*)0)) {
        neo_current_frame = fr.prev;
        return 0;
    }
    neo_current_frame = fr.prev;
    return wcslen(str);
    neo_current_frame = fr.prev;
}

int wstring_length(const int* str  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_length"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return wchar_tp_length(str);
    neo_current_frame = fr.prev;
}

char* string_lower_case(char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_lower_case"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    char* result  ;
    int i;
    if(str==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
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
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* string_upper_case(char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_upper_case"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    char* result  ;
    int i;
    if(str==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
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
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int* wchar_tp_substring(const int* str  , int head, int tail)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_substring"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int* __result_obj__0  ;
    int len;
    int* result  ;
    if(str==((void*)0)) {
        __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=__builtin_wstring(""))));
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
        __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=__builtin_wstring(""))));
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
        __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(head==tail) {
        __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(tail-head+1<1) {
        __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(tail-head+1)), (void*)0, 6442, "int*"));
    memcpy(result,str+head,sizeof(int)*(tail-head));
    result[tail-head]=0;
    __result_obj__0 = (int*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int charp_index_count(const char* str, const char* search_str, int count, int default_value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_index_count"; neo_current_frame = &fr;
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
            if(str[i+j]!=search_str[j]) {
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_rindex"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_rindex_count"; neo_current_frame = &fr;
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

char* charp_strip(const char* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_strip"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    char* result  ;
    int len;
    if(self==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
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
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* wchar_tp_to_string(const int* wstr  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    int len;
    char* result  ;
    if(wstr==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=6*(wcslen(wstr)+1);
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len)), (void*)0, 6555, "char*"));
    if(wcstombs(result,wstr,len)<0) {
        strncpy(result,"",len);
    }
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* wchar_ta_to_string(const int* wstr  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_ta_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    if(wstr==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=wchar_tp_to_string(wstr))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int* charp_to_wstring(const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_to_wstring"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int* __result_obj__0  ;
    if(str==((void*)0)) {
        __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=__builtin_wstring(str))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int* chara_to_wstring(char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "chara_to_wstring"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int* __result_obj__0  ;
    if(str==((void*)0)) {
        __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=__builtin_wstring(str))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int* wchar_tp_delete(const int* str  , int head, int tail)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_delete"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int* __result_obj__0  ;
    int len;
    void* __right_value1 = (void*)0;
    int* sub_str  ;
    if(str==((void*)0)) {
        __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=wcslen(str);
    if(len==0) {
        __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value1=string_to_wstring(((char*)(__right_value0=wchar_tp_to_string(str)))))));
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
        __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value1=string_to_wstring(((char*)(__right_value0=wchar_tp_to_string(str)))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
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
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int wchar_tp_index(const int* str  , const int* search_str  , int default_value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_index"; neo_current_frame = &fr;
    int* head  ;
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

int wchar_tp_rindex(const int* str  , const int* search_str  , int default_value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_rindex"; neo_current_frame = &fr;
    int len;
    int* p  ;
    int len2;
    _Bool result;
    int i;
    memset(&i, 0, sizeof(i));
    if(str==((void*)0)||search_str==((void*)0)) {
        neo_current_frame = fr.prev;
        return default_value;
    }
    len=wcslen(search_str);
    p=(int*)str+wcslen(str)-len;
    while(p>=str) {
        len2=wcslen(p);
        result=(_Bool)1;
        for(i=0;i<len&&i<len2;i++){
            if(p[i]!=search_str[i]) {
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

int* wchar_tp_reverse(const int* str  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_reverse"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int* __result_obj__0  ;
    int len;
    int* result  ;
    int i;
    if(str==((void*)0)) {
        __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=wcslen(str);
    result=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(len+1)), (void*)0, 6678, "int*"));
    for(i=0;i<len;i++){
        result[i]=str[len-i-1];
    }
    result[len]=0;
    __result_obj__0 = (int*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int* wchar_tp_multiply(const int* str  , int n)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_multiply"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int* __result_obj__0  ;
    int len;
    int* result  ;
    int i;
    if(str==((void*)0)) {
        __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=wcslen(str)*n+1;
    result=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(len)), (void*)0, 6697, "int*"));
    result[0]=0;
    for(i=0;i<n;i++){
        wcscat(result,str);
    }
    __result_obj__0 = (int*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int* wchar_tp_printable(const int* str  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_printable"; neo_current_frame = &fr;
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
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=wchar_tp_length(str);
    result=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(len*2+1)), (void*)0, 6714, "int*"));
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
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int wchar_tp_compare(const int* left  , int* right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_compare"; neo_current_frame = &fr;
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

int wstring_compare(const int* left  , const int* right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_compare"; neo_current_frame = &fr;
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

int* wchar_tp_operator_mult(const int* str  , int n)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_operator_mult"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int* __result_obj__0  ;
    __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=wchar_tp_multiply(str,n))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int* wstring_operator_mult(const int* str  , int n)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_operator_mult"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int* __result_obj__0  ;
    __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=wchar_tp_multiply(str,n))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool wstring_operator_equals(const int* left  , const int* right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_operator_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return wcscmp(left,right)==0;
    neo_current_frame = fr.prev;
}

_Bool wstring_operator_not_equals(const int* left  , const int* right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_operator_not_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return wcscmp(left,right)!=0;
    neo_current_frame = fr.prev;
}

int* wchar_tp_operator_add(const int* left  , const int* right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_operator_add"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int* __result_obj__0  ;
    int* result  ;
    if(left==((void*)0)||right==((void*)0)) {
        __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(wcslen(left)+wcslen(right)+1)), (void*)0, 6822, "int*"));
    wcscpy(result,left);
    wcscat(result,right);
    __result_obj__0 = (int*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int* wstring_operator_add(const int* left  , const int* right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_operator_add"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int* __result_obj__0  ;
    int* result  ;
    if(left==((void*)0)||right==((void*)0)) {
        __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(wcslen(left)+wcslen(right)+1)), (void*)0, 6835, "int*"));
    wcscpy(result,left);
    wcscat(result,right);
    __result_obj__0 = (int*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int charp_index(const char* str, const char* search_str, int default_value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_index"; neo_current_frame = &fr;
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

char* charp_replace(char* self, int index, char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_replace"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    int len;
    if(self==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(self);
    if(strcmp(self,"")==0) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(self))));
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
    self[index]=c;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* charp_multiply(const char* str, int n)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_multiply"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    int len;
    char* result;
    int i;
    if(str==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(str)*n+1;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len)), (void*)0, 6892, "char*"));
    result[0]=0;
    for(i=0;i<n;i++){
        strcat(result,str);
    }
    __result_obj__0 = (char*)come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

struct list$1char$ph* charp_split_str(const char* self, const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_split_str"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    struct list$1char$ph* result;
    struct buffer* buf  ;
    int i;
    if(self==((void*)0)||str==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 6906, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 6908, "struct list$1char$ph*"))));
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), (void*)0, 6910, "struct buffer*"))));
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
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

unsigned int wchar_tp_get_hash_key(const int* value  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_get_hash_key"; neo_current_frame = &fr;
    int result;
    int* p  ;
    if(value==((void*)0)) {
        neo_current_frame = fr.prev;
        return 0;
    }
    result=0;
    p=(int*)value;
    while(*p) {
        result+=(*p);
        p++;
    }
    neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool wstring_equals(const int* left  , const int* right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_equals"; neo_current_frame = &fr;
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

_Bool wchar_t_operator_equals(int left  , int right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_t_operator_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return left==right;
    neo_current_frame = fr.prev;
}

_Bool wchar_t_operator_not_equals(int left  , int right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_t_operator_not_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return left!=right;
    neo_current_frame = fr.prev;
}

unsigned int wchar_t_get_hash_key(int value  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_t_get_hash_key"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

_Bool wchar_t_equals(int left  , int right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_t_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return left==right;
    neo_current_frame = fr.prev;
}

char* wchar_t_to_string(int wc  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_t_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("%ls",wc))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* xrealpath(const char* path)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xrealpath"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    char* result;
    char* result2  ;
    if(path==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=realpath(path,((void*)0));
    result2=(char*)come_increment_ref_count(__builtin_string(result));
    free(result);
    __result_obj__0 = (char*)come_increment_ref_count(result2);
    (result2 = come_decrement_ref_count(result2, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* xdirname(const char* path)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xdirname"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    void* __right_value1 = (void*)0;
    if(path==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value1=__builtin_string(dirname(((char*)(__right_value0=__builtin_string(path))))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

unsigned long  int xwcslen(const int* wstr  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xwcslen"; neo_current_frame = &fr;
    int* p  ;
    unsigned long  int len  ;
    if(wstr==((void*)0)) {
        neo_current_frame = fr.prev;
        return 0;
    }
    p=(int*)wstr;
    len=0;
    while(*p) {
        p++;
        len++;
    }
    neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

int* wstring_substring(const int* str  , int head, int tail)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_substring"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int* __result_obj__0  ;
    __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=wchar_tp_substring(str,head,tail))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int string_index_count(const char* str, const char* search_str, int count, int default_value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_index_count"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return charp_index_count(str,search_str,count,default_value);
    neo_current_frame = fr.prev;
}

int string_rindex(const char* str, const char* search_str, int default_value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_rindex"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return charp_rindex(str,search_str,default_value);
    neo_current_frame = fr.prev;
}

int string_rindex_count(const char* str, const char* search_str, int count, int default_value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_rindex_count"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return charp_rindex_count(str,search_str,count,default_value);
    neo_current_frame = fr.prev;
}

char* string_strip(const char* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_strip"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=charp_strip(self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* wstring_to_string(const int* wstr  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=wchar_tp_to_string(wstr))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int* int_to_wstring(int self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_to_wstring"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    int* __result_obj__0  ;
    __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value1=string_to_wstring(((char*)(__right_value0=xsprintf("%d",self)))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int* wstring_delete(const int* str  , int head, int tail)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_delete"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int* __result_obj__0  ;
    __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=wchar_tp_delete(str,head,tail))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int wstring_index(const int* str  , const int* search_str  , int default_value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_index"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return wchar_tp_index(str,search_str,default_value);
    neo_current_frame = fr.prev;
}

int wstring_rindex(const int* str  , const int* search_str  , int default_value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_rindex"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return wchar_tp_rindex(str,search_str,default_value);
    neo_current_frame = fr.prev;
}

int* wstring_reverse(const int* str  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_reverse"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int* __result_obj__0  ;
    __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=wchar_tp_reverse(str))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int* wstring_multiply(const int* str  , int n)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_multiply"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int* __result_obj__0  ;
    __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=wchar_tp_multiply(str,n))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int* wstring_printable(const int* str  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_printable"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int* __result_obj__0  ;
    __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=wchar_tp_printable(str))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

unsigned int wstring_get_hash_key(const int* value  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_get_hash_key"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return wchar_tp_get_hash_key(value);
    neo_current_frame = fr.prev;
}

int string_index(const char* str, const char* search_str, int default_value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_index"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return charp_index(str,search_str,default_value);
    neo_current_frame = fr.prev;
}

char* string_replace(char* self, int index, char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_replace"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=charp_replace(self,index,c))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* string_multiply(const char* str, int n)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_multiply"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=charp_multiply(str,n))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

struct list$1char$ph* string_split_str(const char* self, const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_split_str"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value0=charp_split_str(self,str))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

int* string_to_wstring(const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_to_wstring"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int* __result_obj__0  ;
    __result_obj__0 = (int*)come_increment_ref_count(((int*)(__right_value0=charp_to_wstring(str))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* charp_chomp(const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_chomp"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=string_chomp(str))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool wchar_tp_equals(const int* left  , const int* right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return wcscmp(left,right)==0;
    neo_current_frame = fr.prev;
}

_Bool wchar_tp_operator_equals(const int* left  , const int* right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_operator_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return wcscmp(left,right)==0;
    neo_current_frame = fr.prev;
}

_Bool wchar_tp_operator_not_equals(const int* left  , const int* right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_operator_not_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return wcscmp(left,right)!=0;
    neo_current_frame = fr.prev;
}

char* FILE_read(struct __sFILE* f  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_read"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer* buf  ;
    int size;
    if(f==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), (void*)0, 7161, "struct buffer*"))));
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
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int FILE_write(struct __sFILE* f  , const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_write"; neo_current_frame = &fr;
    if(f==((void*)0)||str==((void*)0)) {
        neo_current_frame = fr.prev;
        return -1;
    }
    neo_current_frame = fr.prev;
    return fwrite(str,strlen(str),1,f);
    neo_current_frame = fr.prev;
}

int FILE_fclose(struct __sFILE* f  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_fclose"; neo_current_frame = &fr;
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

struct __sFILE* FILE_fprintf(struct __sFILE* f  , const char* msg, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_fprintf"; neo_current_frame = &fr;
    struct __sFILE* __result_obj__0  ;
    __builtin_va_list args  ;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_write"; neo_current_frame = &fr;
    struct __sFILE* f  ;
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

char* charp_read(const char* file_name)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_read"; neo_current_frame = &fr;
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
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    f=fopen(file_name,"r");
    if(f==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), (void*)0, 7268, "struct buffer*"))));
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
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char*)come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

struct list$1char$ph* FILE_readlines(struct __sFILE* f  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_readlines"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* result;
    struct list$1char$ph* __result_obj__0;
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 7295, "struct list$1char$ph*"))));
    if(f==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result);
        come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    while(1) {
        char buf[1024];
        memset(&buf, 0, sizeof(buf));
        if(fgets(buf,1024,f)==((void*)0)) {
            break;
        }
        list$1char$ph_push_back(result,(char*)come_increment_ref_count(__builtin_string(buf)));
    }
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

_Bool xiswalpha(int c  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xiswalpha"; neo_current_frame = &fr;
    _Bool result;
    result=(c>=97&&c<=122)||(c>=65&&c<=90);
    neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool xiswblank(int c  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xiswblank"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return c==32||c==9;
    neo_current_frame = fr.prev;
}

_Bool xiswdigit(int c  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xiswdigit"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (c>=48&&c<=57);
    neo_current_frame = fr.prev;
}

_Bool xiswalnum(int c  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xiswalnum"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return xiswalpha(c)||xiswdigit(c);
    neo_current_frame = fr.prev;
}

_Bool xiswascii(int c  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xiswascii"; neo_current_frame = &fr;
    _Bool result;
    result=(c>=32&&c<=126);
    neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_initialize(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_initialize"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsType$ph$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__0 = (struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph$p_finalize"; neo_current_frame = &fr;
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
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsType$ph$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void sType_finalize(struct sType* self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sType_finalize"; neo_current_frame = &fr;
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
    neo_current_frame = fr.prev;
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph$p_finalize"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph$p_finalize"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list$1tuple2$2char$phsType$ph$ph_finalize(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_finalize"; neo_current_frame = &fr;
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
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void sClass_finalize(struct sClass* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sClass_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mFields!=((void*)0)) {
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self->mFields, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct sClass* sClass_initialize(struct sClass* self, const char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, _Bool uniq_, _Bool typename, struct sInfo* info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sClass_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __dec_obj19  ;
    void* __right_value1 = (void*)0;
    struct list$1tuple2$2char$phsType$ph$ph* __dec_obj20;
    struct sClass* __result_obj__0;
    self->mNumber=number;
    self->mStruct=struct_;
    self->mUnion=union_;
    self->mGenerics=generics;
    self->mMethodGenerics=method_generics;
    self->mEnum=(_Bool)0;
    self->mProtocol=protocol_;
    self->mFloat=float_;
    self->mEnum=enum_;
    self->mTypeName=typename;
    self->mUniq=uniq_;
    __dec_obj19=self->mName,
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0, (void*)0);
    self->mGenericsNum=generics_num;
    self->mMethodGenericsNum=method_generics_num;
    __dec_obj20=self->mFields,
    self->mFields=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsType$ph$ph_initialize((struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsType$ph$ph)*(1), (void*)0, 80, "struct list$1tuple2$2char$phsType$ph$ph*"))));
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph_finalize, __dec_obj20,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sClass*)come_increment_ref_count(self);
    come_call_finalizer(sClass_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sClass* default_value  ;
    struct sClass* __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sClass*));
    if(self==((void*)0)) {
        __result_obj__0 = (struct sClass*)come_increment_ref_count(default_value);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct sClass*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct sClass*)come_increment_ref_count(default_value);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_operator_load_element"; neo_current_frame = &fr;
    struct sClass* default_value  ;
    struct sClass* __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sClass*));
    if(self==((void*)0)) {
        __result_obj__0 = (struct sClass*)come_increment_ref_count(default_value);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct sClass*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct sClass*)come_increment_ref_count(default_value);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key  , struct sClass* item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_insert"; neo_current_frame = &fr;
    struct map$2char$phsClass$ph* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    _Bool same_key_exist;
    char* it2  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sClass_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len*10>=self->size) {
        map$2char$phsClass$ph_rehash(self);
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                if(1) {
                    list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    self->keys[it]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                    self->keys[it]=key;
                }
                if(1) {
                    come_call_finalizer(sClass_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it]=(struct sClass*)come_increment_ref_count(item);
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
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it]=(_Bool)1;
            if(1) {
                self->keys[it]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it]=key;
            }
            if(1) {
                self->items[it]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist=(_Bool)0;
    for(it2=list$1char$ph_begin(self->key_list);!list$1char$ph_end(self->key_list);it2=list$1char$ph_next(self->key_list)){
        if((!by_pointer&&string_equals(it2,key))||(by_pointer&&it2==key)) {
            same_key_exist=(_Bool)1;
        }
    }
    if(!same_key_exist) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sClass_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_rehash"; neo_current_frame = &fr;
    int size;
    void* __right_value0 = (void*)0;
    char** keys  ;
    struct sClass** items  ;
    _Bool* item_existance;
    int len;
    char* it  ;
    struct sClass* default_value  ;
    struct sClass* it2  ;
    unsigned int hash;
    int n;
    struct sClass* default_value_46  ;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc(1, sizeof(char*)*(1*(size)), (void*)0, 1867, "char**"))));
    items=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value0=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size)), (void*)0, 1868, "struct sClass**"))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), (void*)0, 1869, "_Bool*"))));
    len=0;
    for(it=map$2char$phsClass$ph_begin(self);!map$2char$phsClass$ph_end(self);it=map$2char$phsClass$ph_next(self)){
        memset(&default_value,0,sizeof(struct sClass*));
        it2=((struct sClass*)(__right_value0=map$2char$phsClass$ph_at(self,it,(struct sClass*)come_increment_ref_count(default_value),(_Bool)0)));
        hash=string_get_hash_key(((char*)it))%size;
        n=hash;
        while((_Bool)1) {
            if(item_existance[n]) {
                n++;
                if(n>=size) {
                    n=0;
                }
                else if(n==hash) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance[n]=(_Bool)1;
                keys[n]=it;
                memset(&default_value_46,0,sizeof(struct sClass*));
                items[n]=((struct sClass*)(__right_value0=map$2char$phsClass$ph_at(self,it,(struct sClass*)come_increment_ref_count(default_value_46),(_Bool)0)));
                len++;
                come_call_finalizer(sClass_finalize, default_value_46, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer(sClass_finalize, default_value_46, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys;
    self->items=items;
    self->item_existance=item_existance;
    self->size=size;
    self->len=len;
    neo_current_frame = fr.prev;
}

static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_begin"; neo_current_frame = &fr;
    char* result  ;
    char* __result_obj__0  ;
    char* result_44  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char*));
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
    memset(&result_44,0,sizeof(char*));
    __result_obj__0 = result_44;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
    neo_current_frame = fr.prev;
}

static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_next"; neo_current_frame = &fr;
    char* result  ;
    char* __result_obj__0  ;
    char* result_45  ;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result,0,sizeof(char*));
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
    memset(&result_45,0,sizeof(char*));
    __result_obj__0 = result_45;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key  , struct sClass* default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_at"; neo_current_frame = &fr;
    struct sClass* __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
        __result_obj__0 = (struct sClass*)come_increment_ref_count(default_value);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                __result_obj__0 = (struct sClass*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct sClass*)come_increment_ref_count(default_value);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_remove"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_delete"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    int tmp;
    struct list_item$1char$ph* it;
    int i;
    struct list_item$1char$ph* prev_it;
    struct list_item$1char$ph* it_47;
    int i_48;
    struct list_item$1char$ph* prev_it_49;
    struct list_item$1char$ph* it_50;
    struct list_item$1char$ph* head_prev_it;
    struct list_item$1char$ph* tail_it;
    int i_51;
    struct list_item$1char$ph* prev_it_52;
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
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        it_47=self->head;
        i_48=0;
        while(it_47!=((void*)0)) {
            if(i_48==head) {
                self->tail=it_47->prev;
                self->tail->next=((void*)0);
            }
            if(i_48>=head) {
                prev_it_49=it_47;
                it_47=it_47->next;
                i_48++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_49, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_47=it_47->next;
                i_48++;
            }
        }
    }
    else {
        it_50=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_51=0;
        while(it_50!=((void*)0)) {
            if(i_51==head) {
                head_prev_it=it_50->prev;
            }
            if(i_51==tail) {
                tail_it=it_50;
            }
            if(i_51>=head&&i_51<tail) {
                prev_it_52=it_50;
                it_50=it_50->next;
                i_51++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_52, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_50=it_50->next;
                i_51++;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_reset"; neo_current_frame = &fr;
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static char* list$1char$ph_begin(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_begin"; neo_current_frame = &fr;
    char* result  ;
    char* __result_obj__0  ;
    char* result_53  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char*));
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
    memset(&result_53,0,sizeof(char*));
    __result_obj__0 = result_53;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
    neo_current_frame = fr.prev;
}

static char* list$1char$ph_next(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_next"; neo_current_frame = &fr;
    char* result  ;
    char* __result_obj__0  ;
    char* result_54  ;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(char*));
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
    memset(&result_54,0,sizeof(char*));
    __result_obj__0 = result_54;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_initialize"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_finalize"; neo_current_frame = &fr;
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

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_initialize"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_finalize"; neo_current_frame = &fr;
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

static struct list$1int$* list$1int$_initialize(struct list$1int$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void list$1int$_finalize(struct list$1int$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_finalize"; neo_current_frame = &fr;
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

static void list$1char$ph_finalize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_finalize"; neo_current_frame = &fr;
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

struct sType* sType_initialize(struct sType* self, char* name  , _Bool heap, struct sInfo* info  , _Bool unsinged_)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sType_initialize"; neo_current_frame = &fr;
    int pointer_num;
    char* p;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    char* name2  ;
    void* __right_value2 = (void*)0;
    struct sClass* klass  ;
    struct sClass* generics_class  ;
    struct sClass* klass2  ;
    char* __dec_obj21  ;
    struct sType* __dec_obj22  ;
    struct sType* __dec_obj23  ;
    struct list$1sType$ph* __dec_obj24;
    struct list$1sNode$ph* __dec_obj25;
    struct list$1sNode$ph* __dec_obj26;
    struct list$1int$* __dec_obj27;
    struct list$1int$* __dec_obj28;
    struct list$1sType$ph* __dec_obj29;
    struct list$1char$ph* __dec_obj30;
    char* __dec_obj31  ;
    struct sType* __dec_obj32  ;
    struct sNode* __dec_obj33;
    struct sNode* __dec_obj34;
    struct sType* __result_obj__0;
    pointer_num=0;
    p=name;
    while(*p) {
        if(xisalpha(*p)||*p==95) {
            p++;
        }
        else {
            break;
        }
    }
    while(*p==42) {
        pointer_num++;
        p++;
    }
    name2=(char*)come_increment_ref_count(charp_substring(((char*)(__right_value0=__builtin_string(name))),0,-pointer_num-1));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    klass=((struct sClass*)(__right_value2=map$2char$phsClass$ph_operator_load_element(info->classes,((char*)(__right_value1=__builtin_string(name2))))));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    generics_class=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->generics_classes,name2)));
    if(klass==((void*)0)&&generics_class==((void*)0)) {
        warning_msg(info,"class not found(%s)(1)\n",name2);
    }
    if(klass) {
        self->mClass=klass;
    }
    else {
        klass2=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), (void*)0, 197, "struct sClass*"));
        __dec_obj21=klass2->mName,
        klass2->mName=(char*)come_increment_ref_count(__builtin_string(name));
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0, (void*)0);
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(name)),(struct sClass*)come_increment_ref_count(klass2),(_Bool)0);
        self->mClass=((struct sClass*)(__right_value2=map$2char$phsClass$ph_operator_load_element(info->classes,((char*)(__right_value1=__builtin_string(name))))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        come_call_finalizer(sClass_finalize, klass2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj22=self->mNoSolvedGenericsType,
    self->mNoSolvedGenericsType=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj22,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj23=self->mOriginalLoadVarType,
    self->mOriginalLoadVarType=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj24=self->mGenericsTypes,
    self->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), (void*)0, 207, "struct list$1sType$ph*"))));
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj25=self->mArrayNum,
    self->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), (void*)0, 208, "struct list$1sNode$ph*"))));
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj26=self->mVarNameArrayNum,
    self->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), (void*)0, 209, "struct list$1sNode$ph*"))));
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj26,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj27=self->mArrayStatic,
    self->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), (void*)0, 210, "struct list$1int$*"))));
    come_call_finalizer(list$1int$_finalize, __dec_obj27,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj28=self->mArrayRestrict,
    self->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), (void*)0, 211, "struct list$1int$*"))));
    come_call_finalizer(list$1int$_finalize, __dec_obj28,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj29=self->mParamTypes,
    self->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), (void*)0, 212, "struct list$1sType$ph*"))));
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj29,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj30=self->mParamNames,
    self->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 213, "struct list$1char$ph*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj30,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj31=self->mOriginalTypeName,
    self->mOriginalTypeName=(char*)come_increment_ref_count(xsprintf(""));
    __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0, (void*)0);
    self->mVarArgs=(_Bool)0;
    __dec_obj32=self->mResultType,
    self->mResultType=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->mUnsigned=unsinged_;
    self->mConstant=(_Bool)0;
    self->mRegister=(_Bool)0;
    self->mVolatile=(_Bool)0;
    self->mStatic=(_Bool)0;
    self->mRestrict=(_Bool)0;
    self->mLongLong=(_Bool)0;
    self->mHeap=heap;
    self->mNoHeap=(_Bool)0;
    self->mPointerNum=pointer_num;
    __dec_obj33=self->mSizeNum,
    self->mSizeNum=((void*)0);
    (__dec_obj33 ? __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj34=self->mTypeOfNode,
    self->mTypeOfNode=((void*)0);
    (__dec_obj34 ? __dec_obj34 = come_decrement_ref_count(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sType*)come_increment_ref_count(self);
    come_call_finalizer(sType_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    (name2 = come_decrement_ref_count(name2, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1sVar$ph* list$1sVar$ph_initialize(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_initialize"; neo_current_frame = &fr;
    struct list$1sVar$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__0 = (struct list$1sVar$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sVar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph$p_finalize"; neo_current_frame = &fr;
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
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sVar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void sVar_finalize(struct sVar* self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

static void list$1sVar$ph_finalize(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_finalize"; neo_current_frame = &fr;
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
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_begin"; neo_current_frame = &fr;
    struct sType* result  ;
    struct sType* __result_obj__0  ;
    struct sType* result_55  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct sType*));
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
    memset(&result_55,0,sizeof(struct sType*));
    __result_obj__0 = result_55;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
    neo_current_frame = fr.prev;
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_next"; neo_current_frame = &fr;
    struct sType* result  ;
    struct sType* __result_obj__0  ;
    struct sType* result_56  ;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(struct sType*));
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
    memset(&result_56,0,sizeof(struct sType*));
    __result_obj__0 = result_56;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_push_back"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType* __dec_obj42  ;
    struct list_item$1sType$ph* litem_57;
    struct sType* __dec_obj43  ;
    struct list_item$1sType$ph* litem_58;
    struct sType* __dec_obj44  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 701, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj42=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_57=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 711, "struct list_item$1sType$ph*"))));
        litem_57->prev=self->head;
        litem_57->next=((void*)0);
        __dec_obj43=litem_57->item,
        litem_57->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj43,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_57;
        self->head->next=litem_57;
    }
    else {
        litem_58=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 721, "struct list_item$1sType$ph*"))));
        litem_58->prev=self->tail;
        litem_58->next=((void*)0);
        __dec_obj44=litem_58->item,
        litem_58->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_58;
        self->tail=litem_58;
    }
    self->len++;
    __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sType* sType_clone(struct sType* self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sType_clone"; neo_current_frame = &fr;
    struct sType* __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sType* result  ;
    struct sType* __dec_obj45  ;
    struct sType* __dec_obj46  ;
    struct list$1sType$ph* __dec_obj50;
    struct sType* __dec_obj51  ;
    struct sNode* __dec_obj52;
    struct sNode* __dec_obj53;
    char* __dec_obj54  ;
    char* __dec_obj55  ;
    char* __dec_obj56  ;
    char* __dec_obj57  ;
    char* __dec_obj58  ;
    char* __dec_obj59  ;
    struct list$1sNode$ph* __dec_obj63;
    struct list$1sNode$ph* __dec_obj64;
    struct list$1int$* __dec_obj65;
    struct list$1int$* __dec_obj66;
    struct sType* __dec_obj67  ;
    char* __dec_obj68  ;
    struct list$1sType$ph* __dec_obj69;
    struct list$1char$ph* __dec_obj70;
    struct sType* __dec_obj71  ;
    struct sNode* __dec_obj72;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), (void*)0, 3, "struct sType*"));
    if(self!=((void*)0)) {
        result->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj45=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj46=result->mChannelType,
        result->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj46,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj50=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj50,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj51=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj51,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj52=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj52 ? __dec_obj52 = come_decrement_ref_count(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj53=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj53 ? __dec_obj53 = come_decrement_ref_count(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)) {
        result->mAlignasDouble=self->mAlignasDouble;
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj54=result->mTupleName,
        result->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 12, "char*"));
        __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj55=result->mAttribute,
        result->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 13, "char*"));
        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        __dec_obj56=result->mVarAttribute,
        result->mVarAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mVarAttribute, "sType_clone", 14, "char*"));
        __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0, (void*)0);
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
        result->mStatic=self->mStatic;
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
        result->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(self!=((void*)0)) {
        result->mException=self->mException;
    }
    if(self!=((void*)0)) {
        result->mTypeName=self->mTypeName;
    }
    if(self!=((void*)0)) {
        result->mAnonymous=self->mAnonymous;
    }
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        __dec_obj57=result->mAnonymousName,
        result->mAnonymousName=(char*)come_increment_ref_count((char*)come_memdup(self->mAnonymousName, "sType_clone", 39, "char*"));
        __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mInnerStruct=self->mInnerStruct;
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        __dec_obj58=result->mInnerStructName,
        result->mInnerStructName=(char*)come_increment_ref_count((char*)come_memdup(self->mInnerStructName, "sType_clone", 41, "char*"));
        __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mAnonymousVarName=self->mAnonymousVarName;
    }
    if(self!=((void*)0)) {
        result->mInline=self->mInline;
    }
    if(self!=((void*)0)) {
        result->mNullValue=self->mNullValue;
    }
    if(self!=((void*)0)) {
        result->mGuardValue=self->mGuardValue;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj59=result->mAsmName,
        result->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 46, "char*"));
        __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj63=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj63,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        __dec_obj64=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj64,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        __dec_obj65=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic));
        come_call_finalizer(list$1int$_finalize, __dec_obj65,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        __dec_obj66=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict));
        come_call_finalizer(list$1int$_finalize, __dec_obj66,(void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        __dec_obj67=result->mTypedefOriginalType,
        result->mTypedefOriginalType=(struct sType*)come_increment_ref_count(sType_clone(self->mTypedefOriginalType));
        come_call_finalizer(sType_finalize, __dec_obj67,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj68=result->mOriginalTypeName,
        result->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 58, "char*"));
        __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0, (void*)0);
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
        __dec_obj69=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj69,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj70=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj70,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj71=result->mResultType,
        result->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj71,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        __dec_obj72=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode));
        (__dec_obj72 ? __dec_obj72 = come_decrement_ref_count(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph$p_clone"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sType$ph* result;
    struct list_item$1sType$ph* it;
    if(self==((void*)0)) {
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0));
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), (void*)0, 595, "struct list$1sType$ph*"))));
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            list$1sType$ph_add(result,(struct sType*)come_increment_ref_count(sType_clone(it->item)));
        }
        else {
            list$1sType$ph_add(result,(struct sType*)come_increment_ref_count(sType_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_add"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType* __dec_obj47  ;
    struct list_item$1sType$ph* litem_59;
    struct sType* __dec_obj48  ;
    struct list_item$1sType$ph* litem_60;
    struct sType* __dec_obj49  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 616, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj47=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj47,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_59=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 626, "struct list_item$1sType$ph*"))));
        litem_59->prev=self->head;
        litem_59->next=((void*)0);
        __dec_obj48=litem_59->item,
        litem_59->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_59;
        self->head->next=litem_59;
    }
    else {
        litem_60=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 636, "struct list_item$1sType$ph*"))));
        litem_60->prev=self->tail;
        litem_60->next=((void*)0);
        __dec_obj49=litem_60->item,
        litem_60->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj49,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_60;
        self->tail=litem_60;
    }
    self->len++;
    __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sNode* sNode_clone(struct sNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNode_clone"; neo_current_frame = &fr;
    struct sNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNode* result;
    if(self==(void*)0) {
        __result_obj__0 = (struct sNode*)come_increment_ref_count((void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), (void*)0, 3, "struct sNode*"));
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
    __result_obj__0 = (struct sNode*)come_increment_ref_count(result);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph$p_clone"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sNode$ph* result;
    struct list_item$1sNode$ph* it;
    if(self==((void*)0)) {
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0));
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), (void*)0, 595, "struct list$1sNode$ph*"))));
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item)));
        }
        else {
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_add"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj60;
    struct list_item$1sNode$ph* litem_61;
    struct sNode* __dec_obj61;
    struct list_item$1sNode$ph* litem_62;
    struct sNode* __dec_obj62;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 616, "struct list_item$1sNode$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj60=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj60 ? __dec_obj60 = come_decrement_ref_count(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_61=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 626, "struct list_item$1sNode$ph*"))));
        litem_61->prev=self->head;
        litem_61->next=((void*)0);
        __dec_obj61=litem_61->item,
        litem_61->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj61 ? __dec_obj61 = come_decrement_ref_count(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem_61;
        self->head->next=litem_61;
    }
    else {
        litem_62=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 636, "struct list_item$1sNode$ph*"))));
        litem_62->prev=self->tail;
        litem_62->next=((void*)0);
        __dec_obj62=litem_62->item,
        litem_62->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj62 ? __dec_obj62 = come_decrement_ref_count(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail->next=litem_62;
        self->tail=litem_62;
    }
    self->len++;
    __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1int$* list$1int$$p_clone(struct list$1int$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$$p_clone"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1int$* result;
    struct list_item$1int$* it;
    if(self==((void*)0)) {
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0));
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), (void*)0, 595, "struct list$1int$*"))));
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
    __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_add(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_add"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_63;
    struct list_item$1int$* litem_64;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 616, "struct list_item$1int$*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_63=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 626, "struct list_item$1int$*"))));
        litem_63->prev=self->head;
        litem_63->next=((void*)0);
        litem_63->item=item;
        self->tail=litem_63;
        self->head->next=litem_63;
    }
    else {
        litem_64=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 636, "struct list_item$1int$*"))));
        litem_64->prev=self->tail;
        litem_64->next=((void*)0);
        litem_64->item=item;
        self->tail->next=litem_64;
        self->tail=litem_64;
    }
    self->len++;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph$p_clone"; neo_current_frame = &fr;
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
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 595, "struct list$1char$ph*"))));
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            list$1char$ph_add(result,(char*)come_increment_ref_count((char*)come_memdup(it->item, "/usr/local/include/neo-c.h", 600, "char*")));
        }
        else {
            list$1char$ph_add(result,(char*)come_increment_ref_count((char*)come_memdup(it->item, "/usr/local/include/neo-c.h", 603, "char*")));
        }
        it=it->next;
    }
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void sBlock_finalize(struct sBlock* self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void sFun_finalize(struct sFun* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mAllVar!=((void*)0)) {
        come_call_finalizer(list$1sVar$ph$p_finalize, self->mAllVar, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mTextBlock!=((void*)0)) {
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)) {
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct sFun* sFun_initialize(struct sFun* self, char* name  , struct sType* result_type  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block  , _Bool static_, struct sInfo* info  , _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute  , char* fun_attribute  , _Bool const_fun, char* text_block  , char* generics_sname  , int generics_sline, _Bool immutable_)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_initialize"; neo_current_frame = &fr;
    char* __dec_obj35  ;
    struct sType* __dec_obj36  ;
    struct list$1sType$ph* __dec_obj37;
    struct list$1char$ph* __dec_obj38;
    struct list$1char$ph* __dec_obj39;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sVar$ph* __dec_obj40;
    void* __right_value2 = (void*)0;
    struct sType* __dec_obj41  ;
    struct list$1sType$ph* o2_saved;
    struct sType* it  ;
    struct list$1char$ph* o2_saved_65;
    char* it_66  ;
    struct sType* __dec_obj73  ;
    struct buffer* __dec_obj74  ;
    struct buffer* __dec_obj75  ;
    struct buffer* __dec_obj76  ;
    struct buffer* __dec_obj77  ;
    struct sBlock* __dec_obj78  ;
    char* __dec_obj79  ;
    char* __dec_obj80  ;
    char* __dec_obj81  ;
    char* __dec_obj82  ;
    struct sFun* __result_obj__0;
    __dec_obj35=self->mName,
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj36=self->mResultType,
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer(sType_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj37=self->mParamTypes,
    self->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj37,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj38=self->mParamNames,
    self->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj39=self->mParamDefaultParametors,
    self->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->mExternal=external;
    self->mVarArgs=var_args;
    self->mStatic=static_;
    self->mInline=inline_;
    self->mUniq=uniq_;
    self->mConstFun=const_fun;
    self->mGenerate=generate_;
    __dec_obj40=self->mAllVar,
    self->mAllVar=(struct list$1sVar$ph*)come_increment_ref_count(list$1sVar$ph_initialize((struct list$1sVar$ph*)come_increment_ref_count((struct list$1sVar$ph*)come_calloc(1, sizeof(struct list$1sVar$ph)*(1), (void*)0, 301, "struct list$1sVar$ph*"))));
    come_call_finalizer(list$1sVar$ph_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj41=self->mLambdaType,
    self->mLambdaType=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), (void*)0, 303, "struct sType*")),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info,(_Bool)0));
    come_call_finalizer(sType_finalize, __dec_obj41,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    for(o2_saved=(struct list$1sType$ph*)come_increment_ref_count(param_types),it=list$1sType$ph_begin(o2_saved);!list$1sType$ph_end(o2_saved);it=list$1sType$ph_next(o2_saved)){
        list$1sType$ph_push_back(self->mLambdaType->mParamTypes,(struct sType*)come_increment_ref_count(sType_clone(it)));
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    for(o2_saved_65=(struct list$1char$ph*)come_increment_ref_count(param_names),it_66=list$1char$ph_begin(o2_saved_65);!list$1char$ph_end(o2_saved_65);it_66=list$1char$ph_next(o2_saved_65)){
        list$1char$ph_push_back(self->mLambdaType->mParamNames,(char*)come_increment_ref_count((char*)come_memdup(it_66, "./common.h", 310, "char*")));
    }
    come_call_finalizer(list$1char$ph$p_finalize, o2_saved_65, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj73=self->mLambdaType->mResultType,
    self->mLambdaType->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer(sType_finalize, __dec_obj73,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->mLambdaType->mVarArgs=var_args;
    __dec_obj74=self->mSource,
    self->mSource=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), (void*)0, 316, "struct buffer*"))));
    come_call_finalizer(buffer_finalize, __dec_obj74,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj75=self->mSourceHead,
    self->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), (void*)0, 317, "struct buffer*"))));
    come_call_finalizer(buffer_finalize, __dec_obj75,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj76=self->mSourceHead2,
    self->mSourceHead2=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), (void*)0, 318, "struct buffer*"))));
    come_call_finalizer(buffer_finalize, __dec_obj76,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj77=self->mSourceDefer,
    self->mSourceDefer=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), (void*)0, 319, "struct buffer*"))));
    come_call_finalizer(buffer_finalize, __dec_obj77,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj78=self->mBlock,
    self->mBlock=(struct sBlock*)come_increment_ref_count(block);
    come_call_finalizer(sBlock_finalize, __dec_obj78,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj79=self->mTextBlock,
    self->mTextBlock=(char*)come_increment_ref_count(text_block);
    __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj80=self->mTextBlockSName,
    self->mTextBlockSName=(char*)come_increment_ref_count(generics_sname);
    __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0, (void*)0);
    self->mTextBlockSline=generics_sline;
    if((result_type->mClass->mNumber||string_operator_equals(result_type->mClass->mName,"double")||string_operator_equals(result_type->mClass->mName,"float")||result_type->mClass->mStruct)&&result_type->mPointerNum==0) {
        self->mNoResultType=(_Bool)1;
    }
    __dec_obj81=self->mAttribute,
    self->mAttribute=(char*)come_increment_ref_count(attribute);
    __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj82=self->mFunAttribute,
    self->mFunAttribute=(char*)come_increment_ref_count(fun_attribute);
    __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__0 = (struct sFun*)come_increment_ref_count(self);
    come_call_finalizer(sFun_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    (text_block = come_decrement_ref_count(text_block, (void*)0, (void*)0, 0, 0, (void*)0));
    (generics_sname = come_decrement_ref_count(generics_sname, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void sGenericsFun_finalize(struct sGenericsFun* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGenericsFun_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mImplType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mImplType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        (self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        (self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type  , struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name  , struct sType* result_type  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block  , struct sInfo* info  , char* generics_sname  , int generics_sline, _Bool const_fun)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGenericsFun_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct list$1char$ph* __dec_obj83;
    struct list$1char$ph* __dec_obj84;
    char* __dec_obj85  ;
    struct sType* __dec_obj86  ;
    struct list$1sType$ph* __dec_obj87;
    struct list$1char$ph* __dec_obj88;
    struct list$1char$ph* __dec_obj89;
    char* __dec_obj90  ;
    char* __dec_obj91  ;
    struct sGenericsFun* __result_obj__0;
    __dec_obj83=self->mGenericsTypeNames,
    self->mGenericsTypeNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_type_names));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj83,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj84=self->mMethodGenericsTypeNames,
    self->mMethodGenericsTypeNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(method_generics_type_names));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj84,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj85=self->mName,
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj86=self->mResultType,
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer(sType_finalize, __dec_obj86,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj87=self->mParamTypes,
    self->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj87,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj88=self->mParamNames,
    self->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj88,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj89=self->mParamDefaultParametors,
    self->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj89,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->mVarArgs=var_args;
    __dec_obj90=self->mBlock,
    self->mBlock=(char*)come_increment_ref_count(block);
    __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0, (void*)0);
    self->mSLine=info->sline;
    __dec_obj91=self->mGenericsSName,
    self->mGenericsSName=(char*)come_increment_ref_count(__builtin_string(generics_sname));
    __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0, (void*)0);
    self->mGenericsSLine=generics_sline;
    self->mConstFun=const_fun;
    __result_obj__0 = (struct sGenericsFun*)come_increment_ref_count(self);
    come_call_finalizer(sGenericsFun_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, impl_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (block = come_decrement_ref_count(block, (void*)0, (void*)0, 0, 0, (void*)0));
    (generics_sname = come_decrement_ref_count(generics_sname, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void CVALUE_finalize(struct CVALUE* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_finalize"; neo_current_frame = &fr;
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

struct CVALUE* CVALUE_initialize(struct CVALUE* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_initialize"; neo_current_frame = &fr;
    struct CVALUE* __result_obj__0;
    __result_obj__0 = (struct CVALUE*)come_increment_ref_count(self);
    come_call_finalizer(CVALUE_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int i;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __dec_obj96;
    struct map$2char$phchar$ph* __result_obj__0;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc(1, sizeof(char*)*(1*(128)), (void*)0, 1612, "char**"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc(1, sizeof(char*)*(1*(128)), (void*)0, 1613, "char**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), (void*)0, 1614, "_Bool*"))));
    for(i=0;i<128;i++){
        self->item_existance[i]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj96=self->key_list,
    self->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 1624, "struct list$1char$ph*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj96,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->it=0;
    __result_obj__0 = (struct map$2char$phchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_67;
    for(i=0;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                (self->items[i] = come_decrement_ref_count(self->items[i], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free((char*)self->items);
    for(i_67=0;i_67<self->size;i_67++){
        if(self->item_existance[i_67]) {
            if(1) {
                (self->keys[i_67] = come_decrement_ref_count(self->keys[i_67], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
}

static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph_finalize"; neo_current_frame = &fr;
    int i;
    int i_68;
    for(i=0;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                (self->items[i] = come_decrement_ref_count(self->items[i], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free((char*)self->items);
    for(i_68=0;i_68<self->size;i_68++){
        if(self->item_existance[i_68]) {
            if(1) {
                (self->keys[i_68] = come_decrement_ref_count(self->keys[i_68], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
}

static void sModule_finalize(struct sModule* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sModule_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mLastCode!=((void*)0)) {
        (self->mLastCode = come_decrement_ref_count(self->mLastCode, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mLastCode2!=((void*)0)) {
        (self->mLastCode2 = come_decrement_ref_count(self->mLastCode2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mHeader!=((void*)0)) {
        come_call_finalizer(map$2char$phchar$ph$p_finalize, self->mHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sModule* sModule_initialize(struct sModule* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sModule_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer* __dec_obj92  ;
    struct buffer* __dec_obj93  ;
    char* __dec_obj94  ;
    char* __dec_obj95  ;
    struct map$2char$phchar$ph* __dec_obj97;
    struct sModule* __result_obj__0;
    __dec_obj92=self->mSourceHead,
    self->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), (void*)0, 403, "struct buffer*"))));
    come_call_finalizer(buffer_finalize, __dec_obj92,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj93=self->mSource,
    self->mSource=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), (void*)0, 404, "struct buffer*"))));
    come_call_finalizer(buffer_finalize, __dec_obj93,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj94=self->mLastCode,
    self->mLastCode=((void*)0);
    __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj95=self->mLastCode2,
    self->mLastCode2=((void*)0);
    __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj97=self->mHeader,
    self->mHeader=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc(1, sizeof(struct map$2char$phchar$ph)*(1), (void*)0, 407, "struct map$2char$phchar$ph*"))));
    come_call_finalizer(map$2char$phchar$ph_finalize, __dec_obj97,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sModule*)come_increment_ref_count(self);
    come_call_finalizer(sModule_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sModule_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int i;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __dec_obj98;
    struct map$2char$phsVar$ph* __result_obj__0;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc(1, sizeof(char*)*(1*(128)), (void*)0, 1612, "char**"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value0=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), (void*)0, 1613, "struct sVar**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), (void*)0, 1614, "_Bool*"))));
    for(i=0;i<128;i++){
        self->item_existance[i]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj98=self->key_list,
    self->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 1624, "struct list$1char$ph*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj98,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->it=0;
    __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_69;
    for(i=0;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(i_69=0;i_69<self->size;i_69++){
        if(self->item_existance[i_69]) {
            if(1) {
                (self->keys[i_69] = come_decrement_ref_count(self->keys[i_69], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_finalize"; neo_current_frame = &fr;
    int i;
    int i_70;
    for(i=0;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(i_70=0;i_70<self->size;i_70++){
        if(self->item_existance[i_70]) {
            if(1) {
                (self->keys[i_70] = come_decrement_ref_count(self->keys[i_70], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
}

struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sVarTable_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct map$2char$phsVar$ph* __dec_obj99;
    struct sVarTable* __result_obj__0;
    __dec_obj99=self->mVars,
    self->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc(1, sizeof(struct map$2char$phsVar$ph)*(1), (void*)0, 419, "struct map$2char$phsVar$ph*"))));
    come_call_finalizer(map$2char$phsVar$ph_finalize, __dec_obj99,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->mGlobal=global;
    self->mParent=parent;
    __result_obj__0 = (struct sVarTable*)come_increment_ref_count(self);
    come_call_finalizer(sVarTable_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVarTable_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

void sVarTable_finalize(struct sVarTable* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sVarTable_finalize"; neo_current_frame = &fr;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self->mVars, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
}

struct sBlock* sBlock_initialize(struct sBlock* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sNode$ph* __dec_obj100;
    struct sBlock* __result_obj__0;
    __dec_obj100=self->mNodes,
    self->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), (void*)0, 437, "struct list$1sNode$ph*"))));
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj100,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sBlock*)come_increment_ref_count(self);
    come_call_finalizer(sBlock_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void sClassModule_finalize(struct sClassModule* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sClassModule_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mText!=((void*)0)) {
        (self->mText = come_decrement_ref_count(self->mText, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mParams!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParams, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mSName!=((void*)0)) {
        (self->mSName = come_decrement_ref_count(self->mSName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name  , char* text  , char* sname  , int sline)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sClassModule_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __dec_obj101  ;
    char* __dec_obj102  ;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __dec_obj103;
    char* __dec_obj104  ;
    struct sClassModule* __result_obj__0;
    __dec_obj101=self->mName,
    self->mName=(char*)come_increment_ref_count((char*)come_memdup(name, "./common.h", 468, "char*"));
    __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj102=self->mText,
    self->mText=(char*)come_increment_ref_count((char*)come_memdup(text, "./common.h", 469, "char*"));
    __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj103=self->mParams,
    self->mParams=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 470, "struct list$1char$ph*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj103,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj104=self->mSName,
    self->mSName=(char*)come_increment_ref_count(__builtin_string(sname));
    __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0, (void*)0);
    self->mSLine=sline;
    __result_obj__0 = (struct sClassModule*)come_increment_ref_count(self);
    come_call_finalizer(sClassModule_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    (text = come_decrement_ref_count(text, (void*)0, (void*)0, 0, 0, (void*)0));
    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    come_call_finalizer(sClassModule_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void sNodeBase_finalize(struct sNodeBase* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __dec_obj105  ;
    struct sNodeBase* __result_obj__0;
    self->sline=info->sline;
    __dec_obj105=self->sname,
    self->sname=(char*)come_increment_ref_count(__builtin_string(info->sname));
    __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0, (void*)0);
    self->sline_real=info->sline_real;
    __result_obj__0 = (struct sNodeBase*)come_increment_ref_count(self);
    come_call_finalizer(sNodeBase_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sNodeBase_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_sline"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self->sline;
    neo_current_frame = fr.prev;
}

int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo* info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_sline_real"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self->sline_real;
    neo_current_frame = fr.prev;
}

_Bool sNodeBase_terminated(struct sNodeBase* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_terminated"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_sname"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(self->sname))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

static void sCurrentNode_finalize(struct sCurrentNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCurrentNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCurrentNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sCurrentNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sCurrentNode*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__0 = (struct sCurrentNode*)come_increment_ref_count(self);
    come_call_finalizer(sCurrentNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sCurrentNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCurrentNode_sline"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self->sline;
    neo_current_frame = fr.prev;
}

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCurrentNode_sname"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(self->sname))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* sCurrentNode_kind(struct sCurrentNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCurrentNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sCurrentNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_begin"; neo_current_frame = &fr;
    char* result  ;
    char* __result_obj__0  ;
    char* result_71  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char*));
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
    memset(&result_71,0,sizeof(char*));
    __result_obj__0 = result_71;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
    neo_current_frame = fr.prev;
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_next"; neo_current_frame = &fr;
    char* result  ;
    char* __result_obj__0  ;
    char* result_72  ;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result,0,sizeof(char*));
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
    memset(&result_72,0,sizeof(char*));
    __result_obj__0 = result_72;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sVar* default_value  ;
    struct sVar* __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sVar*));
    if(self==((void*)0)) {
        __result_obj__0 = (struct sVar*)come_increment_ref_count(default_value);
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct sVar*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct sVar*)come_increment_ref_count(default_value);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sVar*)come_increment_ref_count(default_value);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            neo_current_frame = fr.prev;
            come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sVar*)come_increment_ref_count(default_value);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sVar* map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char* key  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_operator_load_element"; neo_current_frame = &fr;
    struct sVar* default_value  ;
    struct sVar* __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sVar*));
    if(self==((void*)0)) {
        __result_obj__0 = (struct sVar*)come_increment_ref_count(default_value);
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct sVar*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct sVar*)come_increment_ref_count(default_value);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sVar*)come_increment_ref_count(default_value);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            neo_current_frame = fr.prev;
            come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sVar*)come_increment_ref_count(default_value);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1  , struct sType* v2  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph_initialize"; neo_current_frame = &fr;
    char* __dec_obj106  ;
    struct sType* __dec_obj107  ;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    __dec_obj106=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj107=self->v2,
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer(sType_finalize, __dec_obj107,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_push_back"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsType$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsType$ph$ph* litem;
    struct tuple2$2char$phsType$ph* __dec_obj108;
    struct list_item$1tuple2$2char$phsType$ph$ph* litem_73;
    struct tuple2$2char$phsType$ph* __dec_obj109;
    struct list_item$1tuple2$2char$phsType$ph$ph* litem_74;
    struct tuple2$2char$phsType$ph* __dec_obj110;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), (void*)0, 701, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj108=litem->item,
        litem->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj108,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_73=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), (void*)0, 711, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_73->prev=self->head;
        litem_73->next=((void*)0);
        __dec_obj109=litem_73->item,
        litem_73->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj109,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_73;
        self->head->next=litem_73;
    }
    else {
        litem_74=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), (void*)0, 721, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_74->prev=self->tail;
        litem_74->next=((void*)0);
        __dec_obj110=litem_74->item,
        litem_74->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj110,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_74;
        self->tail=litem_74;
    }
    self->len++;
    __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph_clone"; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct tuple2$2char$phsType$ph* result;
    char* __dec_obj111  ;
    struct sType* __dec_obj112  ;
    if(self==(void*)0) {
        __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count((void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), (void*)0, 3, "struct tuple2$2char$phsType$ph*"));
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj111=result->v1,
        result->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsType$ph_clone", 4, "char*"));
        __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj112=result->v2,
        result->v2=(struct sType*)come_increment_ref_count(sType_clone(self->v2));
        come_call_finalizer(sType_finalize, __dec_obj112,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(result);
    come_call_finalizer(tuple2$2char$phsType$ph_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_length"; neo_current_frame = &fr;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return 0;
    }
    neo_current_frame = fr.prev;
    return self->len;
    neo_current_frame = fr.prev;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_push_back"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE* __dec_obj115  ;
    struct list_item$1CVALUE$ph* litem_83;
    struct CVALUE* __dec_obj116  ;
    struct list_item$1CVALUE$ph* litem_84;
    struct CVALUE* __dec_obj117  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), (void*)0, 701, "struct list_item$1CVALUE$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj115=litem->item,
        litem->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj115,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_83=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), (void*)0, 711, "struct list_item$1CVALUE$ph*"))));
        litem_83->prev=self->head;
        litem_83->next=((void*)0);
        __dec_obj116=litem_83->item,
        litem_83->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj116,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_83;
        self->head->next=litem_83;
    }
    else {
        litem_84=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), (void*)0, 721, "struct list_item$1CVALUE$ph*"))));
        litem_84->prev=self->tail;
        litem_84->next=((void*)0);
        __dec_obj117=litem_84->item,
        litem_84->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj117,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_84;
        self->tail=litem_84;
    }
    self->len++;
    __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCurrentNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* class_name  ;
    void* __right_value1 = (void*)0;
    struct sClass* current_stack  ;
    struct sVarTable* vtable  ;
    struct map$2char$phsVar$ph* o2_saved;
    char* it  ;
    char* key;
    void* __right_value2 = (void*)0;
    struct sVar* value  ;
    struct sType* type2  ;
    struct tuple2$2char$phsType$ph* item;
    struct sType* type3  ;
    struct tuple2$2char$phsType$ph* item2;
    struct sType* type3_75  ;
    struct tuple2$2char$phsType$ph* item2_76;
    struct map$2char$phsVar$ph* o2_saved_77;
    char* it_78  ;
    char* key_79;
    struct sVar* value_80  ;
    struct sType* type2_81  ;
    struct tuple2$2char$phsType$ph* item_82;
    struct CVALUE* come_value  ;
    char* __dec_obj113  ;
    struct sType* __dec_obj114  ;
    _Bool __result_obj__0;
    info->current_stack_num++;
    class_name=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), (void*)0, 676, "struct sClass*")),class_name,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,(_Bool)0,info));
    vtable=info->lv_table;
    while(vtable) {
        for(o2_saved=(struct map$2char$phsVar$ph*)come_increment_ref_count(vtable->mVars),it=map$2char$phsVar$ph_begin(o2_saved);!map$2char$phsVar$ph_end(o2_saved);it=map$2char$phsVar$ph_next(o2_saved)){
            key=it;
            value=((struct sVar*)(__right_value2=map$2char$phsVar$ph_operator_load_element(vtable->mVars,((char*)(__right_value1=__builtin_string(key))))));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            type2=(struct sType*)come_increment_ref_count(sType_clone(value->mType));
            type2->mPointerNum++;
            item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "./common.h", 689, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string(value->mCValueName)),(struct sType*)come_increment_ref_count(type2)));
            if(value->mCValueName!=((void*)0)) {
                if(strcmp(value->mCValueName,"__list_values")==0) {
                }
                else if(strcmp(value->mCValueName,"__map_keys")==0) {
                }
                else if(strcmp(value->mCValueName,"__map_element")==0) {
                }
                else if(string_operator_equals(value->mType->mClass->mName,"va_list")||string_operator_equals(value->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(type2->mArrayPointerType) {
                    type3=(struct sType*)come_increment_ref_count(sType_clone(type2));
                    type3->mPointerNum--;
                    type3->mArrayPointerNum++;
                    item2=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "./common.h", 709, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string(value->mCValueName)),(struct sType*)come_increment_ref_count(type3)));
                    list$1tuple2$2char$phsType$ph$ph_push_back(current_stack->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(item2)));
                    come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else if(list$1sNode$ph_length(type2->mArrayNum)>0) {
                    type3_75=(struct sType*)come_increment_ref_count(sType_clone(type2));
                    type3_75->mPointerNum--;
                    type3_75->mArrayPointerNum++;
                    item2_76=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "./common.h", 716, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string(value->mCValueName)),(struct sType*)come_increment_ref_count(type3_75)));
                    list$1tuple2$2char$phsType$ph$ph_push_back(current_stack->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(item2_76)));
                    come_call_finalizer(sType_finalize, type3_75, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item2_76, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    list$1tuple2$2char$phsType$ph$ph_push_back(current_stack->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(item)));
                }
            }
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        vtable=vtable->mParent;
    }
    output_struct(current_stack,((void*)0),info,(_Bool)0);
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(class_name),(struct sClass*)come_increment_ref_count(current_stack),(_Bool)0);
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name);
    vtable=info->lv_table;
    add_come_code(info,"({");
    while(vtable) {
        for(o2_saved_77=(struct map$2char$phsVar$ph*)come_increment_ref_count(vtable->mVars),it_78=map$2char$phsVar$ph_begin(o2_saved_77);!map$2char$phsVar$ph_end(o2_saved_77);it_78=map$2char$phsVar$ph_next(o2_saved_77)){
            key_79=it_78;
            value_80=((struct sVar*)(__right_value0=map$2char$phsVar$ph_operator_load_element(vtable->mVars,key_79)));
            type2_81=(struct sType*)come_increment_ref_count(sType_clone(value_80->mType));
            item_82=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "./common.h", 746, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(value_80->mCValueName),(struct sType*)come_increment_ref_count(type2_81)));
            if(value_80->mCValueName!=((void*)0)) {
                if(strcmp(value_80->mCValueName,"__list_values")==0) {
                }
                else if(strcmp(value_80->mCValueName,"__map_keys")==0) {
                }
                else if(strcmp(value_80->mCValueName,"__map_element")==0) {
                }
                else if(string_operator_equals(value_80->mType->mClass->mName,"va_list")||string_operator_equals(value_80->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(string_operator_equals(value_80->mFunName,info->come_fun->mName)) {
                        if(string_operator_equals(type2_81->mClass->mName,"lambda")) {
                            add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_80->mCValueName,value_80->mCValueName);
                        }
                        else {
                            add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_80->mCValueName,value_80->mCValueName);
                        }
                    }
                    else {
                        if(string_operator_equals(type2_81->mClass->mName,"lambda")) {
                            add_come_code(info,"__current_stack%d__.%s = parent->%s;\n",info->current_stack_num,value_80->mCValueName,value_80->mCValueName);
                        }
                        else {
                            add_come_code(info,"__current_stack%d__.%s = parent->%s;\n",info->current_stack_num,value_80->mCValueName,value_80->mCValueName);
                        }
                    }
                }
            }
            come_call_finalizer(sType_finalize, type2_81, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, o2_saved_77, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        vtable=vtable->mParent;
    }
    add_come_code(info,"})");
    add_come_code(info,",");
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), (void*)0, 794, "struct CVALUE*"))));
    __dec_obj113=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj114=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), (void*)0, 797, "struct sType*")),(char*)come_increment_ref_count(class_name),(_Bool)0,info,(_Bool)0));
    come_call_finalizer(sType_finalize, __dec_obj114,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    __result_obj__0 = (_Bool)1;
    (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sClass_finalize, current_stack, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sNothingNode_finalize(struct sNothingNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNothingNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNothingNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNothingNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNothingNode*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__0 = (struct sNothingNode*)come_increment_ref_count(self);
    come_call_finalizer(sNothingNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sNothingNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

_Bool sNothingNode_terminated(struct sNothingNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNothingNode_terminated"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

char* sNothingNode_kind(struct sNothingNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNothingNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __result_obj__0  ;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sNothingNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNothingNode_compile"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

