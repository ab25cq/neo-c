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
    _Bool mAlignasDouble;
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
    char* linker_option2;
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

struct sMethodCallNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* obj;
    char* fun_name;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct buffer* method_block;
    int method_block_sline;
    struct list$1sType$ph* method_generics_types;
    _Bool no_infference_method_generics;
    _Bool recursive;
    struct sFun* fun;
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
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct sNode* node, struct CVALUE* left_value, struct sInfo* info);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sType$phchar$ph_Bool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info, _Bool parse_function_attribute);
struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo* info);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(char* value, struct sInfo* info);
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* parse_params(struct sInfo* info, _Bool in_constructor_);
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
char* parse_word(_Bool digits, struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
void skip_spaces_and_lf2(struct sInfo* info);
struct tuple2$2char$ph_Bool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
struct tuple3$3sType$phchar$ph_Bool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
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
_Bool add_typedef(char* type_name, struct sType* type, struct sInfo* info);
struct sNode* top_level_v95(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v17(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_nullable_node(struct sNode* left, struct sInfo* info);
struct sNode* load_field(struct sNode* left, char* name, struct sInfo* info);
struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);
struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info);
struct sNode* create_guard_break_method_call(struct sNode* expression_node, struct sInfo* info);
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
struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
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
static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void tuple2$2char$ph_Bool$$p_finalize(struct tuple2$2char$ph_Bool$* self);
static struct tuple2$2char$phsGenericsFun$p* tuple2$2char$phsGenericsFun$p_initialize(struct tuple2$2char$phsGenericsFun$p* self, char* v1, struct sGenericsFun* v2);
static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUE$ph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
static void sCurrentNode_finalize(struct sCurrentNode* self);
static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar* self);
static void sBlock_finalize(struct sBlock* self);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char* key);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
struct tuple3$3char$phsFun$psGenericsFun$p* get_method(char* fun_name, struct sType* obj_type, struct sInfo* info);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct tuple3$3char$phsFun$psGenericsFun$p* tuple3$3char$phsFun$psGenericsFun$p_initialize(struct tuple3$3char$phsFun$psGenericsFun$p* self, char* v1, struct sFun* v2, struct sGenericsFun* v3);
static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self);
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, struct sInfo* info);
_Bool sMethodCallNode_terminated(struct sMethodCallNode* self);
char* sMethodCallNode_kind(struct sMethodCallNode* self);
_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void sMethodCallNode_finalize(struct sMethodCallNode* self);
static int list$1char$ph_length(struct list$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position);
static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo* info);
static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2);
static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);
// uniq global variable
// inline function

// body function
struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __right_value0 = (void*)0;
char* none_generics_name;
char* fun_name2;
char* fun_name3;
struct sType* no_solved_type;
struct sGenericsFun* generics_fun;
struct sType* type2;
struct sType* type_before;
char* __dec_obj32;
void* __right_value1 = (void*)0;
struct tuple2$2char$ph_Bool$* multiple_assign_var1
;char* name=0;
_Bool err=0;
void* __right_value2 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__31;
struct tuple2$2char$phsGenericsFun$p* __result_obj__32;
    none_generics_name=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
    __right_value0 = (void*)0;
    fun_name2=(char*)come_increment_ref_count(create_method_name(type,0,fun_name,info,array_equal_pointer));
    __right_value0 = (void*)0;
    fun_name3=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name));
    __right_value0 = (void*)0;
    no_solved_type=(struct sType*)come_increment_ref_count(sType_clone(type));
    __right_value0 = (void*)0;
    generics_fun=((struct sGenericsFun*)(__right_value0=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3,((void*)0))));
    come_call_finalizer(sGenericsFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(    generics_fun    ) {
        type2=(struct sType*)come_increment_ref_count(no_solved_type);
        __right_value0 = (void*)0;
        type_before=(struct sType*)come_increment_ref_count(sType_clone(type));
        __right_value0 = (void*)0;
        __dec_obj32=fun_name2,
        fun_name2=(char*)come_increment_ref_count(create_method_name(type2,0,fun_name,info,array_equal_pointer));
        __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        multiple_assign_var1=((struct tuple2$2char$ph_Bool$*)(__right_value1=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2)),generics_fun,(struct sType*)come_increment_ref_count(type2),info)));
        name=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        err=multiple_assign_var1->v2;
        come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(        !err        ) {
            err_msg(info,"%s not found",fun_name3);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __result_obj__31 = (struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count(((struct tuple2$2char$phsGenericsFun$p*)(__right_value2=tuple2$2char$phsGenericsFun$p_initialize((struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count((struct tuple2$2char$phsGenericsFun$p*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsGenericsFun$p)*(1), "20method.c", 23, "struct tuple2$2char$phsGenericsFun$p")),(char*)come_increment_ref_count(__builtin_string("")),(struct sGenericsFun*)((void*)0)))));
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type_before, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, no_solved_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __result_obj__31, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__31;
        }
        type=type_before;
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, type_before, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    __result_obj__32 = (struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count(((struct tuple2$2char$phsGenericsFun$p*)(__right_value2=tuple2$2char$phsGenericsFun$p_initialize((struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count((struct tuple2$2char$phsGenericsFun$p*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsGenericsFun$p)*(1), "20method.c", 29, "struct tuple2$2char$phsGenericsFun$p")),(char*)come_increment_ref_count((char*)come_memdup(fun_name2, "20method.c", 29, "char*")),generics_fun))));
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0));
    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0));
    (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, no_solved_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __result_obj__32, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__32;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__1;
void* __right_value0 = (void*)0;
struct sType* result;
struct sType* __dec_obj1;
struct sType* __dec_obj2;
struct list$1sType$ph* __dec_obj6;
struct sType* __dec_obj7;
struct sNode* __dec_obj8;
struct sNode* __dec_obj9;
char* __dec_obj10;
char* __dec_obj11;
char* __dec_obj12;
char* __dec_obj13;
char* __dec_obj14;
char* __dec_obj15;
struct list$1sNode$ph* __dec_obj19;
struct list$1sNode$ph* __dec_obj20;
struct list$1int$* __dec_obj21;
struct list$1int$* __dec_obj22;
struct sType* __dec_obj23;
char* __dec_obj24;
struct list$1sType$ph* __dec_obj25;
struct list$1char$ph* __dec_obj29;
struct sType* __dec_obj30;
struct sNode* __dec_obj31;
struct sType* __result_obj__24;
    if(    self==(void*)0    ) {
        __result_obj__1 = (void*)0;
        return __result_obj__1;
    }
    result=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)    ) {
        result->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj1=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj1,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj2=result->mChannelType,
        result->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj6=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj7=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj8=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj8 ? __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj9=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(    self!=((void*)0)    ) {
        result->mAlignasDouble=self->mAlignasDouble;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj10=result->mTupleName,
        result->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 12, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj11=result->mAttribute,
        result->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 13, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarAttribute!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj12=result->mVarAttribute,
        result->mVarAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mVarAttribute, "sType_clone", 14, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0);
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
        __dec_obj13=result->mAnonymousName,
        result->mAnonymousName=(char*)come_increment_ref_count((char*)come_memdup(self->mAnonymousName, "sType_clone", 39, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->mInnerStruct=self->mInnerStruct;
    }
    if(    self!=((void*)0)&&self->mInnerStructName!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj14=result->mInnerStructName,
        result->mInnerStructName=(char*)come_increment_ref_count((char*)come_memdup(self->mInnerStructName, "sType_clone", 41, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0);
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
        __dec_obj15=result->mAsmName,
        result->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 46, "char*"));
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)    ) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj19=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj19,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj20=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj20,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayStatic!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj21=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic));
        come_call_finalizer(list$1int$_finalize, __dec_obj21,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayRestrict!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj22=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict));
        come_call_finalizer(list$1int$_finalize, __dec_obj22,(void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        __dec_obj23=result->mTypedefOriginalType,
        result->mTypedefOriginalType=(struct sType*)come_increment_ref_count(sType_clone(self->mTypedefOriginalType));
        come_call_finalizer(sType_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj24=result->mOriginalTypeName,
        result->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 58, "char*"));
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0, (void*)0);
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
        __dec_obj25=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj29=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj29,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj30=result->mResultType,
        result->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj30,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mTypeOfNode!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj31=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode));
        (__dec_obj31 ? __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__24 = result;
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__24;
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

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__2;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1sType$ph* result;
struct list_item$1sType$ph* it;
struct list$1sType$ph* __result_obj__6;
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
    __result_obj__6 = (struct list$1sType$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__6, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__6;
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
struct list$1sType$ph* __result_obj__4;
void* __right_value0 = (void*)0;
struct list_item$1sType$ph* litem;
struct sType* __dec_obj3;
struct list_item$1sType$ph* litem_0;
struct sType* __dec_obj4;
struct list_item$1sType$ph* litem_1;
struct sType* __dec_obj5;
struct list$1sType$ph* __result_obj__5;
    if(    self==((void*)0)    ) {
        __result_obj__4 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__4;
    }
    if(    self->len==0    ) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1086, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj3=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_0=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1096, "struct list_item$1sType$ph*"))));
        litem_0->prev=self->head;
        litem_0->next=((void*)0);
        __dec_obj4=litem_0->item,
        litem_0->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_0;
        self->head->next=litem_0;
    }
    else {
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1106, "struct list_item$1sType$ph*"))));
        litem_1->prev=self->tail;
        litem_1->next=((void*)0);
        __dec_obj5=litem_1->item,
        litem_1->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_1;
        self->tail=litem_1;
    }
    self->len++;
    __result_obj__5 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__5;
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
struct sNode* __result_obj__7;
void* __right_value0 = (void*)0;
struct sNode* result;
struct sNode* __result_obj__8;
    if(    self==(void*)0    ) {
        __result_obj__7 = (struct sNode*)come_increment_ref_count((void*)0);
        ((__result_obj__7) ? __result_obj__7 = come_decrement_ref_count(__result_obj__7, ((struct sNode*)__result_obj__7)->finalize, ((struct sNode*)__result_obj__7)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__7;
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
    __result_obj__8 = (struct sNode*)come_increment_ref_count(result);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__8) ? __result_obj__8 = come_decrement_ref_count(__result_obj__8, ((struct sNode*)__result_obj__8)->finalize, ((struct sNode*)__result_obj__8)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__8;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__9;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1sNode$ph* result;
struct list_item$1sNode$ph* it;
struct list$1sNode$ph* __result_obj__13;
    if(    self==((void*)0)    ) {
        __result_obj__9 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__9, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__9;
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
struct list$1sNode$ph* __result_obj__10;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__10 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__10, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__10;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
struct list$1sNode$ph* __result_obj__11;
void* __right_value0 = (void*)0;
struct list_item$1sNode$ph* litem;
struct sNode* __dec_obj16;
struct list_item$1sNode$ph* litem_2;
struct sNode* __dec_obj17;
struct list_item$1sNode$ph* litem_3;
struct sNode* __dec_obj18;
struct list$1sNode$ph* __result_obj__12;
    if(    self==((void*)0)    ) {
        __result_obj__11 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__11;
    }
    if(    self->len==0    ) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1086, "struct list_item$1sNode$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj16=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_2=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1096, "struct list_item$1sNode$ph*"))));
        litem_2->prev=self->head;
        litem_2->next=((void*)0);
        __dec_obj17=litem_2->item,
        litem_2->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj17 ? __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem_2;
        self->head->next=litem_2;
    }
    else {
        __right_value0 = (void*)0;
        litem_3=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1106, "struct list_item$1sNode$ph*"))));
        litem_3->prev=self->tail;
        litem_3->next=((void*)0);
        __dec_obj18=litem_3->item,
        litem_3->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj18 ? __dec_obj18 = come_decrement_ref_count(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0, (void*)0) :0);
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
struct list$1int$* __result_obj__14;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1int$* result;
struct list_item$1int$* it;
struct list$1int$* __result_obj__18;
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
    __result_obj__18 = (struct list$1int$*)come_increment_ref_count(result);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__18, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__18;
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
struct list$1int$* __result_obj__16;
void* __right_value0 = (void*)0;
struct list_item$1int$* litem;
struct list_item$1int$* litem_4;
struct list_item$1int$* litem_5;
struct list$1int$* __result_obj__17;
    if(    self==((void*)0)    ) {
        __result_obj__16 = self;
        return __result_obj__16;
    }
    if(    self->len==0    ) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1086, "struct list_item$1int$*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_4=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1096, "struct list_item$1int$*"))));
        litem_4->prev=self->head;
        litem_4->next=((void*)0);
        litem_4->item=item;
        self->tail=litem_4;
        self->head->next=litem_4;
    }
    else {
        __right_value0 = (void*)0;
        litem_5=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1106, "struct list_item$1int$*"))));
        litem_5->prev=self->tail;
        litem_5->next=((void*)0);
        litem_5->item=item;
        self->tail->next=litem_5;
        self->tail=litem_5;
    }
    self->len++;
    __result_obj__17 = self;
    return __result_obj__17;
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
struct list$1char$ph* __result_obj__19;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1char$ph* result;
struct list_item$1char$ph* it;
struct list$1char$ph* __result_obj__23;
    if(    self==((void*)0)    ) {
        __result_obj__19 = (struct list$1char$ph*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__19, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__19;
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
    __result_obj__23 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__23, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__23;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__20;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__20 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__20, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__20;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
struct list$1char$ph* __result_obj__21;
void* __right_value0 = (void*)0;
struct list_item$1char$ph* litem;
char* __dec_obj26;
struct list_item$1char$ph* litem_6;
char* __dec_obj27;
struct list_item$1char$ph* litem_7;
char* __dec_obj28;
struct list$1char$ph* __result_obj__22;
    if(    self==((void*)0)    ) {
        __result_obj__21 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__21;
    }
    if(    self->len==0    ) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1086, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj26=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_6=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1096, "struct list_item$1char$ph*"))));
        litem_6->prev=self->head;
        litem_6->next=((void*)0);
        __dec_obj27=litem_6->item,
        litem_6->item=(char*)come_increment_ref_count(item);
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_6;
        self->head->next=litem_6;
    }
    else {
        __right_value0 = (void*)0;
        litem_7=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1106, "struct list_item$1char$ph*"))));
        litem_7->prev=self->tail;
        litem_7->next=((void*)0);
        __dec_obj28=litem_7->item,
        litem_7->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_7;
        self->tail=litem_7;
    }
    self->len++;
    __result_obj__22 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__22;
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

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
struct sGenericsFun* __result_obj__25;
unsigned int hash;
unsigned int it;
struct sGenericsFun* __result_obj__26;
struct sGenericsFun* __result_obj__27;
struct sGenericsFun* __result_obj__28;
struct sGenericsFun* __result_obj__29;
    if(    self==((void*)0)    ) {
        __result_obj__25 = (struct sGenericsFun*)come_increment_ref_count(default_value);
        come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sGenericsFun_finalize, __result_obj__25, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__25;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__26 = (struct sGenericsFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__26, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__26;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__27 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__27, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__27;
            }
        }
        else {
            __result_obj__28 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sGenericsFun_finalize, __result_obj__28, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__28;
        }
    }
    __result_obj__29 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sGenericsFun_finalize, __result_obj__29, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__29;
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

static void tuple2$2char$ph_Bool$$p_finalize(struct tuple2$2char$ph_Bool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct tuple2$2char$phsGenericsFun$p* tuple2$2char$phsGenericsFun$p_initialize(struct tuple2$2char$phsGenericsFun$p* self, char* v1, struct sGenericsFun* v2){
char* __dec_obj33;
struct tuple2$2char$phsGenericsFun$p* __result_obj__30;
    __dec_obj33=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0, (void*)0);
    self->v2=v2;
    __result_obj__30 = (struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __result_obj__30, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__30;
}

static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info){
void* __right_value0 = (void*)0;
char* fun_name3;
struct list$1sType$ph* method_generics_types_before;
struct list$1sType$ph* __dec_obj34;
struct sGenericsFun* generics_fun;
_Bool _conditional_value_X0;
void* __right_value1 = (void*)0;
void* __right_value2 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__33;
struct list$1sType$ph* __dec_obj35;
struct tuple2$2char$phsGenericsFun$p* __result_obj__34;
    static int num_method_generics=0;
    fun_name3=(char*)come_increment_ref_count(xsprintf("%s_method_generics%d",fun_name,num_method_generics++));
    method_generics_types_before=(struct list$1sType$ph*)come_increment_ref_count(info->method_generics_types);
    __dec_obj34=info->method_generics_types,
    info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj34,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value0 = (void*)0;
    generics_fun=((struct sGenericsFun*)(__right_value0=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name,((void*)0))));
    come_call_finalizer(sGenericsFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(    generics_fun    ) {
        if(        __right_value0 = (void*)0,         ({(_conditional_value_X0=(!create_method_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name3)),generics_fun,info)));        _conditional_value_X0;})        ) {
            err_msg(info,"%s not found",fun_name3);
            __right_value0 = (void*)0;
            __result_obj__33 = (struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count(((struct tuple2$2char$phsGenericsFun$p*)(__right_value2=tuple2$2char$phsGenericsFun$p_initialize((struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count((struct tuple2$2char$phsGenericsFun$p*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsGenericsFun$p)*(1), "20method.c", 45, "struct tuple2$2char$phsGenericsFun$p")),(char*)come_increment_ref_count(__builtin_string("")),(struct sGenericsFun*)((void*)0)))));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_before, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __result_obj__33, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__33;
        }
    }
    __dec_obj35=info->method_generics_types,
    info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_before);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    __result_obj__34 = (struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count(((struct tuple2$2char$phsGenericsFun$p*)(__right_value2=tuple2$2char$phsGenericsFun$p_initialize((struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count((struct tuple2$2char$phsGenericsFun$p*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsGenericsFun$p)*(1), "20method.c", 51, "struct tuple2$2char$phsGenericsFun$p")),(char*)come_increment_ref_count((char*)come_memdup(fun_name3, "20method.c", 51, "char*")),generics_fun))));
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_before, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __result_obj__34, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__34;
}

_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUE$ph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct sNode* _inf_value1;
struct sCurrentNode* _inf_obj_value1;
void* __right_value2 = (void*)0;
struct sNode* current_stack_frame_node;
_Bool Value;
_Bool __result_obj__37;
struct CVALUE* come_value;
struct buffer* method_block2;
struct sType* method_block_type;
char* class_name;
struct sClass* current_stack_frame_struct;
_Bool __result_obj__56;
struct sType* result_type;
struct sType* result_type2;
struct list$1sType$ph* param_types;
struct list$1char$ph* param_names;
struct buffer* all_alhabet_sname;
char* p;
int num_method_block;
int i;
struct list$1sType$ph* o2_saved;
struct sType* it;
struct sType* param_type;
char* param_name;
char* param_name_14;
struct sType* param_type2;
char* param_name_15;
struct buffer* source3;
char* p_16;
char* head;
int sline;
struct buffer* __dec_obj40;
struct sNode* node;
_Bool in_method_block;
_Bool Value_17;
_Bool __result_obj__63;
char* method_block_name;
struct CVALUE* come_value2;
struct sFun* fun2;
_Bool __result_obj__69;
struct sType* method_block_type2;
char* __dec_obj41;
struct sType* __dec_obj42;
struct buffer* __dec_obj43;
struct sType* __dec_obj44;
_Bool __result_obj__80;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "20method.c", 56, "struct sNode");
    _inf_obj_value1=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value1=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc_v2(1, sizeof(struct sCurrentNode)*(1), "20method.c", 56, "struct sCurrentNode*")),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sCurrentNode_finalize;
    _inf_value1->clone=(void*)sCurrentNode_clone;
    _inf_value1->compile=(void*)sCurrentNode_compile;
    _inf_value1->sline=(void*)sCurrentNode_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sCurrentNode_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sCurrentNode_kind;
    _inf_value1->no_mutex=(void*)sNodeBase_no_mutex;
    current_stack_frame_node=(struct sNode*)come_increment_ref_count(_inf_value1);
    come_call_finalizer(sCurrentNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    Value=node_compile(current_stack_frame_node,info);
    if(    !Value    ) {
        __result_obj__37 = 0;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__37;
    }
    else {
    }
    __right_value0 = (void*)0;
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    method_block2=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "20method.c", 65, "struct buffer*"))));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    method_block_type=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(fun->mParamTypes,-1)))));
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
    if(    string_operator_not_equals(method_block_type->mClass->mName,"lambda")    ) {
        err_msg(info,"This function does not have method block(%s)",fun_name);
        __result_obj__56 = 1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, method_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, method_block_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__56;
    }
    __right_value0 = (void*)0;
    result_type=(struct sType*)come_increment_ref_count(sType_clone(method_block_type->mResultType));
    result_type->mStatic=0;
    __right_value0 = (void*)0;
    result_type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(result_type),(struct sType*)come_increment_ref_count(info->generics_type),info));
    param_types=method_block_type->mParamTypes;
    param_names=method_block_type->mParamNames;
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    all_alhabet_sname=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "20method.c", 87, "struct buffer*"))));
    {
        p=info->sname;
        while(        *p        ) {
            if(            xisalnum(*p)            ) {
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
    buffer_append_format(method_block2,"%s method_block%d_%s(",((char*)(__right_value0=make_come_type_name_string(result_type2,info))),num_method_block,((char*)(__right_value1=buffer_to_string(all_alhabet_sname))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    i=0;
    for(    o2_saved=param_types,it=list$1sType$ph_begin(o2_saved)    ;    !list$1sType$ph_end(o2_saved)    ;    it=list$1sType$ph_next(o2_saved)    ){
        param_type=(struct sType*)come_increment_ref_count(it);
        if(        i==0        ) {
            __right_value0 = (void*)0;
            param_name=(char*)come_increment_ref_count(xsprintf("parent"));
            __right_value0 = (void*)0;
            buffer_append_format(method_block2,"%s",((char*)(__right_value0=make_come_define_var(param_type,param_name,info))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(        i==1        ) {
            __right_value0 = (void*)0;
            param_name_14=(char*)come_increment_ref_count(xsprintf("it"));
            __right_value0 = (void*)0;
            param_type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(param_type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            __right_value0 = (void*)0;
            buffer_append_format(method_block2,"%s",((char*)(__right_value0=make_come_define_var(param_type,param_name_14,info))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (param_name_14 = come_decrement_ref_count(param_name_14, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, param_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            __right_value0 = (void*)0;
            param_name_15=(char*)come_increment_ref_count(xsprintf("it%d",i));
            __right_value0 = (void*)0;
            buffer_append_format(method_block2,"%s",((char*)(__right_value0=make_come_define_var(param_type,param_name_15,info))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (param_name_15 = come_decrement_ref_count(param_name_15, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(        i!=list$1sType$ph_length(param_types)-1        ) {
            buffer_append_str(method_block2,",");
        }
        i++;
        come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    buffer_append_str(method_block2,")\n");
    __right_value0 = (void*)0;
    buffer_append_str(method_block2,((char*)(__right_value0=buffer_to_string(method_block))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    source3=(struct buffer*)come_increment_ref_count(info->source);
    p_16=info->p;
    head=info->head;
    sline=info->sline;
    __dec_obj40=info->source,
    info->source=(struct buffer*)come_increment_ref_count(method_block2);
    come_call_finalizer(buffer_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=method_block_sline;
    __right_value0 = (void*)0;
    node=(struct sNode*)come_increment_ref_count(parse_function(info));
    in_method_block=info->in_method_block;
    info->in_method_block=1;
    Value_17=node_compile(node,info);
    if(    !Value_17    ) {
        __result_obj__63 = 0;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, method_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, method_block_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, all_alhabet_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__63;
    }
    else {
    }
    info->in_method_block=in_method_block;
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    method_block_name=(char*)come_increment_ref_count(xsprintf("method_block%d_%s",num_method_block,((char*)(__right_value0=buffer_to_string(all_alhabet_sname)))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "20method.c", 159, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    fun2=((struct sFun*)(__right_value1=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value0=__builtin_string(method_block_name))),((void*)0))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    come_call_finalizer(sFun_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(    fun2==((void*)0)    ) {
        err_msg(info,"method block function not found(%s)",method_block_name);
        __result_obj__69 = 1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, method_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, method_block_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, all_alhabet_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        (method_block_name = come_decrement_ref_count(method_block_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__69;
    }
    method_block_type2=fun2->mLambdaType;
    __right_value0 = (void*)0;
    __dec_obj41=come_value2->c_value,
    come_value2->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name));
    __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj42=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_clone(method_block_type2));
    come_call_finalizer(sType_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value2->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value2));
    __dec_obj43=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source3);
    come_call_finalizer(buffer_finalize, __dec_obj43,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    info->p=p_16;
    info->head=head;
    info->sline=sline;
    info->current_stack_frame_struct=current_stack_frame_struct;
    __right_value0 = (void*)0;
    __dec_obj44=info->come_method_block_function_result_type,
    info->come_method_block_function_result_type=(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type));
    come_call_finalizer(sType_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(    info->no_output_come_code    ) {
        __right_value0 = (void*)0;
        map$2char$phsFun$ph_remove(info->funcs,(char*)come_increment_ref_count(__builtin_string(method_block_name)));
    }
    __result_obj__80 = 1;
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, method_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, method_block_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, all_alhabet_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    (method_block_name = come_decrement_ref_count(method_block_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__80;
}

static void sCurrentNode_finalize(struct sCurrentNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
struct sCurrentNode* __result_obj__35;
void* __right_value0 = (void*)0;
struct sCurrentNode* result;
char* __dec_obj36;
struct sCurrentNode* __result_obj__36;
    if(    self==(void*)0    ) {
        __result_obj__35 = (void*)0;
        return __result_obj__35;
    }
    result=(struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc_v2(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3, "struct sCurrentNode*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj36=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCurrentNode_clone", 5, "char*"));
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    __result_obj__36 = result;
    come_call_finalizer(sCurrentNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__36;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it;
struct list_item$1CVALUE$ph* prev_it;
    if(    self==((void*)0)    ) {
        return;
    }
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

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
struct list$1CVALUE$ph* __result_obj__38;
void* __right_value0 = (void*)0;
struct list_item$1CVALUE$ph* litem;
struct CVALUE* __dec_obj37;
struct list_item$1CVALUE$ph* litem_8;
struct CVALUE* __dec_obj38;
struct list_item$1CVALUE$ph* litem_9;
struct CVALUE* __dec_obj39;
struct list$1CVALUE$ph* __result_obj__39;
    if(    self==((void*)0)    ) {
        __result_obj__38 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__38;
    }
    if(    self->len==0    ) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1171, "struct list_item$1CVALUE$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj37=litem->item,
        litem->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj37,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_8=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1181, "struct list_item$1CVALUE$ph*"))));
        litem_8->prev=self->head;
        litem_8->next=((void*)0);
        __dec_obj38=litem_8->item,
        litem_8->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_8;
        self->head->next=litem_8;
    }
    else {
        __right_value0 = (void*)0;
        litem_9=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1191, "struct list_item$1CVALUE$ph*"))));
        litem_9->prev=self->tail;
        litem_9->next=((void*)0);
        __dec_obj39=litem_9->item,
        litem_9->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_9;
        self->tail=litem_9;
    }
    self->len++;
    __result_obj__39 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__39;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct sType* default_value;
struct sType* __result_obj__40;
struct list_item$1sType$ph* it;
int i;
struct sType* __result_obj__41;
struct sType* default_value_10;
struct sType* __result_obj__42;
    if(    self==((void*)0)    ) {
        memset(&default_value,0,sizeof(struct sType*));
        __result_obj__40 = (struct sType*)come_increment_ref_count(default_value);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sType_finalize, __result_obj__40, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__40;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    position<0    ) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(    it!=((void*)0)    ) {
        if(        position==i        ) {
            __result_obj__41 = (struct sType*)come_increment_ref_count(it->item);
            come_call_finalizer(sType_finalize, __result_obj__41, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__41;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_10,0,sizeof(struct sType*));
    __result_obj__42 = (struct sType*)come_increment_ref_count(default_value_10);
    come_call_finalizer(sType_finalize, default_value_10, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__42, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__42;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct sType* default_value;
struct sType* __result_obj__43;
struct list_item$1sType$ph* it;
int i;
struct sType* __result_obj__44;
struct sType* default_value_11;
struct sType* __result_obj__45;
    if(    self==((void*)0)    ) {
        memset(&default_value,0,sizeof(struct sType*));
        __result_obj__43 = (struct sType*)come_increment_ref_count(default_value);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sType_finalize, __result_obj__43, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__43;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    position<0    ) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(    it!=((void*)0)    ) {
        if(        position==i        ) {
            __result_obj__44 = (struct sType*)come_increment_ref_count(it->item);
            come_call_finalizer(sType_finalize, __result_obj__44, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__44;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_11,0,sizeof(struct sType*));
    __result_obj__45 = (struct sType*)come_increment_ref_count(default_value_11);
    come_call_finalizer(sType_finalize, default_value_11, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__45, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__45;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value;
struct sClass* __result_obj__46;
unsigned int hash;
unsigned int it;
struct sClass* __result_obj__47;
struct sClass* __result_obj__48;
struct sClass* __result_obj__49;
struct sClass* __result_obj__50;
    memset(&default_value,0,sizeof(struct sClass*));
    if(    self==((void*)0)    ) {
        __result_obj__46 = (struct sClass*)come_increment_ref_count(default_value);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sClass_finalize, __result_obj__46, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__46;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__47 = (struct sClass*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__47, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__47;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__48 = (struct sClass*)come_increment_ref_count(default_value);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__48, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__48;
            }
        }
        else {
            __result_obj__49 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__49, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__49;
        }
    }
    __result_obj__50 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__50, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__50;
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

static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value;
struct sClass* __result_obj__51;
unsigned int hash;
unsigned int it;
struct sClass* __result_obj__52;
struct sClass* __result_obj__53;
struct sClass* __result_obj__54;
struct sClass* __result_obj__55;
    memset(&default_value,0,sizeof(struct sClass*));
    if(    self==((void*)0)    ) {
        __result_obj__51 = (struct sClass*)come_increment_ref_count(default_value);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sClass_finalize, __result_obj__51, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__51;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__52 = (struct sClass*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__52, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__52;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__53 = (struct sClass*)come_increment_ref_count(default_value);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__53, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__53;
            }
        }
        else {
            __result_obj__54 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__54, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__54;
        }
    }
    __result_obj__55 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__55, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__55;
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result;
struct sType* __result_obj__57;
struct sType* __result_obj__58;
struct sType* result_12;
struct sType* __result_obj__59;
    if(    self==((void*)0)    ) {
        memset(&result,0,sizeof(struct sType*));
        __result_obj__57 = result;
        return __result_obj__57;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__58 = self->it->item;
        return __result_obj__58;
    }
    memset(&result_12,0,sizeof(struct sType*));
    __result_obj__59 = result_12;
    return __result_obj__59;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result;
struct sType* __result_obj__60;
struct sType* __result_obj__61;
struct sType* result_13;
struct sType* __result_obj__62;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result,0,sizeof(struct sType*));
        __result_obj__60 = result;
        return __result_obj__60;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__61 = self->it->item;
        return __result_obj__61;
    }
    memset(&result_13,0,sizeof(struct sType*));
    __result_obj__62 = result_13;
    return __result_obj__62;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
struct sFun* __result_obj__64;
unsigned int hash;
unsigned int it;
struct sFun* __result_obj__65;
struct sFun* __result_obj__66;
struct sFun* __result_obj__67;
struct sFun* __result_obj__68;
    if(    self==((void*)0)    ) {
        __result_obj__64 = (struct sFun*)come_increment_ref_count(default_value);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sFun_finalize, __result_obj__64, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__64;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__65 = (struct sFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__65, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__65;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__66 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__66, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__66;
            }
        }
        else {
            __result_obj__67 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__67, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__67;
        }
    }
    __result_obj__68 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__68, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__68;
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
    if(    self==((void*)0)    ) {
        return;
    }
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

static void sBlock_finalize(struct sBlock* self){
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)    ) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char* key){
struct map$2char$phsFun$ph* __result_obj__70;
unsigned int hash;
unsigned int it;
struct map$2char$phsFun$ph* __result_obj__79;
    if(    self==((void*)0)    ) {
        __result_obj__70 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__70;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                list$1char$ph_remove(self->key_list,self->keys[it]);
                self->item_existance[it]=0;
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
    __result_obj__79 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__79;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
struct list$1char$ph* __result_obj__71;
int it2;
struct list_item$1char$ph* it;
struct list$1char$ph* __result_obj__78;
    if(    self==((void*)0)    ) {
        __result_obj__71 = self;
        return __result_obj__71;
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
    __result_obj__78 = self;
    return __result_obj__78;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
struct list$1char$ph* __result_obj__72;
int tmp;
struct list$1char$ph* __result_obj__73;
struct list$1char$ph* __result_obj__74;
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
struct list$1char$ph* __result_obj__77;
    if(    self==((void*)0)    ) {
        __result_obj__72 = self;
        return __result_obj__72;
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
        __result_obj__73 = self;
        return __result_obj__73;
    }
    if(    head==tail    ) {
        __result_obj__74 = self;
        return __result_obj__74;
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
        it_18=self->head;
        i_19=0;
        while(        it_18!=((void*)0)        ) {
            if(            i_19==head            ) {
                self->tail=it_18->prev;
                self->tail->next=((void*)0);
            }
            if(            i_19>=head            ) {
                prev_it_20=it_18;
                it_18=it_18->next;
                i_19++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_20, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        while(        it_21!=((void*)0)        ) {
            if(            i_22==head            ) {
                head_prev_it=it_21->prev;
            }
            if(            i_22==tail            ) {
                tail_it=it_21;
            }
            if(            i_22>=head&&i_22<tail            ) {
                prev_it_23=it_21;
                it_21=it_21->next;
                i_22++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_23, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_21=it_21->next;
                i_22++;
            }
        }
        if(        head_prev_it!=((void*)0)        ) {
            head_prev_it->next=tail_it;
        }
        if(        tail_it!=((void*)0)        ) {
            tail_it->prev=head_prev_it;
        }
    }
    __result_obj__77 = self;
    return __result_obj__77;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__75;
struct list_item$1char$ph* it;
struct list_item$1char$ph* prev_it;
struct list$1char$ph* __result_obj__76;
    if(    self==((void*)0)    ) {
        __result_obj__75 = self;
        return __result_obj__75;
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
    __result_obj__76 = self;
    return __result_obj__76;
}

struct tuple3$3char$phsFun$psGenericsFun$p* get_method(char* fun_name, struct sType* obj_type, struct sInfo* info){
char* generics_fun_name;
struct sFun* fun;
struct sGenericsFun* generics_fun;
void* __right_value0 = (void*)0;
char* fun_name2;
struct sClass* klass;
_Bool _conditional_value_X0;
char* __dec_obj45;
void* __right_value1 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var2
;char* name=0;
struct sGenericsFun* gfun=0;
char* __dec_obj46;
char* none_generics_name;
char* fun_name3;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var3
;char* name_24=0;
struct sGenericsFun* gfun_25=0;
char* __dec_obj47;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var4
;char* name_26=0;
struct sGenericsFun* gfun_27=0;
char* __dec_obj48;
int i;
char* new_fun_name;
void* __right_value2 = (void*)0;
char* __dec_obj49;
struct sType* obj_array_type;
char* array_method_name;
char* __dec_obj50;
char* __dec_obj51;
struct tuple3$3char$phsFun$psGenericsFun$p* __result_obj__92;
char* __dec_obj53;
struct sClass* klass_28;
_Bool _conditional_value_X1;
char* __dec_obj54;
struct tuple2$2sFun$pchar$ph* multiple_assign_var5
;struct sFun* fun2=0;
char* real_fun_name=0;
char* __dec_obj55;
struct tuple2$2sFun$pchar$ph* multiple_assign_var6
;struct sFun* fun2_29=0;
char* real_fun_name_30=0;
char* __dec_obj56;
char* original_obj_type_fun_name;
char* __dec_obj57;
struct tuple3$3char$phsFun$psGenericsFun$p* __result_obj__93;
struct tuple3$3char$phsFun$psGenericsFun$p* __result_obj__94;
    generics_fun_name=((void*)0);
    fun=((void*)0);
    generics_fun=((void*)0);
    if(    charp_operator_equals(fun_name,"super")    ) {
        fun_name2=(char*)come_increment_ref_count(create_non_method_name(obj_type,0,info->come_fun->mName,info,1));
        klass=obj_type->mClass;
        while(        __right_value0 = (void*)0,         ({(_conditional_value_X0=(((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mParentClassName)))));        come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        _conditional_value_X0;})        ) {
            __right_value0 = (void*)0;
            klass=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mParentClassName)));
            come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            __right_value0 = (void*)0;
            __dec_obj45=generics_fun_name,
            generics_fun_name=(char*)come_increment_ref_count(create_method_name_using_class(klass,fun_name2,info));
            __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0, (void*)0);
            __right_value0 = (void*)0;
            fun=((struct sFun*)(__right_value1=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value0=__builtin_string(generics_fun_name))),((void*)0))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            come_call_finalizer(sFun_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(            fun            ) {
                break;
            }
        }
        (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else {
        if(        obj_type&&obj_type->mNoSolvedGenericsType&&list$1sType$ph_length(obj_type->mNoSolvedGenericsType->mGenericsTypes)>0        ) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            multiple_assign_var2=((struct tuple2$2char$phsGenericsFun$p*)(__right_value1=make_generics_function(obj_type,(char*)come_increment_ref_count(__builtin_string(fun_name)),info,1)));
            name=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            gfun=multiple_assign_var2->v2;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            __dec_obj46=generics_fun_name,
            generics_fun_name=(char*)come_increment_ref_count(name);
            __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0, (void*)0);
            generics_fun=gfun;
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(        list$1sType$ph_length(info->method_generics_types)>0        ) {
            __right_value0 = (void*)0;
            none_generics_name=(char*)come_increment_ref_count(get_none_generics_name(obj_type->mClass->mName));
            __right_value0 = (void*)0;
            fun_name3=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name));
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            multiple_assign_var3=((struct tuple2$2char$phsGenericsFun$p*)(__right_value1=make_method_generics_function((char*)come_increment_ref_count(__builtin_string(fun_name3)),(struct list$1sType$ph*)come_increment_ref_count(info->method_generics_types),info)));
            name_24=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            gfun_25=multiple_assign_var3->v2;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            __dec_obj47=generics_fun_name,
            generics_fun_name=(char*)come_increment_ref_count(name_24);
            __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0, (void*)0);
            generics_fun=gfun_25;
            (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0));
            (name_24 = come_decrement_ref_count(name_24, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            multiple_assign_var4=((struct tuple2$2char$phsGenericsFun$p*)(__right_value1=make_generics_function(obj_type,(char*)come_increment_ref_count(__builtin_string(fun_name)),info,1)));
            name_26=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            gfun_27=multiple_assign_var4->v2;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            __dec_obj48=generics_fun_name,
            generics_fun_name=(char*)come_increment_ref_count(name_26);
            __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0, (void*)0);
            generics_fun=gfun_27;
            (name_26 = come_decrement_ref_count(name_26, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        for(        i=128        ;        i>=1        ;        i--        ){
            __right_value0 = (void*)0;
            new_fun_name=(char*)come_increment_ref_count(xsprintf("%s_v%d",generics_fun_name,i));
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            fun=((struct sFun*)(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=__builtin_string(new_fun_name))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(            fun!=((void*)0)            ) {
                __right_value0 = (void*)0;
                __dec_obj49=generics_fun_name,
                generics_fun_name=(char*)come_increment_ref_count(__builtin_string(new_fun_name));
                __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0, (void*)0);
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(        fun==((void*)0)        ) {
            obj_array_type=obj_type->mOriginalLoadVarType;
            if(            obj_array_type&&list$1sNode$ph_length(obj_array_type->mArrayNum)>0            ) {
                __right_value0 = (void*)0;
                array_method_name=(char*)come_increment_ref_count(create_method_name(obj_array_type,0,fun_name,info,0));
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                fun=((struct sFun*)(__right_value1=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value0=__builtin_string(array_method_name))),((void*)0))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                come_call_finalizer(sFun_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(                fun                ) {
                    __right_value0 = (void*)0;
                    __dec_obj50=generics_fun_name,
                    generics_fun_name=(char*)come_increment_ref_count(__builtin_string(array_method_name));
                    __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0, (void*)0);
                }
                else {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    fun=((struct sFun*)(__right_value1=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value0=__builtin_string(generics_fun_name))),((void*)0))));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                    come_call_finalizer(sFun_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    if(                    fun==((void*)0)                    ) {
                        __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        __dec_obj51=generics_fun_name,
                        generics_fun_name=(char*)come_increment_ref_count(create_method_name(obj_type,0,((char*)(__right_value0=__builtin_string(fun_name))),info,1));
                        __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0, (void*)0);
                        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                        __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        fun=((struct sFun*)(__right_value1=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value0=__builtin_string(generics_fun_name))),((void*)0))));
                        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                        come_call_finalizer(sFun_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        if(                        fun==((void*)0)                        ) {
                            __right_value0 = (void*)0;
                            __right_value1 = (void*)0;
                            __result_obj__92 = (struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count(((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value1=tuple3$3char$phsFun$psGenericsFun$p_initialize((struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count((struct tuple3$3char$phsFun$psGenericsFun$p*)come_calloc_v2(1, sizeof(struct tuple3$3char$phsFun$psGenericsFun$p)*(1), "20method.c", 260, "struct tuple3$3char$phsFun$psGenericsFun$p")),(char*)come_increment_ref_count((char*)((void*)0)),(struct sFun*)((void*)0),(struct sGenericsFun*)((void*)0)))));
                            (array_method_name = come_decrement_ref_count(array_method_name, (void*)0, (void*)0, 0, 0, (void*)0));
                            come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                            come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __result_obj__92, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                            return __result_obj__92;
                        }
                    }
                }
                (array_method_name = come_decrement_ref_count(array_method_name, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            else {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                fun=((struct sFun*)(__right_value1=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value0=__builtin_string(generics_fun_name))),((void*)0))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                come_call_finalizer(sFun_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(                fun==((void*)0)                ) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __dec_obj53=generics_fun_name,
                    generics_fun_name=(char*)come_increment_ref_count(create_method_name(obj_type,0,((char*)(__right_value0=__builtin_string(fun_name))),info,1));
                    __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0, (void*)0);
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    fun=((struct sFun*)(__right_value1=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value0=__builtin_string(generics_fun_name))),((void*)0))));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                    come_call_finalizer(sFun_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    if(                    fun==((void*)0)                    ) {
                        klass_28=obj_type->mClass;
                        while(                        __right_value0 = (void*)0,                         ({(_conditional_value_X1=(((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass_28->mParentClassName)))));                        come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        _conditional_value_X1;})                        ) {
                            __right_value0 = (void*)0;
                            klass_28=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass_28->mParentClassName)));
                            come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            __right_value0 = (void*)0;
                            __dec_obj54=generics_fun_name,
                            generics_fun_name=(char*)come_increment_ref_count(create_method_name_using_class(klass_28,fun_name,info));
                            __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0, (void*)0);
                            __right_value0 = (void*)0;
                            __right_value1 = (void*)0;
                            fun=((struct sFun*)(__right_value1=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value0=__builtin_string(generics_fun_name))),((void*)0))));
                            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                            come_call_finalizer(sFun_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            if(                            fun                            ) {
                                break;
                            }
                        }
                    }
                    if(                    fun==((void*)0)&&charp_operator_equals(fun_name,"to_string")                    ) {
                        __right_value0 = (void*)0;
                        multiple_assign_var5=((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_to_string_automatically((struct sType*)come_increment_ref_count(obj_type),fun_name,info)));
                        fun2=multiple_assign_var5->v1;
                        real_fun_name=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        fun=fun2;
                        __dec_obj55=generics_fun_name,
                        generics_fun_name=(char*)come_increment_ref_count(real_fun_name);
                        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0);
                        (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    }
                    if(                    fun==((void*)0)&&charp_operator_equals(fun_name,"equals")                    ) {
                        __right_value0 = (void*)0;
                        multiple_assign_var6=((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_equals_automatically((struct sType*)come_increment_ref_count(obj_type),fun_name,info)));
                        fun2_29=multiple_assign_var6->v1;
                        real_fun_name_30=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        __right_value0 = (void*)0;
                        fun=((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name_30)));
                        come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        __dec_obj56=generics_fun_name,
                        generics_fun_name=(char*)come_increment_ref_count(real_fun_name_30);
                        __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0, (void*)0);
                        (real_fun_name_30 = come_decrement_ref_count(real_fun_name_30, (void*)0, (void*)0, 0, 0, (void*)0));
                    }
                    if(                    fun==((void*)0)                    ) {
                        __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        original_obj_type_fun_name=(char*)come_increment_ref_count(create_method_name_original_obj_type(obj_type,0,((char*)(__right_value0=__builtin_string(fun_name))),info,1));
                        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                        __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        fun=((struct sFun*)(__right_value1=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value0=__builtin_string(original_obj_type_fun_name))),((void*)0))));
                        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                        come_call_finalizer(sFun_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        if(                        fun                        ) {
                            __dec_obj57=generics_fun_name,
                            generics_fun_name=(char*)come_increment_ref_count(original_obj_type_fun_name);
                            __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0);
                        }
                        (original_obj_type_fun_name = come_decrement_ref_count(original_obj_type_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    }
                    if(                    fun==((void*)0)                    ) {
                        __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        __result_obj__93 = (struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count(((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value1=tuple3$3char$phsFun$psGenericsFun$p_initialize((struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count((struct tuple3$3char$phsFun$psGenericsFun$p*)come_calloc_v2(1, sizeof(struct tuple3$3char$phsFun$psGenericsFun$p)*(1), "20method.c", 309, "struct tuple3$3char$phsFun$psGenericsFun$p")),(char*)come_increment_ref_count(generics_fun_name),(struct sFun*)((void*)0),(struct sGenericsFun*)((void*)0)))));
                        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                        come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __result_obj__93, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                        return __result_obj__93;
                    }
                }
            }
        }
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__94 = (struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count(((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value1=tuple3$3char$phsFun$psGenericsFun$p_initialize((struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count((struct tuple3$3char$phsFun$psGenericsFun$p*)come_calloc_v2(1, sizeof(struct tuple3$3char$phsFun$psGenericsFun$p)*(1), "20method.c", 316, "struct tuple3$3char$phsFun$psGenericsFun$p")),(char*)come_increment_ref_count(generics_fun_name),fun,generics_fun))));
    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __result_obj__94, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__94;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value;
struct sFun* __result_obj__81;
unsigned int hash;
unsigned int it;
struct sFun* __result_obj__82;
struct sFun* __result_obj__83;
struct sFun* __result_obj__84;
struct sFun* __result_obj__85;
    memset(&default_value,0,sizeof(struct sFun*));
    if(    self==((void*)0)    ) {
        __result_obj__81 = (struct sFun*)come_increment_ref_count(default_value);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sFun_finalize, __result_obj__81, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__81;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__82 = (struct sFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__82, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__82;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__83 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__83, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__83;
            }
        }
        else {
            __result_obj__84 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__84, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__84;
        }
    }
    __result_obj__85 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__85, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__85;
}

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value;
struct sFun* __result_obj__86;
unsigned int hash;
unsigned int it;
struct sFun* __result_obj__87;
struct sFun* __result_obj__88;
struct sFun* __result_obj__89;
struct sFun* __result_obj__90;
    memset(&default_value,0,sizeof(struct sFun*));
    if(    self==((void*)0)    ) {
        __result_obj__86 = (struct sFun*)come_increment_ref_count(default_value);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sFun_finalize, __result_obj__86, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__86;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(    1    ) {
        if(        self->item_existance[it]        ) {
            if(            string_equals(self->keys[it],key)            ) {
                __result_obj__87 = (struct sFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__87, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__87;
            }
            it++;
            if(            it>=self->size            ) {
                it=0;
            }
            else if(            it==hash            ) {
                __result_obj__88 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__88, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__88;
            }
        }
        else {
            __result_obj__89 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__89, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__89;
        }
    }
    __result_obj__90 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__90, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__90;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct tuple3$3char$phsFun$psGenericsFun$p* tuple3$3char$phsFun$psGenericsFun$p_initialize(struct tuple3$3char$phsFun$psGenericsFun$p* self, char* v1, struct sFun* v2, struct sGenericsFun* v3){
char* __dec_obj52;
struct tuple3$3char$phsFun$psGenericsFun$p* __result_obj__91;
    __dec_obj52=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0, (void*)0);
    self->v2=v2;
    self->v3=v3;
    __result_obj__91 = (struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count(self);
    come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __result_obj__91, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__91;
}

static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNode* __dec_obj58;
char* __dec_obj59;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj65;
struct buffer* __dec_obj66;
struct list$1sType$ph* __dec_obj67;
struct sMethodCallNode* __result_obj__102;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj58=self->obj,
    self->obj=(struct sNode*)come_increment_ref_count(sNode_clone(obj));
    (__dec_obj58 ? __dec_obj58 = come_decrement_ref_count(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0, (void*)0) :0);
    __right_value0 = (void*)0;
    __dec_obj59=self->fun_name,
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj65=self->params,
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(params));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj65,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj66=self->method_block,
    self->method_block=(struct buffer*)come_increment_ref_count(buffer_clone(method_block));
    come_call_finalizer(buffer_finalize, __dec_obj66,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->method_block_sline=method_block_sline;
    __right_value0 = (void*)0;
    __dec_obj67=self->method_generics_types,
    self->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(method_generics_types));
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj67,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->no_infference_method_generics=no_infference_method_generics;
    self->recursive=recursive;
    self->fun=((void*)0);
    __result_obj__102 = (struct sMethodCallNode*)come_increment_ref_count(self);
    come_call_finalizer(sMethodCallNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sMethodCallNode_finalize, __result_obj__102, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__102;
}

_Bool sMethodCallNode_terminated(struct sMethodCallNode* self){
    if(    self->method_block    ) {
        return 1;
    }
    else {
        return 0;
    }
}

char* sMethodCallNode_kind(struct sMethodCallNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__103;
    __result_obj__103 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sMethodCallNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__103 = come_decrement_ref_count(__result_obj__103, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__103;
}

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info){
char* fun_name;
struct list$1tuple2$2char$phsNode$ph$ph* params;
struct sNode* obj;
struct buffer* method_block;
int method_block_sline;
struct list$1sType$ph* method_generics_types;
_Bool recursive;
_Bool no_infference_method_generics;
struct list$1sType$ph* method_generics_types_33;
void* __right_value0 = (void*)0;
struct list$1sType$ph* __dec_obj68;
_Bool Value;
_Bool __result_obj__104;
struct CVALUE* obj_value;
struct sType* obj_type;
_Bool no_output_come_code;
struct sType* type;
char* none_generics_name;
char* fun_name2;
char* fun_name3;
struct sGenericsFun* generics_fun;
_Bool method_generics;
void* __right_value1 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var7
;char* name=0;
struct sGenericsFun* gfun=0;
char* generics_fun_name;
struct sFun* fun;
struct list$1CVALUE$ph* come_params;
_Bool no_output_come_code_34;
_Bool __result_obj__106;
struct CVALUE* method_block_node;
struct sType* method_block_lambda_type;
struct sType* method_block_result_type;
struct sType* generics_fun_method_block_lambda_type;
struct sType* generics_fun_method_block_result_type;
int method_generics_num;
int n;
struct list$1sType$ph* o2_saved;
struct sType* it;
int method_generics_num_40;
void* __right_value2 = (void*)0;
void* __right_value3 = (void*)0;
struct list$1CVALUE$ph* come_params_41;
int i;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_42;
struct tuple2$2char$phsNode$ph* it_44;
struct tuple2$2char$phsNode$ph* multiple_assign_var8
;char* label=0;
struct sNode* node=0;
_Bool Value_46;
_Bool __result_obj__124;
struct CVALUE* come_value;
struct sType* __dec_obj73;
int method_generics_num_47;
struct list$1sType$ph* o2_saved_48;
struct sType* it_49;
int method_generics_num_50;
struct list$1CVALUE$ph* come_params_51;
int i_52;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_53;
struct tuple2$2char$phsNode$ph* it_54;
struct tuple2$2char$phsNode$ph* multiple_assign_var9
;char* label_55=0;
struct sNode* node_56=0;
_Bool Value_57;
_Bool __result_obj__125;
struct CVALUE* come_value_58;
struct sType* __dec_obj74;
int method_generics_num_59;
int n_60;
struct list$1sType$ph* o2_saved_61;
struct sType* it_62;
int method_generics_num_63;
struct sClass* klass;
_Bool calling_dynamic_method;
struct sType* lambda_type;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_64;
struct tuple2$2char$phsType$ph* it_66;
struct tuple2$2char$phsType$ph* multiple_assign_var10
;char* field_name=0;
struct sType* field_type=0;
struct sType* result_type;
struct list$1CVALUE$ph* come_params_68;
int i_69;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_70;
struct tuple2$2char$phsNode$ph* it_71;
struct tuple2$2char$phsNode$ph* multiple_assign_var11
;char* label_72=0;
struct sNode* node_73=0;
_Bool Value_74;
_Bool __result_obj__132;
struct CVALUE* come_value_75;
struct sType* __dec_obj75;
_Bool _conditional_value_X0;
struct buffer* buf;
int j;
struct list$1CVALUE$ph* o2_saved_76;
struct CVALUE* it_78;
char* __dec_obj76;
struct CVALUE* come_value2;
char* __dec_obj77;
struct sType* result_type2;
struct sType* __dec_obj78;
struct list$1sType$ph* __dec_obj79;
struct tuple3$3char$phsFun$psGenericsFun$p* multiple_assign_var12
;char* generics_fun_name_80=0;
struct sFun* fun_81=0;
struct sGenericsFun* generics_fun_82=0;
_Bool __result_obj__139;
_Bool __result_obj__140;
struct sType* result_type_83;
struct sType* __dec_obj80;
struct list$1sType$ph* param_types;
struct list$1sType$ph* o2_saved_84;
struct sType* it_85;
struct sType* it2;
struct sType* no_solved_obj_type;
struct sType* it3;
struct list$1sType$ph* type_checking_param_types;
int n_86;
struct list$1sType$ph* o2_saved_87;
struct sType* it_88;
struct sType* no_solved_obj_type_89;
struct sType* it3_90;
struct list$1CVALUE$ph* come_params_91;
int i_92;
_Bool first_param;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_95;
struct tuple2$2char$phsNode$ph* it_96;
struct tuple2$2char$phsNode$ph* multiple_assign_var13
;char* label_97=0;
struct sNode* node_98=0;
int n_99;
struct list$1char$ph* o2_saved_100;
char* it_102;
_Bool Value_104;
_Bool __result_obj__149;
struct CVALUE* come_value_105;
struct sType* __dec_obj84;
_Bool _conditional_value_X1;
_Bool _conditional_value_X2;
int i_107;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_108;
struct tuple2$2char$phsNode$ph* it_109;
struct tuple2$2char$phsNode$ph* multiple_assign_var14
;char* label_110=0;
struct sNode* node_111=0;
_Bool _conditional_value_X3;
_Bool _conditional_value_X4;
_Bool __result_obj__159;
_Bool _conditional_value_X5;
_Bool Value_114;
_Bool __result_obj__160;
struct CVALUE* come_value_115;
struct sType* __dec_obj86;
_Bool _conditional_value_X6;
_Bool _conditional_value_X7;
_Bool _conditional_value_X8;
char* default_param;
char* param_name;
_Bool _conditional_value_X9;
struct buffer* source;
char* p;
char* head;
int sline;
struct buffer* __dec_obj87;
_Bool no_output_come_code_116;
struct sNode* node_117;
_Bool Value_118;
_Bool __result_obj__161;
struct buffer* __dec_obj88;
struct CVALUE* come_value_119;
struct sType* __dec_obj89;
_Bool _conditional_value_X10;
_Bool _conditional_value_X11;
_Bool _conditional_value_X12;
_Bool __result_obj__162;
_Bool __result_obj__163;
struct buffer* buf_120;
char* saved_obj_value;
struct sVar* saved_var;
char* var_name;
struct sType* type_122;
struct sVar* var_;
char* __dec_obj90;
int j_123;
struct list$1CVALUE$ph* o2_saved_124;
struct CVALUE* it_125;
int j_126;
struct list$1CVALUE$ph* o2_saved_127;
struct CVALUE* it_128;
struct CVALUE* come_value2_129;
char* __dec_obj91;
struct sType* __dec_obj92;
char* __dec_obj93;
struct list$1sType$ph* __dec_obj94;
_Bool __result_obj__164;
    fun_name=(char*)come_increment_ref_count(self->fun_name);
    params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self->params);
    obj=(struct sNode*)come_increment_ref_count(self->obj);
    method_block=(struct buffer*)come_increment_ref_count(self->method_block);
    method_block_sline=self->method_block_sline;
    method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(self->method_generics_types);
    recursive=self->recursive;
    no_infference_method_generics=self->no_infference_method_generics;
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    method_generics_types_33=(struct list$1sType$ph*)come_increment_ref_count(info->method_generics_types);
    __dec_obj68=info->method_generics_types,
    info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->method_generics_types));
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj68,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    Value=node_compile(obj,info);
    if(    !Value    ) {
        __result_obj__104 = 0;
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_33, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__104;
    }
    else {
    }
    __right_value0 = (void*)0;
    obj_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    __right_value0 = (void*)0;
    obj_type=(struct sType*)come_increment_ref_count(sType_clone(obj_value->type));
    if(    !no_infference_method_generics    ) {
        no_output_come_code=info->no_output_come_code;
        info->no_output_come_code=1;
        __right_value0 = (void*)0;
        type=(struct sType*)come_increment_ref_count(sType_clone(obj_type));
        __right_value0 = (void*)0;
        none_generics_name=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        __right_value0 = (void*)0;
        fun_name2=(char*)come_increment_ref_count(create_method_name(type,0,fun_name,info,1));
        __right_value0 = (void*)0;
        fun_name3=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name));
        __right_value0 = (void*)0;
        generics_fun=((struct sGenericsFun*)(__right_value0=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3,((void*)0))));
        come_call_finalizer(sGenericsFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(        generics_fun        ) {
            method_generics=list$1char$ph_length(generics_fun->mMethodGenericsTypeNames)>0;
            if(            method_generics&&list$1sType$ph_length(info->method_generics_types)==0            ) {
                __right_value0 = (void*)0;
                multiple_assign_var7=((struct tuple2$2char$phsGenericsFun$p*)(__right_value1=make_generics_function(type,(char*)come_increment_ref_count(__builtin_string(fun_name)),info,1)));
                name=(char*)come_increment_ref_count(multiple_assign_var7->v1);
                gfun=multiple_assign_var7->v2;
                come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                generics_fun_name=(char*)come_increment_ref_count(name);
                __right_value0 = (void*)0;
                fun=((struct sFun*)(__right_value0=map$2char$phsFun$ph_at(info->funcs,generics_fun_name,((void*)0))));
                come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 399, "struct list$1CVALUE$ph*"))));
                if(                method_block                ) {
                    no_output_come_code_34=info->no_output_come_code;
                    info->no_output_come_code=1;
                    if(                    !compile_method_block(method_block,(struct list$1CVALUE$ph*)come_increment_ref_count(come_params),fun,fun_name3,method_block_sline,info,1)                    ) {
                        __result_obj__106 = 0;
                        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
                        (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0));
                        (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0));
                        (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0));
                        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                        come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_33, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result_obj__106;
                    }
                    info->no_output_come_code=no_output_come_code_34;
                    __right_value0 = (void*)0;
                    method_block_node=((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(come_params,-1)));
                    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    __right_value0 = (void*)0;
                    method_block_lambda_type=(struct sType*)come_increment_ref_count(sType_clone(method_block_node->type));
                    __right_value0 = (void*)0;
                    method_block_result_type=(struct sType*)come_increment_ref_count(sType_clone(info->come_method_block_function_result_type));
                    __right_value0 = (void*)0;
                    generics_fun_method_block_lambda_type=((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(generics_fun->mParamTypes,-1)));
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    generics_fun_method_block_result_type=generics_fun_method_block_lambda_type->mResultType;
                    if(                    generics_fun_method_block_result_type->mClass->mMethodGenerics                    ) {
                        method_generics_num=generics_fun_method_block_result_type->mClass->mMethodGenericsNum;
                        __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        list$1sType$ph_operator_store_element(info->method_generics_types,method_generics_num,(struct sType*)come_increment_ref_count(sType_clone(method_block_result_type)));
                        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    }
                    n=0;
                    for(                    o2_saved=(struct list$1sType$ph*)come_increment_ref_count(generics_fun_method_block_lambda_type->mParamTypes),it=list$1sType$ph_begin(o2_saved)                    ;                    !list$1sType$ph_end(o2_saved)                    ;                    it=list$1sType$ph_next(o2_saved)                    ){
                        if(                        it->mClass->mMethodGenerics                        ) {
                            method_generics_num_40=it->mClass->mMethodGenericsNum;
                            __right_value0 = (void*)0;
                            __right_value1 = (void*)0;
                            list$1sType$ph_operator_store_element(info->method_generics_types,method_generics_num_40,(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value2=list$1sType$ph_operator_load_element(method_block_lambda_type->mParamTypes,n))))));
                            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            come_call_finalizer(sType_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        }
                        n++;
                    }
                    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    come_params_41=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 428, "struct list$1CVALUE$ph*"))));
                    i=0;
                    for(                    o2_saved_42=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params),it_44=list$1tuple2$2char$phsNode$ph$ph_begin(o2_saved_42)                    ;                    !list$1tuple2$2char$phsNode$ph$ph_end(o2_saved_42)                    ;                    it_44=list$1tuple2$2char$phsNode$ph$ph_next(o2_saved_42)                    ){
                        multiple_assign_var8=it_44;
                        label=(char*)come_increment_ref_count(multiple_assign_var8->v1);
                        node=(struct sNode*)come_increment_ref_count(multiple_assign_var8->v2);
                        if(                        i==0                        ) {
                            list$1CVALUE$ph_push_back(come_params_41,(struct CVALUE*)come_increment_ref_count(obj_value));
                            i++;
                        }
                        else {
                            Value_46=node_compile(node,info);
                            if(                            !Value_46                            ) {
                                __result_obj__124 = 0;
                                (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0));
                                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_42, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer(sType_finalize, method_block_lambda_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer(sType_finalize, method_block_result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_41, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
                                (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0));
                                (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0));
                                (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0));
                                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                                come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_33, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                return __result_obj__124;
                            }
                            else {
                            }
                            __right_value0 = (void*)0;
                            come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            __right_value0 = (void*)0;
                            __dec_obj73=come_value->type,
                            come_value->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
                            come_call_finalizer(sType_finalize, __dec_obj73,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                            list$1CVALUE$ph_push_back(come_params_41,(struct CVALUE*)come_increment_ref_count(come_value));
                            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0));
                        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    }
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_42, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(                    generics_fun->mResultType->mClass->mMethodGenerics                    ) {
                        method_generics_num_47=generics_fun->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type                        ) {
                            __right_value0 = (void*)0;
                            __right_value1 = (void*)0;
                            list$1sType$ph_operator_store_element(info->method_generics_types,method_generics_num_47,(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type)));
                            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        }
                    }
                    n=0;
                    for(                    o2_saved_48=(struct list$1sType$ph*)come_increment_ref_count(generics_fun->mParamTypes),it_49=list$1sType$ph_begin(o2_saved_48)                    ;                    !list$1sType$ph_end(o2_saved_48)                    ;                    it_49=list$1sType$ph_next(o2_saved_48)                    ){
                        if(                        it_49->mClass->mMethodGenerics                        ) {
                            method_generics_num_50=it_49->mClass->mMethodGenericsNum;
                            if(                            n<list$1CVALUE$ph_length(come_params_41)                            ) {
                                __right_value0 = (void*)0;
                                __right_value1 = (void*)0;
                                __right_value2 = (void*)0;
                                __right_value3 = (void*)0;
                                list$1sType$ph_operator_store_element(info->method_generics_types,method_generics_num_50,(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value2=list$1CVALUE$ph_operator_load_element(come_params_41,n)))->type)));
                                come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                come_call_finalizer(CVALUE_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            }
                        }
                        n++;
                    }
                    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_48, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, method_block_lambda_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, method_block_result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_41, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    come_params_51=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 467, "struct list$1CVALUE$ph*"))));
                    i_52=0;
                    for(                    o2_saved_53=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params),it_54=list$1tuple2$2char$phsNode$ph$ph_begin(o2_saved_53)                    ;                    !list$1tuple2$2char$phsNode$ph$ph_end(o2_saved_53)                    ;                    it_54=list$1tuple2$2char$phsNode$ph$ph_next(o2_saved_53)                    ){
                        multiple_assign_var9=it_54;
                        label_55=(char*)come_increment_ref_count(multiple_assign_var9->v1);
                        node_56=(struct sNode*)come_increment_ref_count(multiple_assign_var9->v2);
                        if(                        i_52==0                        ) {
                            list$1CVALUE$ph_push_back(come_params_51,(struct CVALUE*)come_increment_ref_count(obj_value));
                            i_52++;
                        }
                        else {
                            Value_57=node_compile(node_56,info);
                            if(                            !Value_57                            ) {
                                __result_obj__125 = 0;
                                (label_55 = come_decrement_ref_count(label_55, (void*)0, (void*)0, 0, 0, (void*)0));
                                ((node_56) ? node_56 = come_decrement_ref_count(node_56, ((struct sNode*)node_56)->finalize, ((struct sNode*)node_56)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_53, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_51, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
                                (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0));
                                (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0));
                                (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0));
                                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                                come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_33, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                return __result_obj__125;
                            }
                            else {
                            }
                            __right_value0 = (void*)0;
                            come_value_58=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            __right_value0 = (void*)0;
                            __dec_obj74=come_value_58->type,
                            come_value_58->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_58->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
                            come_call_finalizer(sType_finalize, __dec_obj74,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                            list$1CVALUE$ph_push_back(come_params_51,(struct CVALUE*)come_increment_ref_count(come_value_58));
                            come_call_finalizer(CVALUE_finalize, come_value_58, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        (label_55 = come_decrement_ref_count(label_55, (void*)0, (void*)0, 0, 0, (void*)0));
                        ((node_56) ? node_56 = come_decrement_ref_count(node_56, ((struct sNode*)node_56)->finalize, ((struct sNode*)node_56)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    }
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_53, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(                    generics_fun->mResultType->mClass->mMethodGenerics                    ) {
                        method_generics_num_59=generics_fun->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type                        ) {
                            __right_value0 = (void*)0;
                            __right_value1 = (void*)0;
                            list$1sType$ph_operator_store_element(info->method_generics_types,method_generics_num_59,(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type)));
                            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        }
                    }
                    n_60=0;
                    for(                    o2_saved_61=(struct list$1sType$ph*)come_increment_ref_count(generics_fun->mParamTypes),it_62=list$1sType$ph_begin(o2_saved_61)                    ;                    !list$1sType$ph_end(o2_saved_61)                    ;                    it_62=list$1sType$ph_next(o2_saved_61)                    ){
                        if(                        it_62->mClass->mMethodGenerics                        ) {
                            method_generics_num_63=it_62->mClass->mMethodGenericsNum;
                            if(                            n_60<list$1CVALUE$ph_length(come_params_51)                            ) {
                                __right_value0 = (void*)0;
                                __right_value1 = (void*)0;
                                __right_value2 = (void*)0;
                                __right_value3 = (void*)0;
                                list$1sType$ph_operator_store_element(info->method_generics_types,method_generics_num_63,(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value2=list$1CVALUE$ph_operator_load_element(come_params_51,n_60)))->type)));
                                come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                come_call_finalizer(CVALUE_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            }
                        }
                        n_60++;
                    }
                    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_61, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_51, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                map$2char$phsFun$ph_remove(info->funcs,(char*)come_increment_ref_count(generics_fun_name));
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
                (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->no_output_come_code=no_output_come_code;
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0));
        (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    klass=obj_type->mClass;
    calling_dynamic_method=0;
    lambda_type=((void*)0);
    for(    o2_saved_64=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields),it_66=list$1tuple2$2char$phsType$ph$ph_begin(o2_saved_64)    ;    !list$1tuple2$2char$phsType$ph$ph_end(o2_saved_64)    ;    it_66=list$1tuple2$2char$phsType$ph$ph_next(o2_saved_64)    ){
        multiple_assign_var10=it_66;
        field_name=(char*)come_increment_ref_count(multiple_assign_var10->v1);
        field_type=(struct sType*)come_increment_ref_count(multiple_assign_var10->v2);
        if(        string_operator_equals(field_name,fun_name)&&string_operator_equals(field_type->mClass->mName,"lambda")        ) {
            calling_dynamic_method=1;
            lambda_type=field_type;
            (field_name = come_decrement_ref_count(field_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        (field_name = come_decrement_ref_count(field_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_64, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(    klass->mProtocol&&calling_dynamic_method    ) {
        __right_value0 = (void*)0;
        result_type=(struct sType*)come_increment_ref_count(sType_clone(lambda_type->mResultType));
        result_type->mStatic=0;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_params_68=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 530, "struct list$1CVALUE$ph*"))));
        i_69=0;
        for(        o2_saved_70=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params),it_71=list$1tuple2$2char$phsNode$ph$ph_begin(o2_saved_70)        ;        !list$1tuple2$2char$phsNode$ph$ph_end(o2_saved_70)        ;        it_71=list$1tuple2$2char$phsNode$ph$ph_next(o2_saved_70)        ){
            multiple_assign_var11=it_71;
            label_72=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            node_73=(struct sNode*)come_increment_ref_count(multiple_assign_var11->v2);
            if(            i_69==0            ) {
                list$1CVALUE$ph_push_back(come_params_68,(struct CVALUE*)come_increment_ref_count(obj_value));
                i_69++;
            }
            else {
                Value_74=node_compile(node_73,info);
                if(                !Value_74                ) {
                    __result_obj__132 = 0;
                    (label_72 = come_decrement_ref_count(label_72, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((node_73) ? node_73 = come_decrement_ref_count(node_73, ((struct sNode*)node_73)->finalize, ((struct sNode*)node_73)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_70, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_68, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_33, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result_obj__132;
                }
                else {
                }
                __right_value0 = (void*)0;
                come_value_75=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                __right_value0 = (void*)0;
                __dec_obj75=come_value_75->type,
                come_value_75->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_75->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
                come_call_finalizer(sType_finalize, __dec_obj75,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __right_value3 = (void*)0;
                check_assign_type(((char*)(__right_value2=xsprintf("(a). \%s param num \%s is assinged to",((char*)(__right_value0=string_to_string(fun_name))),((char*)(__right_value1=int_to_string(i_69)))))),((struct sType*)(__right_value3=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i_69-1))),come_value_75->type,come_value_75,0,1,1,info);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
                come_call_finalizer(sType_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(                __right_value0 = (void*)0,                 ({(_conditional_value_X0=(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i_69-1)))->mHeap&&come_value_75->type->mHeap));                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                _conditional_value_X0;})                ) {
                    __right_value0 = (void*)0;
                    std_move(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i_69-1))),come_value_75->type,come_value_75,info);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
                list$1CVALUE$ph_push_back(come_params_68,(struct CVALUE*)come_increment_ref_count(come_value_75));
                i_69++;
                come_call_finalizer(CVALUE_finalize, come_value_75, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            (label_72 = come_decrement_ref_count(label_72, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node_73) ? node_73 = come_decrement_ref_count(node_73, ((struct sNode*)node_73)->finalize, ((struct sNode*)node_73)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_70, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "20method.c", 561, "struct buffer*"))));
        buffer_append_format(buf,"%s->%s",obj_value->c_value,fun_name);
        buffer_append_str(buf,"(");
        j=0;
        for(        o2_saved_76=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_68),it_78=list$1CVALUE$ph_begin(o2_saved_76)        ;        !list$1CVALUE$ph_end(o2_saved_76)        ;        it_78=list$1CVALUE$ph_next(o2_saved_76)        ){
            if(            j==0            ) {
                __right_value0 = (void*)0;
                __dec_obj76=it_78->c_value,
                it_78->c_value=(char*)come_increment_ref_count(xsprintf("%s->_protocol_obj",it_78->c_value));
                __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0, (void*)0);
            }
            buffer_append_str(buf,it_78->c_value);
            if(            j!=list$1CVALUE$ph_length(come_params_68)-1            ) {
                buffer_append_str(buf,",");
            }
            j++;
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_76, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_str(buf,")");
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "20method.c", 581, "struct CVALUE*"))));
        __right_value0 = (void*)0;
        __dec_obj77=come_value2->c_value,
        come_value2->c_value=(char*)come_increment_ref_count(buffer_to_string(buf));
        __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        result_type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(result_type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        __right_value0 = (void*)0;
        __dec_obj78=come_value2->type,
        come_value2->type=(struct sType*)come_increment_ref_count(sType_clone(result_type2));
        come_call_finalizer(sType_finalize, __dec_obj78,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(        come_value2->type        ) {
            come_value2->type->mStatic=0;
        }
        come_value2->var=((void*)0);
        if(        result_type2->mHeap        ) {
            append_object_to_right_values(come_value2,(struct sType*)come_increment_ref_count(result_type2),info,0,((void*)0),((void*)0),((void*)0));
        }
        add_come_last_code(info,"%s",come_value2->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2));
        come_call_finalizer(list$1sType$ph$p_finalize, info->method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj79=info->method_generics_types,
        info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_33);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj79,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        info->calling_fun=((void*)0);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_68, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __right_value0 = (void*)0;
        multiple_assign_var12=((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value0=get_method(fun_name,(struct sType*)come_increment_ref_count(obj_type),info)));
        generics_fun_name_80=(char*)come_increment_ref_count(multiple_assign_var12->v1);
        fun_81=multiple_assign_var12->v2;
        generics_fun_82=multiple_assign_var12->v3;
        come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(        fun_81==((void*)0)        ) {
            err_msg(info,"function not found(%s, %s) at method(%s)(ZY)",generics_fun_name_80,fun_name,info->come_fun->mName);
            __result_obj__139 = 1;
            (generics_fun_name_80 = come_decrement_ref_count(generics_fun_name_80, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_33, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__139;
        }
        if(        list$1sType$ph_length(fun_81->mParamTypes)==0        ) {
            err_msg(info,"Method require function parametor");
            __result_obj__140 = 1;
            (generics_fun_name_80 = come_decrement_ref_count(generics_fun_name_80, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_33, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__140;
        }
        __right_value0 = (void*)0;
        result_type_83=(struct sType*)come_increment_ref_count(sType_clone(fun_81->mResultType));
        __right_value0 = (void*)0;
        __dec_obj80=result_type_83,
        result_type_83=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(result_type_83),(struct sType*)come_increment_ref_count(info->generics_type),info));
        come_call_finalizer(sType_finalize, __dec_obj80,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        result_type_83->mStatic=0;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "20method.c", 625, "struct list$1sType$ph*"))));
        for(        o2_saved_84=(struct list$1sType$ph*)come_increment_ref_count(fun_81->mParamTypes),it_85=list$1sType$ph_begin(o2_saved_84)        ;        !list$1sType$ph_end(o2_saved_84)        ;        it_85=list$1sType$ph_next(o2_saved_84)        ){
            if(            it_85==((void*)0)            ) {
                __right_value0 = (void*)0;
                list$1sType$ph_push_back(param_types,(struct sType*)come_increment_ref_count(sType_clone(it_85)));
            }
            else {
                __right_value0 = (void*)0;
                it2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(it_85),(struct sType*)come_increment_ref_count(info->generics_type),info));
                no_solved_obj_type=(struct sType*)come_increment_ref_count(obj_type->mNoSolvedGenericsType);
                __right_value0 = (void*)0;
                it3=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(it_85),(struct sType*)come_increment_ref_count(no_solved_obj_type),info));
                list$1sType$ph_push_back(param_types,(struct sType*)come_increment_ref_count(it2));
                come_call_finalizer(sType_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, no_solved_obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, it3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        __right_value0 = (void*)0;
        type_checking_param_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(param_types));
        if(        generics_fun_82        ) {
            n_86=0;
            for(            o2_saved_87=(struct list$1sType$ph*)come_increment_ref_count(generics_fun_82->mParamTypes),it_88=list$1sType$ph_begin(o2_saved_87)            ;            !list$1sType$ph_end(o2_saved_87)            ;            it_88=list$1sType$ph_next(o2_saved_87)            ){
                if(                it_88==((void*)0)                ) {
                }
                else {
                    no_solved_obj_type_89=(struct sType*)come_increment_ref_count(obj_type->mNoSolvedGenericsType);
                    __right_value0 = (void*)0;
                    it3_90=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(it_88),(struct sType*)come_increment_ref_count(no_solved_obj_type_89),info));
                    come_call_finalizer(sType_finalize, no_solved_obj_type_89, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, it3_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                n_86++;
            }
            come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_params_91=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 655, "struct list$1CVALUE$ph*"))));
        for(        i_92=0        ;        i_92<list$1sType$ph_length(fun_81->mParamTypes)-(((method_block)?(2):(0)))        ;        i_92++        ){
            list$1CVALUE$ph_add(come_params_91,((void*)0));
        }
        first_param=1;
        for(        o2_saved_95=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params),it_96=list$1tuple2$2char$phsNode$ph$ph_begin(o2_saved_95)        ;        !list$1tuple2$2char$phsNode$ph$ph_end(o2_saved_95)        ;        it_96=list$1tuple2$2char$phsNode$ph$ph_next(o2_saved_95)        ){
            multiple_assign_var13=it_96;
            label_97=(char*)come_increment_ref_count(multiple_assign_var13->v1);
            node_98=(struct sNode*)come_increment_ref_count(multiple_assign_var13->v2);
            if(            first_param            ) {
                first_param=0;
            }
            else if(            label_97            ) {
                n_99=0;
                for(                o2_saved_100=(struct list$1char$ph*)come_increment_ref_count(fun_81->mParamNames),it_102=list$1char$ph_begin(o2_saved_100)                ;                !list$1char$ph_end(o2_saved_100)                ;                it_102=list$1char$ph_next(o2_saved_100)                ){
                    if(                    string_operator_equals(label_97,it_102)                    ) {
                        break;
                    }
                    n_99++;
                }
                come_call_finalizer(list$1char$ph$p_finalize, o2_saved_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                Value_104=node_compile(node_98,info);
                if(                !Value_104                ) {
                    __result_obj__149 = 0;
                    (label_97 = come_decrement_ref_count(label_97, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((node_98) ? node_98 = come_decrement_ref_count(node_98, ((struct sNode*)node_98)->finalize, ((struct sNode*)node_98)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_95, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (generics_fun_name_80 = come_decrement_ref_count(generics_fun_name_80, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, result_type_83, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, type_checking_param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_33, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result_obj__149;
                }
                else {
                }
                __right_value0 = (void*)0;
                come_value_105=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                __right_value0 = (void*)0;
                __dec_obj84=come_value_105->type,
                come_value_105->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_105->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
                come_call_finalizer(sType_finalize, __dec_obj84,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(                __right_value0 = (void*)0,                 ({(_conditional_value_X1=(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(param_types,n_99)))));                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                _conditional_value_X1;})                ) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __right_value3 = (void*)0;
                    check_assign_type(((char*)(__right_value2=xsprintf("(b). \%s param num \%s is assinged to",((char*)(__right_value0=string_to_string(fun_name))),((char*)(__right_value1=int_to_string(n_99)))))),((struct sType*)(__right_value3=list$1sType$ph_operator_load_element(type_checking_param_types,n_99))),come_value_105->type,come_value_105,0,1,1,info);
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
                    come_call_finalizer(sType_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
                if(                __right_value0 = (void*)0,                 __right_value1 = (void*)0,                 ({(_conditional_value_X2=(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(param_types,n_99)))&&((struct sType*)(__right_value1=list$1sType$ph_operator_load_element(param_types,n_99)))->mHeap&&come_value_105->type->mHeap));                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                _conditional_value_X2;})                ) {
                    __right_value0 = (void*)0;
                    std_move(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(param_types,n_99))),come_value_105->type,come_value_105,info);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
                list$1CVALUE$ph_replace(come_params_91,n_99,(struct CVALUE*)come_increment_ref_count(come_value_105));
                come_call_finalizer(CVALUE_finalize, come_value_105, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            (label_97 = come_decrement_ref_count(label_97, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node_98) ? node_98 = come_decrement_ref_count(node_98, ((struct sNode*)node_98)->finalize, ((struct sNode*)node_98)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_95, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        i_107=0;
        for(        o2_saved_108=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params),it_109=list$1tuple2$2char$phsNode$ph$ph_begin(o2_saved_108)        ;        !list$1tuple2$2char$phsNode$ph$ph_end(o2_saved_108)        ;        it_109=list$1tuple2$2char$phsNode$ph$ph_next(o2_saved_108)        ){
            multiple_assign_var14=it_109;
            label_110=(char*)come_increment_ref_count(multiple_assign_var14->v1);
            node_111=(struct sNode*)come_increment_ref_count(multiple_assign_var14->v2);
            if(            i_107==0            ) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __right_value3 = (void*)0;
                check_assign_type(((char*)(__right_value2=xsprintf("(c). \%s param num \%s is assinged to",((char*)(__right_value0=string_to_string(fun_name))),((char*)(__right_value1=int_to_string(i_107)))))),((struct sType*)(__right_value3=list$1sType$ph_operator_load_element(type_checking_param_types,i_107))),obj_value->type,obj_value,0,1,1,info);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
                come_call_finalizer(sType_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(                __right_value0 = (void*)0,                 ({(_conditional_value_X3=(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(param_types,i_107)))->mHeap&&obj_value->type->mHeap));                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                _conditional_value_X3;})                ) {
                    __right_value0 = (void*)0;
                    std_move(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(param_types,i_107))),obj_value->type,obj_value,info);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
                else if(                __right_value0 = (void*)0,                 ({(_conditional_value_X4=(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(param_types,i_107)))->mHeap&&!obj_value->type->mHeap));                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                _conditional_value_X4;})                ) {
                    __right_value0 = (void*)0;
                    err_msg(info,"require heap parametor(%s)",((char*)(__right_value0=list$1char$ph_operator_load_element(fun_81->mParamNames,i_107))));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                    __result_obj__159 = 1;
                    (label_110 = come_decrement_ref_count(label_110, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((node_111) ? node_111 = come_decrement_ref_count(node_111, ((struct sNode*)node_111)->finalize, ((struct sNode*)node_111)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (generics_fun_name_80 = come_decrement_ref_count(generics_fun_name_80, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, result_type_83, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, type_checking_param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_33, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result_obj__159;
                }
                list$1CVALUE$ph_replace(come_params_91,i_107,(struct CVALUE*)come_increment_ref_count(obj_value));
                i_107++;
            }
            else if(            label_110            ) {
            }
            else {
                while(                1                ) {
                    if(                    __right_value0 = (void*)0,                     ({(_conditional_value_X5=(((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_91,i_107)))==((void*)0)));                    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    _conditional_value_X5;})                    ) {
                        break;
                    }
                    else {
                        i_107++;
                    }
                }
                Value_114=node_compile(node_111,info);
                if(                !Value_114                ) {
                    __result_obj__160 = 0;
                    (label_110 = come_decrement_ref_count(label_110, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((node_111) ? node_111 = come_decrement_ref_count(node_111, ((struct sNode*)node_111)->finalize, ((struct sNode*)node_111)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (generics_fun_name_80 = come_decrement_ref_count(generics_fun_name_80, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, result_type_83, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, type_checking_param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_33, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result_obj__160;
                }
                else {
                }
                __right_value0 = (void*)0;
                come_value_115=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                __right_value0 = (void*)0;
                __dec_obj86=come_value_115->type,
                come_value_115->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_115->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
                come_call_finalizer(sType_finalize, __dec_obj86,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(                __right_value0 = (void*)0,                 ({(_conditional_value_X6=(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(param_types,i_107)))));                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                _conditional_value_X6;})                ) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __right_value3 = (void*)0;
                    check_assign_type(((char*)(__right_value2=xsprintf("(d). \%s param num \%s is assinged to",((char*)(__right_value0=string_to_string(fun_name))),((char*)(__right_value1=int_to_string(i_107)))))),((struct sType*)(__right_value3=list$1sType$ph_operator_load_element(type_checking_param_types,i_107))),come_value_115->type,come_value_115,0,1,1,info);
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
                    come_call_finalizer(sType_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
                if(                __right_value0 = (void*)0,                 __right_value1 = (void*)0,                 ({(_conditional_value_X7=(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(param_types,i_107)))&&((struct sType*)(__right_value1=list$1sType$ph_operator_load_element(param_types,i_107)))->mHeap&&come_value_115->type->mHeap));                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                _conditional_value_X7;})                ) {
                    __right_value0 = (void*)0;
                    std_move(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(param_types,i_107))),come_value_115->type,come_value_115,info);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
                list$1CVALUE$ph_replace(come_params_91,i_107,(struct CVALUE*)come_increment_ref_count(come_value_115));
                i_107++;
                come_call_finalizer(CVALUE_finalize, come_value_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            (label_110 = come_decrement_ref_count(label_110, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node_111) ? node_111 = come_decrement_ref_count(node_111, ((struct sNode*)node_111)->finalize, ((struct sNode*)node_111)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        while(        1        ) {
            if(            __right_value0 = (void*)0,             ({(_conditional_value_X8=(((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_91,i_107)))==((void*)0)));            come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            _conditional_value_X8;})            ) {
                break;
            }
            else {
                i_107++;
            }
        }
        if(        list$1tuple2$2char$phsNode$ph$ph_length(params)<list$1sType$ph_length(fun_81->mParamTypes)+(((method_block)?(-2):(0)))        ) {
            for(            ;            i_107<list$1sType$ph_length(fun_81->mParamTypes)+(((method_block)?(-2):(0)))            ;            i_107++            ){
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                default_param=(char*)come_increment_ref_count((char*)come_memdup(((char*)(__right_value0=list$1char$ph_operator_load_element(fun_81->mParamDefaultParametors,i_107))), "20method.c", 758, "char*"));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                __right_value0 = (void*)0;
                param_name=((char*)(__right_value0=list$1char$ph_operator_load_element(fun_81->mParamNames,i_107)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                if(                __right_value0 = (void*)0,                 ({(_conditional_value_X9=(default_param&&string_operator_not_equals(default_param,"")&&((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_91,i_107)))==((void*)0)));                come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                _conditional_value_X9;})                ) {
                    source=(struct buffer*)come_increment_ref_count(info->source);
                    p=info->p;
                    head=info->head;
                    sline=info->sline;
                    __right_value0 = (void*)0;
                    __dec_obj87=info->source,
                    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param));
                    come_call_finalizer(buffer_finalize, __dec_obj87,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                    info->p=info->source->buf;
                    info->head=info->source->buf;
                    no_output_come_code_116=info->no_output_come_code;
                    info->no_output_come_code=1;
                    __right_value0 = (void*)0;
                    node_117=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
                    Value_118=node_compile(node_117,info);
                    if(                    !Value_118                    ) {
                        __result_obj__161 = 0;
                        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        ((node_117) ? node_117 = come_decrement_ref_count(node_117, ((struct sNode*)node_117)->finalize, ((struct sNode*)node_117)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                        (default_param = come_decrement_ref_count(default_param, (void*)0, (void*)0, 0, 0, (void*)0));
                        (generics_fun_name_80 = come_decrement_ref_count(generics_fun_name_80, (void*)0, (void*)0, 0, 0, (void*)0));
                        come_call_finalizer(sType_finalize, result_type_83, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer(list$1sType$ph$p_finalize, type_checking_param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                        come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_33, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result_obj__161;
                    }
                    else {
                    }
                    info->no_output_come_code=no_output_come_code_116;
                    __dec_obj88=info->source,
                    info->source=(struct buffer*)come_increment_ref_count(source);
                    come_call_finalizer(buffer_finalize, __dec_obj88,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                    info->p=p;
                    info->head=head;
                    info->sline=sline;
                    __right_value0 = (void*)0;
                    come_value_119=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    __right_value0 = (void*)0;
                    __dec_obj89=come_value_119->type,
                    come_value_119->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_119->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
                    come_call_finalizer(sType_finalize, __dec_obj89,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(                    __right_value0 = (void*)0,                     ({(_conditional_value_X10=(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(param_types,i_107)))));                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    _conditional_value_X10;})                    ) {
                        __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        __right_value2 = (void*)0;
                        __right_value3 = (void*)0;
                        check_assign_type(((char*)(__right_value2=xsprintf("(e). \%s param num \%s is assinged to",((char*)(__right_value0=string_to_string(fun_name))),((char*)(__right_value1=int_to_string(i_107)))))),((struct sType*)(__right_value3=list$1sType$ph_operator_load_element(type_checking_param_types,i_107))),come_value_119->type,come_value_119,0,1,1,info);
                        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
                        come_call_finalizer(sType_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    }
                    if(                    __right_value0 = (void*)0,                     __right_value1 = (void*)0,                     ({(_conditional_value_X11=(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(param_types,i_107)))&&((struct sType*)(__right_value1=list$1sType$ph_operator_load_element(param_types,i_107)))->mHeap&&come_value_119->type->mHeap));                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    _conditional_value_X11;})                    ) {
                        __right_value0 = (void*)0;
                        std_move(((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(param_types,i_107))),come_value_119->type,come_value_119,info);
                        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    }
                    list$1CVALUE$ph_replace(come_params_91,i_107,(struct CVALUE*)come_increment_ref_count(come_value_119));
                    come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    ((node_117) ? node_117 = come_decrement_ref_count(node_117, ((struct sNode*)node_117)->finalize, ((struct sNode*)node_117)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    come_call_finalizer(CVALUE_finalize, come_value_119, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(                    __right_value0 = (void*)0,                     ({(_conditional_value_X12=(((struct CVALUE*)(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_91,i_107)))==((void*)0)));                    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    _conditional_value_X12;})                    ) {
                        err_msg(info,"require parametor(%s) %d",fun_81->mName,i_107);
                        __result_obj__162 = 1;
                        (default_param = come_decrement_ref_count(default_param, (void*)0, (void*)0, 0, 0, (void*)0));
                        (generics_fun_name_80 = come_decrement_ref_count(generics_fun_name_80, (void*)0, (void*)0, 0, 0, (void*)0));
                        come_call_finalizer(sType_finalize, result_type_83, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer(list$1sType$ph$p_finalize, type_checking_param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                        come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_33, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result_obj__162;
                    }
                }
                (default_param = come_decrement_ref_count(default_param, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        if(        method_block        ) {
            if(            !compile_method_block(method_block,(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_91),fun_81,fun_name,method_block_sline,info,0)            ) {
                __result_obj__163 = 0;
                (generics_fun_name_80 = come_decrement_ref_count(generics_fun_name_80, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, result_type_83, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, type_checking_param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_33, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__163;
            }
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf_120=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "20method.c", 812, "struct buffer*"))));
        buffer_append_str(buf_120,generics_fun_name_80);
        buffer_append_str(buf_120,"(");
        saved_obj_value=((void*)0);
        saved_var=((void*)0);
        if(        result_type_83->mDefferRightValue        ) {
            static int n_121=0;
            n_121++;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            var_name=(char*)come_increment_ref_count(xsprintf("deffer_right_value\%s",((char*)(__right_value0=int_to_string(n_121)))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            __right_value0 = (void*)0;
            type_122=(struct sType*)come_increment_ref_count(sType_clone(obj_type));
            type_122->mDefferRightValue=1;
            add_variable_to_table(var_name,(struct sType*)come_increment_ref_count(type_122),info,0,0);
            var_=get_variable_from_table(info->lv_table,var_name);
            __right_value0 = (void*)0;
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value0=make_define_var(type_122,var_->mCValueName,info,0,0))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            add_come_code(info,"%s=%s;\n",var_->mCValueName,obj_value->c_value);
            __dec_obj90=saved_obj_value,
            saved_obj_value=(char*)come_increment_ref_count(var_->mCValueName);
            __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0, (void*)0);
            saved_var=var_;
            j_123=0;
            for(            o2_saved_124=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_91),it_125=list$1CVALUE$ph_begin(o2_saved_124)            ;            !list$1CVALUE$ph_end(o2_saved_124)            ;            it_125=list$1CVALUE$ph_next(o2_saved_124)            ){
                if(                j_123==0                ) {
                    buffer_append_str(buf_120,saved_obj_value);
                }
                else {
                    buffer_append_str(buf_120,it_125->c_value);
                }
                if(                j_123!=list$1CVALUE$ph_length(come_params_91)-1                ) {
                    buffer_append_str(buf_120,",");
                }
                j_123++;
            }
            come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_124, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, type_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            j_126=0;
            for(            o2_saved_127=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_91),it_128=list$1CVALUE$ph_begin(o2_saved_127)            ;            !list$1CVALUE$ph_end(o2_saved_127)            ;            it_128=list$1CVALUE$ph_next(o2_saved_127)            ){
                buffer_append_str(buf_120,it_128->c_value);
                if(                j_126!=list$1CVALUE$ph_length(come_params_91)-1                ) {
                    buffer_append_str(buf_120,",");
                }
                j_126++;
            }
            come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_127, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(buf_120,")");
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value2_129=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "20method.c", 866, "struct CVALUE*"))));
        come_value2_129->var=((void*)0);
        __right_value0 = (void*)0;
        __dec_obj91=come_value2_129->c_value,
        come_value2_129->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_120));
        __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        __dec_obj92=come_value2_129->type,
        come_value2_129->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_83));
        come_call_finalizer(sType_finalize, __dec_obj92,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(        come_value2_129->type        ) {
            come_value2_129->type->mStatic=0;
        }
        if(        result_type_83->mHeap        ) {
            append_object_to_right_values(come_value2_129,(struct sType*)come_increment_ref_count(result_type_83),info,0,(struct sType*)come_increment_ref_count(obj_type),saved_obj_value,saved_var);
        }
        else if(        saved_obj_value        ) {
            append_object_to_right_values(come_value2_129,(struct sType*)come_increment_ref_count(result_type_83),info,0,(struct sType*)come_increment_ref_count(obj_type),saved_obj_value,saved_var);
        }
        __right_value0 = (void*)0;
        __dec_obj93=come_value2_129->c_value,
        come_value2_129->c_value=(char*)come_increment_ref_count(append_stackframe(come_value2_129->c_value,come_value2_129->type,info));
        __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0, (void*)0);
        add_come_last_code(info,"%s",come_value2_129->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_129));
        come_call_finalizer(list$1sType$ph$p_finalize, info->method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj94=info->method_generics_types,
        info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_33);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj94,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        info->calling_fun=fun_81;
        (generics_fun_name_80 = come_decrement_ref_count(generics_fun_name_80, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, result_type_83, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, type_checking_param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (saved_obj_value = come_decrement_ref_count(saved_obj_value, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(CVALUE_finalize, come_value2_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__164 = 1;
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_33, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__164;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__95;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result;
struct list_item$1tuple2$2char$phsNode$ph$ph* it;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__101;
    if(    self==((void*)0)    ) {
        __result_obj__95 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__95, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__95;
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
    __result_obj__101 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__101, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__101;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it;
    if(    self==((void*)0)    ) {
        return;
    }
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
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__96;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__96 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__96, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__96;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__97;
void* __right_value0 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
struct tuple2$2char$phsNode$ph* __dec_obj60;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_31;
struct tuple2$2char$phsNode$ph* __dec_obj61;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_32;
struct tuple2$2char$phsNode$ph* __dec_obj62;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__98;
    if(    self==((void*)0)    ) {
        __result_obj__97 = self;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__97;
    }
    if(    self->len==0    ) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1086, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj60=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj60,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_31=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1096, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_31->prev=self->head;
        litem_31->next=((void*)0);
        __dec_obj61=litem_31->item,
        litem_31->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj61,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_31;
        self->head->next=litem_31;
    }
    else {
        __right_value0 = (void*)0;
        litem_32=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1106, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_32->prev=self->tail;
        litem_32->next=((void*)0);
        __dec_obj62=litem_32->item,
        litem_32->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj62,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_32;
        self->tail=litem_32;
    }
    self->len++;
    __result_obj__98 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__98;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__99;
void* __right_value0 = (void*)0;
struct tuple2$2char$phsNode$ph* result;
char* __dec_obj63;
struct sNode* __dec_obj64;
struct tuple2$2char$phsNode$ph* __result_obj__100;
    if(    self==(void*)0    ) {
        __result_obj__99 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count((void*)0);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__99, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__99;
    }
    result=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj63=result->v1,
        result->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 4, "char*"));
        __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj64=result->v2,
        result->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj64 ? __dec_obj64 = come_decrement_ref_count(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__100 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result);
    come_call_finalizer(tuple2$2char$phsNode$ph_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__100, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__100;
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
    if(    self==((void*)0)    ) {
        return;
    }
    it=self->head;
    while(    it!=((void*)0)    ) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void sMethodCallNode_finalize(struct sMethodCallNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->obj!=((void*)0)    ) {
        ((self->obj) ? self->obj = come_decrement_ref_count(self->obj, ((struct sNode*)self->obj)->finalize, ((struct sNode*)self->obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)    ) {
        (self->fun_name = come_decrement_ref_count(self->fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)    ) {
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self->params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static int list$1char$ph_length(struct list$1char$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self){
struct list$1CVALUE$ph* __result_obj__105;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__105 = (struct list$1CVALUE$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, __result_obj__105, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__105;
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct CVALUE* default_value;
struct CVALUE* __result_obj__107;
struct list_item$1CVALUE$ph* it;
int i;
struct CVALUE* __result_obj__108;
struct CVALUE* default_value_35;
struct CVALUE* __result_obj__109;
    if(    self==((void*)0)    ) {
        memset(&default_value,0,sizeof(struct CVALUE*));
        __result_obj__107 = (struct CVALUE*)come_increment_ref_count(default_value);
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(CVALUE_finalize, __result_obj__107, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__107;
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    position<0    ) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(    it!=((void*)0)    ) {
        if(        position==i        ) {
            __result_obj__108 = (struct CVALUE*)come_increment_ref_count(it->item);
            come_call_finalizer(CVALUE_finalize, __result_obj__108, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__108;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_35,0,sizeof(struct CVALUE*));
    __result_obj__109 = (struct CVALUE*)come_increment_ref_count(default_value_35);
    come_call_finalizer(CVALUE_finalize, default_value_35, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__109, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__109;
}

static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct CVALUE* default_value;
struct CVALUE* __result_obj__110;
struct list_item$1CVALUE$ph* it;
int i;
struct CVALUE* __result_obj__111;
struct CVALUE* default_value_36;
struct CVALUE* __result_obj__112;
    if(    self==((void*)0)    ) {
        memset(&default_value,0,sizeof(struct CVALUE*));
        __result_obj__110 = (struct CVALUE*)come_increment_ref_count(default_value);
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(CVALUE_finalize, __result_obj__110, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__110;
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    position<0    ) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(    it!=((void*)0)    ) {
        if(        position==i        ) {
            __result_obj__111 = (struct CVALUE*)come_increment_ref_count(it->item);
            come_call_finalizer(CVALUE_finalize, __result_obj__111, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__111;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_36,0,sizeof(struct CVALUE*));
    __result_obj__112 = (struct CVALUE*)come_increment_ref_count(default_value_36);
    come_call_finalizer(CVALUE_finalize, default_value_36, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__112, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__112;
}

static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item){
struct list$1sType$ph* __result_obj__113;
int len;
int i;
struct sType* default_value;
struct list$1sType$ph* __result_obj__116;
struct list_item$1sType$ph* it;
int i_39;
struct sType* __dec_obj72;
struct list$1sType$ph* __result_obj__117;
    if(    self==((void*)0)    ) {
        __result_obj__113 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__113;
    }
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
        __result_obj__116 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__116;
    }
    it=self->head;
    i_39=0;
    while(    it!=((void*)0)    ) {
        if(        position==i_39        ) {
            __dec_obj72=it->item,
            it->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer(sType_finalize, __dec_obj72,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        it=it->next;
        i_39++;
    }
    __result_obj__117 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__117;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
struct list$1sType$ph* __result_obj__114;
void* __right_value0 = (void*)0;
struct list_item$1sType$ph* litem;
struct sType* __dec_obj69;
struct list_item$1sType$ph* litem_37;
struct sType* __dec_obj70;
struct list_item$1sType$ph* litem_38;
struct sType* __dec_obj71;
struct list$1sType$ph* __result_obj__115;
    if(    self==((void*)0)    ) {
        __result_obj__114 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__114;
    }
    if(    self->len==0    ) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1171, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj69=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj69,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_37=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1181, "struct list_item$1sType$ph*"))));
        litem_37->prev=self->head;
        litem_37->next=((void*)0);
        __dec_obj70=litem_37->item,
        litem_37->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj70,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_37;
        self->head->next=litem_37;
    }
    else {
        __right_value0 = (void*)0;
        litem_38=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1191, "struct list_item$1sType$ph*"))));
        litem_38->prev=self->tail;
        litem_38->next=((void*)0);
        __dec_obj71=litem_38->item,
        litem_38->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj71,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_38;
        self->tail=litem_38;
    }
    self->len++;
    __result_obj__115 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__115;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result;
struct tuple2$2char$phsNode$ph* __result_obj__118;
struct tuple2$2char$phsNode$ph* __result_obj__119;
struct tuple2$2char$phsNode$ph* result_43;
struct tuple2$2char$phsNode$ph* __result_obj__120;
    if(    self==((void*)0)    ) {
        memset(&result,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__118 = result;
        return __result_obj__118;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__119 = self->it->item;
        return __result_obj__119;
    }
    memset(&result_43,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__120 = result_43;
    return __result_obj__120;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result;
struct tuple2$2char$phsNode$ph* __result_obj__121;
struct tuple2$2char$phsNode$ph* __result_obj__122;
struct tuple2$2char$phsNode$ph* result_45;
struct tuple2$2char$phsNode$ph* __result_obj__123;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__121 = result;
        return __result_obj__121;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__122 = self->it->item;
        return __result_obj__122;
    }
    memset(&result_45,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__123 = result_45;
    return __result_obj__123;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result;
struct tuple2$2char$phsType$ph* __result_obj__126;
struct tuple2$2char$phsType$ph* __result_obj__127;
struct tuple2$2char$phsType$ph* result_65;
struct tuple2$2char$phsType$ph* __result_obj__128;
    if(    self==((void*)0)    ) {
        memset(&result,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__126 = result;
        return __result_obj__126;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__127 = self->it->item;
        return __result_obj__127;
    }
    memset(&result_65,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__128 = result_65;
    return __result_obj__128;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result;
struct tuple2$2char$phsType$ph* __result_obj__129;
struct tuple2$2char$phsType$ph* __result_obj__130;
struct tuple2$2char$phsType$ph* result_67;
struct tuple2$2char$phsType$ph* __result_obj__131;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__129 = result;
        return __result_obj__129;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__130 = self->it->item;
        return __result_obj__130;
    }
    memset(&result_67,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__131 = result_67;
    return __result_obj__131;
}

static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self){
struct CVALUE* result;
struct CVALUE* __result_obj__133;
struct CVALUE* __result_obj__134;
struct CVALUE* result_77;
struct CVALUE* __result_obj__135;
    if(    self==((void*)0)    ) {
        memset(&result,0,sizeof(struct CVALUE*));
        __result_obj__133 = result;
        return __result_obj__133;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__134 = self->it->item;
        return __result_obj__134;
    }
    memset(&result_77,0,sizeof(struct CVALUE*));
    __result_obj__135 = result_77;
    return __result_obj__135;
}

static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self){
struct CVALUE* result;
struct CVALUE* __result_obj__136;
struct CVALUE* __result_obj__137;
struct CVALUE* result_79;
struct CVALUE* __result_obj__138;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result,0,sizeof(struct CVALUE*));
        __result_obj__136 = result;
        return __result_obj__136;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__137 = self->it->item;
        return __result_obj__137;
    }
    memset(&result_79,0,sizeof(struct CVALUE*));
    __result_obj__138 = result_79;
    return __result_obj__138;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item){
struct list$1CVALUE$ph* __result_obj__141;
void* __right_value0 = (void*)0;
struct list_item$1CVALUE$ph* litem;
struct CVALUE* __dec_obj81;
struct list_item$1CVALUE$ph* litem_93;
struct CVALUE* __dec_obj82;
struct list_item$1CVALUE$ph* litem_94;
struct CVALUE* __dec_obj83;
struct list$1CVALUE$ph* __result_obj__142;
    if(    self==((void*)0)    ) {
        __result_obj__141 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__141;
    }
    if(    self->len==0    ) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1086, "struct list_item$1CVALUE$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj81=litem->item,
        litem->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj81,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_93=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1096, "struct list_item$1CVALUE$ph*"))));
        litem_93->prev=self->head;
        litem_93->next=((void*)0);
        __dec_obj82=litem_93->item,
        litem_93->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj82,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_93;
        self->head->next=litem_93;
    }
    else {
        __right_value0 = (void*)0;
        litem_94=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1106, "struct list_item$1CVALUE$ph*"))));
        litem_94->prev=self->tail;
        litem_94->next=((void*)0);
        __dec_obj83=litem_94->item,
        litem_94->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj83,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_94;
        self->tail=litem_94;
    }
    self->len++;
    __result_obj__142 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__142;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result;
char* __result_obj__143;
char* __result_obj__144;
char* result_101;
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
    memset(&result_101,0,sizeof(char*));
    __result_obj__145 = result_101;
    return __result_obj__145;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result;
char* __result_obj__146;
char* __result_obj__147;
char* result_103;
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
    memset(&result_103,0,sizeof(char*));
    __result_obj__148 = result_103;
    return __result_obj__148;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item){
struct list$1CVALUE$ph* __result_obj__150;
int len;
int i;
struct CVALUE* default_value;
struct list$1CVALUE$ph* __result_obj__151;
struct list_item$1CVALUE$ph* it;
int i_106;
struct CVALUE* __dec_obj85;
struct list$1CVALUE$ph* __result_obj__152;
    if(    self==((void*)0)    ) {
        __result_obj__150 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__150;
    }
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
        __result_obj__151 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__151;
    }
    it=self->head;
    i_106=0;
    while(    it!=((void*)0)    ) {
        if(        position==i_106        ) {
            __dec_obj85=it->item,
            it->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer(CVALUE_finalize, __dec_obj85,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        it=it->next;
        i_106++;
    }
    __result_obj__152 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__152;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
char* default_value;
char* __result_obj__153;
struct list_item$1char$ph* it;
int i;
char* __result_obj__154;
char* default_value_112;
char* __result_obj__155;
    if(    self==((void*)0)    ) {
        memset(&default_value,0,sizeof(char*));
        __result_obj__153 = (char*)come_increment_ref_count(default_value);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
        (__result_obj__153 = come_decrement_ref_count(__result_obj__153, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__153;
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    position<0    ) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(    it!=((void*)0)    ) {
        if(        position==i        ) {
            __result_obj__154 = (char*)come_increment_ref_count(it->item);
            (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__154;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_112,0,sizeof(char*));
    __result_obj__155 = (char*)come_increment_ref_count(default_value_112);
    (default_value_112 = come_decrement_ref_count(default_value_112, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__155;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
char* default_value;
char* __result_obj__156;
struct list_item$1char$ph* it;
int i;
char* __result_obj__157;
char* default_value_113;
char* __result_obj__158;
    if(    self==((void*)0)    ) {
        memset(&default_value,0,sizeof(char*));
        __result_obj__156 = (char*)come_increment_ref_count(default_value);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
        (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__156;
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(    position<0    ) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(    it!=((void*)0)    ) {
        if(        position==i        ) {
            __result_obj__157 = (char*)come_increment_ref_count(it->item);
            (__result_obj__157 = come_decrement_ref_count(__result_obj__157, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__157;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_113,0,sizeof(char*));
    __result_obj__158 = (char*)come_increment_ref_count(default_value_113);
    (default_value_113 = come_decrement_ref_count(default_value_113, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__158;
}

static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct sNode* _inf_value2;
struct sMethodCallNode* _inf_obj_value2;
void* __right_value2 = (void*)0;
struct sNode* node;
struct sNode* __dec_obj101;
struct sNode* __result_obj__167;
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "20method.c", 901, "struct sNode");
    _inf_obj_value2=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value1=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc_v2(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 901, "struct sMethodCallNode*")),fun_name,(struct sNode*)come_increment_ref_count(obj),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params),method_block,method_block_sline,method_generics_types,1,0,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sMethodCallNode_finalize;
    _inf_value2->clone=(void*)sMethodCallNode_clone;
    _inf_value2->compile=(void*)sMethodCallNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sMethodCallNode_terminated;
    _inf_value2->kind=(void*)sMethodCallNode_kind;
    _inf_value2->no_mutex=(void*)sNodeBase_no_mutex;
    node=(struct sNode*)come_increment_ref_count(_inf_value2);
    come_call_finalizer(sMethodCallNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj101=node,
    node=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node),info));
    (__dec_obj101 ? __dec_obj101 = come_decrement_ref_count(__dec_obj101, ((struct sNode*)__dec_obj101)->finalize, ((struct sNode*)__dec_obj101)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__167 = (struct sNode*)come_increment_ref_count(node);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__167) ? __result_obj__167 = come_decrement_ref_count(__result_obj__167, ((struct sNode*)__result_obj__167)->finalize, ((struct sNode*)__result_obj__167)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__167;
}

static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self){
struct sMethodCallNode* __result_obj__165;
void* __right_value0 = (void*)0;
struct sMethodCallNode* result;
char* __dec_obj95;
struct sNode* __dec_obj96;
char* __dec_obj97;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj98;
struct buffer* __dec_obj99;
struct list$1sType$ph* __dec_obj100;
struct sMethodCallNode* __result_obj__166;
    if(    self==(void*)0    ) {
        __result_obj__165 = (void*)0;
        return __result_obj__165;
    }
    result=(struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc_v2(1, sizeof(struct sMethodCallNode)*(1), "sMethodCallNode_clone", 3, "struct sMethodCallNode*"));
    if(    self!=((void*)0)    ) {
        result->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj95=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sMethodCallNode_clone", 5, "char*"));
        __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->obj!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj96=result->obj,
        result->obj=(struct sNode*)come_increment_ref_count(sNode_clone(self->obj));
        (__dec_obj96 ? __dec_obj96 = come_decrement_ref_count(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj97=result->fun_name,
        result->fun_name=(char*)come_increment_ref_count((char*)come_memdup(self->fun_name, "sMethodCallNode_clone", 8, "char*"));
        __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj98=result->params,
        result->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->params));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj98,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj99=result->method_block,
        result->method_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->method_block));
        come_call_finalizer(buffer_finalize, __dec_obj99,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->method_block_sline=self->method_block_sline;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)    ) {
        __right_value0 = (void*)0;
        __dec_obj100=result->method_generics_types,
        result->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->method_generics_types));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj100,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result->no_infference_method_generics=self->no_infference_method_generics;
    }
    if(    self!=((void*)0)    ) {
        result->recursive=self->recursive;
    }
    if(    self!=((void*)0)    ) {
        result->fun=self->fun;
    }
    __result_obj__166 = result;
    come_call_finalizer(sMethodCallNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__166;
}

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params;
void* __right_value2 = (void*)0;
_Bool parse_method_generics_type;
char* p;
int sline;
char* word;
struct list$1sType$ph* method_generics_types;
struct tuple3$3sType$phchar$ph_Bool$* __exception_result_var_b1;
struct tuple3$3sType$phchar$ph_Bool$* __exception_result_var_b2;
struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var15
;struct sType* type=0;
char* name=0;
_Bool err=0;
int __exception_result_var_b3;
char* p_132;
int sline_133;
_Bool err_flag;
char* label;
char* __dec_obj107;
char* __dec_obj108;
_Bool no_comma;
_Bool in_fun_param;
_Bool type_name_exp;
struct sNode* node;
struct sNode* __dec_obj109;
struct buffer* method_block;
int method_block_sline;
char* head;
char* tail;
struct buffer* __dec_obj110;
int len;
char* mem;
struct sNode* _inf_value3;
struct sMethodCallNode* _inf_obj_value3;
void* __right_value3 = (void*)0;
struct sNode* node_134;
struct sNode* __dec_obj111;
struct sNode* __result_obj__171;
    params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "20method.c", 910, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_push_back(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "20method.c", 911, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count((char*)((void*)0)),(struct sNode*)come_increment_ref_count(sNode_clone(obj)))));
    if(    *info->p==45&&*(info->p+1)==62    ) {
        info->p+=2;
        skip_spaces_and_lf(info);
    }
    parse_method_generics_type=0;
    {
        p=info->p;
        sline=info->sline;
        if(        *info->p==60        ) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            isalpha(*info->p)||*info->p==95            ) {
                __right_value0 = (void*)0;
                word=(char*)come_increment_ref_count(parse_word(0,info));
                if(                is_type_name(word,info)                ) {
                    parse_method_generics_type=1;
                }
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        info->p=p;
        info->sline=sline;
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "20method.c", 941, "struct list$1sType$ph*"))));
    if(    parse_method_generics_type&&*info->p==60    ) {
        info->p++;
        skip_spaces_and_lf(info);
        while(        1        ) {
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
                multiple_assign_var15=(come_push_stackframe("20method.c", 961, 1),__exception_result_var_b2=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,0,0,0))), come_pop_stackframe(), __exception_result_var_b2);
                type=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
                name=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                err=multiple_assign_var15->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
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
    if(    *info->p!=123    ) {
        (come_push_stackframe("20method.c", 974, 2),__exception_result_var_b3=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b3);
        while(        1        ) {
            if(            *info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_132=info->p;
            sline_133=info->sline;
            err_flag=0;
            __right_value0 = (void*)0;
            label=(char*)come_increment_ref_count(__builtin_string(""));
            if(            isalpha(*info->p)||*info->p==95            ) {
                __right_value0 = (void*)0;
                __dec_obj107=label,
                label=(char*)come_increment_ref_count(parse_word(0,info));
                __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0, (void*)0);
                err_flag=1;
            }
            if(            err_flag==1&&*info->p==58            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj108=label,
                label=((void*)0);
                __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0, (void*)0);
                info->p=p_132;
                info->sline=sline_133;
            }
            no_comma=info->no_comma;
            info->no_comma=1;
            in_fun_param=info->in_fun_param;
            info->in_fun_param=1;
            type_name_exp=0;
            __right_value0 = (void*)0;
            node=(struct sNode*)come_increment_ref_count(expression_v13(info,type_name_exp));
            __right_value0 = (void*)0;
            __dec_obj109=node,
            node=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node),info));
            (__dec_obj109 ? __dec_obj109 = come_decrement_ref_count(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0, (void*)0) :0);
            info->in_fun_param=in_fun_param;
            info->no_comma=no_comma;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            list$1tuple2$2char$phsNode$ph$ph_push_back(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "20method.c", 1019, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(label),(struct sNode*)come_increment_ref_count(node))));
            if(            *info->p==44            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
                (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                break;
            }
            (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
    }
    method_block=((void*)0);
    method_block_sline=0;
    if(    *info->p==123    ) {
        head=info->p;
        method_block_sline=info->sline;
        __right_value0 = (void*)0;
        ((char*)(__right_value0=skip_block(info,0)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        tail=info->p;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj110=method_block,
        method_block=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "20method.c", 1043, "struct buffer*"))));
        come_call_finalizer(buffer_finalize, __dec_obj110,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        len=tail-head;
        __right_value0 = (void*)0;
        mem=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len+1)), "20method.c", 1046, "char*"));
        memcpy(mem,head,len);
        mem[len]=0;
        buffer_append_str(method_block,mem);
        buffer_append_str(method_block,"\n");
        (mem = come_decrement_ref_count(mem, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    skip_spaces_and_lf(info);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "20method.c", 1056, "struct sNode");
    _inf_obj_value3=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value2=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc_v2(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1056, "struct sMethodCallNode*")),fun_name,(struct sNode*)come_increment_ref_count(sNode_clone(obj)),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params),method_block,method_block_sline,method_generics_types,0,1,info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sMethodCallNode_finalize;
    _inf_value3->clone=(void*)sMethodCallNode_clone;
    _inf_value3->compile=(void*)sMethodCallNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sMethodCallNode_terminated;
    _inf_value3->kind=(void*)sMethodCallNode_kind;
    _inf_value3->no_mutex=(void*)sNodeBase_no_mutex;
    node_134=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer(sMethodCallNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj111=node_134,
    node_134=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_134),info));
    (__dec_obj111 ? __dec_obj111 = come_decrement_ref_count(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__171 = (struct sNode*)come_increment_ref_count(node_134);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((node_134) ? node_134 = come_decrement_ref_count(node_134, ((struct sNode*)node_134)->finalize, ((struct sNode*)node_134)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__171) ? __result_obj__171 = come_decrement_ref_count(__result_obj__171, ((struct sNode*)__result_obj__171)->finalize, ((struct sNode*)__result_obj__171)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__171;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__168;
void* __right_value0 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
struct tuple2$2char$phsNode$ph* __dec_obj102;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_130;
struct tuple2$2char$phsNode$ph* __dec_obj103;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_131;
struct tuple2$2char$phsNode$ph* __dec_obj104;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__169;
    if(    self==((void*)0)    ) {
        __result_obj__168 = self;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__168;
    }
    if(    self->len==0    ) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1171, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj102=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj102,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(    self->len==1    ) {
        __right_value0 = (void*)0;
        litem_130=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1181, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_130->prev=self->head;
        litem_130->next=((void*)0);
        __dec_obj103=litem_130->item,
        litem_130->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj103,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_130;
        self->head->next=litem_130;
    }
    else {
        __right_value0 = (void*)0;
        litem_131=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1191, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_131->prev=self->tail;
        litem_131->next=((void*)0);
        __dec_obj104=litem_131->item,
        litem_131->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj104,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_131;
        self->tail=litem_131;
    }
    self->len++;
    __result_obj__169 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__169;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2){
char* __dec_obj105;
struct sNode* __dec_obj106;
struct tuple2$2char$phsNode$ph* __result_obj__170;
    __dec_obj105=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj106=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj106 ? __dec_obj106 = come_decrement_ref_count(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__170 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__170, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__170;
}

static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct sNode* _inf_value4;
struct sCurrentNode* _inf_obj_value4;
void* __right_value2 = (void*)0;
struct sNode* __result_obj__172;
struct sNode* __result_obj__173;
    if(    charp_operator_equals(buf,"__current__")    ) {
        _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "20method.c", 1066, "struct sNode");
        _inf_obj_value4=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value1=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc_v2(1, sizeof(struct sCurrentNode)*(1), "20method.c", 1066, "struct sCurrentNode*")),info))));
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sCurrentNode_finalize;
        _inf_value4->clone=(void*)sCurrentNode_clone;
        _inf_value4->compile=(void*)sCurrentNode_compile;
        _inf_value4->sline=(void*)sCurrentNode_sline;
        _inf_value4->sline_real=(void*)sNodeBase_sline_real;
        _inf_value4->sname=(void*)sCurrentNode_sname;
        _inf_value4->terminated=(void*)sNodeBase_terminated;
        _inf_value4->kind=(void*)sCurrentNode_kind;
        _inf_value4->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__172 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value4)));
        come_call_finalizer(sCurrentNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__172) ? __result_obj__172 = come_decrement_ref_count(__result_obj__172, ((struct sNode*)__result_obj__172)->finalize, ((struct sNode*)__result_obj__172)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__172;
    }
    __right_value0 = (void*)0;
    __result_obj__173 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=string_node_v17(buf,head,head_sline,info))));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__173) ? __result_obj__173 = come_decrement_ref_count(__result_obj__173, ((struct sNode*)__result_obj__173)->finalize, ((struct sNode*)__result_obj__173)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__173;
}

