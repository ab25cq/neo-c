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

struct sStoreNode
{
    int sline;
    char* sname;
    int sline_real;
    char* name;
    _Bool alloc;
    struct sType* type;
    struct sNode* right_value;
    struct list$1char$ph* multiple_assign;
    struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare;
    char* attribute;
};

struct sNewChannel
{
    int sline;
    char* sname;
    int sline_real;
};

struct sWriteChannelNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
    struct sNode* right_value;
};

struct sReadChannelNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sLoadNode
{
    int sline;
    char* sname;
    int sline_real;
    char* name;
};

struct sFunLoadNode
{
    int sline;
    char* sname;
    int sline_real;
    char* name;
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
struct lconv* localeconv();
struct _xlocale* newlocale(int , const char* , struct _xlocale* );
struct _xlocale* uselocale(struct _xlocale* );
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
struct sNode* parse_array_initializer(struct sInfo* info);
struct sNode* parse_struct_initializer(struct sInfo* info);
struct sNode* parse_global_variable(struct sInfo* info);
struct sNode* load_var(char* name, struct sInfo* info);
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
struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, char* attribute);
char* sStoreNode_kind(struct sStoreNode* self);
_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
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
static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void tuple3$3sType$phchar$phsNode$ph$p_finalize(struct tuple3$3sType$phchar$phsNode$ph* self);
static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_initialize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_add(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item);
static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_clone(struct tuple3$3sType$phchar$phsNode$ph* self);
static void tuple3$3sType$phchar$phsNode$ph_finalize(struct tuple3$3sType$phchar$phsNode$ph* self);
static void list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void sStoreNode_finalize(struct sStoreNode* self);
static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value);
static void sVar_finalize(struct sVar* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_remove(struct map$2char$phsVar$ph* self, char* key);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_begin(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static _Bool list$1tuple3$3sType$phchar$phsNode$ph$ph_end(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_next(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sBlock_finalize(struct sBlock* self);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static int list$1tuple3$3sType$phchar$phsNode$ph$ph_length(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
struct sNewChannel* sNewChannel_initialize(struct sNewChannel* self, struct sInfo* info);
char* sNewChannel_kind(struct sNewChannel* self);
_Bool sNewChannel_compile(struct sNewChannel* self, struct sInfo* info);
static void sNewChannel_finalize(struct sNewChannel* self);
struct sWriteChannelNode* sWriteChannelNode_initialize(struct sWriteChannelNode* self, struct sNode* exp, struct sNode* right_value, struct sInfo* info);
char* sWriteChannelNode_kind(struct sWriteChannelNode* self);
_Bool sWriteChannelNode_compile(struct sWriteChannelNode* self, struct sInfo* info);
static void sWriteChannelNode_finalize(struct sWriteChannelNode* self);
struct sReadChannelNode* sReadChannelNode_initialize(struct sReadChannelNode* self, struct sNode* exp, struct sInfo* info);
char* sReadChannelNode_kind(struct sReadChannelNode* self);
_Bool sReadChannelNode_compile(struct sReadChannelNode* self, struct sInfo* info);
static void sReadChannelNode_finalize(struct sReadChannelNode* self);
struct sNode* store_var(char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info);
static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self);
struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info);
char* sLoadNode_kind(struct sLoadNode* self);
_Bool sLoadNode_terminated(struct sLoadNode* self);
_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info);
static void sLoadNode_finalize(struct sLoadNode* self);
static struct list$1sNode$ph* list$1sNode$ph_delete(struct list$1sNode$ph* self, int head, int tail);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
struct sNode* create_load_var(char* var_name, struct sInfo* info);
static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self);
struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info);
char* sFunLoadNode_kind(struct sFunLoadNode* self);
_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info);
static void sFunLoadNode_finalize(struct sFunLoadNode* self);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info, _Bool function_param, _Bool comma);
static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self);
static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self);
static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_insert(struct map$2char$phsVar$ph* self, char* key, struct sVar* item);
static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
static struct list$1sVar$ph* list$1sVar$ph_add(struct list$1sVar$ph* self, struct sVar* item);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);
void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
static struct sNewChannel* sNewChannel_clone(struct sNewChannel* self);
static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item);
static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_initialize(struct tuple3$3sType$phchar$phsNode$ph* self, struct sType* v1, char* v2, struct sNode* v3);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_add(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2);
struct sNode* expression_node_v95(struct sInfo* info);
static struct sReadChannelNode* sReadChannelNode_clone(struct sReadChannelNode* self);
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info);
static struct sWriteChannelNode* sWriteChannelNode_clone(struct sWriteChannelNode* self);
// uniq global variable
// inline function

// body function
struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, char* attribute){
void* __right_value0 = (void*)0;
char* __dec_obj1;
struct sType* __dec_obj33;
struct sNode* __dec_obj34;
struct list$1char$ph* __dec_obj35;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __dec_obj42;
char* __dec_obj43;
struct sStoreNode* __result_obj__27;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj1=self->name,
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0);
    self->alloc=alloc;
    ((void*)0);
    __right_value0 = (void*)0;
    __dec_obj33=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj33,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj34=self->right_value,
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    (__dec_obj34 ? __dec_obj34 = come_decrement_ref_count(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0, (void*)0) :0);
    ((void*)0);
    __right_value0 = (void*)0;
    __dec_obj35=self->multiple_assign,
    self->multiple_assign=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(multiple_assign));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((void*)0);
    __right_value0 = (void*)0;
    __dec_obj42=self->multiple_declare,
    self->multiple_declare=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone(multiple_declare));
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj43=self->attribute,
    self->attribute=(char*)come_increment_ref_count(attribute);
    __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__27 = (struct sStoreNode*)come_increment_ref_count(self);
    come_call_finalizer(sStoreNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(list$1char$ph$p_finalize, multiple_assign, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, multiple_declare, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sStoreNode_finalize, __result_obj__27, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__27;
}

char* sStoreNode_kind(struct sStoreNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__28;
    __result_obj__28 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sStoreNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__28 = come_decrement_ref_count(__result_obj__28, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__28;
}

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct sVar* var_;
struct sType* type;
struct buffer* buf;
int n;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* o2_saved;
struct tuple3$3sType$phchar$phsNode$ph* it;
struct tuple3$3sType$phchar$phsNode$ph* multiple_assign_var1
;struct sType* type_18=0;
char* var_name=0;
struct sNode* right_value=0;
struct sType* type2;
_Bool __result_obj__44;
struct sType* left_type;
_Bool Value;
_Bool __result_obj__45;
struct CVALUE* come_value;
char* var_name2;
_Bool _conditional_value_X0;
char* var_name2_19;
struct CVALUE* come_value_20;
char* __dec_obj44;
void* __right_value2 = (void*)0;
struct sType* __exception_result_var_b1;
struct sType* __exception_result_var_b2;
struct sType* __dec_obj45;
struct buffer* buf_23;
_Bool Value_24;
_Bool __result_obj__55;
struct CVALUE* right_value_25;
struct sType* right_type;
struct sType* __dec_obj49;
int i;
struct list$1char$ph* o2_saved_26;
char* it_28;
struct sVar* var__30;
struct sType* right_type2;
char* multiple_var_name;
char* __dec_obj50;
struct list$1char$ph* o2_saved_31;
char* it_32;
struct sType* right_type2_33;
struct sVar* var__34;
struct sType* left_type_35;
struct CVALUE* right_value2;
char* __dec_obj51;
struct sType* __dec_obj52;
struct CVALUE* come_value_36;
char* __dec_obj53;
char* __dec_obj54;
struct sType* __dec_obj55;
_Bool _conditional_value_X1;
struct CVALUE* come_value_37;
char* __dec_obj56;
struct sVar* var__40;
struct sType* type_41;
_Bool __result_obj__67;
struct sType* left_type_42;
_Bool _conditional_value_X2;
_Bool _conditional_value_X3;
_Bool _conditional_value_X4;
struct CVALUE* come_value_43;
char* __dec_obj60;
struct sType* __dec_obj61;
struct sVar* var__44;
struct sType* type_45;
_Bool Value_46;
_Bool array_initializer;
_Bool string_initializer;
_Bool new_channel;
struct CVALUE* right_value_47;
struct sType* right_type_48;
struct sType* type_49;
struct sType* left_type_50;
_Bool __result_obj__68;
struct sVar* var__51;
struct CVALUE* come_value_52;
char* __dec_obj62;
struct sType* __dec_obj63;
_Bool _conditional_value_X5;
struct CVALUE* come_value_53;
char* __dec_obj64;
struct sType* __exception_result_var_b3;
struct sType* __exception_result_var_b4;
struct sType* __dec_obj65;
_Bool __result_obj__69;
struct CVALUE* come_value_54;
char* __dec_obj66;
struct sType* __dec_obj67;
_Bool Value_55;
_Bool new_channel_56;
struct CVALUE* right_value_57;
struct sType* right_type_58;
struct sClass* current_stack_frame_struct;
_Bool _conditional_value_X6;
struct sVar* parent_var;
struct sType* left_type_59;
char* c_value;
char* c_value_60;
_Bool __result_obj__70;
struct CVALUE* come_value_61;
char* __dec_obj68;
char* __dec_obj69;
struct sType* __dec_obj70;
_Bool __result_obj__71;
struct sVar* var__62;
_Bool __result_obj__72;
struct sType* __dec_obj71;
struct sType* left_type_63;
struct CVALUE* come_value_64;
char* __dec_obj72;
struct sType* __exception_result_var_b5;
struct sType* __exception_result_var_b6;
struct sType* __dec_obj73;
_Bool __result_obj__73;
struct CVALUE* come_value_65;
char* __dec_obj74;
struct sType* __dec_obj75;
    if(    self->multiple_declare    ) {
        var_=((struct sVar*)(__right_value1=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value0=__builtin_string(self->name))),((void*)0))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        come_call_finalizer(sVar_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(        var_        ) {
            if(            var_->mType->mHeap            ) {
                __right_value0 = (void*)0;
                free_object((struct sType*)come_increment_ref_count(sType_clone(var_->mType)),var_->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0);
            }
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_remove(info->lv_table->mVars,(char*)come_increment_ref_count(__builtin_string(self->name)));
        }
        if(        self->type==((void*)0)        ) {
            err_msg(info,"Require concrete variable type(%s)",self->name);
            return (_Bool)1;
        }
        __right_value0 = (void*)0;
        type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(self->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        type->mPointerNum=0;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "07var.c", 47, "struct buffer*"))));
        __right_value0 = (void*)0;
        buffer_append_format(buf,"%s ",((char*)(__right_value0=make_type_name_string(type,info,(_Bool)0,(_Bool)0,(_Bool)0))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        n=0;
        for(        o2_saved=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(self->multiple_declare),it=list$1tuple3$3sType$phchar$phsNode$ph$ph_begin(o2_saved)        ;        !list$1tuple3$3sType$phchar$phsNode$ph$ph_end(o2_saved)        ;        it=list$1tuple3$3sType$phchar$phsNode$ph$ph_next(o2_saved)        ){
            multiple_assign_var1=it;
            type_18=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            var_name=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            right_value=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v3);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            var_=((struct sVar*)(__right_value1=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value0=__builtin_string(var_name))),((void*)0))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            come_call_finalizer(sVar_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(            var_            ) {
                if(                var_->mType->mHeap                ) {
                    __right_value0 = (void*)0;
                    free_object((struct sType*)come_increment_ref_count(sType_clone(var_->mType)),var_->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0);
                }
                __right_value0 = (void*)0;
                map$2char$phsVar$ph_remove(info->lv_table->mVars,(char*)come_increment_ref_count(__builtin_string(var_name)));
            }
            __right_value0 = (void*)0;
            type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type_18),(struct sType*)come_increment_ref_count(info->generics_type),info));
            add_variable_to_table(var_name,(struct sType*)come_increment_ref_count(type2),info,(_Bool)0,(_Bool)0);
            var_=get_variable_from_table(info->lv_table,var_name);
            if(            var_==((void*)0)            ) {
                err_msg(info,"var not found(%s)(ZY) at definition of variable",it);
                __result_obj__44 = (_Bool)1;
                come_call_finalizer(sType_finalize, type_18, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
                ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__44;
            }
            left_type=(struct sType*)come_increment_ref_count(var_->mType);
            if(            right_value            ) {
                Value=node_compile(right_value,info);
                if(                !Value                ) {
                    __result_obj__45 = (_Bool)0;
                    come_call_finalizer(sType_finalize, type_18, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result_obj__45;
                }
                else {
                }
                __right_value0 = (void*)0;
                come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                __right_value0 = (void*)0;
                var_name2=(char*)come_increment_ref_count(make_var_name(type2,var_name,info,(_Bool)0));
                buffer_append_format(buf,"%s=%s",var_name2,come_value->c_value);
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (var_name2 = come_decrement_ref_count(var_name2, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            else {
                if(                __right_value0 = (void*)0,                 ({(_conditional_value_X0=(string_operator_not_equals(info->come_fun->mName,"memset")&&!left_type->mNoCallingDestructor&&((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,"memset")))));                come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                _conditional_value_X0;})                ) {
                    add_come_last_code2(info,"memset(&%s, 0, sizeof(%s));\n",var_->mCValueName,var_->mCValueName);
                }
                __right_value0 = (void*)0;
                var_name2_19=(char*)come_increment_ref_count(make_var_name(type2,var_name,info,(_Bool)0));
                buffer_append_format(buf,"%s",var_name2_19);
                (var_name2_19 = come_decrement_ref_count(var_name2_19, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            if(            n!=list$1tuple3$3sType$phchar$phsNode$ph$ph_length(self->multiple_declare)-1            ) {
                buffer_append_format(buf,", ");
            }
            n++;
            come_call_finalizer(sType_finalize, type_18, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
            ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_20=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 99, "struct CVALUE*"))));
        __right_value0 = (void*)0;
        __dec_obj44=come_value_20->c_value,
        come_value_20->c_value=(char*)come_increment_ref_count(buffer_to_string(buf));
        __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj45=come_value_20->type,
        come_value_20->type=(struct sType*)come_increment_ref_count((come_push_stackframe("07var.c", 101, 0),__exception_result_var_b1=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "07var.c", 101, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b1));
        come_call_finalizer(sType_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value_20->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_20));
        add_come_last_code(info,"%s",come_value_20->c_value);
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_20, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    self->multiple_assign    ) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf_23=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "07var.c", 109, "struct buffer*"))));
        Value_24=node_compile(self->right_value,info);
        if(        !Value_24        ) {
            __result_obj__55 = (_Bool)0;
            come_call_finalizer(buffer_finalize, buf_23, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__55;
        }
        else {
        }
        __right_value0 = (void*)0;
        right_value_25=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type=(struct sType*)come_increment_ref_count(right_value_25->type);
        if(        right_type->mNoSolvedGenericsType        ) {
            __dec_obj49=right_type,
            right_type=(struct sType*)come_increment_ref_count(right_type->mNoSolvedGenericsType);
            come_call_finalizer(sType_finalize, __dec_obj49,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        i=0;
        for(        o2_saved_26=(struct list$1char$ph*)come_increment_ref_count(self->multiple_assign),it_28=list$1char$ph_begin(o2_saved_26)        ;        !list$1char$ph_end(o2_saved_26)        ;        it_28=list$1char$ph_next(o2_saved_26)        ){
            if(            i<list$1sType$ph_length(right_type->mGenericsTypes)            ) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                var__30=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value0=__builtin_string(it_28))),((void*)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                if(                var__30                ) {
                    if(                    var__30->mType->mHeap                    ) {
                        __right_value0 = (void*)0;
                        free_object((struct sType*)come_increment_ref_count(sType_clone(var__30->mType)),var__30->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0);
                    }
                    __right_value0 = (void*)0;
                    map$2char$phsVar$ph_remove(info->lv_table->mVars,(char*)come_increment_ref_count(__builtin_string(it_28)));
                }
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                right_type2=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(right_type->mGenericsTypes,i)))));
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                right_type2->mStatic=(_Bool)0;
                add_variable_to_table(it_28,(struct sType*)come_increment_ref_count(right_type2),info,(_Bool)0,(_Bool)0);
                come_call_finalizer(sVar_finalize, var__30, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            i++;
        }
        come_call_finalizer(list$1char$ph$p_finalize, o2_saved_26, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        static int num_multiple_var=0;
        __right_value0 = (void*)0;
        multiple_var_name=(char*)come_increment_ref_count(xsprintf("multiple_assign_var%d",++num_multiple_var));
        __right_value0 = (void*)0;
        add_come_code_at_function_head(info,"%s\n;",((char*)(__right_value0=make_define_var(right_value_25->type,multiple_var_name,info,(_Bool)0,(_Bool)0))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        add_come_code(info,"%s=%s;\n",multiple_var_name,right_value_25->c_value);
        __right_value0 = (void*)0;
        __dec_obj50=right_value_25->c_value,
        right_value_25->c_value=(char*)come_increment_ref_count((char*)come_memdup(multiple_var_name, "07var.c", 148, "char*"));
        __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0, (void*)0);
        i=0;
        for(        o2_saved_31=(struct list$1char$ph*)come_increment_ref_count(self->multiple_assign),it_32=list$1char$ph_begin(o2_saved_31)        ;        !list$1char$ph_end(o2_saved_31)        ;        it_32=list$1char$ph_next(o2_saved_31)        ){
            if(            i<list$1sType$ph_length(right_type->mGenericsTypes)            ) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                right_type2_33=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(right_type->mGenericsTypes,i)))));
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                var__34=get_variable_from_table(info->lv_table,it_32);
                left_type_35=(struct sType*)come_increment_ref_count(var__34->mType);
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                right_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 159, "struct CVALUE*"))));
                __right_value0 = (void*)0;
                __dec_obj51=right_value2->c_value,
                right_value2->c_value=(char*)come_increment_ref_count(xsprintf("%s->v%d",right_value_25->c_value,i+1));
                __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0, (void*)0);
                __dec_obj52=right_value2->type,
                right_value2->type=(struct sType*)come_increment_ref_count(right_type2_33);
                come_call_finalizer(sType_finalize, __dec_obj52,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                right_value2->var=((void*)0);
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                come_value_36=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 165, "struct CVALUE*"))));
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                check_assign_type(((char*)(__right_value1=xsprintf("\%s is assining to}",((char*)(__right_value0=string_to_string(self->name)))))),left_type_35,right_type2_33,come_value_36,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                if(                right_type2_33->mHeap&&left_type_35->mHeap&&left_type_35->mPointerNum>0&&right_type2_33->mPointerNum>0                ) {
                    std_move(left_type_35,right_type2_33,right_value2,info);
                    __right_value0 = (void*)0;
                    __dec_obj53=come_value_36->c_value,
                    come_value_36->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__34->mCValueName,right_value2->c_value));
                    __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0, (void*)0);
                }
                else {
                    __right_value0 = (void*)0;
                    __dec_obj54=come_value_36->c_value,
                    come_value_36->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__34->mCValueName,right_value2->c_value));
                    __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0, (void*)0);
                }
                __right_value0 = (void*)0;
                __dec_obj55=come_value_36->type,
                come_value_36->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_35));
                come_call_finalizer(sType_finalize, __dec_obj55,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_value_36->var=var__34;
                __right_value0 = (void*)0;
                add_come_code_at_function_head(info,"%s=0;\n",((char*)(__right_value0=make_define_var(left_type_35,var__34->mCValueName,info,(_Bool)0,(_Bool)0))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                add_come_code(info,"%s;\n",come_value_36->c_value);
                come_call_finalizer(sType_finalize, right_type2_33, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, left_type_35, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(CVALUE_finalize, right_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(CVALUE_finalize, come_value_36, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            i++;
        }
        come_call_finalizer(list$1char$ph$p_finalize, o2_saved_31, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(        __right_value0 = (void*)0,         __right_value1 = (void*)0,         ({(_conditional_value_X1=(string_operator_not_equals(((char*)(__right_value1=buffer_to_string(buf_23))),"")));        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        _conditional_value_X1;})        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            come_value_37=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 189, "struct CVALUE*"))));
            __right_value0 = (void*)0;
            __dec_obj56=come_value_37->c_value,
            come_value_37->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_23));
            __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0, (void*)0);
            list$1CVALUE$ph_add(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_37));
            come_call_finalizer(CVALUE_finalize, come_value_37, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(buffer_finalize, buf_23, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, right_value_25, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (multiple_var_name = come_decrement_ref_count(multiple_var_name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(    self->right_value==((void*)0)    ) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        var__40=((struct sVar*)(__right_value1=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value0=__builtin_string(self->name))),((void*)0))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        come_call_finalizer(sVar_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(        var__40        ) {
            if(            var__40->mType->mHeap            ) {
                __right_value0 = (void*)0;
                free_object((struct sType*)come_increment_ref_count(sType_clone(var__40->mType)),var__40->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0);
            }
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_remove(info->lv_table->mVars,(char*)come_increment_ref_count(__builtin_string(self->name)));
        }
        if(        self->type==((void*)0)        ) {
            err_msg(info,"Require concrete variable type(%s)",self->name);
            return (_Bool)1;
        }
        __right_value0 = (void*)0;
        type_41=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(self->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        __right_value0 = (void*)0;
        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(sType_clone(type_41)),info,(_Bool)0,(_Bool)0);
        var__40=get_variable_from_table(info->lv_table,self->name);
        if(        var__40==((void*)0)        ) {
            var__40=get_variable_from_table(info->gv_table,self->name);
            if(            var__40==((void*)0)            ) {
                err_msg(info,"var not found(%s)(Y) at definition of variable",self->name);
                __result_obj__67 = (_Bool)1;
                come_call_finalizer(sType_finalize, type_41, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__67;
            }
        }
        __right_value0 = (void*)0;
        left_type_42=(struct sType*)come_increment_ref_count(sType_clone(var__40->mType));
        if(        left_type_42->mChannel        ) {
            if(            __right_value0 = (void*)0,             ({(_conditional_value_X2=(string_operator_not_equals(info->come_fun->mName,"memset")&&!left_type_42->mNoCallingDestructor&&((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,"memset")))));            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            _conditional_value_X2;})            ) {
                add_come_code_at_function_head2(info,"memset(%s, 0, sizeof(int)*2);\n",var__40->mCValueName);
            }
        }
        else if(        list$1sNode$ph_length(left_type_42->mArrayNum)>0||list$1sNode$ph_length(left_type_42->mVarNameArrayNum)>0        ) {
            __right_value0 = (void*)0;
            add_come_code(info,"%s;\n",((char*)(__right_value0=make_define_var(left_type_42,var__40->mCValueName,info,(_Bool)0,(_Bool)0))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            if(            __right_value0 = (void*)0,             ({(_conditional_value_X3=(string_operator_not_equals(info->come_fun->mName,"memset")&&!left_type_42->mNoCallingDestructor&&((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,"memset")))));            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            _conditional_value_X3;})            ) {
                add_come_code(info,"memset(&%s, 0, sizeof(%s));\n",var__40->mCValueName,var__40->mCValueName);
            }
        }
        else {
            __right_value0 = (void*)0;
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value0=make_define_var(left_type_42,var__40->mCValueName,info,(_Bool)0,(_Bool)0))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            if(            __right_value0 = (void*)0,             ({(_conditional_value_X4=(string_operator_not_equals(info->come_fun->mName,"memset")&&!left_type_42->mNoCallingDestructor&&((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,"memset")))));            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            _conditional_value_X4;})            ) {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__40->mCValueName,var__40->mCValueName);
            }
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_43=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 248, "struct CVALUE*"))));
        __right_value0 = (void*)0;
        __dec_obj60=come_value_43->c_value,
        come_value_43->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__40->mCValueName));
        __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        __dec_obj61=come_value_43->type,
        come_value_43->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_42));
        come_call_finalizer(sType_finalize, __dec_obj61,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value_43->var=var__40;
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_43));
        if(        !left_type_42->mClass->mNumber&&left_type_42->mPointerNum==0        ) {
            var__40->mType->mAllocaValue=(_Bool)1;
            if(            var__40->mType->mNoSolvedGenericsType            ) {
                var__40->mType->mNoSolvedGenericsType->mAllocaValue=(_Bool)1;
            }
        }
        come_call_finalizer(sType_finalize, type_41, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, left_type_42, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_43, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    self->alloc    ) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        var__44=((struct sVar*)(__right_value1=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value0=__builtin_string(self->name))),((void*)0))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        come_call_finalizer(sVar_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(        var__44        ) {
            if(            var__44->mType->mHeap            ) {
                __right_value0 = (void*)0;
                free_object((struct sType*)come_increment_ref_count(sType_clone(var__44->mType)),var__44->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0);
            }
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_remove(info->lv_table->mVars,(char*)come_increment_ref_count(__builtin_string(self->name)));
        }
        if(        self->type==((void*)0)        ) {
        }
        else {
            __right_value0 = (void*)0;
            type_45=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(self->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(type_45),info,(_Bool)0,(_Bool)0);
            come_call_finalizer(sType_finalize, type_45, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        Value_46=node_compile(self->right_value,info);
        if(        !Value_46        ) {
            return (_Bool)0;
        }
        else {
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        array_initializer=string_operator_equals(((char*)(__right_value1=self->right_value->kind(self->right_value->_protocol_obj))),"sArrayInitializer");
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        string_initializer=string_operator_equals(((char*)(__right_value1=self->right_value->kind(self->right_value->_protocol_obj))),"sStrNode");
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        new_channel=string_operator_equals(((char*)(__right_value1=self->right_value->kind(self->right_value->_protocol_obj))),"sNewChannel");
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        __right_value0 = (void*)0;
        right_value_47=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __right_value0 = (void*)0;
        right_type_48=(struct sType*)come_increment_ref_count(sType_clone(right_value_47->type));
        right_type_48->mStatic=(_Bool)0;
        if(        self->type==((void*)0)        ) {
            __right_value0 = (void*)0;
            type_49=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(right_type_48),(struct sType*)come_increment_ref_count(info->generics_type),info));
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(type_49),info,(_Bool)0,(_Bool)0);
            come_call_finalizer(sType_finalize, type_49, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        var__44=get_variable_from_table(info->lv_table,self->name);
        __right_value0 = (void*)0;
        left_type_50=(struct sType*)come_increment_ref_count(sType_clone(var__44->mType));
        if(        left_type_50->mHeap&&(left_type_50->mConstant||left_type_50->mStatic||left_type_50->mRegister)        ) {
            err_msg(info,"don't append heap with constant, static, register");
            __result_obj__68 = (_Bool)1;
            come_call_finalizer(CVALUE_finalize, right_value_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type_48, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, left_type_50, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__68;
        }
        else if(        array_initializer||string_initializer||left_type_50->mStatic||left_type_50->mConstant||left_type_50->mRegister||list$1sNode$ph_length(left_type_50->mArrayNum)>0||left_type_50->mArrayPointerType        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            var__51=((struct sVar*)(__right_value1=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value0=__builtin_string(self->name))),((void*)0))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            come_call_finalizer(sVar_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            come_value_52=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 310, "struct CVALUE*"))));
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj62=come_value_52->c_value,
            come_value_52->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",((char*)(__right_value0=make_define_var(left_type_50,var__51->mCValueName,info,(_Bool)0,(_Bool)0))),right_value_47->c_value));
            __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            __right_value0 = (void*)0;
            __dec_obj63=come_value_52->type,
            come_value_52->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_50));
            come_call_finalizer(sType_finalize, __dec_obj63,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value_52->var=var__51;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_52));
            add_come_last_code(info,"%s",come_value_52->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_52, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        left_type_50->mChannel&&new_channel        ) {
            __right_value0 = (void*)0;
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value0=make_define_var(left_type_50,var__44->mCValueName,info,(_Bool)0,(_Bool)0))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            if(            __right_value0 = (void*)0,             ({(_conditional_value_X5=(string_operator_not_equals(info->come_fun->mName,"memset")&&!left_type_50->mNoCallingDestructor&&((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,"memset")))));            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            _conditional_value_X5;})            ) {
                add_come_code_at_function_head2(info,"memset(%s, 0, sizeof(int)*2);\n",var__44->mCValueName);
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            come_value_53=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 327, "struct CVALUE*"))));
            __right_value0 = (void*)0;
            __dec_obj64=come_value_53->c_value,
            come_value_53->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s), (void*)0)",var__44->mCValueName));
            __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0, (void*)0);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj65=come_value_53->type,
            come_value_53->type=(struct sType*)come_increment_ref_count((come_push_stackframe("07var.c", 329, 2),__exception_result_var_b3=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "07var.c", 329, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b3));
            come_call_finalizer(sType_finalize, __dec_obj65,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value_53->type->mPointerNum=1;
            come_value_53->var=var__44;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_53));
            add_come_last_code(info,"%s",come_value_53->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_53, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            check_assign_type(((char*)(__right_value1=xsprintf("\%s is assining to",((char*)(__right_value0=string_to_string(self->name)))))),left_type_50,right_type_48,right_value_47,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            if(            left_type_50->mPointerNum>0&&left_type_50->mHeap&&string_operator_equals(right_type_48->mClass->mName,"void")&&right_type_48->mPointerNum>0            ) {
            }
            else if(            right_type_48->mHeap&&left_type_50->mHeap&&left_type_50->mPointerNum>0&&right_type_48->mPointerNum>0            ) {
                std_move(left_type_50,right_type_48,right_value_47,info);
            }
            else if(            left_type_50->mHeap&&!right_value_47->type->mHeap            ) {
                err_msg(info,"require right value as heap object(%s)",self->name);
                __result_obj__69 = (_Bool)1;
                come_call_finalizer(CVALUE_finalize, right_value_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type_48, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, left_type_50, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__69;
            }
            __right_value0 = (void*)0;
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value0=make_define_var(left_type_50,var__44->mCValueName,info,(_Bool)0,(_Bool)0))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            come_value_54=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 354, "struct CVALUE*"))));
            __right_value0 = (void*)0;
            __dec_obj66=come_value_54->c_value,
            come_value_54->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__44->mCValueName,right_value_47->c_value));
            __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0, (void*)0);
            __right_value0 = (void*)0;
            __dec_obj67=come_value_54->type,
            come_value_54->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_50));
            come_call_finalizer(sType_finalize, __dec_obj67,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value_54->var=var__44;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_54));
            add_come_last_code(info,"%s",come_value_54->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_54, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(CVALUE_finalize, right_value_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type_48, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, left_type_50, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        Value_55=node_compile(self->right_value,info);
        if(        !Value_55        ) {
            return (_Bool)0;
        }
        else {
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        new_channel_56=string_operator_equals(((char*)(__right_value1=self->right_value->kind(self->right_value->_protocol_obj))),"sNewChannel");
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        __right_value0 = (void*)0;
        right_value_57=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_58=right_value_57->type;
        current_stack_frame_struct=info->current_stack_frame_struct;
        if(        __right_value0 = (void*)0,         __right_value1 = (void*)0,         ({(_conditional_value_X6=(current_stack_frame_struct&&((struct sVar*)(__right_value1=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value0=__builtin_string(self->name))),((void*)0))))==((void*)0)));        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        come_call_finalizer(sVar_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        _conditional_value_X6;})        ) {
            parent_var=get_variable_from_table(info->lv_table->mParent,self->name);
            if(            parent_var!=((void*)0)            ) {
                if(                string_operator_not_equals(parent_var->mFunName,info->come_fun->mName)                ) {
                    left_type_59=parent_var->mType;
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    check_assign_type(((char*)(__right_value1=xsprintf("\%s is assigning to",((char*)(__right_value0=string_to_string(self->name)))))),left_type_59,right_type_58,right_value_57,(_Bool)0,(_Bool)1,(_Bool)1,info);
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                    if(                    left_type_59->mPointerNum>0&&right_type_58->mPointerNum>0&&right_type_58->mHeap&&left_type_59->mHeap                    ) {
                        __right_value0 = (void*)0;
                        c_value=(char*)come_increment_ref_count(xsprintf("*(parent->%s)",parent_var->mCValueName));
                        decrement_ref_count_object((struct sType*)come_increment_ref_count(parent_var->mType),c_value,info,(_Bool)0);
                        std_move(left_type_59,right_type_58,right_value_57,info);
                        (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0));
                    }
                    else if(                    left_type_59->mPointerNum>0&&right_type_58->mPointerNum>0&&string_operator_equals(right_type_58->mClass->mName,"void")&&left_type_59->mHeap                    ) {
                        __right_value0 = (void*)0;
                        c_value_60=(char*)come_increment_ref_count(xsprintf("*(parent->%s)",parent_var->mCValueName));
                        decrement_ref_count_object((struct sType*)come_increment_ref_count(parent_var->mType),c_value_60,info,(_Bool)0);
                        (c_value_60 = come_decrement_ref_count(c_value_60, (void*)0, (void*)0, 0, 0, (void*)0));
                    }
                    else if(                    left_type_59->mHeap&&!right_value_57->type->mHeap                    ) {
                        err_msg(info,"require right value as heap object(%s)",self->name);
                        __result_obj__70 = (_Bool)1;
                        come_call_finalizer(CVALUE_finalize, right_value_57, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result_obj__70;
                    }
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    come_value_61=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 401, "struct CVALUE*"))));
                    if(                    parent_var->mType->mOriginIsArray                    ) {
                        __right_value0 = (void*)0;
                        __dec_obj68=come_value_61->c_value,
                        come_value_61->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var->mCValueName,right_value_57->c_value));
                        __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0, (void*)0);
                    }
                    else {
                        __right_value0 = (void*)0;
                        __dec_obj69=come_value_61->c_value,
                        come_value_61->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var->mCValueName,right_value_57->c_value));
                        __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0, (void*)0);
                    }
                    __right_value0 = (void*)0;
                    __dec_obj70=come_value_61->type,
                    come_value_61->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_59));
                    come_call_finalizer(sType_finalize, __dec_obj70,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_value_61->var=((void*)0);
                    add_come_last_code(info,"%s",come_value_61->c_value);
                    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_61));
                    __result_obj__71 = (_Bool)1;
                    come_call_finalizer(CVALUE_finalize, come_value_61, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(CVALUE_finalize, right_value_57, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result_obj__71;
                    come_call_finalizer(CVALUE_finalize, come_value_61, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        var__62=get_variable_from_table(info->lv_table,self->name);
        if(        var__62==((void*)0)        ) {
            var__62=get_variable_from_table(info->gv_table,self->name);
            if(            var__62==((void*)0)            ) {
                err_msg(info,"var not found(%s)(X) at storing variable",self->name);
                __result_obj__72 = (_Bool)1;
                come_call_finalizer(CVALUE_finalize, right_value_57, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__72;
            }
        }
        if(        var__62->mType==((void*)0)        ) {
            __right_value0 = (void*)0;
            __dec_obj71=var__62->mType,
            var__62->mType=(struct sType*)come_increment_ref_count(sType_clone(right_type_58));
            come_call_finalizer(sType_finalize, __dec_obj71,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        __right_value0 = (void*)0;
        left_type_63=(struct sType*)come_increment_ref_count(sType_clone(var__62->mType));
        if(        left_type_63->mChannel&&new_channel_56        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            come_value_64=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 439, "struct CVALUE*"))));
            __right_value0 = (void*)0;
            __dec_obj72=come_value_64->c_value,
            come_value_64->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s), (void*)0)",var__62->mCValueName));
            __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0, (void*)0);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj73=come_value_64->type,
            come_value_64->type=(struct sType*)come_increment_ref_count((come_push_stackframe("07var.c", 442, 4),__exception_result_var_b5=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "07var.c", 442, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b5));
            come_call_finalizer(sType_finalize, __dec_obj73,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value_64->type->mPointerNum=1;
            come_value_64->var=var__62;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_64));
            add_come_last_code(info,"%s",come_value_64->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_64, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            check_assign_type(((char*)(__right_value1=xsprintf("\%s is assining to",((char*)(__right_value0=string_to_string(self->name)))))),left_type_63,right_type_58,right_value_57,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            if(            right_type_58->mHeap&&left_type_63->mHeap&&left_type_63->mPointerNum>0&&right_type_58->mPointerNum>0            ) {
                decrement_ref_count_object((struct sType*)come_increment_ref_count(left_type_63),var__62->mCValueName,info,(_Bool)0);
                std_move(left_type_63,right_type_58,right_value_57,info);
            }
            else if(            left_type_63->mPointerNum>0&&left_type_63->mHeap&&string_operator_equals(right_type_58->mClass->mName,"void")&&right_type_58->mPointerNum>0            ) {
                decrement_ref_count_object((struct sType*)come_increment_ref_count(left_type_63),var__62->mCValueName,info,(_Bool)0);
            }
            else if(            left_type_63->mHeap&&!right_value_57->type->mHeap            ) {
                err_msg(info,"require right value as heap object(%s)",self->name);
                __result_obj__73 = (_Bool)1;
                come_call_finalizer(CVALUE_finalize, right_value_57, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, left_type_63, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__73;
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            come_value_65=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 467, "struct CVALUE*"))));
            __right_value0 = (void*)0;
            __dec_obj74=come_value_65->c_value,
            come_value_65->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__62->mCValueName,right_value_57->c_value));
            __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0, (void*)0);
            __right_value0 = (void*)0;
            __dec_obj75=come_value_65->type,
            come_value_65->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_63));
            come_call_finalizer(sType_finalize, __dec_obj75,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value_65->var=var__62;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_65));
            add_come_last_code(info,"%s",come_value_65->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_65, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(CVALUE_finalize, right_value_57, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, left_type_63, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__1;
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
struct sType* __result_obj__20;
    if(    self==(void*)0    ) {
        __result_obj__1 = (struct sType*)come_increment_ref_count((void*)0);
        come_call_finalizer(sType_finalize, __result_obj__1, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__1;
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
    if(    self!=((void*)0)    ) {
        result->mOriginIsArray=self->mOriginIsArray;
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
        result->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 58, "char*"));
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
    __result_obj__20 = (struct sType*)come_increment_ref_count(result);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__20, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__20;
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
struct list$1sType$ph* __result_obj__2;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1sType$ph* result;
struct list_item$1sType$ph* it;
struct list$1sType$ph* __result_obj__5;
    if(    self==((void*)0)    ) {
        __result_obj__2 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__2, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__2;
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
    __result_obj__5 = (struct list$1sType$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__5, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__5;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__3;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__3 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__3, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__3;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value0 = (void*)0;
struct list_item$1sType$ph* litem;
struct sType* __dec_obj4;
struct list_item$1sType$ph* litem_0;
struct sType* __dec_obj5;
struct list_item$1sType$ph* litem_1;
struct sType* __dec_obj6;
struct list$1sType$ph* __result_obj__4;
    if(    self->len==0    ) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1084, "struct list_item$1sType$ph*"))));
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
        litem_0=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1094, "struct list_item$1sType$ph*"))));
        litem_0->prev=self->head;
        litem_0->next=((void*)0);
        __dec_obj5=litem_0->item,
        litem_0->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_0;
        self->head->next=litem_0;
    }
    else {
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1104, "struct list_item$1sType$ph*"))));
        litem_1->prev=self->tail;
        litem_1->next=((void*)0);
        __dec_obj6=litem_1->item,
        litem_1->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_1;
        self->tail=litem_1;
    }
    self->len++;
    __result_obj__4 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__4;
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
struct sNode* __result_obj__6;
void* __right_value0 = (void*)0;
struct sNode* result;
struct sNode* __result_obj__7;
    if(    self==(void*)0    ) {
        __result_obj__6 = (struct sNode*)come_increment_ref_count((void*)0);
        ((__result_obj__6) ? __result_obj__6 = come_decrement_ref_count(__result_obj__6, ((struct sNode*)__result_obj__6)->finalize, ((struct sNode*)__result_obj__6)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__6;
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
    __result_obj__7 = (struct sNode*)come_increment_ref_count(result);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__7) ? __result_obj__7 = come_decrement_ref_count(__result_obj__7, ((struct sNode*)__result_obj__7)->finalize, ((struct sNode*)__result_obj__7)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__7;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__8;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1sNode$ph* result;
struct list_item$1sNode$ph* it;
struct list$1sNode$ph* __result_obj__11;
    if(    self==((void*)0)    ) {
        __result_obj__8 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__8, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__8;
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
    __result_obj__11 = (struct list$1sNode$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__11, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__11;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__9;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__9 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__9, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__9;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value0 = (void*)0;
struct list_item$1sNode$ph* litem;
struct sNode* __dec_obj17;
struct list_item$1sNode$ph* litem_2;
struct sNode* __dec_obj18;
struct list_item$1sNode$ph* litem_3;
struct sNode* __dec_obj19;
struct list$1sNode$ph* __result_obj__10;
    if(    self->len==0    ) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1084, "struct list_item$1sNode$ph*"))));
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
        litem_2=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1094, "struct list_item$1sNode$ph*"))));
        litem_2->prev=self->head;
        litem_2->next=((void*)0);
        __dec_obj18=litem_2->item,
        litem_2->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj18 ? __dec_obj18 = come_decrement_ref_count(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem_2;
        self->head->next=litem_2;
    }
    else {
        __right_value0 = (void*)0;
        litem_3=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1104, "struct list_item$1sNode$ph*"))));
        litem_3->prev=self->tail;
        litem_3->next=((void*)0);
        __dec_obj19=litem_3->item,
        litem_3->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj19 ? __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail->next=litem_3;
        self->tail=litem_3;
    }
    self->len++;
    __result_obj__10 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    return __result_obj__10;
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
struct list$1int$* __result_obj__12;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1int$* result;
struct list_item$1int$* it;
struct list$1int$* __result_obj__15;
    if(    self==((void*)0)    ) {
        __result_obj__12 = (struct list$1int$*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1int$$p_finalize, __result_obj__12, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__12;
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
    __result_obj__15 = (struct list$1int$*)come_increment_ref_count(result);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__15, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__15;
}

static struct list$1int$* list$1int$_initialize(struct list$1int$* self){
struct list$1int$* __result_obj__13;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__13 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__13, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__13;
}

static struct list$1int$* list$1int$_add(struct list$1int$* self, int item){
void* __right_value0 = (void*)0;
struct list_item$1int$* litem;
struct list_item$1int$* litem_4;
struct list_item$1int$* litem_5;
struct list$1int$* __result_obj__14;
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
    __result_obj__14 = self;
    return __result_obj__14;
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
struct list$1char$ph* __result_obj__16;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1char$ph* result;
struct list_item$1char$ph* it;
struct list$1char$ph* __result_obj__19;
    if(    self==((void*)0)    ) {
        __result_obj__16 = (struct list$1char$ph*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__16, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__16;
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
    __result_obj__19 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__19, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__19;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__17;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__17 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__17, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__17;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value0 = (void*)0;
struct list_item$1char$ph* litem;
char* __dec_obj27;
struct list_item$1char$ph* litem_6;
char* __dec_obj28;
struct list_item$1char$ph* litem_7;
char* __dec_obj29;
struct list$1char$ph* __result_obj__18;
    if(    self->len==0    ) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1084, "struct list_item$1char$ph*"))));
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
        litem_6=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1094, "struct list_item$1char$ph*"))));
        litem_6->prev=self->head;
        litem_6->next=((void*)0);
        __dec_obj28=litem_6->item,
        litem_6->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_6;
        self->head->next=litem_6;
    }
    else {
        __right_value0 = (void*)0;
        litem_7=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1104, "struct list_item$1char$ph*"))));
        litem_7->prev=self->tail;
        litem_7->next=((void*)0);
        __dec_obj29=litem_7->item,
        litem_7->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_7;
        self->tail=litem_7;
    }
    self->len++;
    __result_obj__18 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__18;
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

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__21;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* result;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__26;
    if(    self==((void*)0)    ) {
        __result_obj__21 = (struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, __result_obj__21, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__21;
    }
    result=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph_initialize((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1065, "struct list$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
    it=self->head;
    while(    it!=((void*)0)    ) {
        if(        1        ) {
            __right_value0 = (void*)0;
            list$1tuple3$3sType$phchar$phsNode$ph$ph_add(result,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_clone(it->item)));
        }
        else {
            __right_value0 = (void*)0;
            list$1tuple3$3sType$phchar$phsNode$ph$ph_add(result,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__26 = (struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, __result_obj__26, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__26;
}

static void list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* prev_it;
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void tuple3$3sType$phchar$phsNode$ph$p_finalize(struct tuple3$3sType$phchar$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)    ) {
        ((self->v3) ? self->v3 = come_decrement_ref_count(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_initialize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__22;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__22 = (struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, __result_obj__22, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__22;
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_add(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item){
void* __right_value0 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj36;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_8;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj37;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_9;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj38;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__23;
    if(    self->len==0    ) {
        litem=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1084, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj36=litem->item,
        litem->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_8=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1094, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_8->prev=self->head;
        litem_8->next=((void*)0);
        __dec_obj37=litem_8->item,
        litem_8->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __dec_obj37,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_8;
        self->head->next=litem_8;
    }
    else {
        __right_value0 = (void*)0;
        litem_9=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1104, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_9->prev=self->tail;
        litem_9->next=((void*)0);
        __dec_obj38=litem_9->item,
        litem_9->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_9;
        self->tail=litem_9;
    }
    self->len++;
    __result_obj__23 = self;
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__23;
}

static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_clone(struct tuple3$3sType$phchar$phsNode$ph* self){
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__24;
void* __right_value0 = (void*)0;
struct tuple3$3sType$phchar$phsNode$ph* result;
struct sType* __dec_obj39;
char* __dec_obj40;
struct sNode* __dec_obj41;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__25;
    if(    self==(void*)0    ) {
        __result_obj__24 = (struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((void*)0);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __result_obj__24, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__24;
    }
    result=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "tuple3$3sType$phchar$phsNode$ph_clone", 3, "struct tuple3$3sType$phchar$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj39=result->v1,
        result->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer(sType_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj40=result->v2,
        result->v2=(char*)come_increment_ref_count((char*)come_memdup(self->v2, "tuple3$3sType$phchar$phsNode$ph_clone", 5, "char*"));
        __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj41=result->v3,
        result->v3=(struct sNode*)come_increment_ref_count(sNode_clone(self->v3));
        (__dec_obj41 ? __dec_obj41 = come_decrement_ref_count(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__25 = (struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(result);
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __result_obj__25, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__25;
}

static void tuple3$3sType$phchar$phsNode$ph_finalize(struct tuple3$3sType$phchar$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)    ) {
        ((self->v3) ? self->v3 = come_decrement_ref_count(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static void list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* prev_it;
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void sStoreNode_finalize(struct sStoreNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)    ) {
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)    ) {
        ((self->right_value) ? self->right_value = come_decrement_ref_count(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->multiple_assign!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->multiple_assign, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->multiple_declare!=((void*)0)    ) {
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, self->multiple_declare, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->attribute!=((void*)0)    ) {
        (self->attribute = come_decrement_ref_count(self->attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash;
unsigned int it;
struct sVar* __result_obj__29;
struct sVar* __result_obj__30;
struct sVar* __result_obj__31;
struct sVar* __result_obj__32;
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__29 = (struct sVar*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__29, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__29;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__30 = (struct sVar*)come_increment_ref_count(default_value);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__30, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__30;
            }
        }
        else {
            __result_obj__31 = (struct sVar*)come_increment_ref_count(default_value);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sVar_finalize, __result_obj__31, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__31;
        }
    }
    __result_obj__32 = (struct sVar*)come_increment_ref_count(default_value);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__32, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__32;
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

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_remove(struct map$2char$phsVar$ph* self, char* key){
unsigned int hash;
unsigned int it;
struct map$2char$phsVar$ph* __result_obj__37;
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
                    come_call_finalizer(sVar_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                memset(self->items+it,0,sizeof(struct sVar*));
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
    __result_obj__37 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__37;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2;
struct list_item$1char$ph* it;
struct list$1char$ph* __result_obj__36;
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
    __result_obj__36 = self;
    return __result_obj__36;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp;
struct list$1char$ph* __result_obj__33;
struct list_item$1char$ph* it;
int i;
struct list_item$1char$ph* prev_it;
struct list_item$1char$ph* it_10;
int i_11;
struct list_item$1char$ph* prev_it_12;
struct list_item$1char$ph* it_13;
struct list_item$1char$ph* head_prev_it;
struct list_item$1char$ph* tail_it;
int i_14;
struct list_item$1char$ph* prev_it_15;
struct list$1char$ph* __result_obj__35;
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
        __result_obj__33 = self;
        return __result_obj__33;
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
        it_10=self->head;
        i_11=0;
        while(        it_10!=((void*)0)        ) {
            if(            i_11==head            ) {
                self->tail=it_10->prev;
                self->tail->next=((void*)0);
            }
            if(            i_11>=head            ) {
                prev_it_12=it_10;
                it_10=it_10->next;
                i_11++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_12, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_10=it_10->next;
                i_11++;
            }
        }
    }
    else {
        it_13=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_14=0;
        while(        it_13!=((void*)0)        ) {
            if(            i_14==head            ) {
                head_prev_it=it_13->prev;
            }
            if(            i_14==tail            ) {
                tail_it=it_13;
            }
            if(            i_14>=head&&i_14<tail            ) {
                prev_it_15=it_13;
                it_13=it_13->next;
                i_14++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_15, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_13=it_13->next;
                i_14++;
            }
        }
        if(        head_prev_it!=((void*)0)        ) {
            head_prev_it->next=tail_it;
        }
        if(        tail_it!=((void*)0)        ) {
            tail_it->prev=head_prev_it;
        }
    }
    __result_obj__35 = self;
    return __result_obj__35;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it;
struct list_item$1char$ph* prev_it;
struct list$1char$ph* __result_obj__34;
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__34 = self;
    return __result_obj__34;
}

static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_begin(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct tuple3$3sType$phchar$phsNode$ph* result;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__38;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__39;
struct tuple3$3sType$phchar$phsNode$ph* result_16;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__40;
    if(    self==((void*)0)    ) {
        memset(&result,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
        __result_obj__38 = result;
        return __result_obj__38;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__39 = self->it->item;
        return __result_obj__39;
    }
    memset(&result_16,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
    __result_obj__40 = result_16;
    return __result_obj__40;
}

static _Bool list$1tuple3$3sType$phchar$phsNode$ph$ph_end(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_next(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct tuple3$3sType$phchar$phsNode$ph* result;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__41;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__42;
struct tuple3$3sType$phchar$phsNode$ph* result_17;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__43;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
        __result_obj__41 = result;
        return __result_obj__41;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__42 = self->it->item;
        return __result_obj__42;
    }
    memset(&result_17,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
    __result_obj__43 = result_17;
    return __result_obj__43;
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

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value;
unsigned int hash;
unsigned int it;
struct sFun* __result_obj__46;
struct sFun* __result_obj__47;
struct sFun* __result_obj__48;
struct sFun* __result_obj__49;
    memset(&default_value,0,sizeof(struct sFun*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__46 = (struct sFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__46, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__46;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__47 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__47, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__47;
            }
        }
        else {
            __result_obj__48 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__48, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__48;
        }
    }
    __result_obj__49 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__49, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__49;
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

static void sBlock_finalize(struct sBlock* self){
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)    ) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value;
unsigned int hash;
unsigned int it;
struct sFun* __result_obj__50;
struct sFun* __result_obj__51;
struct sFun* __result_obj__52;
struct sFun* __result_obj__53;
    memset(&default_value,0,sizeof(struct sFun*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__50 = (struct sFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__50, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__50;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__51 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__51, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__51;
            }
        }
        else {
            __result_obj__52 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__52, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__52;
        }
    }
    __result_obj__53 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__53, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__53;
}

static int list$1tuple3$3sType$phchar$phsNode$ph$ph_length(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value0 = (void*)0;
struct list_item$1CVALUE$ph* litem;
struct CVALUE* __dec_obj46;
struct list_item$1CVALUE$ph* litem_21;
struct CVALUE* __dec_obj47;
struct list_item$1CVALUE$ph* litem_22;
struct CVALUE* __dec_obj48;
struct list$1CVALUE$ph* __result_obj__54;
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
        litem_21=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1172, "struct list_item$1CVALUE$ph*"))));
        litem_21->prev=self->head;
        litem_21->next=((void*)0);
        __dec_obj47=litem_21->item,
        litem_21->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj47,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_21;
        self->head->next=litem_21;
    }
    else {
        __right_value0 = (void*)0;
        litem_22=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1182, "struct list_item$1CVALUE$ph*"))));
        litem_22->prev=self->tail;
        litem_22->next=((void*)0);
        __dec_obj48=litem_22->item,
        litem_22->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_22;
        self->tail=litem_22;
    }
    self->len++;
    __result_obj__54 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__54;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result;
char* __result_obj__56;
char* __result_obj__57;
char* result_27;
char* __result_obj__58;
    if(    self==((void*)0)    ) {
        memset(&result,0,sizeof(char*));
        __result_obj__56 = result;
        return __result_obj__56;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__57 = self->it->item;
        return __result_obj__57;
    }
    memset(&result_27,0,sizeof(char*));
    __result_obj__58 = result_27;
    return __result_obj__58;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result;
char* __result_obj__59;
char* __result_obj__60;
char* result_29;
char* __result_obj__61;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result,0,sizeof(char*));
        __result_obj__59 = result;
        return __result_obj__59;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__60 = self->it->item;
        return __result_obj__60;
    }
    memset(&result_29,0,sizeof(char*));
    __result_obj__61 = result_29;
    return __result_obj__61;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it;
int i;
struct sType* __result_obj__62;
struct sType* default_value;
struct sType* __result_obj__63;
    if(    position<0    ) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(    it!=((void*)0)    ) {
        if(        position==i        ) {
            __result_obj__62 = (struct sType*)come_increment_ref_count(it->item);
            come_call_finalizer(sType_finalize, __result_obj__62, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__62;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct sType*));
    __result_obj__63 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__63, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__63;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it;
int i;
struct sType* __result_obj__64;
struct sType* default_value;
struct sType* __result_obj__65;
    if(    position<0    ) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(    it!=((void*)0)    ) {
        if(        position==i        ) {
            __result_obj__64 = (struct sType*)come_increment_ref_count(it->item);
            come_call_finalizer(sType_finalize, __result_obj__64, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__64;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct sType*));
    __result_obj__65 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__65, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__65;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value0 = (void*)0;
struct list_item$1CVALUE$ph* litem;
struct CVALUE* __dec_obj57;
struct list_item$1CVALUE$ph* litem_38;
struct CVALUE* __dec_obj58;
struct list_item$1CVALUE$ph* litem_39;
struct CVALUE* __dec_obj59;
struct list$1CVALUE$ph* __result_obj__66;
    if(    self->len==0    ) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1084, "struct list_item$1CVALUE$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj57=litem->item,
        litem->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj57,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_38=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1094, "struct list_item$1CVALUE$ph*"))));
        litem_38->prev=self->head;
        litem_38->next=((void*)0);
        __dec_obj58=litem_38->item,
        litem_38->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj58,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_38;
        self->head->next=litem_38;
    }
    else {
        __right_value0 = (void*)0;
        litem_39=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1104, "struct list_item$1CVALUE$ph*"))));
        litem_39->prev=self->tail;
        litem_39->next=((void*)0);
        __dec_obj59=litem_39->item,
        litem_39->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj59,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_39;
        self->tail=litem_39;
    }
    self->len++;
    __result_obj__66 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__66;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

struct sNewChannel* sNewChannel_initialize(struct sNewChannel* self, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNewChannel* __result_obj__74;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__74 = (struct sNewChannel*)come_increment_ref_count(self);
    come_call_finalizer(sNewChannel_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sNewChannel_finalize, __result_obj__74, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__74;
}

char* sNewChannel_kind(struct sNewChannel* self){
void* __right_value0 = (void*)0;
char* __result_obj__75;
    __result_obj__75 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sNewChannel"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__75 = come_decrement_ref_count(__result_obj__75, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__75;
}

_Bool sNewChannel_compile(struct sNewChannel* self, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNode* node;
_Bool Value;
_Bool __result_obj__76;
_Bool __result_obj__77;
    node=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value=node_compile(node,info);
    if(    !Value    ) {
        __result_obj__76 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__76;
    }
    else {
    }
    __result_obj__77 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    return __result_obj__77;
}

static void sNewChannel_finalize(struct sNewChannel* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sWriteChannelNode* sWriteChannelNode_initialize(struct sWriteChannelNode* self, struct sNode* exp, struct sNode* right_value, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNode* __dec_obj76;
struct sNode* __dec_obj77;
struct sWriteChannelNode* __result_obj__78;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj76=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(exp);
    (__dec_obj76 ? __dec_obj76 = come_decrement_ref_count(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj77=self->right_value,
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    (__dec_obj77 ? __dec_obj77 = come_decrement_ref_count(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__78 = (struct sWriteChannelNode*)come_increment_ref_count(self);
    come_call_finalizer(sWriteChannelNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sWriteChannelNode_finalize, __result_obj__78, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__78;
}

char* sWriteChannelNode_kind(struct sWriteChannelNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__79;
    __result_obj__79 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sWriteChannelNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__79 = come_decrement_ref_count(__result_obj__79, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__79;
}

_Bool sWriteChannelNode_compile(struct sWriteChannelNode* self, struct sInfo* info){
_Bool Value;
void* __right_value0 = (void*)0;
struct CVALUE* come_value;
_Bool Value_66;
_Bool __result_obj__80;
struct CVALUE* right_value;
struct sType* right_type;
struct sType* left_type;
struct sType* channel_type;
_Bool __result_obj__81;
void* __right_value1 = (void*)0;
struct buffer* buf;
struct CVALUE* come_value2;
char* __dec_obj78;
void* __right_value2 = (void*)0;
struct sType* __exception_result_var_b7;
struct sType* __exception_result_var_b8;
struct sType* __dec_obj79;
_Bool __result_obj__82;
    Value=node_compile(self->exp,info);
    if(    !Value    ) {
        return (_Bool)0;
    }
    else {
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    Value_66=node_compile(self->right_value,info);
    if(    !Value_66    ) {
        __result_obj__80 = (_Bool)0;
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__80;
    }
    else {
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_type=right_value->type;
    __right_value0 = (void*)0;
    left_type=(struct sType*)come_increment_ref_count(sType_clone(come_value->type));
    channel_type=(struct sType*)come_increment_ref_count(left_type->mChannelType);
    static int var_num=0;
    var_num++;
    if(    right_value->type->mHeap    ) {
        err_msg(info,"channel can't get heap type");
        __result_obj__81 = (_Bool)1;
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, channel_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__81;
    }
    __right_value0 = (void*)0;
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "07var.c", 550, "struct buffer*"))));
    __right_value0 = (void*)0;
    buffer_append_format(buf,"char __channel_buf%d[sizeof(%s)+1];\n",var_num,((char*)(__right_value0=make_type_name_string(channel_type,info,(_Bool)0,(_Bool)0,(_Bool)0))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    __right_value0 = (void*)0;
    buffer_append_format(buf,"%s* __channel_p%d = __channel_buf%d;\n",((char*)(__right_value0=make_type_name_string(channel_type,info,(_Bool)0,(_Bool)0,(_Bool)0))),var_num,var_num);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    buffer_append_format(buf,"*__channel_p%d = %s;\n",var_num,right_value->c_value);
    __right_value0 = (void*)0;
    add_come_code(info,((char*)(__right_value0=buffer_to_string(buf))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 558, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj78=come_value2->c_value,
    come_value2->c_value=(char*)come_increment_ref_count(xsprintf("if(write(%s[1], __channel_buf%d, sizeof(%s)) < 0) { puts(\"channel write error\"); exit(2); }",come_value->c_value,var_num,((char*)(__right_value0=make_type_name_string(channel_type,info,(_Bool)0,(_Bool)0,(_Bool)0)))));
    __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj79=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count((come_push_stackframe("07var.c", 562, 6),__exception_result_var_b7=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "07var.c", 562, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b7));
    come_call_finalizer(sType_finalize, __dec_obj79,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value2->type->mPointerNum=1;
    come_value2->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2));
    add_come_last_code(info,"%s",come_value2->c_value);
    __result_obj__82 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, channel_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__82;
}

static void sWriteChannelNode_finalize(struct sWriteChannelNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)    ) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)    ) {
        ((self->right_value) ? self->right_value = come_decrement_ref_count(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sReadChannelNode* sReadChannelNode_initialize(struct sReadChannelNode* self, struct sNode* exp, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNode* __dec_obj80;
struct sReadChannelNode* __result_obj__83;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj80=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(exp);
    (__dec_obj80 ? __dec_obj80 = come_decrement_ref_count(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__83 = (struct sReadChannelNode*)come_increment_ref_count(self);
    come_call_finalizer(sReadChannelNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sReadChannelNode_finalize, __result_obj__83, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__83;
}

char* sReadChannelNode_kind(struct sReadChannelNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__84;
    __result_obj__84 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sReadChannelNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__84 = come_decrement_ref_count(__result_obj__84, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__84;
}

_Bool sReadChannelNode_compile(struct sReadChannelNode* self, struct sInfo* info){
struct sNode* exp;
_Bool Value;
_Bool __result_obj__85;
void* __right_value0 = (void*)0;
struct CVALUE* come_value;
struct sType* var_type;
_Bool __result_obj__86;
struct sType* channel_type;
void* __right_value1 = (void*)0;
struct CVALUE* come_value2;
void* __right_value2 = (void*)0;
char* __dec_obj81;
struct sType* __dec_obj82;
_Bool __result_obj__87;
    exp=(struct sNode*)come_increment_ref_count(self->exp);
    Value=node_compile(exp,info);
    if(    !Value    ) {
        __result_obj__85 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__85;
    }
    else {
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    __right_value0 = (void*)0;
    var_type=(struct sType*)come_increment_ref_count(sType_clone(come_value->type));
    if(    !var_type->mChannel    ) {
        err_msg(info,"require right type is channel");
        __result_obj__86 = (_Bool)1;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, var_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__86;
    }
    channel_type=(struct sType*)come_increment_ref_count(var_type->mChannelType);
    static int var_num=0;
    var_num++;
    __right_value0 = (void*)0;
    add_come_code_at_function_head(info,"char __channel_bufl%d[sizeof(%s)+1];\n",var_num,((char*)(__right_value0=make_type_name_string(channel_type,info,(_Bool)0,(_Bool)0,(_Bool)0))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    __right_value0 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 613, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj81=come_value2->c_value,
    come_value2->c_value=(char*)come_increment_ref_count(xsprintf("((read(%s[0], __channel_bufl%d, sizeof(%s)) < 0 ? puts(\"read channel error\"), exit(2):0), *(%s*)__channel_bufl%d)",come_value->c_value,var_num,((char*)(__right_value0=make_type_name_string(channel_type,info,(_Bool)0,(_Bool)0,(_Bool)0))),((char*)(__right_value1=make_type_name_string(channel_type,info,(_Bool)0,(_Bool)0,(_Bool)0))),var_num));
    __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    __right_value0 = (void*)0;
    __dec_obj82=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_clone(channel_type));
    come_call_finalizer(sType_finalize, __dec_obj82,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value2->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2));
    add_come_last_code(info,"%s",come_value2->c_value);
    __result_obj__87 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, var_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, channel_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__87;
}

static void sReadChannelNode_finalize(struct sReadChannelNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)    ) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sNode* store_var(char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
void* __right_value2 = (void*)0;
struct sNode* _inf_value1;
struct sStoreNode* _inf_obj_value1;
void* __right_value3 = (void*)0;
struct sNode* __result_obj__90;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 630, "struct sNode");
    _inf_obj_value1=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value2=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "07var.c", 630, "struct sStoreNode*")),(char*)come_increment_ref_count(name),(struct list$1char$ph*)come_increment_ref_count(multiple_assign),(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(multiple_declare),(struct sType*)come_increment_ref_count(type),alloc,(struct sNode*)come_increment_ref_count(right_value),info,(char*)come_increment_ref_count(xsprintf(""))))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreNode_finalize;
    _inf_value1->clone=(void*)sStoreNode_clone;
    _inf_value1->compile=(void*)sStoreNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStoreNode_kind;
    _inf_value1->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__90 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value1)));
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(list$1char$ph$p_finalize, multiple_assign, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, multiple_declare, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sStoreNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__90) ? __result_obj__90 = come_decrement_ref_count(__result_obj__90, ((struct sNode*)__result_obj__90)->finalize, ((struct sNode*)__result_obj__90)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__90;
}

static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self){
struct sStoreNode* __result_obj__88;
void* __right_value0 = (void*)0;
struct sStoreNode* result;
char* __dec_obj83;
char* __dec_obj84;
struct sType* __dec_obj85;
struct sNode* __dec_obj86;
struct list$1char$ph* __dec_obj87;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __dec_obj88;
char* __dec_obj89;
struct sStoreNode* __result_obj__89;
    if(    self==(void*)0    ) {
        __result_obj__88 = (void*)0;
        return __result_obj__88;
    }
    result=(struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "sStoreNode_clone", 3, "struct sStoreNode*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj83=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStoreNode_clone", 5, "char*"));
        __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj84=result->name,
        result->name=(char*)come_increment_ref_count((char*)come_memdup(self->name, "sStoreNode_clone", 7, "char*"));
        __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->alloc=self->alloc;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj85=result->type,
        result->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj85,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj86=result->right_value,
        result->right_value=(struct sNode*)come_increment_ref_count(sNode_clone(self->right_value));
        (__dec_obj86 ? __dec_obj86 = come_decrement_ref_count(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->multiple_assign!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj87=result->multiple_assign,
        result->multiple_assign=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->multiple_assign));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj87,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->multiple_declare!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj88=result->multiple_declare,
        result->multiple_declare=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone(self->multiple_declare));
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize, __dec_obj88,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->attribute!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj89=result->attribute,
        result->attribute=(char*)come_increment_ref_count((char*)come_memdup(self->attribute, "sStoreNode_clone", 13, "char*"));
        __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __result_obj__89 = result;
    come_call_finalizer(sStoreNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__89;
}

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info){
void* __right_value0 = (void*)0;
char* __dec_obj90;
struct sLoadNode* __result_obj__91;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj90=self->name,
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__91 = (struct sLoadNode*)come_increment_ref_count(self);
    come_call_finalizer(sLoadNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sLoadNode_finalize, __result_obj__91, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__91;
}

char* sLoadNode_kind(struct sLoadNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__92;
    __result_obj__92 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sLoadNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__92 = come_decrement_ref_count(__result_obj__92, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__92;
}

_Bool sLoadNode_terminated(struct sLoadNode* self){
    return (_Bool)0;
}

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info){
struct sClass* current_stack_frame_struct;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
_Bool _conditional_value_X0;
struct sVar* parent_var;
struct CVALUE* come_value;
struct sType* type;
char* __dec_obj91;
char* __dec_obj92;
struct sType* __dec_obj93;
_Bool __result_obj__93;
struct sVar* var_;
struct CVALUE* come_value_67;
char* __dec_obj94;
void* __right_value2 = (void*)0;
struct sType* __exception_result_var_b9;
struct sType* __exception_result_var_b10;
struct sType* __dec_obj95;
_Bool __result_obj__94;
struct sFun* fun;
struct CVALUE* come_value_68;
char* __dec_obj96;
struct sType* __dec_obj97;
_Bool __result_obj__95;
struct CVALUE* come_value_69;
char* __dec_obj98;
struct sType* __dec_obj99;
struct sType* __dec_obj100;
struct sType* __dec_obj101;
struct sType* __dec_obj102;
_Bool __result_obj__99;
    current_stack_frame_struct=info->current_stack_frame_struct;
    if(    ({(_conditional_value_X0=(current_stack_frame_struct&&((struct sVar*)(__right_value1=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value0=__builtin_string(self->name))),((void*)0))))==((void*)0)));    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    come_call_finalizer(sVar_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    _conditional_value_X0;})    ) {
        parent_var=get_variable_from_table(info->lv_table->mParent,self->name);
        if(        parent_var!=((void*)0)        ) {
            if(            string_operator_not_equals(parent_var->mFunName,info->come_fun->mName)            ) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 660, "struct CVALUE*"))));
                type=parent_var->mType;
                if(                parent_var->mType->mOriginIsArray                ) {
                    __right_value0 = (void*)0;
                    __dec_obj91=come_value->c_value,
                    come_value->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)",parent_var->mCValueName));
                    __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0, (void*)0);
                }
                else {
                    __right_value0 = (void*)0;
                    __dec_obj92=come_value->c_value,
                    come_value->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))",parent_var->mCValueName));
                    __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0, (void*)0);
                }
                __right_value0 = (void*)0;
                __dec_obj93=come_value->type,
                come_value->type=(struct sType*)come_increment_ref_count(sType_clone(type));
                come_call_finalizer(sType_finalize, __dec_obj93,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_value->var=((void*)0);
                add_come_last_code(info,"%s",come_value->c_value);
                list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
                __result_obj__93 = (_Bool)1;
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__93;
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    var_=get_variable_from_table(info->lv_table,self->name);
    if(    var_==((void*)0)&&info->undefined_array_num_var    ) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_67=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 686, "struct CVALUE*"))));
        __right_value0 = (void*)0;
        __dec_obj94=come_value_67->c_value,
        come_value_67->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->name));
        __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj95=come_value_67->type,
        come_value_67->type=(struct sType*)come_increment_ref_count((come_push_stackframe("07var.c", 689, 8),__exception_result_var_b9=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "07var.c", 689, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b9));
        come_call_finalizer(sType_finalize, __dec_obj95,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value_67->type->mPointerNum=1;
        come_value_67->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_67));
        __result_obj__94 = (_Bool)1;
        come_call_finalizer(CVALUE_finalize, come_value_67, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__94;
        come_call_finalizer(CVALUE_finalize, come_value_67, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    var_==((void*)0)    ) {
        var_=get_variable_from_table(info->gv_table,self->name);
        if(        var_==((void*)0)        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            fun=((struct sFun*)(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=__builtin_string(self->name))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(            fun            ) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                come_value_68=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 705, "struct CVALUE*"))));
                __right_value0 = (void*)0;
                __dec_obj96=come_value_68->c_value,
                come_value_68->c_value=(char*)come_increment_ref_count(xsprintf("%s",fun->mName));
                __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0, (void*)0);
                __dec_obj97=come_value_68->type,
                come_value_68->type=(struct sType*)come_increment_ref_count(fun->mLambdaType);
                come_call_finalizer(sType_finalize, __dec_obj97,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_value_68->var=((void*)0);
                list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_68));
                __result_obj__95 = (_Bool)1;
                come_call_finalizer(CVALUE_finalize, come_value_68, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__95;
                come_call_finalizer(CVALUE_finalize, come_value_68, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"var not found(%s)(Z) at loading variable",self->name);
                return (_Bool)1;
            }
        }
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value_69=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 722, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    __dec_obj98=come_value_69->c_value,
    come_value_69->c_value=(char*)come_increment_ref_count(xsprintf("%s",var_->mCValueName));
    __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj99=come_value_69->type,
    come_value_69->type=(struct sType*)come_increment_ref_count(sType_clone(var_->mType));
    come_call_finalizer(sType_finalize, __dec_obj99,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value_69->var=var_;
    if(    list$1sNode$ph_length(come_value_69->type->mArrayNum)>0    ) {
        if(        info->in_typeof        ) {
            __right_value0 = (void*)0;
            __dec_obj100=come_value_69->type->mOriginalLoadVarType,
            come_value_69->type->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(come_value_69->type));
            come_call_finalizer(sType_finalize, __dec_obj100,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        info->in_refference        ) {
            __right_value0 = (void*)0;
            __dec_obj101=come_value_69->type->mOriginalLoadVarType,
            come_value_69->type->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(come_value_69->type));
            come_call_finalizer(sType_finalize, __dec_obj101,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value_69->type->mArrayPointerNum++;
        }
        else {
            __right_value0 = (void*)0;
            __dec_obj102=come_value_69->type->mOriginalLoadVarType,
            come_value_69->type->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(come_value_69->type));
            come_call_finalizer(sType_finalize, __dec_obj102,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            list$1sNode$ph_delete(come_value_69->type->mArrayNum,0,1);
            come_value_69->type->mArrayPointerNum++;
        }
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_69));
    __result_obj__99 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_69, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__99;
}

static void sLoadNode_finalize(struct sLoadNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)    ) {
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct list$1sNode$ph* list$1sNode$ph_delete(struct list$1sNode$ph* self, int head, int tail){
int tmp;
struct list$1sNode$ph* __result_obj__96;
struct list_item$1sNode$ph* it;
int i;
struct list_item$1sNode$ph* prev_it;
struct list_item$1sNode$ph* it_70;
int i_71;
struct list_item$1sNode$ph* prev_it_72;
struct list_item$1sNode$ph* it_73;
struct list_item$1sNode$ph* head_prev_it;
struct list_item$1sNode$ph* tail_it;
int i_74;
struct list_item$1sNode$ph* prev_it_75;
struct list$1sNode$ph* __result_obj__98;
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
        __result_obj__96 = self;
        return __result_obj__96;
    }
    if(    head==0&&tail==self->len    ) {
        list$1sNode$ph_reset(self);
    }
    else if(    head==0    ) {
        it=self->head;
        i=0;
        while(        it!=((void*)0)        ) {
            if(            i<tail            ) {
                prev_it=it;
                it=it->next;
                i++;
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        it_70=self->head;
        i_71=0;
        while(        it_70!=((void*)0)        ) {
            if(            i_71==head            ) {
                self->tail=it_70->prev;
                self->tail->next=((void*)0);
            }
            if(            i_71>=head            ) {
                prev_it_72=it_70;
                it_70=it_70->next;
                i_71++;
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_72, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_70=it_70->next;
                i_71++;
            }
        }
    }
    else {
        it_73=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_74=0;
        while(        it_73!=((void*)0)        ) {
            if(            i_74==head            ) {
                head_prev_it=it_73->prev;
            }
            if(            i_74==tail            ) {
                tail_it=it_73;
            }
            if(            i_74>=head&&i_74<tail            ) {
                prev_it_75=it_73;
                it_73=it_73->next;
                i_74++;
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_75, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_73=it_73->next;
                i_74++;
            }
        }
        if(        head_prev_it!=((void*)0)        ) {
            head_prev_it->next=tail_it;
        }
        if(        tail_it!=((void*)0)        ) {
            tail_it->prev=head_prev_it;
        }
    }
    __result_obj__98 = self;
    return __result_obj__98;
}

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it;
struct list_item$1sNode$ph* prev_it;
struct list$1sNode$ph* __result_obj__97;
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__97 = self;
    return __result_obj__97;
}

struct sNode* create_load_var(char* var_name, struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
void* __right_value2 = (void*)0;
struct sNode* _inf_value2;
struct sLoadNode* _inf_obj_value2;
void* __right_value3 = (void*)0;
struct sNode* node;
struct sNode* __result_obj__102;
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 754, "struct sNode");
    _inf_obj_value2=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value2=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc_v2(1, sizeof(struct sLoadNode)*(1), "07var.c", 754, "struct sLoadNode*")),(char*)come_increment_ref_count(__builtin_string(var_name)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLoadNode_finalize;
    _inf_value2->clone=(void*)sLoadNode_clone;
    _inf_value2->compile=(void*)sLoadNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sLoadNode_terminated;
    _inf_value2->kind=(void*)sLoadNode_kind;
    _inf_value2->no_mutex=(void*)sNodeBase_no_mutex;
    node=(struct sNode*)come_increment_ref_count(_inf_value2);
    come_call_finalizer(sLoadNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__102 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__102) ? __result_obj__102 = come_decrement_ref_count(__result_obj__102, ((struct sNode*)__result_obj__102)->finalize, ((struct sNode*)__result_obj__102)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__102;
}

static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self){
struct sLoadNode* __result_obj__100;
void* __right_value0 = (void*)0;
struct sLoadNode* result;
char* __dec_obj103;
char* __dec_obj104;
struct sLoadNode* __result_obj__101;
    if(    self==(void*)0    ) {
        __result_obj__100 = (void*)0;
        return __result_obj__100;
    }
    result=(struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc_v2(1, sizeof(struct sLoadNode)*(1), "sLoadNode_clone", 3, "struct sLoadNode*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj103=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLoadNode_clone", 5, "char*"));
        __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj104=result->name,
        result->name=(char*)come_increment_ref_count((char*)come_memdup(self->name, "sLoadNode_clone", 7, "char*"));
        __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __result_obj__101 = result;
    come_call_finalizer(sLoadNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__101;
}

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info){
void* __right_value0 = (void*)0;
char* __dec_obj105;
struct sFunLoadNode* __result_obj__103;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj105=self->name,
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__103 = (struct sFunLoadNode*)come_increment_ref_count(self);
    come_call_finalizer(sFunLoadNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sFunLoadNode_finalize, __result_obj__103, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__103;
}

char* sFunLoadNode_kind(struct sFunLoadNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__104;
    __result_obj__104 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sFunLoadNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__104 = come_decrement_ref_count(__result_obj__104, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__104;
}

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
void* __right_value2 = (void*)0;
struct sFun* fun;
struct CVALUE* come_value;
char* __dec_obj106;
struct sType* __dec_obj107;
    fun=((struct sFun*)(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=__builtin_string(self->name))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(    fun==((void*)0)    ) {
        err_msg(info,"fun not found(%s) at loading variable",self->name);
        return (_Bool)1;
    }
    else {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 782, "struct CVALUE*"))));
        __right_value0 = (void*)0;
        __dec_obj106=come_value->c_value,
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("%s",fun->mName));
        __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj107=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(fun->mLambdaType);
        come_call_finalizer(sType_finalize, __dec_obj107,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sFunLoadNode_finalize(struct sFunLoadNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)    ) {
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info, _Bool function_param, _Bool comma){
void* __right_value0 = (void*)0;
struct sVar* self;
char* __dec_obj108;
struct sType* __dec_obj109;
_Bool same_name;
struct list$1sVar$ph* o2_saved;
struct sVar* it;
char* __dec_obj110;
char* __dec_obj111;
char* __dec_obj112;
char* __dec_obj113;
char* __dec_obj114;
char* __dec_obj115;
    self=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "07var.c", 797, "struct sVar*"));
    __right_value0 = (void*)0;
    __dec_obj108=self->mName,
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj109=self->mType,
    self->mType=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj109,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    same_name=(_Bool)0;
    for(    o2_saved=(struct list$1sVar$ph*)come_increment_ref_count(info->come_fun->mAllVar),it=list$1sVar$ph_begin(o2_saved)    ;    !list$1sVar$ph_end(o2_saved)    ;    it=list$1sVar$ph_next(o2_saved)    ){
        if(        string_operator_equals(it->mCValueName,name)        ) {
            same_name=(_Bool)1;
        }
    }
    come_call_finalizer(list$1sVar$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(    function_param    ) {
        __right_value0 = (void*)0;
        __dec_obj110=self->mCValueName,
        self->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
        __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else if(    type->mRegister    ) {
        __right_value0 = (void*)0;
        __dec_obj111=self->mCValueName,
        self->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
        __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else if(    !same_name    ) {
        __right_value0 = (void*)0;
        __dec_obj112=self->mCValueName,
        self->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
        __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else {
        static int n=0;
        __right_value0 = (void*)0;
        __dec_obj113=self->mCValueName,
        self->mCValueName=(char*)come_increment_ref_count(xsprintf("%s_%d",name,n++));
        __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0, (void*)0);
    }
    self->mAllocaValue=(_Bool)0;
    self->mNoFree=(_Bool)0;
    if(    info->come_fun    ) {
        __right_value0 = (void*)0;
        __dec_obj114=self->mFunName,
        self->mFunName=(char*)come_increment_ref_count((char*)come_memdup(info->come_fun->mName, "07var.c", 828, "char*"));
        __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else {
        __dec_obj115=self->mFunName,
        self->mFunName=((void*)0);
        __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __right_value0 = (void*)0;
    map$2char$phsVar$ph_insert(info->lv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self));
    if(    info->come_fun    ) {
        list$1sVar$ph_add(info->come_fun->mAllVar,(struct sVar*)come_increment_ref_count(self));
    }
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sVar_finalize, self, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self){
struct sVar* result;
struct sVar* __result_obj__105;
struct sVar* __result_obj__106;
struct sVar* result_76;
struct sVar* __result_obj__107;
    if(    self==((void*)0)    ) {
        memset(&result,0,sizeof(struct sVar*));
        __result_obj__105 = result;
        return __result_obj__105;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__106 = self->it->item;
        return __result_obj__106;
    }
    memset(&result_76,0,sizeof(struct sVar*));
    __result_obj__107 = result_76;
    return __result_obj__107;
}

static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self){
struct sVar* result;
struct sVar* __result_obj__108;
struct sVar* __result_obj__109;
struct sVar* result_77;
struct sVar* __result_obj__110;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result,0,sizeof(struct sVar*));
        __result_obj__108 = result;
        return __result_obj__108;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__109 = self->it->item;
        return __result_obj__109;
    }
    memset(&result_77,0,sizeof(struct sVar*));
    __result_obj__110 = result_77;
    return __result_obj__110;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_insert(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash;
unsigned int it;
_Bool same_key_exist;
char* it2;
struct map$2char$phsVar$ph* __result_obj__118;
    if(    self->len*10>=self->size    ) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    (_Bool)1    ) {
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
    __result_obj__118 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__118;
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
struct sVar* default_value_80;
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
                memset(&default_value_80,0,sizeof(struct sVar*));
                __right_value0 = (void*)0;
                items[n]=((struct sVar*)(__right_value0=map$2char$phsVar$ph_at(self,it,(struct sVar*)come_increment_ref_count(default_value_80))));
                come_call_finalizer(sVar_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                len++;
                come_call_finalizer(sVar_finalize, default_value_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer(sVar_finalize, default_value_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result;
char* __result_obj__111;
char* __result_obj__112;
char* result_78;
char* __result_obj__113;
    if(    self==((void*)0)    ) {
        memset(&result,0,sizeof(char*));
        __result_obj__111 = result;
        return __result_obj__111;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__112 = self->key_list->it->item;
        return __result_obj__112;
    }
    memset(&result_78,0,sizeof(char*));
    __result_obj__113 = result_78;
    return __result_obj__113;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result;
char* __result_obj__114;
char* __result_obj__115;
char* result_79;
char* __result_obj__116;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result,0,sizeof(char*));
        __result_obj__114 = result;
        return __result_obj__114;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__115 = self->key_list->it->item;
        return __result_obj__115;
    }
    memset(&result_79,0,sizeof(char*));
    __result_obj__116 = result_79;
    return __result_obj__116;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value0 = (void*)0;
struct list_item$1char$ph* litem;
char* __dec_obj116;
struct list_item$1char$ph* litem_81;
char* __dec_obj117;
struct list_item$1char$ph* litem_82;
char* __dec_obj118;
struct list$1char$ph* __result_obj__117;
    if(    self->len==0    ) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1162, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj116=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_81=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1172, "struct list_item$1char$ph*"))));
        litem_81->prev=self->head;
        litem_81->next=((void*)0);
        __dec_obj117=litem_81->item,
        litem_81->item=(char*)come_increment_ref_count(item);
        __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_81;
        self->head->next=litem_81;
    }
    else {
        __right_value0 = (void*)0;
        litem_82=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1182, "struct list_item$1char$ph*"))));
        litem_82->prev=self->tail;
        litem_82->next=((void*)0);
        __dec_obj118=litem_82->item,
        litem_82->item=(char*)come_increment_ref_count(item);
        __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_82;
        self->tail=litem_82;
    }
    self->len++;
    __result_obj__117 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__117;
}

static struct list$1sVar$ph* list$1sVar$ph_add(struct list$1sVar$ph* self, struct sVar* item){
void* __right_value0 = (void*)0;
struct list_item$1sVar$ph* litem;
struct sVar* __dec_obj119;
struct list_item$1sVar$ph* litem_83;
struct sVar* __dec_obj120;
struct list_item$1sVar$ph* litem_84;
struct sVar* __dec_obj121;
struct list$1sVar$ph* __result_obj__119;
    if(    self->len==0    ) {
        litem=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value0=(struct list_item$1sVar$ph*)come_calloc_v2(1, sizeof(struct list_item$1sVar$ph)*(1), "/usr/local/include/neo-c.h", 1084, "struct list_item$1sVar$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj119=litem->item,
        litem->item=(struct sVar*)come_increment_ref_count(item);
        come_call_finalizer(sVar_finalize, __dec_obj119,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_83=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value0=(struct list_item$1sVar$ph*)come_calloc_v2(1, sizeof(struct list_item$1sVar$ph)*(1), "/usr/local/include/neo-c.h", 1094, "struct list_item$1sVar$ph*"))));
        litem_83->prev=self->head;
        litem_83->next=((void*)0);
        __dec_obj120=litem_83->item,
        litem_83->item=(struct sVar*)come_increment_ref_count(item);
        come_call_finalizer(sVar_finalize, __dec_obj120,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_83;
        self->head->next=litem_83;
    }
    else {
        __right_value0 = (void*)0;
        litem_84=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value0=(struct list_item$1sVar$ph*)come_calloc_v2(1, sizeof(struct list_item$1sVar$ph)*(1), "/usr/local/include/neo-c.h", 1104, "struct list_item$1sVar$ph*"))));
        litem_84->prev=self->tail;
        litem_84->next=((void*)0);
        __dec_obj121=litem_84->item,
        litem_84->item=(struct sVar*)come_increment_ref_count(item);
        come_call_finalizer(sVar_finalize, __dec_obj121,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_84;
        self->tail=litem_84;
    }
    self->len++;
    __result_obj__119 = self;
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__119;
}

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sVar* self;
char* __dec_obj122;
struct sType* __dec_obj123;
char* __dec_obj124;
    self=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "07var.c", 843, "struct sVar*"));
    __right_value0 = (void*)0;
    __dec_obj122=self->mName,
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj123=self->mType,
    self->mType=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj123,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->mGlobal=(_Bool)1;
    __right_value0 = (void*)0;
    __dec_obj124=self->mCValueName,
    self->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0,0, (void*)0);
    self->mAllocaValue=(_Bool)0;
    self->mNoFree=(_Bool)0;
    __right_value0 = (void*)0;
    map$2char$phsVar$ph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sVar_finalize, self, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sVar* self;
char* __dec_obj125;
struct sType* __dec_obj126;
char* __dec_obj127;
    self=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "07var.c", 860, "struct sVar*"));
    __right_value0 = (void*)0;
    __dec_obj125=self->mName,
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj126=self->mType,
    self->mType=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj126,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->mGlobal=(_Bool)1;
    __right_value0 = (void*)0;
    __dec_obj127=self->mCValueName,
    self->mCValueName=(char*)come_increment_ref_count(__builtin_string(c_value));
    __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0, (void*)0);
    self->mAllocaValue=(_Bool)0;
    self->mNoFree=(_Bool)0;
    __right_value0 = (void*)0;
    map$2char$phsVar$ph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sVar_finalize, self, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info){
int sline_real;
_Bool is_type_name_flag;
_Bool multiple_declare;
char* p;
int sline;
void* __right_value0 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var2
;struct sType* type=0;
char* name=0;
_Bool err=0;
struct tuple2$2sType$phchar$ph* multiple_assign_var3
;struct sType* type_85=0;
char* name_86=0;
_Bool no_output_err;
_Bool no_comma;
_Bool no_output_come_code;
struct sNode* exp;
_Bool attr_define;
char* p_87;
int sline_88;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var4
;struct sType* type_89=0;
char* name_90=0;
_Bool err_91=0;
void* __right_value1 = (void*)0;
void* __right_value2 = (void*)0;
struct sFun* fun;
char* buf2;
struct list$1char$ph* multiple_assign;
struct list$1char$ph* __dec_obj128;
char* buf3;
_Bool no_comma_92;
struct sNode* right_value;
struct sNode* __dec_obj129;
void* __right_value3 = (void*)0;
struct sNode* _inf_value3;
struct sStoreNode* _inf_obj_value3;
void* __right_value4 = (void*)0;
struct sNode* node;
struct sNode* __result_obj__120;
struct sNode* _inf_value4;
struct sNewChannel* _inf_obj_value4;
struct sNode* node_93;
struct sNode* __result_obj__123;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare_94;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var5
;struct sType* base_type=0;
char* name_95=0;
_Bool err_96=0;
struct tuple2$2sType$phchar$ph* multiple_assign_var6
;struct sType* type2=0;
char* var_name=0;
_Bool no_comma_97;
struct sNode* exp_98;
_Bool no_comma_101;
struct sNode* exp_102;
struct tuple2$2sType$phchar$ph* multiple_assign_var7
;struct sType* type2_103=0;
char* var_name_104=0;
_Bool no_comma_105;
struct sNode* exp_106;
_Bool no_comma_107;
struct sNode* exp_108;
struct sNode* right_node;
char* var_name2;
struct sNode* _inf_value5;
struct sStoreNode* _inf_obj_value5;
struct sNode* node_109;
struct sNode* __result_obj__126;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var8
;struct sType* type_110=0;
char* name_111=0;
_Bool err_112=0;
char* __dec_obj137;
struct sNode* _inf_value6;
struct sLoadNode* _inf_obj_value6;
struct sNode* self_node;
struct sNode* right_node_115;
struct sNode* node_116;
struct sNode* __result_obj__129;
struct sNode* __result_obj__130;
struct sNode* right_value_117;
struct sNode* __dec_obj143;
struct sNode* _inf_value7;
struct sStoreNode* _inf_obj_value7;
struct sNode* node_118;
struct sNode* __result_obj__131;
_Bool _conditional_value_X0;
struct sNode* _inf_value8;
struct sLoadNode* _inf_obj_value8;
struct sNode* node_119;
struct sNode* __dec_obj144;
struct sNode* __result_obj__132;
struct sNode* _inf_value9;
struct sLoadNode* _inf_obj_value9;
struct sNode* node_120;
struct sNode* __dec_obj145;
struct sNode* __result_obj__133;
char* word;
char* __dec_obj146;
char* __dec_obj147;
_Bool is_type_name_flag_121;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var9
;struct sType* type_122=0;
char* name_123=0;
_Bool err_124=0;
struct sNode* _inf_value10;
struct sLoadNode* _inf_obj_value10;
struct sNode* node_125;
struct sNode* __result_obj__134;
struct sNode* right_value_126;
_Bool no_comma_127;
struct sNode* __dec_obj148;
struct sNode* __dec_obj149;
struct sNode* __dec_obj150;
struct sNode* __dec_obj151;
struct sNode* _inf_value11;
struct sStoreNode* _inf_obj_value11;
struct sNode* node_128;
struct sNode* __result_obj__135;
struct sNode* _inf_value12;
struct sStoreNode* _inf_obj_value12;
struct sNode* node_129;
struct sNode* __result_obj__136;
memset(&word, 0, sizeof(word));
    sline_real=info->sline_real;
    info->sline_real=head_sline;
    is_type_name_flag=is_type_name(buf,info);
    multiple_declare=(_Bool)0;
    if(    is_type_name_flag&&!info->in_offsetof    ) {
        p=info->p;
        sline=info->sline;
        info->p=head;
        info->sline=head_sline;
        if(        isalpha(*info->p)||*info->p==95        ) {
            parse_sharp_v5(info);
            multiple_assign_var2=((struct tuple3$3sType$phchar$phbool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            name=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err=multiple_assign_var2->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            parse_sharp_v5(info);
            if(            err            ) {
                parse_sharp_v5(info);
                __right_value0 = (void*)0;
                multiple_assign_var3=((struct tuple2$2sType$phchar$ph*)(__right_value0=parse_variable_name_on_multiple_declare((struct sType*)come_increment_ref_count(type),(_Bool)1,info)));
                type_85=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
                name_86=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(                *info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p==123                    ) {
                        __right_value0 = (void*)0;
                        ((char*)(__right_value0=skip_block(info,(_Bool)0)));
                        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                    }
                    else {
                        no_output_err=info->no_output_err;
                        no_comma=info->no_comma;
                        no_output_come_code=info->no_output_come_code;
                        info->no_output_err=(_Bool)1;
                        info->no_comma=(_Bool)1;
                        info->no_output_come_code=(_Bool)1;
                        __right_value0 = (void*)0;
                        exp=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                        info->no_comma=no_comma;
                        info->no_output_err=no_output_err;
                        info->no_output_come_code=no_output_come_code;
                        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    }
                }
                if(                !is_type_name(name_86,info)&&*info->p==44                ) {
                    multiple_declare=(_Bool)1;
                }
                come_call_finalizer(sType_finalize, type_85, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name_86 = come_decrement_ref_count(name_86, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        info->p=p;
        info->sline=sline;
    }
    attr_define=(_Bool)0;
    if(    is_type_name_flag&&info->defining_class&&!info->in_offsetof    ) {
        p_87=info->p;
        sline_88=info->sline;
        info->p=head;
        info->sline=head_sline;
        parse_sharp_v5(info);
        __right_value0 = (void*)0;
        multiple_assign_var4=((struct tuple3$3sType$phchar$phbool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_89=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        name_90=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_91=multiple_assign_var4->v3;
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        parse_sharp_v5(info);
        if(        err_91&&parsecmp("self",info)        ) {
            attr_define=(_Bool)1;
        }
        info->p=p_87;
        info->sline=sline_88;
        come_call_finalizer(sType_finalize, type_89, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name_90 = come_decrement_ref_count(name_90, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    parse_sharp_v5(info);
    __right_value0 = (void*)0;
    fun=((struct sFun*)(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=__builtin_string(buf))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(    (!gComeC&&charp_operator_equals(buf,"var"))||charp_operator_equals(buf,"auto")||charp_operator_equals(buf,"__auto_type")    ) {
        parse_sharp_v5(info);
        __right_value0 = (void*)0;
        buf2=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        multiple_assign=((void*)0);
        if(        *info->p==44        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj128=multiple_assign,
            multiple_assign=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "07var.c", 966, "struct list$1char$ph*"))));
            come_call_finalizer(list$1char$ph_finalize, __dec_obj128,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            __right_value0 = (void*)0;
            list$1char$ph_push_back(multiple_assign,(char*)come_increment_ref_count((char*)come_memdup(buf2, "07var.c", 967, "char*")));
            while(            *info->p==44            ) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                __right_value0 = (void*)0;
                buf3=(char*)come_increment_ref_count(parse_word(info));
                parse_sharp_v5(info);
                __right_value0 = (void*)0;
                list$1char$ph_push_back(multiple_assign,(char*)come_increment_ref_count((char*)come_memdup(buf3, "07var.c", 977, "char*")));
                (buf3 = come_decrement_ref_count(buf3, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        parse_sharp_v5(info);
        if(        *info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign        ) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            no_comma_92=info->no_comma;
            info->no_comma=(_Bool)1;
            __right_value0 = (void*)0;
            right_value=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
            info->no_comma=no_comma_92;
            parse_sharp_v5(info);
            __right_value0 = (void*)0;
            __dec_obj129=right_value,
            right_value=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value),info));
            (__dec_obj129 ? __dec_obj129 = come_decrement_ref_count(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0, (void*)0) :0);
            parse_sharp_v5(info);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 996, "struct sNode");
            _inf_obj_value3=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value3=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "07var.c", 996, "struct sStoreNode*")),(char*)come_increment_ref_count(__builtin_string(buf2)),(struct list$1char$ph*)come_increment_ref_count(multiple_assign),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value),info,(char*)come_increment_ref_count(xsprintf(""))))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sStoreNode_finalize;
            _inf_value3->clone=(void*)sStoreNode_clone;
            _inf_value3->compile=(void*)sStoreNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sStoreNode_kind;
            _inf_value3->no_mutex=(void*)sNodeBase_no_mutex;
            node=(struct sNode*)come_increment_ref_count(_inf_value3);
            come_call_finalizer(sStoreNode_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            info->sline_real=sline_real;
            __result_obj__120 = (struct sNode*)come_increment_ref_count(node);
            ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            (buf2 = come_decrement_ref_count(buf2, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(list$1char$ph$p_finalize, multiple_assign, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((__result_obj__120) ? __result_obj__120 = come_decrement_ref_count(__result_obj__120, ((struct sNode*)__result_obj__120)->finalize, ((struct sNode*)__result_obj__120)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__120;
            ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            err_msg(info,"var requires a right value(%c)",*info->p);
            exit(1);
        }
        (buf2 = come_decrement_ref_count(buf2, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, multiple_assign, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    gComePthread&&charp_operator_equals(buf,"__channel__")    ) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1006, "struct sNode");
        _inf_obj_value4=(struct sNewChannel*)come_increment_ref_count(((struct sNewChannel*)(__right_value1=sNewChannel_initialize((struct sNewChannel*)come_increment_ref_count((struct sNewChannel*)come_calloc_v2(1, sizeof(struct sNewChannel)*(1), "07var.c", 1006, "struct sNewChannel*")),info))));
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sNewChannel_finalize;
        _inf_value4->clone=(void*)sNewChannel_clone;
        _inf_value4->compile=(void*)sNewChannel_compile;
        _inf_value4->sline=(void*)sNodeBase_sline;
        _inf_value4->sline_real=(void*)sNodeBase_sline_real;
        _inf_value4->sname=(void*)sNodeBase_sname;
        _inf_value4->terminated=(void*)sNodeBase_terminated;
        _inf_value4->kind=(void*)sNewChannel_kind;
        _inf_value4->no_mutex=(void*)sNodeBase_no_mutex;
        __right_value2 = (void*)0;
        node_93=(struct sNode*)come_increment_ref_count(_inf_value4);
        come_call_finalizer(sNewChannel_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        info->sline_real=sline_real;
        __result_obj__123 = (struct sNode*)come_increment_ref_count(node_93);
        ((node_93) ? node_93 = come_decrement_ref_count(node_93, ((struct sNode*)node_93)->finalize, ((struct sNode*)node_93)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        ((__result_obj__123) ? __result_obj__123 = come_decrement_ref_count(__result_obj__123, ((struct sNode*)__result_obj__123)->finalize, ((struct sNode*)__result_obj__123)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__123;
        ((node_93) ? node_93 = come_decrement_ref_count(node_93, ((struct sNode*)node_93)->finalize, ((struct sNode*)node_93)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(    multiple_declare    ) {
        info->p=head;
        info->sline=head_sline;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        multiple_declare_94=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph_initialize((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "07var.c", 1014, "struct list$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        parse_sharp_v5(info);
        __right_value0 = (void*)0;
        multiple_assign_var5=((struct tuple3$3sType$phchar$phbool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        base_type=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
        name_95=(char*)come_increment_ref_count(multiple_assign_var5->v2);
        err_96=multiple_assign_var5->v3;
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        parse_sharp_v5(info);
        if(        !err_96        ) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        parse_sharp_v5(info);
        __right_value0 = (void*)0;
        multiple_assign_var6=((struct tuple2$2sType$phchar$ph*)(__right_value0=parse_variable_name_on_multiple_declare((struct sType*)come_increment_ref_count(base_type),(_Bool)1,info)));
        type2=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
        var_name=(char*)come_increment_ref_count(multiple_assign_var6->v2);
        come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        parse_sharp_v5(info);
        if(        *info->p==61&&*(info->p+1)!=61        ) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            type2->mClass->mStruct&&list$1sNode$ph_length(type2->mArrayNum)==0            ) {
                info->array_initializer=(_Bool)1;
                no_comma_97=info->no_comma;
                info->no_comma=(_Bool)1;
                __right_value0 = (void*)0;
                exp_98=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                info->no_comma=no_comma_97;
                info->array_initializer=(_Bool)0;
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_94,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1041, "struct tuple3$3sType$phchar$phsNode$ph")),(struct sType*)come_increment_ref_count(type2),(char*)come_increment_ref_count(var_name),(struct sNode*)come_increment_ref_count(exp_98))));
                ((exp_98) ? exp_98 = come_decrement_ref_count(exp_98, ((struct sNode*)exp_98)->finalize, ((struct sNode*)exp_98)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            else {
                info->array_initializer=(_Bool)1;
                no_comma_101=info->no_comma;
                info->no_comma=(_Bool)1;
                __right_value0 = (void*)0;
                exp_102=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                info->no_comma=no_comma_101;
                info->array_initializer=(_Bool)0;
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_94,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1051, "struct tuple3$3sType$phchar$phsNode$ph")),(struct sType*)come_increment_ref_count(type2),(char*)come_increment_ref_count(var_name),(struct sNode*)come_increment_ref_count(exp_102))));
                ((exp_102) ? exp_102 = come_decrement_ref_count(exp_102, ((struct sNode*)exp_102)->finalize, ((struct sNode*)exp_102)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_94,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1055, "struct tuple3$3sType$phchar$phsNode$ph")),(struct sType*)come_increment_ref_count(type2),(char*)come_increment_ref_count(var_name),(struct sNode*)come_increment_ref_count((struct sNode*)((void*)0)))));
        }
        while(        *info->p==44        ) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            __right_value0 = (void*)0;
            multiple_assign_var7=((struct tuple2$2sType$phchar$ph*)(__right_value0=parse_variable_name_on_multiple_declare((struct sType*)come_increment_ref_count(base_type),(_Bool)0,info)));
            type2_103=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
            var_name_104=(char*)come_increment_ref_count(multiple_assign_var7->v2);
            come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(            *info->p==61&&*(info->p+1)!=61            ) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type2_103->mClass->mStruct&&list$1sNode$ph_length(type2_103->mArrayNum)==0                ) {
                    info->array_initializer=(_Bool)1;
                    no_comma_105=info->no_comma;
                    info->no_comma=(_Bool)1;
                    __right_value0 = (void*)0;
                    exp_106=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                    info->no_comma=no_comma_105;
                    info->array_initializer=(_Bool)0;
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_94,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1077, "struct tuple3$3sType$phchar$phsNode$ph")),(struct sType*)come_increment_ref_count(type2_103),(char*)come_increment_ref_count(var_name_104),(struct sNode*)come_increment_ref_count(exp_106))));
                    ((exp_106) ? exp_106 = come_decrement_ref_count(exp_106, ((struct sNode*)exp_106)->finalize, ((struct sNode*)exp_106)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                }
                else {
                    no_comma_107=info->no_comma;
                    info->no_comma=(_Bool)1;
                    info->array_initializer=(_Bool)1;
                    __right_value0 = (void*)0;
                    exp_108=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                    info->no_comma=no_comma_107;
                    info->array_initializer=(_Bool)0;
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_94,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1089, "struct tuple3$3sType$phchar$phsNode$ph")),(struct sType*)come_increment_ref_count(type2_103),(char*)come_increment_ref_count(var_name_104),(struct sNode*)come_increment_ref_count(exp_108))));
                    ((exp_108) ? exp_108 = come_decrement_ref_count(exp_108, ((struct sNode*)exp_108)->finalize, ((struct sNode*)exp_108)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                }
            }
            else {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_94,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1093, "struct tuple3$3sType$phchar$phsNode$ph")),(struct sType*)come_increment_ref_count(type2_103),(char*)come_increment_ref_count(var_name_104),(struct sNode*)come_increment_ref_count((struct sNode*)((void*)0)))));
            }
            come_call_finalizer(sType_finalize, type2_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (var_name_104 = come_decrement_ref_count(var_name_104, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        right_node=((void*)0);
        __right_value0 = (void*)0;
        var_name2=(char*)come_increment_ref_count(__builtin_string(""));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1100, "struct sNode");
        _inf_obj_value5=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value3=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "07var.c", 1100, "struct sStoreNode*")),(char*)come_increment_ref_count(__builtin_string(buf)),((void*)0),(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(multiple_declare_94),(struct sType*)come_increment_ref_count(base_type),(_Bool)1,((void*)0),info,(char*)come_increment_ref_count(xsprintf(""))))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sStoreNode_finalize;
        _inf_value5->clone=(void*)sStoreNode_clone;
        _inf_value5->compile=(void*)sStoreNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sStoreNode_kind;
        _inf_value5->no_mutex=(void*)sNodeBase_no_mutex;
        __right_value4 = (void*)0;
        node_109=(struct sNode*)come_increment_ref_count(_inf_value5);
        come_call_finalizer(sStoreNode_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        info->sline_real=sline_real;
        __result_obj__126 = (struct sNode*)come_increment_ref_count(node_109);
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, multiple_declare_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, base_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name_95 = come_decrement_ref_count(name_95, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        (var_name2 = come_decrement_ref_count(var_name2, (void*)0, (void*)0, 0, 0, (void*)0));
        ((node_109) ? node_109 = come_decrement_ref_count(node_109, ((struct sNode*)node_109)->finalize, ((struct sNode*)node_109)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        ((__result_obj__126) ? __result_obj__126 = come_decrement_ref_count(__result_obj__126, ((struct sNode*)__result_obj__126)->finalize, ((struct sNode*)__result_obj__126)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__126;
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, multiple_declare_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, base_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name_95 = come_decrement_ref_count(name_95, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        (var_name2 = come_decrement_ref_count(var_name2, (void*)0, (void*)0, 0, 0, (void*)0));
        ((node_109) ? node_109 = come_decrement_ref_count(node_109, ((struct sNode*)node_109)->finalize, ((struct sNode*)node_109)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(    attr_define    ) {
        info->p=head;
        info->sline=head_sline;
        parse_sharp_v5(info);
        __right_value0 = (void*)0;
        multiple_assign_var8=((struct tuple3$3sType$phchar$phbool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_110=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_111=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_112=multiple_assign_var8->v3;
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        parse_sharp_v5(info);
        if(        !err_112        ) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        info->p+=strlen("self.");
        __right_value0 = (void*)0;
        __dec_obj137=name_111,
        name_111=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0,0, (void*)0);
        parse_sharp_v5(info);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        list$1tuple2$2char$phsType$ph$ph_add(info->defining_class->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "07var.c", 1123, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name_111),(struct sType*)come_increment_ref_count(type_110))));
        if(        *info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62        ) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1131, "struct sNode");
            _inf_obj_value6=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value2=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc_v2(1, sizeof(struct sLoadNode)*(1), "07var.c", 1131, "struct sLoadNode*")),(char*)come_increment_ref_count(__builtin_string("self")),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sLoadNode_finalize;
            _inf_value6->clone=(void*)sLoadNode_clone;
            _inf_value6->compile=(void*)sLoadNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sLoadNode_terminated;
            _inf_value6->kind=(void*)sLoadNode_kind;
            _inf_value6->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value3 = (void*)0;
            self_node=(struct sNode*)come_increment_ref_count(_inf_value6);
            come_call_finalizer(sLoadNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            __right_value0 = (void*)0;
            right_node_115=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
            __right_value0 = (void*)0;
            node_116=(struct sNode*)come_increment_ref_count(store_field(self_node,(struct sNode*)come_increment_ref_count(right_node_115),(char*)come_increment_ref_count(name_111),info));
            info->sline_real=sline_real;
            __result_obj__129 = (struct sNode*)come_increment_ref_count(node_116);
            ((self_node) ? self_node = come_decrement_ref_count(self_node, ((struct sNode*)self_node)->finalize, ((struct sNode*)self_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            ((right_node_115) ? right_node_115 = come_decrement_ref_count(right_node_115, ((struct sNode*)right_node_115)->finalize, ((struct sNode*)right_node_115)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            ((node_116) ? node_116 = come_decrement_ref_count(node_116, ((struct sNode*)node_116)->finalize, ((struct sNode*)node_116)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            come_call_finalizer(sType_finalize, type_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_111 = come_decrement_ref_count(name_111, (void*)0, (void*)0, 0, 0, (void*)0));
            ((__result_obj__129) ? __result_obj__129 = come_decrement_ref_count(__result_obj__129, ((struct sNode*)__result_obj__129)->finalize, ((struct sNode*)__result_obj__129)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__129;
            ((self_node) ? self_node = come_decrement_ref_count(self_node, ((struct sNode*)self_node)->finalize, ((struct sNode*)self_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            ((right_node_115) ? right_node_115 = come_decrement_ref_count(right_node_115, ((struct sNode*)right_node_115)->finalize, ((struct sNode*)right_node_115)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            ((node_116) ? node_116 = come_decrement_ref_count(node_116, ((struct sNode*)node_116)->finalize, ((struct sNode*)node_116)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            __result_obj__130 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_null_node(info))));
            come_call_finalizer(sType_finalize, type_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_111 = come_decrement_ref_count(name_111, (void*)0, (void*)0, 0, 0, (void*)0));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__130) ? __result_obj__130 = come_decrement_ref_count(__result_obj__130, ((struct sNode*)__result_obj__130)->finalize, ((struct sNode*)__result_obj__130)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__130;
        }
        come_call_finalizer(sType_finalize, type_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name_111 = come_decrement_ref_count(name_111, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(    !is_type_name_flag&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign    ) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        __right_value0 = (void*)0;
        right_value_117=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
        parse_sharp_v5(info);
        __right_value0 = (void*)0;
        __dec_obj143=right_value_117,
        right_value_117=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_117),info));
        (__dec_obj143 ? __dec_obj143 = come_decrement_ref_count(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0, (void*)0) :0);
        parse_sharp_v5(info);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1156, "struct sNode");
        _inf_obj_value7=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value3=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "07var.c", 1156, "struct sStoreNode*")),(char*)come_increment_ref_count(__builtin_string(buf)),((void*)0),((void*)0),((void*)0),(_Bool)0,(struct sNode*)come_increment_ref_count(right_value_117),info,(char*)come_increment_ref_count(xsprintf(""))))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sStoreNode_finalize;
        _inf_value7->clone=(void*)sStoreNode_clone;
        _inf_value7->compile=(void*)sStoreNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sStoreNode_kind;
        _inf_value7->no_mutex=(void*)sNodeBase_no_mutex;
        __right_value4 = (void*)0;
        node_118=(struct sNode*)come_increment_ref_count(_inf_value7);
        come_call_finalizer(sStoreNode_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        info->sline_real=sline_real;
        __result_obj__131 = (struct sNode*)come_increment_ref_count(node_118);
        ((right_value_117) ? right_value_117 = come_decrement_ref_count(right_value_117, ((struct sNode*)right_value_117)->finalize, ((struct sNode*)right_value_117)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((node_118) ? node_118 = come_decrement_ref_count(node_118, ((struct sNode*)node_118)->finalize, ((struct sNode*)node_118)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        ((__result_obj__131) ? __result_obj__131 = come_decrement_ref_count(__result_obj__131, ((struct sNode*)__result_obj__131)->finalize, ((struct sNode*)__result_obj__131)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__131;
        ((right_value_117) ? right_value_117 = come_decrement_ref_count(right_value_117, ((struct sNode*)right_value_117)->finalize, ((struct sNode*)right_value_117)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((node_118) ? node_118 = come_decrement_ref_count(node_118, ((struct sNode*)node_118)->finalize, ((struct sNode*)node_118)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(    __right_value0 = (void*)0,     __right_value1 = (void*)0,     __right_value2 = (void*)0,     ({(_conditional_value_X0=(!is_type_name_flag||((struct sFun*)(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=__builtin_string(buf))))))));    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    _conditional_value_X0;})    ) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1161, "struct sNode");
        _inf_obj_value8=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value2=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc_v2(1, sizeof(struct sLoadNode)*(1), "07var.c", 1161, "struct sLoadNode*")),(char*)come_increment_ref_count(__builtin_string(buf)),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sLoadNode_finalize;
        _inf_value8->clone=(void*)sLoadNode_clone;
        _inf_value8->compile=(void*)sLoadNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sLoadNode_terminated;
        _inf_value8->kind=(void*)sLoadNode_kind;
        _inf_value8->no_mutex=(void*)sNodeBase_no_mutex;
        __right_value3 = (void*)0;
        node_119=(struct sNode*)come_increment_ref_count(_inf_value8);
        come_call_finalizer(sLoadNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __right_value0 = (void*)0;
        __dec_obj144=node_119,
        node_119=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_119),info));
        (__dec_obj144 ? __dec_obj144 = come_decrement_ref_count(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0, (void*)0) :0);
        info->sline_real=sline_real;
        __result_obj__132 = (struct sNode*)come_increment_ref_count(node_119);
        ((node_119) ? node_119 = come_decrement_ref_count(node_119, ((struct sNode*)node_119)->finalize, ((struct sNode*)node_119)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        ((__result_obj__132) ? __result_obj__132 = come_decrement_ref_count(__result_obj__132, ((struct sNode*)__result_obj__132)->finalize, ((struct sNode*)__result_obj__132)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__132;
        ((node_119) ? node_119 = come_decrement_ref_count(node_119, ((struct sNode*)node_119)->finalize, ((struct sNode*)node_119)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(    !is_type_name_flag    ) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1170, "struct sNode");
        _inf_obj_value9=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value2=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc_v2(1, sizeof(struct sLoadNode)*(1), "07var.c", 1170, "struct sLoadNode*")),(char*)come_increment_ref_count(__builtin_string(buf)),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sLoadNode_finalize;
        _inf_value9->clone=(void*)sLoadNode_clone;
        _inf_value9->compile=(void*)sLoadNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sLoadNode_terminated;
        _inf_value9->kind=(void*)sLoadNode_kind;
        _inf_value9->no_mutex=(void*)sNodeBase_no_mutex;
        __right_value3 = (void*)0;
        node_120=(struct sNode*)come_increment_ref_count(_inf_value9);
        come_call_finalizer(sLoadNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __right_value0 = (void*)0;
        __dec_obj145=node_120,
        node_120=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_120),info));
        (__dec_obj145 ? __dec_obj145 = come_decrement_ref_count(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0, (void*)0) :0);
        info->sline_real=sline_real;
        __result_obj__133 = (struct sNode*)come_increment_ref_count(node_120);
        ((node_120) ? node_120 = come_decrement_ref_count(node_120, ((struct sNode*)node_120)->finalize, ((struct sNode*)node_120)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        ((__result_obj__133) ? __result_obj__133 = come_decrement_ref_count(__result_obj__133, ((struct sNode*)__result_obj__133)->finalize, ((struct sNode*)__result_obj__133)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__133;
        ((node_120) ? node_120 = come_decrement_ref_count(node_120, ((struct sNode*)node_120)->finalize, ((struct sNode*)node_120)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else {
        info->p=head;
        info->sline=head_sline;
        if(        isalpha(*info->p)||*info->p==95        ) {
            __right_value0 = (void*)0;
            __dec_obj146=word,
            word=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else {
            __right_value0 = (void*)0;
            __dec_obj147=word,
            word=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0,0, (void*)0);
        }
        is_type_name_flag_121=is_type_name(word,info);
        info->p=head;
        info->sline=head_sline;
        if(        is_type_name_flag_121        ) {
            parse_sharp_v5(info);
            __right_value0 = (void*)0;
            multiple_assign_var9=((struct tuple3$3sType$phchar$phbool$*)(__right_value0=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type_122=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
            name_123=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            err_124=multiple_assign_var9->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            parse_sharp_v5(info);
            if(            !err_124            ) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            parse_sharp_v5(info);
            if(            *info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&info->no_assign            ) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1207, "struct sNode");
                _inf_obj_value10=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value1=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc_v2(1, sizeof(struct sLoadNode)*(1), "07var.c", 1207, "struct sLoadNode*")),(char*)come_increment_ref_count(name_123),info))));
                _inf_value10->_protocol_obj=_inf_obj_value10;
                _inf_value10->finalize=(void*)sLoadNode_finalize;
                _inf_value10->clone=(void*)sLoadNode_clone;
                _inf_value10->compile=(void*)sLoadNode_compile;
                _inf_value10->sline=(void*)sNodeBase_sline;
                _inf_value10->sline_real=(void*)sNodeBase_sline_real;
                _inf_value10->sname=(void*)sNodeBase_sname;
                _inf_value10->terminated=(void*)sLoadNode_terminated;
                _inf_value10->kind=(void*)sLoadNode_kind;
                _inf_value10->no_mutex=(void*)sNodeBase_no_mutex;
                __right_value2 = (void*)0;
                node_125=(struct sNode*)come_increment_ref_count(_inf_value10);
                come_call_finalizer(sLoadNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                info->sline_real=sline_real;
                __result_obj__134 = (struct sNode*)come_increment_ref_count(node_125);
                ((node_125) ? node_125 = come_decrement_ref_count(node_125, ((struct sNode*)node_125)->finalize, ((struct sNode*)node_125)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                come_call_finalizer(sType_finalize, type_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name_123 = come_decrement_ref_count(name_123, (void*)0, (void*)0, 0, 0, (void*)0));
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
                ((__result_obj__134) ? __result_obj__134 = come_decrement_ref_count(__result_obj__134, ((struct sNode*)__result_obj__134)->finalize, ((struct sNode*)__result_obj__134)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__134;
                ((node_125) ? node_125 = come_decrement_ref_count(node_125, ((struct sNode*)node_125)->finalize, ((struct sNode*)node_125)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            else if(            *info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign            ) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_value_126=((void*)0);
                if(                (type_122->mClass->mStruct||type_122->mClass->mUnion)&&list$1sNode$ph_length(type_122->mArrayNum)==0                ) {
                    info->array_initializer=(_Bool)1;
                    no_comma_127=info->no_comma;
                    info->no_comma=(_Bool)1;
                    __right_value0 = (void*)0;
                    __dec_obj148=right_value_126,
                    right_value_126=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                    (__dec_obj148 ? __dec_obj148 = come_decrement_ref_count(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0, (void*)0) :0);
                    info->no_comma=no_comma_127;
                    info->array_initializer=(_Bool)0;
                }
                else if(                list$1sNode$ph_length(type_122->mArrayNum)>0||type_122->mArrayPointerType                ) {
                    info->array_initializer=(_Bool)1;
                    parse_sharp_v5(info);
                    __right_value0 = (void*)0;
                    __dec_obj149=right_value_126,
                    right_value_126=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                    (__dec_obj149 ? __dec_obj149 = come_decrement_ref_count(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0, (void*)0) :0);
                    parse_sharp_v5(info);
                    info->array_initializer=(_Bool)0;
                }
                else {
                    parse_sharp_v5(info);
                    __right_value0 = (void*)0;
                    __dec_obj150=right_value_126,
                    right_value_126=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                    (__dec_obj150 ? __dec_obj150 = come_decrement_ref_count(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0, (void*)0) :0);
                    parse_sharp_v5(info);
                }
                __right_value0 = (void*)0;
                __dec_obj151=right_value_126,
                right_value_126=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_126),info));
                (__dec_obj151 ? __dec_obj151 = come_decrement_ref_count(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0, (void*)0) :0);
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1242, "struct sNode");
                _inf_obj_value11=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value2=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "07var.c", 1242, "struct sStoreNode*")),(char*)come_increment_ref_count(name_123),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_122),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_126),info,(char*)come_increment_ref_count(xsprintf(""))))));
                _inf_value11->_protocol_obj=_inf_obj_value11;
                _inf_value11->finalize=(void*)sStoreNode_finalize;
                _inf_value11->clone=(void*)sStoreNode_clone;
                _inf_value11->compile=(void*)sStoreNode_compile;
                _inf_value11->sline=(void*)sNodeBase_sline;
                _inf_value11->sline_real=(void*)sNodeBase_sline_real;
                _inf_value11->sname=(void*)sNodeBase_sname;
                _inf_value11->terminated=(void*)sNodeBase_terminated;
                _inf_value11->kind=(void*)sStoreNode_kind;
                _inf_value11->no_mutex=(void*)sNodeBase_no_mutex;
                __right_value3 = (void*)0;
                node_128=(struct sNode*)come_increment_ref_count(_inf_value11);
                come_call_finalizer(sStoreNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                info->sline_real=sline_real;
                __result_obj__135 = (struct sNode*)come_increment_ref_count(node_128);
                ((right_value_126) ? right_value_126 = come_decrement_ref_count(right_value_126, ((struct sNode*)right_value_126)->finalize, ((struct sNode*)right_value_126)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                ((node_128) ? node_128 = come_decrement_ref_count(node_128, ((struct sNode*)node_128)->finalize, ((struct sNode*)node_128)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                come_call_finalizer(sType_finalize, type_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name_123 = come_decrement_ref_count(name_123, (void*)0, (void*)0, 0, 0, (void*)0));
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
                ((__result_obj__135) ? __result_obj__135 = come_decrement_ref_count(__result_obj__135, ((struct sNode*)__result_obj__135)->finalize, ((struct sNode*)__result_obj__135)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__135;
                ((right_value_126) ? right_value_126 = come_decrement_ref_count(right_value_126, ((struct sNode*)right_value_126)->finalize, ((struct sNode*)right_value_126)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                ((node_128) ? node_128 = come_decrement_ref_count(node_128, ((struct sNode*)node_128)->finalize, ((struct sNode*)node_128)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            else {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1247, "struct sNode");
                _inf_obj_value12=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value2=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "07var.c", 1247, "struct sStoreNode*")),(char*)come_increment_ref_count(name_123),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_122),(_Bool)1,((void*)0),info,(char*)come_increment_ref_count(xsprintf(""))))));
                _inf_value12->_protocol_obj=_inf_obj_value12;
                _inf_value12->finalize=(void*)sStoreNode_finalize;
                _inf_value12->clone=(void*)sStoreNode_clone;
                _inf_value12->compile=(void*)sStoreNode_compile;
                _inf_value12->sline=(void*)sNodeBase_sline;
                _inf_value12->sline_real=(void*)sNodeBase_sline_real;
                _inf_value12->sname=(void*)sNodeBase_sname;
                _inf_value12->terminated=(void*)sNodeBase_terminated;
                _inf_value12->kind=(void*)sStoreNode_kind;
                _inf_value12->no_mutex=(void*)sNodeBase_no_mutex;
                __right_value3 = (void*)0;
                node_129=(struct sNode*)come_increment_ref_count(_inf_value12);
                come_call_finalizer(sStoreNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                info->sline_real=sline_real;
                __result_obj__136 = (struct sNode*)come_increment_ref_count(node_129);
                ((node_129) ? node_129 = come_decrement_ref_count(node_129, ((struct sNode*)node_129)->finalize, ((struct sNode*)node_129)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                come_call_finalizer(sType_finalize, type_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name_123 = come_decrement_ref_count(name_123, (void*)0, (void*)0, 0, 0, (void*)0));
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
                ((__result_obj__136) ? __result_obj__136 = come_decrement_ref_count(__result_obj__136, ((struct sNode*)__result_obj__136)->finalize, ((struct sNode*)__result_obj__136)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__136;
                ((node_129) ? node_129 = come_decrement_ref_count(node_129, ((struct sNode*)node_129)->finalize, ((struct sNode*)node_129)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            come_call_finalizer(sType_finalize, type_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_123 = come_decrement_ref_count(name_123, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    err_msg(info,"unexpected word(%s)(1)",buf);
    exit(2);
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct sNewChannel* sNewChannel_clone(struct sNewChannel* self){
struct sNewChannel* __result_obj__121;
void* __right_value0 = (void*)0;
struct sNewChannel* result;
char* __dec_obj130;
struct sNewChannel* __result_obj__122;
    if(    self==(void*)0    ) {
        __result_obj__121 = (void*)0;
        return __result_obj__121;
    }
    result=(struct sNewChannel*)come_increment_ref_count((struct sNewChannel*)come_calloc_v2(1, sizeof(struct sNewChannel)*(1), "sNewChannel_clone", 3, "struct sNewChannel*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj130=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNewChannel_clone", 5, "char*"));
        __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    __result_obj__122 = result;
    come_call_finalizer(sNewChannel_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__122;
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item){
void* __right_value0 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj131;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_99;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj132;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_100;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj133;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__124;
    if(    self->len==0    ) {
        litem=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1162, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj131=litem->item,
        litem->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph_finalize, __dec_obj131,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_99=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1172, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_99->prev=self->head;
        litem_99->next=((void*)0);
        __dec_obj132=litem_99->item,
        litem_99->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph_finalize, __dec_obj132,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_99;
        self->head->next=litem_99;
    }
    else {
        __right_value0 = (void*)0;
        litem_100=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1182, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_100->prev=self->tail;
        litem_100->next=((void*)0);
        __dec_obj133=litem_100->item,
        litem_100->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph_finalize, __dec_obj133,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_100;
        self->tail=litem_100;
    }
    self->len++;
    __result_obj__124 = self;
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__124;
}

static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_initialize(struct tuple3$3sType$phchar$phsNode$ph* self, struct sType* v1, char* v2, struct sNode* v3){
struct sType* __dec_obj134;
char* __dec_obj135;
struct sNode* __dec_obj136;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__125;
    __dec_obj134=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer(sType_finalize, __dec_obj134,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj135=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj136=self->v3,
    self->v3=(struct sNode*)come_increment_ref_count(v3);
    (__dec_obj136 ? __dec_obj136 = come_decrement_ref_count(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__125 = (struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 0, (void*)0));
    ((v3) ? v3 = come_decrement_ref_count(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __result_obj__125, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__125;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_add(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
void* __right_value0 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem;
struct tuple2$2char$phsType$ph* __dec_obj138;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_113;
struct tuple2$2char$phsType$ph* __dec_obj139;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_114;
struct tuple2$2char$phsType$ph* __dec_obj140;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__127;
    if(    self->len==0    ) {
        litem=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/neo-c.h", 1084, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj138=litem->item,
        litem->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj138,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_113=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/neo-c.h", 1094, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_113->prev=self->head;
        litem_113->next=((void*)0);
        __dec_obj139=litem_113->item,
        litem_113->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj139,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_113;
        self->head->next=litem_113;
    }
    else {
        __right_value0 = (void*)0;
        litem_114=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/neo-c.h", 1104, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_114->prev=self->tail;
        litem_114->next=((void*)0);
        __dec_obj140=litem_114->item,
        litem_114->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj140,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_114;
        self->tail=litem_114;
    }
    self->len++;
    __result_obj__127 = self;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__127;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2){
char* __dec_obj141;
struct sType* __dec_obj142;
struct tuple2$2char$phsType$ph* __result_obj__128;
    __dec_obj141=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj142=self->v2,
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer(sType_finalize, __dec_obj142,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__128 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__128, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__128;
}

struct sNode* expression_node_v95(struct sInfo* info){
struct sNode* node;
void* __right_value0 = (void*)0;
struct sNode* exp;
void* __right_value1 = (void*)0;
struct sNode* _inf_value13;
struct sReadChannelNode* _inf_obj_value13;
void* __right_value2 = (void*)0;
struct sNode* __result_obj__139;
struct sNode* __dec_obj154;
struct sNode* __result_obj__140;
memset(&node, 0, sizeof(node));
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    strncmp(info->p,"<-",strlen("<-"))==0    ) {
        info->p+=strlen("<-");
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        exp=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
        parse_sharp_v5(info);
        __right_value0 = (void*)0;
        _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1273, "struct sNode");
        _inf_obj_value13=(struct sReadChannelNode*)come_increment_ref_count(((struct sReadChannelNode*)(__right_value1=sReadChannelNode_initialize((struct sReadChannelNode*)come_increment_ref_count((struct sReadChannelNode*)come_calloc_v2(1, sizeof(struct sReadChannelNode)*(1), "07var.c", 1273, "struct sReadChannelNode*")),(struct sNode*)come_increment_ref_count(exp),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sReadChannelNode_finalize;
        _inf_value13->clone=(void*)sReadChannelNode_clone;
        _inf_value13->compile=(void*)sReadChannelNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sReadChannelNode_kind;
        _inf_value13->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__139 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value13)));
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sReadChannelNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__139) ? __result_obj__139 = come_decrement_ref_count(__result_obj__139, ((struct sNode*)__result_obj__139)->finalize, ((struct sNode*)__result_obj__139)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__139;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj154=node,
        node=(struct sNode*)come_increment_ref_count(expression_node_v1(info));
        (__dec_obj154 ? __dec_obj154 = come_decrement_ref_count(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__140 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__140) ? __result_obj__140 = come_decrement_ref_count(__result_obj__140, ((struct sNode*)__result_obj__140)->finalize, ((struct sNode*)__result_obj__140)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__140;
}

static struct sReadChannelNode* sReadChannelNode_clone(struct sReadChannelNode* self){
struct sReadChannelNode* __result_obj__137;
void* __right_value0 = (void*)0;
struct sReadChannelNode* result;
char* __dec_obj152;
struct sNode* __dec_obj153;
struct sReadChannelNode* __result_obj__138;
    if(    self==(void*)0    ) {
        __result_obj__137 = (void*)0;
        return __result_obj__137;
    }
    result=(struct sReadChannelNode*)come_increment_ref_count((struct sReadChannelNode*)come_calloc_v2(1, sizeof(struct sReadChannelNode)*(1), "sReadChannelNode_clone", 3, "struct sReadChannelNode*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj152=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sReadChannelNode_clone", 5, "char*"));
        __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj153=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj153 ? __dec_obj153 = come_decrement_ref_count(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__138 = result;
    come_call_finalizer(sReadChannelNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__138;
}

struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNode* right_value;
struct sNode* __dec_obj155;
void* __right_value1 = (void*)0;
struct sNode* _inf_value14;
struct sWriteChannelNode* _inf_obj_value14;
void* __right_value2 = (void*)0;
struct sNode* __result_obj__143;
struct sNode* __result_obj__144;
    if(    !node->terminated(node->_protocol_obj)&&strncmp(info->p,"<-",strlen("<-"))==0    ) {
        info->p+=2;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        right_value=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
        parse_sharp_v5(info);
        __right_value0 = (void*)0;
        __dec_obj155=right_value,
        right_value=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value),info));
        (__dec_obj155 ? __dec_obj155 = come_decrement_ref_count(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0, (void*)0) :0);
        parse_sharp_v5(info);
        __right_value0 = (void*)0;
        _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1296, "struct sNode");
        _inf_obj_value14=(struct sWriteChannelNode*)come_increment_ref_count(((struct sWriteChannelNode*)(__right_value1=sWriteChannelNode_initialize((struct sWriteChannelNode*)come_increment_ref_count((struct sWriteChannelNode*)come_calloc_v2(1, sizeof(struct sWriteChannelNode)*(1), "07var.c", 1296, "struct sWriteChannelNode*")),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_value),info))));
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sWriteChannelNode_finalize;
        _inf_value14->clone=(void*)sWriteChannelNode_clone;
        _inf_value14->compile=(void*)sWriteChannelNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sline_real=(void*)sNodeBase_sline_real;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sWriteChannelNode_kind;
        _inf_value14->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__143 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value14)));
        ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sWriteChannelNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__143) ? __result_obj__143 = come_decrement_ref_count(__result_obj__143, ((struct sNode*)__result_obj__143)->finalize, ((struct sNode*)__result_obj__143)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__143;
        ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    __right_value0 = (void*)0;
    __result_obj__144 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=post_position_operator((struct sNode*)come_increment_ref_count(node),info))));
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__144) ? __result_obj__144 = come_decrement_ref_count(__result_obj__144, ((struct sNode*)__result_obj__144)->finalize, ((struct sNode*)__result_obj__144)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__144;
}

static struct sWriteChannelNode* sWriteChannelNode_clone(struct sWriteChannelNode* self){
struct sWriteChannelNode* __result_obj__141;
void* __right_value0 = (void*)0;
struct sWriteChannelNode* result;
char* __dec_obj156;
struct sNode* __dec_obj157;
struct sNode* __dec_obj158;
struct sWriteChannelNode* __result_obj__142;
    if(    self==(void*)0    ) {
        __result_obj__141 = (void*)0;
        return __result_obj__141;
    }
    result=(struct sWriteChannelNode*)come_increment_ref_count((struct sWriteChannelNode*)come_calloc_v2(1, sizeof(struct sWriteChannelNode)*(1), "sWriteChannelNode_clone", 3, "struct sWriteChannelNode*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj156=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sWriteChannelNode_clone", 5, "char*"));
        __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj157=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj157 ? __dec_obj157 = come_decrement_ref_count(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj158=result->right_value,
        result->right_value=(struct sNode*)come_increment_ref_count(sNode_clone(self->right_value));
        (__dec_obj158 ? __dec_obj158 = come_decrement_ref_count(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__142 = result;
    come_call_finalizer(sWriteChannelNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__142;
}

