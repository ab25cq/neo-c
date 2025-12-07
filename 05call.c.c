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

typedef union anonymous_typeZ1 __darwin_mbstate_t;

typedef long  int __darwin_ptrdiff_t;

typedef unsigned long  int __darwin_size_t;

typedef __builtin_va_list __darwin_va_list;

typedef int __darwin_wchar_t;

typedef int __darwin_rune_t;

typedef int __darwin_wint_t;

typedef unsigned long  int __darwin_clock_t;

typedef unsigned int __darwin_socklen_t;

typedef long __darwin_ssize_t;

typedef long __darwin_time_t;

typedef long long __darwin_blkcnt_t;

typedef int __darwin_blksize_t;

typedef int __darwin_dev_t;

typedef unsigned int __darwin_fsblkcnt_t;

typedef unsigned int __darwin_fsfilcnt_t;

typedef unsigned int __darwin_gid_t;

typedef unsigned int __darwin_id_t;

typedef unsigned long  long __darwin_ino64_t;

typedef unsigned long  long __darwin_ino_t;

typedef unsigned int __darwin_mach_port_name_t;

typedef unsigned int __darwin_mach_port_t;

typedef unsigned short int __darwin_mode_t;

typedef long long __darwin_off_t;

typedef int __darwin_pid_t;

typedef unsigned int __darwin_sigset_t;

typedef int __darwin_suseconds_t;

typedef unsigned int __darwin_uid_t;

typedef unsigned int __darwin_useconds_t;

typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;

typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;

typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;

typedef unsigned long  int __darwin_pthread_key_t;

typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;

typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;

typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;

typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t;

typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t;

typedef struct _opaque_pthread_t* __darwin_pthread_t;

typedef int __darwin_nl_item;

typedef int __darwin_wctrans_t;

typedef unsigned int __darwin_wctype_t;

typedef char int8_t;

typedef short int16_t;

typedef int int32_t;

typedef long long int64_t;

typedef unsigned char u_int8_t;

typedef unsigned short int u_int16_t;

typedef unsigned int u_int32_t;

typedef unsigned long  long u_int64_t;

typedef long long register_t;

typedef long intptr_t;

typedef unsigned long  int uintptr_t;

typedef unsigned long  long user_addr_t;

typedef unsigned long  long user_size_t;

typedef long long user_ssize_t;

typedef long long user_long_t;

typedef unsigned long  long user_ulong_t;

typedef long long user_time_t;

typedef long long user_off_t;

typedef unsigned long  long syscall_arg_t;

typedef unsigned long  int size_t;

typedef long long fpos_t;

typedef struct __sFILE FILE;

typedef long long off_t;

typedef long ssize_t;

typedef enum anonymous_typeY1 idtype_t;

typedef int pid_t;

typedef unsigned int id_t;

typedef int sig_atomic_t;

typedef struct __darwin_mcontext64* mcontext_t;

typedef struct _opaque_pthread_attr_t pthread_attr_t;

typedef struct __darwin_sigaltstack stack_t;

typedef struct __darwin_ucontext ucontext_t;

typedef unsigned int sigset_t;

typedef unsigned int uid_t;

typedef struct __siginfo siginfo_t;

typedef void (*sig_t)(int);

typedef unsigned char uint8_t;

typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;

typedef unsigned long  long uint64_t;

typedef char int_least8_t;

typedef short int_least16_t;

typedef int int_least32_t;

typedef long long int_least64_t;

typedef unsigned char uint_least8_t;

typedef unsigned short int uint_least16_t;

typedef unsigned int uint_least32_t;

typedef unsigned long  long uint_least64_t;

typedef char int_fast8_t;

typedef short int_fast16_t;

typedef int int_fast32_t;

typedef long long int_fast64_t;

typedef unsigned char uint_fast8_t;

typedef unsigned short int uint_fast16_t;

typedef unsigned int uint_fast32_t;

typedef unsigned long  long uint_fast64_t;

typedef long  int intmax_t;

typedef unsigned long  int uintmax_t;

typedef unsigned long  long rlim_t;

typedef void* rusage_info_t;

typedef struct rusage_info_v6 rusage_info_current;

typedef int ct_rune_t;

typedef int rune_t;

typedef int wchar_t;

typedef struct anonymous_typeX4 div_t;

typedef struct anonymous_typeX5 ldiv_t;

typedef struct anonymous_typeX6 lldiv_t;

typedef unsigned long  long malloc_type_id_t;

typedef struct _malloc_zone_t malloc_zone_t;

typedef int dev_t;

typedef unsigned short int mode_t;

typedef __builtin_va_list __gnuc_va_list;

typedef __builtin_va_list va_list;

typedef struct _xlocale* locale_t;

typedef int wint_t;

typedef struct anonymous_typeX7 _RuneEntry;

typedef struct anonymous_typeX8 _RuneRange;

typedef struct anonymous_typeX9 _RuneCharClass;

typedef struct anonymous_typeX10 _RuneLocale;

typedef struct re_program* re_t;

typedef struct re_capture re_capture;

typedef struct regex_t regex_t;

typedef struct re_program regex_program_t;

typedef struct anonymous_typeX15 compiler_state;

typedef struct anonymous_typeX16 match_context;

typedef union anonymous_typeZ1 mbstate_t;

typedef unsigned long  int clock_t;

typedef long time_t;

typedef enum anonymous_typeY16 clockid_t;

typedef unsigned int wctype_t;

typedef int* wstring;

typedef unsigned int nfds_t;

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
    struct __darwin_pthread_handler_rec* __next;
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
    struct __darwin_pthread_handler_rec* __cleanup_stack;
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
    struct __sbuf _bf;
    int _lbfsize;
    void* _cookie;
    int (*_close)(void*);
    int (*_read)(void*,char*,int);
    long long (*_seek)(void*,long long,int);
    int (*_write)(void*,const char*,int);
    struct __sbuf _ub;
    struct __sFILEX* _extra;
    int _ur;
    unsigned char _ubuf[3];
    unsigned char _nbuf[1];
    struct __sbuf _lb;
    int _blksize;
    long long _offset;
};

extern struct __sFILE* __stdinp __attribute__((__swift_attr__("nonisolated(unsafe)")));
extern struct __sFILE* __stdoutp __attribute__((__swift_attr__("nonisolated(unsafe)")));
extern struct __sFILE* __stderrp __attribute__((__swift_attr__("nonisolated(unsafe)")));
extern const int sys_nerr;
extern const char* sys_errlist[];
enum   anonymous_typeY1 { P_ALL 
,P_PID 
,P_PGID 
};

struct __darwin_arm_exception_state
{
    unsigned int __exception;
    unsigned int __fsr;
    unsigned int __far;
};

struct __darwin_arm_exception_state64
{
    unsigned long  long __far;
    unsigned int __esr;
    unsigned int __exception;
};

struct __darwin_arm_exception_state64_v2
{
    unsigned long  long __far;
    unsigned long  long __esr;
};

struct __darwin_arm_thread_state
{
    unsigned int __r[13];
    unsigned int __sp;
    unsigned int __lr;
    unsigned int __pc;
    unsigned int __cpsr;
};

struct __darwin_arm_thread_state64
{
    unsigned long  long __x[29];
    unsigned long  long __fp;
    unsigned long  long __lr;
    unsigned long  long __sp;
    unsigned long  long __pc;
    unsigned int __cpsr;
    unsigned int __pad;
};

struct __darwin_arm_vfp_state
{
    unsigned int __r[64];
    unsigned int __fpscr;
};

struct __darwin_arm_neon_state64
{
    __uint128_t __v[32];
    unsigned int __fpsr;
    unsigned int __fpcr;
};

struct __darwin_arm_neon_state
{
    __uint128_t __v[16];
    unsigned int __fpsr;
    unsigned int __fpcr;
};

struct __arm_pagein_state
{
    int __pagein_error;
};

struct __darwin_arm_sme_state
{
    unsigned long  long __svcr;
    unsigned long  long __tpidr2_el0;
    unsigned short int __svl_b;
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
    unsigned int __bvr[16];
    unsigned int __bcr[16];
    unsigned int __wvr[16];
    unsigned int __wcr[16];
};

struct __darwin_arm_debug_state32
{
    unsigned int __bvr[16];
    unsigned int __bcr[16];
    unsigned int __wvr[16];
    unsigned int __wcr[16];
    unsigned long  long __mdscr_el1;
};

struct __darwin_arm_debug_state64
{
    unsigned long  long __bvr[16];
    unsigned long  long __bcr[16];
    unsigned long  long __wvr[16];
    unsigned long  long __wcr[16];
    unsigned long  long __mdscr_el1;
};

struct __darwin_arm_cpmu_state64
{
    unsigned long  long __ctrs[16];
};

struct __darwin_mcontext32
{
    struct __darwin_arm_exception_state __es;
    struct __darwin_arm_thread_state __ss;
    struct __darwin_arm_vfp_state __fs;
};

struct __darwin_mcontext64
{
    struct __darwin_arm_exception_state64 __es;
    struct __darwin_arm_thread_state64 __ss;
    struct __darwin_arm_neon_state64 __ns;
};

struct __darwin_sigaltstack
{
    void* ss_sp;
    unsigned long  int ss_size;
    int ss_flags;
};

struct __darwin_ucontext
{
    int uc_onstack;
    unsigned int uc_sigmask;
    struct __darwin_sigaltstack uc_stack;
    struct __darwin_ucontext* uc_link;
    unsigned long  int uc_mcsize;
    struct __darwin_mcontext64* uc_mcontext;
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
    union sigval sigev_value;
    void (*sigev_notify_function)(union sigval);
    struct _opaque_pthread_attr_t* sigev_notify_attributes;
};

struct __siginfo
{
    int si_signo;
    int si_errno;
    int si_code;
    int si_pid;
    unsigned int si_uid;
    int si_status;
    void* si_addr;
    union sigval si_value;
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
    union __sigaction_u __sigaction_u;
    void (*sa_tramp)(void*,int,int,struct __siginfo*,void*);
    unsigned int sa_mask;
    int sa_flags;
};

struct sigaction
{
    union __sigaction_u __sigaction_u;
    unsigned int sa_mask;
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
    long tv_sec;
    int tv_usec;
};

struct rusage
{
    struct timeval ru_utime;
    struct timeval ru_stime;
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
    unsigned char ri_uuid[16];
    unsigned long  long ri_user_time;
    unsigned long  long ri_system_time;
    unsigned long  long ri_pkg_idle_wkups;
    unsigned long  long ri_interrupt_wkups;
    unsigned long  long ri_pageins;
    unsigned long  long ri_wired_size;
    unsigned long  long ri_resident_size;
    unsigned long  long ri_phys_footprint;
    unsigned long  long ri_proc_start_abstime;
    unsigned long  long ri_proc_exit_abstime;
};

struct rusage_info_v1
{
    unsigned char ri_uuid[16];
    unsigned long  long ri_user_time;
    unsigned long  long ri_system_time;
    unsigned long  long ri_pkg_idle_wkups;
    unsigned long  long ri_interrupt_wkups;
    unsigned long  long ri_pageins;
    unsigned long  long ri_wired_size;
    unsigned long  long ri_resident_size;
    unsigned long  long ri_phys_footprint;
    unsigned long  long ri_proc_start_abstime;
    unsigned long  long ri_proc_exit_abstime;
    unsigned long  long ri_child_user_time;
    unsigned long  long ri_child_system_time;
    unsigned long  long ri_child_pkg_idle_wkups;
    unsigned long  long ri_child_interrupt_wkups;
    unsigned long  long ri_child_pageins;
    unsigned long  long ri_child_elapsed_abstime;
};

struct rusage_info_v2
{
    unsigned char ri_uuid[16];
    unsigned long  long ri_user_time;
    unsigned long  long ri_system_time;
    unsigned long  long ri_pkg_idle_wkups;
    unsigned long  long ri_interrupt_wkups;
    unsigned long  long ri_pageins;
    unsigned long  long ri_wired_size;
    unsigned long  long ri_resident_size;
    unsigned long  long ri_phys_footprint;
    unsigned long  long ri_proc_start_abstime;
    unsigned long  long ri_proc_exit_abstime;
    unsigned long  long ri_child_user_time;
    unsigned long  long ri_child_system_time;
    unsigned long  long ri_child_pkg_idle_wkups;
    unsigned long  long ri_child_interrupt_wkups;
    unsigned long  long ri_child_pageins;
    unsigned long  long ri_child_elapsed_abstime;
    unsigned long  long ri_diskio_bytesread;
    unsigned long  long ri_diskio_byteswritten;
};

struct rusage_info_v3
{
    unsigned char ri_uuid[16];
    unsigned long  long ri_user_time;
    unsigned long  long ri_system_time;
    unsigned long  long ri_pkg_idle_wkups;
    unsigned long  long ri_interrupt_wkups;
    unsigned long  long ri_pageins;
    unsigned long  long ri_wired_size;
    unsigned long  long ri_resident_size;
    unsigned long  long ri_phys_footprint;
    unsigned long  long ri_proc_start_abstime;
    unsigned long  long ri_proc_exit_abstime;
    unsigned long  long ri_child_user_time;
    unsigned long  long ri_child_system_time;
    unsigned long  long ri_child_pkg_idle_wkups;
    unsigned long  long ri_child_interrupt_wkups;
    unsigned long  long ri_child_pageins;
    unsigned long  long ri_child_elapsed_abstime;
    unsigned long  long ri_diskio_bytesread;
    unsigned long  long ri_diskio_byteswritten;
    unsigned long  long ri_cpu_time_qos_default;
    unsigned long  long ri_cpu_time_qos_maintenance;
    unsigned long  long ri_cpu_time_qos_background;
    unsigned long  long ri_cpu_time_qos_utility;
    unsigned long  long ri_cpu_time_qos_legacy;
    unsigned long  long ri_cpu_time_qos_user_initiated;
    unsigned long  long ri_cpu_time_qos_user_interactive;
    unsigned long  long ri_billed_system_time;
    unsigned long  long ri_serviced_system_time;
};

struct rusage_info_v4
{
    unsigned char ri_uuid[16];
    unsigned long  long ri_user_time;
    unsigned long  long ri_system_time;
    unsigned long  long ri_pkg_idle_wkups;
    unsigned long  long ri_interrupt_wkups;
    unsigned long  long ri_pageins;
    unsigned long  long ri_wired_size;
    unsigned long  long ri_resident_size;
    unsigned long  long ri_phys_footprint;
    unsigned long  long ri_proc_start_abstime;
    unsigned long  long ri_proc_exit_abstime;
    unsigned long  long ri_child_user_time;
    unsigned long  long ri_child_system_time;
    unsigned long  long ri_child_pkg_idle_wkups;
    unsigned long  long ri_child_interrupt_wkups;
    unsigned long  long ri_child_pageins;
    unsigned long  long ri_child_elapsed_abstime;
    unsigned long  long ri_diskio_bytesread;
    unsigned long  long ri_diskio_byteswritten;
    unsigned long  long ri_cpu_time_qos_default;
    unsigned long  long ri_cpu_time_qos_maintenance;
    unsigned long  long ri_cpu_time_qos_background;
    unsigned long  long ri_cpu_time_qos_utility;
    unsigned long  long ri_cpu_time_qos_legacy;
    unsigned long  long ri_cpu_time_qos_user_initiated;
    unsigned long  long ri_cpu_time_qos_user_interactive;
    unsigned long  long ri_billed_system_time;
    unsigned long  long ri_serviced_system_time;
    unsigned long  long ri_logical_writes;
    unsigned long  long ri_lifetime_max_phys_footprint;
    unsigned long  long ri_instructions;
    unsigned long  long ri_cycles;
    unsigned long  long ri_billed_energy;
    unsigned long  long ri_serviced_energy;
    unsigned long  long ri_interval_max_phys_footprint;
    unsigned long  long ri_runnable_time;
};

struct rusage_info_v5
{
    unsigned char ri_uuid[16];
    unsigned long  long ri_user_time;
    unsigned long  long ri_system_time;
    unsigned long  long ri_pkg_idle_wkups;
    unsigned long  long ri_interrupt_wkups;
    unsigned long  long ri_pageins;
    unsigned long  long ri_wired_size;
    unsigned long  long ri_resident_size;
    unsigned long  long ri_phys_footprint;
    unsigned long  long ri_proc_start_abstime;
    unsigned long  long ri_proc_exit_abstime;
    unsigned long  long ri_child_user_time;
    unsigned long  long ri_child_system_time;
    unsigned long  long ri_child_pkg_idle_wkups;
    unsigned long  long ri_child_interrupt_wkups;
    unsigned long  long ri_child_pageins;
    unsigned long  long ri_child_elapsed_abstime;
    unsigned long  long ri_diskio_bytesread;
    unsigned long  long ri_diskio_byteswritten;
    unsigned long  long ri_cpu_time_qos_default;
    unsigned long  long ri_cpu_time_qos_maintenance;
    unsigned long  long ri_cpu_time_qos_background;
    unsigned long  long ri_cpu_time_qos_utility;
    unsigned long  long ri_cpu_time_qos_legacy;
    unsigned long  long ri_cpu_time_qos_user_initiated;
    unsigned long  long ri_cpu_time_qos_user_interactive;
    unsigned long  long ri_billed_system_time;
    unsigned long  long ri_serviced_system_time;
    unsigned long  long ri_logical_writes;
    unsigned long  long ri_lifetime_max_phys_footprint;
    unsigned long  long ri_instructions;
    unsigned long  long ri_cycles;
    unsigned long  long ri_billed_energy;
    unsigned long  long ri_serviced_energy;
    unsigned long  long ri_interval_max_phys_footprint;
    unsigned long  long ri_runnable_time;
    unsigned long  long ri_flags;
};

struct rusage_info_v6
{
    unsigned char ri_uuid[16];
    unsigned long  long ri_user_time;
    unsigned long  long ri_system_time;
    unsigned long  long ri_pkg_idle_wkups;
    unsigned long  long ri_interrupt_wkups;
    unsigned long  long ri_pageins;
    unsigned long  long ri_wired_size;
    unsigned long  long ri_resident_size;
    unsigned long  long ri_phys_footprint;
    unsigned long  long ri_proc_start_abstime;
    unsigned long  long ri_proc_exit_abstime;
    unsigned long  long ri_child_user_time;
    unsigned long  long ri_child_system_time;
    unsigned long  long ri_child_pkg_idle_wkups;
    unsigned long  long ri_child_interrupt_wkups;
    unsigned long  long ri_child_pageins;
    unsigned long  long ri_child_elapsed_abstime;
    unsigned long  long ri_diskio_bytesread;
    unsigned long  long ri_diskio_byteswritten;
    unsigned long  long ri_cpu_time_qos_default;
    unsigned long  long ri_cpu_time_qos_maintenance;
    unsigned long  long ri_cpu_time_qos_background;
    unsigned long  long ri_cpu_time_qos_utility;
    unsigned long  long ri_cpu_time_qos_legacy;
    unsigned long  long ri_cpu_time_qos_user_initiated;
    unsigned long  long ri_cpu_time_qos_user_interactive;
    unsigned long  long ri_billed_system_time;
    unsigned long  long ri_serviced_system_time;
    unsigned long  long ri_logical_writes;
    unsigned long  long ri_lifetime_max_phys_footprint;
    unsigned long  long ri_instructions;
    unsigned long  long ri_cycles;
    unsigned long  long ri_billed_energy;
    unsigned long  long ri_serviced_energy;
    unsigned long  long ri_interval_max_phys_footprint;
    unsigned long  long ri_runnable_time;
    unsigned long  long ri_flags;
    unsigned long  long ri_user_ptime;
    unsigned long  long ri_system_ptime;
    unsigned long  long ri_pinstructions;
    unsigned long  long ri_pcycles;
    unsigned long  long ri_energy_nj;
    unsigned long  long ri_penergy_nj;
    unsigned long  long ri_secure_time_in_system;
    unsigned long  long ri_secure_ptime_in_system;
    unsigned long  long ri_neural_footprint;
    unsigned long  long ri_lifetime_max_neural_footprint;
    unsigned long  long ri_interval_max_neural_footprint;
    unsigned long  long ri_reserved[9];
};

struct rlimit
{
    unsigned long  long rlim_cur;
    unsigned long  long rlim_max;
};

struct proc_rlimit_control_wakeupmon
{
    unsigned int wm_flags;
    int wm_rate;
};

struct anonymous_typeX2
{
    unsigned int w_Termsig:7;
    unsigned int w_Coredump:1;
    unsigned int w_Retcode:8;
    unsigned int w_Filler:16;
};

struct anonymous_typeX3
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

struct anonymous_typeX4
{
    int quot;
    int rem;
};

struct anonymous_typeX5
{
    long quot;
    long rem;
};

struct anonymous_typeX6
{
    long long quot;
    long long rem;
};

extern int __mb_cur_max;
extern char* suboptarg;
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

struct anonymous_typeX7
{
    int __min;
    int __max;
    int __map;
    unsigned int* __types;
};

struct anonymous_typeX8
{
    int __nranges;
    struct {
        int __min;
        int __max;
        int __map;
        unsigned int* __types;
    } __ranges;
};

struct anonymous_typeX9
{
    char __name[14];
    unsigned int __mask;
};

struct anonymous_typeX10
{
    char __magic[8];
    char __encoding[32];
    int (*__sgetrune)(const char*,unsigned long  int,char**);
    int (*__sputrune)(int,char*,unsigned long  int,char**);
    int __invalid_rune;
    unsigned int __runetype[(1<<8)];
    int __maplower[(1<<8)];
    int __mapupper[(1<<8)];
    struct {
        int __nranges;
        struct {
            int __min;
            int __max;
            int __map;
            unsigned int* __types;
        } __ranges;
    } __runetype_ext;
    struct {
        int __nranges;
        struct {
            int __min;
            int __max;
            int __map;
            unsigned int* __types;
        } __ranges;
    } __maplower_ext;
    struct {
        int __nranges;
        struct {
            int __min;
            int __max;
            int __map;
            unsigned int* __types;
        } __ranges;
    } __mapupper_ext;
    void* __variable;
    int __variable_len;
    int __ncharclasses;
    struct {
        char __name[14];
        unsigned int __mask;
    } __charclasses;
};

extern struct anonymous_typeX10 _DefaultRuneLocale;
extern struct anonymous_typeX10* _CurrentRuneLocale;
struct buffer
{
    char* buf;
    int len;
    int size;
};

extern char* gComeStackFrameSName[128];

extern int gComeStackFrameSLine[128];

extern int gComeStackFrameID[128];

extern int gNumComeStackFrame;

extern char* gComeStackFrameBuffer;

struct sMemHeaderTiny
{
    unsigned long  int size;
    int allocated;
    struct sMemHeaderTiny* next;
    struct sMemHeaderTiny* prev;
    struct sMemHeaderTiny* free_next;
    char* class_name;
    char* sname;
    int sline;
};

struct sMemHeader
{
    unsigned long  int size;
    int allocated;
    struct sMemHeader* next;
    struct sMemHeader* prev;
    struct sMemHeader* free_next;
    char* sname[16];
    int sline[16];
    int id[16];
    char* class_name;
};

extern struct sMemHeader* gAllocMem;

extern int gComeDebugLib;

extern int gNumAlloc;

extern int gNumFree;

struct sHeapPage
{
    char** mPages;
    int mSizePages;
    char* mTop;
    int mCurrentPages;
    struct sMemHeaderTiny* mFreeMem[4096];
};

extern struct sHeapPage gHeapPages;

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
    char* item;
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

struct anonymous_typeX14
{
    struct regex_t* first;
    struct regex_t* last;
    int id;
};

union anonymous_typeZ13
{
unsigned char ch;
unsigned char* ccl;
    struct {
        struct regex_t* first;
        struct regex_t* last;
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
            struct regex_t* first;
            struct regex_t* last;
            int id;
        } group;
    } u;
    struct regex_t* next;
};

struct re_program
{
    struct regex_t* start;
    int group_count;
};

struct anonymous_typeX15
{
    struct regex_t* pool;
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
    struct re_capture* captures;
    int capture_capacity;
    int total_groups;
};

struct timespec
{
    long tv_sec;
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

extern char* tzname[];
extern int getdate_err;
extern long timezone;
extern int daylight;
enum   anonymous_typeY16 { _CLOCK_REALTIME=(0),
_CLOCK_MONOTONIC=(6),
_CLOCK_MONOTONIC_RAW=(4),
_CLOCK_MONOTONIC_RAW_APPROX=(5),
_CLOCK_UPTIME_RAW=(8),
_CLOCK_UPTIME_RAW_APPROX=(9),
_CLOCK_PROCESS_CPUTIME_ID=(12),
_CLOCK_THREAD_CPUTIME_ID=(16)
};

extern _Bool gComeDebug;
extern _Bool gComeC;
extern _Bool gComePthread;
extern _Bool gComeNet;
extern _Bool gComeMalloc;
extern _Bool gCommonHeader;
extern int gComeDebugStackFrameID;
extern _Bool gComeBareMetal;
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
    _Bool (*no_mutex)(void*);
};

struct tuple2$2char$phsType$ph
{
    char* v1;
    struct sType* v2;
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
    char* mName;
    int mGenericsNum;
    int mMethodGenericsNum;
    struct list$1tuple2$2char$phsType$ph$ph* mFields;
    char* mParentClassName;
    char* mAttribute;
};

struct list_item$1sType$ph
{
    struct sType* item;
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
    struct sClass* mClass;
    struct sType* mOriginalLoadVarType;
    struct sType* mChannelType;
    struct list$1sType$ph* mGenericsTypes;
    struct sType* mNoSolvedGenericsType;
    struct sNode* mSizeNum;
    struct sNode* mAlignas;
    char* mTupleName;
    char* mAttribute;
    char* mVarAttribute;
    _Bool mAllocaValue;
    _Bool mUnsigned;
    _Bool mShort;
    _Bool mLong;
    _Bool mLongLong;
    _Bool mConstant;
    _Bool mAtomic;
    _Bool mThreadLocal;
    _Bool mComplex;
    _Bool mRegister;
    _Bool mVolatile;
    _Bool mStatic;
    _Bool mUniq;
    _Bool mRecord;
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
    char* mAnonymousName;
    _Bool mInnerStruct;
    char* mInnerStructName;
    _Bool mAnonymousVarName;
    _Bool mInline;
    _Bool mNullValue;
    _Bool mGuardValue;
    char* mAsmName;
    _Bool mTypedef;
    _Bool mMultipleTypes;
    _Bool mOriginIsArray;
    struct list$1sNode$ph* mArrayNum;
    struct list$1sNode$ph* mVarNameArrayNum;
    struct list$1int$* mArrayStatic;
    struct list$1int$* mArrayRestrict;
    int mPointerNum;
    int mFunctionPointerNum;
    int mArrayPointerNum;
    _Bool mPointerParen;
    struct sType* mTypedefOriginalType;
    char* mOriginalTypeName;
    int mOriginalTypePointerNum;
    int mOriginalTypePointerHeap;
    _Bool mArrayPointerType;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct sType* mResultType;
    _Bool mVarArgs;
    struct sNode* mTypeOfNode;
};

struct sVar
{
    char* mName;
    char* mCValueName;
    struct sType* mType;
    _Bool mGlobal;
    _Bool mAllocaValue;
    _Bool mNoFree;
    char* mFunName;
};

struct list_item$1sVar$ph
{
    struct sVar* item;
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
    char* mName;
    struct sType* mResultType;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct list$1char$ph* mParamDefaultParametors;
    struct sType* mLambdaType;
    struct list$1sVar$ph* mAllVar;
    struct sBlock* mBlock;
    char* mTextBlock;
    char* mTextBlockSName;
    int mTextBlockSline;
    struct buffer* mSource;
    struct buffer* mSourceHead;
    struct buffer* mSourceHead2;
    struct buffer* mSourceDefer;
    _Bool mStatic;
    _Bool mInline;
    _Bool mUniq;
    _Bool mGenerate;
    _Bool mExternal;
    _Bool mVarArgs;
    _Bool mNoResultType;
    _Bool mConstFun;
    char* mAttribute;
    char* mFunAttribute;
    _Bool mGenericsFun;
};

struct sGenericsFun
{
    struct sType* mImplType;
    struct list$1char$ph* mGenericsTypeNames;
    struct list$1char$ph* mMethodGenericsTypeNames;
    char* mName;
    struct sType* mResultType;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct list$1char$ph* mParamDefaultParametors;
    char* mBlock;
    int mSLine;
    _Bool mVarArgs;
    _Bool mGenerate;
    char* mGenericsSName;
    int mGenericsSLine;
    _Bool mConstFun;
};

struct CVALUE
{
    char* c_value;
    struct sType* type;
    struct sVar* var;
    struct sRightValueObject* right_value_objects;
    char* c_value_without_right_value_objects;
    char* c_value_without_cast_object_value;
};

struct map$2char$phchar$ph
{
    char** keys;
    _Bool* item_existance;
    char** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct sModule
{
    struct buffer* mSourceHead;
    struct buffer* mSource;
    char* mLastCode;
    char* mLastCode2;
    struct map$2char$phchar$ph* mHeader;
};

struct map$2char$phsVar$ph
{
    char** keys;
    _Bool* item_existance;
    struct sVar** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct sVarTable
{
    struct map$2char$phsVar$ph* mVars;
    _Bool mGlobal;
    struct sVarTable* mParent;
};

struct sBlock
{
    struct list$1sNode$ph* mNodes;
    struct sVarTable* mVarTable;
    _Bool mOmitSemicolon;
};

struct sRightValueObject
{
    struct sType* mType;
    char* mVarName;
    char* mFunName;
    _Bool mFreed;
    int mID;
    int mBlockLevel;
    _Bool mStored;
    _Bool mDecrementRefCount;
    struct sType* mObjType;
    char* mObjValue;
    struct sVar* mObjVar;
    _Bool mNoFree;
};

struct sClassModule
{
    char* mName;
    char* mText;
    struct list$1char$ph* mParams;
    char* mSName;
    int mSLine;
};

struct map$2char$phsFun$ph
{
    char** keys;
    _Bool* item_existance;
    struct sFun** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsGenericsFun$ph
{
    char** keys;
    _Bool* item_existance;
    struct sGenericsFun** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsClass$ph
{
    char** keys;
    _Bool* item_existance;
    struct sClass** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsClassModule$ph
{
    char** keys;
    _Bool* item_existance;
    struct sClassModule** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsType$ph
{
    char** keys;
    _Bool* item_existance;
    struct sType** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phbuffer$ph
{
    char** keys;
    _Bool* item_existance;
    struct buffer** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct list_item$1sRightValueObject$ph
{
    struct sRightValueObject* item;
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
    struct CVALUE* item;
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
    struct buffer* source;
    char* end;
    char* sname;
    char* sname_at_head;
    char* base_sname;
    int sline;
    int err_num;
    char* clang_option;
    char* cpp_option;
    char* linker_option;
    _Bool no_output_err;
    _Bool no_output_come_code;
    _Bool undefined_array_num_var;
    struct sFun* come_fun;
    struct sFun* caller_fun;
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
    struct map$2char$phbuffer$ph* previous_struct_definition;
    struct map$2char$phbuffer$ph* typedef_definition;
    struct sModule* module;
    struct sType* type;
    struct list$1sRightValueObject$ph* right_value_objects;
    struct sType* generics_type;
    struct list$1sType$ph* method_generics_types;
    struct list$1CVALUE$ph* stack;
    struct sType* come_function_result_type;
    struct sType* come_method_block_function_result_type;
    struct sVarTable* lv_table;
    struct sVarTable* gv_table;
    _Bool no_comma;
    _Bool no_assign;
    _Bool no_label;
    _Bool last_statment_is_return;
    struct list$1char$ph* generics_type_names;
    struct list$1char$ph* method_generics_type_names;
    struct sType* impl_type;
    struct sType* class_type;
    int current_stack_num;
    int num_method_block;
    struct sClass* current_stack_frame_struct;
    _Bool define_struct;
    _Bool in_typedef;
    char* output_file_name;
    struct sVarTable* current_loop_vtable;
    _Bool verbose;
    int num_current_stack;
    int num_source_files;
    int max_source_files;
    _Bool writing_source_file_position;
    struct sType* function_result_type;
    _Bool in_class;
    struct map$2char$phchar$ph* module_params;
    _Bool constructor_;
    struct sClass* defining_class;
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
    struct sFun* calling_fun;
    struct map$2char$phchar$ph* uniq_definition;
    _Bool in_top_level;
    _Bool remove_comment;
    int sline_real;
    int sline_block;
    _Bool m5stack_cpp;
    _Bool pico_cpp;
    _Bool emb_cpp;
    _Bool gcc_compiler;
    _Bool in_method_block;
    _Bool in_offsetof;
    int right_value_num;
    int right_value_max;
    _Bool in_conditional;
    int num_conditional;
    int max_conditional;
    char* pragma;
    _Bool in_refference;
    struct buffer* paren_block_buffer;
    _Bool in_typeof;
    _Bool in_store_array;
    int parse_struct_recursive_count;
};

struct sNodeBase
{
    int sline;
    char* sname;
    int sline_real;
};

struct sCurrentNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct tuple2$2sType$phchar$ph
{
    struct sType* v1;
    char* v2;
};

struct tuple2$2char$phsGenericsFun$p
{
    char* v1;
    struct sGenericsFun* v2;
};

struct tuple3$3sType$phchar$phbool$
{
    struct sType* v1;
    char* v2;
    _Bool v3;
};

struct tuple2$2char$phchar$ph
{
    char* v1;
    char* v2;
};

struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$
{
    struct list$1sType$ph* v1;
    struct list$1char$ph* v2;
    struct list$1char$ph* v3;
    _Bool v4;
};

struct tuple2$2sFun$pchar$ph
{
    struct sFun* v1;
    char* v2;
};

struct tuple2$2char$phbool$
{
    char* v1;
    _Bool v2;
};

struct tuple3$3sType$phchar$phsNode$ph
{
    struct sType* v1;
    char* v2;
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
    char* v1;
    struct sFun* v2;
    struct sGenericsFun* v3;
};

struct tuple2$2char$phsNode$ph
{
    char* v1;
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

struct tuple4$4char$phchar$phchar$phchar$ph
{
    char* v1;
    char* v2;
    char* v3;
    char* v4;
};

struct sNothingNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct pollfd
{
    int fd;
    short events;
    short revents;
};

struct sReturnNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
    char* value_source;
};

struct sCSourceNode
{
    int sline;
    char* sname;
    int sline_real;
    char* contents;
};

struct sInlineAssembler
{
    int sline;
    char* sname;
    int sline_real;
    char* source;
    struct list$1sNode$ph* exps;
};

struct sLineNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sSNameNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sFuncNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sCallerFuncNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sCallerLineNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sCallerSNameNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sFunCallNode
{
    int sline;
    char* sname;
    int sline_real;
    char* fun_name;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct list$1sType$ph* method_generics_types;
    struct buffer* method_block;
    int method_block_sline;
};

struct sComeCallNode
{
    int sline;
    char* sname;
    int sline_real;
    struct buffer* come_block;
    int come_block_sline;
};

struct sComeJoinNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct list_item$1sBlock$ph
{
    struct sBlock* item;
    struct list_item$1sBlock$ph* prev;
    struct list_item$1sBlock$ph* next;
};

struct list$1sBlock$ph
{
    struct list_item$1sBlock$ph* head;
    struct list_item$1sBlock$ph* tail;
    int len;
    struct list_item$1sBlock$ph* it;
};

struct sComePollNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNode$ph* vars;
    struct list$1sBlock$ph* blocks;
    struct sBlock* else_block;
    int time_out;
};

struct sLambdaCall
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
};

struct sVarArgTypeName
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sInnerAttribute
{
    int sline;
    char* sname;
    int sline_real;
    char* attr;
};

// source head

// header function
int renameat(int , const char* , int , const char* );
int renamex_np(const char* , const char* , unsigned int );
int renameatx_np(int , const char* , int , const char* , unsigned int );
int printf(const char* , ...);
void clearerr(struct __sFILE* );
int fclose(struct __sFILE* );
int feof(struct __sFILE* );
int ferror(struct __sFILE* );
int fflush(struct __sFILE* );
int fgetc(struct __sFILE* );
int fgetpos(struct __sFILE* , long long* );
char* fgets(char* , int __size, struct __sFILE* );
struct __sFILE* fopen(const char* __filename, const char* __mode);
int fprintf(struct __sFILE* , const char* , ...);
int fputc(int , struct __sFILE* );
int fputs(const char* , struct __sFILE* );
unsigned long  int fread(void* __ptr, unsigned long  int __size, unsigned long  int __nitems, struct __sFILE* __stream);
struct __sFILE* freopen(const char* , const char* , struct __sFILE* );
int fscanf(struct __sFILE* , const char* , ...);
int fseek(struct __sFILE* , long , int );
int fsetpos(struct __sFILE* , const long long* );
long ftell(struct __sFILE* );
unsigned long  int fwrite(const void* __ptr, unsigned long  int __size, unsigned long  int __nitems, struct __sFILE* __stream);
int getc(struct __sFILE* );
int getchar();
char* gets(char* );
void perror(const char* );
int putc(int , struct __sFILE* );
int putchar(int );
int puts(const char* );
int remove(const char* );
int rename(const char* __old, const char* __new);
void rewind(struct __sFILE* );
int scanf(const char* , ...);
void setbuf(struct __sFILE* , char* );
int setvbuf(struct __sFILE* , char* , int , unsigned long  int __size);
int sprintf(char* , const char* , ...);
int sscanf(const char* , const char* , ...);
struct __sFILE* tmpfile();
char* tmpnam(char* );
int ungetc(int , struct __sFILE* );
int vfprintf(struct __sFILE* , const char* , __darwin_va_list );
int vprintf(const char* , __darwin_va_list );
int vsprintf(char* , const char* , __darwin_va_list );
char* ctermid(char* );
struct __sFILE* fdopen(int , const char* );
int fileno(struct __sFILE* );
int pclose(struct __sFILE* );
struct __sFILE* popen(const char* , const char* );
int __srget(struct __sFILE* );
int __svfscanf(struct __sFILE* , const char* , __darwin_va_list );
int __swbuf(int , struct __sFILE* );
void flockfile(struct __sFILE* );
int ftrylockfile(struct __sFILE* );
void funlockfile(struct __sFILE* );
int getc_unlocked(struct __sFILE* );
int getchar_unlocked();
int putc_unlocked(int , struct __sFILE* );
int putchar_unlocked(int );
int getw(struct __sFILE* );
int putw(int , struct __sFILE* );
char* tempnam(const char* __dir, const char* __prefix);
int fseeko(struct __sFILE* __stream, long long __offset, int __whence);
long long ftello(struct __sFILE* __stream);
int snprintf(char* __str, unsigned long  int __size, const char* __format, ...);
int vfscanf(struct __sFILE* __stream, const char* __format, __darwin_va_list );
int vscanf(const char* __format, __darwin_va_list );
int vsnprintf(char* __str, unsigned long  int __size, const char* __format, __darwin_va_list );
int vsscanf(const char* __str, const char* __format, __darwin_va_list );
int dprintf(int , const char* , ...);
int vdprintf(int , const char* , __darwin_va_list );
long getdelim(char** __linep, unsigned long  int* __linecapp, int __delimiter, struct __sFILE* __stream);
long getline(char** __linep, unsigned long  int* __linecapp, struct __sFILE* __stream);
struct __sFILE* fmemopen(void* __buf, unsigned long  int __size, const char* __mode);
struct __sFILE* open_memstream(char** __bufp, unsigned long  int* __sizep);
int asprintf(char** , const char* , ...);
char* ctermid_r(char* );
char* fgetln(struct __sFILE* , unsigned long  int* __len);
const char* fmtcheck(const char* , const char* );
int fpurge(struct __sFILE* );
void setbuffer(struct __sFILE* , char* , int __size);
int setlinebuf(struct __sFILE* );
int vasprintf(char** , const char* , __darwin_va_list );
struct __sFILE* funopen(const void* , int (*anonymous_lambda_var_nameZ1)(void*,char*,int), int (*anonymous_lambda_var_nameZ2)(void*,const char*,int), long long (*anonymous_lambda_var_nameZ3)(void*,long long,int), int (*anonymous_lambda_var_nameZ4)(void*));
void (*signal(int _function_pointer_result_var_name_a1, void (*_function_pointer_result_var_name_a2)(int)))(int);
int getpriority(int , unsigned int );
int getiopolicy_np(int , int );
int getrlimit(int , struct rlimit* );
int getrusage(int , struct rusage* );
int setpriority(int , unsigned int , int );
int setiopolicy_np(int , int , int );
int setrlimit(int , const struct rlimit* );
int wait(int* );
int waitpid(int , int* , int );
int waitid(enum anonymous_typeY1 , unsigned int , struct __siginfo* , int );
int wait3(int* , int , struct rusage* );
int wait4(int , int* , int , struct rusage* );
void* alloca(unsigned long  int __size);
void* malloc_type_malloc(unsigned long  int size, unsigned long  long type_id);
void* malloc_type_calloc(unsigned long  int count, unsigned long  int size, unsigned long  long type_id);
void malloc_type_free(void* ptr, unsigned long  long type_id);
void* malloc_type_realloc(void* ptr, unsigned long  int size, unsigned long  long type_id);
void* malloc_type_valloc(unsigned long  int size, unsigned long  long type_id);
void* malloc_type_aligned_alloc(unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id);
int malloc_type_posix_memalign(void** memptr, unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id);
void* malloc_type_zone_malloc(struct _malloc_zone_t* zone, unsigned long  int size, unsigned long  long type_id);
void* malloc_type_zone_calloc(struct _malloc_zone_t* zone, unsigned long  int count, unsigned long  int size, unsigned long  long type_id);
void malloc_type_zone_free(struct _malloc_zone_t* zone, void* ptr, unsigned long  long type_id);
void* malloc_type_zone_realloc(struct _malloc_zone_t* zone, void* ptr, unsigned long  int size, unsigned long  long type_id);
void* malloc_type_zone_valloc(struct _malloc_zone_t* zone, unsigned long  int size, unsigned long  long type_id);
void* malloc_type_zone_memalign(struct _malloc_zone_t* zone, unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id);
void* malloc(unsigned long  int __size);
void* calloc(unsigned long  int __count, unsigned long  int __size);
void free(void* );
void* realloc(void* __ptr, unsigned long  int __size);
void* reallocf(void* __ptr, unsigned long  int __size);
void* valloc(unsigned long  int __size);
void* aligned_alloc(unsigned long  int __alignment, unsigned long  int __size);
int posix_memalign(void** __memptr, unsigned long  int __alignment, unsigned long  int __size);
void abort();
int abs(int );
int atexit(void (*anonymous_lambda_var_nameZ6)());
int at_quick_exit(void (*anonymous_lambda_var_nameZ7)());
double atof(const char* );
int atoi(const char* );
long atol(const char* );
long long atoll(const char* );
void* bsearch(const void* __key, const void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
struct anonymous_typeX4 div(int , int );
void exit(int );
char* getenv(const char* );
long labs(long );
struct anonymous_typeX5 ldiv(long , long );
long long llabs(long  long );
struct anonymous_typeX6 lldiv(long  long , long  long );
int mblen(const char* __s, unsigned long  int __n);
unsigned long  int mbstowcs(int* , const char* , unsigned long  int __n);
int mbtowc(int* , const char* , unsigned long  int __n);
void qsort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
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
unsigned long  int wcstombs(char* , const int* , unsigned long  int __n);
int wctomb(char* , int );
void _Exit(int );
long a64l(const char* );
double drand48();
char* ecvt(double , int , int* , int* );
double erand48(unsigned short int [3]);
char* fcvt(double , int , int* , int* );
char* gcvt(double , int , char* );
int getsubopt(char** , char** , char** );
int grantpt(int );
char* initstate(unsigned int , char* , unsigned long  int __size);
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
int ptsname_r(int fildes, char* buffer, unsigned long  int buflen);
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
void arc4random_buf(void* __buf, unsigned long  int __nbytes);
void arc4random_stir();
unsigned int arc4random_uniform(unsigned int __upper_bound);
int atexit_b(void (*anonymous_lambda_var_nameZ8)());
void* bsearch_b(const void* __key, const void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*) __attribute__((__noescape__)));
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
char* devname(int , unsigned short int );
char* devname_r(int , unsigned short int , char* buf, int len);
char* getbsize(int* , long* );
int getloadavg(double [], int __nelem);
const char* getprogname();
void setprogname(const char* );
int heapsort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
int heapsort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*) __attribute__((__noescape__)));
int mergesort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
int mergesort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*) __attribute__((__noescape__)));
void psort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void psort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*) __attribute__((__noescape__)));
void psort_r(void* __base, unsigned long  int __nel, unsigned long  int __width, void* , int (*__compar)(void*,const void*,const void*));
void qsort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*) __attribute__((__noescape__)));
void qsort_r(void* __base, unsigned long  int __nel, unsigned long  int __width, void* , int (*__compar)(void*,const void*,const void*));
int radixsort(const unsigned char** __base, int __nel, const unsigned char* __table, unsigned int __endbyte);
int rpmatch(const char* );
int sradixsort(const unsigned char** __base, int __nel, const unsigned char* __table, unsigned int __endbyte);
void sranddev();
void srandomdev();
long long strtonum(const char* __numstr, long long __minval, long long __maxval, const char** __errstrp);
long long strtoq(const char* __str, char** __endptr, int __base);
unsigned long  long strtouq(const char* __str, char** __endptr, int __base);
void* memchr(const void* __s, int __c, unsigned long  int __n);
int memcmp(const void* __s1, const void* __s2, unsigned long  int __n);
void* memcpy(void* __dst, const void* __src, unsigned long  int __n);
void* memmove(void* __dst, const void* __src, unsigned long  int __len);
void* memset(void* __b, int __c, unsigned long  int __len);
char* strcat(char* __s1, const char* __s2);
char* strchr(const char* __s, int __c);
int strcmp(const char* __s1, const char* __s2);
int strcoll(const char* __s1, const char* __s2);
char* strcpy(char* __dst, const char* __src);
unsigned long  int strcspn(const char* __s, const char* __charset);
char* strerror(int __errnum);
unsigned long  int strlen(const char* __s);
char* strncat(char* __s1, const char* __s2, unsigned long  int __n);
int strncmp(const char* __s1, const char* __s2, unsigned long  int __n);
char* strncpy(char* __dst, const char* __src, unsigned long  int __n);
char* strpbrk(const char* __s, const char* __charset);
char* strrchr(const char* __s, int __c);
unsigned long  int strspn(const char* __s, const char* __charset);
char* strstr(const char* __big, const char* __little);
char* strtok(char* __str, const char* __sep);
unsigned long  int strxfrm(char* __s1, const char* __s2, unsigned long  int __n);
char* strtok_r(char* __str, const char* __sep, char** __lasts);
int strerror_r(int __errnum, char* __strerrbuf, unsigned long  int __buflen);
char* strdup(const char* __s1);
void* memccpy(void* __dst, const void* __src, int __c, unsigned long  int __n);
char* stpcpy(char* __dst, const char* __src);
char* stpncpy(char* __dst, const char* __src, unsigned long  int __n);
char* strndup(const char* __s1, unsigned long  int __n);
unsigned long  int strnlen(const char* __s1, unsigned long  int __n);
char* strsignal(int __sig);
void* memmem(const void* __big, unsigned long  int __big_len, const void* __little, unsigned long  int __little_len);
void memset_pattern4(void* __b, const void* __pattern4, unsigned long  int __len);
void memset_pattern8(void* __b, const void* __pattern8, unsigned long  int __len);
void memset_pattern16(void* __b, const void* __pattern16, unsigned long  int __len);
char* strcasestr(const char* __big, const char* __little);
char* strchrnul(const char* __s, int __c);
char* strnstr(const char* __big, const char* __little, unsigned long  int __len);
unsigned long  int strlcat(char* __dst, const char* __source, unsigned long  int __size);
unsigned long  int strlcpy(char* __dst, const char* __source, unsigned long  int __size);
void strmode(int __mode, char* __bp);
char* strsep(char** __stringp, const char* __delim);
void swab(const void* , void* , long __len);
int timingsafe_bcmp(const void* __b1, const void* __b2, unsigned long  int __len);
int strsignal_r(int __sig, char* __strsignalbuf, unsigned long  int __buflen);
int bcmp(const void* , const void* , unsigned long  int __n);
void bcopy(const void* , void* , unsigned long  int __n);
void bzero(void* , unsigned long  int __n);
char* index(const char* , int );
char* rindex(const char* , int );
int ffs(int );
int strcasecmp(const char* , const char* );
int strncasecmp(const char* , const char* , unsigned long  int );
int ffsl(long );
int ffsll(long  long );
int fls(int );
int flsl(long );
int flsll(long  long );
struct _xlocale* duplocale(struct _xlocale* );
int freelocale(struct _xlocale* );
struct _xlocale* newlocale(int , const char* , struct _xlocale* );
struct _xlocale* uselocale(struct _xlocale* );
struct lconv* localeconv();
char* setlocale(int , const char* );
int* __error();
int isalnum(int );
int isalpha(int );
int isblank(int );
int iscntrl(int );
int isdigit(int );
int isgraph(int );
int islower(int );
int isprint(int );
int ispunct(int );
int isspace(int );
int isupper(int );
int isxdigit(int );
int tolower(int );
int toupper(int );
int isascii(int );
int toascii(int );
int _tolower(int );
int _toupper(int );
int digittoint(int );
int ishexnumber(int );
int isideogram(int );
int isnumber(int );
int isphonogram(int );
int isrune(int );
int isspecial(int );
void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void come_save_stackframe(char* sname, int sline);
void stackframe();
char* come_get_stackframe();
void xassert(char* msg, _Bool test);
_Bool die(char* msg);
void come_heap_init(int come_debug);
void come_heap_final();
void* alloc_from_pages(unsigned long  int size);
void come_free_mem_of_heap_pool(void* mem);
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name);
void come_print_heap_info(void* mem);
char* come_dynamic_typeof(void* mem);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
int come_get_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj);
char* __builtin_string(char* str);
void come_push_stackframe_v2(char* sname, int sline, int id);
void come_pop_stackframe_v2();
void come_save_stackframe_v2(char* sname, int sline);
void stackframe_v2();
char* come_get_stackframe_v2();
void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_v2(void* mem);
struct buffer* buffer_initialize(struct buffer* self);
struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size);
void buffer_finalize(struct buffer* self);
struct buffer* buffer_clone(struct buffer* self);
_Bool buffer_equals(struct buffer* left, struct buffer* right);
int buffer_length(struct buffer* self);
void buffer_reset(struct buffer* self);
void buffer_trim(struct buffer* self, int len);
struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long  int size);
struct buffer* buffer_append_char(struct buffer* self, char c);
struct buffer* buffer_append_str(struct buffer* self, char* mem);
struct buffer* buffer_append_format(struct buffer* self, char* msg, ...);
struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem);
struct buffer* buffer_append_int(struct buffer* self, int value);
struct buffer* buffer_append_long(struct buffer* self, long value);
struct buffer* buffer_append_short(struct buffer* self, short value);
struct buffer* buffer_alignment(struct buffer* self);
int buffer_compare(struct buffer* left, struct buffer* right);
struct buffer* charp_to_buffer(char* self);
char* buffer_to_string(struct buffer* self);
unsigned char* buffer_head_pointer(struct buffer* self);
struct buffer* chara_to_buffer(char* self, unsigned long  int len);
struct buffer* charpa_to_buffer(char** self, unsigned long  int len);
struct buffer* shorta_to_buffer(short* self, unsigned long  int len);
struct buffer* inta_to_buffer(int* self, unsigned long  int len);
struct buffer* longa_to_buffer(long* self, unsigned long  int len);
struct buffer* floata_to_buffer(float* self, unsigned long  int len);
struct buffer* doublea_to_buffer(double* self, unsigned long  int len);
char* buffer_printable(struct buffer* self);
struct list$1char$* chara_to_list(char* self, unsigned long  int len);
struct list$1char$p* charpa_to_list(char** self, unsigned long  int len);
struct list$1short$* shorta_to_list(short* self, unsigned long  int len);
struct list$1int$* inta_to_list(int* self, unsigned long  int len);
struct list$1long$* longa_to_list(long* self, unsigned long  int len);
struct list$1float$* floata_to_list(float* self, unsigned long  int len);
struct list$1double$* doublea_to_list(double* self, unsigned long  int len);
_Bool bool_equals(_Bool self, _Bool right);
_Bool _Bool_equals(_Bool self, _Bool right);
_Bool char_equals(char self, char right);
_Bool short_equals(short self, short right);
_Bool int_equals(int self, int right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(unsigned long  int self, unsigned long  int right);
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
_Bool bool_operator_equals(_Bool self, _Bool right);
_Bool _Bool_operator_equals(_Bool self, _Bool right);
_Bool char_operator_equals(char self, char right);
_Bool short_operator_equals(short self, short right);
_Bool int_operator_equals(int self, int right);
_Bool long_operator_equals(long self, long right);
_Bool bool_operator_not_equals(_Bool self, _Bool right);
_Bool _Bool_operator_not_equals(_Bool self, _Bool right);
_Bool char_operator_not_equals(char self, char right);
_Bool short_operator_not_equals(short self, short right);
_Bool int_operator_not_equals(int self, int right);
_Bool long_operator_not_equals(long self, long right);
_Bool charp_equals(char* self, char* right);
_Bool string_equals(char* self, char* right);
_Bool voidp_equals(void* self, void* right);
_Bool boolp_equals(_Bool* self, _Bool* right);
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
_Bool charpa_contained(char** self, unsigned long  int len, char* str);
unsigned long  int shorta_length(short* self, unsigned long  int len);
unsigned long  int inta_length(int* self, unsigned long  int len);
unsigned long  int longa_length(long* self, unsigned long  int len);
unsigned long  int floata_length(float* self, unsigned long  int len);
unsigned long  int doublea_length(double* self, unsigned long  int len);
unsigned int bool_get_hash_key(_Bool value);
unsigned int _Bool_get_hash_key(_Bool value);
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short int value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(unsigned long  int value);
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int charp_get_hash_key(char* value);
unsigned int string_get_hash_key(char* value);
unsigned int voidp_get_hash_key(void* value);
_Bool bool_clone(_Bool self);
_Bool _Bool_clone(_Bool self);
char char_clone(char self);
short int short_clone(short self);
int int_clone(int self);
long  int long_clone(long self);
unsigned long  int size_t_clone(unsigned long  int self);
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
struct list$1char$ph* charp_split_char(char* self, char c);
char* charp_xsprintf(char* self, char* msg, ...);
char* int_xsprintf(int self, char* msg, ...);
char* charp_printable(char* str);
char* chara_printable(char* str);
char* charp_sub_plain(char* self, char* str, char* replace);
char* xbasename(char* path);
char* xnoextname(char* path);
char* xextname(char* path);
char* bool_to_string(_Bool self);
char* _Bool_to_string(_Bool self);
char* char_to_string(char self);
char* short_to_string(short self);
char* int_to_string(int self);
char* long_to_string(long self);
char* size_t_to_string(unsigned long  int self);
char* float_to_string(float self);
char* double_to_string(double self);
char* string_to_string(char* self);
char* charp_to_string(char* self);
int bool_compare(_Bool left, _Bool right);
int _Bool_compare(_Bool left, _Bool right);
int char_compare(char left, char right);
int short_compare(short left, short right);
int int_compare(int left, int right);
int long_compare(long left, long right);
int size_t_compare(unsigned long  int left, unsigned long  int right);
int float_compare(float left, float right);
int double_compare(double left, double right);
int string_compare(char* left, char* right);
int charp_compare(char* left, char* right);
char* charp_puts(char* self);
char* charp_print(char* self);
char* charp_printf(char* self, ...);
int int_printf(int self, char* msg);
int assert_v2(int exp);
void int_times(int self, void* parent, void (*block)(void*,int));
int re_matchp(struct re_program* pattern, const char* text, int* matchlength, struct re_capture* captures, int max_captures);
int re_match(const char* pattern, const char* text, int* matchlength);
struct re_program* re_compile(const char* pattern);
void re_print(struct re_program* pattern);
void clear_captures(struct anonymous_typeX16* ctx);
void snapshot_captures(const struct anonymous_typeX16* ctx, struct re_capture* buffer_);
void restore_captures(struct anonymous_typeX16* ctx, const struct re_capture* buffer_);
struct regex_t* new_token(struct anonymous_typeX15* st);
int append_token(struct regex_t** head, struct regex_t** tail, struct regex_t* token);
struct regex_t* compile_sequence(struct anonymous_typeX15* st, const char* pattern, int* pos, int in_group);
const char* matchpattern(struct regex_t* pattern, const char* text, struct anonymous_typeX16* ctx);
const char* matchgroup(struct regex_t* token, struct regex_t* rest, const char* text, struct anonymous_typeX16* ctx);
const char* matchstar(struct regex_t* token, struct regex_t* rest, const char* text, struct anonymous_typeX16* ctx);
const char* matchplus(struct regex_t* token, struct regex_t* rest, const char* text, struct anonymous_typeX16* ctx);
const char* matchquestion(struct regex_t* token, struct regex_t* rest, const char* text, struct anonymous_typeX16* ctx);
const char* matchtoken(struct regex_t* token, const char* text, struct anonymous_typeX16* ctx);
int matchdigit(char c);
int matchalpha(char c);
int matchwhitespace(char c);
int matchalphanum(char c);
int matchrange(char c, const char* str);
int matchdot(char c);
int ismetachar(char c);
int matchmetachar(char c, const char* str);
int matchcharclass(char c, const char* str);
void re_print_internal(struct regex_t* pattern, int depth);
int re_get_group_count(struct re_program* pattern);
int charp_index_regex(char* self, char* reg, int default_value);
int charp_rindex_regex(char* self, char* reg, int default_value);
char* string_chomp(char* str);
int string_rindex_regex(char* self, char* reg, int default_value);
int string_index_regex(char* self, char* reg, int default_value);
_Bool charp_match(char* self, char* reg);
struct list$1char$ph* charp_scan(char* self, char* reg);
struct list$1char$ph* charp_split(char* self, char* reg);
char* string_sub(char* self, char* reg, char* replace);
struct list$1char$ph* string_scan(char* self, char* reg);
struct list$1char$ph* string_split(char* self, char* reg);
_Bool string_match(char* self, char* reg);
char* charp_sub(char* self, char* reg, char* replace);
char* charp_sub_block(char* self, char* reg, void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
struct list$1char$ph* charp_scan_block(char* self, char* reg, void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
char* string_sub_block(char* self, char* reg, void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
char* asctime(const struct tm* );
unsigned long  int clock();
char* ctime(const long* );
double difftime(long , long );
struct tm* getdate(const char* );
struct tm* gmtime(const long* );
struct tm* localtime(const long* );
long mktime(struct tm* );
unsigned long  int strftime(char* , unsigned long  int __maxsize, const char* , const struct tm* );
char* strptime(const char* , const char* , struct tm* );
long time(long* );
void tzset();
char* asctime_r(const struct tm* , char* );
char* ctime_r(const long* , char* );
struct tm* gmtime_r(const long* , struct tm* );
struct tm* localtime_r(const long* , struct tm* );
long posix2time(long );
void tzsetwall();
long time2posix(long );
long timelocal(struct tm* );
long timegm(struct tm* );
int nanosleep(const struct timespec* __rqtp, struct timespec* __rmtp);
int clock_getres(enum anonymous_typeY16 __clock_id, struct timespec* __res);
int clock_gettime(enum anonymous_typeY16 __clock_id, struct timespec* __tp);
unsigned long  long clock_gettime_nsec_np(enum anonymous_typeY16 __clock_id);
int clock_settime(enum anonymous_typeY16 __clock_id, const struct timespec* __tp);
int timespec_get(struct timespec* ts, int base);
int iswalnum(int );
int iswalpha(int );
int iswcntrl(int );
int iswctype(int , unsigned int );
int iswdigit(int );
int iswgraph(int );
int iswlower(int );
int iswprint(int );
int iswpunct(int );
int iswspace(int );
int iswupper(int );
int iswxdigit(int );
int towlower(int );
int towupper(int );
unsigned int wctype(const char* );
int btowc(int );
int fgetwc(struct __sFILE* );
int* fgetws(int* , int __n, struct __sFILE* );
int fputwc(int , struct __sFILE* );
int fputws(const int* , struct __sFILE* );
int fwide(struct __sFILE* , int );
int fwprintf(struct __sFILE* , const int* , ...);
int fwscanf(struct __sFILE* , const int* , ...);
int getwc(struct __sFILE* );
int getwchar();
unsigned long  int mbrlen(const char* , unsigned long  int __n, union anonymous_typeZ1* );
unsigned long  int mbrtowc(int* , const char* , unsigned long  int __n, union anonymous_typeZ1* );
int mbsinit(const union anonymous_typeZ1* );
unsigned long  int mbsrtowcs(int* , const char** , unsigned long  int __len, union anonymous_typeZ1* );
int putwc(int , struct __sFILE* );
int putwchar(int );
int swprintf(int* , unsigned long  int __maxlen, const int* , ...);
int swscanf(const int* , const int* , ...);
int ungetwc(int , struct __sFILE* );
int vfwprintf(struct __sFILE* , const int* , __darwin_va_list );
int vswprintf(int* , unsigned long  int __maxlen, const int* , __darwin_va_list );
int vwprintf(const int* , __darwin_va_list );
unsigned long  int wcrtomb(char* , int , union anonymous_typeZ1* );
int* wcscat(int* , const int* );
int* wcschr(const int* , int );
int wcscmp(const int* , const int* );
int wcscoll(const int* , const int* );
int* wcscpy(int* , const int* );
unsigned long  int wcscspn(const int* , const int* );
unsigned long  int wcsftime(int* , unsigned long  int __maxlen, const int* , const struct tm* );
unsigned long  int wcslen(const int* );
int* wcsncat(int* , const int* , unsigned long  int __n);
int wcsncmp(const int* , const int* , unsigned long  int );
int* wcsncpy(int* , const int* , unsigned long  int __n);
int* wcspbrk(const int* , const int* );
int* wcsrchr(const int* , int );
unsigned long  int wcsrtombs(char* , const int** , unsigned long  int __len, union anonymous_typeZ1* );
unsigned long  int wcsspn(const int* , const int* );
int* wcsstr(const int* , const int* );
unsigned long  int wcsxfrm(int* , const int* , unsigned long  int __n);
int wctob(int );
double wcstod(const int* , int** );
int* wcstok(int* , const int* , int** );
long wcstol(const int* , int** , int );
unsigned long  int wcstoul(const int* , int** , int );
int* wmemchr(const int* , int , unsigned long  int __n);
int wmemcmp(const int* , const int* , unsigned long  int __n);
int* wmemcpy(int* , const int* , unsigned long  int __n);
int* wmemmove(int* , const int* , unsigned long  int __n);
int* wmemset(int* , int , unsigned long  int __n);
int wprintf(const int* , ...);
int wscanf(const int* , ...);
int wcswidth(const int* , unsigned long  int __n);
int wcwidth(int );
int vfwscanf(struct __sFILE* , const int* , __darwin_va_list );
int vswscanf(const int* , const int* , __darwin_va_list );
int vwscanf(const int* , __darwin_va_list );
float wcstof(const int* , int** );
long  double wcstold(const int* , int** );
long long wcstoll(const int* , int** , int );
unsigned long  long wcstoull(const int* , int** , int );
unsigned long  int mbsnrtowcs(int* , const char** , unsigned long  int , unsigned long  int __len, union anonymous_typeZ1* );
int* wcpcpy(int* , const int* );
int* wcpncpy(int* , const int* , unsigned long  int __n);
int* wcsdup(const int* );
int wcscasecmp(const int* , const int* );
int wcsncasecmp(const int* , const int* , unsigned long  int n);
unsigned long  int wcsnlen(const int* , unsigned long  int __n);
unsigned long  int wcsnrtombs(char* , const int** , unsigned long  int , unsigned long  int __len, union anonymous_typeZ1* );
struct __sFILE* open_wmemstream(int** __bufp, unsigned long  int* __sizep);
int* fgetwln(struct __sFILE* , unsigned long  int* __len);
unsigned long  int wcslcat(int* , const int* , unsigned long  int __len);
unsigned long  int wcslcpy(int* , const int* , unsigned long  int __len);
char* basename(char* );
char* dirname(char* );
char* basename_r(const char* , char* );
char* dirname_r(const char* , char* );
int* __builtin_wstring(char* str);
int wchar_tp_length(int* str);
int wchar_ta_length(int* str);
int wstring_length(int* str);
char* string_lower_case(char* str);
char* string_upper_case(char* str);
int* wchar_tp_substring(int* str, int head, int tail);
int charp_index_count(char* str, char* search_str, int count, int default_value);
int charp_rindex(char* str, char* search_str, int default_value);
int charp_rindex_count(char* str, char* search_str, int count, int default_value);
char* charp_strip(char* self);
char* wchar_tp_to_string(int* wstr);
char* wchar_ta_to_string(int* wstr);
int* charp_to_wstring(char* str);
int* chara_to_wstring(char* str);
int* wchar_tp_delete(int* str, int head, int tail);
int wchar_tp_index(int* str, int* search_str, int default_value);
int wchar_tp_rindex(int* str, int* search_str, int default_value);
int* wchar_tp_reverse(int* str);
int* wchar_tp_multiply(int* str, int n);
int* wchar_tp_printable(int* str);
int wchar_tp_compare(int* left, int* right);
int wstring_compare(int* left, int* right);
int* wchar_tp_operator_mult(int* str, int n);
int* wstring_operator_mult(int* str, int n);
_Bool wstring_operator_equals(int* left, int* right);
_Bool wstring_operator_not_equals(int* left, int* right);
int* wchar_tp_operator_add(int* left, int* right);
int* wstring_operator_add(int* left, int* right);
int charp_index(char* str, char* search_str, int default_value);
char* charp_replace(char* self, int index, char c);
char* charp_multiply(char* str, int n);
struct list$1char$ph* charp_split_str(char* self, char* str);
unsigned int wchar_tp_get_hash_key(int* value);
_Bool wstring_equals(int* left, int* right);
_Bool wchar_t_operator_equals(int left, int right);
_Bool wchar_t_operator_not_equals(int left, int right);
unsigned int wchar_t_get_hash_key(int value);
_Bool wchar_t_equals(int left, int right);
char* wchar_t_to_string(int wc);
char* xrealpath(char* path);
char* xdirname(char* path);
unsigned long  int xwcslen(int* wstr);
int* wstring_substring(int* str, int head, int tail);
int string_index_count(char* str, char* search_str, int count, int default_value);
int string_rindex(char* str, char* search_str, int default_value);
int string_rindex_count(char* str, char* search_str, int count, int default_value);
char* string_strip(char* self);
char* wstring_to_string(int* wstr);
int* int_to_wstring(int self);
int* wstring_delete(int* str, int head, int tail);
int wstring_index(int* str, int* search_str, int default_value);
int wstring_rindex(int* str, int* search_str, int default_value);
int* wstring_reverse(int* str);
int* wstring_multiply(int* str, int n);
int* wstring_printable(int* str);
unsigned int wstring_get_hash_key(int* value);
int string_index(char* str, char* search_str, int default_value);
char* string_replace(char* self, int index, char c);
char* string_multiply(char* str, int n);
struct list$1char$ph* string_split_str(char* self, char* str);
int* string_to_wstring(char* str);
char* charp_chomp(char* str);
_Bool wchar_tp_equals(int* left, int* right);
_Bool wchar_tp_operator_equals(int* left, int* right);
_Bool wchar_tp_operator_not_equals(int* left, int* right);
char* FILE_read(struct __sFILE* f);
int FILE_write(struct __sFILE* f, char* str);
int FILE_fclose(struct __sFILE* f);
struct __sFILE* FILE_fprintf(struct __sFILE* f, const char* msg, ...);
int charp_write(char* self, char* file_name, _Bool append);
char* charp_read(char* file_name);
struct list$1char$ph* FILE_readlines(struct __sFILE* f);
_Bool xiswalpha(int c);
_Bool xiswblank(int c);
_Bool xiswdigit(int c);
_Bool xiswalnum(int c);
_Bool xiswascii(int c);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, _Bool uniq_, _Bool typename, struct sInfo* info);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute, _Bool const_fun, char* text_block, char* generics_sname, int generics_sline, _Bool immutable_);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline, _Bool const_fun);
struct CVALUE* CVALUE_initialize(struct CVALUE* self);
struct sModule* sModule_initialize(struct sModule* self);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
void sVarTable_finalize(struct sVarTable* self);
struct sBlock* sBlock_initialize(struct sBlock* self);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo* info);
_Bool sNodeBase_terminated(struct sNodeBase* self);
_Bool sNodeBase_no_mutex(struct sNodeBase* self);
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);
struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info);
int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_kind(struct sCurrentNode* self);
_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info);
_Bool transpile_conditional_with_free_right_object_value(struct sNode* node, struct sInfo* info);
int err_msg(struct sInfo* info, char* msg, ...);
int expected_next_character(char c, struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_conditional_compile(struct sNode* node, struct sInfo* info);
int come_main(int argc, char** argv);
char* make_type_name_string(struct sType* type, struct sInfo* info, _Bool no_static, _Bool cast_type, _Bool typedef_extended);
char* make_come_type_name_string(struct sType* type, struct sInfo* info);
char* make_come_define_var(struct sType* type, char* name, struct sInfo* info);
char* header_function(struct sFun* fun, struct sInfo* info);
_Bool output_source_file(struct sInfo* info);
void show_type(struct sType* type, struct sInfo* info);
void add_last_code_to_source(struct sInfo* info);
void add_come_code_at_function_head(struct sInfo* info, char* code, ...);
void add_come_code_at_come_header(struct sInfo* info, char* id, const char* msg, ...);
void add_come_code_at_come_struct_header(struct sInfo* info, char* id, const char* msg, ...);
void add_come_code_at_function_head2(struct sInfo* info, char* code, ...);
void add_come_code(struct sInfo* info, const char* msg, ...);
void add_come_last_code(struct sInfo* info, const char* msg, ...);
void add_come_last_code2(struct sInfo* info, const char* msg, ...);
void dec_stack_ptr(int value, struct sInfo* info);
struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);
char* make_define_var(struct sType* type, char* name, struct sInfo* info, _Bool no_static, _Bool in_typedef);
char* make_var_name(struct sType* type, char* name, struct sInfo* info, _Bool no_static);
void transpiler_clear_last_code(struct sInfo* info);
_Bool output_header_file(struct sInfo* info);
void on_drop_object(struct sType* type, char* obj, struct sInfo* info);
void on_load_object(struct sType* type, char* obj, struct sInfo* info);
struct sType* solve_method_generics(struct sType* type, struct sInfo* info);
_Bool existance_free_right_value_objects(struct sInfo* info);
_Bool existance_free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info);
char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info);
_Bool create_equals_method(struct sType* type, struct sInfo* info);
_Bool create_operator_equals_method(struct sType* type, struct sInfo* info);
_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info);
struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info);
struct sVar* get_variable_from_table(struct sVarTable* table, char* name);
void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
void free_objects_of_match_lv_tables(struct sInfo* info);
void free_objects_on_break(struct sInfo* info);
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool ret_value);
struct tuple2$2sType$phchar$ph* clone_object(struct sType* type, char* obj, struct sInfo* info);
void free_right_value_objects(struct sInfo* info);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
void append_object_to_right_values(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count, struct sType* obj_type, char* obj_value, struct sVar* obj_var);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool no_free);
void transpile_toplevel(_Bool block, struct sInfo* info);
struct sNode* reverse_node(struct sNode* value, struct sInfo* info);
struct sFun* compile_uniq_function(struct sFun* fun, struct sInfo* info);
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct sNode* node, struct CVALUE* left_value, struct sInfo* info);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info, _Bool parse_function_attribute);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(char* value, struct sInfo* info);
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFun$pchar$ph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info);
char* skip_block(struct sInfo* info, _Bool return_self_at_last);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* p2, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sType$phchar$ph* parse_variable_name_on_multiple_declare(struct sType* base_type_name, _Bool first, struct sInfo* info);
struct sBlock* parse_block(struct sInfo* info, _Bool return_self_at_last, _Bool in_function);
int transpile_block(struct sBlock* block, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block);
void arrange_stack(struct sInfo* info, int top);
struct sNode* parse_function(struct sInfo* info);
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* expression_node_v99(struct sInfo* info);
struct sNode* expression_node_v97(struct sInfo* info);
int transpile(struct sInfo* info);
void parse_sharp_v5(struct sInfo* info);
struct sNode* create_null_value(struct sType* type, struct sInfo* info);
struct sNode* create_null_return_value(struct sInfo* info);
struct sNode* create_some(struct sNode* exp, struct sInfo* info);
struct sNode* expression_node_v96(struct sInfo* info);
struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple);
struct sNode* parse_some(struct sInfo* info);
struct sNode* parse_none(struct sInfo* info);
_Bool is_inner_calling(struct sNode* node, struct sInfo* info);
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info);
struct sNode* expression_node_v95(struct sInfo* info);
struct sNode* store_var(char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info);
struct sNode* create_load_var(char* var_name, struct sInfo* info);
struct sNode* parse_array_initializer(struct sInfo* info);
struct sNode* parse_struct_initializer(struct sInfo* info);
struct sNode* parse_global_variable(struct sInfo* info);
struct sNode* load_var(char* name, struct sInfo* info);
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info, _Bool function_param, _Bool comma);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);
void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);
struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info);
struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_less_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info);
struct sNode* string_node_v9(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v10(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v11(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v12(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_comma_exp(struct sNode* node, struct sNode* node2, struct sInfo* info);
struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo* info);
struct sNode* create_null_node(struct sInfo* info);
struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info);
_Bool operator_overload_fun(struct sType* type, char* fun_name, struct sNode* left_node, struct sNode* right_node, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);
struct sNode* expression_v13(struct sInfo* info, _Bool type_name_exp);
struct sNode* post_op_v13(struct sNode* node, struct sInfo* info);
struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);
void child_output_struct(struct sType* type, char* struct_name, struct buffer* buf, _Bool* existance_generics, char* name, int indent, struct sInfo* info);
char* parse_struct_attribute(struct sInfo* info);
struct sNode* create_nothing_node(struct sInfo* info);
_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info);
_Bool is_contained_generics_types(struct sType* type, struct sInfo* info);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_struct(char* type_name, char* struct_attribute, struct sInfo* info);
struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);
_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);
void output_struct(struct sClass* klass, char* pragma, struct sInfo* info);
struct sNode* string_node_v15(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_union(char* type_name, char* union_attribute, struct sInfo* info);
struct sNode* top_level_v97(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v16(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_enum(char* type_name, char* attribute, struct sInfo* info);
struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v95(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v17(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_nullable_node(struct sNode* left, struct sInfo* info);
struct sNode* load_field(struct sNode* left, char* name, struct sInfo* info);
struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);
struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info);
struct tuple3$3char$phsFun$psGenericsFun$p* get_method(char* fun_name, struct sType* obj_type, struct sInfo* info);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo* info, _Bool no_err);
struct sNode* create_guard_break_method_call(struct sNode* expression_node, struct sInfo* info);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUE$ph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_implements(struct sNode* node, struct sType* inf_type, struct sInfo* info);
struct sNode* create_object(struct sType* type, struct sInfo* info);
struct sNode* create_true_object(struct sInfo* info);
struct sNode* create_false_object(struct sInfo* info);
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);
struct tuple4$4char$phchar$phchar$phchar$ph* create_vtable(struct sType* any_type, struct sInfo* info);
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo* info);
struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info);
_Bool sNothingNode_terminated(struct sNothingNode* self);
char* sNothingNode_kind(struct sNothingNode* self);
_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info);
int poll(struct pollfd* , unsigned int , int );
struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info);
char* sReturnNode_kind(struct sReturnNode* self);
_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sReturnNode_finalize(struct sReturnNode* self);
static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
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
static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item);
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
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self);
static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self);
static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar* self);
static void list$1sVar$ph_finalize(struct list$1sVar$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self);
struct sCSourceNode* sCSourceNode_initialize(struct sCSourceNode* self, char* contents, struct sInfo* info);
char* sCSourceNode_kind(struct sCSourceNode* self);
_Bool sCSourceNode_compile(struct sCSourceNode* self, struct sInfo* info);
static void sCSourceNode_finalize(struct sCSourceNode* self);
struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char* source, struct list$1sNode$ph* exps, struct sInfo* info);
char* sInlineAssembler_kind(struct sInlineAssembler* self);
_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info);
static void sInlineAssembler_finalize(struct sInlineAssembler* self);
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info);
char* sLineNode_kind(struct sLineNode* self);
_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info);
static void sLineNode_finalize(struct sLineNode* self);
struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info);
char* sSNameNode_kind(struct sSNameNode* self);
_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info);
static void sSNameNode_finalize(struct sSNameNode* self);
struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info);
char* sFuncNode_kind(struct sFuncNode* self);
_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info);
static void sFuncNode_finalize(struct sFuncNode* self);
struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info);
char* sCallerFuncNode_kind(struct sCallerFuncNode* self);
_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info);
static void sCallerFuncNode_finalize(struct sCallerFuncNode* self);
struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info);
_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info);
char* sCallerLineNode_kind(struct sCallerLineNode* self);
static void sCallerLineNode_finalize(struct sCallerLineNode* self);
struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info);
_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info);
char* sCallerSNameNode_kind(struct sCallerSNameNode* self);
static void sCallerSNameNode_finalize(struct sCallerSNameNode* self);
struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
char* sFunCallNode_kind(struct sFunCallNode* self);
_Bool sFunCallNode_terminated(struct sFunCallNode* self);
_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void sFunCallNode_finalize(struct sFunCallNode* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static int list$1char$ph_length(struct list$1char$ph* self);
static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position);
static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char* key);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
static void sCurrentNode_finalize(struct sCurrentNode* self);
static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info);
char* sComeCallNode_kind(struct sComeCallNode* self);
_Bool sComeCallNode_terminated(struct sComeCallNode* self);
_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info);
static void sComeCallNode_finalize(struct sComeCallNode* self);
static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value);
struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info);
char* sComeJoinNode_kind(struct sComeJoinNode* self);
_Bool sComeJoinNode_terminated(struct sComeJoinNode* self);
_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info);
static void sComeJoinNode_finalize(struct sComeJoinNode* self);
struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNode$ph* vars, struct list$1sBlock$ph* blocks, struct sBlock* else_block, int time_out, struct sInfo* info);
char* sComePollNode_kind(struct sComePollNode* self);
_Bool sComePollNode_terminated(struct sComePollNode* self);
_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info);
static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self);
static void list_item$1sBlock$ph$p_finalize(struct list_item$1sBlock$ph* self);
static void sComePollNode_finalize(struct sComePollNode* self);
static void list$1sBlock$ph$p_finalize(struct list$1sBlock$ph* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position);
static struct sBlock* list$1sBlock$ph_operator_load_element(struct list$1sBlock$ph* self, int position);
struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2char$phsNode$ph$ph* params, struct sInfo* info);
char* sLambdaCall_kind(struct sLambdaCall* self);
_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info);
static void sLambdaCall_finalize(struct sLambdaCall* self);
struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info);
char* sVarArgTypeName_kind(struct sVarArgTypeName* self);
_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info);
static void sVarArgTypeName_finalize(struct sVarArgTypeName* self);
struct sInnerAttribute* sInnerAttribute_initialize(struct sInnerAttribute* self, char* attr, struct sInfo* info);
char* sInnerAttribute_kind(struct sInnerAttribute* self);
_Bool sInnerAttribute_compile(struct sInnerAttribute* self, struct sInfo* info);
static void sInnerAttribute_finalize(struct sInnerAttribute* self);
struct sNode* parse_function_call(char* fun_name, struct sInfo* info, _Bool come_);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2);
static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self);
struct sNode* expression_node_v1(struct sInfo* info);
char* parse_inner_attribute(struct sInfo* info);
struct sNode* expression_node_v98(struct sInfo* info);
static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key);
static struct sVar* map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char* key);
static struct sInnerAttribute* sInnerAttribute_clone(struct sInnerAttribute* self);
static struct sCSourceNode* sCSourceNode_clone(struct sCSourceNode* self);
static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self);
static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self);
static struct list$1sBlock$ph* list$1sBlock$ph_initialize(struct list$1sBlock$ph* self);
static struct list$1sBlock$ph* list$1sBlock$ph_add(struct list$1sBlock$ph* self, struct sBlock* item);
static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self);
static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_clone(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item);
static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
static struct sVar* sVar_clone(struct sVar* self);
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self);
static struct sLineNode* sLineNode_clone(struct sLineNode* self);
static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self);
static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self);
static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self);
static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self);
static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self);
static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self);
static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key);
static struct sType* map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char* key);
struct sNode* expression_v5(struct sInfo* info);
static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info);
struct sNode* statment(struct sInfo* info);
char* get_none_generics_name(char* class_name);
char* create_generics_name(struct sType* generics_type, struct sInfo* info);
char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_using_class(struct sClass* obj_class, char* fun_name, struct sInfo* info);
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self);
// uniq global variable
// inline function

// body function
struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNode* __dec_obj1;
char* __dec_obj2;
struct sReturnNode* __result_obj__1;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj1=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj1 ? __dec_obj1 = come_decrement_ref_count(__dec_obj1, ((struct sNode*)__dec_obj1)->finalize, ((struct sNode*)__dec_obj1)->_protocol_obj, 0,0, (void*)0) :0);
    __right_value0 = (void*)0;
    __dec_obj2=self->value_source,
    self->value_source=(char*)come_increment_ref_count((char*)come_memdup(value_source, "05call.c", 14, "char*"));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__1 = (struct sReturnNode*)come_increment_ref_count(self);
    come_call_finalizer(sReturnNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    (value_source = come_decrement_ref_count(value_source, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sReturnNode_finalize, __result_obj__1, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__1;
}

char* sReturnNode_kind(struct sReturnNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__2;
    __result_obj__2 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sReturnNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__2 = come_decrement_ref_count(__result_obj__2, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__2;
}

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info){
struct sFun* come_fun;
void* __right_value0 = (void*)0;
struct sType* result_type;
struct sType* result_type2;
struct sType* __dec_obj34;
struct sType* result_type3;
_Bool Value;
_Bool __result_obj__23;
struct CVALUE* come_value;
struct sType* come_value_type;
struct sType* __dec_obj35;
void* __right_value1 = (void*)0;
void* __right_value2 = (void*)0;
char* type_name;
struct list$1sVar$ph* o2_saved;
struct sVar* it;
struct list$1sVar$ph* __dec_obj36;
struct sFun* come_fun_10;
struct list$1sVar$ph* o2_saved_11;
struct sVar* it_12;
struct list$1sVar$ph* __dec_obj37;
    if(    self->value    ) {
        come_fun=info->come_fun;
        result_type=(struct sType*)come_increment_ref_count(sType_clone(come_fun->mResultType));
        __right_value0 = (void*)0;
        result_type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(result_type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        __right_value0 = (void*)0;
        __dec_obj34=result_type2,
        result_type2=(struct sType*)come_increment_ref_count(solve_method_generics(result_type2,info));
        come_call_finalizer(sType_finalize, __dec_obj34,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        result_type3=result_type2->mNoSolvedGenericsType;
        if(        result_type2->mNoSolvedGenericsType        ) {
            result_type3=result_type2->mNoSolvedGenericsType;
        }
        else {
            result_type3=result_type2;
        }
        Value=node_compile(self->value,info);
        if(        !Value        ) {
            __result_obj__23 = (_Bool)0;
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__23;
        }
        else {
        }
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __right_value0 = (void*)0;
        come_value_type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        __right_value0 = (void*)0;
        __dec_obj35=info->function_result_type,
        info->function_result_type=(struct sType*)come_increment_ref_count(sType_clone(come_value->type));
        come_call_finalizer(sType_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(        gComeC        ) {
            add_come_code(info,"return %s;\n",come_value->c_value);
        }
        else if(        string_operator_not_equals(info->come_fun->mName,"main")&&info->come_fun->mNoResultType&&!existance_free_objects_on_return(come_fun->mBlock,info,come_value->var,(_Bool)0)&&!existance_free_right_value_objects(info)        ) {
            add_come_code(info,"return %s;\n",come_value->c_value);
        }
        else {
            static int result_num=0;
            result_num++;
            __right_value0 = (void*)0;
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value2=make_define_var(result_type2,((char*)(__right_value1=xsprintf("__result_obj__\%s",((char*)(__right_value0=int_to_string(result_num)))))),info,(_Bool)0,(_Bool)0))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
            if(            !info->come_fun->mNoResultType            ) {
                if(                !gComeC||!(strlen(result_type2->mClass->mName)>strlen("tuple")&&memcmp(result_type2->mClass->mName,"tuple",strlen("tuple"))==0)                ) {
                    check_assign_type("result type",result_type2,come_value_type,come_value,(_Bool)0,(_Bool)1,(_Bool)1,info);
                }
                if(                result_type2->mHeap                ) {
                    __right_value0 = (void*)0;
                    type_name=(char*)come_increment_ref_count(make_type_name_string(result_type2,info,(_Bool)0,(_Bool)0,(_Bool)0));
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    add_come_code(info,((char*)(__right_value1=xsprintf("__result_obj__\%s = (%%s)come_increment_ref_count(%%s);\n",((char*)(__right_value0=int_to_string(result_num)))))),type_name,come_value->c_value);
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                }
                else {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    add_come_code(info,((char*)(__right_value1=xsprintf("__result_obj__\%s = %%s;\n",((char*)(__right_value0=int_to_string(result_num)))))),come_value->c_value);
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                }
            }
            else {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                add_come_code(info,((char*)(__right_value1=xsprintf("__result_obj__\%s = %%s;\n",((char*)(__right_value0=int_to_string(result_num)))))),come_value->c_value);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            add_last_code_to_source(info);
            free_objects_on_return(come_fun->mBlock,info,come_value->var,(_Bool)0);
            free_right_value_objects(info);
            if(            info->block_level==1            ) {
                info->inhibits_output_code=(_Bool)1;
                if(                info->match_it_var                ) {
                    for(                    o2_saved=(struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var),it=list$1sVar$ph_begin(o2_saved)                    ;                    !list$1sVar$ph_end(o2_saved)                    ;                    it=list$1sVar$ph_next(o2_saved)                    ){
                        __right_value0 = (void*)0;
                        free_object((struct sType*)come_increment_ref_count(sType_clone(it->mType)),it->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0);
                    }
                    come_call_finalizer(list$1sVar$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    __dec_obj36=info->match_it_var,
                    info->match_it_var=((void*)0);
                    come_call_finalizer(list$1sVar$ph_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            if(            !gComeC&&string_operator_equals(info->come_fun->mName,"main")            ) {
                free_objects(info->gv_table,((void*)0),info);
                __right_value0 = (void*)0;
                add_come_code(info,((char*)(__right_value0=xsprintf("come_heap_final();\n"))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            if(            result_type2->mHeap            ) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                free_object((struct sType*)come_increment_ref_count(result_type2),((char*)(__right_value1=xsprintf("__result_obj__\%s",((char*)(__right_value0=int_to_string(result_num)))))),(_Bool)0,(_Bool)1,info,(_Bool)0);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            add_come_code(info,((char*)(__right_value1=xsprintf("return __result_obj__\%s;\n",((char*)(__right_value0=int_to_string(result_num)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, come_value_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        come_fun_10=info->come_fun;
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_10->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info);
        if(        info->block_level==1        ) {
            info->inhibits_output_code=(_Bool)1;
            if(            info->match_it_var            ) {
                for(                o2_saved_11=(struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var),it_12=list$1sVar$ph_begin(o2_saved_11)                ;                !list$1sVar$ph_end(o2_saved_11)                ;                it_12=list$1sVar$ph_next(o2_saved_11)                ){
                    __right_value0 = (void*)0;
                    free_object((struct sType*)come_increment_ref_count(sType_clone(it_12->mType)),it_12->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0);
                }
                come_call_finalizer(list$1sVar$ph$p_finalize, o2_saved_11, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                __dec_obj37=info->match_it_var,
                info->match_it_var=((void*)0);
                come_call_finalizer(list$1sVar$ph_finalize, __dec_obj37,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")        ) {
            free_objects(info->gv_table,((void*)0),info);
            __right_value0 = (void*)0;
            add_come_code(info,((char*)(__right_value0=xsprintf("come_heap_final();\n"))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        add_come_code(info,"return;\n");
    }
    info->last_statment_is_return=(_Bool)1;
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static void sReturnNode_finalize(struct sReturnNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)    ) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)    ) {
        (self->value_source = come_decrement_ref_count(self->value_source, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__3;
void* __right_value0 = (void*)0;
struct sType* result;
struct sType* __dec_obj3;
struct sType* __dec_obj4;
struct list$1sType$ph* __dec_obj8;
struct sType* __dec_obj9;
struct sNode* __dec_obj10;
struct sNode* __dec_obj11;
char* __dec_obj12;
char* __dec_obj13;
char* __dec_obj14;
char* __dec_obj15;
char* __dec_obj16;
char* __dec_obj17;
struct list$1sNode$ph* __dec_obj21;
struct list$1sNode$ph* __dec_obj22;
struct list$1int$* __dec_obj23;
struct list$1int$* __dec_obj24;
struct sType* __dec_obj25;
char* __dec_obj26;
struct list$1sType$ph* __dec_obj27;
struct list$1char$ph* __dec_obj31;
struct sType* __dec_obj32;
struct sNode* __dec_obj33;
struct sType* __result_obj__22;
    if(    self==(void*)0    ) {
        __result_obj__3 = (struct sType*)come_increment_ref_count((void*)0);
        come_call_finalizer(sType_finalize, __result_obj__3, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__3;
    }
    result=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)    ) {
        result->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj3=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj4=result->mChannelType,
        result->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj8=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj8,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj9=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj9,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj10=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj11=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj11 ? __dec_obj11 = come_decrement_ref_count(__dec_obj11, ((struct sNode*)__dec_obj11)->finalize, ((struct sNode*)__dec_obj11)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj12=result->mTupleName,
        result->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj13=result->mAttribute,
        result->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarAttribute!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj14=result->mVarAttribute,
        result->mVarAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mVarAttribute, "sType_clone", 13, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)    ) {
        result->mShort=self->mShort;
    }
    if(    self!=((void*)0)    ) {
        result->mLong=self->mLong;
    }
    if(    self!=((void*)0)    ) {
        result->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)    ) {
        result->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)    ) {
        result->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)    ) {
        result->mThreadLocal=self->mThreadLocal;
    }
    if(    self!=((void*)0)    ) {
        result->mComplex=self->mComplex;
    }
    if(    self!=((void*)0)    ) {
        result->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)    ) {
        result->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)    ) {
        result->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)    ) {
        result->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)    ) {
        result->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)    ) {
        result->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)    ) {
        result->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)    ) {
        result->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)    ) {
        result->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)    ) {
        result->mDefferRightValue=self->mDefferRightValue;
    }
    if(    self!=((void*)0)    ) {
        result->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)    ) {
        result->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)    ) {
        result->mException=self->mException;
    }
    if(    self!=((void*)0)    ) {
        result->mTypeName=self->mTypeName;
    }
    if(    self!=((void*)0)    ) {
        result->mAnonymous=self->mAnonymous;
    }
    if(    self!=((void*)0)&&self->mAnonymousName!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj15=result->mAnonymousName,
        result->mAnonymousName=(char*)come_increment_ref_count((char*)come_memdup(self->mAnonymousName, "sType_clone", 38, "char*"));
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->mInnerStruct=self->mInnerStruct;
    }
    if(    self!=((void*)0)&&self->mInnerStructName!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj16=result->mInnerStructName,
        result->mInnerStructName=(char*)come_increment_ref_count((char*)come_memdup(self->mInnerStructName, "sType_clone", 40, "char*"));
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->mAnonymousVarName=self->mAnonymousVarName;
    }
    if(    self!=((void*)0)    ) {
        result->mInline=self->mInline;
    }
    if(    self!=((void*)0)    ) {
        result->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)    ) {
        result->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj17=result->mAsmName,
        result->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 45, "char*"));
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)    ) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)    ) {
        result->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj21=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj21,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj22=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj22,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayStatic!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj23=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic));
        come_call_finalizer(list$1int$_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayRestrict!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj24=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict));
        come_call_finalizer(list$1int$_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result->mArrayPointerNum=self->mArrayPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result->mPointerParen=self->mPointerParen;
    }
    if(    self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj25=result->mTypedefOriginalType,
        result->mTypedefOriginalType=(struct sType*)come_increment_ref_count(sType_clone(self->mTypedefOriginalType));
        come_call_finalizer(sType_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj26=result->mOriginalTypeName,
        result->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 58, "char*"));
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->mOriginalTypePointerNum=self->mOriginalTypePointerNum;
    }
    if(    self!=((void*)0)    ) {
        result->mOriginalTypePointerHeap=self->mOriginalTypePointerHeap;
    }
    if(    self!=((void*)0)    ) {
        result->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj27=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj27,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj31=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj31,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj32=result->mResultType,
        result->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mTypeOfNode!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj33=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode));
        (__dec_obj33 ? __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__22 = (struct sType*)come_increment_ref_count(result);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__22, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__22;
}

static void sType_finalize(struct sType* self){
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mVarAttribute!=((void*)0)    ) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAnonymousName!=((void*)0)    ) {
        (self->mAnonymousName = come_decrement_ref_count(self->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mInnerStructName!=((void*)0)    ) {
        (self->mInnerStructName = come_decrement_ref_count(self->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayStatic!=((void*)0)    ) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayRestrict!=((void*)0)    ) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mTypeOfNode!=((void*)0)    ) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it;
struct list_item$1sType$ph* prev_it;
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it;
struct list_item$1sNode$ph* prev_it;
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it;
struct list_item$1int$* prev_it;
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it;
struct list_item$1char$ph* prev_it;
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__4;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1sType$ph* result;
struct list_item$1sType$ph* it;
struct list$1sType$ph* __result_obj__7;
    if(    self==((void*)0)    ) {
        __result_obj__4 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__4, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__4;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1065, "struct list$1sType$ph*"))));
    it=self->head;
    while(    it!=((void*)0)    ) {
        if(        1        ) {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType*)come_increment_ref_count(sType_clone(it->item)));
        }
        else {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType*)come_increment_ref_count(sType_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__7 = (struct list$1sType$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__7, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__7;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__5;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__5 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__5, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__5;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value0 = (void*)0;
struct list_item$1sType$ph* litem;
struct sType* __dec_obj5;
struct list_item$1sType$ph* litem_0;
struct sType* __dec_obj6;
struct list_item$1sType$ph* litem_1;
struct sType* __dec_obj7;
struct list$1sType$ph* __result_obj__6;
    if(    self->len==0    ) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1084, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj5=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_0=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1094, "struct list_item$1sType$ph*"))));
        litem_0->prev=self->head;
        litem_0->next=((void*)0);
        __dec_obj6=litem_0->item,
        litem_0->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_0;
        self->head->next=litem_0;
    }
    else {
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1104, "struct list_item$1sType$ph*"))));
        litem_1->prev=self->tail;
        litem_1->next=((void*)0);
        __dec_obj7=litem_1->item,
        litem_1->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_1;
        self->tail=litem_1;
    }
    self->len++;
    __result_obj__6 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__6;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it;
struct list_item$1sType$ph* prev_it;
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__8;
void* __right_value0 = (void*)0;
struct sNode* result;
struct sNode* __result_obj__9;
    if(    self==(void*)0    ) {
        __result_obj__8 = (struct sNode*)come_increment_ref_count((void*)0);
        ((__result_obj__8) ? __result_obj__8 = come_decrement_ref_count(__result_obj__8, ((struct sNode*)__result_obj__8)->finalize, ((struct sNode*)__result_obj__8)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__8;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)    ) {
        result->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)    ) {
        result->finalize=self->finalize;
    }
    if(    self!=((void*)0)    ) {
        result->clone=self->clone;
    }
    if(    self!=((void*)0)    ) {
        result->compile=self->compile;
    }
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result->sname=self->sname;
    }
    if(    self!=((void*)0)    ) {
        result->terminated=self->terminated;
    }
    if(    self!=((void*)0)    ) {
        result->kind=self->kind;
    }
    if(    self!=((void*)0)    ) {
        result->no_mutex=self->no_mutex;
    }
    __result_obj__9 = (struct sNode*)come_increment_ref_count(result);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__9) ? __result_obj__9 = come_decrement_ref_count(__result_obj__9, ((struct sNode*)__result_obj__9)->finalize, ((struct sNode*)__result_obj__9)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__9;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__10;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1sNode$ph* result;
struct list_item$1sNode$ph* it;
struct list$1sNode$ph* __result_obj__13;
    if(    self==((void*)0)    ) {
        __result_obj__10 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__10, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__10;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1065, "struct list$1sNode$ph*"))));
    it=self->head;
    while(    it!=((void*)0)    ) {
        if(        1        ) {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item)));
        }
        else {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__13 = (struct list$1sNode$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__13, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__13;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__11;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__11 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__11, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__11;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value0 = (void*)0;
struct list_item$1sNode$ph* litem;
struct sNode* __dec_obj18;
struct list_item$1sNode$ph* litem_2;
struct sNode* __dec_obj19;
struct list_item$1sNode$ph* litem_3;
struct sNode* __dec_obj20;
struct list$1sNode$ph* __result_obj__12;
    if(    self->len==0    ) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1084, "struct list_item$1sNode$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj18=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj18 ? __dec_obj18 = come_decrement_ref_count(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_2=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1094, "struct list_item$1sNode$ph*"))));
        litem_2->prev=self->head;
        litem_2->next=((void*)0);
        __dec_obj19=litem_2->item,
        litem_2->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj19 ? __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem_2;
        self->head->next=litem_2;
    }
    else {
        __right_value0 = (void*)0;
        litem_3=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1104, "struct list_item$1sNode$ph*"))));
        litem_3->prev=self->tail;
        litem_3->next=((void*)0);
        __dec_obj20=litem_3->item,
        litem_3->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj20 ? __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail->next=litem_3;
        self->tail=litem_3;
    }
    self->len++;
    __result_obj__12 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    return __result_obj__12;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it;
struct list_item$1sNode$ph* prev_it;
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct list$1int$* list$1int$$p_clone(struct list$1int$* self){
struct list$1int$* __result_obj__14;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1int$* result;
struct list_item$1int$* it;
struct list$1int$* __result_obj__17;
    if(    self==((void*)0)    ) {
        __result_obj__14 = (struct list$1int$*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1int$$p_finalize, __result_obj__14, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__14;
    }
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/neo-c.h", 1065, "struct list$1int$*"))));
    it=self->head;
    while(    it!=((void*)0)    ) {
        if(        0        ) {
            list$1int$_add(result,it->item);
        }
        else {
            list$1int$_add(result,it->item);
        }
        it=it->next;
    }
    __result_obj__17 = (struct list$1int$*)come_increment_ref_count(result);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__17, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__17;
}

static struct list$1int$* list$1int$_initialize(struct list$1int$* self){
struct list$1int$* __result_obj__15;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__15 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__15, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__15;
}

static struct list$1int$* list$1int$_add(struct list$1int$* self, int item){
void* __right_value0 = (void*)0;
struct list_item$1int$* litem;
struct list_item$1int$* litem_4;
struct list_item$1int$* litem_5;
struct list$1int$* __result_obj__16;
    if(    self->len==0    ) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1084, "struct list_item$1int$*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_4=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1094, "struct list_item$1int$*"))));
        litem_4->prev=self->head;
        litem_4->next=((void*)0);
        litem_4->item=item;
        self->tail=litem_4;
        self->head->next=litem_4;
    }
    else {
        __right_value0 = (void*)0;
        litem_5=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1104, "struct list_item$1int$*"))));
        litem_5->prev=self->tail;
        litem_5->next=((void*)0);
        litem_5->item=item;
        self->tail->next=litem_5;
        self->tail=litem_5;
    }
    self->len++;
    __result_obj__16 = self;
    return __result_obj__16;
}

static void list$1int$_finalize(struct list$1int$* self){
struct list_item$1int$* it;
struct list_item$1int$* prev_it;
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__18;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1char$ph* result;
struct list_item$1char$ph* it;
struct list$1char$ph* __result_obj__21;
    if(    self==((void*)0)    ) {
        __result_obj__18 = (struct list$1char$ph*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__18, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__18;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 1065, "struct list$1char$ph*"))));
    it=self->head;
    while(    it!=((void*)0)    ) {
        if(        1        ) {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char*)come_increment_ref_count((char*)come_memdup(it->item, "/usr/local/include/neo-c.h", 1070, "char*")));
        }
        else {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char*)come_increment_ref_count((char*)come_memdup(it->item, "/usr/local/include/neo-c.h", 1073, "char*")));
        }
        it=it->next;
    }
    __result_obj__21 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__21, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__21;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__19;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__19 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__19, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__19;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value0 = (void*)0;
struct list_item$1char$ph* litem;
char* __dec_obj28;
struct list_item$1char$ph* litem_6;
char* __dec_obj29;
struct list_item$1char$ph* litem_7;
char* __dec_obj30;
struct list$1char$ph* __result_obj__20;
    if(    self->len==0    ) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1084, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj28=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_6=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1094, "struct list_item$1char$ph*"))));
        litem_6->prev=self->head;
        litem_6->next=((void*)0);
        __dec_obj29=litem_6->item,
        litem_6->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_6;
        self->head->next=litem_6;
    }
    else {
        __right_value0 = (void*)0;
        litem_7=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1104, "struct list_item$1char$ph*"))));
        litem_7->prev=self->tail;
        litem_7->next=((void*)0);
        __dec_obj30=litem_7->item,
        litem_7->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_7;
        self->tail=litem_7;
    }
    self->len++;
    __result_obj__20 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__20;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it;
struct list_item$1char$ph* prev_it;
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self){
struct sVar* result;
struct sVar* __result_obj__24;
struct sVar* __result_obj__25;
struct sVar* result_8;
struct sVar* __result_obj__26;
    if(    self==((void*)0)    ) {
        memset(&result,0,sizeof(struct sVar*));
        __result_obj__24 = result;
        return __result_obj__24;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__25 = self->it->item;
        return __result_obj__25;
    }
    memset(&result_8,0,sizeof(struct sVar*));
    __result_obj__26 = result_8;
    return __result_obj__26;
}

static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self){
struct sVar* result;
struct sVar* __result_obj__27;
struct sVar* __result_obj__28;
struct sVar* result_9;
struct sVar* __result_obj__29;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result,0,sizeof(struct sVar*));
        __result_obj__27 = result;
        return __result_obj__27;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__28 = self->it->item;
        return __result_obj__28;
    }
    memset(&result_9,0,sizeof(struct sVar*));
    __result_obj__29 = result_9;
    return __result_obj__29;
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it;
struct list_item$1sVar$ph* prev_it;
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void sVar_finalize(struct sVar* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)    ) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)    ) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static void list$1sVar$ph_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it;
struct list_item$1sVar$ph* prev_it;
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void CVALUE_finalize(struct CVALUE* self){
    if(    self!=((void*)0)&&self->c_value!=((void*)0)    ) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)    ) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)    ) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct sNode* _inf_value1;
struct sReturnNode* _inf_obj_value1;
void* __right_value2 = (void*)0;
struct sNode* __result_obj__32;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 141, "struct sNode");
    _inf_obj_value1=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value1=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "05call.c", 141, "struct sReturnNode*")),(struct sNode*)come_increment_ref_count(value),(char*)come_increment_ref_count(value_source),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sReturnNode_finalize;
    _inf_value1->clone=(void*)sReturnNode_clone;
    _inf_value1->compile=(void*)sReturnNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sReturnNode_kind;
    _inf_value1->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__32 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value1)));
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    (value_source = come_decrement_ref_count(value_source, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sReturnNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__32) ? __result_obj__32 = come_decrement_ref_count(__result_obj__32, ((struct sNode*)__result_obj__32)->finalize, ((struct sNode*)__result_obj__32)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__32;
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
struct sReturnNode* __result_obj__30;
void* __right_value0 = (void*)0;
struct sReturnNode* result;
char* __dec_obj38;
struct sNode* __dec_obj39;
char* __dec_obj40;
struct sReturnNode* __result_obj__31;
    if(    self==(void*)0    ) {
        __result_obj__30 = (void*)0;
        return __result_obj__30;
    }
    result=(struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "struct sReturnNode*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj38=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sReturnNode_clone", 5, "char*"));
        __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj39=result->value,
        result->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj39 ? __dec_obj39 = come_decrement_ref_count(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj40=result->value_source,
        result->value_source=(char*)come_increment_ref_count((char*)come_memdup(self->value_source, "sReturnNode_clone", 8, "char*"));
        __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __result_obj__31 = result;
    come_call_finalizer(sReturnNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__31;
}

struct sCSourceNode* sCSourceNode_initialize(struct sCSourceNode* self, char* contents, struct sInfo* info){
void* __right_value0 = (void*)0;
char* __dec_obj41;
struct sCSourceNode* __result_obj__33;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj41=self->contents,
    self->contents=(char*)come_increment_ref_count(contents);
    __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__33 = (struct sCSourceNode*)come_increment_ref_count(self);
    come_call_finalizer(sCSourceNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (contents = come_decrement_ref_count(contents, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sCSourceNode_finalize, __result_obj__33, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__33;
}

char* sCSourceNode_kind(struct sCSourceNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__34;
    __result_obj__34 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sCSourceNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__34 = come_decrement_ref_count(__result_obj__34, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__34;
}

_Bool sCSourceNode_compile(struct sCSourceNode* self, struct sInfo* info){
void* __right_value0 = (void*)0;
    add_come_last_code(info,"%s",((char*)(__right_value0=string_operator_load_range_element(self->contents,1,-2))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    return (_Bool)1;
}

static void sCSourceNode_finalize(struct sCSourceNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)    ) {
        (self->contents = come_decrement_ref_count(self->contents, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char* source, struct list$1sNode$ph* exps, struct sInfo* info){
void* __right_value0 = (void*)0;
char* __dec_obj42;
struct list$1sNode$ph* __dec_obj43;
struct sInlineAssembler* __result_obj__35;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj42=self->source,
    self->source=(char*)come_increment_ref_count(source);
    __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj43=self->exps,
    self->exps=(struct list$1sNode$ph*)come_increment_ref_count(exps);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj43,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__35 = (struct sInlineAssembler*)come_increment_ref_count(self);
    come_call_finalizer(sInlineAssembler_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (source = come_decrement_ref_count(source, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sInlineAssembler_finalize, __result_obj__35, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__35;
}

char* sInlineAssembler_kind(struct sInlineAssembler* self){
void* __right_value0 = (void*)0;
char* __result_obj__36;
    __result_obj__36 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sInlineAssembler"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__36 = come_decrement_ref_count(__result_obj__36, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__36;
}

_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info){
char* source;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct CVALUE* come_value;
struct buffer* buf;
char* p;
_Bool dquort;
int num_exp;
struct sNode* node;
_Bool Value;
_Bool __result_obj__41;
struct CVALUE* come_value_13;
void* __right_value2 = (void*)0;
char* __dec_obj44;
struct sType* __exception_result_var_b1;
struct sType* __exception_result_var_b2;
struct sType* __dec_obj45;
_Bool __result_obj__43;
    source=(char*)come_increment_ref_count(self->source);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 185, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 187, "struct buffer*"))));
    p=source;
    while(    *p!=40    ) {
        buffer_append_char(buf,*p);
        p++;
    }
    if(    *p==40    ) {
        buffer_append_char(buf,*p);
        p++;
        while(        *p==32||*p==9||*p==10        ) {
            buffer_append_char(buf,*p);
            p++;
        }
    }
    dquort=(_Bool)0;
    num_exp=0;
    while(    *p    ) {
        if(        *p==34        ) {
            buffer_append_char(buf,*p);
            p++;
            dquort=!dquort;
        }
        else if(        dquort        ) {
            buffer_append_char(buf,*p);
            p++;
        }
        else if(        *p==40        ) {
            buffer_append_char(buf,*p);
            p++;
            __right_value0 = (void*)0;
            node=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(self->exps,num_exp++));
            Value=node_compile(node,info);
            if(            !Value            ) {
                __result_obj__41 = (_Bool)0;
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (source = come_decrement_ref_count(source, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__41;
            }
            else {
            }
            __right_value0 = (void*)0;
            come_value_13=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            buffer_append_str(buf,come_value_13->c_value);
            if(            *p==41            ) {
                buffer_append_char(buf,*p);
                p++;
            }
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_13, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_char(buf,*p);
            p++;
        }
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj44=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(charp_operator_add("__asm ",((char*)(__right_value1=buffer_to_string(buf)))));
    __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    __dec_obj45=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 244, 0),__exception_result_var_b1=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 244, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b1));
    come_call_finalizer(sType_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",come_value->c_value);
    __result_obj__43 = (_Bool)1;
    (source = come_decrement_ref_count(source, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__43;
}

static void sInlineAssembler_finalize(struct sInlineAssembler* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)    ) {
        (self->source = come_decrement_ref_count(self->source, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it;
int i;
struct sNode* __result_obj__37;
struct sNode* default_value;
struct sNode* __result_obj__38;
    if(    position<0    ) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(    it!=((void*)0)    ) {
        if(        position==i        ) {
            __result_obj__37 = (struct sNode*)come_increment_ref_count(it->item);
            ((__result_obj__37) ? __result_obj__37 = come_decrement_ref_count(__result_obj__37, ((struct sNode*)__result_obj__37)->finalize, ((struct sNode*)__result_obj__37)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__37;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct sNode*));
    __result_obj__38 = (struct sNode*)come_increment_ref_count(default_value);
    ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__38) ? __result_obj__38 = come_decrement_ref_count(__result_obj__38, ((struct sNode*)__result_obj__38)->finalize, ((struct sNode*)__result_obj__38)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__38;
}

static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it;
int i;
struct sNode* __result_obj__39;
struct sNode* default_value;
struct sNode* __result_obj__40;
    if(    position<0    ) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(    it!=((void*)0)    ) {
        if(        position==i        ) {
            __result_obj__39 = (struct sNode*)come_increment_ref_count(it->item);
            ((__result_obj__39) ? __result_obj__39 = come_decrement_ref_count(__result_obj__39, ((struct sNode*)__result_obj__39)->finalize, ((struct sNode*)__result_obj__39)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__39;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct sNode*));
    __result_obj__40 = (struct sNode*)come_increment_ref_count(default_value);
    ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__40) ? __result_obj__40 = come_decrement_ref_count(__result_obj__40, ((struct sNode*)__result_obj__40)->finalize, ((struct sNode*)__result_obj__40)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__40;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value0 = (void*)0;
struct list_item$1CVALUE$ph* litem;
struct CVALUE* __dec_obj46;
struct list_item$1CVALUE$ph* litem_14;
struct CVALUE* __dec_obj47;
struct list_item$1CVALUE$ph* litem_15;
struct CVALUE* __dec_obj48;
struct list$1CVALUE$ph* __result_obj__42;
    if(    self->len==0    ) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1162, "struct list_item$1CVALUE$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj46=litem->item,
        litem->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj46,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_14=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1172, "struct list_item$1CVALUE$ph*"))));
        litem_14->prev=self->head;
        litem_14->next=((void*)0);
        __dec_obj47=litem_14->item,
        litem_14->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj47,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_14;
        self->head->next=litem_14;
    }
    else {
        __right_value0 = (void*)0;
        litem_15=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1182, "struct list_item$1CVALUE$ph*"))));
        litem_15->prev=self->tail;
        litem_15->next=((void*)0);
        __dec_obj48=litem_15->item,
        litem_15->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_15;
        self->tail=litem_15;
    }
    self->len++;
    __result_obj__42 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__42;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sLineNode* __result_obj__44;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__44 = (struct sLineNode*)come_increment_ref_count(self);
    come_call_finalizer(sLineNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sLineNode_finalize, __result_obj__44, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__44;
}

char* sLineNode_kind(struct sLineNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__45;
    __result_obj__45 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sLineNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__45 = come_decrement_ref_count(__result_obj__45, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__45;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct CVALUE* come_value;
char* __dec_obj49;
void* __right_value2 = (void*)0;
struct sType* __exception_result_var_b3;
struct sType* __exception_result_var_b4;
struct sType* __dec_obj50;
_Bool __result_obj__46;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 269, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    __dec_obj49=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->sline));
    __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj50=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 272, 2),__exception_result_var_b3=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 272, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b3));
    come_call_finalizer(sType_finalize, __dec_obj50,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",come_value->c_value);
    __result_obj__46 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__46;
}

static void sLineNode_finalize(struct sLineNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sSNameNode* __result_obj__47;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__47 = (struct sSNameNode*)come_increment_ref_count(self);
    come_call_finalizer(sSNameNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sSNameNode_finalize, __result_obj__47, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__47;
}

char* sSNameNode_kind(struct sSNameNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__48;
    __result_obj__48 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sSNameNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__48 = come_decrement_ref_count(__result_obj__48, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__48;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct CVALUE* come_value;
char* __dec_obj51;
void* __right_value2 = (void*)0;
struct sType* __exception_result_var_b5;
struct sType* __exception_result_var_b6;
struct sType* __dec_obj52;
_Bool __result_obj__49;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 297, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    __dec_obj51=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->sname));
    __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj52=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 300, 4),__exception_result_var_b5=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 300, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b5));
    come_call_finalizer(sType_finalize, __dec_obj52,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",come_value->c_value);
    __result_obj__49 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__49;
}

static void sSNameNode_finalize(struct sSNameNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sFuncNode* __result_obj__50;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__50 = (struct sFuncNode*)come_increment_ref_count(self);
    come_call_finalizer(sFuncNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sFuncNode_finalize, __result_obj__50, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__50;
}

char* sFuncNode_kind(struct sFuncNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__51;
    __result_obj__51 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sFuncNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__51 = come_decrement_ref_count(__result_obj__51, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__51;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct CVALUE* come_value;
char* __dec_obj53;
void* __right_value2 = (void*)0;
struct sType* __exception_result_var_b7;
struct sType* __exception_result_var_b8;
struct sType* __dec_obj54;
_Bool __result_obj__52;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 325, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    __dec_obj53=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->come_fun->mName));
    __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj54=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 328, 6),__exception_result_var_b7=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 328, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b7));
    come_call_finalizer(sType_finalize, __dec_obj54,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",come_value->c_value);
    __result_obj__52 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__52;
}

static void sFuncNode_finalize(struct sFuncNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sCallerFuncNode* __result_obj__53;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__53 = (struct sCallerFuncNode*)come_increment_ref_count(self);
    come_call_finalizer(sCallerFuncNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sCallerFuncNode_finalize, __result_obj__53, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__53;
}

char* sCallerFuncNode_kind(struct sCallerFuncNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__54;
    __result_obj__54 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sCallerFuncNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__54 = come_decrement_ref_count(__result_obj__54, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__54;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct CVALUE* come_value;
char* __dec_obj55;
char* __dec_obj56;
void* __right_value2 = (void*)0;
struct sType* __exception_result_var_b9;
struct sType* __exception_result_var_b10;
struct sType* __dec_obj57;
_Bool __result_obj__55;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 354, "struct CVALUE*"))));
    if(    info->caller_fun    ) {
        __right_value0 = (void*)0;
        __dec_obj55=come_value->c_value,
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_fun->mName));
        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj56=come_value->c_value,
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("\"\""));
        __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj57=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 362, 8),__exception_result_var_b9=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 362, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b9));
    come_call_finalizer(sType_finalize, __dec_obj57,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",come_value->c_value);
    __result_obj__55 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__55;
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sCallerLineNode* __result_obj__56;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__56 = (struct sCallerLineNode*)come_increment_ref_count(self);
    come_call_finalizer(sCallerLineNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sCallerLineNode_finalize, __result_obj__56, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__56;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct CVALUE* come_value;
char* __dec_obj58;
void* __right_value2 = (void*)0;
struct sType* __exception_result_var_b11;
struct sType* __exception_result_var_b12;
struct sType* __dec_obj59;
_Bool __result_obj__57;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 383, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    __dec_obj58=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->caller_line));
    __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj59=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 386, 10),__exception_result_var_b11=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 386, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b11));
    come_call_finalizer(sType_finalize, __dec_obj59,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",come_value->c_value);
    __result_obj__57 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__57;
}

char* sCallerLineNode_kind(struct sCallerLineNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__58;
    __result_obj__58 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sCallerLineNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__58 = come_decrement_ref_count(__result_obj__58, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__58;
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sCallerSNameNode* __result_obj__59;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__59 = (struct sCallerSNameNode*)come_increment_ref_count(self);
    come_call_finalizer(sCallerSNameNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sCallerSNameNode_finalize, __result_obj__59, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__59;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct CVALUE* come_value;
char* __dec_obj60;
void* __right_value2 = (void*)0;
struct sType* __exception_result_var_b13;
struct sType* __exception_result_var_b14;
struct sType* __dec_obj61;
_Bool __result_obj__60;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 411, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    __dec_obj60=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_sname));
    __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj61=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 414, 12),__exception_result_var_b13=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 414, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b13));
    come_call_finalizer(sType_finalize, __dec_obj61,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",come_value->c_value);
    __result_obj__60 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__60;
}

char* sCallerSNameNode_kind(struct sCallerSNameNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__61;
    __result_obj__61 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sCallerSNameNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__61 = come_decrement_ref_count(__result_obj__61, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__61;
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __right_value0 = (void*)0;
char* __dec_obj62;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj68;
struct list$1sType$ph* __dec_obj69;
struct buffer* __dec_obj70;
struct sFunCallNode* __result_obj__68;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj62=self->fun_name,
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj68=self->params,
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(params));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj68,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj69=self->method_generics_types,
    self->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj69,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj70=self->method_block,
    self->method_block=(struct buffer*)come_increment_ref_count(method_block);
    come_call_finalizer(buffer_finalize, __dec_obj70,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->method_block_sline=method_block_sline;
    __result_obj__68 = (struct sFunCallNode*)come_increment_ref_count(self);
    come_call_finalizer(sFunCallNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sFunCallNode_finalize, __result_obj__68, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__68;
}

char* sFunCallNode_kind(struct sFunCallNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__69;
    __result_obj__69 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sFunCallNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__69 = come_decrement_ref_count(__result_obj__69, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__69;
}

_Bool sFunCallNode_terminated(struct sFunCallNode* self){
    if(    self->method_block    ) {
        return (_Bool)1;
    }
    else {
        return (_Bool)0;
    }
}

_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info){
char* fun_name;
struct list$1tuple2$2char$phsNode$ph$ph* params;
struct buffer* method_block;
int method_block_sline;
struct sVar* var_;
struct sType* lambda_type;
_Bool __result_obj__70;
void* __right_value0 = (void*)0;
struct sType* result_type;
void* __right_value1 = (void*)0;
struct list$1CVALUE$ph* come_params;
_Bool __result_obj__72;
int i;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved;
struct tuple2$2char$phsNode$ph* it;
struct tuple2$2char$phsNode$ph* multiple_assign_var1
;char* label=0;
struct sNode* node=0;
_Bool Value;
_Bool __result_obj__79;
struct CVALUE* come_value;
struct sType* __dec_obj71;
_Bool _conditional_value_X0;
void* __right_value2 = (void*)0;
void* __right_value3 = (void*)0;
_Bool _conditional_value_X1;
struct buffer* buf;
int j;
struct list$1CVALUE$ph* o2_saved_20;
struct CVALUE* it_22;
struct CVALUE* come_value_24;
char* __dec_obj72;
struct sType* __dec_obj73;
_Bool __result_obj__90;
struct sGenericsFun* generics_fun;
_Bool method_generics;
struct list$1sType$ph* method_generics_types;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var2
;char* name=0;
struct sGenericsFun* gfun=0;
char* generics_fun_name;
struct sFun* fun;
struct list$1CVALUE$ph* come_params_25;
struct sFun* fun_26;
_Bool no_output_come_code;
_Bool __result_obj__99;
struct CVALUE* method_block_node;
struct sType* method_block_lambda_type;
struct sType* method_block_result_type;
struct sType* generics_fun_method_block_lambda_type;
struct sType* generics_fun_method_block_result_type;
int method_generics_num;
int n;
struct list$1sType$ph* o2_saved_30;
struct sType* it_32;
int method_generics_num_34;
struct list$1CVALUE$ph* come_params_35;
int i_36;
struct sType* result_type_37;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_38;
struct tuple2$2char$phsNode$ph* it_39;
struct tuple2$2char$phsNode$ph* multiple_assign_var3
;char* label_40=0;
struct sNode* node_41=0;
_Bool Value_42;
_Bool __result_obj__113;
struct CVALUE* come_value_43;
struct sType* __dec_obj78;
int method_generics_num_46;
int n_47;
struct list$1sType$ph* o2_saved_48;
struct sType* it_49;
int method_generics_num_50;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var4
;char* name_57=0;
struct sGenericsFun* gfun_58=0;
char* __dec_obj82;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var5
;char* name_59=0;
struct sGenericsFun* gfun_60=0;
char* __dec_obj83;
_Bool __result_obj__120;
struct list$1CVALUE$ph* come_params_61;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_62;
struct tuple2$2char$phsNode$ph* it_63;
struct tuple2$2char$phsNode$ph* multiple_assign_var6
;char* label_64=0;
struct sNode* node_65=0;
_Bool Value_66;
_Bool __result_obj__121;
struct CVALUE* come_value_67;
struct sType* __dec_obj84;
char* type1;
char* type2;
struct CVALUE* come_value_68;
char* __dec_obj85;
struct sType* __exception_result_var_b15;
struct sType* __exception_result_var_b16;
struct sType* __dec_obj86;
_Bool __result_obj__122;
struct CVALUE* come_value_69;
char* __dec_obj87;
struct sType* __exception_result_var_b17;
struct sType* __exception_result_var_b18;
struct sType* __dec_obj88;
_Bool __result_obj__123;
struct list$1CVALUE$ph* come_params_70;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_71;
struct tuple2$2char$phsNode$ph* it_72;
struct tuple2$2char$phsNode$ph* multiple_assign_var7
;char* label_73=0;
struct sNode* node_74=0;
_Bool Value_75;
_Bool __result_obj__124;
struct CVALUE* come_value_76;
struct sType* __dec_obj89;
struct buffer* buf_77;
int j_78;
struct list$1CVALUE$ph* o2_saved_79;
struct CVALUE* it_80;
struct CVALUE* come_value_81;
char* __dec_obj90;
struct sType* __exception_result_var_b19;
struct sType* __exception_result_var_b20;
struct sType* __dec_obj91;
struct sType* __exception_result_var_b21;
struct sType* __exception_result_var_b22;
struct sType* __dec_obj92;
struct sType* __exception_result_var_b23;
struct sType* __exception_result_var_b24;
struct sType* __dec_obj93;
struct sType* __exception_result_var_b25;
struct sType* __exception_result_var_b26;
struct sType* __dec_obj94;
struct sType* __exception_result_var_b27;
struct sType* __exception_result_var_b28;
struct sType* __dec_obj95;
struct sType* __exception_result_var_b29;
struct sType* __exception_result_var_b30;
struct sType* __dec_obj96;
struct sType* __exception_result_var_b31;
struct sType* __exception_result_var_b32;
struct sType* __dec_obj97;
struct sType* __exception_result_var_b33;
struct sType* __exception_result_var_b34;
struct sType* __dec_obj98;
struct sType* __exception_result_var_b35;
struct sType* __exception_result_var_b36;
struct sType* __dec_obj99;
struct sType* __exception_result_var_b37;
struct sType* __exception_result_var_b38;
struct sType* __dec_obj100;
struct sType* __exception_result_var_b39;
struct sType* __exception_result_var_b40;
struct sType* __dec_obj101;
struct sType* __exception_result_var_b41;
struct sType* __exception_result_var_b42;
struct sType* __dec_obj102;
struct sType* __exception_result_var_b43;
struct sType* __exception_result_var_b44;
struct sType* __dec_obj103;
struct sType* __exception_result_var_b45;
struct sType* __exception_result_var_b46;
struct sType* __dec_obj104;
struct sType* __exception_result_var_b47;
struct sType* __exception_result_var_b48;
struct sType* __dec_obj105;
struct sType* __exception_result_var_b49;
struct sType* __exception_result_var_b50;
struct sType* __dec_obj106;
struct sType* __exception_result_var_b51;
struct sType* __exception_result_var_b52;
struct sType* __dec_obj107;
struct sType* __exception_result_var_b53;
struct sType* __exception_result_var_b54;
struct sType* __dec_obj108;
struct sType* __exception_result_var_b55;
struct sType* __exception_result_var_b56;
struct sType* __dec_obj109;
struct sType* __dec_obj110;
struct sType* __dec_obj111;
struct sType* __dec_obj112;
struct sType* __exception_result_var_b57;
struct sType* __exception_result_var_b58;
struct sType* __dec_obj113;
struct sType* __dec_obj114;
struct sType* __dec_obj115;
struct sType* __dec_obj116;
struct sType* __dec_obj117;
struct sType* __dec_obj118;
struct sType* __dec_obj119;
struct sType* __exception_result_var_b59;
struct sType* __exception_result_var_b60;
struct sType* __dec_obj120;
struct sType* __exception_result_var_b61;
struct sType* __exception_result_var_b62;
struct sType* __dec_obj121;
struct sType* __exception_result_var_b63;
struct sType* __exception_result_var_b64;
struct sType* __dec_obj122;
struct sType* __exception_result_var_b65;
struct sType* __exception_result_var_b66;
struct sType* __dec_obj123;
struct sType* __exception_result_var_b67;
struct sType* __exception_result_var_b68;
struct sType* __dec_obj124;
struct sType* __exception_result_var_b69;
struct sType* __exception_result_var_b70;
struct sType* __dec_obj125;
struct sType* __exception_result_var_b71;
struct sType* __exception_result_var_b72;
struct sType* __dec_obj126;
struct sType* __exception_result_var_b73;
struct sType* __exception_result_var_b74;
struct sType* __dec_obj127;
struct sType* __exception_result_var_b75;
struct sType* __exception_result_var_b76;
struct sType* __dec_obj128;
struct sType* __exception_result_var_b77;
struct sType* __exception_result_var_b78;
struct sType* __dec_obj129;
_Bool __result_obj__125;
char* __dec_obj130;
struct buffer* buf_82;
struct CVALUE* come_value_83;
char* __dec_obj131;
struct sType* __exception_result_var_b79;
struct sType* __exception_result_var_b80;
struct sType* __dec_obj132;
_Bool __result_obj__126;
struct list$1CVALUE$ph* come_params_84;
int i_85;
struct sType* result_type_86;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_87;
struct tuple2$2char$phsNode$ph* it_88;
struct tuple2$2char$phsNode$ph* multiple_assign_var8
;char* label_89=0;
struct sNode* node_90=0;
_Bool Value_91;
_Bool __result_obj__127;
struct CVALUE* come_value_92;
struct sType* __dec_obj133;
struct sType* __dec_obj134;
struct buffer* buf_93;
int j_94;
struct list$1CVALUE$ph* o2_saved_95;
struct CVALUE* it_96;
struct CVALUE* come_value_97;
char* __dec_obj135;
struct sType* __dec_obj136;
_Bool __result_obj__128;
struct list$1CVALUE$ph* come_params_98;
int i_99;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_100;
struct tuple2$2char$phsNode$ph* it_101;
struct tuple2$2char$phsNode$ph* multiple_assign_var9
;char* label_102=0;
struct sNode* node_103=0;
_Bool Value_104;
_Bool __result_obj__129;
struct CVALUE* come_value_105;
struct sType* __dec_obj137;
struct buffer* buf_106;
int j_107;
struct list$1CVALUE$ph* o2_saved_108;
struct CVALUE* it_109;
struct sType* __exception_result_var_b81;
struct sType* __exception_result_var_b82;
struct sType* __exception_result_var_b83;
struct sType* result_type_110;
struct CVALUE* come_value_111;
char* __dec_obj138;
struct sType* __dec_obj139;
_Bool __result_obj__130;
char* __dec_obj140;
char* __dec_obj141;
char* p;
int version;
char* p2;
int i_112;
char* new_fun_name;
char* __dec_obj142;
char* new_fun_name_113;
char* __dec_obj143;
_Bool __result_obj__139;
int i_114;
char* new_fun_name_115;
_Bool _conditional_value_X2;
char* __dec_obj144;
struct sFun* fun_116;
struct list$1CVALUE$ph* come_params_117;
int i_118;
struct sType* result_type_119;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_120;
struct tuple2$2char$phsNode$ph* it_121;
struct tuple2$2char$phsNode$ph* multiple_assign_var10
;char* label_122=0;
struct sNode* node_123=0;
_Bool Value_124;
_Bool __result_obj__140;
struct CVALUE* come_value_125;
struct sType* __dec_obj145;
struct sType* __dec_obj146;
struct buffer* buf_126;
int j_127;
struct list$1CVALUE$ph* o2_saved_128;
struct CVALUE* it_129;
struct CVALUE* come_value_130;
char* __dec_obj147;
struct sType* __exception_result_var_b84;
struct sType* __exception_result_var_b85;
struct sType* __dec_obj148;
_Bool __result_obj__141;
struct sType* result_type_131;
struct list$1sType$ph* param_types;
struct list$1sType$ph* o2_saved_132;
struct sType* it_133;
struct sType* it2;
struct sType* __dec_obj149;
struct list$1CVALUE$ph* come_params_134;
int i_135;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_136;
struct tuple2$2char$phsNode$ph* it_137;
struct tuple2$2char$phsNode$ph* multiple_assign_var11
;char* label_138=0;
struct sNode* node_139=0;
_Bool Value_140;
_Bool __result_obj__142;
struct CVALUE* come_value_141;
struct sType* __dec_obj150;
int n_142;
struct list$1char$ph* o2_saved_143;
char* it_145;
int i_148;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_149;
struct tuple2$2char$phsNode$ph* it_150;
struct tuple2$2char$phsNode$ph* multiple_assign_var12
;char* label_151=0;
struct sNode* node_152=0;
_Bool Value_153;
_Bool __result_obj__151;
struct CVALUE* come_value_154;
struct sType* __dec_obj152;
_Bool Value_155;
_Bool __result_obj__152;
struct CVALUE* come_value_156;
struct sType* __dec_obj153;
_Bool _conditional_value_X3;
char* default_param;
char* param_name;
struct buffer* source;
char* p_157;
char* head;
int sline;
struct buffer* __dec_obj154;
struct sNode* node_158;
_Bool Value_159;
_Bool __result_obj__157;
struct buffer* __dec_obj155;
struct CVALUE* come_value_160;
struct sType* __dec_obj156;
_Bool __result_obj__158;
_Bool __result_obj__159;
struct sNode* _inf_value2;
struct sCurrentNode* _inf_obj_value2;
struct sNode* current_stack_frame_node;
_Bool Value_161;
_Bool __result_obj__162;
struct CVALUE* come_value_162;
struct sType* __dec_obj158;
struct buffer* method_block2;
struct sType* method_block_type;
char* class_name;
struct sClass* current_stack_frame_struct;
int num_method_block;
_Bool __result_obj__171;
struct sType* result_type_163;
struct sType* result_type2;
struct list$1sType$ph* param_types_164;
struct list$1char$ph* param_names;
struct buffer* all_alhabet_sname;
char* p_165;
struct list$1sType$ph* o2_saved_166;
struct sType* it_167;
struct sType* param_type;
char* param_name_168;
char* param_name_169;
struct sType* param_type2;
char* param_name_170;
struct sType* param_type2_171;
struct buffer* source3;
char* p_172;
char* head_173;
int sline_174;
struct buffer* __dec_obj159;
struct sNode* node_175;
_Bool Value_176;
_Bool __result_obj__172;
char* method_block_name;
struct CVALUE* come_value2;
struct sFun* fun2;
_Bool __result_obj__173;
struct sType* method_block_type2;
char* __dec_obj160;
struct sType* __dec_obj161;
struct buffer* __dec_obj162;
struct buffer* buf_177;
char* __dec_obj163;
char* __dec_obj164;
char* __dec_obj165;
int j_178;
struct list$1CVALUE$ph* o2_saved_179;
struct CVALUE* it_180;
struct CVALUE* come_value_181;
char* __dec_obj166;
struct sType* __dec_obj167;
char* __dec_obj168;
_Bool __result_obj__174;
memset(&i_112, 0, sizeof(i_112));
    fun_name=(char*)come_increment_ref_count(self->fun_name);
    params=self->params;
    method_block=self->method_block;
    method_block_sline=self->method_block_sline;
    var_=get_variable_from_table(info->lv_table,fun_name);
    if(    var_==((void*)0)    ) {
        var_=get_variable_from_table(info->gv_table,fun_name);
    }
    if(    var_    ) {
        lambda_type=var_->mType;
        if(        string_operator_not_equals(lambda_type->mClass->mName,"lambda")        ) {
            err_msg(info,"%s is not lambda, can't call",fun_name);
            __result_obj__70 = (_Bool)1;
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            return __result_obj__70;
        }
        result_type=(struct sType*)come_increment_ref_count(sType_clone(lambda_type->mResultType));
        if(        result_type        ) {
            result_type->mStatic=(_Bool)0;
        }
        __right_value0 = (void*)0;
        come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 486, "struct list$1CVALUE$ph*"))));
        if(        list$1sType$ph_length(lambda_type->mParamTypes)!=list$1tuple2$2char$phsNode$ph$ph_length(params)&&!lambda_type->mVarArgs        ) {
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name,list$1sType$ph_length(lambda_type->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params));
            __result_obj__72 = (_Bool)1;
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            return __result_obj__72;
        }
        i=0;
        for(        o2_saved=params,it=list$1tuple2$2char$phsNode$ph$ph_begin(o2_saved)        ;        !list$1tuple2$2char$phsNode$ph$ph_end(o2_saved)        ;        it=list$1tuple2$2char$phsNode$ph$ph_next(o2_saved)        ){
            multiple_assign_var1=it;
            label=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            node=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
            Value=node_compile(node,info);
            if(            !Value            ) {
                __result_obj__79 = (_Bool)0;
                (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                return __result_obj__79;
            }
            else {
            }
            __right_value0 = (void*)0;
            come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __right_value0 = (void*)0;
            __dec_obj71=come_value->type,
            come_value->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj71,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(            __right_value0 = (void*)0,             ({(_conditional_value_X0=(lambda_type->mVarArgs&&((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i)))==((void*)0)));            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            _conditional_value_X0;})            ) {
            }
            else {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                check_assign_type(((char*)(__right_value2=xsprintf("\%s calling param #\%s",((char*)(__right_value0=string_to_string(fun_name))),((char*)(__right_value1=int_to_string(i)))))),((struct sType*)(__right_value3=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i))),come_value->type,come_value,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
                come_call_finalizer(sType_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(                __right_value0 = (void*)0,                 ({(_conditional_value_X1=(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i)))->mHeap&&come_value->type->mHeap));                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                _conditional_value_X1;})                ) {
                    __right_value0 = (void*)0;
                    std_move(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i))),come_value->type,come_value,info);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
            }
            list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value));
            i++;
            (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 521, "struct buffer*"))));
        buffer_append_str(buf,var_->mCValueName);
        buffer_append_str(buf,"(");
        j=0;
        for(        o2_saved_20=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params),it_22=list$1CVALUE$ph_begin(o2_saved_20)        ;        !list$1CVALUE$ph_end(o2_saved_20)        ;        it_22=list$1CVALUE$ph_next(o2_saved_20)        ){
            buffer_append_str(buf,it_22->c_value);
            if(            j!=list$1CVALUE$ph_length(come_params)-1            ) {
                buffer_append_str(buf,",");
            }
            j++;
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_20, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_str(buf,")");
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_24=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 538, "struct CVALUE*"))));
        __right_value0 = (void*)0;
        __dec_obj72=come_value_24->c_value,
        come_value_24->c_value=(char*)come_increment_ref_count(buffer_to_string(buf));
        __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        __dec_obj73=come_value_24->type,
        come_value_24->type=(struct sType*)come_increment_ref_count(sType_clone(result_type));
        come_call_finalizer(sType_finalize, __dec_obj73,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(        come_value_24->type        ) {
            come_value_24->type->mStatic=(_Bool)0;
        }
        come_value_24->var=((void*)0);
        if(        lambda_type->mResultType->mHeap        ) {
            append_object_to_right_values(come_value_24,(struct sType*)come_increment_ref_count(lambda_type->mResultType),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        }
        add_come_last_code(info,"%s",come_value_24->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_24));
        info->calling_fun=((void*)0);
        __result_obj__90 = (_Bool)1;
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_24, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__90;
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_24, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    generics_fun=((struct sGenericsFun*)(__right_value1=map$2char$phsGenericsFun$ph_at(info->generics_funcs,((char*)(__right_value0=__builtin_string(fun_name))),((void*)0))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    come_call_finalizer(sGenericsFun_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    method_generics=(_Bool)0;
    if(    generics_fun    ) {
        method_generics=list$1char$ph_length(generics_fun->mMethodGenericsTypeNames)>0;
    }
    if(    list$1sType$ph_length(self->method_generics_types)>0||method_generics    ) {
        if(        list$1sType$ph_length(self->method_generics_types)==0        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 565, "struct list$1sType$ph*"))));
            __right_value0 = (void*)0;
            multiple_assign_var2=((struct tuple2$2char$phsGenericsFun$p*)(__right_value0=make_method_generics_function((char*)come_increment_ref_count(fun_name),(struct list$1sType$ph*)come_increment_ref_count(method_generics_types),info)));
            name=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            gfun=multiple_assign_var2->v2;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            generics_fun_name=(char*)come_increment_ref_count(name);
            __right_value0 = (void*)0;
            fun=((struct sFun*)(__right_value0=map$2char$phsFun$ph_at(info->funcs,generics_fun_name,((void*)0))));
            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(            method_block            ) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                come_params_25=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 572, "struct list$1CVALUE$ph*"))));
                __right_value0 = (void*)0;
                fun_26=((struct sFun*)(__right_value0=map$2char$phsFun$ph_at(info->funcs,generics_fun_name,((void*)0))));
                come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                no_output_come_code=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                if(                !compile_method_block(method_block,(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_25),fun_26,fun_name,method_block_sline,info,(_Bool)1)                ) {
                    __result_obj__99 = (_Bool)0;
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_25, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
                    (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    return __result_obj__99;
                }
                info->no_output_come_code=no_output_come_code;
                __right_value0 = (void*)0;
                method_block_node=((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_25,-1)));
                come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                __right_value0 = (void*)0;
                method_block_lambda_type=(struct sType*)come_increment_ref_count(sType_clone(method_block_node->type));
                __right_value0 = (void*)0;
                method_block_result_type=(struct sType*)come_increment_ref_count(sType_clone(info->come_method_block_function_result_type));
                __right_value0 = (void*)0;
                generics_fun_method_block_lambda_type=((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(generics_fun->mParamTypes,-1)));
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                generics_fun_method_block_result_type=generics_fun_method_block_lambda_type->mResultType;
                if(                generics_fun_method_block_result_type->mClass->mMethodGenerics                ) {
                    method_generics_num=generics_fun_method_block_result_type->mClass->mMethodGenericsNum;
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    list$1sType$ph_operator_store_element(method_generics_types,method_generics_num,(struct sType*)come_increment_ref_count(sType_clone(method_block_result_type)));
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
                n=0;
                for(                o2_saved_30=(struct list$1sType$ph*)come_increment_ref_count(generics_fun_method_block_lambda_type->mParamTypes),it_32=list$1sType$ph_begin(o2_saved_30)                ;                !list$1sType$ph_end(o2_saved_30)                ;                it_32=list$1sType$ph_next(o2_saved_30)                ){
                    if(                    it_32->mClass->mMethodGenerics                    ) {
                        method_generics_num_34=it_32->mClass->mMethodGenericsNum;
                        __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        __right_value2 = (void*)0;
                        __right_value3 = (void*)0;
                        list$1sType$ph_operator_store_element(method_generics_types,method_generics_num_34,(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value2=list$1sType$ph_operator_load_element(method_block_lambda_type->mParamTypes,n))))));
                        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        come_call_finalizer(sType_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    }
                    n++;
                }
                come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_30, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_25, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, method_block_lambda_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, method_block_result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            come_params_35=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 604, "struct list$1CVALUE$ph*"))));
            i_36=0;
            result_type_37=((void*)0);
            for(            o2_saved_38=params,it_39=list$1tuple2$2char$phsNode$ph$ph_begin(o2_saved_38)            ;            !list$1tuple2$2char$phsNode$ph$ph_end(o2_saved_38)            ;            it_39=list$1tuple2$2char$phsNode$ph$ph_next(o2_saved_38)            ){
                multiple_assign_var3=it_39;
                label_40=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                node_41=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
                Value_42=node_compile(node_41,info);
                if(                !Value_42                ) {
                    __result_obj__113 = (_Bool)0;
                    (label_40 = come_decrement_ref_count(label_40, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((node_41) ? node_41 = come_decrement_ref_count(node_41, ((struct sNode*)node_41)->finalize, ((struct sNode*)node_41)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
                    (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_35, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, result_type_37, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    return __result_obj__113;
                }
                else {
                }
                __right_value0 = (void*)0;
                come_value_43=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                __right_value0 = (void*)0;
                __dec_obj78=come_value_43->type,
                come_value_43->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_43->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
                come_call_finalizer(sType_finalize, __dec_obj78,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                list$1CVALUE$ph_add(come_params_35,(struct CVALUE*)come_increment_ref_count(come_value_43));
                (label_40 = come_decrement_ref_count(label_40, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node_41) ? node_41 = come_decrement_ref_count(node_41, ((struct sNode*)node_41)->finalize, ((struct sNode*)node_41)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, come_value_43, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            generics_fun->mResultType->mClass->mMethodGenerics            ) {
                method_generics_num_46=generics_fun->mResultType->mClass->mMethodGenericsNum;
                if(                info->function_result_type                ) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    list$1sType$ph_operator_store_element(method_generics_types,method_generics_num_46,(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type)));
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
            }
            n_47=0;
            for(            o2_saved_48=(struct list$1sType$ph*)come_increment_ref_count(generics_fun->mParamTypes),it_49=list$1sType$ph_begin(o2_saved_48)            ;            !list$1sType$ph_end(o2_saved_48)            ;            it_49=list$1sType$ph_next(o2_saved_48)            ){
                if(                it_49->mClass->mMethodGenerics                ) {
                    method_generics_num_50=it_49->mClass->mMethodGenericsNum;
                    if(                    n_47<list$1CVALUE$ph_length(come_params_35)                    ) {
                        __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        __right_value2 = (void*)0;
                        __right_value3 = (void*)0;
                        list$1sType$ph_operator_store_element(method_generics_types,method_generics_num_50,(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value2=list$1CVALUE$ph_operator_load_element(come_params_35,n_47)))->type)));
                        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        come_call_finalizer(CVALUE_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    }
                }
                n_47++;
            }
            come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_48, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            map$2char$phsFun$ph_remove(info->funcs,(char*)come_increment_ref_count(generics_fun_name));
            __right_value0 = (void*)0;
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            multiple_assign_var4=((struct tuple2$2char$phsGenericsFun$p*)(__right_value0=make_method_generics_function((char*)come_increment_ref_count(fun_name),(struct list$1sType$ph*)come_increment_ref_count(method_generics_types),info)));
            name_57=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            gfun_58=multiple_assign_var4->v2;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            __dec_obj82=fun_name,
            fun_name=(char*)come_increment_ref_count(name_57);
            __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_35, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, result_type_37, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_57 = come_decrement_ref_count(name_57, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            __right_value0 = (void*)0;
            multiple_assign_var5=((struct tuple2$2char$phsGenericsFun$p*)(__right_value0=make_method_generics_function((char*)come_increment_ref_count(fun_name),(struct list$1sType$ph*)come_increment_ref_count(self->method_generics_types),info)));
            name_59=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            gfun_60=multiple_assign_var5->v2;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            __dec_obj83=fun_name,
            fun_name=(char*)come_increment_ref_count(name_59);
            __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0, (void*)0);
            (name_59 = come_decrement_ref_count(name_59, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    if(    string_operator_equals(fun_name,"__builtin_types_compatible_p")    ) {
        if(        list$1tuple2$2char$phsNode$ph$ph_length(params)!=2        ) {
            err_msg(info,"__builtin_types_compatible_p params error");
            __result_obj__120 = (_Bool)0;
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            return __result_obj__120;
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_params_61=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 658, "struct list$1CVALUE$ph*"))));
        for(        o2_saved_62=params,it_63=list$1tuple2$2char$phsNode$ph$ph_begin(o2_saved_62)        ;        !list$1tuple2$2char$phsNode$ph$ph_end(o2_saved_62)        ;        it_63=list$1tuple2$2char$phsNode$ph$ph_next(o2_saved_62)        ){
            multiple_assign_var6=it_63;
            label_64=(char*)come_increment_ref_count(multiple_assign_var6->v1);
            node_65=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
            Value_66=node_compile(node_65,info);
            if(            !Value_66            ) {
                __result_obj__121 = (_Bool)0;
                (label_64 = come_decrement_ref_count(label_64, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node_65) ? node_65 = come_decrement_ref_count(node_65, ((struct sNode*)node_65)->finalize, ((struct sNode*)node_65)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_61, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                return __result_obj__121;
            }
            else {
            }
            __right_value0 = (void*)0;
            come_value_67=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __right_value0 = (void*)0;
            __dec_obj84=come_value_67->type,
            come_value_67->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_67->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj84,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            list$1CVALUE$ph_push_back(come_params_61,(struct CVALUE*)come_increment_ref_count(come_value_67));
            (label_64 = come_decrement_ref_count(label_64, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node_65) ? node_65 = come_decrement_ref_count(node_65, ((struct sNode*)node_65)->finalize, ((struct sNode*)node_65)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_67, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        __right_value0 = (void*)0;
        type1=(char*)come_increment_ref_count(((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_61,0)))->c_value);
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __right_value0 = (void*)0;
        type2=(char*)come_increment_ref_count(((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_61,1)))->c_value);
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(        string_operator_equals(type1,type2)        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            come_value_68=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 677, "struct CVALUE*"))));
            __right_value0 = (void*)0;
            __dec_obj85=come_value_68->c_value,
            come_value_68->c_value=(char*)come_increment_ref_count(xsprintf("1"));
            __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0, (void*)0);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj86=come_value_68->type,
            come_value_68->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 680, 14),__exception_result_var_b15=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 680, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b15));
            come_call_finalizer(sType_finalize, __dec_obj86,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value_68->var=((void*)0);
            add_come_last_code(info,"%s",come_value_68->c_value);
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_68));
            __result_obj__122 = (_Bool)1;
            come_call_finalizer(CVALUE_finalize, come_value_68, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_61, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (type1 = come_decrement_ref_count(type1, (void*)0, (void*)0, 0, 0, (void*)0));
            (type2 = come_decrement_ref_count(type2, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            return __result_obj__122;
            come_call_finalizer(CVALUE_finalize, come_value_68, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            come_value_69=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 690, "struct CVALUE*"))));
            __right_value0 = (void*)0;
            __dec_obj87=come_value_69->c_value,
            come_value_69->c_value=(char*)come_increment_ref_count(xsprintf("0"));
            __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0, (void*)0);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj88=come_value_69->type,
            come_value_69->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 693, 16),__exception_result_var_b17=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 693, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b17));
            come_call_finalizer(sType_finalize, __dec_obj88,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value_69->var=((void*)0);
            add_come_last_code(info,"%s",come_value_69->c_value);
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_69));
            __result_obj__123 = (_Bool)1;
            come_call_finalizer(CVALUE_finalize, come_value_69, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_61, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (type1 = come_decrement_ref_count(type1, (void*)0, (void*)0, 0, 0, (void*)0));
            (type2 = come_decrement_ref_count(type2, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            return __result_obj__123;
            come_call_finalizer(CVALUE_finalize, come_value_69, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_61, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (type1 = come_decrement_ref_count(type1, (void*)0, (void*)0, 0, 0, (void*)0));
        (type2 = come_decrement_ref_count(type2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(    string_operator_equals(fun_name,"__builtin_memmove")||string_operator_equals(fun_name,"__builtin_memset")||string_operator_equals(fun_name,"__builtin_ffs")||string_operator_equals(fun_name,"__builtin_ffsl")||string_operator_equals(fun_name,"__builtin_ffsll")||string_operator_equals(fun_name,"__builtin_bswap16")||string_operator_equals(fun_name,"__builtin_bswap32")||string_operator_equals(fun_name,"__builtin_bswap64")||string_operator_equals(fun_name,"__builtin_constant_p")||string_operator_equals(fun_name,"__builtin_expect")||string_operator_equals(fun_name,"__builtin___memset_chk")||string_operator_equals(fun_name,"__builtin_object_size")||string_operator_equals(fun_name,"__builtin___memcpy_chk")||string_operator_equals(fun_name,"__builtin___strncpy_chk")||string_operator_equals(fun_name,"__builtin___strncat_chk")||string_operator_equals(fun_name,"__builtin___vsnprintf_chk")||string_operator_equals(fun_name,"__builtin_strrchr")||string_operator_equals(fun_name,"__builtin_clz")||string_operator_equals(fun_name,"__builtin_choose_expr")||string_operator_equals(fun_name,"__dsb")||string_operator_equals(fun_name,"__isb")||string_operator_equals(fun_name,"__dmb")||(strlen(fun_name)==strlen("__builtin_arm_")&&memcmp(fun_name,"__builtin_arm_",strlen("__builtin_arm_"))==0)||string_operator_equals(fun_name,"__c11_atomic_thread_fence")||string_operator_equals(fun_name,"__c11_atomic_signal_fence")||string_operator_equals(fun_name,"__c11_atomic_store")||string_operator_equals(fun_name,"__c11_atomic_load")||string_operator_equals(fun_name,"__c11_atomic_exchange")||string_operator_equals(fun_name,"__c11_atomic_compare_exchange_strong")||string_operator_equals(fun_name,"__c11_atomic_compare_exchange_weak")||string_operator_equals(fun_name,"__c11_atomic_compare_exchange_strong_explicit")||string_operator_equals(fun_name,"__c11_atomic_compare_exchange_weak_explicit")||string_operator_equals(fun_name,"__c11_atomic_exchange_strong")||string_operator_equals(fun_name,"__c11_atomic_exchange_weak")||string_operator_equals(fun_name,"__c11_atomic_fetch_add")||string_operator_equals(fun_name,"__c11_atomic_fetch_sub")||string_operator_equals(fun_name,"__c11_atomic_fetch_and")||string_operator_equals(fun_name,"__c11_atomic_fetch_or")||string_operator_equals(fun_name,"__c11_atomic_fetch_xor")||string_operator_equals(fun_name,"__c11_atomic_fetch_add_explicit")||string_operator_equals(fun_name,"__c11_atomic_fetch_sub_explicit")||string_operator_equals(fun_name,"__c11_atomic_fetch_and_explicit")||string_operator_equals(fun_name,"__c11_atomic_fetch_or_explicit")||string_operator_equals(fun_name,"__c11_atomic_fetch_xor_explicit")||string_operator_equals(fun_name,"__c11_atomic_init")||string_operator_equals(fun_name,"__c11_atomic_is_lock_free")    ) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_params_70=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 744, "struct list$1CVALUE$ph*"))));
        for(        o2_saved_71=params,it_72=list$1tuple2$2char$phsNode$ph$ph_begin(o2_saved_71)        ;        !list$1tuple2$2char$phsNode$ph$ph_end(o2_saved_71)        ;        it_72=list$1tuple2$2char$phsNode$ph$ph_next(o2_saved_71)        ){
            multiple_assign_var7=it_72;
            label_73=(char*)come_increment_ref_count(multiple_assign_var7->v1);
            node_74=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
            Value_75=node_compile(node_74,info);
            if(            !Value_75            ) {
                __result_obj__124 = (_Bool)0;
                (label_73 = come_decrement_ref_count(label_73, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node_74) ? node_74 = come_decrement_ref_count(node_74, ((struct sNode*)node_74)->finalize, ((struct sNode*)node_74)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_70, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                return __result_obj__124;
            }
            else {
            }
            __right_value0 = (void*)0;
            come_value_76=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __right_value0 = (void*)0;
            __dec_obj89=come_value_76->type,
            come_value_76->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_76->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj89,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            list$1CVALUE$ph_push_back(come_params_70,(struct CVALUE*)come_increment_ref_count(come_value_76));
            (label_73 = come_decrement_ref_count(label_73, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node_74) ? node_74 = come_decrement_ref_count(node_74, ((struct sNode*)node_74)->finalize, ((struct sNode*)node_74)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_76, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf_77=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 759, "struct buffer*"))));
        buffer_append_str(buf_77,fun_name);
        buffer_append_str(buf_77,"(");
        j_78=0;
        for(        o2_saved_79=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_70),it_80=list$1CVALUE$ph_begin(o2_saved_79)        ;        !list$1CVALUE$ph_end(o2_saved_79)        ;        it_80=list$1CVALUE$ph_next(o2_saved_79)        ){
            buffer_append_str(buf_77,it_80->c_value);
            if(            j_78!=list$1CVALUE$ph_length(come_params_70)-1            ) {
                buffer_append_str(buf_77,",");
            }
            j_78++;
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_79, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_77,")");
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_81=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 776, "struct CVALUE*"))));
        __right_value0 = (void*)0;
        __dec_obj90=come_value_81->c_value,
        come_value_81->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_77));
        __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0, (void*)0);
        if(        string_operator_equals(fun_name,"__builtin_memmove")||string_operator_equals(fun_name,"__builtin_memset")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj91=come_value_81->type,
            come_value_81->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 780, 18),__exception_result_var_b19=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 780, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b19));
            come_call_finalizer(sType_finalize, __dec_obj91,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__builtin_ffs")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj92=come_value_81->type,
            come_value_81->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 783, 20),__exception_result_var_b21=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 783, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b21));
            come_call_finalizer(sType_finalize, __dec_obj92,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__builtin_ffsl")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj93=come_value_81->type,
            come_value_81->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 786, 22),__exception_result_var_b23=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 786, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b23));
            come_call_finalizer(sType_finalize, __dec_obj93,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__builtin_ffsll")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj94=come_value_81->type,
            come_value_81->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 789, 24),__exception_result_var_b25=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 789, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b25));
            come_call_finalizer(sType_finalize, __dec_obj94,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__builtin_bswap16")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj95=come_value_81->type,
            come_value_81->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 792, 26),__exception_result_var_b27=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 792, "struct sType*")),(char*)come_increment_ref_count(xsprintf("short")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b27));
            come_call_finalizer(sType_finalize, __dec_obj95,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__builtin_bswap32")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj96=come_value_81->type,
            come_value_81->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 795, 28),__exception_result_var_b29=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 795, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b29));
            come_call_finalizer(sType_finalize, __dec_obj96,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__builtin_bswap64")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj97=come_value_81->type,
            come_value_81->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 798, 30),__exception_result_var_b31=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 798, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b31));
            come_call_finalizer(sType_finalize, __dec_obj97,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__builtin_constant_p")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj98=come_value_81->type,
            come_value_81->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 801, 32),__exception_result_var_b33=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 801, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b33));
            come_call_finalizer(sType_finalize, __dec_obj98,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__builtin_expect")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj99=come_value_81->type,
            come_value_81->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 804, 34),__exception_result_var_b35=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 804, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b35));
            come_call_finalizer(sType_finalize, __dec_obj99,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__builtin___memset_chk")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj100=come_value_81->type,
            come_value_81->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 807, 36),__exception_result_var_b37=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 807, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b37));
            come_call_finalizer(sType_finalize, __dec_obj100,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value_81->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name,"__builtin_object_size")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj101=come_value_81->type,
            come_value_81->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 811, 38),__exception_result_var_b39=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 811, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b39));
            come_call_finalizer(sType_finalize, __dec_obj101,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__builtin___memcpy_chk")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj102=come_value_81->type,
            come_value_81->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 814, 40),__exception_result_var_b41=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 814, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b41));
            come_call_finalizer(sType_finalize, __dec_obj102,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value_81->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name,"__builtin___strncpy_chk")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj103=come_value_81->type,
            come_value_81->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 818, 42),__exception_result_var_b43=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 818, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b43));
            come_call_finalizer(sType_finalize, __dec_obj103,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value_81->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name,"__builtin___strncat_chk")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj104=come_value_81->type,
            come_value_81->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 822, 44),__exception_result_var_b45=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 822, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b45));
            come_call_finalizer(sType_finalize, __dec_obj104,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value_81->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name,"__builtin_strrchr")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj105=come_value_81->type,
            come_value_81->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 826, 46),__exception_result_var_b47=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 826, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b47));
            come_call_finalizer(sType_finalize, __dec_obj105,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value_81->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name,"__builtin___vsnprintf_chk")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj106=come_value_81->type,
            come_value_81->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 830, 48),__exception_result_var_b49=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 830, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b49));
            come_call_finalizer(sType_finalize, __dec_obj106,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__builtin_clz")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj107=come_value_81->type,
            come_value_81->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 833, 50),__exception_result_var_b51=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 833, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b51));
            come_call_finalizer(sType_finalize, __dec_obj107,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__c11_atomic_thread_fence")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj108=come_value_81->type,
            come_value_81->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 836, 52),__exception_result_var_b53=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 836, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b53));
            come_call_finalizer(sType_finalize, __dec_obj108,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__c11_atomic_signal_fence")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj109=come_value_81->type,
            come_value_81->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 839, 54),__exception_result_var_b55=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 839, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b55));
            come_call_finalizer(sType_finalize, __dec_obj109,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__c11_atomic_exchange")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj110=come_value_81->type,
            come_value_81->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_70,1)))->type));
            come_call_finalizer(sType_finalize, __dec_obj110,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__c11_atomic_exchange_strong")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj111=come_value_81->type,
            come_value_81->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_70,2)))->type));
            come_call_finalizer(sType_finalize, __dec_obj111,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__c11_atomic_exchange_weak")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj112=come_value_81->type,
            come_value_81->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_70,2)))->type));
            come_call_finalizer(sType_finalize, __dec_obj112,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__c11_atomic_store")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj113=come_value_81->type,
            come_value_81->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 851, 56),__exception_result_var_b57=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 851, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b57));
            come_call_finalizer(sType_finalize, __dec_obj113,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__c11_atomic_load")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj114=come_value_81->type,
            come_value_81->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_70,0)))->type));
            come_call_finalizer(sType_finalize, __dec_obj114,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_value_81->type->mPointerNum--;
            come_value_81->type->mAtomic=(_Bool)0;
        }
        else if(        string_operator_equals(fun_name,"__c11_atomic_fetch_add")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj115=come_value_81->type,
            come_value_81->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_70,1)))->type));
            come_call_finalizer(sType_finalize, __dec_obj115,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__c11_atomic_fetch_sub")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj116=come_value_81->type,
            come_value_81->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_70,1)))->type));
            come_call_finalizer(sType_finalize, __dec_obj116,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__c11_atomic_fetch_and")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj117=come_value_81->type,
            come_value_81->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_70,1)))->type));
            come_call_finalizer(sType_finalize, __dec_obj117,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__c11_atomic_fetch_or")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj118=come_value_81->type,
            come_value_81->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_70,1)))->type));
            come_call_finalizer(sType_finalize, __dec_obj118,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__c11_atomic_fetch_xor")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj119=come_value_81->type,
            come_value_81->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_70,1)))->type));
            come_call_finalizer(sType_finalize, __dec_obj119,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__dsb")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj120=come_value_81->type,
            come_value_81->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 874, 58),__exception_result_var_b59=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 874, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b59));
            come_call_finalizer(sType_finalize, __dec_obj120,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__isb")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj121=come_value_81->type,
            come_value_81->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 877, 60),__exception_result_var_b61=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 877, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b61));
            come_call_finalizer(sType_finalize, __dec_obj121,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__dmb")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj122=come_value_81->type,
            come_value_81->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 880, 62),__exception_result_var_b63=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 880, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b63));
            come_call_finalizer(sType_finalize, __dec_obj122,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__builtin_arm_cdp")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj123=come_value_81->type,
            come_value_81->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 883, 64),__exception_result_var_b65=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 883, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b65));
            come_call_finalizer(sType_finalize, __dec_obj123,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__builtin_arm_ldc")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj124=come_value_81->type,
            come_value_81->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 886, 66),__exception_result_var_b67=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 886, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b67));
            come_call_finalizer(sType_finalize, __dec_obj124,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__builtin_arm_stc")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj125=come_value_81->type,
            come_value_81->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 889, 68),__exception_result_var_b69=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 889, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b69));
            come_call_finalizer(sType_finalize, __dec_obj125,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__builtin_arm_stcl")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj126=come_value_81->type,
            come_value_81->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 892, 70),__exception_result_var_b71=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 892, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b71));
            come_call_finalizer(sType_finalize, __dec_obj126,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__builtin_arm_ldcl")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj127=come_value_81->type,
            come_value_81->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 895, 72),__exception_result_var_b73=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 895, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b73));
            come_call_finalizer(sType_finalize, __dec_obj127,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name,"__builtin_choose_expr")        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj128=come_value_81->type,
            come_value_81->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 898, 74),__exception_result_var_b75=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 898, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b75));
            come_call_finalizer(sType_finalize, __dec_obj128,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj129=come_value_81->type,
            come_value_81->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 901, 76),__exception_result_var_b77=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 901, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b77));
            come_call_finalizer(sType_finalize, __dec_obj129,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_value_81->var=((void*)0);
        add_come_last_code(info,"%s",come_value_81->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_81));
        __result_obj__125 = (_Bool)1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_70, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf_77, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_81, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__125;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_70, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf_77, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_81, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    string_operator_equals(fun_name,"__nan")    ) {
        if(        string_operator_equals(fun_name,"__nan")        ) {
            __right_value0 = (void*)0;
            __dec_obj130=fun_name,
            fun_name=(char*)come_increment_ref_count(xsprintf("__builtin_nan"));
            __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0, (void*)0);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf_82=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 917, "struct buffer*"))));
        buffer_append_str(buf_82,fun_name);
        buffer_append_str(buf_82,"(\"\")");
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_83=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 922, "struct CVALUE*"))));
        __right_value0 = (void*)0;
        __dec_obj131=come_value_83->c_value,
        come_value_83->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_82));
        __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __dec_obj132=come_value_83->type,
        come_value_83->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 925, 78),__exception_result_var_b79=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 925, "struct sType*")),(char*)come_increment_ref_count(xsprintf("double")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b79));
        come_call_finalizer(sType_finalize, __dec_obj132,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value_83->var=((void*)0);
        add_come_last_code(info,"%s",come_value_83->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_83));
        __result_obj__126 = (_Bool)1;
        come_call_finalizer(buffer_finalize, buf_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_83, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__126;
        come_call_finalizer(buffer_finalize, buf_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_83, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    string_operator_equals(fun_name,"__builtin_va_arg")    ) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_params_84=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 935, "struct list$1CVALUE$ph*"))));
        i_85=0;
        result_type_86=((void*)0);
        for(        o2_saved_87=params,it_88=list$1tuple2$2char$phsNode$ph$ph_begin(o2_saved_87)        ;        !list$1tuple2$2char$phsNode$ph$ph_end(o2_saved_87)        ;        it_88=list$1tuple2$2char$phsNode$ph$ph_next(o2_saved_87)        ){
            multiple_assign_var8=it_88;
            label_89=(char*)come_increment_ref_count(multiple_assign_var8->v1);
            node_90=(struct sNode*)come_increment_ref_count(multiple_assign_var8->v2);
            Value_91=node_compile(node_90,info);
            if(            !Value_91            ) {
                __result_obj__127 = (_Bool)0;
                (label_89 = come_decrement_ref_count(label_89, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node_90) ? node_90 = come_decrement_ref_count(node_90, ((struct sNode*)node_90)->finalize, ((struct sNode*)node_90)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, result_type_86, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                return __result_obj__127;
            }
            else {
            }
            __right_value0 = (void*)0;
            come_value_92=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __right_value0 = (void*)0;
            __dec_obj133=come_value_92->type,
            come_value_92->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_92->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj133,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            list$1CVALUE$ph_add(come_params_84,(struct CVALUE*)come_increment_ref_count(come_value_92));
            __dec_obj134=result_type_86,
            result_type_86=(struct sType*)come_increment_ref_count(come_value_92->type);
            come_call_finalizer(sType_finalize, __dec_obj134,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            (label_89 = come_decrement_ref_count(label_89, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node_90) ? node_90 = come_decrement_ref_count(node_90, ((struct sNode*)node_90)->finalize, ((struct sNode*)node_90)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf_93=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 955, "struct buffer*"))));
        buffer_append_str(buf_93,fun_name);
        buffer_append_str(buf_93,"(");
        j_94=0;
        for(        o2_saved_95=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_84),it_96=list$1CVALUE$ph_begin(o2_saved_95)        ;        !list$1CVALUE$ph_end(o2_saved_95)        ;        it_96=list$1CVALUE$ph_next(o2_saved_95)        ){
            buffer_append_str(buf_93,it_96->c_value);
            if(            j_94!=list$1CVALUE$ph_length(come_params_84)-1            ) {
                buffer_append_str(buf_93,",");
            }
            j_94++;
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_95, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_93,")");
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_97=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 972, "struct CVALUE*"))));
        __right_value0 = (void*)0;
        __dec_obj135=come_value_97->c_value,
        come_value_97->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_93));
        __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj136=come_value_97->type,
        come_value_97->type=(struct sType*)come_increment_ref_count(result_type_86);
        come_call_finalizer(sType_finalize, __dec_obj136,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value_97->var=((void*)0);
        add_come_last_code(info,"%s",come_value_97->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_97));
        __result_obj__128 = (_Bool)1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type_86, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf_93, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__128;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type_86, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf_93, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    string_operator_equals(fun_name,"__builtin_va_copy")    ) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_params_98=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 984, "struct list$1CVALUE$ph*"))));
        i_99=0;
        for(        o2_saved_100=params,it_101=list$1tuple2$2char$phsNode$ph$ph_begin(o2_saved_100)        ;        !list$1tuple2$2char$phsNode$ph$ph_end(o2_saved_100)        ;        it_101=list$1tuple2$2char$phsNode$ph$ph_next(o2_saved_100)        ){
            multiple_assign_var9=it_101;
            label_102=(char*)come_increment_ref_count(multiple_assign_var9->v1);
            node_103=(struct sNode*)come_increment_ref_count(multiple_assign_var9->v2);
            Value_104=node_compile(node_103,info);
            if(            !Value_104            ) {
                __result_obj__129 = (_Bool)0;
                (label_102 = come_decrement_ref_count(label_102, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node_103) ? node_103 = come_decrement_ref_count(node_103, ((struct sNode*)node_103)->finalize, ((struct sNode*)node_103)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                return __result_obj__129;
            }
            else {
            }
            __right_value0 = (void*)0;
            come_value_105=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __right_value0 = (void*)0;
            __dec_obj137=come_value_105->type,
            come_value_105->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_105->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj137,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            list$1CVALUE$ph_add(come_params_98,(struct CVALUE*)come_increment_ref_count(come_value_105));
            (label_102 = come_decrement_ref_count(label_102, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node_103) ? node_103 = come_decrement_ref_count(node_103, ((struct sNode*)node_103)->finalize, ((struct sNode*)node_103)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_105, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf_106=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1001, "struct buffer*"))));
        buffer_append_str(buf_106,fun_name);
        buffer_append_str(buf_106,"(");
        j_107=0;
        for(        o2_saved_108=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_98),it_109=list$1CVALUE$ph_begin(o2_saved_108)        ;        !list$1CVALUE$ph_end(o2_saved_108)        ;        it_109=list$1CVALUE$ph_next(o2_saved_108)        ){
            buffer_append_str(buf_106,it_109->c_value);
            if(            j_107!=list$1CVALUE$ph_length(come_params_98)-1            ) {
                buffer_append_str(buf_106,",");
            }
            j_107++;
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_106,")");
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        result_type_110=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 1018, 82),__exception_result_var_b83=(come_push_stackframe("05call.c", 1018, 80),__exception_result_var_b81=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 1018, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b81), come_pop_stackframe(), __exception_result_var_b83));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_111=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1020, "struct CVALUE*"))));
        __right_value0 = (void*)0;
        __dec_obj138=come_value_111->c_value,
        come_value_111->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_106));
        __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj139=come_value_111->type,
        come_value_111->type=(struct sType*)come_increment_ref_count(result_type_110);
        come_call_finalizer(sType_finalize, __dec_obj139,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value_111->var=((void*)0);
        add_come_last_code(info,"%s",come_value_111->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_111));
        __result_obj__130 = (_Bool)1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__130;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    string_operator_equals(fun_name,"string")    ) {
        __right_value0 = (void*)0;
        __dec_obj140=fun_name,
        fun_name=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else if(    string_operator_equals(fun_name,"wstring")    ) {
        __right_value0 = (void*)0;
        __dec_obj141=fun_name,
        fun_name=(char*)come_increment_ref_count(__builtin_string("__builtin_wstring"));
        __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else if(    string_operator_equals(fun_name,"inherit")    ) {
        p=info->come_fun->mName;
        version=0;
        while(        *p        ) {
            if(            *p==95&&*(p+1)==118&&isdigit(*(p+2))            ) {
                p2=p+2;
                version=0;
                while(                isdigit(*p2)                ) {
                    version=version*10+(*p2-48);
                    p2++;
                }
                break;
            }
            else {
                p++;
            }
        }
        char real_fun_name[2048];
        memset(&real_fun_name, 0, sizeof(real_fun_name));
        memcpy(real_fun_name,info->come_fun->mName,p-info->come_fun->mName);
        real_fun_name[p-info->come_fun->mName]=0;
        for(        i_112=version-1        ;        i_112>=1        ;        i_112--        ){
            __right_value0 = (void*)0;
            new_fun_name=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name,i_112));
            if(            __right_value0 = (void*)0,             ({(_conditional_value_X0=(((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)))));            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            _conditional_value_X0;})            ) {
                __right_value0 = (void*)0;
                __dec_obj142=fun_name,
                fun_name=(char*)come_increment_ref_count(__builtin_string(new_fun_name));
                __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0, (void*)0);
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(        i_112==0        ) {
            __right_value0 = (void*)0;
            new_fun_name_113=(char*)come_increment_ref_count(xsprintf("%s",real_fun_name));
            if(            __right_value0 = (void*)0,             ({(_conditional_value_X1=(((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_113)))));            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            _conditional_value_X1;})            ) {
                __right_value0 = (void*)0;
                __dec_obj143=fun_name,
                fun_name=(char*)come_increment_ref_count(__builtin_string(new_fun_name_113));
                __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0,0, (void*)0);
            }
            if(            string_operator_equals(fun_name,info->come_fun->mName)            ) {
                err_msg(info,"invalid inherit");
                __result_obj__139 = (_Bool)1;
                (new_fun_name_113 = come_decrement_ref_count(new_fun_name_113, (void*)0, (void*)0, 0, 0, (void*)0));
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                return __result_obj__139;
            }
            (new_fun_name_113 = come_decrement_ref_count(new_fun_name_113, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    else {
        for(        i_114=128        ;        i_114>=1        ;        i_114--        ){
            __right_value0 = (void*)0;
            new_fun_name_115=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name,i_114));
            if(            __right_value0 = (void*)0,             ({(_conditional_value_X2=(((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_115)))));            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            _conditional_value_X2;})            ) {
                __right_value0 = (void*)0;
                __dec_obj144=fun_name,
                fun_name=(char*)come_increment_ref_count(__builtin_string(new_fun_name_115));
                __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0,0, (void*)0);
                (new_fun_name_115 = come_decrement_ref_count(new_fun_name_115, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
            }
            (new_fun_name_115 = come_decrement_ref_count(new_fun_name_115, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    __right_value0 = (void*)0;
    fun_116=((struct sFun*)(__right_value0=map$2char$phsFun$ph_at(info->funcs,fun_name,((void*)0))));
    come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(    fun_116==((void*)0)    ) {
        printf("function not found(%s) at function call(1), so no check types and no heap management\n",fun_name);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_params_117=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1101, "struct list$1CVALUE$ph*"))));
        i_118=0;
        result_type_119=((void*)0);
        for(        o2_saved_120=params,it_121=list$1tuple2$2char$phsNode$ph$ph_begin(o2_saved_120)        ;        !list$1tuple2$2char$phsNode$ph$ph_end(o2_saved_120)        ;        it_121=list$1tuple2$2char$phsNode$ph$ph_next(o2_saved_120)        ){
            multiple_assign_var10=it_121;
            label_122=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            node_123=(struct sNode*)come_increment_ref_count(multiple_assign_var10->v2);
            Value_124=node_compile(node_123,info);
            if(            !Value_124            ) {
                __result_obj__140 = (_Bool)0;
                (label_122 = come_decrement_ref_count(label_122, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node_123) ? node_123 = come_decrement_ref_count(node_123, ((struct sNode*)node_123)->finalize, ((struct sNode*)node_123)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, result_type_119, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                return __result_obj__140;
            }
            else {
            }
            __right_value0 = (void*)0;
            come_value_125=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __right_value0 = (void*)0;
            __dec_obj145=come_value_125->type,
            come_value_125->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_125->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj145,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            list$1CVALUE$ph_add(come_params_117,(struct CVALUE*)come_increment_ref_count(come_value_125));
            __dec_obj146=result_type_119,
            result_type_119=(struct sType*)come_increment_ref_count(come_value_125->type);
            come_call_finalizer(sType_finalize, __dec_obj146,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            (label_122 = come_decrement_ref_count(label_122, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node_123) ? node_123 = come_decrement_ref_count(node_123, ((struct sNode*)node_123)->finalize, ((struct sNode*)node_123)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_125, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf_126=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1121, "struct buffer*"))));
        buffer_append_str(buf_126,fun_name);
        buffer_append_str(buf_126,"(");
        j_127=0;
        for(        o2_saved_128=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_117),it_129=list$1CVALUE$ph_begin(o2_saved_128)        ;        !list$1CVALUE$ph_end(o2_saved_128)        ;        it_129=list$1CVALUE$ph_next(o2_saved_128)        ){
            buffer_append_str(buf_126,it_129->c_value);
            if(            j_127!=list$1CVALUE$ph_length(come_params_117)-1            ) {
                buffer_append_str(buf_126,",");
            }
            j_127++;
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_128, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_126,")");
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_130=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1138, "struct CVALUE*"))));
        __right_value0 = (void*)0;
        __dec_obj147=come_value_130->c_value,
        come_value_130->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_126));
        __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __dec_obj148=come_value_130->type,
        come_value_130->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 1140, 83),__exception_result_var_b84=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 1140, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b84));
        come_call_finalizer(sType_finalize, __dec_obj148,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value_130->var=((void*)0);
        add_come_last_code(info,"%s",come_value_130->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_130));
        __result_obj__141 = (_Bool)1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type_119, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__141;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type_119, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __right_value0 = (void*)0;
    result_type_131=(struct sType*)come_increment_ref_count(sType_clone(fun_116->mResultType));
    result_type_131->mStatic=(_Bool)0;
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    param_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 1158, "struct list$1sType$ph*"))));
    for(    o2_saved_132=(struct list$1sType$ph*)come_increment_ref_count(fun_116->mParamTypes),it_133=list$1sType$ph_begin(o2_saved_132)    ;    !list$1sType$ph_end(o2_saved_132)    ;    it_133=list$1sType$ph_next(o2_saved_132)    ){
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        it2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(sType_clone(it_133)),(struct sType*)come_increment_ref_count(info->generics_type),info));
        __right_value0 = (void*)0;
        list$1sType$ph_push_back(param_types,(struct sType*)come_increment_ref_count(sType_clone(it2)));
        come_call_finalizer(sType_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_132, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj149=result_type_131,
    result_type_131=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(result_type_131),(struct sType*)come_increment_ref_count(info->generics_type),info));
    come_call_finalizer(sType_finalize, __dec_obj149,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_params_134=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1166, "struct list$1CVALUE$ph*"))));
    for(    i_135=0    ;    i_135<list$1sType$ph_length(fun_116->mParamTypes)-(((method_block)?(2):(0)))    ;    i_135++    ){
        list$1CVALUE$ph_add(come_params_134,((void*)0));
    }
    for(    o2_saved_136=params,it_137=list$1tuple2$2char$phsNode$ph$ph_begin(o2_saved_136)    ;    !list$1tuple2$2char$phsNode$ph$ph_end(o2_saved_136)    ;    it_137=list$1tuple2$2char$phsNode$ph$ph_next(o2_saved_136)    ){
        multiple_assign_var11=it_137;
        label_138=(char*)come_increment_ref_count(multiple_assign_var11->v1);
        node_139=(struct sNode*)come_increment_ref_count(multiple_assign_var11->v2);
        if(        fun_116->mVarArgs||string_operator_equals(fun_name,"__builtin_va_start")        ) {
        }
        else if(        label_138        ) {
            Value_140=node_compile(node_139,info);
            if(            !Value_140            ) {
                __result_obj__142 = (_Bool)0;
                (label_138 = come_decrement_ref_count(label_138, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node_139) ? node_139 = come_decrement_ref_count(node_139, ((struct sNode*)node_139)->finalize, ((struct sNode*)node_139)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, result_type_131, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_134, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__142;
            }
            else {
            }
            __right_value0 = (void*)0;
            come_value_141=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __right_value0 = (void*)0;
            __dec_obj150=come_value_141->type,
            come_value_141->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_141->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj150,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            n_142=0;
            for(            o2_saved_143=(struct list$1char$ph*)come_increment_ref_count(fun_116->mParamNames),it_145=list$1char$ph_begin(o2_saved_143)            ;            !list$1char$ph_end(o2_saved_143)            ;            it_145=list$1char$ph_next(o2_saved_143)            ){
                if(                string_operator_equals(label_138,it_145)                ) {
                    break;
                }
                n_142++;
            }
            come_call_finalizer(list$1char$ph$p_finalize, o2_saved_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(            __right_value0 = (void*)0,             ({(_conditional_value_X0=(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(param_types,n_142)))));            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            _conditional_value_X0;})            ) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __right_value3 = (void*)0;
                check_assign_type(((char*)(__right_value2=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value0=string_to_string(fun_name))),((char*)(__right_value1=int_to_string(n_142)))))),((struct sType*)(__right_value3=list$1sType$ph_operator_load_element(param_types,n_142))),come_value_141->type,come_value_141,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
                come_call_finalizer(sType_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
            if(            __right_value0 = (void*)0,             __right_value1 = (void*)0,             ({(_conditional_value_X1=(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(param_types,n_142)))&&((struct sType*)(__right_value1=list$1sType$ph_operator_load_element(param_types,n_142)))->mHeap&&come_value_141->type->mHeap));            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            _conditional_value_X1;})            ) {
                __right_value0 = (void*)0;
                std_move(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(param_types,n_142))),come_value_141->type,come_value_141,info);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
            list$1CVALUE$ph_replace(come_params_134,n_142,(struct CVALUE*)come_increment_ref_count(come_value_141));
            come_call_finalizer(CVALUE_finalize, come_value_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        (label_138 = come_decrement_ref_count(label_138, (void*)0, (void*)0, 0, 0, (void*)0));
        ((node_139) ? node_139 = come_decrement_ref_count(node_139, ((struct sNode*)node_139)->finalize, ((struct sNode*)node_139)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    i_148=0;
    for(    o2_saved_149=params,it_150=list$1tuple2$2char$phsNode$ph$ph_begin(o2_saved_149)    ;    !list$1tuple2$2char$phsNode$ph$ph_end(o2_saved_149)    ;    it_150=list$1tuple2$2char$phsNode$ph$ph_next(o2_saved_149)    ){
        multiple_assign_var12=it_150;
        label_151=(char*)come_increment_ref_count(multiple_assign_var12->v1);
        node_152=(struct sNode*)come_increment_ref_count(multiple_assign_var12->v2);
        if(        fun_116->mVarArgs||string_operator_equals(fun_name,"__builtin_va_start")        ) {
            Value_153=node_compile(node_152,info);
            if(            !Value_153            ) {
                __result_obj__151 = (_Bool)0;
                (label_151 = come_decrement_ref_count(label_151, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node_152) ? node_152 = come_decrement_ref_count(node_152, ((struct sNode*)node_152)->finalize, ((struct sNode*)node_152)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, result_type_131, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_134, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__151;
            }
            else {
            }
            __right_value0 = (void*)0;
            come_value_154=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __right_value0 = (void*)0;
            __dec_obj152=come_value_154->type,
            come_value_154->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_154->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj152,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            while(            (_Bool)1            ) {
                if(                __right_value0 = (void*)0,                 ({(_conditional_value_X0=(((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_134,i_148)))==((void*)0)));                come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                _conditional_value_X0;})                ) {
                    break;
                }
                else {
                    i_148++;
                }
            }
            list$1CVALUE$ph_replace(come_params_134,i_148,(struct CVALUE*)come_increment_ref_count(come_value_154));
            i_148++;
            come_call_finalizer(CVALUE_finalize, come_value_154, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        label_151        ) {
        }
        else {
            Value_155=node_compile(node_152,info);
            if(            !Value_155            ) {
                __result_obj__152 = (_Bool)0;
                (label_151 = come_decrement_ref_count(label_151, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node_152) ? node_152 = come_decrement_ref_count(node_152, ((struct sNode*)node_152)->finalize, ((struct sNode*)node_152)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, result_type_131, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_134, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__152;
            }
            else {
            }
            __right_value0 = (void*)0;
            come_value_156=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __right_value0 = (void*)0;
            __dec_obj153=come_value_156->type,
            come_value_156->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_156->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj153,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            while(            (_Bool)1            ) {
                if(                __right_value0 = (void*)0,                 ({(_conditional_value_X1=(((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_134,i_148)))==((void*)0)));                come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                _conditional_value_X1;})                ) {
                    break;
                }
                else {
                    i_148++;
                }
            }
            if(            __right_value0 = (void*)0,             ({(_conditional_value_X2=(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(param_types,i_148)))));            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            _conditional_value_X2;})            ) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __right_value3 = (void*)0;
                check_assign_type(((char*)(__right_value2=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value0=string_to_string(fun_name))),((char*)(__right_value1=int_to_string(i_148)))))),((struct sType*)(__right_value3=list$1sType$ph_operator_load_element(param_types,i_148))),come_value_156->type,come_value_156,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
                come_call_finalizer(sType_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
            if(            __right_value0 = (void*)0,             __right_value1 = (void*)0,             ({(_conditional_value_X3=(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(param_types,i_148)))&&((struct sType*)(__right_value1=list$1sType$ph_operator_load_element(param_types,i_148)))->mHeap&&come_value_156->type->mHeap));            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            _conditional_value_X3;})            ) {
                __right_value0 = (void*)0;
                std_move(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(param_types,i_148))),come_value_156->type,come_value_156,info);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
            list$1CVALUE$ph_replace(come_params_134,i_148,(struct CVALUE*)come_increment_ref_count(come_value_156));
            i_148++;
            come_call_finalizer(CVALUE_finalize, come_value_156, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        (label_151 = come_decrement_ref_count(label_151, (void*)0, (void*)0, 0, 0, (void*)0));
        ((node_152) ? node_152 = come_decrement_ref_count(node_152, ((struct sNode*)node_152)->finalize, ((struct sNode*)node_152)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    while(    (_Bool)1    ) {
        if(        __right_value0 = (void*)0,         ({(_conditional_value_X0=(((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_134,i_148)))==((void*)0)));        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        _conditional_value_X0;})        ) {
            break;
        }
        else {
            i_148++;
        }
    }
    if(    list$1tuple2$2char$phsNode$ph$ph_length(params)<list$1sType$ph_length(fun_116->mParamTypes)    ) {
        for(        ;        i_148<list$1sType$ph_length(fun_116->mParamTypes)-(((method_block)?(2):(0)))        ;        i_148++        ){
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            default_param=(char*)come_increment_ref_count((char*)come_memdup(((char*)(__right_value0=list$1char$ph_operator_load_element(fun_116->mParamDefaultParametors,i_148))), "05call.c", 1275, "char*"));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            __right_value0 = (void*)0;
            param_name=((char*)(__right_value0=list$1char$ph_operator_load_element(fun_116->mParamNames,i_148)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            if(            __right_value0 = (void*)0,             ({(_conditional_value_X0=(default_param&&string_operator_not_equals(default_param,"")&&((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_134,i_148)))==((void*)0)));            come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            _conditional_value_X0;})            ) {
                source=(struct buffer*)come_increment_ref_count(info->source);
                p_157=info->p;
                head=info->head;
                sline=info->sline;
                __right_value0 = (void*)0;
                __dec_obj154=info->source,
                info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param));
                come_call_finalizer(buffer_finalize, __dec_obj154,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                info->p=info->source->buf;
                info->head=info->source->buf;
                __right_value0 = (void*)0;
                node_158=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                Value_159=node_compile(node_158,info);
                if(                !Value_159                ) {
                    __result_obj__157 = (_Bool)0;
                    come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    ((node_158) ? node_158 = come_decrement_ref_count(node_158, ((struct sNode*)node_158)->finalize, ((struct sNode*)node_158)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (default_param = come_decrement_ref_count(default_param, (void*)0, (void*)0, 0, 0, (void*)0));
                    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, result_type_131, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_134, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result_obj__157;
                }
                else {
                }
                __dec_obj155=info->source,
                info->source=(struct buffer*)come_increment_ref_count(source);
                come_call_finalizer(buffer_finalize, __dec_obj155,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                info->p=p_157;
                info->head=head;
                info->sline=sline;
                __right_value0 = (void*)0;
                come_value_160=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                __right_value0 = (void*)0;
                __dec_obj156=come_value_160->type,
                come_value_160->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_160->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
                come_call_finalizer(sType_finalize, __dec_obj156,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(                __right_value0 = (void*)0,                 ({(_conditional_value_X1=(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(param_types,i_148)))));                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                _conditional_value_X1;})                ) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __right_value3 = (void*)0;
                    check_assign_type(((char*)(__right_value2=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value0=string_to_string(fun_name))),((char*)(__right_value1=int_to_string(i_148)))))),((struct sType*)(__right_value3=list$1sType$ph_operator_load_element(param_types,i_148))),come_value_160->type,come_value_160,(_Bool)0,(_Bool)1,(_Bool)1,info);
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
                    come_call_finalizer(sType_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
                if(                __right_value0 = (void*)0,                 __right_value1 = (void*)0,                 ({(_conditional_value_X2=(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(param_types,i_148)))&&((struct sType*)(__right_value1=list$1sType$ph_operator_load_element(param_types,i_148)))->mHeap&&come_value_160->type->mHeap));                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                _conditional_value_X2;})                ) {
                    __right_value0 = (void*)0;
                    std_move(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(param_types,i_148))),come_value_160->type,come_value_160,info);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
                list$1CVALUE$ph_replace(come_params_134,i_148,(struct CVALUE*)come_increment_ref_count(come_value_160));
                come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((node_158) ? node_158 = come_decrement_ref_count(node_158, ((struct sNode*)node_158)->finalize, ((struct sNode*)node_158)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, come_value_160, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(                __right_value0 = (void*)0,                 ({(_conditional_value_X3=(((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_134,i_148)))==((void*)0)));                come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                _conditional_value_X3;})                ) {
                    err_msg(info,"require parametor(%s)(1) %d",fun_116->mName,i_148);
                    __result_obj__158 = (_Bool)1;
                    (default_param = come_decrement_ref_count(default_param, (void*)0, (void*)0, 0, 0, (void*)0));
                    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, result_type_131, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_134, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result_obj__158;
                }
            }
            (default_param = come_decrement_ref_count(default_param, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    if(    list$1sType$ph_length(fun_116->mParamTypes)-(((method_block)?(2):(0)))!=list$1CVALUE$ph_length(come_params_134)&&!fun_116->mVarArgs&&string_operator_not_equals(fun_name,"__builtin_va_start")&&string_operator_not_equals(fun_name,"__builtin_va_end")    ) {
        err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name,list$1sType$ph_length(fun_116->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params));
        __result_obj__159 = (_Bool)1;
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, result_type_131, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_134, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__159;
    }
    if(    method_block    ) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1327, "struct sNode");
        _inf_obj_value2=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value1=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc_v2(1, sizeof(struct sCurrentNode)*(1), "05call.c", 1327, "struct sCurrentNode*")),info))));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=(void*)sCurrentNode_finalize;
        _inf_value2->clone=(void*)sCurrentNode_clone;
        _inf_value2->compile=(void*)sCurrentNode_compile;
        _inf_value2->sline=(void*)sCurrentNode_sline;
        _inf_value2->sline_real=(void*)sNodeBase_sline_real;
        _inf_value2->sname=(void*)sCurrentNode_sname;
        _inf_value2->terminated=(void*)sNodeBase_terminated;
        _inf_value2->kind=(void*)sCurrentNode_kind;
        _inf_value2->no_mutex=(void*)sNodeBase_no_mutex;
        __right_value2 = (void*)0;
        current_stack_frame_node=(struct sNode*)come_increment_ref_count(_inf_value2);
        come_call_finalizer(sCurrentNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        Value_161=node_compile(current_stack_frame_node,info);
        if(        !Value_161        ) {
            __result_obj__162 = (_Bool)0;
            ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, result_type_131, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_134, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__162;
        }
        else {
        }
        __right_value0 = (void*)0;
        come_value_162=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __right_value0 = (void*)0;
        __dec_obj158=come_value_162->type,
        come_value_162->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_162->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        come_call_finalizer(sType_finalize, __dec_obj158,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        list$1CVALUE$ph_push_back(come_params_134,(struct CVALUE*)come_increment_ref_count(come_value_162));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        method_block2=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1337, "struct buffer*"))));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        method_block_type=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(fun_116->mParamTypes,-1)))));
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __right_value0 = (void*)0;
        class_name=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        ((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(method_block_type->mParamTypes,0)))->mClass=((struct sClass*)(__right_value1=map$2char$phsClass$ph_operator_load_element(info->classes,class_name)));
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sClass_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        current_stack_frame_struct=info->current_stack_frame_struct;
        __right_value0 = (void*)0;
        info->current_stack_frame_struct=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,class_name)));
        come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        info->num_method_block++;
        num_method_block=info->num_method_block;
        if(        string_operator_not_equals(method_block_type->mClass->mName,"lambda")        ) {
            err_msg(info,"This function does not have method block(%s)",fun_name);
            __result_obj__171 = (_Bool)1;
            ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_162, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(buffer_finalize, method_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, method_block_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, result_type_131, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_134, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__171;
        }
        __right_value0 = (void*)0;
        result_type_163=(struct sType*)come_increment_ref_count(sType_clone(method_block_type->mResultType));
        result_type_163->mStatic=(_Bool)0;
        __right_value0 = (void*)0;
        result_type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(result_type_163),(struct sType*)come_increment_ref_count(info->generics_type),info));
        __right_value0 = (void*)0;
        param_types_164=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(method_block_type->mParamTypes));
        param_names=method_block_type->mParamNames;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        all_alhabet_sname=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1361, "struct buffer*"))));
        {
            p_165=info->sname;
            while(            *p_165            ) {
                if(                xisalnum(*p_165)                ) {
                    buffer_append_char(all_alhabet_sname,*p_165++);
                }
                else {
                    p_165++;
                }
            }
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buffer_append_format(method_block2,"%s fun_block%d_%s(",((char*)(__right_value0=make_come_type_name_string(result_type2,info))),num_method_block,((char*)(__right_value1=buffer_to_string(all_alhabet_sname))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        i_148=0;
        for(        o2_saved_166=(struct list$1sType$ph*)come_increment_ref_count(param_types_164),it_167=list$1sType$ph_begin(o2_saved_166)        ;        !list$1sType$ph_end(o2_saved_166)        ;        it_167=list$1sType$ph_next(o2_saved_166)        ){
            param_type=(struct sType*)come_increment_ref_count(it_167);
            if(            i_148==0            ) {
                __right_value0 = (void*)0;
                param_name_168=(char*)come_increment_ref_count(xsprintf("parent"));
                __right_value0 = (void*)0;
                buffer_append_format(method_block2,"%s",((char*)(__right_value0=make_come_define_var(param_type,param_name_168,info))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (param_name_168 = come_decrement_ref_count(param_name_168, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            else if(            i_148==1            ) {
                __right_value0 = (void*)0;
                param_name_169=(char*)come_increment_ref_count(xsprintf("it"));
                __right_value0 = (void*)0;
                param_type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(param_type),(struct sType*)come_increment_ref_count(info->generics_type),info));
                __right_value0 = (void*)0;
                buffer_append_format(method_block2,"%s",((char*)(__right_value0=make_come_define_var(param_type2,param_name_169,info))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (param_name_169 = come_decrement_ref_count(param_name_169, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, param_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                __right_value0 = (void*)0;
                param_name_170=(char*)come_increment_ref_count(xsprintf("it%d",i_148));
                __right_value0 = (void*)0;
                param_type2_171=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(param_type),(struct sType*)come_increment_ref_count(info->generics_type),info));
                __right_value0 = (void*)0;
                buffer_append_format(method_block2,"%s",((char*)(__right_value0=make_come_define_var(param_type2_171,param_name_170,info))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (param_name_170 = come_decrement_ref_count(param_name_170, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, param_type2_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            i_148!=list$1sType$ph_length(param_types_164)-1            ) {
                buffer_append_str(method_block2,",");
            }
            i_148++;
            come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_str(method_block2,")\n");
        __right_value0 = (void*)0;
        buffer_append_str(method_block2,((char*)(__right_value0=buffer_to_string(method_block))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        source3=(struct buffer*)come_increment_ref_count(info->source);
        p_172=info->p;
        head_173=info->head;
        sline_174=info->sline;
        __dec_obj159=info->source,
        info->source=(struct buffer*)come_increment_ref_count(method_block2);
        come_call_finalizer(buffer_finalize, __dec_obj159,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        info->sline=method_block_sline;
        __right_value0 = (void*)0;
        node_175=(struct sNode*)come_increment_ref_count(parse_function(info));
        Value_176=node_compile(node_175,info);
        if(        !Value_176        ) {
            __result_obj__172 = (_Bool)0;
            ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_162, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(buffer_finalize, method_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, method_block_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, result_type_163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(buffer_finalize, all_alhabet_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node_175) ? node_175 = come_decrement_ref_count(node_175, ((struct sNode*)node_175)->finalize, ((struct sNode*)node_175)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, result_type_131, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_134, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__172;
        }
        else {
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        method_block_name=(char*)come_increment_ref_count(xsprintf("fun_block%d_%s",num_method_block,((char*)(__right_value0=buffer_to_string(all_alhabet_sname)))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1428, "struct CVALUE*"))));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        fun2=((struct sFun*)(__right_value1=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value0=__builtin_string(method_block_name))),((void*)0))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        come_call_finalizer(sFun_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(        fun2==((void*)0)        ) {
            err_msg(info,"method block function not found(%s)",method_block_name);
            __result_obj__173 = (_Bool)1;
            ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_162, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(buffer_finalize, method_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, method_block_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, result_type_163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(buffer_finalize, all_alhabet_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node_175) ? node_175 = come_decrement_ref_count(node_175, ((struct sNode*)node_175)->finalize, ((struct sNode*)node_175)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            (method_block_name = come_decrement_ref_count(method_block_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, result_type_131, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_134, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__173;
        }
        method_block_type2=fun2->mLambdaType;
        __right_value0 = (void*)0;
        __dec_obj160=come_value2->c_value,
        come_value2->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name));
        __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        __dec_obj161=come_value2->type,
        come_value2->type=(struct sType*)come_increment_ref_count(sType_clone(method_block_type2));
        come_call_finalizer(sType_finalize, __dec_obj161,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value2->var=((void*)0);
        list$1CVALUE$ph_push_back(come_params_134,(struct CVALUE*)come_increment_ref_count(come_value2));
        __dec_obj162=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3);
        come_call_finalizer(buffer_finalize, __dec_obj162,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        info->p=p_172;
        info->head=head_173;
        info->sline=sline_174;
        info->current_stack_frame_struct=current_stack_frame_struct;
        ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_162, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, method_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, method_block_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, result_type_163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, all_alhabet_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((node_175) ? node_175 = come_decrement_ref_count(node_175, ((struct sNode*)node_175)->finalize, ((struct sNode*)node_175)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        (method_block_name = come_decrement_ref_count(method_block_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    buf_177=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1453, "struct buffer*"))));
    if(    string_operator_equals(fun_name,"__isoc23_strtoll")    ) {
        __right_value0 = (void*)0;
        __dec_obj163=fun_name,
        fun_name=(char*)come_increment_ref_count(xsprintf("strtoll"));
        __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else if(    string_operator_equals(fun_name,"__isoc23_strtoul")    ) {
        __right_value0 = (void*)0;
        __dec_obj164=fun_name,
        fun_name=(char*)come_increment_ref_count(xsprintf("strtoul"));
        __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else if(    string_operator_equals(fun_name,"__isoc23_strtoull")    ) {
        __right_value0 = (void*)0;
        __dec_obj165=fun_name,
        fun_name=(char*)come_increment_ref_count(xsprintf("strtoull"));
        __dec_obj165 = come_decrement_ref_count(__dec_obj165, (void*)0, (void*)0, 0,0, (void*)0);
    }
    buffer_append_str(buf_177,fun_name);
    buffer_append_str(buf_177,"(");
    j_178=0;
    for(    o2_saved_179=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_134),it_180=list$1CVALUE$ph_begin(o2_saved_179)    ;    !list$1CVALUE$ph_end(o2_saved_179)    ;    it_180=list$1CVALUE$ph_next(o2_saved_179)    ){
        buffer_append_str(buf_177,it_180->c_value);
        if(        j_178!=list$1CVALUE$ph_length(come_params_134)-1        ) {
            buffer_append_str(buf_177,",");
        }
        j_178++;
    }
    come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_177,")");
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value_181=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1480, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    __dec_obj166=come_value_181->c_value,
    come_value_181->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_177));
    __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj167=come_value_181->type,
    come_value_181->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_131));
    come_call_finalizer(sType_finalize, __dec_obj167,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(    come_value_181->type    ) {
        come_value_181->type->mStatic=(_Bool)0;
    }
    come_value_181->var=((void*)0);
    if(    fun_116->mResultType->mHeap    ) {
        append_object_to_right_values(come_value_181,(struct sType*)come_increment_ref_count(result_type_131),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    }
    if(    string_operator_equals(info->come_fun->mName,"come_alloc_mem_from_heap_pool")||string_operator_equals(info->come_fun->mName,"come_calloc")||string_operator_equals(info->come_fun->mName,"come_calloc_v2")||string_operator_equals(info->come_fun->mName,"come_free_mem_of_heap_pool")||string_operator_equals(info->come_fun->mName,"come_free")||string_operator_equals(info->come_fun->mName,"come_free_v2")    ) {
    }
    else if(    string_operator_equals(fun_name,"come_alloc_mem_from_heap_pool")||string_operator_equals(fun_name,"null_check")||string_operator_equals(fun_name,"come_push_stackframe")||string_operator_equals(fun_name,"come_push_stackframe_v2")||string_operator_equals(fun_name,"come_pop_stackframe")||string_operator_equals(fun_name,"come_pop_stackframe_v2")    ) {
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj168=come_value_181->c_value,
        come_value_181->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_181->c_value,come_value_181->type,info));
        __dec_obj168 = come_decrement_ref_count(__dec_obj168, (void*)0, (void*)0, 0,0, (void*)0);
    }
    add_come_last_code(info,"%s",come_value_181->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_181));
    info->calling_fun=fun_116;
    __result_obj__174 = (_Bool)1;
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, result_type_131, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_134, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, buf_177, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__174;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__62;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result;
struct list_item$1tuple2$2char$phsNode$ph$ph* it;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__67;
    if(    self==((void*)0)    ) {
        __result_obj__62 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__62, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__62;
    }
    result=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1065, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    it=self->head;
    while(    it!=((void*)0)    ) {
        if(        1        ) {
            __right_value0 = (void*)0;
            list$1tuple2$2char$phsNode$ph$ph_add(result,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it->item)));
        }
        else {
            __right_value0 = (void*)0;
            list$1tuple2$2char$phsNode$ph$ph_add(result,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__67 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__67, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__67;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it;
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__63;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__63 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__63, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__63;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value0 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
struct tuple2$2char$phsNode$ph* __dec_obj63;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_16;
struct tuple2$2char$phsNode$ph* __dec_obj64;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_17;
struct tuple2$2char$phsNode$ph* __dec_obj65;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__64;
    if(    self->len==0    ) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1084, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj63=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj63,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_16=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1094, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_16->prev=self->head;
        litem_16->next=((void*)0);
        __dec_obj64=litem_16->item,
        litem_16->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj64,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_16;
        self->head->next=litem_16;
    }
    else {
        __right_value0 = (void*)0;
        litem_17=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1104, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_17->prev=self->tail;
        litem_17->next=((void*)0);
        __dec_obj65=litem_17->item,
        litem_17->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj65,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_17;
        self->tail=litem_17;
    }
    self->len++;
    __result_obj__64 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__64;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__65;
void* __right_value0 = (void*)0;
struct tuple2$2char$phsNode$ph* result;
char* __dec_obj66;
struct sNode* __dec_obj67;
struct tuple2$2char$phsNode$ph* __result_obj__66;
    if(    self==(void*)0    ) {
        __result_obj__65 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count((void*)0);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__65, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__65;
    }
    result=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj66=result->v1,
        result->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 4, "char*"));
        __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj67=result->v2,
        result->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj67 ? __dec_obj67 = come_decrement_ref_count(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__66 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result);
    come_call_finalizer(tuple2$2char$phsNode$ph_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__66, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__66;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it;
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void sFunCallNode_finalize(struct sFunCallNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)    ) {
        (self->fun_name = come_decrement_ref_count(self->fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)    ) {
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self->params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self){
struct list$1CVALUE$ph* __result_obj__71;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__71 = (struct list$1CVALUE$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, __result_obj__71, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__71;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it;
struct list_item$1CVALUE$ph* prev_it;
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(CVALUE_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result;
struct tuple2$2char$phsNode$ph* __result_obj__73;
struct tuple2$2char$phsNode$ph* __result_obj__74;
struct tuple2$2char$phsNode$ph* result_18;
struct tuple2$2char$phsNode$ph* __result_obj__75;
    if(    self==((void*)0)    ) {
        memset(&result,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__73 = result;
        return __result_obj__73;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__74 = self->it->item;
        return __result_obj__74;
    }
    memset(&result_18,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__75 = result_18;
    return __result_obj__75;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result;
struct tuple2$2char$phsNode$ph* __result_obj__76;
struct tuple2$2char$phsNode$ph* __result_obj__77;
struct tuple2$2char$phsNode$ph* result_19;
struct tuple2$2char$phsNode$ph* __result_obj__78;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__76 = result;
        return __result_obj__76;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__77 = self->it->item;
        return __result_obj__77;
    }
    memset(&result_19,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__78 = result_19;
    return __result_obj__78;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it;
int i;
struct sType* __result_obj__80;
struct sType* default_value;
struct sType* __result_obj__81;
    if(    position<0    ) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(    it!=((void*)0)    ) {
        if(        position==i        ) {
            __result_obj__80 = (struct sType*)come_increment_ref_count(it->item);
            come_call_finalizer(sType_finalize, __result_obj__80, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__80;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct sType*));
    __result_obj__81 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__81, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__81;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it;
int i;
struct sType* __result_obj__82;
struct sType* default_value;
struct sType* __result_obj__83;
    if(    position<0    ) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(    it!=((void*)0)    ) {
        if(        position==i        ) {
            __result_obj__82 = (struct sType*)come_increment_ref_count(it->item);
            come_call_finalizer(sType_finalize, __result_obj__82, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__82;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct sType*));
    __result_obj__83 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__83, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__83;
}

static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self){
struct CVALUE* result;
struct CVALUE* __result_obj__84;
struct CVALUE* __result_obj__85;
struct CVALUE* result_21;
struct CVALUE* __result_obj__86;
    if(    self==((void*)0)    ) {
        memset(&result,0,sizeof(struct CVALUE*));
        __result_obj__84 = result;
        return __result_obj__84;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__85 = self->it->item;
        return __result_obj__85;
    }
    memset(&result_21,0,sizeof(struct CVALUE*));
    __result_obj__86 = result_21;
    return __result_obj__86;
}

static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self){
struct CVALUE* result;
struct CVALUE* __result_obj__87;
struct CVALUE* __result_obj__88;
struct CVALUE* result_23;
struct CVALUE* __result_obj__89;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result,0,sizeof(struct CVALUE*));
        __result_obj__87 = result;
        return __result_obj__87;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__88 = self->it->item;
        return __result_obj__88;
    }
    memset(&result_23,0,sizeof(struct CVALUE*));
    __result_obj__89 = result_23;
    return __result_obj__89;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash;
unsigned int it;
struct sGenericsFun* __result_obj__91;
struct sGenericsFun* __result_obj__92;
struct sGenericsFun* __result_obj__93;
struct sGenericsFun* __result_obj__94;
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__91 = (struct sGenericsFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__91, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__91;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__92 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__92, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__92;
            }
        }
        else {
            __result_obj__93 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sGenericsFun_finalize, __result_obj__93, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__93;
        }
    }
    __result_obj__94 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sGenericsFun_finalize, __result_obj__94, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__94;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mImplType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)    ) {
        (self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)    ) {
        (self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static int list$1char$ph_length(struct list$1char$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash;
unsigned int it;
struct sFun* __result_obj__95;
struct sFun* __result_obj__96;
struct sFun* __result_obj__97;
struct sFun* __result_obj__98;
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__95 = (struct sFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__95, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__95;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__96 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__96, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__96;
            }
        }
        else {
            __result_obj__97 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__97, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__97;
        }
    }
    __result_obj__98 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__98, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__98;
}

static void sFun_finalize(struct sFun* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAllVar!=((void*)0)    ) {
        come_call_finalizer(list$1sVar$ph$p_finalize, self->mAllVar, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)    ) {
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mTextBlock!=((void*)0)    ) {
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mTextBlockSName!=((void*)0)    ) {
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)    ) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static void sBlock_finalize(struct sBlock* self){
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)    ) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it;
int i;
struct CVALUE* __result_obj__100;
struct CVALUE* default_value;
struct CVALUE* __result_obj__101;
    if(    position<0    ) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(    it!=((void*)0)    ) {
        if(        position==i        ) {
            __result_obj__100 = (struct CVALUE*)come_increment_ref_count(it->item);
            come_call_finalizer(CVALUE_finalize, __result_obj__100, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__100;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct CVALUE*));
    __result_obj__101 = (struct CVALUE*)come_increment_ref_count(default_value);
    come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__101, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__101;
}

static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it;
int i;
struct CVALUE* __result_obj__102;
struct CVALUE* default_value;
struct CVALUE* __result_obj__103;
    if(    position<0    ) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(    it!=((void*)0)    ) {
        if(        position==i        ) {
            __result_obj__102 = (struct CVALUE*)come_increment_ref_count(it->item);
            come_call_finalizer(CVALUE_finalize, __result_obj__102, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__102;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct CVALUE*));
    __result_obj__103 = (struct CVALUE*)come_increment_ref_count(default_value);
    come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__103, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__103;
}

static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item){
int len;
int i;
struct sType* default_value;
struct list$1sType$ph* __result_obj__105;
struct list_item$1sType$ph* it;
int i_29;
struct sType* __dec_obj77;
struct list$1sType$ph* __result_obj__106;
    if(    position<0    ) {
        position+=self->len;
    }
    if(    position<0    ) {
        position=0;
    }
    if(    self->len==0||position>=self->len    ) {
        len=self->len;
        for(        i=0        ;        i<position-len        ;        i++        ){
            memset(&default_value,0,sizeof(struct sType*));
            list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(default_value));
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result_obj__105 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__105;
    }
    it=self->head;
    i_29=0;
    while(    it!=((void*)0)    ) {
        if(        position==i_29        ) {
            __dec_obj77=it->item,
            it->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer(sType_finalize, __dec_obj77,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        it=it->next;
        i_29++;
    }
    __result_obj__106 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__106;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value0 = (void*)0;
struct list_item$1sType$ph* litem;
struct sType* __dec_obj74;
struct list_item$1sType$ph* litem_27;
struct sType* __dec_obj75;
struct list_item$1sType$ph* litem_28;
struct sType* __dec_obj76;
struct list$1sType$ph* __result_obj__104;
    if(    self->len==0    ) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1162, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj74=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj74,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_27=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1172, "struct list_item$1sType$ph*"))));
        litem_27->prev=self->head;
        litem_27->next=((void*)0);
        __dec_obj75=litem_27->item,
        litem_27->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj75,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_27;
        self->head->next=litem_27;
    }
    else {
        __right_value0 = (void*)0;
        litem_28=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1182, "struct list_item$1sType$ph*"))));
        litem_28->prev=self->tail;
        litem_28->next=((void*)0);
        __dec_obj76=litem_28->item,
        litem_28->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj76,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_28;
        self->tail=litem_28;
    }
    self->len++;
    __result_obj__104 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__104;
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result;
struct sType* __result_obj__107;
struct sType* __result_obj__108;
struct sType* result_31;
struct sType* __result_obj__109;
    if(    self==((void*)0)    ) {
        memset(&result,0,sizeof(struct sType*));
        __result_obj__107 = result;
        return __result_obj__107;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__108 = self->it->item;
        return __result_obj__108;
    }
    memset(&result_31,0,sizeof(struct sType*));
    __result_obj__109 = result_31;
    return __result_obj__109;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result;
struct sType* __result_obj__110;
struct sType* __result_obj__111;
struct sType* result_33;
struct sType* __result_obj__112;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result,0,sizeof(struct sType*));
        __result_obj__110 = result;
        return __result_obj__110;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__111 = self->it->item;
        return __result_obj__111;
    }
    memset(&result_33,0,sizeof(struct sType*));
    __result_obj__112 = result_33;
    return __result_obj__112;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value0 = (void*)0;
struct list_item$1CVALUE$ph* litem;
struct CVALUE* __dec_obj79;
struct list_item$1CVALUE$ph* litem_44;
struct CVALUE* __dec_obj80;
struct list_item$1CVALUE$ph* litem_45;
struct CVALUE* __dec_obj81;
struct list$1CVALUE$ph* __result_obj__114;
    if(    self->len==0    ) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1084, "struct list_item$1CVALUE$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj79=litem->item,
        litem->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj79,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_44=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1094, "struct list_item$1CVALUE$ph*"))));
        litem_44->prev=self->head;
        litem_44->next=((void*)0);
        __dec_obj80=litem_44->item,
        litem_44->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj80,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_44;
        self->head->next=litem_44;
    }
    else {
        __right_value0 = (void*)0;
        litem_45=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1104, "struct list_item$1CVALUE$ph*"))));
        litem_45->prev=self->tail;
        litem_45->next=((void*)0);
        __dec_obj81=litem_45->item,
        litem_45->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj81,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_45;
        self->tail=litem_45;
    }
    self->len++;
    __result_obj__114 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__114;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char* key){
unsigned int hash;
unsigned int it;
struct map$2char$phsFun$ph* __result_obj__119;
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                list$1char$ph_remove(self->key_list,self->keys[it]);
                self->item_existance[it]=(_Bool)0;
                if(                1                ) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0));
                }
                self->keys[it]=((void*)0);
                if(                1                ) {
                    come_call_finalizer(sFun_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                memset(self->items+it,0,sizeof(struct sFun*));
                self->len--;
                break;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result_obj__119 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__119;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2;
struct list_item$1char$ph* it;
struct list$1char$ph* __result_obj__118;
    it2=0;
    it=self->head;
    while(    it!=((void*)0)    ) {
        if(        string_equals(it->item,item)        ) {
            list$1char$ph_delete(self,it2,it2+1);
            break;
        }
        it2++;
        it=it->next;
    }
    __result_obj__118 = self;
    return __result_obj__118;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp;
struct list$1char$ph* __result_obj__115;
struct list_item$1char$ph* it;
int i;
struct list_item$1char$ph* prev_it;
struct list_item$1char$ph* it_51;
int i_52;
struct list_item$1char$ph* prev_it_53;
struct list_item$1char$ph* it_54;
struct list_item$1char$ph* head_prev_it;
struct list_item$1char$ph* tail_it;
int i_55;
struct list_item$1char$ph* prev_it_56;
struct list$1char$ph* __result_obj__117;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp=tail;
        tail=head;
        head=tmp;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__115 = self;
        return __result_obj__115;
    }
    if(    head==0&&tail==self->len    ) {
        list$1char$ph_reset(self);
    }
    else if(    head==0    ) {
        it=self->head;
        i=0;
        while(        it!=((void*)0)        ) {
            if(            i<tail            ) {
                prev_it=it;
                it=it->next;
                i++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i==tail            ) {
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
    else if(    tail==self->len    ) {
        it_51=self->head;
        i_52=0;
        while(        it_51!=((void*)0)        ) {
            if(            i_52==head            ) {
                self->tail=it_51->prev;
                self->tail->next=((void*)0);
            }
            if(            i_52>=head            ) {
                prev_it_53=it_51;
                it_51=it_51->next;
                i_52++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_53, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_51=it_51->next;
                i_52++;
            }
        }
    }
    else {
        it_54=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_55=0;
        while(        it_54!=((void*)0)        ) {
            if(            i_55==head            ) {
                head_prev_it=it_54->prev;
            }
            if(            i_55==tail            ) {
                tail_it=it_54;
            }
            if(            i_55>=head&&i_55<tail            ) {
                prev_it_56=it_54;
                it_54=it_54->next;
                i_55++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_56, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_54=it_54->next;
                i_55++;
            }
        }
        if(        head_prev_it!=((void*)0)        ) {
            head_prev_it->next=tail_it;
        }
        if(        tail_it!=((void*)0)        ) {
            tail_it->prev=head_prev_it;
        }
    }
    __result_obj__117 = self;
    return __result_obj__117;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it;
struct list_item$1char$ph* prev_it;
struct list$1char$ph* __result_obj__116;
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__116 = self;
    return __result_obj__116;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value;
unsigned int hash;
unsigned int it;
struct sFun* __result_obj__131;
struct sFun* __result_obj__132;
struct sFun* __result_obj__133;
struct sFun* __result_obj__134;
    memset(&default_value,0,sizeof(struct sFun*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__131 = (struct sFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__131, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__131;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__132 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__132, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__132;
            }
        }
        else {
            __result_obj__133 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__133, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__133;
        }
    }
    __result_obj__134 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__134, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__134;
}

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value;
unsigned int hash;
unsigned int it;
struct sFun* __result_obj__135;
struct sFun* __result_obj__136;
struct sFun* __result_obj__137;
struct sFun* __result_obj__138;
    memset(&default_value,0,sizeof(struct sFun*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__135 = (struct sFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__135, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__135;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__136 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__136, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__136;
            }
        }
        else {
            __result_obj__137 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__137, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__137;
        }
    }
    __result_obj__138 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__138, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__138;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result;
char* __result_obj__143;
char* __result_obj__144;
char* result_144;
char* __result_obj__145;
    if(    self==((void*)0)    ) {
        memset(&result,0,sizeof(char*));
        __result_obj__143 = result;
        return __result_obj__143;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__144 = self->it->item;
        return __result_obj__144;
    }
    memset(&result_144,0,sizeof(char*));
    __result_obj__145 = result_144;
    return __result_obj__145;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result;
char* __result_obj__146;
char* __result_obj__147;
char* result_146;
char* __result_obj__148;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result,0,sizeof(char*));
        __result_obj__146 = result;
        return __result_obj__146;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__147 = self->it->item;
        return __result_obj__147;
    }
    memset(&result_146,0,sizeof(char*));
    __result_obj__148 = result_146;
    return __result_obj__148;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item){
int len;
int i;
struct CVALUE* default_value;
struct list$1CVALUE$ph* __result_obj__149;
struct list_item$1CVALUE$ph* it;
int i_147;
struct CVALUE* __dec_obj151;
struct list$1CVALUE$ph* __result_obj__150;
    if(    position<0    ) {
        position+=self->len;
    }
    if(    position<0    ) {
        position=0;
    }
    if(    self->len==0||position>=self->len    ) {
        len=self->len;
        for(        i=0        ;        i<position-len        ;        i++        ){
            memset(&default_value,0,sizeof(struct CVALUE*));
            list$1CVALUE$ph_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value));
            come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        list$1CVALUE$ph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result_obj__149 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__149;
    }
    it=self->head;
    i_147=0;
    while(    it!=((void*)0)    ) {
        if(        position==i_147        ) {
            __dec_obj151=it->item,
            it->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer(CVALUE_finalize, __dec_obj151,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        it=it->next;
        i_147++;
    }
    __result_obj__150 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__150;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it;
int i;
char* __result_obj__153;
char* default_value;
char* __result_obj__154;
    if(    position<0    ) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(    it!=((void*)0)    ) {
        if(        position==i        ) {
            __result_obj__153 = (char*)come_increment_ref_count(it->item);
            (__result_obj__153 = come_decrement_ref_count(__result_obj__153, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__153;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(char*));
    __result_obj__154 = (char*)come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__154;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it;
int i;
char* __result_obj__155;
char* default_value;
char* __result_obj__156;
    if(    position<0    ) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(    it!=((void*)0)    ) {
        if(        position==i        ) {
            __result_obj__155 = (char*)come_increment_ref_count(it->item);
            (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__155;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(char*));
    __result_obj__156 = (char*)come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__156;
}

static void sCurrentNode_finalize(struct sCurrentNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
struct sCurrentNode* __result_obj__160;
void* __right_value0 = (void*)0;
struct sCurrentNode* result;
char* __dec_obj157;
struct sCurrentNode* __result_obj__161;
    if(    self==(void*)0    ) {
        __result_obj__160 = (void*)0;
        return __result_obj__160;
    }
    result=(struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc_v2(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3, "struct sCurrentNode*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj157=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCurrentNode_clone", 5, "char*"));
        __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    __result_obj__161 = result;
    come_call_finalizer(sCurrentNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__161;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value;
unsigned int hash;
unsigned int it;
struct sClass* __result_obj__163;
struct sClass* __result_obj__164;
struct sClass* __result_obj__165;
struct sClass* __result_obj__166;
    memset(&default_value,0,sizeof(struct sClass*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__163 = (struct sClass*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__163, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__163;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__164 = (struct sClass*)come_increment_ref_count(default_value);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__164, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__164;
            }
        }
        else {
            __result_obj__165 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__165, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__165;
        }
    }
    __result_obj__166 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__166, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__166;
}

static void sClass_finalize(struct sClass* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)    ) {
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self->mFields, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)    ) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it;
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value;
unsigned int hash;
unsigned int it;
struct sClass* __result_obj__167;
struct sClass* __result_obj__168;
struct sClass* __result_obj__169;
struct sClass* __result_obj__170;
    memset(&default_value,0,sizeof(struct sClass*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__167 = (struct sClass*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__167, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__167;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__168 = (struct sClass*)come_increment_ref_count(default_value);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__168, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__168;
            }
        }
        else {
            __result_obj__169 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__169, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__169;
        }
    }
    __result_obj__170 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__170, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__170;
}

struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info){
void* __right_value0 = (void*)0;
struct buffer* __dec_obj169;
struct sComeCallNode* __result_obj__175;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj169=self->come_block,
    self->come_block=(struct buffer*)come_increment_ref_count(come_block);
    come_call_finalizer(buffer_finalize, __dec_obj169,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->come_block_sline=come_block_sline;
    __result_obj__175 = (struct sComeCallNode*)come_increment_ref_count(self);
    come_call_finalizer(sComeCallNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sComeCallNode_finalize, __result_obj__175, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__175;
}

char* sComeCallNode_kind(struct sComeCallNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__176;
    __result_obj__176 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sComeCallNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__176 = come_decrement_ref_count(__result_obj__176, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__176;
}

_Bool sComeCallNode_terminated(struct sComeCallNode* self){
    return (_Bool)1;
}

_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info){
int come_block_sline;
struct buffer* come_block;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1CVALUE$ph* come_params;
char* var_name;
void* __right_value2 = (void*)0;
struct sType* type_;
_Bool __result_obj__181;
struct sNode* var_node;
_Bool Value;
_Bool __result_obj__182;
struct CVALUE* thread_var_value;
struct CVALUE* come_value;
char* __dec_obj170;
struct sType* __dec_obj171;
struct sNode* null_node;
_Bool Value_182;
_Bool __result_obj__183;
struct CVALUE* __dec_obj172;
struct sType* __dec_obj173;
struct sNode* _inf_value3;
struct sCurrentNode* _inf_obj_value3;
struct sNode* current_stack_frame_node;
_Bool Value_183;
_Bool __result_obj__184;
struct CVALUE* current_stack_frame_value;
char* fun_name;
struct buffer* come_block2;
char* class_name;
struct sClass* current_stack_frame_struct;
struct buffer* source3;
char* p;
char* head;
int sline;
struct buffer* __dec_obj174;
struct sNode* node;
_Bool in_method_block;
_Bool Value_184;
_Bool __result_obj__185;
struct buffer* __dec_obj175;
struct CVALUE* fun_value;
char* __dec_obj176;
struct sType* __dec_obj177;
struct buffer* buf;
char* fun_name_185;
int j;
struct list$1CVALUE$ph* o2_saved;
struct CVALUE* it;
struct CVALUE* come_value_186;
char* __dec_obj178;
struct sType* type;
struct sType* __dec_obj179;
_Bool __result_obj__186;
    come_block_sline=self->come_block_sline;
    come_block=(struct buffer*)come_increment_ref_count(self->come_block);
    come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1535, "struct list$1CVALUE$ph*"))));
    static int thread_num=0;
    thread_num++;
    __right_value0 = (void*)0;
    var_name=(char*)come_increment_ref_count(xsprintf("__thread_info%d",thread_num));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    type_=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value1=map$2char$phsType$ph_at(info->types,((char*)(__right_value0=xsprintf("pthread_t"))),((void*)0))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(    type_==((void*)0)    ) {
        err_msg(info,"pthread_t is not defined");
        __result_obj__181 = (_Bool)1;
        come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__181;
    }
    __right_value0 = (void*)0;
    var_node=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(var_name),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_),(_Bool)1,((void*)0),info));
    Value=node_compile(var_node,info);
    if(    !Value    ) {
        __result_obj__182 = (_Bool)0;
        come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((var_node) ? var_node = come_decrement_ref_count(var_node, ((struct sNode*)var_node)->finalize, ((struct sNode*)var_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__182;
    }
    else {
    }
    __right_value0 = (void*)0;
    thread_var_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1557, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    __dec_obj170=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("&%s",thread_var_value->c_value));
    __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj171=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(thread_var_value->type);
    come_call_finalizer(sType_finalize, __dec_obj171,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value));
    __right_value0 = (void*)0;
    null_node=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_182=node_compile(null_node,info);
    if(    !Value_182    ) {
        __result_obj__183 = (_Bool)0;
        come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((var_node) ? var_node = come_decrement_ref_count(var_node, ((struct sNode*)var_node)->finalize, ((struct sNode*)var_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, thread_var_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((null_node) ? null_node = come_decrement_ref_count(null_node, ((struct sNode*)null_node)->finalize, ((struct sNode*)null_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__183;
    }
    else {
    }
    __right_value0 = (void*)0;
    __dec_obj172=come_value,
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_call_finalizer(CVALUE_finalize, __dec_obj172,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj173=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
    come_call_finalizer(sType_finalize, __dec_obj173,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1576, "struct sNode");
    _inf_obj_value3=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value1=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc_v2(1, sizeof(struct sCurrentNode)*(1), "05call.c", 1576, "struct sCurrentNode*")),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sCurrentNode_finalize;
    _inf_value3->clone=(void*)sCurrentNode_clone;
    _inf_value3->compile=(void*)sCurrentNode_compile;
    _inf_value3->sline=(void*)sCurrentNode_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sCurrentNode_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sCurrentNode_kind;
    _inf_value3->no_mutex=(void*)sNodeBase_no_mutex;
    __right_value2 = (void*)0;
    current_stack_frame_node=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer(sCurrentNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    Value_183=node_compile(current_stack_frame_node,info);
    if(    !Value_183    ) {
        __result_obj__184 = (_Bool)0;
        come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((var_node) ? var_node = come_decrement_ref_count(var_node, ((struct sNode*)var_node)->finalize, ((struct sNode*)var_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, thread_var_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((null_node) ? null_node = come_decrement_ref_count(null_node, ((struct sNode*)null_node)->finalize, ((struct sNode*)null_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__184;
    }
    else {
    }
    __right_value0 = (void*)0;
    current_stack_frame_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    __right_value0 = (void*)0;
    fun_name=(char*)come_increment_ref_count(xsprintf("__thread_fun%d",thread_num));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_block2=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1586, "struct buffer*"))));
    __right_value0 = (void*)0;
    class_name=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    buffer_append_format(come_block2,"void* %s(%s* parent)\n",fun_name,class_name);
    __right_value0 = (void*)0;
    buffer_append_str(come_block2,((char*)(__right_value0=buffer_to_string(come_block))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    current_stack_frame_struct=info->current_stack_frame_struct;
    __right_value0 = (void*)0;
    info->current_stack_frame_struct=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,class_name)));
    come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    source3=(struct buffer*)come_increment_ref_count(info->source);
    p=info->p;
    head=info->head;
    sline=info->sline;
    __dec_obj174=info->source,
    info->source=(struct buffer*)come_increment_ref_count(come_block2);
    come_call_finalizer(buffer_finalize, __dec_obj174,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=come_block_sline;
    __right_value0 = (void*)0;
    node=(struct sNode*)come_increment_ref_count(parse_function(info));
    in_method_block=info->in_method_block;
    info->in_method_block=(_Bool)1;
    Value_184=node_compile(node,info);
    if(    !Value_184    ) {
        __result_obj__185 = (_Bool)0;
        come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((var_node) ? var_node = come_decrement_ref_count(var_node, ((struct sNode*)var_node)->finalize, ((struct sNode*)var_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, thread_var_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((null_node) ? null_node = come_decrement_ref_count(null_node, ((struct sNode*)null_node)->finalize, ((struct sNode*)null_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, current_stack_frame_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, come_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__185;
    }
    else {
    }
    info->in_method_block=in_method_block;
    __dec_obj175=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source3);
    come_call_finalizer(buffer_finalize, __dec_obj175,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    info->p=p;
    info->head=head;
    info->sline=sline;
    info->current_stack_frame_struct=current_stack_frame_struct;
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    fun_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1623, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    __dec_obj176=fun_value->c_value,
    fun_value->c_value=(char*)come_increment_ref_count(xsprintf("(((void* (*)(void*))(%s)))",fun_name));
    __dec_obj176 = come_decrement_ref_count(__dec_obj176, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj177=come_value->type,
    come_value->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj177,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_add(come_params,(struct CVALUE*)come_increment_ref_count(fun_value));
    list$1CVALUE$ph_add(come_params,(struct CVALUE*)come_increment_ref_count(current_stack_frame_value));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1633, "struct buffer*"))));
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    __right_value0 = (void*)0;
    fun_name_185=(char*)come_increment_ref_count(xsprintf("pthread_create"));
    buffer_append_str(buf,"(");
    buffer_append_str(buf,fun_name_185);
    buffer_append_str(buf,"(");
    j=0;
    for(    o2_saved=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params),it=list$1CVALUE$ph_begin(o2_saved)    ;    !list$1CVALUE$ph_end(o2_saved)    ;    it=list$1CVALUE$ph_next(o2_saved)    ){
        buffer_append_str(buf,it->c_value);
        if(        j!=list$1CVALUE$ph_length(come_params)-1        ) {
            buffer_append_str(buf,",");
        }
        j++;
    }
    come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buffer_append_str(buf,")");
    buffer_append_str(buf,", ");
    buffer_append_str(buf,thread_var_value->c_value);
    buffer_append_str(buf,")");
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value_186=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1656, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    __dec_obj178=come_value_186->c_value,
    come_value_186->c_value=(char*)come_increment_ref_count(buffer_to_string(buf));
    __dec_obj178 = come_decrement_ref_count(__dec_obj178, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    type=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value1=map$2char$phsType$ph_at(info->types,((char*)(__right_value0=xsprintf("pthread_t"))),((void*)0))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(    type==((void*)0)    ) {
        err_msg(info,"pthread_t is not defined");
    }
    __dec_obj179=come_value_186->type,
    come_value_186->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer(sType_finalize, __dec_obj179,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value_186->var=((void*)0);
    add_come_last_code(info,"%s",come_value_186->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_186));
    __result_obj__186 = (_Bool)1;
    come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((var_node) ? var_node = come_decrement_ref_count(var_node, ((struct sNode*)var_node)->finalize, ((struct sNode*)var_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, thread_var_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((null_node) ? null_node = come_decrement_ref_count(null_node, ((struct sNode*)null_node)->finalize, ((struct sNode*)null_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, current_stack_frame_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, come_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, fun_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (fun_name_185 = come_decrement_ref_count(fun_name_185, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(CVALUE_finalize, come_value_186, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__186;
}

static void sComeCallNode_finalize(struct sComeCallNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value){
unsigned int hash;
unsigned int it;
struct sType* __result_obj__177;
struct sType* __result_obj__178;
struct sType* __result_obj__179;
struct sType* __result_obj__180;
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__177 = (struct sType*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__177, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__177;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__178 = (struct sType*)come_increment_ref_count(default_value);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__178, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__178;
            }
        }
        else {
            __result_obj__179 = (struct sType*)come_increment_ref_count(default_value);
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sType_finalize, __result_obj__179, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__179;
        }
    }
    __result_obj__180 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__180, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__180;
}

struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNode* __dec_obj180;
struct sComeJoinNode* __result_obj__187;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj180=self->node,
    self->node=(struct sNode*)come_increment_ref_count(node);
    (__dec_obj180 ? __dec_obj180 = come_decrement_ref_count(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__187 = (struct sComeJoinNode*)come_increment_ref_count(self);
    come_call_finalizer(sComeJoinNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sComeJoinNode_finalize, __result_obj__187, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__187;
}

char* sComeJoinNode_kind(struct sComeJoinNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__188;
    __result_obj__188 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sComeJoinNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__188 = come_decrement_ref_count(__result_obj__188, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__188;
}

_Bool sComeJoinNode_terminated(struct sComeJoinNode* self){
    return (_Bool)0;
}

_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info){
struct sNode* node;
_Bool Value;
_Bool __result_obj__189;
void* __right_value0 = (void*)0;
struct CVALUE* come_value;
void* __right_value1 = (void*)0;
struct buffer* buf;
struct CVALUE* come_value_187;
char* __dec_obj181;
void* __right_value2 = (void*)0;
struct sType* __exception_result_var_b86;
struct sType* __exception_result_var_b87;
struct sType* __dec_obj182;
_Bool __result_obj__190;
    node=(struct sNode*)come_increment_ref_count(self->node);
    Value=node_compile(node,info);
    if(    !Value    ) {
        __result_obj__189 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__189;
    }
    else {
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    __right_value0 = (void*)0;
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1703, "struct buffer*"))));
    buffer_append_str(buf,"pthread_join(");
    buffer_append_str(buf,come_value->c_value);
    buffer_append_str(buf,", 0)");
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value_187=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1708, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    __dec_obj181=come_value_187->c_value,
    come_value_187->c_value=(char*)come_increment_ref_count(buffer_to_string(buf));
    __dec_obj181 = come_decrement_ref_count(__dec_obj181, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj182=come_value_187->type,
    come_value_187->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 1710, 85),__exception_result_var_b86=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 1710, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b86));
    come_call_finalizer(sType_finalize, __dec_obj182,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value_187->var=((void*)0);
    add_come_last_code(info,"%s",come_value_187->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_187));
    __result_obj__190 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_187, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__190;
}

static void sComeJoinNode_finalize(struct sComeJoinNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)    ) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNode$ph* vars, struct list$1sBlock$ph* blocks, struct sBlock* else_block, int time_out, struct sInfo* info){
void* __right_value0 = (void*)0;
struct list$1sNode$ph* __dec_obj183;
struct list$1sBlock$ph* __dec_obj184;
struct sBlock* __dec_obj185;
struct sComePollNode* __result_obj__191;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj183=self->vars,
    self->vars=(struct list$1sNode$ph*)come_increment_ref_count(vars);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj183,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj184=self->blocks,
    self->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(blocks);
    come_call_finalizer(list$1sBlock$ph_finalize, __dec_obj184,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj185=self->else_block,
    self->else_block=(struct sBlock*)come_increment_ref_count(else_block);
    come_call_finalizer(sBlock_finalize, __dec_obj185,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->time_out=time_out;
    __result_obj__191 = (struct sComePollNode*)come_increment_ref_count(self);
    come_call_finalizer(sComePollNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, vars, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sBlock_finalize, else_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sComePollNode_finalize, __result_obj__191, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__191;
}

char* sComePollNode_kind(struct sComePollNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__192;
    __result_obj__192 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sComePollNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__192 = come_decrement_ref_count(__result_obj__192, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__192;
}

_Bool sComePollNode_terminated(struct sComePollNode* self){
    return (_Bool)1;
}

_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info){
struct list$1sNode$ph* vars;
struct list$1sBlock$ph* blocks;
int time_out;
int n;
struct list$1sNode$ph* o2_saved;
struct sNode* it;
_Bool Value;
_Bool __result_obj__199;
void* __right_value0 = (void*)0;
struct CVALUE* come_value;
int n_190;
struct list$1sNode$ph* o2_saved_191;
struct sNode* it_192;
_Bool __result_obj__204;
    vars=(struct list$1sNode$ph*)come_increment_ref_count(self->vars);
    blocks=(struct list$1sBlock$ph*)come_increment_ref_count(self->blocks);
    time_out=self->time_out;
    static int var_num=0;
    var_num++;
    add_come_code(info,"struct pollfd fds%d[%d];\n",var_num,list$1sNode$ph_length(vars));
    n=0;
    for(    o2_saved=(struct list$1sNode$ph*)come_increment_ref_count(self->vars),it=list$1sNode$ph_begin(o2_saved)    ;    !list$1sNode$ph_end(o2_saved)    ;    it=list$1sNode$ph_next(o2_saved)    ){
        Value=node_compile(it,info);
        if(        !Value        ) {
            __result_obj__199 = (_Bool)0;
            come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, vars, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sBlock$ph$p_finalize, blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__199;
        }
        else {
        }
        come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        add_come_code(info,"fds%d[%d].fd = %s[0];\n",var_num,n,come_value->c_value);
        add_come_code(info,"fds%d[%d].events = %d;\n",var_num,n,0x0001);
        n++;
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    add_come_code(info,"int poll_ret%d = poll(fds%d, %d, %d);\n",var_num,var_num,list$1sNode$ph_length(vars),time_out);
    add_come_code(info,"if(poll_ret%d > 0) {\n",var_num);
    n_190=0;
    for(    o2_saved_191=(struct list$1sNode$ph*)come_increment_ref_count(self->vars),it_192=list$1sNode$ph_begin(o2_saved_191)    ;    !list$1sNode$ph_end(o2_saved_191)    ;    it_192=list$1sNode$ph_next(o2_saved_191)    ){
        add_come_code(info,"if(fds%d[%d].revents & %d) {\n",var_num,n_190,0x0001);
        __right_value0 = (void*)0;
        transpile_block(((struct sBlock*)(__right_value0=list$1sBlock$ph_operator_load_element(blocks,n_190))),((void*)0),((void*)0),info,(_Bool)0,(_Bool)0);
        come_call_finalizer(sBlock_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        add_come_code(info,"}\n");
        n_190++;
    }
    come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_191, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    add_come_code(info,"}\n");
    add_come_code(info,"else {\n",var_num);
    transpile_block(self->else_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    __result_obj__204 = (_Bool)1;
    come_call_finalizer(list$1sNode$ph$p_finalize, vars, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__204;
}

static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it;
struct list_item$1sBlock$ph* prev_it;
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sBlock$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sBlock$ph$p_finalize(struct list_item$1sBlock$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sBlock_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void sComePollNode_finalize(struct sComePollNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->vars, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)    ) {
        come_call_finalizer(list$1sBlock$ph$p_finalize, self->blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)    ) {
        come_call_finalizer(sBlock_finalize, self->else_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list$1sBlock$ph$p_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it;
struct list_item$1sBlock$ph* prev_it;
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sBlock$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result;
struct sNode* __result_obj__193;
struct sNode* __result_obj__194;
struct sNode* result_188;
struct sNode* __result_obj__195;
    if(    self==((void*)0)    ) {
        memset(&result,0,sizeof(struct sNode*));
        __result_obj__193 = result;
        return __result_obj__193;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__194 = self->it->item;
        return __result_obj__194;
    }
    memset(&result_188,0,sizeof(struct sNode*));
    __result_obj__195 = result_188;
    return __result_obj__195;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result;
struct sNode* __result_obj__196;
struct sNode* __result_obj__197;
struct sNode* result_189;
struct sNode* __result_obj__198;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result,0,sizeof(struct sNode*));
        __result_obj__196 = result;
        return __result_obj__196;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__197 = self->it->item;
        return __result_obj__197;
    }
    memset(&result_189,0,sizeof(struct sNode*));
    __result_obj__198 = result_189;
    return __result_obj__198;
}

static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position){
struct list_item$1sBlock$ph* it;
int i;
struct sBlock* __result_obj__200;
struct sBlock* default_value;
struct sBlock* __result_obj__201;
    if(    position<0    ) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(    it!=((void*)0)    ) {
        if(        position==i        ) {
            __result_obj__200 = (struct sBlock*)come_increment_ref_count(it->item);
            come_call_finalizer(sBlock_finalize, __result_obj__200, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__200;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct sBlock*));
    __result_obj__201 = (struct sBlock*)come_increment_ref_count(default_value);
    come_call_finalizer(sBlock_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sBlock_finalize, __result_obj__201, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__201;
}

static struct sBlock* list$1sBlock$ph_operator_load_element(struct list$1sBlock$ph* self, int position){
struct list_item$1sBlock$ph* it;
int i;
struct sBlock* __result_obj__202;
struct sBlock* default_value;
struct sBlock* __result_obj__203;
    if(    position<0    ) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(    it!=((void*)0)    ) {
        if(        position==i        ) {
            __result_obj__202 = (struct sBlock*)come_increment_ref_count(it->item);
            come_call_finalizer(sBlock_finalize, __result_obj__202, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__202;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct sBlock*));
    __result_obj__203 = (struct sBlock*)come_increment_ref_count(default_value);
    come_call_finalizer(sBlock_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sBlock_finalize, __result_obj__203, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__203;
}

struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2char$phsNode$ph$ph* params, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNode* __dec_obj186;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj187;
struct sLambdaCall* __result_obj__205;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj186=self->node,
    self->node=(struct sNode*)come_increment_ref_count(node);
    (__dec_obj186 ? __dec_obj186 = come_decrement_ref_count(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0, (void*)0) :0);
    __right_value0 = (void*)0;
    __dec_obj187=self->params,
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(params));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj187,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__205 = (struct sLambdaCall*)come_increment_ref_count(self);
    come_call_finalizer(sLambdaCall_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sLambdaCall_finalize, __result_obj__205, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__205;
}

char* sLambdaCall_kind(struct sLambdaCall* self){
void* __right_value0 = (void*)0;
char* __result_obj__206;
    __result_obj__206 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sLambdaCall"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__206 = come_decrement_ref_count(__result_obj__206, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__206;
}

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info){
struct sNode* node;
struct list$1tuple2$2char$phsNode$ph$ph* params;
_Bool Value;
_Bool __result_obj__207;
void* __right_value0 = (void*)0;
struct CVALUE* come_value;
struct sType* lambda_type;
_Bool __result_obj__208;
struct sType* result_type;
void* __right_value1 = (void*)0;
struct list$1CVALUE$ph* come_params;
_Bool __result_obj__209;
int i;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved;
struct tuple2$2char$phsNode$ph* it;
struct tuple2$2char$phsNode$ph* multiple_assign_var13
;char* label=0;
struct sNode* node_193=0;
_Bool Value_194;
_Bool __result_obj__210;
struct CVALUE* come_value_195;
struct sType* __dec_obj188;
_Bool _conditional_value_X0;
void* __right_value2 = (void*)0;
_Bool _conditional_value_X1;
struct buffer* buf;
int j;
struct list$1CVALUE$ph* o2_saved_196;
struct CVALUE* it_197;
struct CVALUE* come_value2;
char* __dec_obj189;
struct sType* __dec_obj190;
_Bool __result_obj__211;
    node=(struct sNode*)come_increment_ref_count(self->node);
    params=self->params;
    Value=node_compile(node,info);
    if(    !Value    ) {
        __result_obj__207 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__207;
    }
    else {
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    lambda_type=come_value->type;
    if(    lambda_type->mResultType==((void*)0)    ) {
        err_msg(info,"invalid lambda type");
        __result_obj__208 = (_Bool)1;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__208;
    }
    __right_value0 = (void*)0;
    result_type=(struct sType*)come_increment_ref_count(sType_clone(lambda_type->mResultType));
    result_type->mStatic=(_Bool)0;
    __right_value0 = (void*)0;
    come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1827, "struct list$1CVALUE$ph*"))));
    if(    list$1sType$ph_length(lambda_type->mParamTypes)!=list$1tuple2$2char$phsNode$ph$ph_length(params)&&!lambda_type->mVarArgs    ) {
        err_msg(info,"invalid param number. function param number is %d. caller param number is %d",list$1sType$ph_length(lambda_type->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params));
        __result_obj__209 = (_Bool)1;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__209;
    }
    i=0;
    for(    o2_saved=params,it=list$1tuple2$2char$phsNode$ph$ph_begin(o2_saved)    ;    !list$1tuple2$2char$phsNode$ph$ph_end(o2_saved)    ;    it=list$1tuple2$2char$phsNode$ph$ph_next(o2_saved)    ){
        multiple_assign_var13=it;
        label=(char*)come_increment_ref_count(multiple_assign_var13->v1);
        node_193=(struct sNode*)come_increment_ref_count(multiple_assign_var13->v2);
        Value_194=node_compile(node_193,info);
        if(        !Value_194        ) {
            __result_obj__210 = (_Bool)0;
            (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node_193) ? node_193 = come_decrement_ref_count(node_193, ((struct sNode*)node_193)->finalize, ((struct sNode*)node_193)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__210;
        }
        else {
        }
        __right_value0 = (void*)0;
        come_value_195=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __right_value0 = (void*)0;
        __dec_obj188=come_value_195->type,
        come_value_195->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_195->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        come_call_finalizer(sType_finalize, __dec_obj188,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(        __right_value0 = (void*)0,         ({(_conditional_value_X0=(lambda_type->mVarArgs&&((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i)))==((void*)0)));        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        _conditional_value_X0;})        ) {
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            check_assign_type(((char*)(__right_value1=xsprintf("calling param #\%s",((char*)(__right_value0=int_to_string(i)))))),((struct sType*)(__right_value2=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i))),come_value_195->type,come_value_195,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            come_call_finalizer(sType_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(            __right_value0 = (void*)0,             ({(_conditional_value_X1=(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i)))->mHeap&&come_value_195->type->mHeap));            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            _conditional_value_X1;})            ) {
                __right_value0 = (void*)0;
                std_move(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i))),come_value_195->type,come_value_195,info);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
        }
        list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value_195));
        i++;
        (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0));
        ((node_193) ? node_193 = come_decrement_ref_count(node_193, ((struct sNode*)node_193)->finalize, ((struct sNode*)node_193)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1859, "struct buffer*"))));
    buffer_append_str(buf,"(");
    buffer_append_str(buf,come_value->c_value);
    buffer_append_str(buf,")");
    buffer_append_str(buf,"(");
    j=0;
    for(    o2_saved_196=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params),it_197=list$1CVALUE$ph_begin(o2_saved_196)    ;    !list$1CVALUE$ph_end(o2_saved_196)    ;    it_197=list$1CVALUE$ph_next(o2_saved_196)    ){
        buffer_append_str(buf,it_197->c_value);
        if(        j!=list$1CVALUE$ph_length(come_params)-1        ) {
            buffer_append_str(buf,",");
        }
        j++;
    }
    come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_196, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buffer_append_str(buf,")");
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1878, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    __dec_obj189=come_value2->c_value,
    come_value2->c_value=(char*)come_increment_ref_count(buffer_to_string(buf));
    __dec_obj189 = come_decrement_ref_count(__dec_obj189, (void*)0, (void*)0, 0,0, (void*)0);
    if(    lambda_type->mResultType->mHeap    ) {
        append_object_to_right_values(come_value2,(struct sType*)come_increment_ref_count(lambda_type->mResultType),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    }
    __right_value0 = (void*)0;
    __dec_obj190=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_clone(result_type));
    come_call_finalizer(sType_finalize, __dec_obj190,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(    come_value2->type    ) {
        come_value2->type->mStatic=(_Bool)0;
    }
    come_value2->var=((void*)0);
    add_come_last_code(info,"%s",come_value2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2));
    __result_obj__211 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__211;
}

static void sLambdaCall_finalize(struct sLambdaCall* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)    ) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)    ) {
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self->params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sType* __dec_obj191;
struct sVarArgTypeName* __result_obj__212;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj191=self->type,
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer(sType_finalize, __dec_obj191,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__212 = (struct sVarArgTypeName*)come_increment_ref_count(self);
    come_call_finalizer(sVarArgTypeName_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sVarArgTypeName_finalize, __result_obj__212, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__212;
}

char* sVarArgTypeName_kind(struct sVarArgTypeName* self){
void* __right_value0 = (void*)0;
char* __result_obj__213;
    __result_obj__213 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sVarArgTypeName"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__213 = come_decrement_ref_count(__result_obj__213, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__213;
}

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info){
struct sType* type;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct CVALUE* come_value;
char* __dec_obj192;
struct sType* __dec_obj193;
_Bool __result_obj__214;
    type=(struct sType*)come_increment_ref_count(self->type);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1917, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    __dec_obj192=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(make_type_name_string(type,info,(_Bool)0,(_Bool)0,(_Bool)0));
    __dec_obj192 = come_decrement_ref_count(__dec_obj192, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj193=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer(sType_finalize, __dec_obj193,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    __result_obj__214 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__214;
}

static void sVarArgTypeName_finalize(struct sVarArgTypeName* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct sInnerAttribute* sInnerAttribute_initialize(struct sInnerAttribute* self, char* attr, struct sInfo* info){
void* __right_value0 = (void*)0;
char* __dec_obj194;
struct sInnerAttribute* __result_obj__215;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj194=self->attr,
    self->attr=(char*)come_increment_ref_count(attr);
    __dec_obj194 = come_decrement_ref_count(__dec_obj194, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__215 = (struct sInnerAttribute*)come_increment_ref_count(self);
    come_call_finalizer(sInnerAttribute_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (attr = come_decrement_ref_count(attr, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sInnerAttribute_finalize, __result_obj__215, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__215;
}

char* sInnerAttribute_kind(struct sInnerAttribute* self){
void* __right_value0 = (void*)0;
char* __result_obj__216;
    __result_obj__216 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sInnerAttribute"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__216 = come_decrement_ref_count(__result_obj__216, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__216;
}

_Bool sInnerAttribute_compile(struct sInnerAttribute* self, struct sInfo* info){
char* attr;
_Bool __result_obj__217;
    attr=(char*)come_increment_ref_count(self->attr);
    add_come_code(info,"__attribute__%s",attr);
    __result_obj__217 = (_Bool)1;
    (attr = come_decrement_ref_count(attr, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__217;
}

static void sInnerAttribute_finalize(struct sInnerAttribute* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->attr!=((void*)0)    ) {
        (self->attr = come_decrement_ref_count(self->attr, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sNode* parse_function_call(char* fun_name, struct sInfo* info, _Bool come_){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1sType$ph* method_generics_types;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var14
;struct sType* type=0;
char* name=0;
_Bool err=0;
int __exception_result_var_b88;
struct list$1tuple2$2char$phsNode$ph$ph* params;
_Bool _va_arg;
char* p;
int sline;
_Bool err_flag;
char* label;
char* __dec_obj195;
char* __dec_obj196;
_Bool no_comma;
_Bool in_fun_param;
_Bool type_name_exp;
struct sNode* node;
struct sNode* __dec_obj197;
struct buffer* method_block;
int method_block_sline;
char* head;
char* tail;
struct buffer* __dec_obj203;
int len;
char* mem;
struct sNode* _inf_value4;
struct sFunCallNode* _inf_obj_value4;
void* __right_value2 = (void*)0;
struct sNode* node_200;
struct sNode* __dec_obj209;
struct sNode* __result_obj__222;
    method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 1955, "struct list$1sType$ph*"))));
    if(    *info->p==60    ) {
        info->p++;
        skip_spaces_and_lf(info);
        while(        (_Bool)1        ) {
            if(            *info->p==0            ) {
                err_msg(info,"unexpected source end");
                exit(2);
            }
            else if(            *info->p==62            ) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==44            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __right_value0 = (void*)0;
                multiple_assign_var14=((struct tuple3$3sType$phchar$phbool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
                name=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                err=multiple_assign_var14->v3;
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(                !err                ) {
                    err_msg(info,"invalid method generics paramtor type");
                    exit(2);
                }
                __right_value0 = (void*)0;
                list$1sType$ph_push_back(method_generics_types,(struct sType*)come_increment_ref_count(sType_clone(type)));
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    parse_sharp_v5(info);
    (come_push_stackframe("05call.c", 1989, 87),__exception_result_var_b88=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b88);
    parse_sharp_v5(info);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05call.c", 1993, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    _va_arg=info->va_arg;
    if(    charp_operator_equals(fun_name,"__builtin_va_arg")    ) {
        info->va_arg=(_Bool)1;
    }
    while(    (_Bool)1    ) {
        if(        *info->p==41        ) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p=info->p;
        sline=info->sline;
        err_flag=(_Bool)0;
        __right_value0 = (void*)0;
        label=(char*)come_increment_ref_count(__builtin_string(""));
        if(        isalpha(*info->p)||*info->p==95        ) {
            __right_value0 = (void*)0;
            __dec_obj195=label,
            label=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj195 = come_decrement_ref_count(__dec_obj195, (void*)0, (void*)0, 0,0, (void*)0);
            err_flag=(_Bool)1;
        }
        if(        err_flag==(_Bool)1&&*info->p==58        ) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj196=label,
            label=((void*)0);
            __dec_obj196 = come_decrement_ref_count(__dec_obj196, (void*)0, (void*)0, 0,0, (void*)0);
            info->p=p;
            info->sline=sline;
        }
        no_comma=info->no_comma;
        info->no_comma=(_Bool)1;
        in_fun_param=info->in_fun_param;
        info->in_fun_param=(_Bool)1;
        type_name_exp=(_Bool)0;
        if(        charp_operator_equals(fun_name,"__builtin_types_compatible_p")        ) {
            type_name_exp=(_Bool)1;
        }
        __right_value0 = (void*)0;
        node=(struct sNode*)come_increment_ref_count(expression_v13(info,type_name_exp));
        __right_value0 = (void*)0;
        __dec_obj197=node,
        node=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node),info));
        (__dec_obj197 ? __dec_obj197 = come_decrement_ref_count(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0,0, (void*)0) :0);
        info->no_comma=no_comma;
        info->in_fun_param=in_fun_param;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_push_back(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "05call.c", 2047, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(label),(struct sNode*)come_increment_ref_count(node))));
        parse_sharp_v5(info);
        if(        *info->p==44        ) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41        ) {
            info->p++;
            skip_spaces_and_lf(info);
            (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            break;
        }
        (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    info->va_arg=_va_arg;
    parse_sharp_v5(info);
    method_block=((void*)0);
    method_block_sline=0;
    if(    *info->p==123    ) {
        head=info->p;
        method_block_sline=info->sline;
        __right_value0 = (void*)0;
        ((char*)(__right_value0=skip_block(info,(_Bool)0)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        tail=info->p;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj203=method_block,
        method_block=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2077, "struct buffer*"))));
        come_call_finalizer(buffer_finalize, __dec_obj203,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        len=tail-head;
        __right_value0 = (void*)0;
        mem=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len+1)), "05call.c", 2080, "char*"));
        memcpy(mem,head,len);
        mem[len]=0;
        buffer_append_str(method_block,mem);
        buffer_append_str(method_block,"\n");
        (mem = come_decrement_ref_count(mem, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    parse_sharp_v5(info);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2090, "struct sNode");
    _inf_obj_value4=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value1=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc_v2(1, sizeof(struct sFunCallNode)*(1), "05call.c", 2090, "struct sFunCallNode*")),fun_name,params,(struct list$1sType$ph*)come_increment_ref_count(method_generics_types),(struct buffer*)come_increment_ref_count(method_block),method_block_sline,info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunCallNode_finalize;
    _inf_value4->clone=(void*)sFunCallNode_clone;
    _inf_value4->compile=(void*)sFunCallNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sFunCallNode_terminated;
    _inf_value4->kind=(void*)sFunCallNode_kind;
    _inf_value4->no_mutex=(void*)sNodeBase_no_mutex;
    node_200=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer(sFunCallNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj209=node_200,
    node_200=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_200),info));
    (__dec_obj209 ? __dec_obj209 = come_decrement_ref_count(__dec_obj209, ((struct sNode*)__dec_obj209)->finalize, ((struct sNode*)__dec_obj209)->_protocol_obj, 0,0, (void*)0) :0);
    parse_sharp_v5(info);
    __result_obj__222 = (struct sNode*)come_increment_ref_count(node_200);
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((node_200) ? node_200 = come_decrement_ref_count(node_200, ((struct sNode*)node_200)->finalize, ((struct sNode*)node_200)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__222) ? __result_obj__222 = come_decrement_ref_count(__result_obj__222, ((struct sNode*)__result_obj__222)->finalize, ((struct sNode*)__result_obj__222)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__222;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value0 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
struct tuple2$2char$phsNode$ph* __dec_obj198;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_198;
struct tuple2$2char$phsNode$ph* __dec_obj199;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_199;
struct tuple2$2char$phsNode$ph* __dec_obj200;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__218;
    if(    self->len==0    ) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1162, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj198=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj198,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_198=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1172, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_198->prev=self->head;
        litem_198->next=((void*)0);
        __dec_obj199=litem_198->item,
        litem_198->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj199,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_198;
        self->head->next=litem_198;
    }
    else {
        __right_value0 = (void*)0;
        litem_199=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1182, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_199->prev=self->tail;
        litem_199->next=((void*)0);
        __dec_obj200=litem_199->item,
        litem_199->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj200,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_199;
        self->tail=litem_199;
    }
    self->len++;
    __result_obj__218 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__218;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2){
char* __dec_obj201;
struct sNode* __dec_obj202;
struct tuple2$2char$phsNode$ph* __result_obj__219;
    __dec_obj201=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj201 = come_decrement_ref_count(__dec_obj201, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj202=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj202 ? __dec_obj202 = come_decrement_ref_count(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__219 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__219, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__219;
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
struct sFunCallNode* __result_obj__220;
void* __right_value0 = (void*)0;
struct sFunCallNode* result;
char* __dec_obj204;
char* __dec_obj205;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj206;
struct list$1sType$ph* __dec_obj207;
struct buffer* __dec_obj208;
struct sFunCallNode* __result_obj__221;
    if(    self==(void*)0    ) {
        __result_obj__220 = (void*)0;
        return __result_obj__220;
    }
    result=(struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc_v2(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "struct sFunCallNode*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj204=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFunCallNode_clone", 5, "char*"));
        __dec_obj204 = come_decrement_ref_count(__dec_obj204, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj205=result->fun_name,
        result->fun_name=(char*)come_increment_ref_count((char*)come_memdup(self->fun_name, "sFunCallNode_clone", 7, "char*"));
        __dec_obj205 = come_decrement_ref_count(__dec_obj205, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj206=result->params,
        result->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->params));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj206,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj207=result->method_generics_types,
        result->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->method_generics_types));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj207,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj208=result->method_block,
        result->method_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->method_block));
        come_call_finalizer(buffer_finalize, __dec_obj208,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->method_block_sline=self->method_block_sline;
    }
    __result_obj__221 = result;
    come_call_finalizer(sFunCallNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__221;
}

struct sNode* expression_node_v1(struct sInfo* info){
struct sNode* __result_obj__223;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    info->no_output_err=(_Bool)0;
    err_msg(info,"invalid character(1)(%d)(%c)",*info->p,*info->p);
    stackframe_v2();
    exit(3);
    __result_obj__223 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__223) ? __result_obj__223 = come_decrement_ref_count(__result_obj__223, ((struct sNode*)__result_obj__223)->finalize, ((struct sNode*)__result_obj__223)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__223;
}

char* parse_inner_attribute(struct sInfo* info){
char* head;
_Bool in_dquort;
int brace_num;
char* tail;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* buf;
char* __result_obj__224;
    head=info->p;
    if(    *info->p==40    ) {
        in_dquort=(_Bool)0;
        brace_num=0;
        while(        *info->p        ) {
            if(            *info->p==34            ) {
                info->p++;
                in_dquort=!in_dquort;
            }
            else if(            in_dquort            ) {
                info->p++;
            }
            else if(            *info->p==40            ) {
                info->p++;
                brace_num++;
            }
            else if(            *info->p==41            ) {
                info->p++;
                brace_num--;
                if(                brace_num==0                ) {
                    break;
                }
            }
            else {
                info->p++;
            }
        }
    }
    skip_spaces_and_lf(info);
    tail=info->p;
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2148, "struct buffer*"))));
    buffer_append(buf,head,tail-head);
    __right_value0 = (void*)0;
    __result_obj__224 = (char*)come_increment_ref_count(((char*)(__right_value0=buffer_to_string(buf))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__224 = come_decrement_ref_count(__result_obj__224, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__224;
}

struct sNode* expression_node_v98(struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
void* __right_value2 = (void*)0;
struct sNode* _inf_value5;
struct sReturnNode* _inf_obj_value5;
void* __right_value3 = (void*)0;
struct sNode* __result_obj__225;
char* head;
struct sNode* value;
char* tail;
struct sNode* __dec_obj210;
struct sNode* _inf_value6;
struct sReturnNode* _inf_obj_value6;
struct sNode* __result_obj__226;
int nest;
char* head_201;
int head_sline;
int sline_real;
char* buf_202;
_Bool is_type_name_;
_Bool is_special_word;
_Bool define_function_pointer_flag;
_Bool lambda_flag;
char* word2;
_Bool fun_name_with_type_name;
char* word2_203;
_Bool call_method_generics_fun_call;
char* __dec_obj211;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
_Bool _conditional_value_X0;
int nest_204;
_Bool inline_asm;
char* __dec_obj212;
char* __dec_obj213;
char* __dec_obj214;
struct sNode* node;
struct sNode* __result_obj__235;
int __exception_result_var_b89;
_Bool no_comma;
struct sNode* exp;
int __exception_result_var_b90;
struct sNode* exp2;
int __exception_result_var_b91;
struct sNode* __result_obj__236;
char* attr;
struct sNode* _inf_value7;
struct sInnerAttribute* _inf_obj_value7;
struct sNode* __result_obj__239;
char* block_text;
char* contents;
struct sNode* _inf_value8;
struct sCSourceNode* _inf_obj_value8;
struct sNode* __result_obj__242;
struct sNode* node_205;
struct sNode* __result_obj__243;
struct sNode* node_206;
struct sNode* __result_obj__244;
struct sNode* node_207;
struct sNode* __result_obj__245;
struct buffer* come_block;
int come_block_sline;
char* head_208;
char* tail_209;
struct buffer* __dec_obj219;
int len;
char* mem;
char* head_210;
_Bool no_output_come_code;
char* tail_211;
struct buffer* __dec_obj220;
int len_212;
char* mem_213;
struct sNode* _inf_value9;
struct sComeCallNode* _inf_obj_value9;
struct sNode* node_214;
struct sNode* __result_obj__248;
struct buffer* come_block_215;
int come_block_sline_216;
int __exception_result_var_b92;
struct sNode* node_217;
int __exception_result_var_b93;
struct sNode* _inf_value10;
struct sComeJoinNode* _inf_obj_value10;
struct sNode* __result_obj__251;
int time_out;
int __exception_result_var_b94;
int __exception_result_var_b95;
struct list$1sNode$ph* vars;
struct list$1sBlock$ph* blocks;
struct sBlock* else_block;
struct sBlock* __dec_obj225;
struct sNode* var_name;
struct sBlock* block;
int __exception_result_var_b96;
struct sNode* _inf_value11;
struct sComePollNode* _inf_obj_value11;
struct sNode* __result_obj__281;
struct sNode* _inf_value12;
struct sFuncNode* _inf_obj_value12;
struct sNode* __result_obj__284;
struct sNode* _inf_value13;
struct sLineNode* _inf_obj_value13;
struct sNode* __result_obj__287;
struct sNode* _inf_value14;
struct sSNameNode* _inf_obj_value14;
struct sNode* __result_obj__290;
struct sNode* _inf_value15;
struct sCallerFuncNode* _inf_obj_value15;
struct sNode* __result_obj__293;
struct sNode* _inf_value16;
struct sCallerLineNode* _inf_obj_value16;
struct sNode* __result_obj__296;
struct sNode* _inf_value17;
struct sCallerSNameNode* _inf_obj_value17;
struct sNode* __result_obj__299;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var15
;struct sType* type=0;
char* name=0;
_Bool err=0;
struct sNode* _inf_value18;
struct sVarArgTypeName* _inf_obj_value18;
struct sNode* __result_obj__302;
struct sNode* node_227;
struct sNode* __result_obj__303;
struct buffer* buf2;
char* word;
int __exception_result_var_b97;
struct list$1sNode$ph* exps;
struct sNode* exp_228;
int __exception_result_var_b98;
struct sNode* _inf_value19;
struct sInlineAssembler* _inf_obj_value19;
struct sNode* __result_obj__306;
struct buffer* fun_name;
struct sType* type_229;
struct sClass* klass;
struct sType* __exception_result_var_b99;
struct sType* __exception_result_var_b100;
struct sType* __dec_obj256;
struct sType* __exception_result_var_b101;
int __exception_result_var_b102;
int __exception_result_var_b103;
char* buf2_230;
struct sNode* node_231;
struct sNode* __result_obj__315;
struct buffer* fun_name_232;
char* buf2_233;
struct sNode* node_234;
struct sNode* __result_obj__316;
struct sNode* node_235;
struct sNode* __result_obj__317;
struct sNode* node_236;
struct sNode* __result_obj__318;
struct sNode* node_237;
struct sNode* __result_obj__319;
struct sNode* node_238;
struct sNode* __result_obj__320;
struct sNode* __result_obj__321;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    parsecmp("return",info)    ) {
        info->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(        *info->p==59        ) {
            _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2165, "struct sNode");
            _inf_obj_value5=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value2=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "05call.c", 2165, "struct sReturnNode*")),((void*)0),(char*)come_increment_ref_count(__builtin_string("0")),info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sReturnNode_finalize;
            _inf_value5->clone=(void*)sReturnNode_clone;
            _inf_value5->compile=(void*)sReturnNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sReturnNode_kind;
            _inf_value5->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__225 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value5)));
            come_call_finalizer(sReturnNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__225) ? __result_obj__225 = come_decrement_ref_count(__result_obj__225, ((struct sNode*)__result_obj__225)->finalize, ((struct sNode*)__result_obj__225)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__225;
        }
        else {
            head=info->p;
            __right_value0 = (void*)0;
            value=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
            tail=info->p;
            __right_value0 = (void*)0;
            __dec_obj210=value,
            value=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value),info));
            (__dec_obj210 ? __dec_obj210 = come_decrement_ref_count(__dec_obj210, ((struct sNode*)__dec_obj210)->finalize, ((struct sNode*)__dec_obj210)->_protocol_obj, 0,0, (void*)0) :0);
            char buf[tail-head+1];
            memset(&buf, 0, sizeof(buf));
            memcpy(buf,head,tail-head);
            buf[tail-head]=0;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2177, "struct sNode");
            _inf_obj_value6=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value2=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "05call.c", 2177, "struct sReturnNode*")),(struct sNode*)come_increment_ref_count(value),(char*)come_increment_ref_count(__builtin_string(buf)),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sReturnNode_finalize;
            _inf_value6->clone=(void*)sReturnNode_clone;
            _inf_value6->compile=(void*)sReturnNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sReturnNode_kind;
            _inf_value6->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value3 = (void*)0;
            __result_obj__226 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value6)));
            ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(sReturnNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__226) ? __result_obj__226 = come_decrement_ref_count(__result_obj__226, ((struct sNode*)__result_obj__226)->finalize, ((struct sNode*)__result_obj__226)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__226;
            ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
    }
    else if(    *info->p==47&&*(info->p+1)==42    ) {
        nest=0;
        while(        1        ) {
            if(            *info->p==47&&*(info->p+1)==42            ) {
                info->p+=2;
                nest++;
            }
            else if(            *info->p==42&&*(info->p+1)==47            ) {
                info->p+=2;
                nest--;
                if(                nest==0                ) {
                    break;
                }
            }
            else if(            *info->p==10            ) {
                info->p++;
                info->sline++;
            }
            else {
                info->p++;
            }
        }
    }
    else if(    *info->p==47&&*(info->p+1)==47    ) {
        info->p+=2;
        while(        1        ) {
            if(            *info->p==10            ) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==0            ) {
                break;
            }
            else {
                info->p++;
            }
        }
    }
    else if(    (isalpha(*info->p)||*info->p==95)&&!((*info->p==76||*info->p==108||*info->p==115||*info->p==83||*info->p==98||*info->p==66||*info->p==104||*info->p==72)&&*(info->p+1)==34||(*info->p==76&&*(info->p+1)==39))    ) {
        head_201=info->p;
        head_sline=info->sline;
        sline_real=info->sline_real;
        info->sline_real=info->sline;
        __right_value0 = (void*)0;
        buf_202=(char*)come_increment_ref_count(backtrace_parse_word(info));
        is_type_name_=is_type_name(buf_202,info);
        static char* is_special_word_array[25]={ "if", "while", "for", "switch", "return", "sizeof", "offsetof", "isheap", "ispointer", "__typeof__"
                                    , "dynamic_typeof", "typeof", "gc_inc", "gc_dec", "gc_dec_nofree", "case", "_Alignof"
                                    , "_Alignas", "__alignof__", "_Atomic", "borrow", "dupe", "clone", "__builtin_offsetof", "_Generic" };
        is_special_word=charpa_contained(is_special_word_array,25,buf_202);
        define_function_pointer_flag=(_Bool)0;
        if(        !is_special_word&&*info->p==40&&*(info->p+1)!=42        ) {
            __right_value0 = (void*)0;
            ((struct tuple3$3sType$phchar$phbool$*)(__right_value0=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(            *info->p==40            ) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    define_function_pointer_flag=(_Bool)1;
                }
            }
            info->p=head_201;
            info->sline=head_sline;
        }
        lambda_flag=(_Bool)0;
        if(        !is_special_word&&is_type_name_        ) {
            info->p=head_201;
            info->sline=head_sline;
            __right_value0 = (void*)0;
            ((struct tuple3$3sType$phchar$phbool$*)(__right_value0=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            __right_value0 = (void*)0;
            word2=(char*)come_increment_ref_count(backtrace_parse_word(info));
            if(            string_operator_equals(word2,"lambda")            ) {
                lambda_flag=(_Bool)1;
            }
            info->p=head_201;
            info->sline=head_sline;
            (word2 = come_decrement_ref_count(word2, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        fun_name_with_type_name=(_Bool)0;
        if(        !is_special_word        ) {
            info->p=head_201;
            info->sline=head_sline;
            info->no_output_err=(_Bool)1;
            if(            isalpha(*info->p)||*info->p==95            ) {
                __right_value0 = (void*)0;
                word2_203=(char*)come_increment_ref_count(parse_word(info));
                (word2_203 = come_decrement_ref_count(word2_203, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            while(            *info->p==42            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58&&*(info->p+1)==58            ) {
                info->p+=2;
                skip_spaces_and_lf(info);
                if(                isalpha(*info->p)||*info->p==95                ) {
                    fun_name_with_type_name=(_Bool)1;
                }
            }
            info->no_output_err=(_Bool)0;
            info->p=head_201;
            info->sline=head_sline;
        }
        call_method_generics_fun_call=(_Bool)0;
        if(        !is_special_word        ) {
            info->p=head_201;
            info->sline=head_sline;
            if(            isalpha(*info->p)||*info->p==95            ) {
                __right_value0 = (void*)0;
                __dec_obj211=buf_202,
                buf_202=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj211 = come_decrement_ref_count(__dec_obj211, (void*)0, (void*)0, 0,0, (void*)0);
            }
            if(            __right_value0 = (void*)0,             __right_value1 = (void*)0,             __right_value2 = (void*)0,             __right_value3 = (void*)0,             ({(_conditional_value_X0=(!is_type_name(buf_202,info)&&((struct sVar*)(__right_value2=map$2char$phsVar$ph_operator_load_element(info->lv_table->mVars,((char*)(__right_value1=__builtin_string(buf_202))))))==((void*)0)&&((struct sVar*)(__right_value5=map$2char$phsVar$ph_operator_load_element(info->gv_table->mVars,((char*)(__right_value4=__builtin_string(buf_202))))))==((void*)0)&&*info->p==60));            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            come_call_finalizer(sVar_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0));
            come_call_finalizer(sVar_finalize, __right_value5, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            _conditional_value_X0;})            ) {
                nest_204=0;
                while(                *info->p                ) {
                    if(                    *info->p==60                    ) {
                        info->p++;
                        nest_204++;
                    }
                    else if(                    *info->p==62                    ) {
                        info->p++;
                        if(                        nest_204==0                        ) {
                            break;
                        }
                    }
                    else if(                    *info->p==10||*info->p==59                    ) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
                if(                *info->p==40                ) {
                    call_method_generics_fun_call=(_Bool)1;
                }
            }
            info->p=head_201;
            info->sline=head_sline;
        }
        inline_asm=(_Bool)0;
        if(        !is_special_word        ) {
            info->p=head_201;
            info->sline=head_sline;
            __right_value0 = (void*)0;
            __dec_obj212=buf_202,
            buf_202=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj212 = come_decrement_ref_count(__dec_obj212, (void*)0, (void*)0, 0,0, (void*)0);
            if(            string_operator_equals(buf_202,"asm")||string_operator_equals(buf_202,"__asm")||string_operator_equals(buf_202,"__asm__")            ) {
                if(                *info->p==40                ) {
                    inline_asm=(_Bool)1;
                }
                else {
                    if(                    isalpha(*info->p)||*info->p==95                    ) {
                        __right_value0 = (void*)0;
                        __dec_obj213=buf_202,
                        buf_202=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj213 = come_decrement_ref_count(__dec_obj213, (void*)0, (void*)0, 0,0, (void*)0);
                        if(                        *info->p==40                        ) {
                            inline_asm=(_Bool)1;
                        }
                    }
                }
            }
            info->p=head_201;
            info->sline=head_sline;
        }
        parse_sharp_v5(info);
        __right_value0 = (void*)0;
        __dec_obj214=buf_202,
        buf_202=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj214 = come_decrement_ref_count(__dec_obj214, (void*)0, (void*)0, 0,0, (void*)0);
        parse_sharp_v5(info);
        if(        lambda_flag        ) {
            info->p=head_201;
            info->sline=head_sline;
            __right_value0 = (void*)0;
            node=(struct sNode*)come_increment_ref_count(parse_function(info));
            info->sline_real=sline_real;
            __result_obj__235 = (struct sNode*)come_increment_ref_count(node);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            (buf_202 = come_decrement_ref_count(buf_202, (void*)0, (void*)0, 0, 0, (void*)0));
            ((__result_obj__235) ? __result_obj__235 = come_decrement_ref_count(__result_obj__235, ((struct sNode*)__result_obj__235)->finalize, ((struct sNode*)__result_obj__235)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__235;
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(        (string_operator_equals(buf_202,"_Static_assert")||string_operator_equals(buf_202,"static_assert"))&&*info->p==40        ) {
            (come_push_stackframe("05call.c", 2396, 88),__exception_result_var_b89=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b89);
            no_comma=info->no_comma;
            info->no_comma=(_Bool)1;
            __right_value0 = (void*)0;
            exp=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
            info->no_comma=no_comma;
            (come_push_stackframe("05call.c", 2403, 89),__exception_result_var_b90=expected_next_character(44,info), come_pop_stackframe(), __exception_result_var_b90);
            __right_value0 = (void*)0;
            exp2=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
            (come_push_stackframe("05call.c", 2407, 90),__exception_result_var_b91=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b91);
            __right_value0 = (void*)0;
            __result_obj__236 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=static_assert_node((struct sNode*)come_increment_ref_count(exp),(struct sNode*)come_increment_ref_count(exp2),info))));
            ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            ((exp2) ? exp2 = come_decrement_ref_count(exp2, ((struct sNode*)exp2)->finalize, ((struct sNode*)exp2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            (buf_202 = come_decrement_ref_count(buf_202, (void*)0, (void*)0, 0, 0, (void*)0));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__236) ? __result_obj__236 = come_decrement_ref_count(__result_obj__236, ((struct sNode*)__result_obj__236)->finalize, ((struct sNode*)__result_obj__236)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__236;
            ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            ((exp2) ? exp2 = come_decrement_ref_count(exp2, ((struct sNode*)exp2)->finalize, ((struct sNode*)exp2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(        string_operator_equals(buf_202,"__attribute__")&&*info->p==40        ) {
            __right_value0 = (void*)0;
            attr=(char*)come_increment_ref_count(parse_inner_attribute(info));
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2415, "struct sNode");
            _inf_obj_value7=(struct sInnerAttribute*)come_increment_ref_count(((struct sInnerAttribute*)(__right_value1=sInnerAttribute_initialize((struct sInnerAttribute*)come_increment_ref_count((struct sInnerAttribute*)come_calloc_v2(1, sizeof(struct sInnerAttribute)*(1), "05call.c", 2415, "struct sInnerAttribute*")),(char*)come_increment_ref_count(attr),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sInnerAttribute_finalize;
            _inf_value7->clone=(void*)sInnerAttribute_clone;
            _inf_value7->compile=(void*)sInnerAttribute_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sInnerAttribute_kind;
            _inf_value7->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            __result_obj__239 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value7)));
            (attr = come_decrement_ref_count(attr, (void*)0, (void*)0, 0, 0, (void*)0));
            (buf_202 = come_decrement_ref_count(buf_202, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sInnerAttribute_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__239) ? __result_obj__239 = come_decrement_ref_count(__result_obj__239, ((struct sNode*)__result_obj__239)->finalize, ((struct sNode*)__result_obj__239)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__239;
            (attr = come_decrement_ref_count(attr, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(        string_operator_equals(buf_202,"__c__")&&*info->p==123        ) {
            __right_value0 = (void*)0;
            block_text=(char*)come_increment_ref_count(skip_block(info,(_Bool)0));
            contents=(char*)come_increment_ref_count(block_text);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2423, "struct sNode");
            _inf_obj_value8=(struct sCSourceNode*)come_increment_ref_count(((struct sCSourceNode*)(__right_value1=sCSourceNode_initialize((struct sCSourceNode*)come_increment_ref_count((struct sCSourceNode*)come_calloc_v2(1, sizeof(struct sCSourceNode)*(1), "05call.c", 2423, "struct sCSourceNode*")),(char*)come_increment_ref_count(contents),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sCSourceNode_finalize;
            _inf_value8->clone=(void*)sCSourceNode_clone;
            _inf_value8->compile=(void*)sCSourceNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sCSourceNode_kind;
            _inf_value8->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            __result_obj__242 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value8)));
            (block_text = come_decrement_ref_count(block_text, (void*)0, (void*)0, 0, 0, (void*)0));
            (contents = come_decrement_ref_count(contents, (void*)0, (void*)0, 0, 0, (void*)0));
            (buf_202 = come_decrement_ref_count(buf_202, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sCSourceNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__242) ? __result_obj__242 = come_decrement_ref_count(__result_obj__242, ((struct sNode*)__result_obj__242)->finalize, ((struct sNode*)__result_obj__242)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__242;
            (block_text = come_decrement_ref_count(block_text, (void*)0, (void*)0, 0, 0, (void*)0));
            (contents = come_decrement_ref_count(contents, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(        string_operator_equals(buf_202,"extern")        ) {
            __right_value0 = (void*)0;
            node_205=(struct sNode*)come_increment_ref_count(parse_function(info));
            __result_obj__243 = (struct sNode*)come_increment_ref_count(node_205);
            ((node_205) ? node_205 = come_decrement_ref_count(node_205, ((struct sNode*)node_205)->finalize, ((struct sNode*)node_205)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            (buf_202 = come_decrement_ref_count(buf_202, (void*)0, (void*)0, 0, 0, (void*)0));
            ((__result_obj__243) ? __result_obj__243 = come_decrement_ref_count(__result_obj__243, ((struct sNode*)__result_obj__243)->finalize, ((struct sNode*)__result_obj__243)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__243;
            ((node_205) ? node_205 = come_decrement_ref_count(node_205, ((struct sNode*)node_205)->finalize, ((struct sNode*)node_205)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(        !gComeC&&(string_operator_equals(buf_202,"string")||string_operator_equals(buf_202,"wstring"))&&*info->p==40        ) {
            __right_value0 = (void*)0;
            node_206=(struct sNode*)come_increment_ref_count(parse_function_call(buf_202,info,(_Bool)0));
            info->sline_real=sline_real;
            __result_obj__244 = (struct sNode*)come_increment_ref_count(node_206);
            ((node_206) ? node_206 = come_decrement_ref_count(node_206, ((struct sNode*)node_206)->finalize, ((struct sNode*)node_206)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            (buf_202 = come_decrement_ref_count(buf_202, (void*)0, (void*)0, 0, 0, (void*)0));
            ((__result_obj__244) ? __result_obj__244 = come_decrement_ref_count(__result_obj__244, ((struct sNode*)__result_obj__244)->finalize, ((struct sNode*)__result_obj__244)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__244;
            ((node_206) ? node_206 = come_decrement_ref_count(node_206, ((struct sNode*)node_206)->finalize, ((struct sNode*)node_206)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(        is_special_word        ) {
            __right_value0 = (void*)0;
            node_207=(struct sNode*)come_increment_ref_count(string_node_v21(buf_202,head_201,head_sline,info));
            info->sline_real=sline_real;
            __result_obj__245 = (struct sNode*)come_increment_ref_count(node_207);
            ((node_207) ? node_207 = come_decrement_ref_count(node_207, ((struct sNode*)node_207)->finalize, ((struct sNode*)node_207)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            (buf_202 = come_decrement_ref_count(buf_202, (void*)0, (void*)0, 0, 0, (void*)0));
            ((__result_obj__245) ? __result_obj__245 = come_decrement_ref_count(__result_obj__245, ((struct sNode*)__result_obj__245)->finalize, ((struct sNode*)__result_obj__245)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__245;
            ((node_207) ? node_207 = come_decrement_ref_count(node_207, ((struct sNode*)node_207)->finalize, ((struct sNode*)node_207)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_202,"come")        ) {
            come_block=((void*)0);
            come_block_sline=0;
            if(            *info->p==123            ) {
                head_208=info->p;
                come_block_sline=info->sline;
                __right_value0 = (void*)0;
                ((char*)(__right_value0=skip_block(info,(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                tail_209=info->p;
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __dec_obj219=come_block,
                come_block=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2454, "struct buffer*"))));
                come_call_finalizer(buffer_finalize, __dec_obj219,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                len=tail_209-head_208;
                __right_value0 = (void*)0;
                mem=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len+1)), "05call.c", 2457, "char*"));
                memcpy(mem,head_208,len);
                mem[len]=0;
                buffer_append_str(come_block,mem);
                buffer_append_str(come_block,"\n");
                (mem = come_decrement_ref_count(mem, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            else {
                head_210=info->p;
                come_block_sline=info->sline;
                no_output_come_code=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                __right_value0 = (void*)0;
                ((struct sNode*)(__right_value0=expression_v13(info,(_Bool)0)));
                ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
                info->no_output_come_code=no_output_come_code;
                tail_211=info->p;
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __dec_obj220=come_block,
                come_block=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2475, "struct buffer*"))));
                come_call_finalizer(buffer_finalize, __dec_obj220,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                len_212=tail_211-head_210;
                __right_value0 = (void*)0;
                mem_213=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_212+1)), "05call.c", 2478, "char*"));
                memcpy(mem_213,head_210,len_212);
                mem_213[len_212]=0;
                buffer_append_str(come_block,"{");
                buffer_append_str(come_block,mem_213);
                buffer_append_str(come_block,"; }");
                buffer_append_str(come_block,"return (void*)0;\n}");
                buffer_append_str(come_block,"\n");
                (mem_213 = come_decrement_ref_count(mem_213, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2489, "struct sNode");
            _inf_obj_value9=(struct sComeCallNode*)come_increment_ref_count(((struct sComeCallNode*)(__right_value1=sComeCallNode_initialize((struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc_v2(1, sizeof(struct sComeCallNode)*(1), "05call.c", 2489, "struct sComeCallNode*")),(struct buffer*)come_increment_ref_count(come_block),come_block_sline,info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sComeCallNode_finalize;
            _inf_value9->clone=(void*)sComeCallNode_clone;
            _inf_value9->compile=(void*)sComeCallNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sComeCallNode_terminated;
            _inf_value9->kind=(void*)sComeCallNode_kind;
            _inf_value9->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            node_214=(struct sNode*)come_increment_ref_count(_inf_value9);
            come_call_finalizer(sComeCallNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            info->sline_real=sline_real;
            __result_obj__248 = (struct sNode*)come_increment_ref_count(node_214);
            come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node_214) ? node_214 = come_decrement_ref_count(node_214, ((struct sNode*)node_214)->finalize, ((struct sNode*)node_214)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            (buf_202 = come_decrement_ref_count(buf_202, (void*)0, (void*)0, 0, 0, (void*)0));
            ((__result_obj__248) ? __result_obj__248 = come_decrement_ref_count(__result_obj__248, ((struct sNode*)__result_obj__248)->finalize, ((struct sNode*)__result_obj__248)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__248;
            come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node_214) ? node_214 = come_decrement_ref_count(node_214, ((struct sNode*)node_214)->finalize, ((struct sNode*)node_214)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_202,"come_join")&&*info->p==40        ) {
            come_block_215=((void*)0);
            come_block_sline_216=0;
            (come_push_stackframe("05call.c", 2498, 91),__exception_result_var_b92=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b92);
            __right_value0 = (void*)0;
            node_217=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
            (come_push_stackframe("05call.c", 2500, 92),__exception_result_var_b93=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b93);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2503, "struct sNode");
            _inf_obj_value10=(struct sComeJoinNode*)come_increment_ref_count(((struct sComeJoinNode*)(__right_value1=sComeJoinNode_initialize((struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc_v2(1, sizeof(struct sComeJoinNode)*(1), "05call.c", 2503, "struct sComeJoinNode*")),(struct sNode*)come_increment_ref_count(node_217),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sComeJoinNode_finalize;
            _inf_value10->clone=(void*)sComeJoinNode_clone;
            _inf_value10->compile=(void*)sComeJoinNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sComeJoinNode_terminated;
            _inf_value10->kind=(void*)sComeJoinNode_kind;
            _inf_value10->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            __result_obj__251 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value10)));
            come_call_finalizer(buffer_finalize, come_block_215, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node_217) ? node_217 = come_decrement_ref_count(node_217, ((struct sNode*)node_217)->finalize, ((struct sNode*)node_217)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            (buf_202 = come_decrement_ref_count(buf_202, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sComeJoinNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__251) ? __result_obj__251 = come_decrement_ref_count(__result_obj__251, ((struct sNode*)__result_obj__251)->finalize, ((struct sNode*)__result_obj__251)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__251;
            come_call_finalizer(buffer_finalize, come_block_215, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node_217) ? node_217 = come_decrement_ref_count(node_217, ((struct sNode*)node_217)->finalize, ((struct sNode*)node_217)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_202,"come_poll")&&(*info->p==40||*info->p==123)        ) {
            time_out=1;
            if(            *info->p==40            ) {
                info->p++;
                while(                isdigit(*info->p)                ) {
                    time_out=time_out*10+(*info->p-48);
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                (come_push_stackframe("05call.c", 2517, 93),__exception_result_var_b94=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b94);
            }
            (come_push_stackframe("05call.c", 2519, 94),__exception_result_var_b95=expected_next_character(123,info), come_pop_stackframe(), __exception_result_var_b95);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            vars=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "05call.c", 2521, "struct list$1sNode$ph*"))));
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            blocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "05call.c", 2522, "struct list$1sBlock$ph*"))));
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            else_block=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "05call.c", 2523, "struct sBlock*"))));
            while(            1            ) {
                if(                ((info->end-info->p)>=strlen("else"))&&memcmp(info->p,"else",strlen("else"))==0                ) {
                    info->p+=strlen("else");
                    skip_spaces_and_lf(info);
                    __right_value0 = (void*)0;
                    __dec_obj225=else_block,
                    else_block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0));
                    come_call_finalizer(sBlock_finalize, __dec_obj225,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(                    *info->p==125                    ) {
                        break;
                    }
                }
                else {
                    __right_value0 = (void*)0;
                    var_name=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                    __right_value0 = (void*)0;
                    block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0));
                    list$1sNode$ph_add(vars,(struct sNode*)come_increment_ref_count(var_name));
                    list$1sBlock$ph_add(blocks,(struct sBlock*)come_increment_ref_count(block));
                    if(                    *info->p==125                    ) {
                        ((var_name) ? var_name = come_decrement_ref_count(var_name, ((struct sNode*)var_name)->finalize, ((struct sNode*)var_name)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    ((var_name) ? var_name = come_decrement_ref_count(var_name, ((struct sNode*)var_name)->finalize, ((struct sNode*)var_name)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            (come_push_stackframe("05call.c", 2550, 95),__exception_result_var_b96=expected_next_character(125,info), come_pop_stackframe(), __exception_result_var_b96);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2553, "struct sNode");
            _inf_obj_value11=(struct sComePollNode*)come_increment_ref_count(((struct sComePollNode*)(__right_value1=sComePollNode_initialize((struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc_v2(1, sizeof(struct sComePollNode)*(1), "05call.c", 2553, "struct sComePollNode*")),(struct list$1sNode$ph*)come_increment_ref_count(vars),(struct list$1sBlock$ph*)come_increment_ref_count(blocks),(struct sBlock*)come_increment_ref_count(else_block),time_out,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sComePollNode_finalize;
            _inf_value11->clone=(void*)sComePollNode_clone;
            _inf_value11->compile=(void*)sComePollNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sComePollNode_terminated;
            _inf_value11->kind=(void*)sComePollNode_kind;
            _inf_value11->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            __result_obj__281 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value11)));
            come_call_finalizer(list$1sNode$ph$p_finalize, vars, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sBlock$ph$p_finalize, blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sBlock_finalize, else_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (buf_202 = come_decrement_ref_count(buf_202, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sComePollNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__281) ? __result_obj__281 = come_decrement_ref_count(__result_obj__281, ((struct sNode*)__result_obj__281)->finalize, ((struct sNode*)__result_obj__281)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__281;
            come_call_finalizer(list$1sNode$ph$p_finalize, vars, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sBlock$ph$p_finalize, blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sBlock_finalize, else_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(buf_202,"__func__")||string_operator_equals(buf_202,"__FUNCTION__")        ) {
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2558, "struct sNode");
            _inf_obj_value12=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(__right_value1=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc_v2(1, sizeof(struct sFuncNode)*(1), "05call.c", 2558, "struct sFuncNode*")),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFuncNode_finalize;
            _inf_value12->clone=(void*)sFuncNode_clone;
            _inf_value12->compile=(void*)sFuncNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFuncNode_kind;
            _inf_value12->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            __result_obj__284 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value12)));
            (buf_202 = come_decrement_ref_count(buf_202, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sFuncNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__284) ? __result_obj__284 = come_decrement_ref_count(__result_obj__284, ((struct sNode*)__result_obj__284)->finalize, ((struct sNode*)__result_obj__284)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__284;
        }
        else if(        string_operator_equals(buf_202,"__line__")||string_operator_equals(buf_202,"__LINE__")        ) {
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2562, "struct sNode");
            _inf_obj_value13=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(__right_value1=sLineNode_initialize((struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc_v2(1, sizeof(struct sLineNode)*(1), "05call.c", 2562, "struct sLineNode*")),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sLineNode_finalize;
            _inf_value13->clone=(void*)sLineNode_clone;
            _inf_value13->compile=(void*)sLineNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sLineNode_kind;
            _inf_value13->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            __result_obj__287 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value13)));
            (buf_202 = come_decrement_ref_count(buf_202, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sLineNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__287) ? __result_obj__287 = come_decrement_ref_count(__result_obj__287, ((struct sNode*)__result_obj__287)->finalize, ((struct sNode*)__result_obj__287)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__287;
        }
        else if(        string_operator_equals(buf_202,"__sname__")        ) {
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2566, "struct sNode");
            _inf_obj_value14=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(__right_value1=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc_v2(1, sizeof(struct sSNameNode)*(1), "05call.c", 2566, "struct sSNameNode*")),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sSNameNode_finalize;
            _inf_value14->clone=(void*)sSNameNode_clone;
            _inf_value14->compile=(void*)sSNameNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sSNameNode_kind;
            _inf_value14->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            __result_obj__290 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value14)));
            (buf_202 = come_decrement_ref_count(buf_202, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sSNameNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__290) ? __result_obj__290 = come_decrement_ref_count(__result_obj__290, ((struct sNode*)__result_obj__290)->finalize, ((struct sNode*)__result_obj__290)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__290;
        }
        else if(        string_operator_equals(buf_202,"__caller_func__")        ) {
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2570, "struct sNode");
            _inf_obj_value15=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(__right_value1=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc_v2(1, sizeof(struct sCallerFuncNode)*(1), "05call.c", 2570, "struct sCallerFuncNode*")),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sCallerFuncNode_finalize;
            _inf_value15->clone=(void*)sCallerFuncNode_clone;
            _inf_value15->compile=(void*)sCallerFuncNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sCallerFuncNode_kind;
            _inf_value15->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            __result_obj__293 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value15)));
            (buf_202 = come_decrement_ref_count(buf_202, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sCallerFuncNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__293) ? __result_obj__293 = come_decrement_ref_count(__result_obj__293, ((struct sNode*)__result_obj__293)->finalize, ((struct sNode*)__result_obj__293)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__293;
        }
        else if(        string_operator_equals(buf_202,"__caller_line__")        ) {
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value16=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2574, "struct sNode");
            _inf_obj_value16=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(__right_value1=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc_v2(1, sizeof(struct sCallerLineNode)*(1), "05call.c", 2574, "struct sCallerLineNode*")),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sCallerLineNode_finalize;
            _inf_value16->clone=(void*)sCallerLineNode_clone;
            _inf_value16->compile=(void*)sCallerLineNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sCallerLineNode_kind;
            _inf_value16->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            __result_obj__296 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value16)));
            (buf_202 = come_decrement_ref_count(buf_202, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sCallerLineNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__296) ? __result_obj__296 = come_decrement_ref_count(__result_obj__296, ((struct sNode*)__result_obj__296)->finalize, ((struct sNode*)__result_obj__296)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__296;
        }
        else if(        string_operator_equals(buf_202,"__caller_sname__")        ) {
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value17=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2578, "struct sNode");
            _inf_obj_value17=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(__right_value1=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc_v2(1, sizeof(struct sCallerSNameNode)*(1), "05call.c", 2578, "struct sCallerSNameNode*")),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sCallerSNameNode_finalize;
            _inf_value17->clone=(void*)sCallerSNameNode_clone;
            _inf_value17->compile=(void*)sCallerSNameNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sCallerSNameNode_kind;
            _inf_value17->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            __result_obj__299 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value17)));
            (buf_202 = come_decrement_ref_count(buf_202, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sCallerSNameNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__299) ? __result_obj__299 = come_decrement_ref_count(__result_obj__299, ((struct sNode*)__result_obj__299)->finalize, ((struct sNode*)__result_obj__299)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__299;
        }
        else if(        info->va_arg&&is_type_name(buf_202,info)        ) {
            info->p=head_201;
            info->sline=head_sline;
            __right_value0 = (void*)0;
            multiple_assign_var15=((struct tuple3$3sType$phchar$phbool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
            type=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
            name=(char*)come_increment_ref_count(multiple_assign_var15->v2);
            err=multiple_assign_var15->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value18=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2587, "struct sNode");
            _inf_obj_value18=(struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)(__right_value1=sVarArgTypeName_initialize((struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc_v2(1, sizeof(struct sVarArgTypeName)*(1), "05call.c", 2587, "struct sVarArgTypeName*")),(struct sType*)come_increment_ref_count(type),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sVarArgTypeName_finalize;
            _inf_value18->clone=(void*)sVarArgTypeName_clone;
            _inf_value18->compile=(void*)sVarArgTypeName_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sVarArgTypeName_kind;
            _inf_value18->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            __result_obj__302 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value18)));
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            (buf_202 = come_decrement_ref_count(buf_202, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sVarArgTypeName_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__302) ? __result_obj__302 = come_decrement_ref_count(__result_obj__302, ((struct sNode*)__result_obj__302)->finalize, ((struct sNode*)__result_obj__302)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__302;
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(        string_operator_equals(buf_202,"sizeof")||string_operator_equals(buf_202,"_Alignof")||string_operator_equals(buf_202,"_Alignas")||string_operator_equals(buf_202,"__alignof__")||string_operator_equals(buf_202,"offsetof")||string_operator_equals(buf_202,"__builtin_offsetof")||string_operator_equals(buf_202,"_Generic")        ) {
            __right_value0 = (void*)0;
            node_227=(struct sNode*)come_increment_ref_count(string_node_v21(buf_202,head_201,head_sline,info));
            info->sline_real=sline_real;
            __result_obj__303 = (struct sNode*)come_increment_ref_count(node_227);
            ((node_227) ? node_227 = come_decrement_ref_count(node_227, ((struct sNode*)node_227)->finalize, ((struct sNode*)node_227)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            (buf_202 = come_decrement_ref_count(buf_202, (void*)0, (void*)0, 0, 0, (void*)0));
            ((__result_obj__303) ? __result_obj__303 = come_decrement_ref_count(__result_obj__303, ((struct sNode*)__result_obj__303)->finalize, ((struct sNode*)__result_obj__303)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__303;
            ((node_227) ? node_227 = come_decrement_ref_count(node_227, ((struct sNode*)node_227)->finalize, ((struct sNode*)node_227)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(        inline_asm        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            buf2=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2596, "struct buffer*"))));
            if(            *info->p!=40            ) {
                __right_value0 = (void*)0;
                word=(char*)come_increment_ref_count(parse_word(info));
                buffer_append_str(buf2,word);
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            (come_push_stackframe("05call.c", 2604, 96),__exception_result_var_b97=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b97);
            buffer_append_char(buf2,40);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "05call.c", 2607, "struct list$1sNode$ph*"))));
            while(            (_Bool)1            ) {
                if(                *info->p==40                ) {
                    buffer_append_char(buf2,40);
                    info->p++;
                    __right_value0 = (void*)0;
                    exp_228=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                    list$1sNode$ph_add(exps,(struct sNode*)come_increment_ref_count(exp_228));
                    (come_push_stackframe("05call.c", 2617, 97),__exception_result_var_b98=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b98);
                    buffer_append_char(buf2,41);
                    ((exp_228) ? exp_228 = come_decrement_ref_count(exp_228, ((struct sNode*)exp_228)->finalize, ((struct sNode*)exp_228)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                }
                else if(                *info->p==41                ) {
                    buffer_append_char(buf2,41);
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==10                ) {
                    info->sline++;
                    buffer_append_char(buf2,*info->p);
                    info->p++;
                }
                else if(                *info->p==0                ) {
                    err_msg(info,"invalid source end at inline assembler");
                    exit(2);
                }
                else {
                    buffer_append_char(buf2,*info->p);
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            _inf_value19=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2644, "struct sNode");
            _inf_obj_value19=(struct sInlineAssembler*)come_increment_ref_count(((struct sInlineAssembler*)(__right_value2=sInlineAssembler_initialize((struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc_v2(1, sizeof(struct sInlineAssembler)*(1), "05call.c", 2644, "struct sInlineAssembler*")),(char*)come_increment_ref_count(buffer_to_string(buf2)),(struct list$1sNode$ph*)come_increment_ref_count(exps),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sInlineAssembler_finalize;
            _inf_value19->clone=(void*)sInlineAssembler_clone;
            _inf_value19->compile=(void*)sInlineAssembler_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sInlineAssembler_kind;
            _inf_value19->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value3 = (void*)0;
            __result_obj__306 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value19)));
            come_call_finalizer(buffer_finalize, buf2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (buf_202 = come_decrement_ref_count(buf_202, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sInlineAssembler_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__306) ? __result_obj__306 = come_decrement_ref_count(__result_obj__306, ((struct sNode*)__result_obj__306)->finalize, ((struct sNode*)__result_obj__306)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__306;
            come_call_finalizer(buffer_finalize, buf2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        fun_name_with_type_name        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            fun_name=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2647, "struct buffer*"))));
            buffer_append_str(fun_name,buf_202);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __right_value3 = (void*)0;
            type_229=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value2=map$2char$phsType$ph_operator_load_element(info->types,((char*)(__right_value1=buffer_to_string(fun_name))))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            come_call_finalizer(sType_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(            type_229==((void*)0)            ) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                klass=((struct sClass*)(__right_value2=map$2char$phsClass$ph_operator_load_element(info->classes,((char*)(__right_value1=buffer_to_string(fun_name))))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                come_call_finalizer(sClass_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(                klass                ) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj256=type_229,
                    type_229=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 2657, 100),__exception_result_var_b101=(come_push_stackframe("05call.c", 2657, 98),__exception_result_var_b99=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 2657, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(buf_202)),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b99), come_pop_stackframe(), __exception_result_var_b101));
                    come_call_finalizer(sType_finalize, __dec_obj256,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    err_msg(info,"null type(%s)",buf_202);
                    exit(2);
                }
            }
            while(            *info->p==42            ) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type_229->mClass->mStruct==(_Bool)0                ) {
                    buffer_append_str(fun_name,"p");
                }
            }
            (come_push_stackframe("05call.c", 2674, 101),__exception_result_var_b102=expected_next_character(58,info), come_pop_stackframe(), __exception_result_var_b102);
            (come_push_stackframe("05call.c", 2675, 102),__exception_result_var_b103=expected_next_character(58,info), come_pop_stackframe(), __exception_result_var_b103);
            buffer_append_str(fun_name,"_");
            __right_value0 = (void*)0;
            buf2_230=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name,buf2_230);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            node_231=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value0=buffer_to_string(fun_name))),info,(_Bool)0));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            info->sline_real=sline_real;
            __result_obj__315 = (struct sNode*)come_increment_ref_count(node_231);
            come_call_finalizer(buffer_finalize, fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type_229, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (buf2_230 = come_decrement_ref_count(buf2_230, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node_231) ? node_231 = come_decrement_ref_count(node_231, ((struct sNode*)node_231)->finalize, ((struct sNode*)node_231)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            (buf_202 = come_decrement_ref_count(buf_202, (void*)0, (void*)0, 0, 0, (void*)0));
            ((__result_obj__315) ? __result_obj__315 = come_decrement_ref_count(__result_obj__315, ((struct sNode*)__result_obj__315)->finalize, ((struct sNode*)__result_obj__315)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__315;
            come_call_finalizer(buffer_finalize, fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type_229, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (buf2_230 = come_decrement_ref_count(buf2_230, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node_231) ? node_231 = come_decrement_ref_count(node_231, ((struct sNode*)node_231)->finalize, ((struct sNode*)node_231)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(        *info->p==58&&*(info->p+1)==58        ) {
            info->p+=2;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            fun_name_232=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2692, "struct buffer*"))));
            buffer_append_str(fun_name_232,buf_202);
            buffer_append_str(fun_name_232,"_");
            __right_value0 = (void*)0;
            buf2_233=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_232,buf2_233);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            node_234=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value0=buffer_to_string(fun_name_232))),info,(_Bool)0));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            info->sline_real=sline_real;
            __result_obj__316 = (struct sNode*)come_increment_ref_count(node_234);
            come_call_finalizer(buffer_finalize, fun_name_232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (buf2_233 = come_decrement_ref_count(buf2_233, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node_234) ? node_234 = come_decrement_ref_count(node_234, ((struct sNode*)node_234)->finalize, ((struct sNode*)node_234)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            (buf_202 = come_decrement_ref_count(buf_202, (void*)0, (void*)0, 0, 0, (void*)0));
            ((__result_obj__316) ? __result_obj__316 = come_decrement_ref_count(__result_obj__316, ((struct sNode*)__result_obj__316)->finalize, ((struct sNode*)__result_obj__316)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__316;
            come_call_finalizer(buffer_finalize, fun_name_232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (buf2_233 = come_decrement_ref_count(buf2_233, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node_234) ? node_234 = come_decrement_ref_count(node_234, ((struct sNode*)node_234)->finalize, ((struct sNode*)node_234)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(        call_method_generics_fun_call        ) {
            __right_value0 = (void*)0;
            node_235=(struct sNode*)come_increment_ref_count(parse_function_call(buf_202,info,(_Bool)0));
            info->sline_real=sline_real;
            __result_obj__317 = (struct sNode*)come_increment_ref_count(node_235);
            ((node_235) ? node_235 = come_decrement_ref_count(node_235, ((struct sNode*)node_235)->finalize, ((struct sNode*)node_235)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            (buf_202 = come_decrement_ref_count(buf_202, (void*)0, (void*)0, 0, 0, (void*)0));
            ((__result_obj__317) ? __result_obj__317 = come_decrement_ref_count(__result_obj__317, ((struct sNode*)__result_obj__317)->finalize, ((struct sNode*)__result_obj__317)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__317;
            ((node_235) ? node_235 = come_decrement_ref_count(node_235, ((struct sNode*)node_235)->finalize, ((struct sNode*)node_235)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(        !is_special_word&&*info->p==40&&!is_type_name_        ) {
            __right_value0 = (void*)0;
            node_236=(struct sNode*)come_increment_ref_count(parse_function_call(buf_202,info,(_Bool)0));
            info->sline_real=sline_real;
            __result_obj__318 = (struct sNode*)come_increment_ref_count(node_236);
            ((node_236) ? node_236 = come_decrement_ref_count(node_236, ((struct sNode*)node_236)->finalize, ((struct sNode*)node_236)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            (buf_202 = come_decrement_ref_count(buf_202, (void*)0, (void*)0, 0, 0, (void*)0));
            ((__result_obj__318) ? __result_obj__318 = come_decrement_ref_count(__result_obj__318, ((struct sNode*)__result_obj__318)->finalize, ((struct sNode*)__result_obj__318)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__318;
            ((node_236) ? node_236 = come_decrement_ref_count(node_236, ((struct sNode*)node_236)->finalize, ((struct sNode*)node_236)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            __right_value0 = (void*)0;
            node_237=(struct sNode*)come_increment_ref_count(string_node_v21(buf_202,head_201,head_sline,info));
            info->sline_real=sline_real;
            __result_obj__319 = (struct sNode*)come_increment_ref_count(node_237);
            ((node_237) ? node_237 = come_decrement_ref_count(node_237, ((struct sNode*)node_237)->finalize, ((struct sNode*)node_237)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            (buf_202 = come_decrement_ref_count(buf_202, (void*)0, (void*)0, 0, 0, (void*)0));
            ((__result_obj__319) ? __result_obj__319 = come_decrement_ref_count(__result_obj__319, ((struct sNode*)__result_obj__319)->finalize, ((struct sNode*)__result_obj__319)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__319;
            ((node_237) ? node_237 = come_decrement_ref_count(node_237, ((struct sNode*)node_237)->finalize, ((struct sNode*)node_237)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        (buf_202 = come_decrement_ref_count(buf_202, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else {
        __right_value0 = (void*)0;
        node_238=(struct sNode*)come_increment_ref_count(expression_node_v97(info));
        __result_obj__320 = (struct sNode*)come_increment_ref_count(node_238);
        ((node_238) ? node_238 = come_decrement_ref_count(node_238, ((struct sNode*)node_238)->finalize, ((struct sNode*)node_238)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        ((__result_obj__320) ? __result_obj__320 = come_decrement_ref_count(__result_obj__320, ((struct sNode*)__result_obj__320)->finalize, ((struct sNode*)__result_obj__320)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__320;
        ((node_238) ? node_238 = come_decrement_ref_count(node_238, ((struct sNode*)node_238)->finalize, ((struct sNode*)node_238)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    err_msg(info,"unexpected operator(%c)",*info->p);
    exit(2);
    __result_obj__321 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__321) ? __result_obj__321 = come_decrement_ref_count(__result_obj__321, ((struct sNode*)__result_obj__321)->finalize, ((struct sNode*)__result_obj__321)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__321;
}

static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value;
unsigned int hash;
unsigned int it;
struct sVar* __result_obj__227;
struct sVar* __result_obj__228;
struct sVar* __result_obj__229;
struct sVar* __result_obj__230;
    memset(&default_value,0,sizeof(struct sVar*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__227 = (struct sVar*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__227, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__227;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__228 = (struct sVar*)come_increment_ref_count(default_value);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__228, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__228;
            }
        }
        else {
            __result_obj__229 = (struct sVar*)come_increment_ref_count(default_value);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sVar_finalize, __result_obj__229, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__229;
        }
    }
    __result_obj__230 = (struct sVar*)come_increment_ref_count(default_value);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__230, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__230;
}

static struct sVar* map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value;
unsigned int hash;
unsigned int it;
struct sVar* __result_obj__231;
struct sVar* __result_obj__232;
struct sVar* __result_obj__233;
struct sVar* __result_obj__234;
    memset(&default_value,0,sizeof(struct sVar*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__231 = (struct sVar*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__231, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__231;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__232 = (struct sVar*)come_increment_ref_count(default_value);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__232, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__232;
            }
        }
        else {
            __result_obj__233 = (struct sVar*)come_increment_ref_count(default_value);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sVar_finalize, __result_obj__233, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__233;
        }
    }
    __result_obj__234 = (struct sVar*)come_increment_ref_count(default_value);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__234, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__234;
}

static struct sInnerAttribute* sInnerAttribute_clone(struct sInnerAttribute* self){
struct sInnerAttribute* __result_obj__237;
void* __right_value0 = (void*)0;
struct sInnerAttribute* result;
char* __dec_obj215;
char* __dec_obj216;
struct sInnerAttribute* __result_obj__238;
    if(    self==(void*)0    ) {
        __result_obj__237 = (void*)0;
        return __result_obj__237;
    }
    result=(struct sInnerAttribute*)come_increment_ref_count((struct sInnerAttribute*)come_calloc_v2(1, sizeof(struct sInnerAttribute)*(1), "sInnerAttribute_clone", 3, "struct sInnerAttribute*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj215=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sInnerAttribute_clone", 5, "char*"));
        __dec_obj215 = come_decrement_ref_count(__dec_obj215, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->attr!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj216=result->attr,
        result->attr=(char*)come_increment_ref_count((char*)come_memdup(self->attr, "sInnerAttribute_clone", 7, "char*"));
        __dec_obj216 = come_decrement_ref_count(__dec_obj216, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __result_obj__238 = result;
    come_call_finalizer(sInnerAttribute_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__238;
}

static struct sCSourceNode* sCSourceNode_clone(struct sCSourceNode* self){
struct sCSourceNode* __result_obj__240;
void* __right_value0 = (void*)0;
struct sCSourceNode* result;
char* __dec_obj217;
char* __dec_obj218;
struct sCSourceNode* __result_obj__241;
    if(    self==(void*)0    ) {
        __result_obj__240 = (void*)0;
        return __result_obj__240;
    }
    result=(struct sCSourceNode*)come_increment_ref_count((struct sCSourceNode*)come_calloc_v2(1, sizeof(struct sCSourceNode)*(1), "sCSourceNode_clone", 3, "struct sCSourceNode*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj217=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCSourceNode_clone", 5, "char*"));
        __dec_obj217 = come_decrement_ref_count(__dec_obj217, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj218=result->contents,
        result->contents=(char*)come_increment_ref_count((char*)come_memdup(self->contents, "sCSourceNode_clone", 7, "char*"));
        __dec_obj218 = come_decrement_ref_count(__dec_obj218, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __result_obj__241 = result;
    come_call_finalizer(sCSourceNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__241;
}

static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self){
struct sComeCallNode* __result_obj__246;
void* __right_value0 = (void*)0;
struct sComeCallNode* result;
char* __dec_obj221;
struct buffer* __dec_obj222;
struct sComeCallNode* __result_obj__247;
    if(    self==(void*)0    ) {
        __result_obj__246 = (void*)0;
        return __result_obj__246;
    }
    result=(struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc_v2(1, sizeof(struct sComeCallNode)*(1), "sComeCallNode_clone", 3, "struct sComeCallNode*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj221=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComeCallNode_clone", 5, "char*"));
        __dec_obj221 = come_decrement_ref_count(__dec_obj221, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj222=result->come_block,
        result->come_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->come_block));
        come_call_finalizer(buffer_finalize, __dec_obj222,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->come_block_sline=self->come_block_sline;
    }
    __result_obj__247 = result;
    come_call_finalizer(sComeCallNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__247;
}

static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self){
struct sComeJoinNode* __result_obj__249;
void* __right_value0 = (void*)0;
struct sComeJoinNode* result;
char* __dec_obj223;
struct sNode* __dec_obj224;
struct sComeJoinNode* __result_obj__250;
    if(    self==(void*)0    ) {
        __result_obj__249 = (void*)0;
        return __result_obj__249;
    }
    result=(struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc_v2(1, sizeof(struct sComeJoinNode)*(1), "sComeJoinNode_clone", 3, "struct sComeJoinNode*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj223=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComeJoinNode_clone", 5, "char*"));
        __dec_obj223 = come_decrement_ref_count(__dec_obj223, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj224=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj224 ? __dec_obj224 = come_decrement_ref_count(__dec_obj224, ((struct sNode*)__dec_obj224)->finalize, ((struct sNode*)__dec_obj224)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__250 = result;
    come_call_finalizer(sComeJoinNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__250;
}

static struct list$1sBlock$ph* list$1sBlock$ph_initialize(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__252;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__252 = (struct list$1sBlock$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sBlock$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__252, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__252;
}

static struct list$1sBlock$ph* list$1sBlock$ph_add(struct list$1sBlock$ph* self, struct sBlock* item){
void* __right_value0 = (void*)0;
struct list_item$1sBlock$ph* litem;
struct sBlock* __dec_obj226;
struct list_item$1sBlock$ph* litem_218;
struct sBlock* __dec_obj227;
struct list_item$1sBlock$ph* litem_219;
struct sBlock* __dec_obj228;
struct list$1sBlock$ph* __result_obj__253;
    if(    self->len==0    ) {
        litem=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value0=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "/usr/local/include/neo-c.h", 1084, "struct list_item$1sBlock$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj226=litem->item,
        litem->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer(sBlock_finalize, __dec_obj226,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_218=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value0=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "/usr/local/include/neo-c.h", 1094, "struct list_item$1sBlock$ph*"))));
        litem_218->prev=self->head;
        litem_218->next=((void*)0);
        __dec_obj227=litem_218->item,
        litem_218->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer(sBlock_finalize, __dec_obj227,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_218;
        self->head->next=litem_218;
    }
    else {
        __right_value0 = (void*)0;
        litem_219=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value0=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "/usr/local/include/neo-c.h", 1104, "struct list_item$1sBlock$ph*"))));
        litem_219->prev=self->tail;
        litem_219->next=((void*)0);
        __dec_obj228=litem_219->item,
        litem_219->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer(sBlock_finalize, __dec_obj228,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_219;
        self->tail=litem_219;
    }
    self->len++;
    __result_obj__253 = self;
    come_call_finalizer(sBlock_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__253;
}

static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self){
struct sComePollNode* __result_obj__254;
void* __right_value0 = (void*)0;
struct sComePollNode* result;
char* __dec_obj229;
struct list$1sNode$ph* __dec_obj230;
struct list$1sBlock$ph* __dec_obj243;
struct sBlock* __dec_obj244;
struct sComePollNode* __result_obj__280;
    if(    self==(void*)0    ) {
        __result_obj__254 = (void*)0;
        return __result_obj__254;
    }
    result=(struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc_v2(1, sizeof(struct sComePollNode)*(1), "sComePollNode_clone", 3, "struct sComePollNode*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj229=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComePollNode_clone", 5, "char*"));
        __dec_obj229 = come_decrement_ref_count(__dec_obj229, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj230=result->vars,
        result->vars=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->vars));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj230,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj243=result->blocks,
        result->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_clone(self->blocks));
        come_call_finalizer(list$1sBlock$ph_finalize, __dec_obj243,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj244=result->else_block,
        result->else_block=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->else_block));
        come_call_finalizer(sBlock_finalize, __dec_obj244,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->time_out=self->time_out;
    }
    __result_obj__280 = result;
    come_call_finalizer(sComePollNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__280;
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__255;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1sBlock$ph* result;
struct list_item$1sBlock$ph* it;
struct list$1sBlock$ph* __result_obj__279;
    if(    self==((void*)0)    ) {
        __result_obj__255 = (struct list$1sBlock$ph*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__255, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__255;
    }
    result=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "/usr/local/include/neo-c.h", 1065, "struct list$1sBlock$ph*"))));
    it=self->head;
    while(    it!=((void*)0)    ) {
        if(        1        ) {
            __right_value0 = (void*)0;
            list$1sBlock$ph_add(result,(struct sBlock*)come_increment_ref_count(sBlock_clone(it->item)));
        }
        else {
            __right_value0 = (void*)0;
            list$1sBlock$ph_add(result,(struct sBlock*)come_increment_ref_count(sBlock_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__279 = (struct list$1sBlock$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sBlock$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__279, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__279;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
struct sBlock* __result_obj__256;
void* __right_value0 = (void*)0;
struct sBlock* result;
struct list$1sNode$ph* __dec_obj231;
struct sVarTable* __dec_obj242;
struct sBlock* __result_obj__278;
    if(    self==(void*)0    ) {
        __result_obj__256 = (struct sBlock*)come_increment_ref_count((void*)0);
        come_call_finalizer(sBlock_finalize, __result_obj__256, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__256;
    }
    result=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj231=result->mNodes,
        result->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_clone(self->mNodes));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj231,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj242=result->mVarTable,
        result->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer(sVarTable_finalize, __dec_obj242,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__278 = (struct sBlock*)come_increment_ref_count(result);
    come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sBlock_finalize, __result_obj__278, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__278;
}

static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__257;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1sNode$ph* result;
struct list_item$1sNode$ph* it;
struct list$1sNode$ph* __result_obj__258;
    if(    self==((void*)0)    ) {
        __result_obj__257 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__257, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__257;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1065, "struct list$1sNode$ph*"))));
    it=self->head;
    while(    it!=((void*)0)    ) {
        if(        1        ) {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item)));
        }
        else {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__258 = (struct list$1sNode$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__258, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__258;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__259;
void* __right_value0 = (void*)0;
struct sVarTable* result;
struct map$2char$phsVar$ph* __dec_obj241;
struct sVarTable* __result_obj__277;
    if(    self==(void*)0    ) {
        __result_obj__259 = (struct sVarTable*)come_increment_ref_count((void*)0);
        come_call_finalizer(sVarTable_finalize, __result_obj__259, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__259;
    }
    result=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj241=result->mVars,
        result->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_clone(self->mVars));
        come_call_finalizer(map$2char$phsVar$ph_finalize, __dec_obj241,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)    ) {
        result->mParent=self->mParent;
    }
    __result_obj__277 = (struct sVarTable*)come_increment_ref_count(result);
    come_call_finalizer(sVarTable_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sVarTable_finalize, __result_obj__277, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__277;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_clone(struct map$2char$phsVar$ph* self){
struct map$2char$phsVar$ph* __result_obj__260;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct map$2char$phsVar$ph* result;
struct list$1char$ph* __dec_obj233;
char* it;
struct sVar* default_value;
struct sVar* it2;
struct map$2char$phsVar$ph* __result_obj__276;
    if(    self==((void*)0)    ) {
        __result_obj__260 = (struct map$2char$phsVar$ph*)come_increment_ref_count(((void*)0));
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__260, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__260;
    }
    result=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsVar$ph)*(1), "/usr/local/include/neo-c.h", 2070, "struct map$2char$phsVar$ph*"))));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj233=result->key_list,
    result->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 2072, "struct list$1char$ph*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj233,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    for(    it=map$2char$phsVar$ph_begin(self)    ;    !map$2char$phsVar$ph_end(self)    ;    it=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value,0,sizeof(struct sVar*));
        __right_value0 = (void*)0;
        it2=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_at(self,it,(struct sVar*)come_increment_ref_count(default_value)));
        if(        1&&1        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            map$2char$phsVar$ph_put(result,(char*)come_increment_ref_count((char*)come_memdup(it, "/usr/local/include/neo-c.h", 2081, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2)));
        }
        else if(        1        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            map$2char$phsVar$ph_put(result,(char*)come_increment_ref_count((char*)come_memdup(it, "/usr/local/include/neo-c.h", 2084, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2)));
        }
        else if(        1        ) {
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_put(result,(char*)come_increment_ref_count(it),(struct sVar*)come_increment_ref_count(sVar_clone(it2)));
        }
        else {
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_put(result,(char*)come_increment_ref_count(it),(struct sVar*)come_increment_ref_count(sVar_clone(it2)));
        }
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sVar_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__276 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__276, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__276;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i;
int i_220;
    for(    i=0    ;    i<self->size    ;    i++    ){
        if(        self->item_existance[i]        ) {
            if(            1            ) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_220=0    ;    i_220<self->size    ;    i_220++    ){
        if(        self->item_existance[i_220]        ) {
            if(            1            ) {
                (self->keys[i_220] = come_decrement_ref_count(self->keys[i_220], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self){
void* __right_value0 = (void*)0;
int i;
void* __right_value1 = (void*)0;
struct list$1char$ph* __dec_obj232;
struct map$2char$phsVar$ph* __result_obj__261;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "/usr/local/include/neo-c.h", 1999, "char**"))));
    __right_value0 = (void*)0;
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value0=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(128)), "/usr/local/include/neo-c.h", 2000, "struct sVar**"))));
    __right_value0 = (void*)0;
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/neo-c.h", 2001, "_Bool*"))));
    for(    i=0    ;    i<128    ;    i++    ){
        self->item_existance[i]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __right_value0 = (void*)0;
    __dec_obj232=self->key_list,
    self->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 2011, "struct list$1char$ph*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj232,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->it=0;
    __result_obj__261 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__261, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__261;
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result;
char* __result_obj__262;
char* __result_obj__263;
char* result_221;
char* __result_obj__264;
    if(    self==((void*)0)    ) {
        memset(&result,0,sizeof(char*));
        __result_obj__262 = result;
        return __result_obj__262;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__263 = self->key_list->it->item;
        return __result_obj__263;
    }
    memset(&result_221,0,sizeof(char*));
    __result_obj__264 = result_221;
    return __result_obj__264;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result;
char* __result_obj__265;
char* __result_obj__266;
char* result_222;
char* __result_obj__267;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result,0,sizeof(char*));
        __result_obj__265 = result;
        return __result_obj__265;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__266 = self->key_list->it->item;
        return __result_obj__266;
    }
    memset(&result_222,0,sizeof(char*));
    __result_obj__267 = result_222;
    return __result_obj__267;
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash;
unsigned int it;
struct sVar* __result_obj__268;
struct sVar* __result_obj__269;
struct sVar* __result_obj__270;
struct sVar* __result_obj__271;
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__268 = (struct sVar*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__268, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__268;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__269 = (struct sVar*)come_increment_ref_count(default_value);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__269, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__269;
            }
        }
        else {
            __result_obj__270 = (struct sVar*)come_increment_ref_count(default_value);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sVar_finalize, __result_obj__270, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__270;
        }
    }
    __result_obj__271 = (struct sVar*)come_increment_ref_count(default_value);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__271, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__271;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash;
int it;
_Bool same_key_exist;
char* it2;
struct map$2char$phsVar$ph* __result_obj__273;
    if(    self->len*2>=self->size    ) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                if(                1                ) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=key;
                }
                if(                1                ) {
                    come_call_finalizer(sVar_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it]=item;
                }
                break;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it]=(_Bool)1;
            if(            1            ) {
                self->keys[it]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it]=key;
            }
            if(            1            ) {
                self->items[it]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist=(_Bool)0;
    for(    it2=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2,key)        ) {
            same_key_exist=(_Bool)1;
        }
    }
    if(    !same_key_exist    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__273 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__273;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size;
void* __right_value0 = (void*)0;
char** keys;
struct sVar** items;
_Bool* item_existance;
int len;
char* it;
struct sVar* default_value;
struct sVar* it2;
unsigned int hash;
int n;
struct sVar* default_value_223;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size)), "/usr/local/include/neo-c.h", 2280, "char**"))));
    __right_value0 = (void*)0;
    items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value0=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(size)), "/usr/local/include/neo-c.h", 2281, "struct sVar**"))));
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/neo-c.h", 2282, "_Bool*"))));
    len=0;
    for(    it=map$2char$phsVar$ph_begin(self)    ;    !map$2char$phsVar$ph_end(self)    ;    it=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value,0,sizeof(struct sVar*));
        __right_value0 = (void*)0;
        it2=((struct sVar*)(__right_value0=map$2char$phsVar$ph_at(self,it,(struct sVar*)come_increment_ref_count(default_value))));
        come_call_finalizer(sVar_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        hash=string_get_hash_key(((char*)it))%size;
        n=hash;
        while(        (_Bool)1        ) {
            if(            item_existance[n]            ) {
                n++;
                if(                n>=size                ) {
                    n=0;
                }
                else if(                n==hash                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance[n]=(_Bool)1;
                keys[n]=it;
                memset(&default_value_223,0,sizeof(struct sVar*));
                __right_value0 = (void*)0;
                items[n]=((struct sVar*)(__right_value0=map$2char$phsVar$ph_at(self,it,(struct sVar*)come_increment_ref_count(default_value_223))));
                come_call_finalizer(sVar_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                len++;
                come_call_finalizer(sVar_finalize, default_value_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer(sVar_finalize, default_value_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys;
    self->items=items;
    self->item_existance=item_existance;
    self->size=size;
    self->len=len;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value0 = (void*)0;
struct list_item$1char$ph* litem;
char* __dec_obj234;
struct list_item$1char$ph* litem_224;
char* __dec_obj235;
struct list_item$1char$ph* litem_225;
char* __dec_obj236;
struct list$1char$ph* __result_obj__272;
    if(    self->len==0    ) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1162, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj234=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj234 = come_decrement_ref_count(__dec_obj234, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_224=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1172, "struct list_item$1char$ph*"))));
        litem_224->prev=self->head;
        litem_224->next=((void*)0);
        __dec_obj235=litem_224->item,
        litem_224->item=(char*)come_increment_ref_count(item);
        __dec_obj235 = come_decrement_ref_count(__dec_obj235, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_224;
        self->head->next=litem_224;
    }
    else {
        __right_value0 = (void*)0;
        litem_225=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1182, "struct list_item$1char$ph*"))));
        litem_225->prev=self->tail;
        litem_225->next=((void*)0);
        __dec_obj236=litem_225->item,
        litem_225->item=(char*)come_increment_ref_count(item);
        __dec_obj236 = come_decrement_ref_count(__dec_obj236, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_225;
        self->tail=litem_225;
    }
    self->len++;
    __result_obj__272 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__272;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__274;
void* __right_value0 = (void*)0;
struct sVar* result;
char* __dec_obj237;
char* __dec_obj238;
struct sType* __dec_obj239;
char* __dec_obj240;
struct sVar* __result_obj__275;
    if(    self==(void*)0    ) {
        __result_obj__274 = (struct sVar*)come_increment_ref_count((void*)0);
        come_call_finalizer(sVar_finalize, __result_obj__274, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__274;
    }
    result=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj237=result->mName,
        result->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sVar_clone", 4, "char*"));
        __dec_obj237 = come_decrement_ref_count(__dec_obj237, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj238=result->mCValueName,
        result->mCValueName=(char*)come_increment_ref_count((char*)come_memdup(self->mCValueName, "sVar_clone", 5, "char*"));
        __dec_obj238 = come_decrement_ref_count(__dec_obj238, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj239=result->mType,
        result->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        come_call_finalizer(sType_finalize, __dec_obj239,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)    ) {
        result->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj240=result->mFunName,
        result->mFunName=(char*)come_increment_ref_count((char*)come_memdup(self->mFunName, "sVar_clone", 10, "char*"));
        __dec_obj240 = come_decrement_ref_count(__dec_obj240, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __result_obj__275 = (struct sVar*)come_increment_ref_count(result);
    come_call_finalizer(sVar_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__275, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__275;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i;
int i_226;
    for(    i=0    ;    i<self->size    ;    i++    ){
        if(        self->item_existance[i]        ) {
            if(            1            ) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_226=0    ;    i_226<self->size    ;    i_226++    ){
        if(        self->item_existance[i_226]        ) {
            if(            1            ) {
                (self->keys[i_226] = come_decrement_ref_count(self->keys[i_226], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
struct sFuncNode* __result_obj__282;
void* __right_value0 = (void*)0;
struct sFuncNode* result;
char* __dec_obj245;
struct sFuncNode* __result_obj__283;
    if(    self==(void*)0    ) {
        __result_obj__282 = (void*)0;
        return __result_obj__282;
    }
    result=(struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc_v2(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "struct sFuncNode*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj245=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFuncNode_clone", 5, "char*"));
        __dec_obj245 = come_decrement_ref_count(__dec_obj245, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    __result_obj__283 = result;
    come_call_finalizer(sFuncNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__283;
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
struct sLineNode* __result_obj__285;
void* __right_value0 = (void*)0;
struct sLineNode* result;
char* __dec_obj246;
struct sLineNode* __result_obj__286;
    if(    self==(void*)0    ) {
        __result_obj__285 = (void*)0;
        return __result_obj__285;
    }
    result=(struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc_v2(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "struct sLineNode*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj246=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLineNode_clone", 5, "char*"));
        __dec_obj246 = come_decrement_ref_count(__dec_obj246, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    __result_obj__286 = result;
    come_call_finalizer(sLineNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__286;
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
struct sSNameNode* __result_obj__288;
void* __right_value0 = (void*)0;
struct sSNameNode* result;
char* __dec_obj247;
struct sSNameNode* __result_obj__289;
    if(    self==(void*)0    ) {
        __result_obj__288 = (void*)0;
        return __result_obj__288;
    }
    result=(struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc_v2(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "struct sSNameNode*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj247=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSNameNode_clone", 5, "char*"));
        __dec_obj247 = come_decrement_ref_count(__dec_obj247, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    __result_obj__289 = result;
    come_call_finalizer(sSNameNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__289;
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
struct sCallerFuncNode* __result_obj__291;
void* __right_value0 = (void*)0;
struct sCallerFuncNode* result;
char* __dec_obj248;
struct sCallerFuncNode* __result_obj__292;
    if(    self==(void*)0    ) {
        __result_obj__291 = (void*)0;
        return __result_obj__291;
    }
    result=(struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc_v2(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "struct sCallerFuncNode*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj248=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCallerFuncNode_clone", 5, "char*"));
        __dec_obj248 = come_decrement_ref_count(__dec_obj248, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    __result_obj__292 = result;
    come_call_finalizer(sCallerFuncNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__292;
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
struct sCallerLineNode* __result_obj__294;
void* __right_value0 = (void*)0;
struct sCallerLineNode* result;
char* __dec_obj249;
struct sCallerLineNode* __result_obj__295;
    if(    self==(void*)0    ) {
        __result_obj__294 = (void*)0;
        return __result_obj__294;
    }
    result=(struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc_v2(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "struct sCallerLineNode*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj249=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCallerLineNode_clone", 5, "char*"));
        __dec_obj249 = come_decrement_ref_count(__dec_obj249, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    __result_obj__295 = result;
    come_call_finalizer(sCallerLineNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__295;
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
struct sCallerSNameNode* __result_obj__297;
void* __right_value0 = (void*)0;
struct sCallerSNameNode* result;
char* __dec_obj250;
struct sCallerSNameNode* __result_obj__298;
    if(    self==(void*)0    ) {
        __result_obj__297 = (void*)0;
        return __result_obj__297;
    }
    result=(struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc_v2(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "struct sCallerSNameNode*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj250=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCallerSNameNode_clone", 5, "char*"));
        __dec_obj250 = come_decrement_ref_count(__dec_obj250, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    __result_obj__298 = result;
    come_call_finalizer(sCallerSNameNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__298;
}

static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self){
struct sVarArgTypeName* __result_obj__300;
void* __right_value0 = (void*)0;
struct sVarArgTypeName* result;
char* __dec_obj251;
struct sType* __dec_obj252;
struct sVarArgTypeName* __result_obj__301;
    if(    self==(void*)0    ) {
        __result_obj__300 = (void*)0;
        return __result_obj__300;
    }
    result=(struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc_v2(1, sizeof(struct sVarArgTypeName)*(1), "sVarArgTypeName_clone", 3, "struct sVarArgTypeName*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj251=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sVarArgTypeName_clone", 5, "char*"));
        __dec_obj251 = come_decrement_ref_count(__dec_obj251, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj252=result->type,
        result->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj252,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__301 = result;
    come_call_finalizer(sVarArgTypeName_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__301;
}

static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self){
struct sInlineAssembler* __result_obj__304;
void* __right_value0 = (void*)0;
struct sInlineAssembler* result;
char* __dec_obj253;
char* __dec_obj254;
struct list$1sNode$ph* __dec_obj255;
struct sInlineAssembler* __result_obj__305;
    if(    self==(void*)0    ) {
        __result_obj__304 = (void*)0;
        return __result_obj__304;
    }
    result=(struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc_v2(1, sizeof(struct sInlineAssembler)*(1), "sInlineAssembler_clone", 3, "struct sInlineAssembler*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj253=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sInlineAssembler_clone", 5, "char*"));
        __dec_obj253 = come_decrement_ref_count(__dec_obj253, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj254=result->source,
        result->source=(char*)come_increment_ref_count((char*)come_memdup(self->source, "sInlineAssembler_clone", 7, "char*"));
        __dec_obj254 = come_decrement_ref_count(__dec_obj254, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj255=result->exps,
        result->exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->exps));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj255,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__305 = result;
    come_call_finalizer(sInlineAssembler_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__305;
}

static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key){
struct sType* default_value;
unsigned int hash;
unsigned int it;
struct sType* __result_obj__307;
struct sType* __result_obj__308;
struct sType* __result_obj__309;
struct sType* __result_obj__310;
    memset(&default_value,0,sizeof(struct sType*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__307 = (struct sType*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__307, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__307;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__308 = (struct sType*)come_increment_ref_count(default_value);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__308, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__308;
            }
        }
        else {
            __result_obj__309 = (struct sType*)come_increment_ref_count(default_value);
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sType_finalize, __result_obj__309, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__309;
        }
    }
    __result_obj__310 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__310, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__310;
}

static struct sType* map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char* key){
struct sType* default_value;
unsigned int hash;
unsigned int it;
struct sType* __result_obj__311;
struct sType* __result_obj__312;
struct sType* __result_obj__313;
struct sType* __result_obj__314;
    memset(&default_value,0,sizeof(struct sType*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__311 = (struct sType*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__311, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__311;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__312 = (struct sType*)come_increment_ref_count(default_value);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__312, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__312;
            }
        }
        else {
            __result_obj__313 = (struct sType*)come_increment_ref_count(default_value);
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sType_finalize, __result_obj__313, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__313;
        }
    }
    __result_obj__314 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__314, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__314;
}

struct sNode* expression_v5(struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNode* __result_obj__322;
    __result_obj__322 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=expression_node_v99(info))));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__322) ? __result_obj__322 = come_decrement_ref_count(__result_obj__322, ((struct sNode*)__result_obj__322)->finalize, ((struct sNode*)__result_obj__322)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__322;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct sNode* __dec_obj257;
struct sNode* __result_obj__323;
struct sNode* __dec_obj258;
struct sNode* __result_obj__324;
struct sNode* __result_obj__325;
    if(    !node->terminated(node->_protocol_obj)&&parsecmp("or",info)    ) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj257=node,
        node=(struct sNode*)come_increment_ref_count(parse_or_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        (__dec_obj257 ? __dec_obj257 = come_decrement_ref_count(__dec_obj257, ((struct sNode*)__dec_obj257)->finalize, ((struct sNode*)__dec_obj257)->_protocol_obj, 0,0, (void*)0) :0);
        __result_obj__323 = (struct sNode*)come_increment_ref_count(node);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        ((__result_obj__323) ? __result_obj__323 = come_decrement_ref_count(__result_obj__323, ((struct sNode*)__result_obj__323)->finalize, ((struct sNode*)__result_obj__323)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__323;
    }
    else if(    !node->terminated(node->_protocol_obj)&&parsecmp("and",info)    ) {
        info->p+=strlen("and");
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj258=node,
        node=(struct sNode*)come_increment_ref_count(parse_and_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        (__dec_obj258 ? __dec_obj258 = come_decrement_ref_count(__dec_obj258, ((struct sNode*)__dec_obj258)->finalize, ((struct sNode*)__dec_obj258)->_protocol_obj, 0,0, (void*)0) :0);
        __result_obj__324 = (struct sNode*)come_increment_ref_count(node);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        ((__result_obj__324) ? __result_obj__324 = come_decrement_ref_count(__result_obj__324, ((struct sNode*)__result_obj__324)->finalize, ((struct sNode*)__result_obj__324)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__324;
    }
    __result_obj__325 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__325) ? __result_obj__325 = come_decrement_ref_count(__result_obj__325, ((struct sNode*)__result_obj__325)->finalize, ((struct sNode*)__result_obj__325)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__325;
}

struct sNode* statment(struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNode* node;
struct sNode* __dec_obj259;
struct sNode* __result_obj__326;
    node=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
    __right_value0 = (void*)0;
    __dec_obj259=node,
    node=(struct sNode*)come_increment_ref_count(post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node),info));
    (__dec_obj259 ? __dec_obj259 = come_decrement_ref_count(__dec_obj259, ((struct sNode*)__dec_obj259)->finalize, ((struct sNode*)__dec_obj259)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__326 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__326) ? __result_obj__326 = come_decrement_ref_count(__result_obj__326, ((struct sNode*)__result_obj__326)->finalize, ((struct sNode*)__result_obj__326)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__326;
}

char* get_none_generics_name(char* class_name){
char* p;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
char* __result_obj__327;
char* __result_obj__328;
    p=class_name;
    while(    *p    ) {
        if(        *p==36        ) {
            __result_obj__327 = (char*)come_increment_ref_count(((char*)(__right_value1=charp_substring(((char*)(__right_value0=__builtin_string(class_name))),0,p-class_name))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__327 = come_decrement_ref_count(__result_obj__327, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__327;
        }
        else {
            p++;
        }
    }
    __right_value0 = (void*)0;
    __result_obj__328 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(class_name))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__328 = come_decrement_ref_count(__result_obj__328, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__328;
}

char* create_generics_name(struct sType* generics_type, struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* buf;
struct sClass* klass;
char* class_name;
int i;
struct sType* type;
char* type_name;
int i_239;
char* __result_obj__329;
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2792, "struct buffer*"))));
    klass=generics_type->mClass;
    class_name=klass->mName;
    buffer_append_str(buf,class_name);
    if(    list$1sType$ph_length(generics_type->mGenericsTypes)>0    ) {
        buffer_append_char(buf,36);
        buffer_append_char(buf,list$1sType$ph_length(generics_type->mGenericsTypes)+48);
        for(        i=0        ;        i<list$1sType$ph_length(generics_type->mGenericsTypes)        ;        i++        ){
            __right_value0 = (void*)0;
            type=((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(generics_type->mGenericsTypes,i)));
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            __right_value0 = (void*)0;
            type_name=(char*)come_increment_ref_count(create_generics_name(type,info));
            buffer_append_str(buf,type_name);
            buffer_append_char(buf,36);
            for(            i_239=0            ;            i_239<type->mPointerNum            ;            i_239++            ){
                buffer_append_char(buf,112);
            }
            if(            type->mHeap            ) {
                buffer_append_str(buf,"h");
            }
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    __right_value0 = (void*)0;
    __result_obj__329 = (char*)come_increment_ref_count(((char*)(__right_value0=buffer_to_string(buf))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__329 = come_decrement_ref_count(__result_obj__329, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__329;
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* buf;
char* __dec_obj260;
char* __dec_obj261;
char* __dec_obj262;
char* __dec_obj263;
char* __dec_obj264;
int i;
int i_240;
char* __result_obj__330;
memset(&struct_name, 0, sizeof(struct_name));
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2827, "struct buffer*"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")    ) {
        __right_value0 = (void*)0;
        __dec_obj260=struct_name,
        struct_name=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj260 = come_decrement_ref_count(__dec_obj260, (void*)0, (void*)0, 0,0, (void*)0);
        if(        string_operator_equals(struct_name,"_Bool")        ) {
            __right_value0 = (void*)0;
            __dec_obj261=struct_name,
            struct_name=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj261 = come_decrement_ref_count(__dec_obj261, (void*)0, (void*)0, 0,0, (void*)0);
        }
        if(        !obj_type->mClass->mStruct        ) {
            if(            list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mTypedefOriginalType->mPointerNum>0            ) {
                buffer_append_str(buf,"$");
            }
            if(            obj_type->mOriginalTypePointerNum            ) {
                buffer_append_str(buf,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol    ) {
        __right_value0 = (void*)0;
        __dec_obj262=struct_name,
        struct_name=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj262 = come_decrement_ref_count(__dec_obj262, (void*)0, (void*)0, 0,0, (void*)0);
        if(        string_operator_equals(struct_name,"_Bool")        ) {
            __right_value0 = (void*)0;
            __dec_obj263=struct_name,
            struct_name=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj263 = come_decrement_ref_count(__dec_obj263, (void*)0, (void*)0, 0,0, (void*)0);
        }
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj264=struct_name,
        struct_name=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj264 = come_decrement_ref_count(__dec_obj264, (void*)0, (void*)0, 0,0, (void*)0);
        if(        list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0        ) {
            buffer_append_str(buf,"$");
        }
        for(        i=0        ;        i<obj_type->mPointerNum        ;        i++        ){
            buffer_append_str(buf,"p");
        }
        for(        i_240=0        ;        i_240<obj_type->mArrayPointerNum        ;        i_240++        ){
            buffer_append_str(buf,"p");
        }
    }
    if(    obj_type->mArrayPointerType    ) {
        buffer_append_str(buf,"a");
    }
    else if(    !array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0    ) {
        buffer_append_str(buf,"a");
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__330 = (char*)come_increment_ref_count(((char*)(__right_value1=xsprintf("%s%s_%s",struct_name,((char*)(__right_value0=buffer_to_string(buf))),fun_name))));
    (struct_name = come_decrement_ref_count(struct_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__330 = come_decrement_ref_count(__result_obj__330, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__330;
}

char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* buf;
char* __dec_obj265;
char* __dec_obj266;
char* __dec_obj267;
int i;
char* __result_obj__331;
memset(&struct_name, 0, sizeof(struct_name));
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2877, "struct buffer*"))));
    if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol    ) {
        __right_value0 = (void*)0;
        __dec_obj265=struct_name,
        struct_name=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj265 = come_decrement_ref_count(__dec_obj265, (void*)0, (void*)0, 0,0, (void*)0);
        if(        string_operator_equals(struct_name,"_Bool")        ) {
            __right_value0 = (void*)0;
            __dec_obj266=struct_name,
            struct_name=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj266 = come_decrement_ref_count(__dec_obj266, (void*)0, (void*)0, 0,0, (void*)0);
        }
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj267=struct_name,
        struct_name=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj267 = come_decrement_ref_count(__dec_obj267, (void*)0, (void*)0, 0,0, (void*)0);
        if(        list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0        ) {
            buffer_append_str(buf,"$");
        }
        for(        i=0        ;        i<obj_type->mPointerNum        ;        i++        ){
            buffer_append_str(buf,"p");
        }
    }
    if(    obj_type->mArrayPointerType    ) {
        buffer_append_str(buf,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0    ) {
        buffer_append_str(buf,"pa");
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__331 = (char*)come_increment_ref_count(((char*)(__right_value1=xsprintf("%s%s_%s",struct_name,((char*)(__right_value0=buffer_to_string(buf))),fun_name))));
    (struct_name = come_decrement_ref_count(struct_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__331 = come_decrement_ref_count(__result_obj__331, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__331;
}

char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* buf;
char* __dec_obj268;
char* __dec_obj269;
int i;
char* __dec_obj270;
char* __dec_obj271;
char* __dec_obj272;
int i_241;
int len;
char* __result_obj__332;
memset(&struct_name, 0, sizeof(struct_name));
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2909, "struct buffer*"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")    ) {
        __right_value0 = (void*)0;
        __dec_obj268=struct_name,
        struct_name=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj268 = come_decrement_ref_count(__dec_obj268, (void*)0, (void*)0, 0,0, (void*)0);
        if(        string_operator_equals(struct_name,"_Bool")        ) {
            __right_value0 = (void*)0;
            __dec_obj269=struct_name,
            struct_name=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj269 = come_decrement_ref_count(__dec_obj269, (void*)0, (void*)0, 0,0, (void*)0);
        }
        if(        !obj_type->mClass->mStruct        ) {
            if(            obj_type->mTypedefOriginalType            ) {
                if(                list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mTypedefOriginalType->mPointerNum>0                ) {
                    buffer_append_str(buf,"$");
                }
                for(                i=0                ;                i<obj_type->mTypedefOriginalType->mPointerNum                ;                i++                ){
                    buffer_append_str(buf,"p");
                }
            }
        }
    }
    else if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol    ) {
        __right_value0 = (void*)0;
        __dec_obj270=struct_name,
        struct_name=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj270 = come_decrement_ref_count(__dec_obj270, (void*)0, (void*)0, 0,0, (void*)0);
        if(        string_operator_equals(struct_name,"_Bool")        ) {
            __right_value0 = (void*)0;
            __dec_obj271=struct_name,
            struct_name=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj271 = come_decrement_ref_count(__dec_obj271, (void*)0, (void*)0, 0,0, (void*)0);
        }
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj272=struct_name,
        struct_name=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj272 = come_decrement_ref_count(__dec_obj272, (void*)0, (void*)0, 0,0, (void*)0);
        if(        list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0        ) {
            buffer_append_str(buf,"$");
        }
        for(        i_241=0        ;        i_241<obj_type->mPointerNum        ;        i_241++        ){
            buffer_append_str(buf,"p");
        }
    }
    if(    obj_type->mArrayPointerType    ) {
        buffer_append_str(buf,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0    ) {
        buffer_append_str(buf,"pa");
    }
    char none_method_name[charp_length(fun_name)+1];
    memset(&none_method_name, 0, sizeof(none_method_name));
    __right_value0 = (void*)0;
    len=string_length(struct_name)+string_length(((char*)(__right_value0=buffer_to_string(buf))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    memcpy(none_method_name,fun_name+len+1,charp_length(fun_name)-len-1);
    none_method_name[charp_length(fun_name)-len-1]=0;
    __right_value0 = (void*)0;
    __result_obj__332 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(none_method_name))));
    (struct_name = come_decrement_ref_count(struct_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__332 = come_decrement_ref_count(__result_obj__332, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__332;
}

char* create_method_name_using_class(struct sClass* obj_class, char* fun_name, struct sInfo* info){
void* __right_value0 = (void*)0;
char* struct_name;
char* __dec_obj273;
char* __result_obj__333;
    struct_name=(char*)come_increment_ref_count(__builtin_string(obj_class->mName));
    if(    string_operator_equals(struct_name,"_Bool")    ) {
        __right_value0 = (void*)0;
        __dec_obj273=struct_name,
        struct_name=(char*)come_increment_ref_count(xsprintf("bool"));
        __dec_obj273 = come_decrement_ref_count(__dec_obj273, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __right_value0 = (void*)0;
    __result_obj__333 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("%s_%s",struct_name,fun_name))));
    (struct_name = come_decrement_ref_count(struct_name, (void*)0, (void*)0, 0, 0, (void*)0));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__333 = come_decrement_ref_count(__result_obj__333, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__333;
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
struct sNode* __result_obj__334;
    err_msg(info,"unexpected word(%s)(2)",buf);
    exit(2);
    __result_obj__334 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__334) ? __result_obj__334 = come_decrement_ref_count(__result_obj__334, ((struct sNode*)__result_obj__334)->finalize, ((struct sNode*)__result_obj__334)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__334;
}

struct sNode* post_position_operator(struct sNode* node, struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params;
char* p;
int sline;
_Bool err_flag;
char* label;
char* __dec_obj274;
char* __dec_obj275;
_Bool no_comma;
_Bool in_fun_param;
struct sNode* node_242;
struct sNode* __dec_obj276;
struct sNode* _inf_value20;
struct sLambdaCall* _inf_obj_value20;
void* __right_value2 = (void*)0;
struct sNode* __result_obj__337;
struct sNode* __result_obj__338;
    parse_sharp_v5(info);
    if(    !node->terminated(node->_protocol_obj)&&*info->p==40    ) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05call.c", 2989, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
        while(        (_Bool)1        ) {
            if(            *info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p=info->p;
            sline=info->sline;
            err_flag=(_Bool)0;
            __right_value0 = (void*)0;
            label=(char*)come_increment_ref_count(__builtin_string(""));
            if(            isalpha(*info->p)||*info->p==95            ) {
                __right_value0 = (void*)0;
                __dec_obj274=label,
                label=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj274 = come_decrement_ref_count(__dec_obj274, (void*)0, (void*)0, 0,0, (void*)0);
                err_flag=(_Bool)1;
            }
            if(            err_flag==(_Bool)1&&*info->p==58            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj275=label,
                label=((void*)0);
                __dec_obj275 = come_decrement_ref_count(__dec_obj275, (void*)0, (void*)0, 0,0, (void*)0);
                info->p=p;
                info->sline=sline;
            }
            no_comma=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            __right_value0 = (void*)0;
            node_242=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
            __right_value0 = (void*)0;
            __dec_obj276=node_242,
            node_242=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_242),info));
            (__dec_obj276 ? __dec_obj276 = come_decrement_ref_count(__dec_obj276, ((struct sNode*)__dec_obj276)->finalize, ((struct sNode*)__dec_obj276)->_protocol_obj, 0,0, (void*)0) :0);
            info->no_comma=no_comma;
            info->in_fun_param=in_fun_param;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            list$1tuple2$2char$phsNode$ph$ph_push_back(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "05call.c", 3032, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(label),(struct sNode*)come_increment_ref_count(node_242))));
            parse_sharp_v5(info);
            if(            *info->p==44            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
                (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node_242) ? node_242 = come_decrement_ref_count(node_242, ((struct sNode*)node_242)->finalize, ((struct sNode*)node_242)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                break;
            }
            (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node_242) ? node_242 = come_decrement_ref_count(node_242, ((struct sNode*)node_242)->finalize, ((struct sNode*)node_242)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        parse_sharp_v5(info);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value20=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 3050, "struct sNode");
        _inf_obj_value20=(struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)(__right_value1=sLambdaCall_initialize((struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc_v2(1, sizeof(struct sLambdaCall)*(1), "05call.c", 3050, "struct sLambdaCall*")),(struct sNode*)come_increment_ref_count(node),params,info))));
        _inf_value20->_protocol_obj=_inf_obj_value20;
        _inf_value20->finalize=(void*)sLambdaCall_finalize;
        _inf_value20->clone=(void*)sLambdaCall_clone;
        _inf_value20->compile=(void*)sLambdaCall_compile;
        _inf_value20->sline=(void*)sNodeBase_sline;
        _inf_value20->sline_real=(void*)sNodeBase_sline_real;
        _inf_value20->sname=(void*)sNodeBase_sname;
        _inf_value20->terminated=(void*)sNodeBase_terminated;
        _inf_value20->kind=(void*)sLambdaCall_kind;
        _inf_value20->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__337 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value20)));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sLambdaCall_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__337) ? __result_obj__337 = come_decrement_ref_count(__result_obj__337, ((struct sNode*)__result_obj__337)->finalize, ((struct sNode*)__result_obj__337)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__337;
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __result_obj__338 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((__result_obj__338) ? __result_obj__338 = come_decrement_ref_count(__result_obj__338, ((struct sNode*)__result_obj__338)->finalize, ((struct sNode*)__result_obj__338)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__338;
    }
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
}

static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self){
struct sLambdaCall* __result_obj__335;
void* __right_value0 = (void*)0;
struct sLambdaCall* result;
char* __dec_obj277;
struct sNode* __dec_obj278;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj279;
struct sLambdaCall* __result_obj__336;
    if(    self==(void*)0    ) {
        __result_obj__335 = (void*)0;
        return __result_obj__335;
    }
    result=(struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc_v2(1, sizeof(struct sLambdaCall)*(1), "sLambdaCall_clone", 3, "struct sLambdaCall*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj277=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLambdaCall_clone", 5, "char*"));
        __dec_obj277 = come_decrement_ref_count(__dec_obj277, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj278=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj278 ? __dec_obj278 = come_decrement_ref_count(__dec_obj278, ((struct sNode*)__dec_obj278)->finalize, ((struct sNode*)__dec_obj278)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj279=result->params,
        result->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->params));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj279,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__336 = result;
    come_call_finalizer(sLambdaCall_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__336;
}

