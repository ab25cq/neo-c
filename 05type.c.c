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
    long size;
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
    long size;
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

struct anonymous_typeX12
{
    struct regex_t* first;
    struct regex_t* last;
    int id;
};

union anonymous_typeZ11
{
unsigned char ch;
unsigned char* ccl;
    struct {
        struct regex_t* first;
        struct regex_t* last;
        int id;
    } group;
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

struct tuple3$3sType$phchar$ph_Bool$
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

struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$
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

struct tuple2$2char$ph_Bool$
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

struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$
{
    struct list$1sType$ph* v1;
    struct list$1char$ph* v2;
    struct list$1char$ph* v3;
    int v4;
};

struct tuple3$3sType$phchar$phint$
{
    struct sType* v1;
    char* v2;
    int v3;
};

struct __current_stack1__
{
    _Bool* pointer_paren;
    int* paren_num;
    int* array_pointer_num;
    struct list$1sNode$ph** array;
    struct sInfo** info;
    _Bool* parse_variable_name;
    _Bool* parse_multiple_type;
    _Bool* in_function_parametor;
    char** head;
    int* head_sline;
    char** type_name;
    _Bool* record_;
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
    struct sNode** alignas_;
    char** union_attribute;
    _Bool* anonymous_type;
    _Bool* anonymous_name;
    _Bool* atomic_;
    _Bool* thread_local;
    char** attribute_77;
    int* pointer_num;
    _Bool* heap;
    _Bool* refference;
    _Bool* no_refference;
    _Bool* channel;
    _Bool* deffer_;
    _Bool* any_class;
    _Bool* vtable;
    char** tuple_name;
    _Bool* lambda_flag;
    struct sType** type_78;
    char** var_name_79;
    _Bool* function_pointer_flag;
    _Bool* pointer_to_array_flag;
    _Bool* var_name_between_brace;
};

struct __current_stack2__
{
    struct sInfo** info;
    _Bool* parse_variable_name;
    _Bool* parse_multiple_type;
    _Bool* in_function_parametor;
    char** head;
    int* head_sline;
    char** type_name;
    _Bool* record_;
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
    struct sNode** alignas_;
    char** union_attribute;
    _Bool* anonymous_type;
    _Bool* anonymous_name;
    _Bool* atomic_;
    _Bool* thread_local;
    char** attribute_77;
    int* pointer_num;
    _Bool* heap;
    _Bool* refference;
    _Bool* no_refference;
    _Bool* channel;
    _Bool* deffer_;
    _Bool* any_class;
    _Bool* vtable;
    char** tuple_name;
    _Bool* lambda_flag;
    struct sType** type_78;
    char** var_name_79;
    _Bool* function_pointer_flag;
    _Bool* pointer_to_array_flag;
    _Bool* var_name_between_brace;
    struct list$1sNode$ph** array_num_typedef;
};

struct __current_stack3__
{
    struct sInfo** info;
    _Bool* parse_variable_name;
    _Bool* parse_multiple_type;
    _Bool* in_function_parametor;
    char** head;
    int* head_sline;
    char** type_name;
    _Bool* record_;
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
    struct sNode** alignas_;
    char** union_attribute;
    _Bool* anonymous_type;
    _Bool* anonymous_name;
    _Bool* atomic_;
    _Bool* thread_local;
    char** attribute_77;
    int* pointer_num;
    _Bool* heap;
    _Bool* refference;
    _Bool* no_refference;
    _Bool* channel;
    _Bool* deffer_;
    _Bool* any_class;
    _Bool* vtable;
    char** tuple_name;
    _Bool* lambda_flag;
    struct sType** type_78;
    char** var_name_79;
    _Bool* function_pointer_flag;
    _Bool* pointer_to_array_flag;
    _Bool* var_name_between_brace;
    struct list$1sNode$ph** array_num_typedef;
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
_Bool _Bool_equals(_Bool self, _Bool right);
_Bool char_equals(char self, char right);
_Bool short_equals(short self, short right);
_Bool int_equals(int self, int right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(unsigned long  int self, unsigned long  int right);
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
_Bool charpa_contained(char** self, unsigned long  int len, char* str);
unsigned long  int shorta_length(short* self, unsigned long  int len);
unsigned long  int inta_length(int* self, unsigned long  int len);
unsigned long  int longa_length(long* self, unsigned long  int len);
unsigned long  int floata_length(float* self, unsigned long  int len);
unsigned long  int doublea_length(double* self, unsigned long  int len);
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
long long_printf(long self, char* msg);
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
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info, _Bool unsinged_);
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
char* create_generics_name(struct sType* generics_type, struct sInfo* info);
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
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct sNode* node, struct CVALUE* left_value, struct sInfo* info);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, struct sInfo* info);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(char* value, struct sInfo* info);
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
_Bool parsecmp(char* p2, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
struct tuple2$2char$ph_Bool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
struct sBlock* parse_block(struct sInfo* info, _Bool return_self_at_last, _Bool in_function);
int transpile_block(struct sBlock* block, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block);
void arrange_stack(struct sInfo* info, int top);
struct sNode* parse_function(struct sInfo* info);
struct sNode* statment(struct sInfo* info);
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* expression_node_v1(struct sInfo* info);
struct sNode* expression_node_v99(struct sInfo* info);
struct sNode* expression_node_v98(struct sInfo* info);
struct sNode* expression_node_v97(struct sInfo* info);
int transpile(struct sInfo* info);
void parse_sharp_v5(struct sInfo* info);
char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_using_class(struct sClass* obj_class, char* fun_name, struct sInfo* info);
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
struct sNode* create_nothing_node(struct sInfo* info);
_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info);
_Bool is_contained_generics_types(struct sType* type, struct sInfo* info);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_struct(char* type_name, char* struct_attribute, struct sInfo* info);
char* get_none_generics_name(char* class_name);
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
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo* info);
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
_Bool is_type_name(char* buf, struct sInfo* info);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key);
static struct sType* map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char* key);
static _Bool list$1char$ph_contained(struct list$1char$ph* self, char* item);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
static struct sType* sType_clone(struct sType* self);
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
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* parse_params(struct sInfo* info, _Bool in_constructor_);
static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self);
static struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$* tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$_initialize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$* self, struct list$1sType$ph* v1, struct list$1char$ph* v2, struct list$1char$ph* v3, int v4);
static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$* self);
static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* self);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
static struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$_initialize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* self, struct list$1sType$ph* v1, struct list$1char$ph* v2, struct list$1char$ph* v3, _Bool v4);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info);
static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_initialize(struct tuple2$2char$phchar$ph* self, char* v1, char* v2);
static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self);
void parse_struct_attribute_skip_paren(struct sInfo* info);
char* parse_struct_attribute(struct sInfo* info);
struct tuple2$2sType$phchar$ph* parse_variable_name_on_multiple_declare(struct sType* base_type_name, _Bool first, struct sInfo* info);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_initialize(struct tuple2$2sType$phchar$ph* self, struct sType* v1, char* v2);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
void skip_pointer_attribute(struct sInfo* info);
struct tuple3$3sType$phchar$ph_Bool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
static struct tuple3$3sType$phchar$ph_Bool$* tuple3$3sType$phchar$ph_Bool$_initialize(struct tuple3$3sType$phchar$ph_Bool$* self, struct sType* v1, char* v2, _Bool v3);
struct tuple3$3sType$phchar$ph_Bool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
static struct tuple3$3sType$phchar$phint$* tuple3$3sType$phchar$phint$_initialize(struct tuple3$3sType$phchar$phint$* self, struct sType* v1, char* v2, int v3);
static void tuple3$3sType$phchar$phint$$p_finalize(struct tuple3$3sType$phchar$phint$* self);
static int list$1char$ph_length(struct list$1char$ph* self);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
static struct list$1sNode$ph* list$1sNode$ph_each(struct list$1sNode$ph* self, void* parent, void (*block)(void*,struct sNode*,int,_Bool*));
void method_block1_05typec(struct __current_stack1__* parent, struct sNode* it, int it2, _Bool* it3);
static struct buffer* map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char* key);
static struct buffer* map$2char$phbuffer$ph_operator_load_element(struct map$2char$phbuffer$ph* self, char* key);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item);
static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self);
static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item);
void method_block2_05typec(struct __current_stack2__* parent, struct sNode* it, int it2, _Bool* it3);
void method_block3_05typec(struct __current_stack3__* parent, struct sNode* it, int it2, _Bool* it3);
static struct list$1sNode$ph* list$1sNode$ph_initialize_with_values(struct list$1sNode$ph* self, int num_value, struct sNode** values);
// uniq global variable
// inline function

// body function
_Bool is_type_name(char* buf, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sClass* klass;
struct sType* type;
void* __right_value1 = (void*)0;
void* __right_value2 = (void*)0;
struct sClass* generics_class;
_Bool generics_type_name;
_Bool mgenerics_type_name;
    klass=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,buf)));
    come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    type=((struct sType*)(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,buf)));
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    generics_class=((struct sClass*)(__right_value2=map$2char$phsClass$ph_operator_load_element(info->generics_classes,((char*)(__right_value1=__builtin_string(buf))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    come_call_finalizer(sClass_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    generics_type_name=list$1char$ph_contained(info->generics_type_names,((char*)(__right_value0=__builtin_string(buf))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    __right_value0 = (void*)0;
    mgenerics_type_name=list$1char$ph_contained(info->method_generics_type_names,((char*)(__right_value0=__builtin_string(buf))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    if(    gComeC    ) {
        return (type&&type->mTypedef)||(klass&&klass->mNumber)||(klass&&klass->mFloat)||charp_operator_equals(buf,"_Thread_local")||charp_operator_equals(buf,"_Complex")||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||info->in_top_level&&(charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__forceinline"))||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"restrict")||charp_operator_equals(buf,"__noreturn")||charp_operator_equals(buf,"_noreturn")||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"typeof")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"_Alignas")||charp_operator_equals(buf,"_Atomic")||charp_operator_equals(buf,"__attribute__")&&*info->p==40||charp_operator_equals(buf,"void");
    }
    else {
        return generics_class||generics_type_name||mgenerics_type_name||klass||type||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||info->in_top_level&&(charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__forceinline"))||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Thread_local")||charp_operator_equals(buf,"_Complex")||(info->in_top_level&&charp_operator_equals(buf,"_Noreturn"))||(info->in_top_level&&charp_operator_equals(buf,"__noreturn"))||(info->in_top_level&&charp_operator_equals(buf,"_noreturn"))||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"typeof")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"_Alignas")||charp_operator_equals(buf,"_Atomic")||charp_operator_equals(buf,"restrict")||charp_operator_equals(buf,"__attribute__")&&*info->p==40||(charp_operator_equals(buf,"tup")&&(*info->p==58||*info->p==40))||(info->in_top_level&&charp_operator_equals(buf,"record"))||(info->in_top_level&&charp_operator_equals(buf,"uniq"));
    }
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value;
struct sClass* __result_obj__1;
unsigned int hash;
unsigned int it;
struct sClass* __result_obj__2;
struct sClass* __result_obj__3;
struct sClass* __result_obj__4;
struct sClass* __result_obj__5;
    memset(&default_value,0,sizeof(struct sClass*));
    if(    self==((void*)0)    ) {
        __result_obj__1 = (struct sClass*)come_increment_ref_count(default_value);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sClass_finalize, __result_obj__1, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__1;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__2 = (struct sClass*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__2, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__2;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__3 = (struct sClass*)come_increment_ref_count(default_value);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__3, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__3;
            }
        }
        else {
            __result_obj__4 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__4, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__4;
        }
    }
    __result_obj__5 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__5, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__5;
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
    if(    self==((void*)0)    ) {
        return;
    }
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
    if(    self==((void*)0)    ) {
        return;
    }
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
    if(    self==((void*)0)    ) {
        return;
    }
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
    if(    self==((void*)0)    ) {
        return;
    }
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
    if(    self==((void*)0)    ) {
        return;
    }
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

static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value;
struct sClass* __result_obj__6;
unsigned int hash;
unsigned int it;
struct sClass* __result_obj__7;
struct sClass* __result_obj__8;
struct sClass* __result_obj__9;
struct sClass* __result_obj__10;
    memset(&default_value,0,sizeof(struct sClass*));
    if(    self==((void*)0)    ) {
        __result_obj__6 = (struct sClass*)come_increment_ref_count(default_value);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sClass_finalize, __result_obj__6, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__6;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__7 = (struct sClass*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__7, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__7;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__8 = (struct sClass*)come_increment_ref_count(default_value);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__8, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__8;
            }
        }
        else {
            __result_obj__9 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__9, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__9;
        }
    }
    __result_obj__10 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__10, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__10;
}

static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key){
struct sType* default_value;
struct sType* __result_obj__11;
unsigned int hash;
unsigned int it;
struct sType* __result_obj__12;
struct sType* __result_obj__13;
struct sType* __result_obj__14;
struct sType* __result_obj__15;
    memset(&default_value,0,sizeof(struct sType*));
    if(    self==((void*)0)    ) {
        __result_obj__11 = (struct sType*)come_increment_ref_count(default_value);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sType_finalize, __result_obj__11, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__11;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__12 = (struct sType*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__12, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__12;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__13 = (struct sType*)come_increment_ref_count(default_value);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__13, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__13;
            }
        }
        else {
            __result_obj__14 = (struct sType*)come_increment_ref_count(default_value);
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sType_finalize, __result_obj__14, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__14;
        }
    }
    __result_obj__15 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__15, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__15;
}

static struct sType* map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char* key){
struct sType* default_value;
struct sType* __result_obj__16;
unsigned int hash;
unsigned int it;
struct sType* __result_obj__17;
struct sType* __result_obj__18;
struct sType* __result_obj__19;
struct sType* __result_obj__20;
    memset(&default_value,0,sizeof(struct sType*));
    if(    self==((void*)0)    ) {
        __result_obj__16 = (struct sType*)come_increment_ref_count(default_value);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sType_finalize, __result_obj__16, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__16;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__17 = (struct sType*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__17, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__17;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__18 = (struct sType*)come_increment_ref_count(default_value);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__18, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__18;
            }
        }
        else {
            __result_obj__19 = (struct sType*)come_increment_ref_count(default_value);
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sType_finalize, __result_obj__19, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__19;
        }
    }
    __result_obj__20 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__20, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__20;
}

static _Bool list$1char$ph_contained(struct list$1char$ph* self, char* item){
char* it;
    if(    self==((void*)0)    ) {
        return 0;
    }
    for(    it=list$1char$ph_begin(self)    ;    !list$1char$ph_end(self)    ;    it=list$1char$ph_next(self)    ){
        if(        string_equals(it,item)        ) {
            return 1;
        }
    }
    return 0;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result;
char* __result_obj__21;
char* __result_obj__22;
char* result_0;
char* __result_obj__23;
    if(    self==((void*)0)    ) {
        memset(&result,0,sizeof(char*));
        __result_obj__21 = result;
        return __result_obj__21;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__22 = self->it->item;
        return __result_obj__22;
    }
    memset(&result_0,0,sizeof(char*));
    __result_obj__23 = result_0;
    return __result_obj__23;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result;
char* __result_obj__24;
char* __result_obj__25;
char* result_1;
char* __result_obj__26;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result,0,sizeof(char*));
        __result_obj__24 = result;
        return __result_obj__24;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__25 = self->it->item;
        return __result_obj__25;
    }
    memset(&result_1,0,sizeof(char*));
    __result_obj__26 = result_1;
    return __result_obj__26;
}

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info){
struct sType* type2;
struct sType* __dec_obj1;
void* __right_value0 = (void*)0;
struct sType* __dec_obj33;
struct list$1sType$ph* o2_saved;
struct sType* it;
_Bool __result_obj__57;
_Bool __result_obj__58;
_Bool __result_obj__59;
_Bool __result_obj__60;
memset(&type2, 0, sizeof(type2));
    if(    type->mNoSolvedGenericsType    ) {
        __dec_obj1=type2,
        type2=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj1,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj33=type2,
        type2=(struct sType*)come_increment_ref_count(sType_clone(type));
        come_call_finalizer(sType_finalize, __dec_obj33,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    for(    o2_saved=(struct list$1sType$ph*)come_increment_ref_count(type2->mGenericsTypes),it=list$1sType$ph_begin(o2_saved)    ;    !list$1sType$ph_end(o2_saved)    ;    it=list$1sType$ph_next(o2_saved)    ){
        if(        is_contained_generics_class(it,info)        ) {
            __result_obj__57 = 1;
            come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__57;
        }
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(    type2->mClass->mGenerics    ) {
        __result_obj__58 = 1;
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__58;
    }
    if(    type2->mClass->mMethodGenerics    ) {
        __result_obj__59 = 1;
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__59;
    }
    __result_obj__60 = 0;
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__60;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__27;
void* __right_value0 = (void*)0;
struct sType* result;
struct sType* __dec_obj2;
struct sType* __dec_obj3;
struct list$1sType$ph* __dec_obj7;
struct sType* __dec_obj8;
struct sNode* __dec_obj9;
struct sNode* __dec_obj10;
char* __dec_obj11;
char* __dec_obj12;
char* __dec_obj13;
char* __dec_obj14;
char* __dec_obj15;
char* __dec_obj16;
struct list$1sNode$ph* __dec_obj20;
struct list$1sNode$ph* __dec_obj21;
struct list$1int$* __dec_obj22;
struct list$1int$* __dec_obj23;
struct sType* __dec_obj24;
char* __dec_obj25;
struct list$1sType$ph* __dec_obj26;
struct list$1char$ph* __dec_obj30;
struct sType* __dec_obj31;
struct sNode* __dec_obj32;
struct sType* __result_obj__50;
    if(    self==(void*)0    ) {
        __result_obj__27 = (void*)0;
        return __result_obj__27;
    }
    result=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)    ) {
        result->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj2=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj3=result->mChannelType,
        result->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj7=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj8=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj8,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj9=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj10=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj11=result->mTupleName,
        result->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj12=result->mAttribute,
        result->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarAttribute!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj13=result->mVarAttribute,
        result->mVarAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mVarAttribute, "sType_clone", 13, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0);
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
        __dec_obj14=result->mAnonymousName,
        result->mAnonymousName=(char*)come_increment_ref_count((char*)come_memdup(self->mAnonymousName, "sType_clone", 38, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->mInnerStruct=self->mInnerStruct;
    }
    if(    self!=((void*)0)&&self->mInnerStructName!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj15=result->mInnerStructName,
        result->mInnerStructName=(char*)come_increment_ref_count((char*)come_memdup(self->mInnerStructName, "sType_clone", 40, "char*"));
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0);
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
        __dec_obj16=result->mAsmName,
        result->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 45, "char*"));
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)    ) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj20=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj20,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj21=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj21,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayStatic!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj22=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic));
        come_call_finalizer(list$1int$_finalize, __dec_obj22,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayRestrict!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj23=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict));
        come_call_finalizer(list$1int$_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        __dec_obj24=result->mTypedefOriginalType,
        result->mTypedefOriginalType=(struct sType*)come_increment_ref_count(sType_clone(self->mTypedefOriginalType));
        come_call_finalizer(sType_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj25=result->mOriginalTypeName,
        result->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 57, "char*"));
        __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0, (void*)0);
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
        __dec_obj26=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj26,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj30=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj30,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj31=result->mResultType,
        result->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj31,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mTypeOfNode!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj32=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode));
        (__dec_obj32 ? __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__50 = result;
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__50;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__28;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1sType$ph* result;
struct list_item$1sType$ph* it;
struct list$1sType$ph* __result_obj__32;
    if(    self==((void*)0)    ) {
        __result_obj__28 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__28, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__28;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1061, "struct list$1sType$ph*"))));
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
    __result_obj__32 = (struct list$1sType$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__32, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__32;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__29;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__29 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__29, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__29;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
struct list$1sType$ph* __result_obj__30;
void* __right_value0 = (void*)0;
struct list_item$1sType$ph* litem;
struct sType* __dec_obj4;
struct list_item$1sType$ph* litem_2;
struct sType* __dec_obj5;
struct list_item$1sType$ph* litem_3;
struct sType* __dec_obj6;
struct list$1sType$ph* __result_obj__31;
    if(    self==((void*)0)    ) {
        __result_obj__30 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__30;
    }
    if(    self->len==0    ) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1082, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj4=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_2=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1092, "struct list_item$1sType$ph*"))));
        litem_2->prev=self->head;
        litem_2->next=((void*)0);
        __dec_obj5=litem_2->item,
        litem_2->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_2;
        self->head->next=litem_2;
    }
    else {
        __right_value0 = (void*)0;
        litem_3=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1102, "struct list_item$1sType$ph*"))));
        litem_3->prev=self->tail;
        litem_3->next=((void*)0);
        __dec_obj6=litem_3->item,
        litem_3->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_3;
        self->tail=litem_3;
    }
    self->len++;
    __result_obj__31 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__31;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it;
struct list_item$1sType$ph* prev_it;
    if(    self==((void*)0)    ) {
        return;
    }
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__33;
void* __right_value0 = (void*)0;
struct sNode* result;
struct sNode* __result_obj__34;
    if(    self==(void*)0    ) {
        __result_obj__33 = (struct sNode*)come_increment_ref_count((void*)0);
        ((__result_obj__33) ? __result_obj__33 = come_decrement_ref_count(__result_obj__33, ((struct sNode*)__result_obj__33)->finalize, ((struct sNode*)__result_obj__33)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__33;
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
    __result_obj__34 = (struct sNode*)come_increment_ref_count(result);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__34) ? __result_obj__34 = come_decrement_ref_count(__result_obj__34, ((struct sNode*)__result_obj__34)->finalize, ((struct sNode*)__result_obj__34)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__34;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__35;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1sNode$ph* result;
struct list_item$1sNode$ph* it;
struct list$1sNode$ph* __result_obj__39;
    if(    self==((void*)0)    ) {
        __result_obj__35 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__35, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__35;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1061, "struct list$1sNode$ph*"))));
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
    __result_obj__39 = (struct list$1sNode$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__39, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__39;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__36;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__36 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__36, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__36;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
struct list$1sNode$ph* __result_obj__37;
void* __right_value0 = (void*)0;
struct list_item$1sNode$ph* litem;
struct sNode* __dec_obj17;
struct list_item$1sNode$ph* litem_4;
struct sNode* __dec_obj18;
struct list_item$1sNode$ph* litem_5;
struct sNode* __dec_obj19;
struct list$1sNode$ph* __result_obj__38;
    if(    self==((void*)0)    ) {
        __result_obj__37 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__37;
    }
    if(    self->len==0    ) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1082, "struct list_item$1sNode$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj17=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj17 ? __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_4=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1092, "struct list_item$1sNode$ph*"))));
        litem_4->prev=self->head;
        litem_4->next=((void*)0);
        __dec_obj18=litem_4->item,
        litem_4->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj18 ? __dec_obj18 = come_decrement_ref_count(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem_4;
        self->head->next=litem_4;
    }
    else {
        __right_value0 = (void*)0;
        litem_5=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1102, "struct list_item$1sNode$ph*"))));
        litem_5->prev=self->tail;
        litem_5->next=((void*)0);
        __dec_obj19=litem_5->item,
        litem_5->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj19 ? __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail->next=litem_5;
        self->tail=litem_5;
    }
    self->len++;
    __result_obj__38 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    return __result_obj__38;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it;
struct list_item$1sNode$ph* prev_it;
    if(    self==((void*)0)    ) {
        return;
    }
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct list$1int$* list$1int$$p_clone(struct list$1int$* self){
struct list$1int$* __result_obj__40;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1int$* result;
struct list_item$1int$* it;
struct list$1int$* __result_obj__44;
    if(    self==((void*)0)    ) {
        __result_obj__40 = (struct list$1int$*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1int$$p_finalize, __result_obj__40, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__40;
    }
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/neo-c.h", 1061, "struct list$1int$*"))));
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
    __result_obj__44 = (struct list$1int$*)come_increment_ref_count(result);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__44, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__44;
}

static struct list$1int$* list$1int$_initialize(struct list$1int$* self){
struct list$1int$* __result_obj__41;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__41 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__41, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__41;
}

static struct list$1int$* list$1int$_add(struct list$1int$* self, int item){
struct list$1int$* __result_obj__42;
void* __right_value0 = (void*)0;
struct list_item$1int$* litem;
struct list_item$1int$* litem_6;
struct list_item$1int$* litem_7;
struct list$1int$* __result_obj__43;
    if(    self==((void*)0)    ) {
        __result_obj__42 = self;
        return __result_obj__42;
    }
    if(    self->len==0    ) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1082, "struct list_item$1int$*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_6=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1092, "struct list_item$1int$*"))));
        litem_6->prev=self->head;
        litem_6->next=((void*)0);
        litem_6->item=item;
        self->tail=litem_6;
        self->head->next=litem_6;
    }
    else {
        __right_value0 = (void*)0;
        litem_7=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1102, "struct list_item$1int$*"))));
        litem_7->prev=self->tail;
        litem_7->next=((void*)0);
        litem_7->item=item;
        self->tail->next=litem_7;
        self->tail=litem_7;
    }
    self->len++;
    __result_obj__43 = self;
    return __result_obj__43;
}

static void list$1int$_finalize(struct list$1int$* self){
struct list_item$1int$* it;
struct list_item$1int$* prev_it;
    if(    self==((void*)0)    ) {
        return;
    }
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__45;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1char$ph* result;
struct list_item$1char$ph* it;
struct list$1char$ph* __result_obj__49;
    if(    self==((void*)0)    ) {
        __result_obj__45 = (struct list$1char$ph*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__45, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__45;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 1061, "struct list$1char$ph*"))));
    it=self->head;
    while(    it!=((void*)0)    ) {
        if(        1        ) {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char*)come_increment_ref_count((char*)come_memdup(it->item, "/usr/local/include/neo-c.h", 1066, "char*")));
        }
        else {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char*)come_increment_ref_count((char*)come_memdup(it->item, "/usr/local/include/neo-c.h", 1069, "char*")));
        }
        it=it->next;
    }
    __result_obj__49 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__49, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__49;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__46;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__46 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__46, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__46;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
struct list$1char$ph* __result_obj__47;
void* __right_value0 = (void*)0;
struct list_item$1char$ph* litem;
char* __dec_obj27;
struct list_item$1char$ph* litem_8;
char* __dec_obj28;
struct list_item$1char$ph* litem_9;
char* __dec_obj29;
struct list$1char$ph* __result_obj__48;
    if(    self==((void*)0)    ) {
        __result_obj__47 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__47;
    }
    if(    self->len==0    ) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1082, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj27=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_8=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1092, "struct list_item$1char$ph*"))));
        litem_8->prev=self->head;
        litem_8->next=((void*)0);
        __dec_obj28=litem_8->item,
        litem_8->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_8;
        self->head->next=litem_8;
    }
    else {
        __right_value0 = (void*)0;
        litem_9=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1102, "struct list_item$1char$ph*"))));
        litem_9->prev=self->tail;
        litem_9->next=((void*)0);
        __dec_obj29=litem_9->item,
        litem_9->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_9;
        self->tail=litem_9;
    }
    self->len++;
    __result_obj__48 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__48;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it;
struct list_item$1char$ph* prev_it;
    if(    self==((void*)0)    ) {
        return;
    }
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result;
struct sType* __result_obj__51;
struct sType* __result_obj__52;
struct sType* result_10;
struct sType* __result_obj__53;
    if(    self==((void*)0)    ) {
        memset(&result,0,sizeof(struct sType*));
        __result_obj__51 = result;
        return __result_obj__51;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__52 = self->it->item;
        return __result_obj__52;
    }
    memset(&result_10,0,sizeof(struct sType*));
    __result_obj__53 = result_10;
    return __result_obj__53;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result;
struct sType* __result_obj__54;
struct sType* __result_obj__55;
struct sType* result_11;
struct sType* __result_obj__56;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result,0,sizeof(struct sType*));
        __result_obj__54 = result;
        return __result_obj__54;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__55 = self->it->item;
        return __result_obj__55;
    }
    memset(&result_11,0,sizeof(struct sType*));
    __result_obj__56 = result_11;
    return __result_obj__56;
}

struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* parse_params(struct sInfo* info, _Bool in_constructor_){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1sType$ph* param_types;
struct list$1char$ph* param_names;
struct list$1char$ph* param_default_parametors;
_Bool var_args;
struct sType* type_;
int __exception_result_var_b1;
_Bool void_param;
char* p;
int sline;
struct tuple3$3sType$phchar$ph_Bool$* __exception_result_var_b2;
struct tuple3$3sType$phchar$ph_Bool$* __exception_result_var_b3;
struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var1
;struct sType* param_type=0;
char* param_name=0;
_Bool err=0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* __result_obj__62;
struct sType* param_type2;
char* p_16;
_Bool no_comma;
struct sNode* node;
char* p2;
int __exception_result_var_b4;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* __result_obj__68;
    param_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05type.c", 84, "struct list$1sType$ph*"))));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    param_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05type.c", 85, "struct list$1char$ph*"))));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05type.c", 86, "struct list$1char$ph*"))));
    var_args=0;
    if(    in_constructor_    ) {
        __right_value0 = (void*)0;
        list$1char$ph_add(param_names,(char*)come_increment_ref_count(xsprintf("self")));
        __right_value0 = (void*)0;
        type_=(struct sType*)come_increment_ref_count(sType_clone(info->class_type));
        type_->mHeap=1;
        list$1sType$ph_add(param_types,(struct sType*)come_increment_ref_count(type_));
        list$1char$ph_add(param_default_parametors,((void*)0));
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    info->in_class    ) {
        __right_value0 = (void*)0;
        list$1char$ph_add(param_names,(char*)come_increment_ref_count(xsprintf("self")));
        __right_value0 = (void*)0;
        list$1sType$ph_add(param_types,(struct sType*)come_increment_ref_count(sType_clone(info->class_type)));
        list$1char$ph_add(param_default_parametors,((void*)0));
    }
    (come_push_stackframe("05type.c", 102, 0),__exception_result_var_b1=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b1);
    void_param=0;
    {
        p=info->p;
        sline=info->sline;
        if(        parsecmp("void",info)        ) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(            *info->p==41            ) {
                void_param=1;
            }
        }
        info->p=p;
        info->sline=sline;
    }
    if(    void_param    ) {
        if(        parsecmp("void",info)        ) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(            *info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
        }
    }
    else {
        while(        1        ) {
            if(            *info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            __right_value0 = (void*)0;
            multiple_assign_var1=(come_push_stackframe("05type.c", 144, 2),__exception_result_var_b3=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,1,0,1))), come_pop_stackframe(), __exception_result_var_b3);
            param_type=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            param_name=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err=multiple_assign_var1->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(            !err            ) {
                printf("%s %d: failed to function parametor\n",info->sname,info->sline);
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __result_obj__62 = (struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_increment_ref_count(((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$*)(__right_value1=tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$_initialize((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$*)come_increment_ref_count((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$*)come_calloc_v2(1, sizeof(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$)*(1), "05type.c", 148, "struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$")),(struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)((void*)0)),(struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)((void*)0)),(struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)((void*)0)),0))));
                come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, __result_obj__62, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__62;
            }
            __right_value0 = (void*)0;
            param_type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(param_type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            __right_value0 = (void*)0;
            list$1sType$ph_push_back(param_types,(struct sType*)come_increment_ref_count(sType_clone(param_type2)));
            __right_value0 = (void*)0;
            list$1char$ph_push_back(param_names,(char*)come_increment_ref_count((char*)come_memdup(param_name, "05type.c", 154, "char*")));
            if(            *info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62            ) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                p_16=info->p;
                no_comma=info->no_comma;
                info->no_comma=1;
                __right_value0 = (void*)0;
                node=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
                info->no_comma=no_comma;
                p2=info->p;
                char buf[p2-p_16+1];
                memset(&buf, 0, sizeof(buf));
                memcpy(buf,p_16,p2-p_16);
                buf[p2-p_16]=0;
                __right_value0 = (void*)0;
                list$1char$ph_push_back(param_default_parametors,(char*)come_increment_ref_count(__builtin_string(buf)));
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            else {
                list$1char$ph_push_back(param_default_parametors,((void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==44            ) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                parsecmp("...",info)                ) {
                    info->p+=strlen("...");
                    skip_spaces_and_lf(info);
                    var_args=1;
                    (come_push_stackframe("05type.c", 194, 3),__exception_result_var_b4=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b4);
                    come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, param_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            else if(            *info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
                come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, param_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, param_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__68 = (struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_increment_ref_count(((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)(__right_value1=tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$_initialize((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_increment_ref_count((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_calloc_v2(1, sizeof(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$)*(1), "05type.c", 206, "struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$")),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),var_args))));
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, __result_obj__68, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__68;
}

static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$* tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$_initialize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$* self, struct list$1sType$ph* v1, struct list$1char$ph* v2, struct list$1char$ph* v3, int v4){
struct list$1sType$ph* __dec_obj34;
struct list$1char$ph* __dec_obj35;
struct list$1char$ph* __dec_obj36;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$* __result_obj__61;
    __dec_obj34=self->v1,
    self->v1=(struct list$1sType$ph*)come_increment_ref_count(v1);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj34,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj35=self->v2,
    self->v2=(struct list$1char$ph*)come_increment_ref_count(v2);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj36=self->v3,
    self->v3=(struct list$1char$ph*)come_increment_ref_count(v3);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->v4=v4;
    __result_obj__61 = (struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$*)come_increment_ref_count(self);
    come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, v3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$$p_finalize, __result_obj__61, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__61;
}

static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phint$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->v3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->v3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
struct list$1sType$ph* __result_obj__63;
void* __right_value0 = (void*)0;
struct list_item$1sType$ph* litem;
struct sType* __dec_obj37;
struct list_item$1sType$ph* litem_12;
struct sType* __dec_obj38;
struct list_item$1sType$ph* litem_13;
struct sType* __dec_obj39;
struct list$1sType$ph* __result_obj__64;
    if(    self==((void*)0)    ) {
        __result_obj__63 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__63;
    }
    if(    self->len==0    ) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1167, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj37=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj37,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_12=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1177, "struct list_item$1sType$ph*"))));
        litem_12->prev=self->head;
        litem_12->next=((void*)0);
        __dec_obj38=litem_12->item,
        litem_12->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_12;
        self->head->next=litem_12;
    }
    else {
        __right_value0 = (void*)0;
        litem_13=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1187, "struct list_item$1sType$ph*"))));
        litem_13->prev=self->tail;
        litem_13->next=((void*)0);
        __dec_obj39=litem_13->item,
        litem_13->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_13;
        self->tail=litem_13;
    }
    self->len++;
    __result_obj__64 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__64;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
struct list$1char$ph* __result_obj__65;
void* __right_value0 = (void*)0;
struct list_item$1char$ph* litem;
char* __dec_obj40;
struct list_item$1char$ph* litem_14;
char* __dec_obj41;
struct list_item$1char$ph* litem_15;
char* __dec_obj42;
struct list$1char$ph* __result_obj__66;
    if(    self==((void*)0)    ) {
        __result_obj__65 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__65;
    }
    if(    self->len==0    ) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1167, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj40=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_14=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1177, "struct list_item$1char$ph*"))));
        litem_14->prev=self->head;
        litem_14->next=((void*)0);
        __dec_obj41=litem_14->item,
        litem_14->item=(char*)come_increment_ref_count(item);
        __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_14;
        self->head->next=litem_14;
    }
    else {
        __right_value0 = (void*)0;
        litem_15=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1187, "struct list_item$1char$ph*"))));
        litem_15->prev=self->tail;
        litem_15->next=((void*)0);
        __dec_obj42=litem_15->item,
        litem_15->item=(char*)come_increment_ref_count(item);
        __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_15;
        self->tail=litem_15;
    }
    self->len++;
    __result_obj__66 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__66;
}

static struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$_initialize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* self, struct list$1sType$ph* v1, struct list$1char$ph* v2, struct list$1char$ph* v3, _Bool v4){
struct list$1sType$ph* __dec_obj43;
struct list$1char$ph* __dec_obj44;
struct list$1char$ph* __dec_obj45;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* __result_obj__67;
    __dec_obj43=self->v1,
    self->v1=(struct list$1sType$ph*)come_increment_ref_count(v1);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj43,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj44=self->v2,
    self->v2=(struct list$1char$ph*)come_increment_ref_count(v2);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj45=self->v3,
    self->v3=(struct list$1char$ph*)come_increment_ref_count(v3);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->v4=v4;
    __result_obj__67 = (struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_increment_ref_count(self);
    come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, v3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, __result_obj__67, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__67;
}

_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sType* left_type2;
struct sType* right_type2;
struct sType* left_no_solved_generics_type;
struct sType* right_no_solved_generics_type;
struct sClass* left_class;
struct sClass* right_class;
_Bool parent_class;
_Bool __result_obj__69;
_Bool __result_obj__70;
struct sClass* klass;
_Bool flag_;
_Bool __result_obj__71;
_Bool __result_obj__72;
_Bool __result_obj__73;
char* left_type3;
char* __dec_obj46;
struct sType* __dec_obj47;
struct sType* __dec_obj48;
_Bool __result_obj__74;
char* left_type3_17;
char* __dec_obj49;
struct sType* __dec_obj50;
struct sType* __dec_obj51;
_Bool __result_obj__75;
_Bool __result_obj__76;
_Bool __result_obj__77;
int i;
void* __right_value1 = (void*)0;
_Bool __result_obj__84;
_Bool __result_obj__85;
char* left_type3_20;
char* __dec_obj52;
struct sType* __dec_obj53;
struct sType* __dec_obj54;
_Bool __result_obj__86;
char* left_type3_21;
char* __dec_obj55;
struct sType* __dec_obj56;
struct sType* __dec_obj57;
_Bool __result_obj__87;
char* __dec_obj58;
struct sType* __dec_obj59;
struct sType* __dec_obj60;
_Bool __result_obj__88;
char* left_type3_22;
char* __dec_obj61;
struct sType* __dec_obj62;
struct sType* __dec_obj63;
_Bool __result_obj__89;
char* left_type3_23;
char* __dec_obj64;
struct sType* __dec_obj65;
struct sType* __dec_obj66;
_Bool __result_obj__90;
_Bool __result_obj__91;
_Bool __result_obj__92;
_Bool __result_obj__93;
_Bool __result_obj__94;
_Bool __result_obj__95;
_Bool __result_obj__96;
_Bool __result_obj__97;
_Bool __result_obj__98;
_Bool __result_obj__99;
_Bool __result_obj__100;
_Bool __result_obj__101;
_Bool __result_obj__102;
_Bool __result_obj__103;
_Bool __result_obj__104;
_Bool __result_obj__105;
_Bool __result_obj__106;
_Bool __result_obj__107;
char* tmp;
char* __dec_obj67;
struct sType* __dec_obj68;
struct sType* __dec_obj69;
_Bool __result_obj__108;
_Bool __result_obj__109;
_Bool __result_obj__110;
_Bool __result_obj__111;
char* tmp_24;
char* __dec_obj70;
struct sType* __dec_obj71;
_Bool __result_obj__112;
_Bool __result_obj__113;
int i_25;
_Bool __result_obj__114;
    if(    info->no_output_come_code    ) {
        return 1;
    }
    left_type2=(struct sType*)come_increment_ref_count(sType_clone(left_type));
    __right_value0 = (void*)0;
    right_type2=(struct sType*)come_increment_ref_count(sType_clone(right_type));
    left_no_solved_generics_type=((void*)0);
    if(    left_type2->mNoSolvedGenericsType    ) {
        left_no_solved_generics_type=left_type2->mNoSolvedGenericsType;
    }
    right_no_solved_generics_type=((void*)0);
    if(    right_type2->mNoSolvedGenericsType    ) {
        right_no_solved_generics_type=right_type2->mNoSolvedGenericsType;
    }
    left_class=left_type2->mClass;
    right_class=right_type2->mClass;
    parent_class=0;
    if(    string_operator_not_equals(left_class->mName,right_class->mName)    ) {
        while(        left_class&&right_class        ) {
            if(            string_operator_equals(left_class->mName,right_class->mName)            ) {
                parent_class=1;
            }
            if(            right_class->mParentClassName            ) {
                __right_value0 = (void*)0;
                right_class=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,right_class->mParentClassName)));
                come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
            else {
                right_class=((void*)0);
            }
        }
    }
    pointer_massive=0;
    if(    pointer_massive    ) {
        if(        left_type2->mPointerNum>0&&right_type->mPointerNum==0        ) {
            if(            string_operator_equals(left_type2->mClass->mName,"lambda")            ) {
            }
            else if(            list$1sNode$ph_length(right_type->mArrayNum)>0            ) {
            }
            else if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2->mClass->mName,left_type2->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2->mClass->mName,right_type2->mPointerNum);
                info->err_num++;
                __result_obj__69 = 0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__69;
            }
        }
        else if(        left_type2->mPointerNum==0&&right_type->mPointerNum>0        ) {
            if(            list$1sNode$ph_length(left_type2->mArrayNum)>0            ) {
            }
            else if(            string_operator_equals(left_type2->mClass->mName,"lambda")||string_operator_equals(right_type->mClass->mName,"void")            ) {
            }
            else if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2->mClass->mName,left_type2->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2->mClass->mName,right_type2->mPointerNum);
                info->err_num++;
                __result_obj__70 = 0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__70;
            }
        }
        else if(        left_type2->mPointerNum>0&&right_type->mPointerNum>0        ) {
            klass=right_type->mClass;
            flag_=0;
            while(            klass            ) {
                if(                string_operator_equals(klass->mName,left_type2->mClass->mName)                ) {
                    flag_=1;
                }
                if(                klass->mParentClassName                ) {
                    __right_value0 = (void*)0;
                    klass=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mParentClassName)));
                    come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
                else {
                    klass=((void*)0);
                }
            }
            if(            string_operator_equals(left_type2->mClass->mName,"void")            ) {
            }
            else if(            string_operator_equals(left_type2->mClass->mName,"lambda")            ) {
            }
            else if(            left_no_solved_generics_type&&right_no_solved_generics_type&&(list$1sType$ph_length(left_no_solved_generics_type->mGenericsTypes)>0||list$1sType$ph_length(right_no_solved_generics_type->mGenericsTypes)>0)            ) {
            }
            else if(            strlen(left_type2->mClass->mName)>=strlen("tuple")&&memcmp(left_type2->mClass->mName,"tuple",strlen("tuple"))==0&&(strlen(right_type->mClass->mName)>=strlen("tuple"))            ) {
            }
            else if(            string_operator_equals(right_type->mClass->mName,"void")            ) {
            }
            else if(            string_operator_not_equals(left_type2->mClass->mName,right_type->mClass->mName)&&!flag_            ) {
                if(                print_err_msg                ) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2->mClass->mName,left_type2->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2->mClass->mName,right_type2->mPointerNum);
                    info->err_num++;
                    __result_obj__71 = 0;
                    come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result_obj__71;
                }
            }
        }
    }
    if(    left_no_solved_generics_type&&right_no_solved_generics_type    ) {
        if(        strlen(left_type2->mClass->mName)>=strlen("tuple")&&memcmp(left_type2->mClass->mName,"tuple",strlen("tuple"))==0&&!(strlen(right_type->mClass->mName)>=strlen("tuple")&&memcmp(right_type->mClass->mName,"tuple",strlen("tuple"))==0)&&(string_operator_not_equals(right_type->mClass->mName,"void")&&right_type->mPointerNum>=1)        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is tuple, right type is none tuple\n");
                info->err_num++;
                __result_obj__72 = 0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__72;
            }
        }
        else if(        right_type->mPointerNum==0&&left_type2->mPointerNum>0        ) {
        }
        else if(        right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2->mClass->mNumber&&left_type2->mPointerNum==0&&left_type2->mArrayPointerNum==0        ) {
            if(            pointer_massive            ) {
                if(                print_err_msg                ) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("(3)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type->mGenericsTypes),left_no_solved_generics_type->mClass->mName,left_type2->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type->mGenericsTypes),right_no_solved_generics_type->mClass->mName,right_type2->mClass->mName);
                    info->err_num++;
                    __result_obj__73 = 0;
                    come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result_obj__73;
                }
            }
            else {
                __right_value0 = (void*)0;
                left_type3=(char*)come_increment_ref_count(make_type_name_string(left_type2,info,0,0,0));
                __right_value0 = (void*)0;
                __dec_obj46=come_value->c_value,
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("/*a*/(%s)%s",left_type3,come_value->c_value));
                __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0, (void*)0);
                __right_value0 = (void*)0;
                __dec_obj47=come_value->type,
                come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2));
                come_call_finalizer(sType_finalize, __dec_obj47,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_value->var=((void*)0);
                __right_value0 = (void*)0;
                __dec_obj48=right_type2,
                right_type2=(struct sType*)come_increment_ref_count(sType_clone(left_type2));
                come_call_finalizer(sType_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                (left_type3 = come_decrement_ref_count(left_type3, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        else if(        right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2->mClass->mFloat&&left_type2->mPointerNum==0        ) {
            if(            pointer_massive            ) {
                if(                print_err_msg                ) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("(2)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type->mGenericsTypes),left_no_solved_generics_type->mClass->mName,left_type2->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type->mGenericsTypes),right_no_solved_generics_type->mClass->mName,right_type2->mClass->mName);
                    info->err_num++;
                    __result_obj__74 = 0;
                    come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result_obj__74;
                }
            }
            else {
                __right_value0 = (void*)0;
                left_type3_17=(char*)come_increment_ref_count(make_type_name_string(left_type2,info,0,0,0));
                __right_value0 = (void*)0;
                __dec_obj49=come_value->c_value,
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type3_17,come_value->c_value));
                __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0, (void*)0);
                __right_value0 = (void*)0;
                __dec_obj50=come_value->type,
                come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2));
                come_call_finalizer(sType_finalize, __dec_obj50,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_value->var=((void*)0);
                __right_value0 = (void*)0;
                __dec_obj51=right_type2,
                right_type2=(struct sType*)come_increment_ref_count(sType_clone(left_type2));
                come_call_finalizer(sType_finalize, __dec_obj51,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                (left_type3_17 = come_decrement_ref_count(left_type3_17, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        else if(        string_operator_equals(left_type2->mClass->mName,right_type2->mClass->mName)&&left_type2->mPointerNum==right_type2->mPointerNum        ) {
        }
        else if(        string_operator_equals(left_type2->mClass->mName,"void")&&left_type2->mPointerNum>0&&string_operator_equals(left_type2->mClass->mName,right_type2->mClass->mName)&&(left_type2->mPointerNum!=right_type2->mPointerNum||left_type2->mHeap!=right_type2->mHeap)        ) {
        }
        else if(        string_operator_equals(left_type2->mClass->mName,right_type2->mClass->mName)&&(left_type2->mPointerNum!=right_type2->mPointerNum||left_type2->mHeap!=right_type2->mHeap)        ) {
            printf("%s %d %s\n",info->sname,info->sline,msg);
            printf("left type class_name %s\n",left_type2->mClass->mName);
            printf("right type class_name %s\n",right_type2->mClass->mName);
            printf("left type pointernum %d\n",left_type2->mPointerNum);
            printf("right type pointernum %d\n",right_type->mPointerNum);
            printf("left type heap %d\n",left_type2->mHeap);
            printf("right type heap %d\n",right_type->mHeap);
            printf("(1)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type->mGenericsTypes),left_no_solved_generics_type->mClass->mName,left_type2->mClass->mName);
            printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type->mGenericsTypes),right_no_solved_generics_type->mClass->mName,right_type2->mClass->mName);
            info->err_num++;
            __result_obj__75 = 0;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__75;
        }
        else if(        list$1sType$ph_length(left_no_solved_generics_type->mGenericsTypes)>0        ) {
            if(            (string_operator_equals(left_no_solved_generics_type->mClass->mName,"void")&&left_no_solved_generics_type->mPointerNum>0&&right_no_solved_generics_type->mPointerNum>0)||(string_operator_equals(right_no_solved_generics_type->mClass->mName,"void")&&right_no_solved_generics_type->mPointerNum>0&&left_no_solved_generics_type->mPointerNum>0)            ) {
            }
            else {
                if(                list$1sType$ph_length(left_no_solved_generics_type->mGenericsTypes)!=list$1sType$ph_length(right_no_solved_generics_type->mGenericsTypes)                ) {
                    if(                    print_err_msg                    ) {
                        printf("%s %d %s\n",info->sname,info->sline,msg);
                        printf("(4)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type->mGenericsTypes),left_no_solved_generics_type->mClass->mName,left_type2->mClass->mName);
                        printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type->mGenericsTypes),right_no_solved_generics_type->mClass->mName,right_type2->mClass->mName);
                        info->err_num++;
                        __result_obj__76 = 0;
                        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result_obj__76;
                    }
                    __result_obj__77 = 0;
                    come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result_obj__77;
                }
                for(                i=0                ;                i<list$1sType$ph_length(left_no_solved_generics_type->mGenericsTypes)                ;                i++                ){
                    __right_value0 = (void*)0;
                    check_assign_type(msg,((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(left_no_solved_generics_type->mGenericsTypes,i))),((struct sType*)(__right_value1=list$1sType$ph_operator_load_element(right_no_solved_generics_type->mGenericsTypes,i))),come_value,0,1,1,info);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
                check_assign_type(msg,left_no_solved_generics_type,right_no_solved_generics_type,come_value,0,1,1,info);
            }
        }
    }
    else if(    left_type2->mPointerNum>0&&right_type->mPointerNum==0    ) {
    }
    else if(    strlen(left_type2->mClass->mName)>=strlen("tuple")&&memcmp(left_type2->mClass->mName,"tuple",strlen("tuple"))==0&&!(strlen(right_type->mClass->mName)>=strlen("tuple")&&memcmp(right_type->mClass->mName,"tuple",strlen("tuple"))==0)&&(string_operator_not_equals(right_type->mClass->mName,"void")&&right_type->mPointerNum>=1)    ) {
        if(        print_err_msg        ) {
            printf("%s %d %s\n",info->sname,info->sline,msg);
            printf("left type is tuple, right type is none tuple\n");
            info->err_num++;
            __result_obj__84 = 0;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__84;
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2->mClass->mNumber&&left_type2->mPointerNum==0&&left_type2->mArrayPointerNum==0    ) {
        if(        pointer_massive        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("(5)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type->mGenericsTypes),left_no_solved_generics_type->mClass->mName,left_type2->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type->mGenericsTypes),right_no_solved_generics_type->mClass->mName,right_type2->mClass->mName);
                info->err_num++;
                __result_obj__85 = 0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__85;
            }
        }
        else {
            __right_value0 = (void*)0;
            left_type3_20=(char*)come_increment_ref_count(make_type_name_string(left_type2,info,0,0,0));
            __right_value0 = (void*)0;
            __dec_obj52=come_value->c_value,
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("/*b*/(%s)%s",left_type3_20,come_value->c_value));
            __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0, (void*)0);
            __right_value0 = (void*)0;
            __dec_obj53=come_value->type,
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2));
            come_call_finalizer(sType_finalize, __dec_obj53,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __right_value0 = (void*)0;
            __dec_obj54=right_type2,
            right_type2=(struct sType*)come_increment_ref_count(sType_clone(left_type2));
            come_call_finalizer(sType_finalize, __dec_obj54,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            (left_type3_20 = come_decrement_ref_count(left_type3_20, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2->mClass->mFloat&&left_type2->mPointerNum==0    ) {
        if(        pointer_massive        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("(6)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type->mGenericsTypes),left_no_solved_generics_type->mClass->mName,left_type2->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type->mGenericsTypes),right_no_solved_generics_type->mClass->mName,right_type2->mClass->mName);
                info->err_num++;
                __result_obj__86 = 0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__86;
            }
        }
        else {
            __right_value0 = (void*)0;
            left_type3_21=(char*)come_increment_ref_count(make_type_name_string(left_type2,info,0,0,0));
            __right_value0 = (void*)0;
            __dec_obj55=come_value->c_value,
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type3_21,come_value->c_value));
            __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0);
            __right_value0 = (void*)0;
            __dec_obj56=come_value->type,
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2));
            come_call_finalizer(sType_finalize, __dec_obj56,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __right_value0 = (void*)0;
            __dec_obj57=right_type2,
            right_type2=(struct sType*)come_increment_ref_count(sType_clone(left_type2));
            come_call_finalizer(sType_finalize, __dec_obj57,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            (left_type3_21 = come_decrement_ref_count(left_type3_21, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    else if(    left_type2->mHeap&&!right_type2->mHeap&&left_type2->mPointerNum>0&&right_type2->mPointerNum>0&&string_operator_not_equals(right_type2->mClass->mName,"void")&&!info->in_generics_fun&&!left_type2->mMultipleTypes&&!right_type->mMultipleTypes    ) {
        printf("%s %d %s\n",info->sname,info->sline,msg);
        printf("left type is %s pointer num %d heap %d\n",left_type2->mClass->mName,left_type2->mPointerNum,left_type2->mHeap);
        printf("right type is %s pointer num %d heap %d\n",right_type2->mClass->mName,right_type2->mPointerNum,right_type2->mHeap);
        info->err_num++;
        __result_obj__87 = 0;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__87;
    }
    else if(    parent_class&&left_type2->mPointerNum==1&&right_type->mPointerNum==1    ) {
        __right_value0 = (void*)0;
        __dec_obj58=come_value->c_value,
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("(struct %s*)%s",left_type2->mClass->mName,come_value->c_value));
        __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        __dec_obj59=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2));
        come_call_finalizer(sType_finalize, __dec_obj59,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value->var=((void*)0);
        __right_value0 = (void*)0;
        __dec_obj60=right_type2,
        right_type2=(struct sType*)come_increment_ref_count(sType_clone(left_type2));
        come_call_finalizer(sType_finalize, __dec_obj60,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2->mClass->mNumber&&left_type2->mPointerNum==0&&left_type2->mArrayPointerNum==0    ) {
        if(        pointer_massive        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2->mClass->mName,left_type2->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2->mClass->mName,right_type2->mPointerNum);
                info->err_num++;
                __result_obj__88 = 0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__88;
            }
        }
        else {
            __right_value0 = (void*)0;
            left_type3_22=(char*)come_increment_ref_count(make_type_name_string(left_type2,info,0,0,0));
            __right_value0 = (void*)0;
            __dec_obj61=come_value->c_value,
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("/*c*/(%s)%s",left_type3_22,come_value->c_value));
            __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0, (void*)0);
            __right_value0 = (void*)0;
            __dec_obj62=come_value->type,
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2));
            come_call_finalizer(sType_finalize, __dec_obj62,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __right_value0 = (void*)0;
            __dec_obj63=right_type2,
            right_type2=(struct sType*)come_increment_ref_count(sType_clone(left_type2));
            come_call_finalizer(sType_finalize, __dec_obj63,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            (left_type3_22 = come_decrement_ref_count(left_type3_22, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2->mClass->mFloat&&left_type2->mPointerNum==0    ) {
        if(        pointer_massive        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2->mClass->mName,left_type2->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2->mClass->mName,right_type2->mPointerNum);
                info->err_num++;
                __result_obj__89 = 0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__89;
            }
        }
        else {
            __right_value0 = (void*)0;
            left_type3_23=(char*)come_increment_ref_count(make_type_name_string(left_type2,info,0,0,0));
            __right_value0 = (void*)0;
            __dec_obj64=come_value->c_value,
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type3_23,come_value->c_value));
            __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0, (void*)0);
            __right_value0 = (void*)0;
            __dec_obj65=come_value->type,
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2));
            come_call_finalizer(sType_finalize, __dec_obj65,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __right_value0 = (void*)0;
            __dec_obj66=right_type2,
            right_type2=(struct sType*)come_increment_ref_count(sType_clone(left_type2));
            come_call_finalizer(sType_finalize, __dec_obj66,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            (left_type3_23 = come_decrement_ref_count(left_type3_23, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    else if(    string_operator_equals(left_type2->mClass->mName,right_type2->mClass->mName)&&left_type2->mPointerNum>0&&right_type2->mPointerNum>0&&!right_type2->mAllocaValue    ) {
        if(        left_type2->mHeap&&!right_type2->mHeap        ) {
            printf("%s %d %s\n",info->sname,info->sline,msg);
            printf("left type is %s pointer num %d heap %d\n",left_type2->mClass->mName,left_type2->mPointerNum,left_type2->mHeap);
            printf("right type is %s pointer num %d heap %d\n",right_type2->mClass->mName,right_type2->mPointerNum,right_type2->mHeap);
            info->err_num++;
            __result_obj__90 = 0;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__90;
        }
    }
    else if(    check_no_pointer    ) {
        if(        left_type2->mPointerNum>0        ) {
            if(            right_type2->mPointerNum>0            ) {
                if(                string_operator_equals(left_type2->mClass->mName,"void")||string_operator_equals(right_type2->mClass->mName,"void")                ) {
                }
                else if(                string_operator_equals(left_type2->mClass->mName,"va_list")||string_operator_equals(right_type2->mClass->mName,"va_list")                ) {
                }
                else if(                string_operator_not_equals(left_type2->mClass->mName,right_type2->mClass->mName)                ) {
                    if(                    print_err_msg                    ) {
                        printf("%s %d %s\n",info->sname,info->sline,msg);
                        printf("left type is %s pointer num %d\n",left_type2->mClass->mName,left_type2->mPointerNum);
                        printf("right type is %s pointer num %d\n",right_type2->mClass->mName,right_type2->mPointerNum);
                        info->err_num++;
                        __result_obj__91 = 0;
                        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result_obj__91;
                    }
                    __result_obj__92 = 0;
                    come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result_obj__92;
                }
            }
            else if(            right_type->mPointerNum==0            ) {
            }
            else {
                if(                print_err_msg                ) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2->mClass->mName,left_type2->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2->mClass->mName,right_type2->mPointerNum);
                    info->err_num++;
                    __result_obj__93 = 0;
                    come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result_obj__93;
                }
                __result_obj__94 = 0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__94;
            }
        }
        else if(        left_type2->mPointerNum==0&&right_type2->mPointerNum>0        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2->mClass->mName,left_type2->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2->mClass->mName,right_type2->mPointerNum);
                info->err_num++;
                __result_obj__95 = 0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__95;
            }
            __result_obj__96 = 0;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__96;
        }
        else if(        left_type2->mPointerNum>0&&right_type2->mPointerNum==0&&string_operator_equals(right_type2->mClass->mName,"lambda")&&string_operator_equals(left_type2->mClass->mName,"lambda")        ) {
        }
        else if(        string_operator_not_equals(left_type2->mClass->mName,right_type2->mClass->mName)        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2->mClass->mName,left_type2->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2->mClass->mName,right_type2->mPointerNum);
                info->err_num++;
                __result_obj__97 = 0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__97;
            }
            __result_obj__98 = 0;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__98;
        }
    }
    else if(    string_operator_equals(left_type2->mClass->mName,"char")&&left_type2->mPointerNum==1    ) {
        if(        string_operator_equals(right_type2->mClass->mName,"char")&&right_type2->mPointerNum==1        ) {
        }
        else if(        string_operator_equals(left_type2->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2->mClass->mName,"__builtin_va_list")        ) {
        }
        else if(        string_operator_equals(left_type2->mClass->mName,"va_list")||string_operator_equals(right_type2->mClass->mName,"va_list")        ) {
        }
        else if(        string_operator_equals(right_type2->mClass->mName,"lambda")        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2->mClass->mName,left_type2->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2->mClass->mName,right_type2->mPointerNum);
                info->err_num++;
                __result_obj__99 = 0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__99;
            }
            __result_obj__100 = 0;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__100;
        }
        else if(        string_operator_equals(right_type2->mClass->mName,"void")&&right_type2->mPointerNum>0        ) {
        }
        else if(        string_operator_equals(right_type2->mClass->mName,"void")        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2->mClass->mName,left_type2->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2->mClass->mName,right_type2->mPointerNum);
                info->err_num++;
                __result_obj__101 = 0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__101;
            }
            __result_obj__102 = 0;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__102;
        }
        else if(        string_operator_not_equals(left_type2->mClass->mName,right_type2->mClass->mName)&&!(left_type2->mPointerNum>0&&right_type2->mPointerNum==0)        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2->mClass->mName,left_type2->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2->mClass->mName,right_type2->mPointerNum);
                info->err_num++;
                __result_obj__103 = 0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__103;
            }
            __result_obj__104 = 0;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__104;
        }
    }
    else if(    string_operator_equals(left_type2->mClass->mName,"void")&&left_type2->mPointerNum==1    ) {
        if(        string_operator_equals(right_type2->mClass->mName,"void")&&right_type2->mPointerNum==1        ) {
        }
        else if(        string_operator_equals(left_type2->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2->mClass->mName,"__builtin_va_list")        ) {
        }
        else if(        string_operator_equals(left_type2->mClass->mName,"va_list")||string_operator_equals(right_type2->mClass->mName,"va_list")        ) {
        }
        else if(        string_operator_equals(right_type2->mClass->mName,"lambda")        ) {
        }
        else if(        string_operator_equals(right_type2->mClass->mName,"void")&&right_type2->mPointerNum>0        ) {
        }
        else if(        string_operator_equals(right_type2->mClass->mName,"void")        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2->mClass->mName,left_type2->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2->mClass->mName,right_type2->mPointerNum);
                info->err_num++;
                __result_obj__105 = 0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__105;
            }
            __result_obj__106 = 0;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__106;
        }
        else if(        right_type2->mPointerNum==0        ) {
            if(            pointer_massive            ) {
                if(                print_err_msg                ) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2->mClass->mName,left_type2->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2->mClass->mName,right_type2->mPointerNum);
                    info->err_num++;
                    __result_obj__107 = 0;
                    come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result_obj__107;
                }
            }
            else {
                __right_value0 = (void*)0;
                tmp=(char*)come_increment_ref_count(xsprintf("(void*)%s",come_value->c_value));
                __right_value0 = (void*)0;
                __dec_obj67=come_value->c_value,
                come_value->c_value=(char*)come_increment_ref_count((char*)come_memdup(tmp, "05type.c", 690, "char*"));
                __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0, (void*)0);
                __right_value0 = (void*)0;
                __dec_obj68=come_value->type,
                come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2));
                come_call_finalizer(sType_finalize, __dec_obj68,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_value->var=((void*)0);
                __right_value0 = (void*)0;
                __dec_obj69=right_type2,
                right_type2=(struct sType*)come_increment_ref_count(sType_clone(left_type2));
                come_call_finalizer(sType_finalize, __dec_obj69,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                (tmp = come_decrement_ref_count(tmp, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    else if(    left_type2->mPointerNum>0||(left_type2->mPointerNum==0&&left_type2->mClass->mStruct)    ) {
        if(        right_type2->mPointerNum>0||(right_type2->mPointerNum==0&&right_type2->mClass->mStruct)        ) {
            if(            string_operator_equals(left_type2->mClass->mName,"void")||string_operator_equals(right_type2->mClass->mName,"void")            ) {
            }
            else if(            string_operator_equals(left_type2->mClass->mName,"va_list")||string_operator_equals(right_type2->mClass->mName,"va_list")            ) {
            }
            else if(            string_operator_not_equals(left_type2->mClass->mName,right_type2->mClass->mName)            ) {
                if(                print_err_msg                ) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2->mClass->mName,left_type2->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2->mClass->mName,right_type2->mPointerNum);
                    info->err_num++;
                    __result_obj__108 = 0;
                    come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result_obj__108;
                }
                __result_obj__109 = 0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__109;
            }
            else if(            int_operator_not_equals(left_type2->mPointerNum,right_type2->mPointerNum)            ) {
                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                printf("left type is %s pointer num %d\n",left_type2->mClass->mName,left_type2->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2->mClass->mName,right_type2->mPointerNum);
            }
            else if(            list$1sNode$ph_length(right_type2->mArrayNum)>0            ) {
                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                printf("left type is %s pointer num %d array dimetion num %d\n",left_type2->mClass->mName,left_type2->mPointerNum,list$1sNode$ph_length(left_type2->mArrayNum));
                printf("right type is %s pointer num %d array dimetion num %d\n",right_type2->mClass->mName,right_type2->mPointerNum,list$1sNode$ph_length(right_type2->mArrayNum));
            }
        }
        else if(        string_operator_equals(left_type2->mClass->mName,"void")||string_operator_equals(right_type2->mClass->mName,"void")        ) {
        }
        else if(        string_operator_equals(left_type2->mClass->mName,"va_list")||string_operator_equals(right_type2->mClass->mName,"va_list")        ) {
        }
        else if(        string_operator_equals(left_type2->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2->mClass->mName,"__builtin_va_list")        ) {
        }
        else if(        string_operator_equals(left_type2->mClass->mName,"lambda")&&string_operator_equals(right_type2->mClass->mName,"lambda")        ) {
        }
        else if(        left_type2->mPointerNum>0&&right_type2->mPointerNum==0&&string_operator_equals(right_type2->mClass->mName,"lambda")&&string_operator_equals(left_type2->mClass->mName,"lambda")        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2->mClass->mName,left_type2->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2->mClass->mName,right_type2->mPointerNum);
                info->err_num++;
                __result_obj__110 = 0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__110;
            }
            __result_obj__111 = 0;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__111;
        }
        else if(        left_type2->mPointerNum>0&&!(string_operator_equals(right_type2->mClass->mName,"lambda")&&string_operator_equals(left_type2->mClass->mName,"lambda"))&&right_type2->mPointerNum==0        ) {
            __right_value0 = (void*)0;
            tmp_24=(char*)come_increment_ref_count(xsprintf("(void*)%s",come_value->c_value));
            __right_value0 = (void*)0;
            __dec_obj70=come_value->c_value,
            come_value->c_value=(char*)come_increment_ref_count((char*)come_memdup(tmp_24, "05type.c", 746, "char*"));
            __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0, (void*)0);
            __right_value0 = (void*)0;
            __dec_obj71=come_value->type,
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2));
            come_call_finalizer(sType_finalize, __dec_obj71,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            __result_obj__112 = 1;
            (tmp_24 = come_decrement_ref_count(tmp_24, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__112;
            (tmp_24 = come_decrement_ref_count(tmp_24, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(        list$1sType$ph_length(left_type2->mGenericsTypes)>0        ) {
            if(            list$1sType$ph_length(left_type2->mGenericsTypes)!=list$1sType$ph_length(right_type2->mGenericsTypes)            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2->mClass->mName,left_type2->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2->mClass->mName,right_type2->mPointerNum);
                info->err_num++;
                __result_obj__113 = 0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__113;
            }
            for(            i_25=0            ;            i_25<list$1sType$ph_length(left_type2->mGenericsTypes)            ;            i_25++            ){
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                check_assign_type(msg,((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(left_type2->mGenericsTypes,i_25))),((struct sType*)(__right_value1=list$1sType$ph_operator_load_element(right_type2->mGenericsTypes,i_25))),come_value,0,1,1,info);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
        }
    }
    __result_obj__114 = 1;
    come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__114;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct sType* default_value;
struct sType* __result_obj__78;
struct list_item$1sType$ph* it;
int i;
struct sType* __result_obj__79;
struct sType* default_value_18;
struct sType* __result_obj__80;
    if(    self==((void*)0)    ) {
        memset(&default_value,0,sizeof(struct sType*));
        __result_obj__78 = (struct sType*)come_increment_ref_count(default_value);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sType_finalize, __result_obj__78, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__78;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    position<0    ) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(    it!=((void*)0)    ) {
        if(        position==i        ) {
            __result_obj__79 = (struct sType*)come_increment_ref_count(it->item);
            come_call_finalizer(sType_finalize, __result_obj__79, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__79;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_18,0,sizeof(struct sType*));
    __result_obj__80 = (struct sType*)come_increment_ref_count(default_value_18);
    come_call_finalizer(sType_finalize, default_value_18, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__80, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__80;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct sType* default_value;
struct sType* __result_obj__81;
struct list_item$1sType$ph* it;
int i;
struct sType* __result_obj__82;
struct sType* default_value_19;
struct sType* __result_obj__83;
    if(    self==((void*)0)    ) {
        memset(&default_value,0,sizeof(struct sType*));
        __result_obj__81 = (struct sType*)come_increment_ref_count(default_value);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sType_finalize, __result_obj__81, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__81;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
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
    memset(&default_value_19,0,sizeof(struct sType*));
    __result_obj__83 = (struct sType*)come_increment_ref_count(default_value_19);
    come_call_finalizer(sType_finalize, default_value_19, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__83, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__83;
}

void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info){
}

struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* asm_fun_name;
char* attribute;
int nest;
int nest_26;
int nest_27;
int nest_28;
int nest_29;
char* __dec_obj72;
int len;
_Bool in_dquort;
int brace_num;
int brace_num_30;
void* __right_value2 = (void*)0;
struct tuple2$2char$phchar$ph* __result_obj__116;
    asm_fun_name=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05type.c", 775, "struct buffer*"))));
    __right_value0 = (void*)0;
    attribute=(char*)come_increment_ref_count(xsprintf(""));
    while(    1    ) {
        if(        parsecmp("__attribute_pure__",info)        ) {
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("__malloc_like",info)        ) {
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("__result_use_check",info)        ) {
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("__alloc_size2",info)        ) {
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                nest=0;
                while(                1                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest--;
                        if(                        nest==0                        ) {
                            break;
                        }
                    }
                    else if(                    *info->p==0                    ) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        parsecmp("__alloc_size",info)        ) {
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                nest_26=0;
                while(                1                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_26++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_26--;
                        if(                        nest_26==0                        ) {
                            break;
                        }
                    }
                    else if(                    *info->p==0                    ) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        parsecmp("__nonnull",info)        ) {
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                nest_27=0;
                while(                1                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_27++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_27--;
                        if(                        nest_27==0                        ) {
                            break;
                        }
                    }
                    else if(                    *info->p==0                    ) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        parsecmp("_Nonnull",info)        ) {
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                nest_28=0;
                while(                1                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_28++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_28--;
                        if(                        nest_28==0                        ) {
                            break;
                        }
                    }
                    else if(                    *info->p==0                    ) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        parsecmp("__alloc_align",info)        ) {
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                nest_29=0;
                while(                1                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_29++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_29--;
                        if(                        nest_29==0                        ) {
                            break;
                        }
                    }
                    else if(                    *info->p==0                    ) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        parsecmp("__attribute_malloc__",info)        ) {
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("__attr_dealloc_fclose",info)        ) {
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("__wur",info)        ) {
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("__pure2",info)        ) {
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("__pure",info)        ) {
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("__noreturn",info)        ) {
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("__attribute__",info)        ) {
            __right_value0 = (void*)0;
            __dec_obj72=attribute,
            attribute=(char*)come_increment_ref_count(parse_struct_attribute(info));
            __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(        parsecmp("__asm__",info)        ) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            (info->end-info->p)>=strlen("__ASMNAME")&&memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0            ) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len=0;
            if(            *info->p==40            ) {
                in_dquort=0;
                brace_num=0;
                while(                *info->p                ) {
                    if(                    *info->p==34                    ) {
                        info->p++;
                        in_dquort=!in_dquort;
                    }
                    else if(                    in_dquort                    ) {
                        buffer_append_char(asm_fun_name,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40                    ) {
                        info->p++;
                        brace_num++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        brace_num--;
                        if(                        brace_num==0                        ) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("__asm",info)        ) {
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                brace_num_30=0;
                while(                *info->p                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        brace_num_30++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        brace_num_30--;
                        if(                        brace_num_30==0                        ) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else {
            break;
        }
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__116 = (struct tuple2$2char$phchar$ph*)come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value2=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph*)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "05type.c", 1044, "struct tuple2$2char$phchar$ph")),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name)),(char*)come_increment_ref_count(attribute)))));
    come_call_finalizer(buffer_finalize, asm_fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __result_obj__116, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__116;
}

static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_initialize(struct tuple2$2char$phchar$ph* self, char* v1, char* v2){
char* __dec_obj73;
char* __dec_obj74;
struct tuple2$2char$phchar$ph* __result_obj__115;
    __dec_obj73=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj74=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__115 = (struct tuple2$2char$phchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0));
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __result_obj__115, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__115;
}

static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

void parse_struct_attribute_skip_paren(struct sInfo* info){
int nest;
    skip_spaces_and_lf(info);
    if(    *info->p==40    ) {
        nest=0;
        while(        1        ) {
            if(            *info->p==40            ) {
                info->p++;
                skip_spaces_and_lf(info);
                nest++;
            }
            else if(            *info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
                nest--;
                if(                nest==0                ) {
                    break;
                }
            }
            else if(            *info->p==0            ) {
                break;
            }
            else {
                info->p++;
            }
        }
    }
    skip_spaces_and_lf(info);
}

char* parse_struct_attribute(struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* result;
char* p;
int sline;
char* buf;
char* head;
char* tail;
char* __result_obj__117;
    parse_sharp_v5(info);
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05type.c", 1081, "struct buffer*"))));
    while(    1    ) {
        if(        xisalnum(*info->p)||*info->p==95        ) {
        }
        else {
            break;
        }
        p=info->p;
        sline=info->sline;
        __right_value0 = (void*)0;
        buf=(char*)come_increment_ref_count(parse_word(info));
        info->p=p;
        info->sline=sline;
        if(        string_operator_equals(buf,"__attribute__")        ) {
            head=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            skip_paren(info);
            tail=info->p;
            buffer_append(result,head,tail-head);
        }
        else {
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
            break;
        }
        (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    parse_sharp_v5(info);
    __right_value0 = (void*)0;
    __result_obj__117 = (char*)come_increment_ref_count(((char*)(__right_value0=buffer_to_string(result))));
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__117 = come_decrement_ref_count(__result_obj__117, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__117;
}

struct tuple2$2sType$phchar$ph* parse_variable_name_on_multiple_declare(struct sType* base_type_name, _Bool first, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sType* result_type;
char* var_name;
char* p;
int sline;
char* word;
_Bool between_brace;
char* p_31;
int sline_32;
char* word_33;
_Bool lambda_;
char* p_34;
int sline_35;
char* word_36;
int __exception_result_var_b5;
int __exception_result_var_b6;
char* __dec_obj75;
void* __right_value1 = (void*)0;
void* __right_value2 = (void*)0;
struct sType* __exception_result_var_b7;
struct sType* __exception_result_var_b8;
struct sType* __exception_result_var_b9;
struct sType* result_type2;
struct sNode* node;
int __exception_result_var_b10;
int __exception_result_var_b11;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* multiple_assign_var2
;struct list$1sType$ph* param_types=0;
struct list$1char$ph* param_names=0;
struct list$1char$ph* param_default_parametors=0;
_Bool var_args=0;
struct sType* __dec_obj76;
struct list$1sType$ph* __dec_obj77;
struct list$1char$ph* __dec_obj78;
struct sType* __dec_obj79;
char* __dec_obj80;
char* __dec_obj81;
_Bool no_comma;
struct sNode* node_37;
struct sNode* __dec_obj82;
char* p_38;
int sline_39;
char* word_40;
struct sNode* node_41;
int __exception_result_var_b12;
char* attribute;
char* __dec_obj86;
char* __dec_obj87;
struct tuple2$2sType$phchar$ph* __result_obj__121;
    result_type=(struct sType*)come_increment_ref_count(sType_clone(base_type_name));
    if(    !first    ) {
        if(        result_type->mTypedefOriginalType        ) {
            result_type->mPointerNum=result_type->mTypedefOriginalType->mPointerNum;
        }
    }
    var_name=((void*)0);
    {
        p=info->p;
        sline=info->sline;
        if(        isalpha(*info->p)||*info->p==95        ) {
            __right_value0 = (void*)0;
            word=(char*)come_increment_ref_count(parse_word(info));
            if(            string_operator_equals(word,"const")||string_operator_equals(word,"__restrict")||string_operator_equals(word,"restrict")||string_operator_equals(word,"__user")||string_operator_equals(word,"volatile")||string_operator_equals(word,"_Nonnull")||string_operator_equals(word,"_Nullable")||string_operator_equals(word,"_Null_unspecified")||string_operator_equals(word,"__user")||string_operator_equals(word,"_Addr")            ) {
            }
            else {
                info->p=p;
                info->sline=sline;
            }
            (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            info->p=p;
            info->sline=sline;
        }
    }
    between_brace=0;
    {
        p_31=info->p;
        sline_32=info->sline;
        if(        *info->p==40        ) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            isalpha(*info->p)||*info->p==95            ) {
                __right_value0 = (void*)0;
                word_33=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_33,info)                ) {
                }
                else if(                *info->p==41                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p!=40                    ) {
                        between_brace=1;
                    }
                }
                (word_33 = come_decrement_ref_count(word_33, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        info->p=p_31;
        info->sline=sline_32;
    }
    lambda_=0;
    {
        p_34=info->p;
        sline_35=info->sline;
        if(        *info->p==40        ) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            *info->p==42            ) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                isalpha(*info->p)||*info->p==95                ) {
                    __right_value0 = (void*)0;
                    word_36=(char*)come_increment_ref_count(parse_word(info));
                    if(                    is_type_name(word_36,info)                    ) {
                    }
                    else if(                    *info->p==91                    ) {
                        lambda_=1;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        *info->p==40                        ) {
                            lambda_=1;
                        }
                    }
                    (word_36 = come_decrement_ref_count(word_36, (void*)0, (void*)0, 0, 0, (void*)0));
                }
            }
        }
        info->p=p_34;
        info->sline=sline_35;
    }
    parse_sharp_v5(info);
    while(    *info->p==42    ) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        result_type->mPointerNum++;
    }
    parse_sharp_v5(info);
    if(    between_brace&&*info->p==40    ) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(    lambda_    ) {
        (come_push_stackframe("05type.c", 1252, 4),__exception_result_var_b5=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b5);
        (come_push_stackframe("05type.c", 1253, 5),__exception_result_var_b6=expected_next_character(42,info), come_pop_stackframe(), __exception_result_var_b6);
        __right_value0 = (void*)0;
        __dec_obj75=var_name,
        var_name=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        result_type2=(struct sType*)come_increment_ref_count((come_push_stackframe("05type.c", 1257, 8),__exception_result_var_b9=(come_push_stackframe("05type.c", 1257, 6),__exception_result_var_b7=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 1257, "struct sType*")),(char*)come_increment_ref_count(xsprintf("lambda")),0,info,0), come_pop_stackframe(), __exception_result_var_b7), come_pop_stackframe(), __exception_result_var_b9));
        if(        *info->p==91        ) {
            info->p++;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            node=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
            list$1sNode$ph_add(result_type2->mArrayNum,(struct sNode*)come_increment_ref_count(node));
            (come_push_stackframe("05type.c", 1267, 9),__exception_result_var_b10=expected_next_character(93,info), come_pop_stackframe(), __exception_result_var_b10);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        (come_push_stackframe("05type.c", 1270, 10),__exception_result_var_b11=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b11);
        __right_value0 = (void*)0;
        multiple_assign_var2=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)(__right_value0=parse_params(info,0)));
        param_types=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var2->v1);
        param_names=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var2->v2);
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var2->v3);
        var_args=multiple_assign_var2->v4;
        come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __right_value0 = (void*)0;
        __dec_obj76=result_type2->mResultType,
        result_type2->mResultType=(struct sType*)come_increment_ref_count(sType_clone(result_type));
        come_call_finalizer(sType_finalize, __dec_obj76,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj77=result_type2->mParamTypes,
        result_type2->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj77,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj78=result_type2->mParamNames,
        result_type2->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj78,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        result_type2->mVarArgs=var_args;
        __dec_obj79=result_type,
        result_type=(struct sType*)come_increment_ref_count(result_type2);
        come_call_finalizer(sType_finalize, __dec_obj79,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    xisalnum(*info->p)||*info->p==95    ) {
        __right_value0 = (void*)0;
        __dec_obj80=var_name,
        var_name=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else {
        static int num_anonymous_var_name=0;
        num_anonymous_var_name++;
        __right_value0 = (void*)0;
        __dec_obj81=var_name,
        var_name=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name));
        __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    between_brace&&*info->p==41    ) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(    *info->p==58    ) {
        info->p++;
        skip_spaces_and_lf(info);
        no_comma=info->no_comma;
        info->no_comma=1;
        __right_value0 = (void*)0;
        node_37=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
        info->no_comma=no_comma;
        __dec_obj82=result_type->mSizeNum,
        result_type->mSizeNum=(struct sNode*)come_increment_ref_count(node_37);
        (__dec_obj82 ? __dec_obj82 = come_decrement_ref_count(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0,0, (void*)0) :0);
        ((node_37) ? node_37 = come_decrement_ref_count(node_37, ((struct sNode*)node_37)->finalize, ((struct sNode*)node_37)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    while(    *info->p==91    ) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        {
            p_38=info->p;
            sline_39=info->sline;
            if(            isalpha(*info->p)||*info->p==95            ) {
                __right_value0 = (void*)0;
                word_40=(char*)come_increment_ref_count(parse_word(info));
                if(                string_operator_equals(word_40,"const")||string_operator_equals(word_40,"__restrict")||string_operator_equals(word_40,"restrict")||string_operator_equals(word_40,"__user")||string_operator_equals(word_40,"volatile")||string_operator_equals(word_40,"_Nonnull")||string_operator_equals(word_40,"_Nullable")||string_operator_equals(word_40,"_Null_unspecified")||string_operator_equals(word_40,"__user")||string_operator_equals(word_40,"_Addr")                ) {
                }
                else {
                    info->p=p_38;
                    info->sline=sline_39;
                }
                (word_40 = come_decrement_ref_count(word_40, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            else {
                info->p=p_38;
                info->sline=sline_39;
            }
        }
        if(        *info->p==93        ) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type->mArrayPointerType=1;
            break;
        }
        parse_sharp_v5(info);
        __right_value0 = (void*)0;
        node_41=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
        list$1sNode$ph_push_back(result_type->mArrayNum,(struct sNode*)come_increment_ref_count(node_41));
        parse_sharp_v5(info);
        (come_push_stackframe("05type.c", 1346, 11),__exception_result_var_b12=expected_next_character(93,info), come_pop_stackframe(), __exception_result_var_b12);
        ((node_41) ? node_41 = come_decrement_ref_count(node_41, ((struct sNode*)node_41)->finalize, ((struct sNode*)node_41)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    __right_value0 = (void*)0;
    attribute=(char*)come_increment_ref_count(parse_struct_attribute(info));
    if(    string_operator_not_equals(attribute,"")    ) {
        if(        result_type->mAttribute        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj86=result_type->mAttribute,
            result_type->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value1=string_operator_add(result_type->mAttribute," "))),attribute));
            __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else {
            __dec_obj87=result_type->mAttribute,
            result_type->mAttribute=(char*)come_increment_ref_count(attribute);
            __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0, (void*)0);
        }
    }
    __right_value0 = (void*)0;
    ((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__121 = (struct tuple2$2sType$phchar$ph*)come_increment_ref_count(((struct tuple2$2sType$phchar$ph*)(__right_value1=tuple2$2sType$phchar$ph_initialize((struct tuple2$2sType$phchar$ph*)come_increment_ref_count((struct tuple2$2sType$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sType$phchar$ph)*(1), "05type.c", 1361, "struct tuple2$2sType$phchar$ph")),(struct sType*)come_increment_ref_count(result_type),(char*)come_increment_ref_count(var_name)))));
    come_call_finalizer(sType_finalize, base_type_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __result_obj__121, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__121;
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item){
struct list$1sNode$ph* __result_obj__118;
void* __right_value0 = (void*)0;
struct list_item$1sNode$ph* litem;
struct sNode* __dec_obj83;
struct list_item$1sNode$ph* litem_42;
struct sNode* __dec_obj84;
struct list_item$1sNode$ph* litem_43;
struct sNode* __dec_obj85;
struct list$1sNode$ph* __result_obj__119;
    if(    self==((void*)0)    ) {
        __result_obj__118 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__118;
    }
    if(    self->len==0    ) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1167, "struct list_item$1sNode$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj83=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj83 ? __dec_obj83 = come_decrement_ref_count(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_42=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1177, "struct list_item$1sNode$ph*"))));
        litem_42->prev=self->head;
        litem_42->next=((void*)0);
        __dec_obj84=litem_42->item,
        litem_42->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj84 ? __dec_obj84 = come_decrement_ref_count(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem_42;
        self->head->next=litem_42;
    }
    else {
        __right_value0 = (void*)0;
        litem_43=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1187, "struct list_item$1sNode$ph*"))));
        litem_43->prev=self->tail;
        litem_43->next=((void*)0);
        __dec_obj85=litem_43->item,
        litem_43->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj85 ? __dec_obj85 = come_decrement_ref_count(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail->next=litem_43;
        self->tail=litem_43;
    }
    self->len++;
    __result_obj__119 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    return __result_obj__119;
}

static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_initialize(struct tuple2$2sType$phchar$ph* self, struct sType* v1, char* v2){
struct sType* __dec_obj88;
char* __dec_obj89;
struct tuple2$2sType$phchar$ph* __result_obj__120;
    __dec_obj88=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer(sType_finalize, __dec_obj88,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj89=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__120 = (struct tuple2$2sType$phchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __result_obj__120, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__120;
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

void skip_pointer_attribute(struct sInfo* info){
char* p;
int sline;
void* __right_value0 = (void*)0;
char* word;
int nest;
    p=info->p;
    sline=info->sline;
    if(    isalpha(*info->p)||*info->p==95    ) {
        word=(char*)come_increment_ref_count(parse_word(info));
        if(        (string_operator_equals(word,"__attribute")||string_operator_equals(word,"__attribute__"))&&*info->p==40        ) {
            nest=0;
            while(            1            ) {
                if(                *info->p==40                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest++;
                }
                else if(                *info->p==41                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest--;
                    if(                    nest==0                    ) {
                        break;
                    }
                }
                else if(                *info->p==0                ) {
                    break;
                }
                else {
                    info->p++;
                }
            }
        }
        else if(        string_operator_equals(word,"const")||string_operator_equals(word,"__restrict")||string_operator_equals(word,"restrict")||string_operator_equals(word,"__user")||string_operator_equals(word,"volatile")||string_operator_equals(word,"_Nonnull")||string_operator_equals(word,"_Nullable")||string_operator_equals(word,"__nonnull")||string_operator_equals(word,"_Null_unspecified")||string_operator_equals(word,"__user")||string_operator_equals(word,"_Addr")||string_operator_equals(word,"__noreturn")||string_operator_equals(word,"_noreturn")||string_operator_equals(word,"_Noreturn")        ) {
        }
        else {
            info->p=p;
            info->sline=sline;
        }
        (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else {
        info->p=p;
        info->sline=sline;
    }
}

struct tuple3$3sType$phchar$ph_Bool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info){
_Bool no_output_come_code;
void* __right_value0 = (void*)0;
struct tuple3$3sType$phchar$ph_Bool$* __exception_result_var_b13;
struct tuple3$3sType$phchar$ph_Bool$* __exception_result_var_b14;
struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var3
;struct sType* type=0;
char* name=0;
_Bool err=0;
void* __right_value1 = (void*)0;
struct tuple3$3sType$phchar$ph_Bool$* __result_obj__123;
    no_output_come_code=info->no_output_come_code;
    info->no_output_come_code=1;
    multiple_assign_var3=(come_push_stackframe("05type.c", 1414, 13),__exception_result_var_b14=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,parse_variable_name,1,0))), come_pop_stackframe(), __exception_result_var_b14);
    type=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
    name=(char*)come_increment_ref_count(multiple_assign_var3->v2);
    err=multiple_assign_var3->v3;
    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    info->no_output_come_code=no_output_come_code;
    __right_value0 = (void*)0;
    __result_obj__123 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "05type.c", 1417, "struct tuple3$3sType$phchar$ph_Bool$")),(struct sType*)come_increment_ref_count(type),(char*)come_increment_ref_count(name),err))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__123, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__123;
}

static struct tuple3$3sType$phchar$ph_Bool$* tuple3$3sType$phchar$ph_Bool$_initialize(struct tuple3$3sType$phchar$ph_Bool$* self, struct sType* v1, char* v2, _Bool v3){
struct sType* __dec_obj90;
char* __dec_obj91;
struct tuple3$3sType$phchar$ph_Bool$* __result_obj__122;
    __dec_obj90=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer(sType_finalize, __dec_obj90,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj91=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0, (void*)0);
    self->v3=v3;
    __result_obj__122 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(self);
    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__122, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__122;
}

struct tuple3$3sType$phchar$ph_Bool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor){
char* head;
int head_sline;
void* __right_value0 = (void*)0;
char* type_name;
_Bool record_;
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
struct sNode* alignas_;
char* union_attribute;
_Bool anonymous_type;
_Bool anonymous_name;
_Bool atomic_;
_Bool thread_local;
char* __dec_obj92;
int __exception_result_var_b15;
char* __dec_obj93;
char* __dec_obj94;
int brace_num;
char* __dec_obj95;
char* __dec_obj96;
char* __dec_obj97;
char* __dec_obj98;
char* __dec_obj99;
int __exception_result_var_b16;
struct sNode* exp;
struct sNode* __dec_obj100;
int __exception_result_var_b17;
char* __dec_obj101;
char* __dec_obj102;
char* __dec_obj103;
char* __dec_obj104;
char* __dec_obj105;
char* __dec_obj106;
char* __dec_obj107;
char* __dec_obj108;
char* __dec_obj109;
char* __dec_obj110;
char* p;
int sline;
char* __dec_obj111;
char* __dec_obj112;
char* __dec_obj113;
char* p_44;
int sline_45;
void* __right_value1 = (void*)0;
struct tuple3$3sType$phchar$ph_Bool$* __result_obj__125;
char* p_46;
int sline_47;
struct tuple3$3sType$phchar$ph_Bool$* __result_obj__126;
struct sNode* node;
_Bool Value;
struct tuple3$3sType$phchar$ph_Bool$* __result_obj__127;
char* __dec_obj116;
char* p_48;
int sline_49;
char* __dec_obj117;
char* __dec_obj118;
char* __dec_obj119;
char* p_50;
int sline_51;
struct tuple3$3sType$phchar$ph_Bool$* __result_obj__128;
struct tuple3$3sType$phchar$ph_Bool$* __exception_result_var_b18;
struct tuple3$3sType$phchar$ph_Bool$* __exception_result_var_b19;
struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var4
;struct sType* type=0;
char* name=0;
_Bool err=0;
char* p_52;
int sline_53;
struct tuple3$3sType$phchar$ph_Bool$* __result_obj__129;
char* __dec_obj120;
char* __dec_obj121;
struct tuple3$3sType$phchar$ph_Bool$* __exception_result_var_b20;
struct tuple3$3sType$phchar$ph_Bool$* __exception_result_var_b21;
struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var5
;struct sType* type_54=0;
char* name_55=0;
_Bool err_56=0;
char* p_57;
int sline_58;
struct tuple3$3sType$phchar$ph_Bool$* __result_obj__130;
char* p_59;
int sline_60;
char* __dec_obj122;
char* p2;
int sline2;
char* __dec_obj123;
char* __dec_obj124;
char* __dec_obj125;
char* __dec_obj126;
char* __dec_obj127;
char* __dec_obj128;
char* __dec_obj129;
char* p_61;
int sline_62;
char* __dec_obj130;
char* __dec_obj131;
char* __dec_obj132;
char* p_63;
int sline_64;
char* __dec_obj133;
char* p_65;
int sline_66;
char* __dec_obj134;
char* __dec_obj135;
char* __dec_obj136;
char* p_67;
int sline_68;
char* __dec_obj137;
char* __dec_obj138;
char* __dec_obj139;
char* __dec_obj140;
char* __dec_obj141;
char* p_69;
int sline_70;
char* __dec_obj142;
char* __dec_obj143;
char* __dec_obj144;
char* __dec_obj145;
char* __dec_obj146;
char* __dec_obj147;
int __exception_result_var_b22;
char* __dec_obj148;
char* p_71;
int sline_72;
char* __dec_obj149;
char* __dec_obj150;
char* __dec_obj151;
_Bool no_comma;
struct sNode* exp_73;
int __exception_result_var_b23;
void* __right_value2 = (void*)0;
struct sType* __exception_result_var_b24;
struct sType* __exception_result_var_b25;
struct sType* __exception_result_var_b26;
struct sType* type_74;
struct sNode* __dec_obj152;
char* var_name;
char* attribute;
char* __dec_obj153;
char* __dec_obj154;
char* __dec_obj155;
_Bool no_comma_75;
struct sNode* node_76;
struct sNode* __dec_obj156;
char* attribute2;
char* __dec_obj157;
char* __dec_obj158;
struct tuple3$3sType$phchar$ph_Bool$* __result_obj__131;
char* attribute_77;
int pointer_num;
_Bool heap;
_Bool refference;
_Bool no_refference;
_Bool channel;
_Bool deffer_;
_Bool any_class;
_Bool vtable;
char* tuple_name;
char* __dec_obj159;
int __exception_result_var_b27;
_Bool lambda_flag;
char* pX;
int slineX;
struct sType* type_78;
char* var_name_79;
_Bool function_pointer_flag;
_Bool pointer_to_array_flag;
char* p_80;
int sline_81;
char* word;
char* __dec_obj160;
_Bool no_output_come_code;
struct sNode* exp_82;
char* word_83;
_Bool var_name_between_brace;
char* p_84;
int sline_85;
char* word_86;
_Bool anonymous;
char* __dec_obj161;
struct sNode* node_87;
_Bool Value_88;
struct tuple3$3sType$phchar$ph_Bool$* __result_obj__132;
int pointer_num_89;
struct sType* __dec_obj162;
struct sType* __exception_result_var_b28;
struct sType* __exception_result_var_b29;
struct sType* __dec_obj163;
struct sType* __exception_result_var_b30;
char* __dec_obj164;
char* __dec_obj165;
char* __dec_obj166;
struct sNode* node_90;
_Bool Value_91;
struct tuple3$3sType$phchar$ph_Bool$* __result_obj__133;
struct sType* __dec_obj167;
struct sType* __exception_result_var_b31;
struct sType* __exception_result_var_b32;
struct sType* __dec_obj168;
struct sType* __exception_result_var_b33;
_Bool anonymous_92;
char* __dec_obj169;
struct sNode* node_93;
_Bool Value_94;
struct tuple3$3sType$phchar$ph_Bool$* __result_obj__134;
int pointer_num_95;
struct sType* __dec_obj170;
struct sType* __exception_result_var_b34;
struct sType* __exception_result_var_b35;
struct sType* __dec_obj171;
struct sType* __exception_result_var_b36;
char* __dec_obj172;
struct tuple3$3sType$phchar$ph_Bool$* __result_obj__135;
char* attribute_96;
char* __dec_obj173;
char* __dec_obj174;
char* __dec_obj175;
char* __dec_obj176;
char* __dec_obj177;
_Bool no_comma_99;
struct sNode* node_100;
struct sNode* __dec_obj178;
char* attribute2_101;
char* __dec_obj179;
char* __dec_obj180;
struct sType* result_type;
_Bool _conditional_value_X0;
struct sType* __dec_obj181;
int i;
_Bool _conditional_value_X1;
struct sType* __exception_result_var_b37;
struct sType* __exception_result_var_b38;
struct sType* __dec_obj182;
struct sType* __exception_result_var_b39;
int i_104;
_Bool _conditional_value_X2;
struct sType* __exception_result_var_b40;
struct sType* __exception_result_var_b41;
struct sType* __dec_obj183;
struct sType* __exception_result_var_b42;
struct sType* __dec_obj184;
struct sType* __exception_result_var_b43;
struct sType* __exception_result_var_b44;
struct sType* __dec_obj185;
struct sType* __exception_result_var_b45;
struct sNode* __dec_obj186;
char* __dec_obj187;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* multiple_assign_var6
;struct list$1sType$ph* param_types=0;
struct list$1char$ph* param_names=0;
struct list$1char$ph* param_default_parametors=0;
_Bool var_args=0;
struct sType* __exception_result_var_b46;
struct sType* __exception_result_var_b47;
struct sType* __dec_obj188;
struct sType* __exception_result_var_b48;
struct sType* __dec_obj189;
struct list$1sType$ph* __dec_obj190;
struct list$1char$ph* __dec_obj191;
int __exception_result_var_b49;
_Bool pointer_paren;
int paren_num;
int array_pointer_num;
struct sType* __dec_obj192;
struct sType* __exception_result_var_b50;
struct sType* __exception_result_var_b51;
struct sType* __dec_obj193;
struct sType* __exception_result_var_b52;
struct sNode* __dec_obj194;
char* __dec_obj195;
char* __dec_obj196;
char* __dec_obj197;
struct list$1sNode$ph* array;
struct sNode* node_105;
struct list$1sNode$ph* __dec_obj198;
struct __current_stack1__ __current_stack1__;
struct sNode* node_106;
int function_pointer_num;
struct sType* result_type_107;
_Bool _conditional_value_X3;
struct sType* __dec_obj199;
int i_108;
_Bool _conditional_value_X4;
struct sType* __exception_result_var_b53;
struct sType* __exception_result_var_b54;
struct sType* __dec_obj200;
struct sType* __exception_result_var_b55;
int i_109;
_Bool _conditional_value_X5;
struct sType* __exception_result_var_b56;
struct sType* __exception_result_var_b57;
struct sType* __dec_obj201;
struct sType* __exception_result_var_b58;
struct sType* __dec_obj202;
struct sType* __exception_result_var_b59;
struct sType* __exception_result_var_b60;
struct sType* __dec_obj203;
struct sType* __exception_result_var_b61;
struct sNode* __dec_obj204;
int paren_flag;
int array_pointer;
char* __dec_obj205;
struct tuple3$3sType$phchar$ph_Bool$* __result_obj__144;
char* __dec_obj206;
struct sType* __exception_result_var_b62;
struct sType* __exception_result_var_b63;
struct sType* __dec_obj207;
struct sType* __exception_result_var_b64;
struct sNode* node_111;
struct sNode* node_112;
int __exception_result_var_b65;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* multiple_assign_var7
;struct list$1sType$ph* param_types_113=0;
struct list$1char$ph* param_names_114=0;
struct list$1char$ph* param_default_parametors_115=0;
_Bool var_args_116=0;
struct sType* __dec_obj208;
struct list$1sType$ph* __dec_obj209;
struct list$1char$ph* __dec_obj210;
_Bool _conditional_value_X6;
struct sType* __dec_obj211;
struct buffer* t;
struct sType* __dec_obj212;
struct sNode* __dec_obj213;
char* __dec_obj214;
int i_117;
_Bool _conditional_value_X7;
struct sType* __exception_result_var_b66;
struct sType* __exception_result_var_b67;
struct sType* __dec_obj215;
struct sType* __exception_result_var_b68;
struct sNode* __dec_obj216;
char* __dec_obj217;
int i_118;
_Bool _conditional_value_X8;
struct sType* __exception_result_var_b69;
struct sType* __exception_result_var_b70;
struct sType* __dec_obj218;
struct sType* __exception_result_var_b71;
struct sNode* __dec_obj219;
char* __dec_obj220;
_Bool _conditional_value_X9;
struct tuple3$3sType$phchar$ph_Bool$* __result_obj__155;
struct sType* __dec_obj221;
struct sType* __exception_result_var_b72;
struct sType* __exception_result_var_b73;
struct sType* __dec_obj222;
struct sType* __exception_result_var_b74;
struct tuple3$3sType$phchar$ph_Bool$* __exception_result_var_b75;
struct tuple3$3sType$phchar$ph_Bool$* __exception_result_var_b76;
struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var8
;struct sType* generics_type=0;
char* var_name_119=0;
_Bool err_120=0;
struct tuple3$3sType$phchar$ph_Bool$* __result_obj__156;
struct tuple3$3sType$phchar$ph_Bool$* __result_obj__157;
struct sType* __dec_obj223;
char* new_name;
struct sNode* __dec_obj224;
char* __dec_obj225;
char* __dec_obj226;
struct sClass* klass;
void* __right_value3 = (void*)0;
struct sClass* klass_130;
struct sType* __dec_obj227;
struct sType* __exception_result_var_b77;
struct sType* __exception_result_var_b78;
struct sType* __dec_obj228;
struct sType* __exception_result_var_b79;
struct sNode* __dec_obj229;
char* __dec_obj230;
struct list$1sType$ph* types;
struct tuple3$3sType$phchar$ph_Bool$* __exception_result_var_b80;
struct tuple3$3sType$phchar$ph_Bool$* __exception_result_var_b81;
struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var9
;struct sType* type2=0;
char* name_131=0;
_Bool err_132=0;
struct tuple3$3sType$phchar$ph_Bool$* __result_obj__179;
int num_tuples;
struct sType* __exception_result_var_b82;
struct sType* __exception_result_var_b83;
struct sType* __dec_obj231;
struct sType* __exception_result_var_b84;
struct list$1sType$ph* o2_saved;
struct sType* it;
struct sType* __dec_obj232;
char* new_name_133;
char* __dec_obj233;
char* attribute_134;
char* __dec_obj234;
char* __dec_obj235;
char* __dec_obj236;
char* __dec_obj237;
char* __dec_obj238;
_Bool no_comma_137;
struct sNode* node_138;
struct sNode* __dec_obj239;
char* attribute2_139;
char* __dec_obj240;
char* __dec_obj241;
char* __dec_obj242;
struct list$1sNode$ph* array_num_typedef;
struct list$1sNode$ph* __dec_obj243;
_Bool array_static;
_Bool array_restrict;
struct sNode* node_140;
int __exception_result_var_b85;
struct __current_stack2__ __current_stack2__;
struct __current_stack3__ __current_stack3__;
struct tuple2$2char$phchar$ph* multiple_assign_var10
;char* asm_name=0;
char* attribute2_143=0;
char* __dec_obj244;
char* __dec_obj245;
struct sType* type_before;
struct sType* __exception_result_var_b86;
struct sType* __exception_result_var_b87;
struct sType* __dec_obj246;
struct sType* __exception_result_var_b88;
struct sNode* __list_values1__[1];
struct list$1sNode$ph* __dec_obj247;
struct sType* __dec_obj248;
char* __dec_obj249;
struct tuple3$3sType$phchar$ph_Bool$* __result_obj__185;
memset(&type_78, 0, sizeof(type_78));
memset(&var_name_79, 0, sizeof(var_name_79));
memset(&result_type, 0, sizeof(result_type));
memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
memset(&result_type_107, 0, sizeof(result_type_107));
memset(&__current_stack2__, 0, sizeof(struct __current_stack2__));
memset(&__current_stack3__, 0, sizeof(struct __current_stack3__));
    head=info->p;
    head_sline=info->sline;
    info->define_struct=0;
    type_name=(char*)come_increment_ref_count(parse_word(info));
    record_=0;
    constant=0;
    static_=0;
    volatile_=0;
    register_=0;
    unsigned_=0;
    long_=0;
    long_long=0;
    short_=0;
    restrict_=0;
    struct_=0;
    union_=0;
    enum_=0;
    no_heap=0;
    extern_=0;
    inline_=0;
    uniq_=0;
    tuple_=0;
    original_var_name=0;
    complex_=0;
    alignas_=((void*)0);
    __right_value0 = (void*)0;
    union_attribute=(char*)come_increment_ref_count(xsprintf(""));
    anonymous_type=0;
    anonymous_name=0;
    atomic_=0;
    thread_local=0;
    while(    1    ) {
        if(        string_operator_equals(type_name,"_Thread_local")        ) {
            __right_value0 = (void*)0;
            __dec_obj92=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0, (void*)0);
            thread_local=1;
        }
        else if(        string_operator_equals(type_name,"_Atomic")        ) {
            if(            *info->p==40            ) {
                (come_push_stackframe("05type.c", 1464, 14),__exception_result_var_b15=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b15);
            }
            __right_value0 = (void*)0;
            __dec_obj93=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0, (void*)0);
            atomic_=1;
        }
        else if(        string_operator_equals(type_name,"__extension__")        ) {
            __right_value0 = (void*)0;
            __dec_obj94=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name,"__attribute__")        ) {
            if(            *info->p==40            ) {
                brace_num=0;
                while(                *info->p                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        brace_num++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        brace_num--;
                        if(                        brace_num==0                        ) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            __dec_obj95=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name,"_Noreturn")        ) {
            __right_value0 = (void*)0;
            __dec_obj96=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name,"__noreturn")        ) {
            __right_value0 = (void*)0;
            __dec_obj97=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name,"_Nullable")        ) {
            __right_value0 = (void*)0;
            __dec_obj98=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name,"_noreturn")        ) {
            __right_value0 = (void*)0;
            __dec_obj99=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name,"_Alignas")        ) {
            (come_push_stackframe("05type.c", 1511, 15),__exception_result_var_b16=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b16);
            __right_value0 = (void*)0;
            exp=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
            __dec_obj100=alignas_,
            alignas_=(struct sNode*)come_increment_ref_count(exp);
            (__dec_obj100 ? __dec_obj100 = come_decrement_ref_count(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0, (void*)0) :0);
            (come_push_stackframe("05type.c", 1517, 16),__exception_result_var_b17=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b17);
            __right_value0 = (void*)0;
            __dec_obj101=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0, (void*)0);
            ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(        string_operator_equals(type_name,"const")        ) {
            constant=1;
            __right_value0 = (void*)0;
            __dec_obj102=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name,"_Complex")        ) {
            complex_=1;
            __right_value0 = (void*)0;
            __dec_obj103=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name,"static")        ) {
            static_=1;
            __right_value0 = (void*)0;
            __dec_obj104=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name,"uniq")        ) {
            uniq_=1;
            __right_value0 = (void*)0;
            __dec_obj105=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name,"record")        ) {
            record_=1;
            __right_value0 = (void*)0;
            __dec_obj106=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name,"extern")        ) {
            extern_=1;
            __right_value0 = (void*)0;
            __dec_obj107=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name,"inline")||string_operator_equals(type_name,"__inline")||string_operator_equals(type_name,"__inline__")||string_operator_equals(type_name,"__always_inline")||string_operator_equals(type_name,"__forceinline")        ) {
            inline_=1;
            __right_value0 = (void*)0;
            __dec_obj108=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name,"volatile")        ) {
            volatile_=1;
            __right_value0 = (void*)0;
            __dec_obj109=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name,"struct")        ) {
            struct_=1;
            __right_value0 = (void*)0;
            __dec_obj110=union_attribute,
            union_attribute=(char*)come_increment_ref_count(parse_struct_attribute(info));
            __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0, (void*)0);
            if(            *info->p==123            ) {
                p=info->p;
                sline=info->sline;
                __right_value0 = (void*)0;
                ((char*)(__right_value0=skip_block(info,0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                if(                *info->p==59                ) {
                    anonymous_name=1;
                    anonymous_type=1;
                    __right_value0 = (void*)0;
                    __dec_obj111=type_name,
                    type_name=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0, (void*)0);
                    info->p=p;
                    info->sline=sline;
                    break;
                }
                else {
                    anonymous_type=1;
                    __right_value0 = (void*)0;
                    __dec_obj112=type_name,
                    type_name=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0, (void*)0);
                    info->p=p;
                    info->sline=sline;
                    break;
                }
            }
            parse_sharp_v5(info);
            if(            *info->p!=62            ) {
                __right_value0 = (void*)0;
                __dec_obj113=type_name,
                type_name=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0, (void*)0);
                parse_sharp_v5(info);
                if(                *info->p==60                ) {
                    p_44=info->p;
                    sline_45=info->sline;
                    info->p++;
                    skip_spaces_and_lf(info);
                    while(                    1                    ) {
                        if(                        *info->p==62                        ) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==123                            ) {
                            }
                            else {
                                info->p=p_44;
                                info->sline=sline_45;
                            }
                            break;
                        }
                        else if(                        *info->p==0                        ) {
                            err_msg(info,"invalid struct definition");
                            __right_value0 = (void*)0;
                            __result_obj__125 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phint$*)(__right_value1=tuple3$3sType$phchar$phint$_initialize((struct tuple3$3sType$phchar$phint$*)come_increment_ref_count((struct tuple3$3sType$phchar$phint$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phint$)*(1), "05type.c", 1618, "struct tuple3$3sType$phchar$phint$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),0))));
                            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                            ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                            (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                            come_call_finalizer(tuple3$3sType$phchar$phint$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__125, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                            return __result_obj__125;
                        }
                        else {
                            info->p++;
                        }
                    }
                }
                if(                *info->p==123                ) {
                    p_46=info->p;
                    sline_47=info->sline;
                    __right_value0 = (void*)0;
                    ((char*)(__right_value0=skip_block(info,0)));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                    __right_value0 = (void*)0;
                    (void)((char*)(__right_value0=parse_struct_attribute(info)));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                    if(                    *info->p==59                    ) {
                        info->p=head;
                        info->sline=head_sline;
                        info->define_struct=1;
                        __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        __result_obj__126 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phint$*)(__right_value1=tuple3$3sType$phchar$phint$_initialize((struct tuple3$3sType$phchar$phint$*)come_increment_ref_count((struct tuple3$3sType$phchar$phint$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phint$)*(1), "05type.c", 1638, "struct tuple3$3sType$phchar$phint$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),0))));
                        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                        ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                        (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                        come_call_finalizer(tuple3$3sType$phchar$phint$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__126, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                        return __result_obj__126;
                    }
                    else {
                        info->p=p_46;
                        info->sline=sline_47;
                        __right_value0 = (void*)0;
                        node=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name),(char*)come_increment_ref_count(union_attribute),info));
                        Value=node_compile(node,info);
                        if(                        !Value                        ) {
                            __right_value0 = (void*)0;
                            __right_value1 = (void*)0;
                            __result_obj__127 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phint$*)(__right_value1=tuple3$3sType$phchar$phint$_initialize((struct tuple3$3sType$phchar$phint$*)come_increment_ref_count((struct tuple3$3sType$phchar$phint$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phint$)*(1), "05type.c", 1647, "struct tuple3$3sType$phchar$phint$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),0))));
                            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                            ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                            (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                            come_call_finalizer(tuple3$3sType$phchar$phint$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__127, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                            return __result_obj__127;
                        }
                        else {
                        }
                        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                        break;
                        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    }
                }
            }
        }
        else if(        string_operator_equals(type_name,"union")        ) {
            union_=1;
            __right_value0 = (void*)0;
            __dec_obj116=union_attribute,
            union_attribute=(char*)come_increment_ref_count(parse_struct_attribute(info));
            __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0, (void*)0);
            if(            *info->p==123            ) {
                p_48=info->p;
                sline_49=info->sline;
                __right_value0 = (void*)0;
                ((char*)(__right_value0=skip_block(info,0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                if(                (info->end-info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0                ) {
                    __right_value0 = (void*)0;
                    ((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
                    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
                if(                *info->p==59                ) {
                    info->p=head;
                    info->sline=head_sline;
                    info->define_struct=0;
                    anonymous_type=1;
                    __right_value0 = (void*)0;
                    __dec_obj117=type_name,
                    type_name=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0, (void*)0);
                    info->p=p_48;
                    info->sline=sline_49;
                    break;
                }
                else {
                    anonymous_type=1;
                    __right_value0 = (void*)0;
                    __dec_obj118=type_name,
                    type_name=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0, (void*)0);
                    info->p=p_48;
                    info->sline=sline_49;
                    break;
                }
            }
            parse_sharp_v5(info);
            __right_value0 = (void*)0;
            __dec_obj119=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0, (void*)0);
            parse_sharp_v5(info);
            if(            *info->p==123            ) {
                p_50=info->p;
                sline_51=info->sline;
                __right_value0 = (void*)0;
                ((char*)(__right_value0=skip_block(info,0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                if(                *info->p==59                ) {
                    info->p=head;
                    info->sline=head_sline;
                    info->define_struct=1;
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __result_obj__128 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phint$*)(__right_value1=tuple3$3sType$phchar$phint$_initialize((struct tuple3$3sType$phchar$phint$*)come_increment_ref_count((struct tuple3$3sType$phchar$phint$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phint$)*(1), "05type.c", 1704, "struct tuple3$3sType$phchar$phint$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),0))));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(tuple3$3sType$phchar$phint$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__128, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                    return __result_obj__128;
                }
                else {
                    anonymous_type=1;
                    info->p=p_50;
                    info->sline=sline_51;
                    break;
                }
            }
        }
        else if(        string_operator_equals(type_name,"enum")        ) {
            enum_=1;
            parse_sharp_v5(info);
            __right_value0 = (void*)0;
            ((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
            come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(            *info->p==58            ) {
                info->p++;
                skip_spaces_and_lf(info);
                __right_value0 = (void*)0;
                multiple_assign_var4=(come_push_stackframe("05type.c", 1725, 18),__exception_result_var_b19=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,0,1,0))), come_pop_stackframe(), __exception_result_var_b19);
                type=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                name=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                err=multiple_assign_var4->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==123            ) {
                p_52=info->p;
                sline_53=info->sline;
                __right_value0 = (void*)0;
                ((char*)(__right_value0=skip_block(info,0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                if(                (info->end-info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0                ) {
                    __right_value0 = (void*)0;
                    ((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
                    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
                if(                *info->p==59                ) {
                    info->p=head;
                    info->sline=head_sline;
                    info->define_struct=1;
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __result_obj__129 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phint$*)(__right_value1=tuple3$3sType$phchar$phint$_initialize((struct tuple3$3sType$phchar$phint$*)come_increment_ref_count((struct tuple3$3sType$phchar$phint$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phint$)*(1), "05type.c", 1744, "struct tuple3$3sType$phchar$phint$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),0))));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(tuple3$3sType$phchar$phint$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__129, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                    return __result_obj__129;
                }
                else {
                    anonymous_type=1;
                    __right_value0 = (void*)0;
                    __dec_obj120=type_name,
                    type_name=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0,0, (void*)0);
                    info->p=p_52;
                    info->sline=sline_53;
                    break;
                }
            }
            parse_sharp_v5(info);
            __right_value0 = (void*)0;
            __dec_obj121=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0, (void*)0);
            parse_sharp_v5(info);
            if(            *info->p==58            ) {
                info->p++;
                skip_spaces_and_lf(info);
                __right_value0 = (void*)0;
                multiple_assign_var5=(come_push_stackframe("05type.c", 1765, 20),__exception_result_var_b21=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,0,1,0))), come_pop_stackframe(), __exception_result_var_b21);
                type_54=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                name_55=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                err_56=multiple_assign_var5->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer(sType_finalize, type_54, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name_55 = come_decrement_ref_count(name_55, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==123            ) {
                p_57=info->p;
                sline_58=info->sline;
                __right_value0 = (void*)0;
                ((char*)(__right_value0=skip_block(info,0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                if(                *info->p==59                ) {
                    info->p=head;
                    info->sline=head_sline;
                    info->define_struct=1;
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __result_obj__130 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phint$*)(__right_value1=tuple3$3sType$phchar$phint$_initialize((struct tuple3$3sType$phchar$phint$*)come_increment_ref_count((struct tuple3$3sType$phchar$phint$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phint$)*(1), "05type.c", 1780, "struct tuple3$3sType$phchar$phint$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),0))));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(tuple3$3sType$phchar$phint$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__130, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                    return __result_obj__130;
                }
                else {
                    anonymous_type=1;
                    info->p=p_57;
                    info->sline=sline_58;
                    break;
                }
            }
        }
        else if(        string_operator_equals(type_name,"long")        ) {
            {
                p_59=info->p;
                sline_60=info->sline;
                if(                !(isalpha(*info->p)||*info->p==95)                ) {
                    __right_value0 = (void*)0;
                    __dec_obj122=type_name,
                    type_name=(char*)come_increment_ref_count(__builtin_string("long"));
                    __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0, (void*)0);
                    break;
                }
                else {
                    p2=info->p;
                    sline2=info->sline;
                    __right_value0 = (void*)0;
                    __dec_obj123=type_name,
                    type_name=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0, (void*)0);
                    if(                    string_operator_equals(type_name,"double")                    ) {
                        long_=1;
                        break;
                    }
                    else if(                    string_operator_equals(type_name,"unsigned")                    ) {
                        __right_value0 = (void*)0;
                        __dec_obj124=type_name,
                        type_name=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0,0, (void*)0);
                        if(                        string_operator_equals(type_name,"int")                        ) {
                            long_=1;
                            unsigned_=1;
                            break;
                        }
                    }
                    else if(                    string_operator_equals(type_name,"signed")                    ) {
                        __right_value0 = (void*)0;
                        __dec_obj125=type_name,
                        type_name=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0, (void*)0);
                        if(                        string_operator_equals(type_name,"int")                        ) {
                            long_=1;
                            unsigned_=0;
                            break;
                        }
                    }
                    else if(                    string_operator_equals(type_name,"long")                    ) {
                        p_59=info->p;
                        sline_60=info->sline;
                        if(                        isalpha(*info->p)||*info->p==95                        ) {
                            long_long=1;
                            __right_value0 = (void*)0;
                            __dec_obj126=type_name,
                            type_name=(char*)come_increment_ref_count(parse_word(info));
                            __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0, (void*)0);
                        }
                        else if(                        *info->p==58                        ) {
                            __right_value0 = (void*)0;
                            __dec_obj127=type_name,
                            type_name=(char*)come_increment_ref_count(__builtin_string("long"));
                            __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0, (void*)0);
                            info->p=p2;
                            info->sline=sline2;
                            break;
                        }
                        else {
                            long_=1;
                            break;
                        }
                        if(                        string_operator_equals(type_name,"int")                        ) {
                            long_long=1;
                            break;
                        }
                        else if(                        !is_type_name(type_name,info)                        ) {
                            __right_value0 = (void*)0;
                            __dec_obj128=type_name,
                            type_name=(char*)come_increment_ref_count(__builtin_string("long"));
                            __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0, (void*)0);
                            long_long=1;
                            info->p=p_59;
                            info->sline=sline_60;
                            break;
                        }
                    }
                    else if(                    is_type_name(type_name,info)                    ) {
                        if(                        long_                        ) {
                            long_long=1;
                            long_=0;
                        }
                        else {
                            long_=1;
                        }
                        break;
                    }
                    else {
                        info->p=p_59;
                        info->sline=sline_60;
                        __right_value0 = (void*)0;
                        __dec_obj129=type_name,
                        type_name=(char*)come_increment_ref_count(__builtin_string("long"));
                        __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0, (void*)0);
                        break;
                    }
                }
            }
        }
        else if(        string_operator_equals(type_name,"signed")        ) {
            unsigned_=0;
            if(            isalpha(*info->p)||*info->p==95            ) {
                p_61=info->p;
                sline_62=info->sline;
                __right_value0 = (void*)0;
                __dec_obj130=type_name,
                type_name=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0, (void*)0);
                if(                string_operator_equals(type_name,"char")||string_operator_equals(type_name,"short")||string_operator_equals(type_name,"long")||string_operator_equals(type_name,"int")                ) {
                }
                else {
                    __right_value0 = (void*)0;
                    __dec_obj131=type_name,
                    type_name=(char*)come_increment_ref_count(xsprintf("int"));
                    __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0,0, (void*)0);
                    info->p=p_61;
                    info->sline=sline_62;
                    break;
                }
            }
            else {
                __right_value0 = (void*)0;
                __dec_obj132=type_name,
                type_name=(char*)come_increment_ref_count(xsprintf("int"));
                __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0,0, (void*)0);
                break;
            }
        }
        else if(        string_operator_equals(type_name,"unsigned")        ) {
            unsigned_=1;
            if(            isalpha(*info->p)||*info->p==95            ) {
                p_63=info->p;
                sline_64=info->sline;
                __right_value0 = (void*)0;
                __dec_obj133=type_name,
                type_name=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0,0, (void*)0);
                if(                string_operator_equals(type_name,"short")                ) {
                    if(                    isalpha(*info->p)||*info->p==95                    ) {
                        p_65=info->p;
                        sline_66=info->sline;
                        __right_value0 = (void*)0;
                        __dec_obj134=type_name,
                        type_name=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0,0, (void*)0);
                        if(                        is_type_name(type_name,info)                        ) {
                            short_=1;
                        }
                        else {
                            short_=1;
                            __right_value0 = (void*)0;
                            __dec_obj135=type_name,
                            type_name=(char*)come_increment_ref_count(__builtin_string("int"));
                            __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0, (void*)0);
                            info->p=p_65;
                            info->sline=sline_66;
                        }
                    }
                    else {
                        short_=1;
                        __right_value0 = (void*)0;
                        __dec_obj136=type_name,
                        type_name=(char*)come_increment_ref_count(__builtin_string("int"));
                        __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0,0, (void*)0);
                        break;
                    }
                }
                else if(                string_operator_equals(type_name,"long")                ) {
                    if(                    isalpha(*info->p)||*info->p==95                    ) {
                        p_67=info->p;
                        sline_68=info->sline;
                        __right_value0 = (void*)0;
                        __dec_obj137=type_name,
                        type_name=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0,0, (void*)0);
                        if(                        is_type_name(type_name,info)                        ) {
                            long_=1;
                        }
                        else {
                            long_=1;
                            __right_value0 = (void*)0;
                            __dec_obj138=type_name,
                            type_name=(char*)come_increment_ref_count(__builtin_string("int"));
                            __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0, (void*)0);
                            info->p=p_67;
                            info->sline=sline_68;
                        }
                    }
                    else {
                        long_=1;
                        __right_value0 = (void*)0;
                        __dec_obj139=type_name,
                        type_name=(char*)come_increment_ref_count(__builtin_string("int"));
                        __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0,0, (void*)0);
                        break;
                    }
                }
                else if(                !is_type_name(type_name,info)                ) {
                    __right_value0 = (void*)0;
                    __dec_obj140=type_name,
                    type_name=(char*)come_increment_ref_count(__builtin_string("int"));
                    __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0,0, (void*)0);
                    info->p=p_63;
                    info->sline=sline_64;
                    break;
                }
            }
            else {
                __right_value0 = (void*)0;
                __dec_obj141=type_name,
                type_name=(char*)come_increment_ref_count(__builtin_string("int"));
                __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0,0, (void*)0);
                break;
            }
        }
        else if(        string_operator_equals(type_name,"signed")||string_operator_equals(type_name,"__signed__")        ) {
            unsigned_=0;
            p_69=info->p;
            sline_70=info->sline;
            __right_value0 = (void*)0;
            __dec_obj142=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0, (void*)0);
            if(            *info->p==58&&*(info->p+1)==58            ) {
                __right_value0 = (void*)0;
                __dec_obj143=type_name,
                type_name=(char*)come_increment_ref_count(__builtin_string("int"));
                __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0,0, (void*)0);
                info->p=p_69;
                info->sline=sline_70;
                break;
            }
        }
        else if(        string_operator_equals(type_name,"register")        ) {
            register_=1;
            __right_value0 = (void*)0;
            __dec_obj144=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name,"restrict")        ) {
            restrict_=1;
            __right_value0 = (void*)0;
            __dec_obj145=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name,"_Addr")        ) {
            __right_value0 = (void*)0;
            __dec_obj146=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name,"__restrict")        ) {
            restrict_=1;
            __right_value0 = (void*)0;
            __dec_obj147=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name,"tup")        ) {
            if(            *info->p==40            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                (come_push_stackframe("05type.c", 2009, 21),__exception_result_var_b22=expected_next_character(58,info), come_pop_stackframe(), __exception_result_var_b22);
            }
            __right_value0 = (void*)0;
            __dec_obj148=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0,0, (void*)0);
            parse_multiple_type=1;
            tuple_=1;
        }
        else if(        string_operator_equals(type_name,"short")        ) {
            short_=0;
            if(            *info->p==58            ) {
                break;
            }
            else if(            xisalnum(*info->p)            ) {
                p_71=info->p;
                sline_72=info->sline;
                __right_value0 = (void*)0;
                __dec_obj149=type_name,
                type_name=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0,0, (void*)0);
                if(                *info->p==58&&*(info->p+1)==58                ) {
                    __right_value0 = (void*)0;
                    __dec_obj150=type_name,
                    type_name=(char*)come_increment_ref_count(__builtin_string("short"));
                    __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0,0, (void*)0);
                    info->p=p_71;
                    info->sline=sline_72;
                    break;
                }
                if(                string_operator_equals(type_name,"int")                ) {
                    short_=1;
                    break;
                }
                else if(                string_operator_equals(type_name,"short")                ) {
                    short_=1;
                    break;
                }
                else if(                is_type_name(type_name,info)                ) {
                    info->p=p_71;
                    info->sline=sline_72;
                }
                else {
                    __right_value0 = (void*)0;
                    __dec_obj151=type_name,
                    type_name=(char*)come_increment_ref_count(__builtin_string("short"));
                    __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0,0, (void*)0);
                    info->p=p_71;
                    info->sline=sline_72;
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
    if(    (string_operator_equals(type_name,"typeof")||string_operator_equals(type_name,"__typeof__"))&&*info->p==40    ) {
        info->p++;
        skip_spaces_and_lf(info);
        no_comma=info->no_comma;
        info->no_comma=0;
        __right_value0 = (void*)0;
        exp_73=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
        info->no_comma=no_comma;
        (come_push_stackframe("05type.c", 2072, 22),__exception_result_var_b23=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b23);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        type_74=(struct sType*)come_increment_ref_count((come_push_stackframe("05type.c", 2074, 25),__exception_result_var_b26=(come_push_stackframe("05type.c", 2074, 23),__exception_result_var_b24=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2074, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),0,info,0), come_pop_stackframe(), __exception_result_var_b24), come_pop_stackframe(), __exception_result_var_b26));
        __dec_obj152=type_74->mTypeOfNode,
        type_74->mTypeOfNode=(struct sNode*)come_increment_ref_count(exp_73);
        (__dec_obj152 ? __dec_obj152 = come_decrement_ref_count(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0, (void*)0) :0);
        var_name=((void*)0);
        while(        1        ) {
            if(            *info->p==42            ) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_74->mPointerNum++;
            }
            else if(            *info->p==37            ) {
                info->p++;
                skip_spaces_and_lf(info);
                type_74->mHeap=1;
            }
            else if(            *info->p==96            ) {
                info->p++;
                skip_spaces_and_lf(info);
                type_74->mNoCallingDestructor=1;
            }
            else {
                break;
            }
        }
        attribute=((void*)0);
        if(        parse_variable_name        ) {
            if(            *info->p==58            ) {
                __right_value0 = (void*)0;
                __dec_obj153=var_name,
                var_name=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0,0, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95            ) {
                __right_value0 = (void*)0;
                __dec_obj154=var_name,
                var_name=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name=0;
                num_anonymous_var_name++;
                __right_value0 = (void*)0;
                __dec_obj155=var_name,
                var_name=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameY%d",num_anonymous_var_name));
                __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0,0, (void*)0);
                type_74->mAnonymousVarName=1;
            }
            if(            *info->p==58            ) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_75=info->no_comma;
                info->no_comma=1;
                __right_value0 = (void*)0;
                node_76=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
                info->no_comma=no_comma_75;
                __dec_obj156=type_74->mSizeNum,
                type_74->mSizeNum=(struct sNode*)come_increment_ref_count(node_76);
                (__dec_obj156 ? __dec_obj156 = come_decrement_ref_count(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0, (void*)0) :0);
                ((node_76) ? node_76 = come_decrement_ref_count(node_76, ((struct sNode*)node_76)->finalize, ((struct sNode*)node_76)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            __right_value0 = (void*)0;
            attribute2=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute,"")&&string_operator_not_equals(attribute2,"")            ) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj157=type_74->mAttribute,
                type_74->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value1=string_operator_add(attribute," "))),attribute2));
                __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0,0, (void*)0);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            else if(            string_operator_not_equals(attribute2,"")            ) {
                __dec_obj158=type_74->mAttribute,
                type_74->mAttribute=(char*)come_increment_ref_count(attribute2);
                __dec_obj158 = come_decrement_ref_count(__dec_obj158, (void*)0, (void*)0, 0,0, (void*)0);
            }
            (attribute2 = come_decrement_ref_count(attribute2, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __result_obj__131 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phint$*)(__right_value1=tuple3$3sType$phchar$phint$_initialize((struct tuple3$3sType$phchar$phint$*)come_increment_ref_count((struct tuple3$3sType$phchar$phint$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phint$)*(1), "05type.c", 2142, "struct tuple3$3sType$phchar$phint$")),(struct sType*)come_increment_ref_count(type_74),(char*)come_increment_ref_count(var_name),1))));
        ((exp_73) ? exp_73 = come_decrement_ref_count(exp_73, ((struct sNode*)exp_73)->finalize, ((struct sNode*)exp_73)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sType_finalize, type_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0));
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
        ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(tuple3$3sType$phchar$phint$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__131, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__131;
        ((exp_73) ? exp_73 = come_decrement_ref_count(exp_73, ((struct sNode*)exp_73)->finalize, ((struct sNode*)exp_73)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sType_finalize, type_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __right_value0 = (void*)0;
    attribute_77=(char*)come_increment_ref_count(parse_struct_attribute(info));
    skip_pointer_attribute(info);
    pointer_num=0;
    heap=0;
    refference=0;
    no_refference=0;
    channel=0;
    deffer_=0;
    any_class=0;
    vtable=0;
    while(    1    ) {
        if(        *info->p==42        ) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            pointer_num++;
        }
        else if(        *info->p==37        ) {
            info->p++;
            skip_spaces_and_lf(info);
            heap=1;
        }
        else if(        gComePthread&&*info->p==64        ) {
            info->p++;
            skip_spaces_and_lf(info);
            channel=1;
        }
        else {
            break;
        }
    }
    skip_pointer_attribute(info);
    tuple_name=((void*)0);
    if(    *info->p==58&&*(info->p+1)!=58&&tuple_    ) {
        info->p++;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        __dec_obj159=tuple_name,
        tuple_name=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    atomic_&&*info->p==41    ) {
        (come_push_stackframe("05type.c", 2194, 26),__exception_result_var_b27=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b27);
    }
    lambda_flag=0;
    {
        pX=info->p;
        slineX=info->sline;
        if(        isalpha(*info->p)||*info->p==95        ) {
            __right_value0 = (void*)0;
            (void)((char*)(__right_value0=parse_word(info)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            if(            *info->p==40&&info->in_typedef            ) {
                lambda_flag=1;
            }
        }
        info->p=pX;
        info->sline=slineX;
    }
    function_pointer_flag=0;
    pointer_to_array_flag=0;
    {
        p_80=info->p;
        sline_81=info->sline;
        if(        *info->p==40        ) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(            *info->p==40            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==42||*info->p==94            ) {
                while(                *info->p==42||*info->p==94                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                function_pointer_flag=1;
                word=((void*)0);
                if(                isalpha(*info->p)||*info->p==95                ) {
                    __right_value0 = (void*)0;
                    __dec_obj160=word,
                    word=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0,0, (void*)0);
                }
                if(                *info->p==91                ) {
                    pointer_to_array_flag=1;
                    while(                    *info->p==91                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        *info->p==93                        ) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            break;
                        }
                        no_output_come_code=info->no_output_come_code;
                        info->no_output_come_code=1;
                        __right_value0 = (void*)0;
                        exp_82=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
                        info->no_output_come_code=no_output_come_code;
                        if(                        *info->p==93                        ) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        ((exp_82) ? exp_82 = come_decrement_ref_count(exp_82, ((struct sNode*)exp_82)->finalize, ((struct sNode*)exp_82)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    }
                    if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        *info->p==40                        ) {
                            function_pointer_flag=1;
                            pointer_to_array_flag=0;
                        }
                        else if(                        *info->p==91                        ) {
                            function_pointer_flag=0;
                            pointer_to_array_flag=1;
                        }
                    }
                }
                else if(                *info->p==41                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        pointer_to_array_flag=1;
                        function_pointer_flag=0;
                    }
                    if(                    *info->p==91                    ) {
                        pointer_to_array_flag=1;
                        function_pointer_flag=0;
                    }
                    else if(                    *info->p==40                    ) {
                        function_pointer_flag=1;
                    }
                }
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            else if(            isalpha(*info->p)||*info->p==95            ) {
                __right_value0 = (void*)0;
                word_83=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==41                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p==40                    ) {
                        function_pointer_flag=1;
                    }
                }
                (word_83 = come_decrement_ref_count(word_83, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        info->p=p_80;
        info->sline=sline_81;
    }
    var_name_between_brace=0;
    {
        p_84=info->p;
        sline_85=info->sline;
        if(        *info->p==40        ) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(            isalpha(*info->p)||*info->p==95            ) {
                __right_value0 = (void*)0;
                word_86=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_86,info)                ) {
                }
                else if(                *info->p==41                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p!=40                    ) {
                        var_name_between_brace=1;
                    }
                }
                (word_86 = come_decrement_ref_count(word_86, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        info->p=p_84;
        info->sline=sline_85;
    }
    if(    anonymous_type&&*info->p==123    ) {
        static int anonymous_num=0;
        if(        struct_        ) {
            anonymous=0;
            if(            string_operator_equals(type_name,"")            ) {
                anonymous=1;
                __right_value0 = (void*)0;
                __dec_obj161=type_name,
                type_name=(char*)come_increment_ref_count(xsprintf("anonymous_typeX%d",++anonymous_num));
                __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0,0, (void*)0);
            }
            __right_value0 = (void*)0;
            node_87=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name),(char*)come_increment_ref_count(union_attribute),info));
            Value_88=node_compile(node_87,info);
            if(            !Value_88            ) {
                err_msg(info,"parse_struct is failed");
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __result_obj__132 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phint$*)(__right_value1=tuple3$3sType$phchar$phint$_initialize((struct tuple3$3sType$phchar$phint$*)come_increment_ref_count((struct tuple3$3sType$phchar$phint$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phint$)*(1), "05type.c", 2366, "struct tuple3$3sType$phchar$phint$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),0))));
                ((node_87) ? node_87 = come_decrement_ref_count(node_87, ((struct sNode*)node_87)->finalize, ((struct sNode*)node_87)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                (attribute_77 = come_decrement_ref_count(attribute_77, (void*)0, (void*)0, 0, 0, (void*)0));
                (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (var_name_79 = come_decrement_ref_count(var_name_79, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(tuple3$3sType$phchar$phint$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__132, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__132;
            }
            else {
            }
            pointer_num_89=0;
            while(            *info->p==42            ) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_89++;
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj162=type_78,
            type_78=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj162,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(            type_78==((void*)0)            ) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj163=type_78,
                type_78=(struct sType*)come_increment_ref_count((come_push_stackframe("05type.c", 2383, 29),__exception_result_var_b30=(come_push_stackframe("05type.c", 2383, 27),__exception_result_var_b28=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2383, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name)),0,info,0), come_pop_stackframe(), __exception_result_var_b28), come_pop_stackframe(), __exception_result_var_b30));
                come_call_finalizer(sType_finalize, __dec_obj163,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            type_78->mAnonymous=anonymous;
            __right_value0 = (void*)0;
            __dec_obj164=type_78->mAnonymousName,
            type_78->mAnonymousName=(char*)come_increment_ref_count(__builtin_string(type_name));
            __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0,0, (void*)0);
            type_78->mPointerNum=pointer_num_89;
            ((node_87) ? node_87 = come_decrement_ref_count(node_87, ((struct sNode*)node_87)->finalize, ((struct sNode*)node_87)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(        enum_        ) {
            if(            string_operator_equals(type_name,"")            ) {
                if(                !info->no_output_err                ) {
                    __right_value0 = (void*)0;
                    __dec_obj165=type_name,
                    type_name=(char*)come_increment_ref_count(xsprintf("anonymous_typeY%d",anonymous_num));
                    __dec_obj165 = come_decrement_ref_count(__dec_obj165, (void*)0, (void*)0, 0,0, (void*)0);
                }
                else {
                    __right_value0 = (void*)0;
                    __dec_obj166=type_name,
                    type_name=(char*)come_increment_ref_count(xsprintf("anonymous_typeY%d",++anonymous_num));
                    __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0,0, (void*)0);
                }
            }
            __right_value0 = (void*)0;
            node_90=(struct sNode*)come_increment_ref_count(parse_enum((char*)come_increment_ref_count(type_name),(char*)come_increment_ref_count(union_attribute),info));
            if(            !info->no_output_err            ) {
                Value_91=node_compile(node_90,info);
                if(                !Value_91                ) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __result_obj__133 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phint$*)(__right_value1=tuple3$3sType$phchar$phint$_initialize((struct tuple3$3sType$phchar$phint$*)come_increment_ref_count((struct tuple3$3sType$phchar$phint$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phint$)*(1), "05type.c", 2405, "struct tuple3$3sType$phchar$phint$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),0))));
                    ((node_90) ? node_90 = come_decrement_ref_count(node_90, ((struct sNode*)node_90)->finalize, ((struct sNode*)node_90)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    (attribute_77 = come_decrement_ref_count(attribute_77, (void*)0, (void*)0, 0, 0, (void*)0));
                    (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, type_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (var_name_79 = come_decrement_ref_count(var_name_79, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(tuple3$3sType$phchar$phint$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__133, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                    return __result_obj__133;
                }
                else {
                }
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj167=type_78,
            type_78=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj167,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(            type_78==((void*)0)            ) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj168=type_78,
                type_78=(struct sType*)come_increment_ref_count((come_push_stackframe("05type.c", 2412, 32),__exception_result_var_b33=(come_push_stackframe("05type.c", 2412, 30),__exception_result_var_b31=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2412, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name)),0,info,0), come_pop_stackframe(), __exception_result_var_b31), come_pop_stackframe(), __exception_result_var_b33));
                come_call_finalizer(sType_finalize, __dec_obj168,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            ((node_90) ? node_90 = come_decrement_ref_count(node_90, ((struct sNode*)node_90)->finalize, ((struct sNode*)node_90)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(        union_        ) {
            anonymous_92=0;
            if(            string_operator_equals(type_name,"")            ) {
                __right_value0 = (void*)0;
                __dec_obj169=type_name,
                type_name=(char*)come_increment_ref_count(xsprintf("anonymous_typeZ%d",++anonymous_num));
                __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0,0, (void*)0);
                anonymous_92=1;
            }
            __right_value0 = (void*)0;
            node_93=(struct sNode*)come_increment_ref_count(parse_union((char*)come_increment_ref_count(type_name),(char*)come_increment_ref_count(union_attribute),info));
            Value_94=node_compile(node_93,info);
            if(            !Value_94            ) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __result_obj__134 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phint$*)(__right_value1=tuple3$3sType$phchar$phint$_initialize((struct tuple3$3sType$phchar$phint$*)come_increment_ref_count((struct tuple3$3sType$phchar$phint$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phint$)*(1), "05type.c", 2426, "struct tuple3$3sType$phchar$phint$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),0))));
                ((node_93) ? node_93 = come_decrement_ref_count(node_93, ((struct sNode*)node_93)->finalize, ((struct sNode*)node_93)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                (attribute_77 = come_decrement_ref_count(attribute_77, (void*)0, (void*)0, 0, 0, (void*)0));
                (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (var_name_79 = come_decrement_ref_count(var_name_79, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(tuple3$3sType$phchar$phint$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__134, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__134;
            }
            else {
            }
            pointer_num_95=0;
            while(            *info->p==42            ) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_95++;
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj170=type_78,
            type_78=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj170,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(            type_78==((void*)0)            ) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj171=type_78,
                type_78=(struct sType*)come_increment_ref_count((come_push_stackframe("05type.c", 2443, 35),__exception_result_var_b36=(come_push_stackframe("05type.c", 2443, 33),__exception_result_var_b34=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2443, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name)),0,info,0), come_pop_stackframe(), __exception_result_var_b34), come_pop_stackframe(), __exception_result_var_b36));
                come_call_finalizer(sType_finalize, __dec_obj171,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            type_78->mPointerNum=pointer_num_95;
            type_78->mAnonymous=anonymous_92;
            __right_value0 = (void*)0;
            __dec_obj172=type_78->mAnonymousName,
            type_78->mAnonymousName=(char*)come_increment_ref_count(__builtin_string(type_name));
            __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0,0, (void*)0);
            ((node_93) ? node_93 = come_decrement_ref_count(node_93, ((struct sNode*)node_93)->finalize, ((struct sNode*)node_93)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            err_msg(info,"unexpected { character");
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __result_obj__135 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phint$*)(__right_value1=tuple3$3sType$phchar$phint$_initialize((struct tuple3$3sType$phchar$phint$*)come_increment_ref_count((struct tuple3$3sType$phchar$phint$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phint$)*(1), "05type.c", 2453, "struct tuple3$3sType$phchar$phint$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),0))));
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
            ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
            (attribute_77 = come_decrement_ref_count(attribute_77, (void*)0, (void*)0, 0, 0, (void*)0));
            (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, type_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (var_name_79 = come_decrement_ref_count(var_name_79, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(tuple3$3sType$phchar$phint$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__135, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__135;
        }
        __right_value0 = (void*)0;
        attribute_96=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_96,"")        ) {
            __dec_obj173=type_78->mAttribute,
            type_78->mAttribute=(char*)come_increment_ref_count(attribute_96);
            __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0,0, (void*)0);
        }
        if(        parse_variable_name        ) {
            if(            var_name_between_brace&&*info->p==40            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58            ) {
                __right_value0 = (void*)0;
                __dec_obj174=var_name_79,
                var_name_79=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj174 = come_decrement_ref_count(__dec_obj174, (void*)0, (void*)0, 0,0, (void*)0);
            }
            else if(            anonymous_name            ) {
                static int num_anonymous_var_name_97=0;
                num_anonymous_var_name_97++;
                __right_value0 = (void*)0;
                __dec_obj175=var_name_79,
                var_name_79=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_97));
                __dec_obj175 = come_decrement_ref_count(__dec_obj175, (void*)0, (void*)0, 0,0, (void*)0);
                type_78->mAnonymousVarName=1;
            }
            else if(            xisalnum(*info->p)||*info->p==95            ) {
                __right_value0 = (void*)0;
                __dec_obj176=var_name_79,
                var_name_79=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj176 = come_decrement_ref_count(__dec_obj176, (void*)0, (void*)0, 0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_98=0;
                num_anonymous_var_name_98++;
                __right_value0 = (void*)0;
                __dec_obj177=var_name_79,
                var_name_79=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_98));
                __dec_obj177 = come_decrement_ref_count(__dec_obj177, (void*)0, (void*)0, 0,0, (void*)0);
                type_78->mAnonymousVarName=1;
            }
            if(            var_name_between_brace&&*info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58            ) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_99=info->no_comma;
                info->no_comma=1;
                __right_value0 = (void*)0;
                node_100=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
                info->no_comma=no_comma_99;
                __dec_obj178=type_78->mSizeNum,
                type_78->mSizeNum=(struct sNode*)come_increment_ref_count(node_100);
                (__dec_obj178 ? __dec_obj178 = come_decrement_ref_count(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0, (void*)0) :0);
                ((node_100) ? node_100 = come_decrement_ref_count(node_100, ((struct sNode*)node_100)->finalize, ((struct sNode*)node_100)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            __right_value0 = (void*)0;
            attribute2_101=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_96,"")&&string_operator_not_equals(attribute2_101,"")            ) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj179=type_78->mAttribute,
                type_78->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value1=string_operator_add(attribute_96," "))),attribute2_101));
                __dec_obj179 = come_decrement_ref_count(__dec_obj179, (void*)0, (void*)0, 0,0, (void*)0);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            else if(            string_operator_not_equals(attribute2_101,"")            ) {
                __dec_obj180=type_78->mAttribute,
                type_78->mAttribute=(char*)come_increment_ref_count(attribute2_101);
                __dec_obj180 = come_decrement_ref_count(__dec_obj180, (void*)0, (void*)0, 0,0, (void*)0);
            }
            (attribute2_101 = come_decrement_ref_count(attribute2_101, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        (attribute_96 = come_decrement_ref_count(attribute_96, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(    lambda_flag    ) {
        if(        __right_value0 = (void*)0,         ({(_conditional_value_X0=(((struct sType*)(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        _conditional_value_X0;})        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj181=result_type,
            result_type=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj181,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            __right_value0 = (void*)0;
            result_type->mClass=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,result_type->mClass->mName)));
            come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
        else if(        list$1char$ph_contained(info->generics_type_names,type_name)        ) {
            for(            i=0            ;            i<list$1char$ph_length(info->generics_type_names)            ;            i++            ){
                if(                __right_value0 = (void*)0,                 __right_value1 = (void*)0,                 ({(_conditional_value_X1=(string_operator_equals(((char*)(__right_value1=list$1char$ph_operator_load_element(info->generics_type_names,i))),type_name)));                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                _conditional_value_X1;})                ) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj182=result_type,
                    result_type=(struct sType*)come_increment_ref_count((come_push_stackframe("05type.c", 2538, 38),__exception_result_var_b39=(come_push_stackframe("05type.c", 2538, 36),__exception_result_var_b37=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2538, "struct sType*")),(char*)come_increment_ref_count(xsprintf("__generics_type%d",i)),0,info,0), come_pop_stackframe(), __exception_result_var_b37), come_pop_stackframe(), __exception_result_var_b39));
                    come_call_finalizer(sType_finalize, __dec_obj182,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        else if(        list$1char$ph_contained(info->method_generics_type_names,type_name)        ) {
            for(            i_104=0            ;            i_104<list$1char$ph_length(info->method_generics_type_names)            ;            i_104++            ){
                if(                __right_value0 = (void*)0,                 __right_value1 = (void*)0,                 ({(_conditional_value_X2=(string_operator_equals(((char*)(__right_value1=list$1char$ph_operator_load_element(info->method_generics_type_names,i_104))),type_name)));                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                _conditional_value_X2;})                ) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj183=result_type,
                    result_type=(struct sType*)come_increment_ref_count((come_push_stackframe("05type.c", 2545, 41),__exception_result_var_b42=(come_push_stackframe("05type.c", 2545, 39),__exception_result_var_b40=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2545, "struct sType*")),(char*)come_increment_ref_count(xsprintf("__mgenerics_type%d",i_104)),0,info,0), come_pop_stackframe(), __exception_result_var_b40), come_pop_stackframe(), __exception_result_var_b42));
                    come_call_finalizer(sType_finalize, __dec_obj183,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj184=result_type,
            result_type=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj184,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(            result_type==((void*)0)            ) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj185=result_type,
                result_type=(struct sType*)come_increment_ref_count((come_push_stackframe("05type.c", 2554, 44),__exception_result_var_b45=(come_push_stackframe("05type.c", 2554, 42),__exception_result_var_b43=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2554, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name)),0,info,0), come_pop_stackframe(), __exception_result_var_b43), come_pop_stackframe(), __exception_result_var_b45));
                come_call_finalizer(sType_finalize, __dec_obj185,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        result_type->mAtomic=result_type->mAtomic||atomic_;
        result_type->mThreadLocal=result_type->mThreadLocal||thread_local;
        result_type->mConstant=result_type->mConstant||constant;
        result_type->mComplex=result_type->mComplex||complex_;
        __dec_obj186=result_type->mAlignas,
        result_type->mAlignas=(struct sNode*)come_increment_ref_count(alignas_);
        (__dec_obj186 ? __dec_obj186 = come_decrement_ref_count(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0, (void*)0) :0);
        result_type->mRegister=register_;
        result_type->mUnsigned=result_type->mUnsigned||unsigned_;
        result_type->mVolatile=volatile_;
        result_type->mRecord=result_type->mRecord||record_;
        result_type->mUniq=result_type->mUniq||uniq_;
        result_type->mStatic=(result_type->mStatic||static_)&&!result_type->mUniq;
        result_type->mExtern=result_type->mExtern||extern_;
        result_type->mInline=result_type->mInline||inline_;
        result_type->mRestrict=result_type->mRestrict||restrict_;
        result_type->mLongLong=result_type->mLongLong||long_long;
        result_type->mLong=result_type->mLong||long_;
        result_type->mShort=result_type->mShort||short_;
        result_type->mPointerNum=pointer_num;
        result_type->mHeap=result_type->mHeap||heap;
        result_type->mChannel=result_type->mChannel||channel;
        result_type->mDefferRightValue=result_type->mDefferRightValue||deffer_;
        __right_value0 = (void*)0;
        __dec_obj187=var_name_79,
        var_name_79=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj187 = come_decrement_ref_count(__dec_obj187, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        multiple_assign_var6=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)(__right_value0=parse_params(info,0)));
        param_types=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var6->v1);
        param_names=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var6->v2);
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var6->v3);
        var_args=multiple_assign_var6->v4;
        come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __dec_obj188=type_78,
        type_78=(struct sType*)come_increment_ref_count((come_push_stackframe("05type.c", 2584, 47),__exception_result_var_b48=(come_push_stackframe("05type.c", 2584, 45),__exception_result_var_b46=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2584, "struct sType*")),(char*)come_increment_ref_count(xsprintf("lambda")),0,info,0), come_pop_stackframe(), __exception_result_var_b46), come_pop_stackframe(), __exception_result_var_b48));
        come_call_finalizer(sType_finalize, __dec_obj188,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj189=type_78->mResultType,
        type_78->mResultType=(struct sType*)come_increment_ref_count(result_type);
        come_call_finalizer(sType_finalize, __dec_obj189,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj190=type_78->mParamTypes,
        type_78->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj190,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj191=type_78->mParamNames,
        type_78->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj191,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        type_78->mVarArgs=var_args;
        type_78->mExtern=extern_;
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    pointer_to_array_flag    ) {
        (come_push_stackframe("05type.c", 2593, 48),__exception_result_var_b49=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b49);
        skip_pointer_attribute(info);
        pointer_paren=0;
        paren_num=1;
        if(        *info->p==40        ) {
            pointer_paren=1;
            info->p++;
            skip_spaces_and_lf(info);
            paren_num++;
        }
        array_pointer_num=0;
        while(        *info->p==42||*info->p==94        ) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            array_pointer_num++;
        }
        skip_pointer_attribute(info);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj192=type_78,
        type_78=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));
        come_call_finalizer(sType_finalize, __dec_obj192,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(        type_78==((void*)0)        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj193=type_78,
            type_78=(struct sType*)come_increment_ref_count((come_push_stackframe("05type.c", 2619, 51),__exception_result_var_b52=(come_push_stackframe("05type.c", 2619, 49),__exception_result_var_b50=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2619, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name)),0,info,0), come_pop_stackframe(), __exception_result_var_b50), come_pop_stackframe(), __exception_result_var_b52));
            come_call_finalizer(sType_finalize, __dec_obj193,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        type_78->mConstant=type_78->mConstant||constant;
        type_78->mComplex=type_78->mComplex||complex_;
        type_78->mAtomic=type_78->mAtomic||atomic_;
        type_78->mThreadLocal=type_78->mThreadLocal||thread_local;
        __dec_obj194=type_78->mAlignas,
        type_78->mAlignas=(struct sNode*)come_increment_ref_count(alignas_);
        (__dec_obj194 ? __dec_obj194 = come_decrement_ref_count(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0,0, (void*)0) :0);
        type_78->mRegister=register_;
        type_78->mUnsigned=type_78->mUnsigned||unsigned_;
        type_78->mVolatile=volatile_;
        type_78->mUniq=type_78->mUniq||uniq_;
        type_78->mStatic=(type_78->mStatic||static_)&&!type_78->mUniq;
        type_78->mRecord=type_78->mRecord||record_;
        type_78->mExtern=type_78->mExtern||extern_;
        type_78->mInline=type_78->mInline||inline_;
        type_78->mRestrict=type_78->mRestrict||restrict_;
        type_78->mLongLong=type_78->mLongLong||long_long;
        type_78->mLong=type_78->mLong||long_;
        type_78->mShort=type_78->mShort||short_;
        type_78->mPointerNum+=pointer_num;
        type_78->mHeap=type_78->mHeap||heap;
        type_78->mChannel=type_78->mChannel||channel;
        __dec_obj195=type_78->mTupleName,
        type_78->mTupleName=(char*)come_increment_ref_count(tuple_name);
        __dec_obj195 = come_decrement_ref_count(__dec_obj195, (void*)0, (void*)0, 0,0, (void*)0);
        type_78->mDefferRightValue=type_78->mDefferRightValue||deffer_;
        if(        isalpha(*info->p)||*info->p==95        ) {
            __right_value0 = (void*)0;
            __dec_obj196=var_name_79,
            var_name_79=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj196 = come_decrement_ref_count(__dec_obj196, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else {
            __right_value0 = (void*)0;
            __dec_obj197=var_name_79,
            var_name_79=(char*)come_increment_ref_count(xsprintf(""));
            __dec_obj197 = come_decrement_ref_count(__dec_obj197, (void*)0, (void*)0, 0,0, (void*)0);
        }
        if(        *info->p==41        ) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_num--;
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        array=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "05type.c", 2657, "struct list$1sNode$ph*"))));
        while(        *info->p==91        ) {
            info->p++;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            node_105=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
            list$1sNode$ph_add(array,(struct sNode*)come_increment_ref_count(node_105));
            if(            *info->p==93            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            ((node_105) ? node_105 = come_decrement_ref_count(node_105, ((struct sNode*)node_105)->finalize, ((struct sNode*)node_105)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        if(        paren_num>0&&*info->p==41        ) {
            info->p++;
            skip_spaces_and_lf(info);
            __dec_obj198=type_78->mVarNameArrayNum,
            type_78->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(array);
            come_call_finalizer(list$1sNode$ph_finalize, __dec_obj198,(void*)0, (void*)0, 0, 0, 0, (void*)0);
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
            __current_stack1__.type_name = &type_name;
            __current_stack1__.record_ = &record_;
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
            __current_stack1__.alignas_ = &alignas_;
            __current_stack1__.union_attribute = &union_attribute;
            __current_stack1__.anonymous_type = &anonymous_type;
            __current_stack1__.anonymous_name = &anonymous_name;
            __current_stack1__.atomic_ = &atomic_;
            __current_stack1__.thread_local = &thread_local;
            __current_stack1__.attribute_77 = &attribute_77;
            __current_stack1__.pointer_num = &pointer_num;
            __current_stack1__.heap = &heap;
            __current_stack1__.refference = &refference;
            __current_stack1__.no_refference = &no_refference;
            __current_stack1__.channel = &channel;
            __current_stack1__.deffer_ = &deffer_;
            __current_stack1__.any_class = &any_class;
            __current_stack1__.vtable = &vtable;
            __current_stack1__.tuple_name = &tuple_name;
            __current_stack1__.lambda_flag = &lambda_flag;
            __current_stack1__.type_78 = &type_78;
            __current_stack1__.var_name_79 = &var_name_79;
            __current_stack1__.function_pointer_flag = &function_pointer_flag;
            __current_stack1__.pointer_to_array_flag = &pointer_to_array_flag;
            __current_stack1__.var_name_between_brace = &var_name_between_brace;
            })            ;            list$1sNode$ph_each(array,&__current_stack1__,(void*)method_block1_05typec);
        }
        while(        *info->p==91        ) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            *info->p==93            ) {
                info->p++;
                skip_spaces_and_lf(info);
                type_78->mArrayPointerType=1;
                break;
            }
            __right_value0 = (void*)0;
            node_106=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
            list$1sNode$ph_add(type_78->mArrayNum,(struct sNode*)come_increment_ref_count(node_106));
            if(            *info->p==93            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            ((node_106) ? node_106 = come_decrement_ref_count(node_106, ((struct sNode*)node_106)->finalize, ((struct sNode*)node_106)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        type_78->mArrayPointerNum=array_pointer_num;
        type_78->mPointerParen=pointer_paren;
        come_call_finalizer(list$1sNode$ph$p_finalize, array, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    function_pointer_flag    ) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        function_pointer_num=0;
        while(        *info->p==42||*info->p==94        ) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            function_pointer_num++;
        }
        skip_pointer_attribute(info);
        if(        __right_value0 = (void*)0,         ({(_conditional_value_X3=(((struct sType*)(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        _conditional_value_X3;})        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj199=result_type_107,
            result_type_107=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj199,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            __right_value0 = (void*)0;
            result_type_107->mClass=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,result_type_107->mClass->mName)));
            come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
        else if(        list$1char$ph_contained(info->generics_type_names,type_name)        ) {
            for(            i_108=0            ;            i_108<list$1char$ph_length(info->generics_type_names)            ;            i_108++            ){
                if(                __right_value0 = (void*)0,                 __right_value1 = (void*)0,                 ({(_conditional_value_X4=(string_operator_equals(((char*)(__right_value1=list$1char$ph_operator_load_element(info->generics_type_names,i_108))),type_name)));                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                _conditional_value_X4;})                ) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj200=result_type_107,
                    result_type_107=(struct sType*)come_increment_ref_count((come_push_stackframe("05type.c", 2731, 54),__exception_result_var_b55=(come_push_stackframe("05type.c", 2731, 52),__exception_result_var_b53=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2731, "struct sType*")),(char*)come_increment_ref_count(xsprintf("__generics_type%d",i_108)),0,info,0), come_pop_stackframe(), __exception_result_var_b53), come_pop_stackframe(), __exception_result_var_b55));
                    come_call_finalizer(sType_finalize, __dec_obj200,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        else if(        list$1char$ph_contained(info->method_generics_type_names,type_name)        ) {
            for(            i_109=0            ;            i_109<list$1char$ph_length(info->method_generics_type_names)            ;            i_109++            ){
                if(                __right_value0 = (void*)0,                 __right_value1 = (void*)0,                 ({(_conditional_value_X5=(string_operator_equals(((char*)(__right_value1=list$1char$ph_operator_load_element(info->method_generics_type_names,i_109))),type_name)));                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                _conditional_value_X5;})                ) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj201=result_type_107,
                    result_type_107=(struct sType*)come_increment_ref_count((come_push_stackframe("05type.c", 2738, 57),__exception_result_var_b58=(come_push_stackframe("05type.c", 2738, 55),__exception_result_var_b56=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2738, "struct sType*")),(char*)come_increment_ref_count(xsprintf("__mgenerics_type%d",i_109)),0,info,0), come_pop_stackframe(), __exception_result_var_b56), come_pop_stackframe(), __exception_result_var_b58));
                    come_call_finalizer(sType_finalize, __dec_obj201,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj202=result_type_107,
            result_type_107=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj202,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(            result_type_107==((void*)0)            ) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj203=result_type_107,
                result_type_107=(struct sType*)come_increment_ref_count((come_push_stackframe("05type.c", 2746, 60),__exception_result_var_b61=(come_push_stackframe("05type.c", 2746, 58),__exception_result_var_b59=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2746, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name)),0,info,0), come_pop_stackframe(), __exception_result_var_b59), come_pop_stackframe(), __exception_result_var_b61));
                come_call_finalizer(sType_finalize, __dec_obj203,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        result_type_107->mConstant=result_type_107->mConstant||constant;
        result_type_107->mComplex=result_type_107->mComplex||complex_;
        result_type_107->mAtomic=result_type_107->mAtomic||atomic_;
        result_type_107->mThreadLocal=result_type_107->mThreadLocal||thread_local;
        __dec_obj204=result_type_107->mAlignas,
        result_type_107->mAlignas=(struct sNode*)come_increment_ref_count(alignas_);
        (__dec_obj204 ? __dec_obj204 = come_decrement_ref_count(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0,0, (void*)0) :0);
        result_type_107->mRegister=register_;
        result_type_107->mUnsigned=result_type_107->mUnsigned||unsigned_;
        result_type_107->mVolatile=volatile_;
        result_type_107->mUniq=result_type_107->mUniq||uniq_;
        result_type_107->mStatic=(result_type_107->mStatic||static_)&&!result_type_107->mUniq;
        result_type_107->mRecord=result_type_107->mRecord||record_;
        result_type_107->mExtern=result_type_107->mExtern||extern_;
        result_type_107->mInline=result_type_107->mInline||inline_;
        result_type_107->mRestrict=result_type_107->mRestrict||restrict_;
        result_type_107->mLongLong=result_type_107->mLongLong||long_long;
        result_type_107->mLong=result_type_107->mLong||long_;
        result_type_107->mShort=result_type_107->mShort||short_;
        result_type_107->mPointerNum+=pointer_num;
        result_type_107->mHeap=result_type_107->mHeap||heap;
        result_type_107->mChannel=result_type_107->mChannel||channel;
        result_type_107->mDefferRightValue=result_type_107->mDefferRightValue||deffer_;
        paren_flag=0;
        if(        *info->p==40        ) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_flag=1;
        }
        array_pointer=0;
        while(        *info->p==42        ) {
            info->p++;
            skip_spaces_and_lf(info);
            array_pointer++;
        }
        if(        xisalnum(*info->p)||*info->p==95        ) {
            __right_value0 = (void*)0;
            __dec_obj205=var_name_79,
            var_name_79=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj205 = come_decrement_ref_count(__dec_obj205, (void*)0, (void*)0, 0,0, (void*)0);
            if(            !paren_flag&&*info->p==40            ) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __result_obj__144 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phint$*)(__right_value1=tuple3$3sType$phchar$phint$_initialize((struct tuple3$3sType$phchar$phint$*)come_increment_ref_count((struct tuple3$3sType$phchar$phint$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phint$)*(1), "05type.c", 2789, "struct tuple3$3sType$phchar$phint$")),(struct sType*)come_increment_ref_count(result_type_107),(char*)come_increment_ref_count(var_name_79),0))));
                come_call_finalizer(sType_finalize, result_type_107, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                (attribute_77 = come_decrement_ref_count(attribute_77, (void*)0, (void*)0, 0, 0, (void*)0));
                (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (var_name_79 = come_decrement_ref_count(var_name_79, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(tuple3$3sType$phchar$phint$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__144, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__144;
            }
        }
        else {
            static int num_anonymous_var_name_110=0;
            num_anonymous_var_name_110++;
            __right_value0 = (void*)0;
            __dec_obj206=var_name_79,
            var_name_79=(char*)come_increment_ref_count(xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_110));
            __dec_obj206 = come_decrement_ref_count(__dec_obj206, (void*)0, (void*)0, 0,0, (void*)0);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __dec_obj207=type_78,
        type_78=(struct sType*)come_increment_ref_count((come_push_stackframe("05type.c", 2798, 63),__exception_result_var_b64=(come_push_stackframe("05type.c", 2798, 61),__exception_result_var_b62=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2798, "struct sType*")),(char*)come_increment_ref_count(xsprintf("lambda")),0,info,0), come_pop_stackframe(), __exception_result_var_b62), come_pop_stackframe(), __exception_result_var_b64));
        come_call_finalizer(sType_finalize, __dec_obj207,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        while(        *info->p==91        ) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            *info->p==93            ) {
                info->p++;
                skip_spaces_and_lf(info);
                type_78->mArrayPointerType=1;
                break;
            }
            else {
                __right_value0 = (void*)0;
                node_111=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
                list$1sNode$ph_add(type_78->mArrayNum,(struct sNode*)come_increment_ref_count(node_111));
                if(                *info->p==93                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                ((node_111) ? node_111 = come_decrement_ref_count(node_111, ((struct sNode*)node_111)->finalize, ((struct sNode*)node_111)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
        }
        if(        paren_flag&&*info->p==41        ) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        while(        *info->p==91        ) {
            info->p++;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            node_112=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
            list$1sNode$ph_add(type_78->mArrayNum,(struct sNode*)come_increment_ref_count(node_112));
            if(            *info->p==93            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            ((node_112) ? node_112 = come_decrement_ref_count(node_112, ((struct sNode*)node_112)->finalize, ((struct sNode*)node_112)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        (come_push_stackframe("05type.c", 2840, 64),__exception_result_var_b65=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b65);
        __right_value0 = (void*)0;
        multiple_assign_var7=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)(__right_value0=parse_params(info,0)));
        param_types_113=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var7->v1);
        param_names_114=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var7->v2);
        param_default_parametors_115=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var7->v3);
        var_args_116=multiple_assign_var7->v4;
        come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __right_value0 = (void*)0;
        __dec_obj208=type_78->mResultType,
        type_78->mResultType=(struct sType*)come_increment_ref_count(sType_clone(result_type_107));
        come_call_finalizer(sType_finalize, __dec_obj208,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj209=type_78->mParamTypes,
        type_78->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types_113);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj209,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj210=type_78->mParamNames,
        type_78->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names_114);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj210,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        type_78->mVarArgs=var_args_116;
        type_78->mExtern=extern_;
        type_78->mFunctionPointerNum=function_pointer_num;
        type_78->mArrayPointerNum=array_pointer;
        come_call_finalizer(sType_finalize, result_type_107, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_114, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(        __right_value0 = (void*)0,         ({(_conditional_value_X6=(((struct sType*)(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        _conditional_value_X6;})        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj211=type_78,
            type_78=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj211,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            __right_value0 = (void*)0;
            type_78->mClass=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,type_78->mClass->mName)));
            come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            __right_value0 = (void*)0;
            t=((struct buffer*)(__right_value0=map$2char$phbuffer$ph_operator_load_element(info->typedef_definition,type_name)));
            come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            type_78->mOriginalTypePointerNum=pointer_num;
            type_78->mOriginalTypePointerHeap=heap;
            if(            type_78->mTypedef||t            ) {
                __right_value0 = (void*)0;
                __dec_obj212=type_78->mTypedefOriginalType,
                type_78->mTypedefOriginalType=(struct sType*)come_increment_ref_count(sType_clone(type_78));
                come_call_finalizer(sType_finalize, __dec_obj212,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            type_78->mConstant=type_78->mConstant||constant;
            type_78->mComplex=type_78->mComplex||complex_;
            type_78->mAtomic=type_78->mAtomic||atomic_;
            type_78->mThreadLocal=type_78->mThreadLocal||thread_local;
            __dec_obj213=type_78->mAlignas,
            type_78->mAlignas=(struct sNode*)come_increment_ref_count(alignas_);
            (__dec_obj213 ? __dec_obj213 = come_decrement_ref_count(__dec_obj213, ((struct sNode*)__dec_obj213)->finalize, ((struct sNode*)__dec_obj213)->_protocol_obj, 0,0, (void*)0) :0);
            type_78->mRegister=register_;
            type_78->mUnsigned=type_78->mUnsigned||unsigned_;
            type_78->mVolatile=volatile_;
            type_78->mUniq=type_78->mUniq||uniq_;
            type_78->mStatic=(type_78->mStatic||static_)&&!type_78->mUniq;
            type_78->mRecord=type_78->mRecord||record_;
            type_78->mExtern=type_78->mExtern||extern_;
            type_78->mInline=type_78->mInline||inline_;
            type_78->mRestrict=type_78->mRestrict||restrict_;
            type_78->mLongLong=type_78->mLongLong||long_long;
            type_78->mLong=type_78->mLong||long_;
            type_78->mShort=type_78->mShort||short_;
            if(            string_operator_equals(type_78->mClass->mName,"lambda")||list$1sNode$ph_length(type_78->mArrayNum)>0            ) {
                type_78->mArrayPointerNum+=pointer_num;
            }
            else {
                type_78->mPointerNum+=pointer_num;
            }
            type_78->mHeap=type_78->mHeap||heap;
            type_78->mChannel=type_78->mChannel||channel;
            type_78->mDefferRightValue=type_78->mDefferRightValue||deffer_;
            __dec_obj214=type_78->mTupleName,
            type_78->mTupleName=(char*)come_increment_ref_count(tuple_name);
            __dec_obj214 = come_decrement_ref_count(__dec_obj214, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(        list$1char$ph_contained(info->generics_type_names,type_name)        ) {
            for(            i_117=0            ;            i_117<list$1char$ph_length(info->generics_type_names)            ;            i_117++            ){
                if(                __right_value0 = (void*)0,                 __right_value1 = (void*)0,                 ({(_conditional_value_X7=(string_operator_equals(((char*)(__right_value1=list$1char$ph_operator_load_element(info->generics_type_names,i_117))),type_name)));                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                _conditional_value_X7;})                ) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj215=type_78,
                    type_78=(struct sType*)come_increment_ref_count((come_push_stackframe("05type.c", 2897, 67),__exception_result_var_b68=(come_push_stackframe("05type.c", 2897, 65),__exception_result_var_b66=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2897, "struct sType*")),(char*)come_increment_ref_count(xsprintf("__generics_type%d",i_117)),0,info,0), come_pop_stackframe(), __exception_result_var_b66), come_pop_stackframe(), __exception_result_var_b68));
                    come_call_finalizer(sType_finalize, __dec_obj215,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            type_78->mConstant=type_78->mConstant||constant;
            type_78->mComplex=type_78->mComplex||complex_;
            type_78->mAtomic=type_78->mAtomic||atomic_;
            type_78->mThreadLocal=type_78->mThreadLocal||thread_local;
            __dec_obj216=type_78->mAlignas,
            type_78->mAlignas=(struct sNode*)come_increment_ref_count(alignas_);
            (__dec_obj216 ? __dec_obj216 = come_decrement_ref_count(__dec_obj216, ((struct sNode*)__dec_obj216)->finalize, ((struct sNode*)__dec_obj216)->_protocol_obj, 0,0, (void*)0) :0);
            type_78->mRegister=register_;
            type_78->mUnsigned=type_78->mUnsigned||unsigned_;
            type_78->mVolatile=volatile_;
            type_78->mUniq=type_78->mUniq||uniq_;
            type_78->mStatic=(type_78->mStatic||static_)&&!type_78->mUniq;
            type_78->mRecord=type_78->mRecord||record_;
            type_78->mExtern=type_78->mExtern||extern_;
            type_78->mInline=type_78->mInline||inline_;
            type_78->mRestrict=type_78->mRestrict||restrict_;
            type_78->mLongLong=type_78->mLongLong||long_long;
            type_78->mLong=type_78->mLong||long_;
            type_78->mShort=type_78->mShort||short_;
            type_78->mPointerNum+=pointer_num;
            type_78->mHeap=type_78->mHeap||heap;
            type_78->mChannel=type_78->mChannel||channel;
            type_78->mDefferRightValue=type_78->mDefferRightValue||deffer_;
            __dec_obj217=type_78->mTupleName,
            type_78->mTupleName=(char*)come_increment_ref_count(tuple_name);
            __dec_obj217 = come_decrement_ref_count(__dec_obj217, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(        list$1char$ph_contained(info->method_generics_type_names,type_name)        ) {
            for(            i_118=0            ;            i_118<list$1char$ph_length(info->method_generics_type_names)            ;            i_118++            ){
                if(                __right_value0 = (void*)0,                 __right_value1 = (void*)0,                 ({(_conditional_value_X8=(string_operator_equals(((char*)(__right_value1=list$1char$ph_operator_load_element(info->method_generics_type_names,i_118))),type_name)));                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                _conditional_value_X8;})                ) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj218=type_78,
                    type_78=(struct sType*)come_increment_ref_count((come_push_stackframe("05type.c", 2927, 70),__exception_result_var_b71=(come_push_stackframe("05type.c", 2927, 68),__exception_result_var_b69=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2927, "struct sType*")),(char*)come_increment_ref_count(xsprintf("__mgenerics_type%d",i_118)),0,info,0), come_pop_stackframe(), __exception_result_var_b69), come_pop_stackframe(), __exception_result_var_b71));
                    come_call_finalizer(sType_finalize, __dec_obj218,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            type_78->mConstant=type_78->mConstant||constant;
            type_78->mComplex=type_78->mComplex||complex_;
            type_78->mAtomic=type_78->mAtomic||atomic_;
            type_78->mThreadLocal=type_78->mThreadLocal||thread_local;
            __dec_obj219=type_78->mAlignas,
            type_78->mAlignas=(struct sNode*)come_increment_ref_count(alignas_);
            (__dec_obj219 ? __dec_obj219 = come_decrement_ref_count(__dec_obj219, ((struct sNode*)__dec_obj219)->finalize, ((struct sNode*)__dec_obj219)->_protocol_obj, 0,0, (void*)0) :0);
            type_78->mRegister=register_;
            type_78->mUnsigned=type_78->mUnsigned||unsigned_;
            type_78->mVolatile=volatile_;
            type_78->mUniq=type_78->mUniq||uniq_;
            type_78->mStatic=(type_78->mStatic||static_)&&!type_78->mUniq;
            type_78->mRecord=type_78->mRecord||record_;
            type_78->mExtern=type_78->mExtern||extern_;
            type_78->mInline=type_78->mInline||inline_;
            type_78->mRestrict=type_78->mRestrict||restrict_;
            type_78->mLongLong=type_78->mLongLong||long_long;
            type_78->mLong=type_78->mLong||long_;
            type_78->mShort=type_78->mShort||short_;
            type_78->mPointerNum+=pointer_num;
            type_78->mHeap=type_78->mHeap||heap;
            type_78->mChannel=type_78->mChannel||channel;
            type_78->mDefferRightValue=type_78->mDefferRightValue||deffer_;
            __dec_obj220=type_78->mTupleName,
            type_78->mTupleName=(char*)come_increment_ref_count(tuple_name);
            __dec_obj220 = come_decrement_ref_count(__dec_obj220, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(        *info->p==60        ) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            __right_value0 = (void*)0,             __right_value1 = (void*)0,             __right_value2 = (void*)0,             ({(_conditional_value_X9=(((struct sClass*)(__right_value2=map$2char$phsClass$ph_operator_load_element(info->generics_classes,((char*)(__right_value1=__builtin_string(type_name))))))==((void*)0)));            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            come_call_finalizer(sClass_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            _conditional_value_X9;})            ) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __result_obj__155 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phint$*)(__right_value1=tuple3$3sType$phchar$phint$_initialize((struct tuple3$3sType$phchar$phint$*)come_increment_ref_count((struct tuple3$3sType$phchar$phint$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phint$)*(1), "05type.c", 2960, "struct tuple3$3sType$phchar$phint$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),0))));
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                (attribute_77 = come_decrement_ref_count(attribute_77, (void*)0, (void*)0, 0, 0, (void*)0));
                (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (var_name_79 = come_decrement_ref_count(var_name_79, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(tuple3$3sType$phchar$phint$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__155, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__155;
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj221=type_78,
            type_78=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj221,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(            type_78==((void*)0)            ) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj222=type_78,
                type_78=(struct sType*)come_increment_ref_count((come_push_stackframe("05type.c", 2968, 73),__exception_result_var_b74=(come_push_stackframe("05type.c", 2968, 71),__exception_result_var_b72=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2968, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name)),0,info,0), come_pop_stackframe(), __exception_result_var_b72), come_pop_stackframe(), __exception_result_var_b74));
                come_call_finalizer(sType_finalize, __dec_obj222,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            while(            1            ) {
                __right_value0 = (void*)0;
                multiple_assign_var8=(come_push_stackframe("05type.c", 2972, 75),__exception_result_var_b76=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,0,0,0))), come_pop_stackframe(), __exception_result_var_b76);
                generics_type=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                var_name_119=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                err_120=multiple_assign_var8->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(                !err_120                ) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __result_obj__156 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phint$*)(__right_value1=tuple3$3sType$phchar$phint$_initialize((struct tuple3$3sType$phchar$phint$*)come_increment_ref_count((struct tuple3$3sType$phchar$phint$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phint$)*(1), "05type.c", 2975, "struct tuple3$3sType$phchar$phint$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),0))));
                    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (var_name_119 = come_decrement_ref_count(var_name_119, (void*)0, (void*)0, 0, 0, (void*)0));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    (attribute_77 = come_decrement_ref_count(attribute_77, (void*)0, (void*)0, 0, 0, (void*)0));
                    (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, type_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (var_name_79 = come_decrement_ref_count(var_name_79, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(tuple3$3sType$phchar$phint$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__156, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                    return __result_obj__156;
                }
                list$1sType$ph_push_back(type_78->mGenericsTypes,(struct sType*)come_increment_ref_count(generics_type));
                if(                *info->p==44                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==62                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (var_name_119 = come_decrement_ref_count(var_name_119, (void*)0, (void*)0, 0, 0, (void*)0));
                    break;
                }
                else {
                    err_msg(info,"invalid generics type(%c)(%c)(%c)",*info->p,*(info->p+1),*(info->p+2));
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __result_obj__157 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phint$*)(__right_value1=tuple3$3sType$phchar$phint$_initialize((struct tuple3$3sType$phchar$phint$*)come_increment_ref_count((struct tuple3$3sType$phchar$phint$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phint$)*(1), "05type.c", 2992, "struct tuple3$3sType$phchar$phint$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),0))));
                    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (var_name_119 = come_decrement_ref_count(var_name_119, (void*)0, (void*)0, 0, 0, (void*)0));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    (attribute_77 = come_decrement_ref_count(attribute_77, (void*)0, (void*)0, 0, 0, (void*)0));
                    (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, type_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (var_name_79 = come_decrement_ref_count(var_name_79, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(tuple3$3sType$phchar$phint$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__157, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                    return __result_obj__157;
                }
                come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (var_name_119 = come_decrement_ref_count(var_name_119, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            if(            is_contained_generics_class(type_78,info)            ) {
                __right_value0 = (void*)0;
                __dec_obj223=type_78,
                type_78=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type_78),(struct sType*)come_increment_ref_count(info->generics_type),info));
                come_call_finalizer(sType_finalize, __dec_obj223,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(                !output_generics_struct((struct sType*)come_increment_ref_count(type_78),(struct sType*)come_increment_ref_count(type_78),info)                ) {
                    __right_value0 = (void*)0;
                    new_name=(char*)come_increment_ref_count(create_generics_name(type_78,info));
                    printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name);
                    exit(7);
                    (new_name = come_decrement_ref_count(new_name, (void*)0, (void*)0, 0, 0, (void*)0));
                }
            }
            type_78->mConstant=type_78->mConstant||constant;
            type_78->mComplex=type_78->mComplex||complex_;
            type_78->mAtomic=type_78->mAtomic||atomic_;
            type_78->mThreadLocal=type_78->mThreadLocal||thread_local;
            __dec_obj224=type_78->mAlignas,
            type_78->mAlignas=(struct sNode*)come_increment_ref_count(alignas_);
            (__dec_obj224 ? __dec_obj224 = come_decrement_ref_count(__dec_obj224, ((struct sNode*)__dec_obj224)->finalize, ((struct sNode*)__dec_obj224)->_protocol_obj, 0,0, (void*)0) :0);
            type_78->mRegister=register_;
            type_78->mUnsigned=type_78->mUnsigned||unsigned_;
            type_78->mVolatile=volatile_;
            type_78->mUniq=type_78->mUniq||uniq_;
            type_78->mStatic=(type_78->mStatic||static_)&&!type_78->mUniq;
            type_78->mRecord=type_78->mRecord||record_;
            type_78->mExtern=type_78->mExtern||extern_;
            type_78->mInline=type_78->mInline||inline_;
            type_78->mRestrict=type_78->mRestrict||restrict_;
            type_78->mLongLong=type_78->mLongLong||long_long;
            type_78->mLong=type_78->mLong||long_;
            type_78->mShort=type_78->mShort||short_;
            type_78->mPointerNum+=pointer_num;
            type_78->mHeap=type_78->mHeap||heap;
            type_78->mChannel=type_78->mChannel||channel;
            type_78->mDefferRightValue=type_78->mDefferRightValue||deffer_;
            __dec_obj225=type_78->mTupleName,
            type_78->mTupleName=(char*)come_increment_ref_count(tuple_name);
            __dec_obj225 = come_decrement_ref_count(__dec_obj225, (void*)0, (void*)0, 0,0, (void*)0);
            __dec_obj226=type_name,
            type_name=(char*)come_increment_ref_count(type_78->mClass->mName);
            __dec_obj226 = come_decrement_ref_count(__dec_obj226, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else {
            if(            struct_            ) {
                __right_value0 = (void*)0;
                klass=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,type_name)));
                come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(                klass==((void*)0)&&*info->p!=60                ) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "05type.c", 3038, "struct sClass*")),(char*)come_increment_ref_count(__builtin_string(type_name)),0,0,0,0,0,1,0,-1,-1,0,0,0,info)));
                }
            }
            if(            union_            ) {
                __right_value0 = (void*)0;
                klass_130=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,type_name)));
                come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(                klass_130==((void*)0)&&*info->p!=60                ) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __right_value3 = (void*)0;
                    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "05type.c", 3045, "struct sClass*")),(char*)come_increment_ref_count(__builtin_string(type_name)),0,1,0,0,0,0,0,-1,-1,0,0,0,info)));
                }
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj227=type_78,
            type_78=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj227,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(            type_78==((void*)0)            ) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj228=type_78,
                type_78=(struct sType*)come_increment_ref_count((come_push_stackframe("05type.c", 3054, 78),__exception_result_var_b79=(come_push_stackframe("05type.c", 3054, 76),__exception_result_var_b77=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 3054, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name)),0,info,0), come_pop_stackframe(), __exception_result_var_b77), come_pop_stackframe(), __exception_result_var_b79));
                come_call_finalizer(sType_finalize, __dec_obj228,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            type_78->mConstant=type_78->mConstant||constant;
            type_78->mComplex=type_78->mComplex||complex_;
            type_78->mAtomic=type_78->mAtomic||atomic_;
            type_78->mThreadLocal=type_78->mThreadLocal||thread_local;
            __dec_obj229=type_78->mAlignas,
            type_78->mAlignas=(struct sNode*)come_increment_ref_count(alignas_);
            (__dec_obj229 ? __dec_obj229 = come_decrement_ref_count(__dec_obj229, ((struct sNode*)__dec_obj229)->finalize, ((struct sNode*)__dec_obj229)->_protocol_obj, 0,0, (void*)0) :0);
            type_78->mRegister=register_;
            type_78->mUnsigned=type_78->mUnsigned||unsigned_;
            type_78->mVolatile=volatile_;
            type_78->mUniq=type_78->mUniq||uniq_;
            type_78->mStatic=(type_78->mStatic||static_)&&!type_78->mUniq;
            type_78->mRecord=type_78->mRecord||record_;
            type_78->mExtern=type_78->mExtern||extern_;
            type_78->mInline=type_78->mInline||inline_;
            type_78->mRestrict=type_78->mRestrict||restrict_;
            type_78->mLongLong=type_78->mLongLong||long_long;
            type_78->mLong=type_78->mLong||long_;
            type_78->mShort=type_78->mShort||short_;
            type_78->mPointerNum+=pointer_num;
            type_78->mHeap=type_78->mHeap||heap;
            type_78->mChannel=type_78->mChannel||channel;
            type_78->mDefferRightValue=type_78->mDefferRightValue||deffer_;
            __dec_obj230=type_78->mTupleName,
            type_78->mTupleName=(char*)come_increment_ref_count(tuple_name);
            __dec_obj230 = come_decrement_ref_count(__dec_obj230, (void*)0, (void*)0, 0,0, (void*)0);
        }
        skip_pointer_attribute(info);
        while(        1        ) {
            if(            *info->p==42            ) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_78->mPointerNum++;
                type_78->mOriginalTypePointerNum++;
                if(                type_78->mNoSolvedGenericsType                ) {
                    type_78->mNoSolvedGenericsType->mPointerNum++;
                }
            }
            else if(            *info->p==37            ) {
                info->p++;
                skip_spaces_and_lf(info);
                type_78->mHeap=1;
                if(                type_78->mNoSolvedGenericsType                ) {
                    type_78->mNoSolvedGenericsType->mHeap=1;
                }
            }
            else if(            *info->p==38            ) {
                info->p++;
                skip_spaces_and_lf(info);
                type_78->mNoHeap=1;
                if(                type_78->mNoSolvedGenericsType                ) {
                    type_78->mNoSolvedGenericsType->mHeap=0;
                }
            }
            else if(            *info->p==96            ) {
                info->p++;
                skip_spaces_and_lf(info);
                type_78->mNoCallingDestructor=1;
            }
            else {
                break;
            }
        }
        skip_pointer_attribute(info);
        while(        1        ) {
            if(            *info->p==42            ) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_78->mPointerNum++;
                if(                type_78->mNoSolvedGenericsType                ) {
                    type_78->mNoSolvedGenericsType->mPointerNum++;
                }
            }
            else if(            *info->p==37            ) {
                info->p++;
                skip_spaces_and_lf(info);
                type_78->mHeap=1;
                if(                type_78->mNoSolvedGenericsType                ) {
                    type_78->mNoSolvedGenericsType->mHeap=1;
                }
            }
            else if(            *info->p==126            ) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_78->mDefferRightValue=1;
                if(                type_78->mNoSolvedGenericsType                ) {
                    type_78->mNoSolvedGenericsType->mDefferRightValue=1;
                }
            }
            else if(            gComePthread&&*info->p==64            ) {
                info->p++;
                skip_spaces_and_lf(info);
                type_78->mChannel=1;
                if(                type_78->mNoSolvedGenericsType                ) {
                    type_78->mNoSolvedGenericsType->mChannel=1;
                }
            }
            else if(            *info->p==96            ) {
                info->p++;
                skip_spaces_and_lf(info);
                type_78->mNoCallingDestructor=1;
                if(                type_78->mNoSolvedGenericsType                ) {
                    type_78->mNoSolvedGenericsType->mNoCallingDestructor=1;
                }
            }
            else {
                break;
            }
        }
        if(        parse_multiple_type&&*info->p==44&&!info->in_offsetof        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05type.c", 3185, "struct list$1sType$ph*"))));
            __right_value0 = (void*)0;
            list$1sType$ph_push_back(types,(struct sType*)come_increment_ref_count(sType_clone(type_78)));
            while(            *info->p==44            ) {
                info->p++;
                skip_spaces_and_lf(info);
                __right_value0 = (void*)0;
                multiple_assign_var9=(come_push_stackframe("05type.c", 3193, 80),__exception_result_var_b81=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,0,0,0))), come_pop_stackframe(), __exception_result_var_b81);
                type2=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                name_131=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                err_132=multiple_assign_var9->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(                !err_132                ) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __result_obj__179 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phint$*)(__right_value1=tuple3$3sType$phchar$phint$_initialize((struct tuple3$3sType$phchar$phint$*)come_increment_ref_count((struct tuple3$3sType$phchar$phint$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phint$)*(1), "05type.c", 3196, "struct tuple3$3sType$phchar$phint$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),0))));
                    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (name_131 = come_decrement_ref_count(name_131, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    (attribute_77 = come_decrement_ref_count(attribute_77, (void*)0, (void*)0, 0, 0, (void*)0));
                    (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, type_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (var_name_79 = come_decrement_ref_count(var_name_79, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(tuple3$3sType$phchar$phint$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__179, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                    return __result_obj__179;
                }
                __right_value0 = (void*)0;
                list$1sType$ph_push_back(types,(struct sType*)come_increment_ref_count(sType_clone(type2)));
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name_131 = come_decrement_ref_count(name_131, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            if(            *info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            num_tuples=list$1sType$ph_length(types);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj231=type_78,
            type_78=(struct sType*)come_increment_ref_count((come_push_stackframe("05type.c", 3209, 83),__exception_result_var_b84=(come_push_stackframe("05type.c", 3209, 81),__exception_result_var_b82=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 3209, "struct sType*")),(char*)come_increment_ref_count(xsprintf("tuple%d",num_tuples)),0,info,0), come_pop_stackframe(), __exception_result_var_b82), come_pop_stackframe(), __exception_result_var_b84));
            come_call_finalizer(sType_finalize, __dec_obj231,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            type_78->mPointerNum++;
            type_78->mHeap=1;
            for(            o2_saved=(struct list$1sType$ph*)come_increment_ref_count(types),it=list$1sType$ph_begin(o2_saved)            ;            !list$1sType$ph_end(o2_saved)            ;            it=list$1sType$ph_next(o2_saved)            ){
                __right_value0 = (void*)0;
                list$1sType$ph_push_back(type_78->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value0=sType_clone(it))))));
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
            come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            while(            1            ) {
                if(                *info->p==42                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    type_78->mPointerNum++;
                    if(                    type_78->mNoSolvedGenericsType                    ) {
                        type_78->mNoSolvedGenericsType->mPointerNum++;
                    }
                }
                else if(                *info->p==37                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_78->mHeap=1;
                    if(                    type_78->mNoSolvedGenericsType                    ) {
                        type_78->mNoSolvedGenericsType->mHeap=1;
                    }
                }
                else if(                *info->p==126                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    type_78->mDefferRightValue=1;
                    if(                    type_78->mNoSolvedGenericsType                    ) {
                        type_78->mNoSolvedGenericsType->mDefferRightValue=1;
                    }
                }
                else if(                gComePthread&&*info->p==64                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_78->mChannel=1;
                    if(                    type_78->mNoSolvedGenericsType                    ) {
                        type_78->mNoSolvedGenericsType->mChannel=1;
                    }
                }
                else if(                *info->p==96                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_78->mNoCallingDestructor=1;
                    if(                    type_78->mNoSolvedGenericsType                    ) {
                        type_78->mNoSolvedGenericsType->mNoCallingDestructor=1;
                    }
                }
                else {
                    break;
                }
            }
            if(            is_contained_generics_class(type_78,info)            ) {
                __right_value0 = (void*)0;
                __dec_obj232=type_78,
                type_78=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type_78),(struct sType*)come_increment_ref_count(info->generics_type),info));
                come_call_finalizer(sType_finalize, __dec_obj232,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(                !output_generics_struct((struct sType*)come_increment_ref_count(type_78),(struct sType*)come_increment_ref_count(type_78),info)                ) {
                    __right_value0 = (void*)0;
                    new_name_133=(char*)come_increment_ref_count(create_generics_name(type_78,info));
                    printf("output generics is failed(%s)\n",new_name_133);
                    exit(9);
                    (new_name_133 = come_decrement_ref_count(new_name_133, (void*)0, (void*)0, 0, 0, (void*)0));
                }
            }
            type_78->mMultipleTypes=1;
            __dec_obj233=type_name,
            type_name=(char*)come_increment_ref_count(type_78->mClass->mName);
            __dec_obj233 = come_decrement_ref_count(__dec_obj233, (void*)0, (void*)0, 0,0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        __right_value0 = (void*)0;
        attribute_134=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_134,"")        ) {
            __dec_obj234=type_78->mAttribute,
            type_78->mAttribute=(char*)come_increment_ref_count(attribute_134);
            __dec_obj234 = come_decrement_ref_count(__dec_obj234, (void*)0, (void*)0, 0,0, (void*)0);
        }
        if(        parse_variable_name        ) {
            if(            var_name_between_brace&&*info->p==40            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58            ) {
                __right_value0 = (void*)0;
                __dec_obj235=var_name_79,
                var_name_79=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj235 = come_decrement_ref_count(__dec_obj235, (void*)0, (void*)0, 0,0, (void*)0);
            }
            else if(            anonymous_name            ) {
                static int num_anonymous_var_name_135=0;
                num_anonymous_var_name_135++;
                __right_value0 = (void*)0;
                __dec_obj236=var_name_79,
                var_name_79=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_135));
                __dec_obj236 = come_decrement_ref_count(__dec_obj236, (void*)0, (void*)0, 0,0, (void*)0);
                type_78->mAnonymousVarName=1;
            }
            else if(            xisalnum(*info->p)||*info->p==95            ) {
                __right_value0 = (void*)0;
                __dec_obj237=var_name_79,
                var_name_79=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj237 = come_decrement_ref_count(__dec_obj237, (void*)0, (void*)0, 0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_136=0;
                num_anonymous_var_name_136++;
                __right_value0 = (void*)0;
                __dec_obj238=var_name_79,
                var_name_79=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_136));
                __dec_obj238 = come_decrement_ref_count(__dec_obj238, (void*)0, (void*)0, 0,0, (void*)0);
                type_78->mAnonymousVarName=1;
            }
            if(            var_name_between_brace&&*info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58            ) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_137=info->no_comma;
                info->no_comma=1;
                __right_value0 = (void*)0;
                node_138=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
                info->no_comma=no_comma_137;
                __dec_obj239=type_78->mSizeNum,
                type_78->mSizeNum=(struct sNode*)come_increment_ref_count(node_138);
                (__dec_obj239 ? __dec_obj239 = come_decrement_ref_count(__dec_obj239, ((struct sNode*)__dec_obj239)->finalize, ((struct sNode*)__dec_obj239)->_protocol_obj, 0,0, (void*)0) :0);
                ((node_138) ? node_138 = come_decrement_ref_count(node_138, ((struct sNode*)node_138)->finalize, ((struct sNode*)node_138)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            __right_value0 = (void*)0;
            attribute2_139=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_134,"")&&string_operator_not_equals(attribute2_139,"")            ) {
                __dec_obj240=type_78->mAttribute,
                type_78->mAttribute=(char*)come_increment_ref_count(attribute_134);
                __dec_obj240 = come_decrement_ref_count(__dec_obj240, (void*)0, (void*)0, 0,0, (void*)0);
                __dec_obj241=type_78->mVarAttribute,
                type_78->mVarAttribute=(char*)come_increment_ref_count(attribute2_139);
                __dec_obj241 = come_decrement_ref_count(__dec_obj241, (void*)0, (void*)0, 0,0, (void*)0);
            }
            else if(            string_operator_not_equals(attribute2_139,"")            ) {
                __dec_obj242=type_78->mVarAttribute,
                type_78->mVarAttribute=(char*)come_increment_ref_count(attribute2_139);
                __dec_obj242 = come_decrement_ref_count(__dec_obj242, (void*)0, (void*)0, 0,0, (void*)0);
            }
            (attribute2_139 = come_decrement_ref_count(attribute2_139, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        (attribute_134 = come_decrement_ref_count(attribute_134, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    parse_sharp_v5(info);
    array_num_typedef=((void*)0);
    if(    list$1sNode$ph_length(type_78->mArrayNum)>0    ) {
        __right_value0 = (void*)0;
        __dec_obj243=array_num_typedef,
        array_num_typedef=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(type_78->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj243,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        list$1sNode$ph_reset(type_78->mArrayNum);
    }
    while(    *info->p==91    ) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        array_static=0;
        array_restrict=0;
        while(        1        ) {
            if(            parsecmp("static",info)            ) {
                info->p+=strlen("static");
                skip_spaces_and_lf(info);
                array_static=1;
            }
            else if(            parsecmp("restrict",info)            ) {
                info->p+=strlen("restrict");
                skip_spaces_and_lf(info);
                array_restrict=1;
            }
            else {
                break;
            }
        }
        skip_pointer_attribute(info);
        if(        *info->p==93        ) {
            info->p++;
            skip_spaces_and_lf(info);
            type_78->mArrayPointerType=1;
            break;
        }
        parse_sharp_v5(info);
        __right_value0 = (void*)0;
        node_140=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
        list$1sNode$ph_push_back(type_78->mArrayNum,(struct sNode*)come_increment_ref_count(node_140));
        list$1int$_push_back(type_78->mArrayStatic,array_static);
        list$1int$_push_back(type_78->mArrayRestrict,array_restrict);
        parse_sharp_v5(info);
        (come_push_stackframe("05type.c", 3398, 84),__exception_result_var_b85=expected_next_character(93,info), come_pop_stackframe(), __exception_result_var_b85);
        ((node_140) ? node_140 = come_decrement_ref_count(node_140, ((struct sNode*)node_140)->finalize, ((struct sNode*)node_140)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(    array_num_typedef    ) {
        ({        __current_stack2__.info = &info;
        __current_stack2__.parse_variable_name = &parse_variable_name;
        __current_stack2__.parse_multiple_type = &parse_multiple_type;
        __current_stack2__.in_function_parametor = &in_function_parametor;
        __current_stack2__.head = &head;
        __current_stack2__.head_sline = &head_sline;
        __current_stack2__.type_name = &type_name;
        __current_stack2__.record_ = &record_;
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
        __current_stack2__.alignas_ = &alignas_;
        __current_stack2__.union_attribute = &union_attribute;
        __current_stack2__.anonymous_type = &anonymous_type;
        __current_stack2__.anonymous_name = &anonymous_name;
        __current_stack2__.atomic_ = &atomic_;
        __current_stack2__.thread_local = &thread_local;
        __current_stack2__.attribute_77 = &attribute_77;
        __current_stack2__.pointer_num = &pointer_num;
        __current_stack2__.heap = &heap;
        __current_stack2__.refference = &refference;
        __current_stack2__.no_refference = &no_refference;
        __current_stack2__.channel = &channel;
        __current_stack2__.deffer_ = &deffer_;
        __current_stack2__.any_class = &any_class;
        __current_stack2__.vtable = &vtable;
        __current_stack2__.tuple_name = &tuple_name;
        __current_stack2__.lambda_flag = &lambda_flag;
        __current_stack2__.type_78 = &type_78;
        __current_stack2__.var_name_79 = &var_name_79;
        __current_stack2__.function_pointer_flag = &function_pointer_flag;
        __current_stack2__.pointer_to_array_flag = &pointer_to_array_flag;
        __current_stack2__.var_name_between_brace = &var_name_between_brace;
        __current_stack2__.array_num_typedef = &array_num_typedef;
        })        ;        list$1sNode$ph_each(type_78->mArrayNum,&__current_stack2__,(void*)method_block2_05typec);
        list$1sNode$ph_reset(type_78->mArrayNum);
        ({        __current_stack3__.info = &info;
        __current_stack3__.parse_variable_name = &parse_variable_name;
        __current_stack3__.parse_multiple_type = &parse_multiple_type;
        __current_stack3__.in_function_parametor = &in_function_parametor;
        __current_stack3__.head = &head;
        __current_stack3__.head_sline = &head_sline;
        __current_stack3__.type_name = &type_name;
        __current_stack3__.record_ = &record_;
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
        __current_stack3__.alignas_ = &alignas_;
        __current_stack3__.union_attribute = &union_attribute;
        __current_stack3__.anonymous_type = &anonymous_type;
        __current_stack3__.anonymous_name = &anonymous_name;
        __current_stack3__.atomic_ = &atomic_;
        __current_stack3__.thread_local = &thread_local;
        __current_stack3__.attribute_77 = &attribute_77;
        __current_stack3__.pointer_num = &pointer_num;
        __current_stack3__.heap = &heap;
        __current_stack3__.refference = &refference;
        __current_stack3__.no_refference = &no_refference;
        __current_stack3__.channel = &channel;
        __current_stack3__.deffer_ = &deffer_;
        __current_stack3__.any_class = &any_class;
        __current_stack3__.vtable = &vtable;
        __current_stack3__.tuple_name = &tuple_name;
        __current_stack3__.lambda_flag = &lambda_flag;
        __current_stack3__.type_78 = &type_78;
        __current_stack3__.var_name_79 = &var_name_79;
        __current_stack3__.function_pointer_flag = &function_pointer_flag;
        __current_stack3__.pointer_to_array_flag = &pointer_to_array_flag;
        __current_stack3__.var_name_between_brace = &var_name_between_brace;
        __current_stack3__.array_num_typedef = &array_num_typedef;
        })        ;        list$1sNode$ph_each(array_num_typedef,&__current_stack3__,(void*)method_block3_05typec);
    }
    __right_value0 = (void*)0;
    multiple_assign_var10=((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
    asm_name=(char*)come_increment_ref_count(multiple_assign_var10->v1);
    attribute2_143=(char*)come_increment_ref_count(multiple_assign_var10->v2);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(    string_operator_not_equals(attribute2_143,"")    ) {
        __dec_obj244=type_78->mAttribute,
        type_78->mAttribute=(char*)come_increment_ref_count(attribute2_143);
        __dec_obj244 = come_decrement_ref_count(__dec_obj244, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __dec_obj245=type_78->mAsmName,
    type_78->mAsmName=(char*)come_increment_ref_count(asm_name);
    __dec_obj245 = come_decrement_ref_count(__dec_obj245, (void*)0, (void*)0, 0,0, (void*)0);
    parse_sharp_v5(info);
    if(    type_78->mChannel    ) {
        __right_value0 = (void*)0;
        type_before=(struct sType*)come_increment_ref_count(sType_clone(type_78));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __dec_obj246=type_78,
        type_78=(struct sType*)come_increment_ref_count((come_push_stackframe("05type.c", 3422, 87),__exception_result_var_b88=(come_push_stackframe("05type.c", 3422, 85),__exception_result_var_b86=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 3422, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),0,info,0), come_pop_stackframe(), __exception_result_var_b86), come_pop_stackframe(), __exception_result_var_b88));
        come_call_finalizer(sType_finalize, __dec_obj246,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __dec_obj247=type_78->mArrayNum,
        type_78->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count((__list_values1__[0]=((struct sNode*)(__right_value1=create_int_node((char*)come_increment_ref_count(xsprintf("2")),info))),
list$1sNode$ph_initialize_with_values((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "05type.c", 3423, "struct list$1sNode$ph")),1,__list_values1__)));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj247,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        __dec_obj248=type_78->mChannelType,
        type_78->mChannelType=(struct sType*)come_increment_ref_count(type_before);
        come_call_finalizer(sType_finalize, __dec_obj248,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        type_78->mChannel=1;
        come_call_finalizer(sType_finalize, type_before, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    string_operator_not_equals(attribute_77,"")    ) {
        __dec_obj249=type_78->mAttribute,
        type_78->mAttribute=(char*)come_increment_ref_count(attribute_77);
        __dec_obj249 = come_decrement_ref_count(__dec_obj249, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__185 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phint$*)(__right_value1=tuple3$3sType$phchar$phint$_initialize((struct tuple3$3sType$phchar$phint$*)come_increment_ref_count((struct tuple3$3sType$phchar$phint$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phint$)*(1), "05type.c", 3432, "struct tuple3$3sType$phchar$phint$")),(struct sType*)come_increment_ref_count(type_78),(char*)come_increment_ref_count(var_name_79),1))));
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    (attribute_77 = come_decrement_ref_count(attribute_77, (void*)0, (void*)0, 0, 0, (void*)0));
    (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, type_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (var_name_79 = come_decrement_ref_count(var_name_79, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(list$1sNode$ph$p_finalize, array_num_typedef, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (asm_name = come_decrement_ref_count(asm_name, (void*)0, (void*)0, 0, 0, (void*)0));
    (attribute2_143 = come_decrement_ref_count(attribute2_143, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(tuple3$3sType$phchar$phint$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__185, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__185;
}

static struct tuple3$3sType$phchar$phint$* tuple3$3sType$phchar$phint$_initialize(struct tuple3$3sType$phchar$phint$* self, struct sType* v1, char* v2, int v3){
struct sType* __dec_obj114;
char* __dec_obj115;
struct tuple3$3sType$phchar$phint$* __result_obj__124;
    __dec_obj114=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer(sType_finalize, __dec_obj114,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj115=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0, (void*)0);
    self->v3=v3;
    __result_obj__124 = (struct tuple3$3sType$phchar$phint$*)come_increment_ref_count(self);
    come_call_finalizer(tuple3$3sType$phchar$phint$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(tuple3$3sType$phchar$phint$$p_finalize, __result_obj__124, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__124;
}

static void tuple3$3sType$phchar$phint$$p_finalize(struct tuple3$3sType$phchar$phint$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static int list$1char$ph_length(struct list$1char$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
char* default_value;
char* __result_obj__136;
struct list_item$1char$ph* it;
int i;
char* __result_obj__137;
char* default_value_102;
char* __result_obj__138;
    if(    self==((void*)0)    ) {
        memset(&default_value,0,sizeof(char*));
        __result_obj__136 = (char*)come_increment_ref_count(default_value);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
        (__result_obj__136 = come_decrement_ref_count(__result_obj__136, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__136;
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    position<0    ) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(    it!=((void*)0)    ) {
        if(        position==i        ) {
            __result_obj__137 = (char*)come_increment_ref_count(it->item);
            (__result_obj__137 = come_decrement_ref_count(__result_obj__137, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__137;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_102,0,sizeof(char*));
    __result_obj__138 = (char*)come_increment_ref_count(default_value_102);
    (default_value_102 = come_decrement_ref_count(default_value_102, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__138 = come_decrement_ref_count(__result_obj__138, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__138;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
char* default_value;
char* __result_obj__139;
struct list_item$1char$ph* it;
int i;
char* __result_obj__140;
char* default_value_103;
char* __result_obj__141;
    if(    self==((void*)0)    ) {
        memset(&default_value,0,sizeof(char*));
        __result_obj__139 = (char*)come_increment_ref_count(default_value);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
        (__result_obj__139 = come_decrement_ref_count(__result_obj__139, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__139;
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    position<0    ) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(    it!=((void*)0)    ) {
        if(        position==i        ) {
            __result_obj__140 = (char*)come_increment_ref_count(it->item);
            (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__140;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_103,0,sizeof(char*));
    __result_obj__141 = (char*)come_increment_ref_count(default_value_103);
    (default_value_103 = come_decrement_ref_count(default_value_103, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__141;
}

static struct list$1sNode$ph* list$1sNode$ph_each(struct list$1sNode$ph* self, void* parent, void (*block)(void*,struct sNode*,int,_Bool*)){
struct list$1sNode$ph* __result_obj__142;
struct list_item$1sNode$ph* it;
int i;
_Bool end_flag;
struct list$1sNode$ph* __result_obj__143;
    if(    self==((void*)0)    ) {
        __result_obj__142 = ((void*)0);
        return __result_obj__142;
    }
    it=self->head;
    i=0;
    while(    it!=((void*)0)    ) {
        end_flag=0;
        block(parent,(struct sNode*)come_increment_ref_count(it->item),i,&end_flag);
        if(        end_flag==1        ) {
            break;
        }
        it=it->next;
        i++;
    }
    __result_obj__143 = self;
    return __result_obj__143;
}

void method_block1_05typec(struct __current_stack1__* parent, struct sNode* it, int it2, _Bool* it3){
void* __right_value0 = (void*)0;
    list$1sNode$ph_add((*(parent->type_78))->mArrayNum,(struct sNode*)come_increment_ref_count(sNode_clone(it)));
    ((it) ? it = come_decrement_ref_count(it, ((struct sNode*)it)->finalize, ((struct sNode*)it)->_protocol_obj, 0, 0,(void*)0):(void*)0);
}

static struct buffer* map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char* key){
struct buffer* default_value;
struct buffer* __result_obj__145;
unsigned int hash;
unsigned int it;
struct buffer* __result_obj__146;
struct buffer* __result_obj__147;
struct buffer* __result_obj__148;
struct buffer* __result_obj__149;
    memset(&default_value,0,sizeof(struct buffer*));
    if(    self==((void*)0)    ) {
        __result_obj__145 = (struct buffer*)come_increment_ref_count(default_value);
        come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__145, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__145;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__146 = (struct buffer*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__146, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__146;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__147 = (struct buffer*)come_increment_ref_count(default_value);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__147, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__147;
            }
        }
        else {
            __result_obj__148 = (struct buffer*)come_increment_ref_count(default_value);
            come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(buffer_finalize, __result_obj__148, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__148;
        }
    }
    __result_obj__149 = (struct buffer*)come_increment_ref_count(default_value);
    come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__149, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__149;
}

static struct buffer* map$2char$phbuffer$ph_operator_load_element(struct map$2char$phbuffer$ph* self, char* key){
struct buffer* default_value;
struct buffer* __result_obj__150;
unsigned int hash;
unsigned int it;
struct buffer* __result_obj__151;
struct buffer* __result_obj__152;
struct buffer* __result_obj__153;
struct buffer* __result_obj__154;
    memset(&default_value,0,sizeof(struct buffer*));
    if(    self==((void*)0)    ) {
        __result_obj__150 = (struct buffer*)come_increment_ref_count(default_value);
        come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__150, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__150;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__151 = (struct buffer*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__151, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__151;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__152 = (struct buffer*)come_increment_ref_count(default_value);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__152, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__152;
            }
        }
        else {
            __result_obj__153 = (struct buffer*)come_increment_ref_count(default_value);
            come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(buffer_finalize, __result_obj__153, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__153;
        }
    }
    __result_obj__154 = (struct buffer*)come_increment_ref_count(default_value);
    come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__154, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__154;
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
struct map$2char$phsClass$ph* __result_obj__158;
unsigned int hash;
unsigned int it;
_Bool same_key_exist;
char* it2;
struct map$2char$phsClass$ph* __result_obj__178;
    if(    self==((void*)0)    ) {
        __result_obj__158 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sClass_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__158;
    }
    if(    self->len*10>=self->size    ) {
        map$2char$phsClass$ph_rehash(self);
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                if(                1                ) {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    self->keys[it]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=key;
                }
                if(                1                ) {
                    come_call_finalizer(sClass_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it]=(struct sClass*)come_increment_ref_count(item);
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
            self->item_existance[it]=1;
            if(            1            ) {
                self->keys[it]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it]=key;
            }
            if(            1            ) {
                self->items[it]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist=0;
    for(    it2=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2,key)        ) {
            same_key_exist=1;
        }
    }
    if(    !same_key_exist    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__178 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sClass_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__178;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self){
int size;
void* __right_value0 = (void*)0;
char** keys;
struct sClass** items;
_Bool* item_existance;
int len;
char* it;
struct sClass* default_value;
struct sClass* it2;
unsigned int hash;
int n;
struct sClass* default_value_123;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size)), "/usr/local/include/neo-c.h", 2427, "char**"))));
    __right_value0 = (void*)0;
    items=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value0=(struct sClass**)come_calloc_v2(1, sizeof(struct sClass*)*(1*(size)), "/usr/local/include/neo-c.h", 2428, "struct sClass**"))));
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/neo-c.h", 2429, "_Bool*"))));
    len=0;
    for(    it=map$2char$phsClass$ph_begin(self)    ;    !map$2char$phsClass$ph_end(self)    ;    it=map$2char$phsClass$ph_next(self)    ){
        memset(&default_value,0,sizeof(struct sClass*));
        __right_value0 = (void*)0;
        it2=((struct sClass*)(__right_value0=map$2char$phsClass$ph_at(self,it,(struct sClass*)come_increment_ref_count(default_value))));
        come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        hash=string_get_hash_key(((char*)it))%size;
        n=hash;
        while(        1        ) {
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
                item_existance[n]=1;
                keys[n]=it;
                memset(&default_value_123,0,sizeof(struct sClass*));
                __right_value0 = (void*)0;
                items[n]=((struct sClass*)(__right_value0=map$2char$phsClass$ph_at(self,it,(struct sClass*)come_increment_ref_count(default_value_123))));
                come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                len++;
                come_call_finalizer(sClass_finalize, default_value_123, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer(sClass_finalize, default_value_123, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self){
char* result;
char* __result_obj__159;
char* __result_obj__160;
char* result_121;
char* __result_obj__161;
    if(    self==((void*)0)    ) {
        memset(&result,0,sizeof(char*));
        __result_obj__159 = result;
        return __result_obj__159;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__160 = self->key_list->it->item;
        return __result_obj__160;
    }
    memset(&result_121,0,sizeof(char*));
    __result_obj__161 = result_121;
    return __result_obj__161;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self){
char* result;
char* __result_obj__162;
char* __result_obj__163;
char* result_122;
char* __result_obj__164;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result,0,sizeof(char*));
        __result_obj__162 = result;
        return __result_obj__162;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__163 = self->key_list->it->item;
        return __result_obj__163;
    }
    memset(&result_122,0,sizeof(char*));
    __result_obj__164 = result_122;
    return __result_obj__164;
}

static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
struct sClass* __result_obj__165;
unsigned int hash;
unsigned int it;
struct sClass* __result_obj__166;
struct sClass* __result_obj__167;
struct sClass* __result_obj__168;
struct sClass* __result_obj__169;
    if(    self==((void*)0)    ) {
        __result_obj__165 = (struct sClass*)come_increment_ref_count(default_value);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sClass_finalize, __result_obj__165, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__165;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__166 = (struct sClass*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__166, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__166;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__167 = (struct sClass*)come_increment_ref_count(default_value);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__167, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__167;
            }
        }
        else {
            __result_obj__168 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__168, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__168;
        }
    }
    __result_obj__169 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__169, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__169;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
struct list$1char$ph* __result_obj__170;
int it2;
struct list_item$1char$ph* it;
struct list$1char$ph* __result_obj__177;
    if(    self==((void*)0)    ) {
        __result_obj__170 = self;
        return __result_obj__170;
    }
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
    __result_obj__177 = self;
    return __result_obj__177;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
struct list$1char$ph* __result_obj__171;
int tmp;
struct list$1char$ph* __result_obj__172;
struct list$1char$ph* __result_obj__173;
struct list_item$1char$ph* it;
int i;
struct list_item$1char$ph* prev_it;
struct list_item$1char$ph* it_124;
int i_125;
struct list_item$1char$ph* prev_it_126;
struct list_item$1char$ph* it_127;
struct list_item$1char$ph* head_prev_it;
struct list_item$1char$ph* tail_it;
int i_128;
struct list_item$1char$ph* prev_it_129;
struct list$1char$ph* __result_obj__176;
    if(    self==((void*)0)    ) {
        __result_obj__171 = self;
        return __result_obj__171;
    }
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
    if(    head>=self->len    ) {
        __result_obj__172 = self;
        return __result_obj__172;
    }
    if(    head==tail    ) {
        __result_obj__173 = self;
        return __result_obj__173;
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
        it_124=self->head;
        i_125=0;
        while(        it_124!=((void*)0)        ) {
            if(            i_125==head            ) {
                self->tail=it_124->prev;
                self->tail->next=((void*)0);
            }
            if(            i_125>=head            ) {
                prev_it_126=it_124;
                it_124=it_124->next;
                i_125++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_124=it_124->next;
                i_125++;
            }
        }
    }
    else {
        it_127=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_128=0;
        while(        it_127!=((void*)0)        ) {
            if(            i_128==head            ) {
                head_prev_it=it_127->prev;
            }
            if(            i_128==tail            ) {
                tail_it=it_127;
            }
            if(            i_128>=head&&i_128<tail            ) {
                prev_it_129=it_127;
                it_127=it_127->next;
                i_128++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_127=it_127->next;
                i_128++;
            }
        }
        if(        head_prev_it!=((void*)0)        ) {
            head_prev_it->next=tail_it;
        }
        if(        tail_it!=((void*)0)        ) {
            tail_it->prev=head_prev_it;
        }
    }
    __result_obj__176 = self;
    return __result_obj__176;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__174;
struct list_item$1char$ph* it;
struct list_item$1char$ph* prev_it;
struct list$1char$ph* __result_obj__175;
    if(    self==((void*)0)    ) {
        __result_obj__174 = self;
        return __result_obj__174;
    }
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__175 = self;
    return __result_obj__175;
}

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__180;
struct list_item$1sNode$ph* it;
struct list_item$1sNode$ph* prev_it;
struct list$1sNode$ph* __result_obj__181;
    if(    self==((void*)0)    ) {
        __result_obj__180 = self;
        return __result_obj__180;
    }
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__181 = self;
    return __result_obj__181;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
struct list$1int$* __result_obj__182;
void* __right_value0 = (void*)0;
struct list_item$1int$* litem;
struct list_item$1int$* litem_141;
struct list_item$1int$* litem_142;
struct list$1int$* __result_obj__183;
    if(    self==((void*)0)    ) {
        __result_obj__182 = self;
        return __result_obj__182;
    }
    if(    self->len==0    ) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1167, "struct list_item$1int$*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_141=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1177, "struct list_item$1int$*"))));
        litem_141->prev=self->head;
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail=litem_141;
        self->head->next=litem_141;
    }
    else {
        __right_value0 = (void*)0;
        litem_142=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1187, "struct list_item$1int$*"))));
        litem_142->prev=self->tail;
        litem_142->next=((void*)0);
        litem_142->item=item;
        self->tail->next=litem_142;
        self->tail=litem_142;
    }
    self->len++;
    __result_obj__183 = self;
    return __result_obj__183;
}

void method_block2_05typec(struct __current_stack2__* parent, struct sNode* it, int it2, _Bool* it3){
void* __right_value0 = (void*)0;
    list$1sNode$ph_add((*(parent->type_78))->mVarNameArrayNum,(struct sNode*)come_increment_ref_count(sNode_clone(it)));
    ((it) ? it = come_decrement_ref_count(it, ((struct sNode*)it)->finalize, ((struct sNode*)it)->_protocol_obj, 0, 0,(void*)0):(void*)0);
}

void method_block3_05typec(struct __current_stack3__* parent, struct sNode* it, int it2, _Bool* it3){
void* __right_value0 = (void*)0;
    list$1sNode$ph_add((*(parent->type_78))->mArrayNum,(struct sNode*)come_increment_ref_count(sNode_clone(it)));
    ((it) ? it = come_decrement_ref_count(it, ((struct sNode*)it)->finalize, ((struct sNode*)it)->_protocol_obj, 0, 0,(void*)0):(void*)0);
}

static struct list$1sNode$ph* list$1sNode$ph_initialize_with_values(struct list$1sNode$ph* self, int num_value, struct sNode** values){
int i;
struct list$1sNode$ph* __result_obj__184;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i=0    ;    i<num_value    ;    i++    ){
        list$1sNode$ph_push_back(self,(struct sNode*)come_increment_ref_count(values[i]));
    }
    __result_obj__184 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__184, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__184;
}

