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

typedef struct re_program* re_t;

typedef struct re_capture re_capture;

typedef struct regex_t regex_t;

typedef struct re_program regex_program_t;

typedef struct anonymous_typeX11 compiler_state;

typedef struct anonymous_typeX12 match_context;

typedef union anonymous_typeZ1 mbstate_t;

typedef unsigned long  int clock_t;

typedef long time_t;

typedef enum anonymous_typeY12 clockid_t;

typedef int wint_t;

typedef unsigned int wctype_t;

typedef struct anonymous_typeX13 _RuneEntry;

typedef struct anonymous_typeX14 _RuneRange;

typedef struct anonymous_typeX15 _RuneCharClass;

typedef struct anonymous_typeX16 _RuneLocale;

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

struct anonymous_typeX8
{
    struct regex_t* first;
    struct regex_t* last;
    int id;
};

union anonymous_typeZ7
{
unsigned char ch;
unsigned char* ccl;
    struct {
        struct regex_t* first;
        struct regex_t* last;
        int id;
    } group;
};

struct anonymous_typeX10
{
    struct regex_t* first;
    struct regex_t* last;
    int id;
};

union anonymous_typeZ9
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

struct anonymous_typeX11
{
    struct regex_t* pool;
    int pool_capacity;
    int pool_size;
    unsigned char* ccl_buf;
    int ccl_capacity;
    int ccl_idx;
    int group_count;
};

struct anonymous_typeX12
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
enum   anonymous_typeY12 { _CLOCK_REALTIME=(0),
_CLOCK_MONOTONIC=(6),
_CLOCK_MONOTONIC_RAW=(4),
_CLOCK_MONOTONIC_RAW_APPROX=(5),
_CLOCK_UPTIME_RAW=(8),
_CLOCK_UPTIME_RAW_APPROX=(9),
_CLOCK_PROCESS_CPUTIME_ID=(12),
_CLOCK_THREAD_CPUTIME_ID=(16)
};

struct anonymous_typeX13
{
    int __min;
    int __max;
    int __map;
    unsigned int* __types;
};

struct anonymous_typeX14
{
    int __nranges;
    struct {
        int __min;
        int __max;
        int __map;
        unsigned int* __types;
    } __ranges;
};

struct anonymous_typeX15
{
    char __name[14];
    unsigned int __mask;
};

struct anonymous_typeX16
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

extern struct anonymous_typeX16 _DefaultRuneLocale;
extern struct anonymous_typeX16* _CurrentRuneLocale;
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
    _Bool mDefineReturnVar;
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
    struct map$2char$phchar$ph* reflection_vars;
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
    _Bool exp_value;
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

struct sNewNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
    struct list$1tuple2$2char$phsNode$ph$ph* initializer;
    struct sNode* initializer_num;
};

struct sImplementsNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* obj_exp;
    struct sType* inf_type;
};

struct sTrueNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sFalseNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sGeneric
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
    struct list$1sType$ph* types;
    struct list$1sNode$ph* exps;
    struct sNode* default_exp;
};

struct sSizeOfNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sOffsetOf
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
    char* name;
};

struct sSizeOfExpNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sTypeOfNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sTypeOfExpNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sDynamicTypeOf
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sAlignOfNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sAlignOfExpNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sAlignOfNode2
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sAlignOfExpNode2
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sAlignAsNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sAlignAsExpNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sDeleteNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sBorrowNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sCloneNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sDupeNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sDummyHeapNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sGCIncNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sGCDecNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sIsHeap
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sIsPointer
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sGCDecNoFreeNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
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
void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void come_save_stackframe(char* sname, int sline);
void stackframe();
char* come_get_stackframe();
void xassert(char* msg, _Bool test);
_Bool die(char* msg);
void come_heap_init(int come_debug);
void come_heap_final();
unsigned long  int round_up_class_size(unsigned long  int size);
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
void clear_captures(struct anonymous_typeX12* ctx);
void snapshot_captures(const struct anonymous_typeX12* ctx, struct re_capture* buffer_);
void restore_captures(struct anonymous_typeX12* ctx, const struct re_capture* buffer_);
struct regex_t* new_token(struct anonymous_typeX11* st);
int append_token(struct regex_t** head, struct regex_t** tail, struct regex_t* token);
struct regex_t* compile_sequence(struct anonymous_typeX11* st, const char* pattern, int* pos, int in_group);
const char* matchpattern(struct regex_t* pattern, const char* text, struct anonymous_typeX12* ctx);
const char* matchgroup(struct regex_t* token, struct regex_t* rest, const char* text, struct anonymous_typeX12* ctx);
const char* matchstar(struct regex_t* token, struct regex_t* rest, const char* text, struct anonymous_typeX12* ctx);
const char* matchplus(struct regex_t* token, struct regex_t* rest, const char* text, struct anonymous_typeX12* ctx);
const char* matchquestion(struct regex_t* token, struct regex_t* rest, const char* text, struct anonymous_typeX12* ctx);
const char* matchtoken(struct regex_t* token, const char* text, struct anonymous_typeX12* ctx);
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
int clock_getres(enum anonymous_typeY12 __clock_id, struct timespec* __res);
int clock_gettime(enum anonymous_typeY12 __clock_id, struct timespec* __tp);
unsigned long  long clock_gettime_nsec_np(enum anonymous_typeY12 __clock_id);
int clock_settime(enum anonymous_typeY12 __clock_id, const struct timespec* __tp);
int timespec_get(struct timespec* ts, int base);
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
struct sType* get_no_solved_type(struct sType* type);
struct sType* get_no_solved_type2(struct sType* type);
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
struct tuple3$3sType$phchar$ph_Bool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, _Bool check_params, struct sInfo* info);
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
struct tuple3$3char$phsFun$psGenericsFun$p* get_method(char* fun_name, struct sType* obj_type, struct sInfo* info);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo* info);
struct sNode* create_guard_break_method_call(struct sNode* expression_node, struct sInfo* info);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUE$ph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_object(struct sType* type, struct sInfo* info);
struct tuple4$4char$phchar$phchar$phchar$ph* create_vtable(struct sType* any_type, struct sInfo* info);
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo* info);
struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info);
_Bool sNothingNode_terminated(struct sNothingNode* self);
char* sNothingNode_kind(struct sNothingNode* self);
_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info);
struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct list$1tuple2$2char$phsNode$ph$ph* initializer, struct sNode* initializer_num, struct sInfo* info);
char* sNewNode_kind(struct sNewNode* self);
_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info);
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
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static void sNewNode_finalize(struct sNewNode* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar* self);
static void sBlock_finalize(struct sBlock* self);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info);
char* sImplementsNode_kind(struct sImplementsNode* self);
_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info);
static void sImplementsNode_finalize(struct sImplementsNode* self);
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position);
static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info);
char* sTrueNode_kind(struct sTrueNode* self);
_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info);
static void sTrueNode_finalize(struct sTrueNode* self);
struct sNode* create_true_object(struct sInfo* info);
static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self);
struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info);
char* sFalseNode_kind(struct sFalseNode* self);
_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info);
static void sFalseNode_finalize(struct sFalseNode* self);
struct sNode* create_false_object(struct sInfo* info);
static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self);
struct sGeneric* sGeneric_initialize(struct sGeneric* self, struct sNode* exp, struct list$1sType$ph* types, struct list$1sNode$ph* exps, struct sNode* default_exp, struct sInfo* info);
char* sGeneric_kind(struct sGeneric* self);
_Bool sGeneric_compile(struct sGeneric* self, struct sInfo* info);
static void sGeneric_finalize(struct sGeneric* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info);
char* sSizeOfNode_kind(struct sSizeOfNode* self);
_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info);
static void sSizeOfNode_finalize(struct sSizeOfNode* self);
struct sOffsetOf* sOffsetOf_initialize(struct sOffsetOf* self, struct sType* type, char* name, struct sInfo* info);
char* sOffsetOf_kind(struct sOffsetOf* self);
_Bool sOffsetOf_compile(struct sOffsetOf* self, struct sInfo* info);
static void sOffsetOf_finalize(struct sOffsetOf* self);
struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info);
char* sSizeOfExpNode_kind(struct sSizeOfExpNode* self);
_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info);
static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self);
struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType* type, struct sInfo* info);
char* sTypeOfNode_kind(struct sTypeOfNode* self);
_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo* info);
static void sTypeOfNode_finalize(struct sTypeOfNode* self);
struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo* info);
char* sTypeOfExpNode_kind(struct sTypeOfExpNode* self);
_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo* info);
static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self);
struct sDynamicTypeOf* sDynamicTypeOf_initialize(struct sDynamicTypeOf* self, struct sNode* exp, struct sInfo* info);
char* sDynamicTypeOf_kind(struct sDynamicTypeOf* self);
_Bool sDynamicTypeOf_compile(struct sDynamicTypeOf* self, struct sInfo* info);
static void sDynamicTypeOf_finalize(struct sDynamicTypeOf* self);
struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info);
char* sAlignOfNode_kind(struct sAlignOfNode* self);
_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info);
static void sAlignOfNode_finalize(struct sAlignOfNode* self);
struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info);
char* sAlignOfExpNode_kind(struct sAlignOfExpNode* self);
_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info);
static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self);
struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info);
char* sAlignOfNode2_kind(struct sAlignOfNode2* self);
_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info);
static void sAlignOfNode2_finalize(struct sAlignOfNode2* self);
struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info);
char* sAlignOfExpNode2_kind(struct sAlignOfExpNode2* self);
_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info);
static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self);
struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info);
char* sAlignAsNode_kind(struct sAlignAsNode* self);
_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info);
static void sAlignAsNode_finalize(struct sAlignAsNode* self);
struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info);
char* sAlignAsExpNode_kind(struct sAlignAsExpNode* self);
_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info);
static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self);
struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info);
char* sDeleteNode_kind(struct sDeleteNode* self);
_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info);
static void sDeleteNode_finalize(struct sDeleteNode* self);
struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info);
char* sBorrowNode_kind(struct sBorrowNode* self);
_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info);
static void sBorrowNode_finalize(struct sBorrowNode* self);
struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info);
char* sCloneNode_kind(struct sCloneNode* self);
_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info);
static void sCloneNode_finalize(struct sCloneNode* self);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info);
char* sDupeNode_kind(struct sDupeNode* self);
_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info);
static void sDupeNode_finalize(struct sDupeNode* self);
struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info);
char* sDummyHeapNode_kind(struct sDummyHeapNode* self);
_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info);
static void sDummyHeapNode_finalize(struct sDummyHeapNode* self);
struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info);
char* sGCIncNode_kind(struct sGCIncNode* self);
_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info);
static void sGCIncNode_finalize(struct sGCIncNode* self);
struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info);
char* sGCDecNode_kind(struct sGCDecNode* self);
_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info);
static void sGCDecNode_finalize(struct sGCDecNode* self);
struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info);
char* sIsHeap_kind(struct sIsHeap* self);
_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info);
static void sIsHeap_finalize(struct sIsHeap* self);
struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType* type, struct sInfo* info);
char* sIsPointer_kind(struct sIsPointer* self);
_Bool sIsPointer_compile(struct sIsPointer* self, struct sInfo* info);
static void sIsPointer_finalize(struct sIsPointer* self);
struct sGCDecNoFreeNode* sGCDecNoFreeNode_initialize(struct sGCDecNoFreeNode* self, struct sNode* node, struct sInfo* info);
char* sGCDecNoFreeNode_kind(struct sGCDecNoFreeNode* self);
_Bool sGCDecNoFreeNode_compile(struct sGCDecNoFreeNode* self, struct sInfo* info);
static void sGCDecNoFreeNode_finalize(struct sGCDecNoFreeNode* self);
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self);
static struct sNewNode* sNewNode_clone(struct sNewNode* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2);
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
static struct sGeneric* sGeneric_clone(struct sGeneric* self);
static struct sOffsetOf* sOffsetOf_clone(struct sOffsetOf* self);
static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self);
static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self);
static struct sDynamicTypeOf* sDynamicTypeOf_clone(struct sDynamicTypeOf* self);
static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self);
static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self);
static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self);
static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_implements(struct sNode* node, struct sType* inf_type, struct sInfo* info);
static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);
// uniq global variable
// inline function

// body function
struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct list$1tuple2$2char$phsNode$ph$ph* initializer, struct sNode* initializer_num, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    struct sType* __dec_obj32;
    struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj33;
    struct sNode* __dec_obj34;
    struct sNewNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj32=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj33=self->initializer,
    self->initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(initializer);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj33,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj34=self->initializer_num,
    self->initializer_num=(struct sNode*)come_increment_ref_count(initializer_num);
    (__dec_obj34 ? __dec_obj34 = come_decrement_ref_count(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sNewNode*)come_increment_ref_count(self);
    come_call_finalizer(sNewNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((initializer_num) ? initializer_num = come_decrement_ref_count(initializer_num, ((struct sNode*)initializer_num)->finalize, ((struct sNode*)initializer_num)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sNewNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sNewNode_kind(struct sNewNode* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sNewNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info)
{
    struct sType* type;
    struct list$1tuple2$2char$phsNode$ph$ph* initializer;
    struct sNode* initializer_num;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE* come_value;
    struct buffer* num_string;
    struct list$1sNode$ph* o2_saved;
    struct sNode* it;
    _Bool Value;
    _Bool __result_obj__0;
    struct CVALUE* cvalue;
    struct sType* type2;
    char* type_name;
    char* type_name2;
    char* var_name;
    struct sType* type3;
    char* type_name3;
    struct buffer* buf;
    char* obj;
    _Bool _conditional_value_X0;
    char* __dec_obj35;
    char* __dec_obj36;
    struct sClass* klass;
    _Bool Value_10;
    struct CVALUE* come_value2;
    void* __right_value2 = (void*)0;
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
    struct CVALUE* come_value_11;
    char* __dec_obj37;
    struct sType* __dec_obj38;
    char* __dec_obj39;
    char* var_name_15;
    struct sType* type3_16;
    char* type_name3_17;
    struct buffer* buf_18;
    char* obj_19;
    _Bool _conditional_value_X1;
    char* __dec_obj43;
    char* __dec_obj44;
    struct sClass* klass_20;
    int i;
    struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_21;
    struct tuple2$2char$phsNode$ph* it_23;
    struct tuple2$2char$phsNode$ph* multiple_assign_var1
;    char* name=0;
    struct sNode* exp=0;
    _Bool Value_25;
    struct CVALUE* come_value2_26;
    struct sType* left_type;
    struct list$1tuple2$2char$phsType$ph$ph* o2_saved_27;
    struct tuple2$2char$phsType$ph* it2;
    struct tuple2$2char$phsType$ph* multiple_assign_var2
;    char* field_name=0;
    struct sType* field_type=0;
    struct sType* __dec_obj45;
    struct sType* right_type;
    struct sType* __dec_obj46;
    char* c_value;
    char* __dec_obj47;
    struct sType* __dec_obj48;
    char* __dec_obj49;
    struct sType* type3_30;
    char* type_name3_31;
    _Bool _conditional_value_X2;
    char* __dec_obj50;
    char* __dec_obj51;
    struct sType* __dec_obj52;
    memset(&obj, 0, sizeof(obj));
    memset(&obj_19, 0, sizeof(obj_19));
    type=(struct sType*)come_increment_ref_count(self->type);
    initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self->initializer);
    initializer_num=(struct sNode*)come_increment_ref_count(self->initializer_num);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 25, "struct CVALUE*"))));
    num_string=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "21obj.c", 27, "struct buffer*"))));
    buffer_append_str(num_string,"1");
    for(o2_saved=(struct list$1sNode$ph*)come_increment_ref_count(type->mArrayNum),it=list$1sNode$ph_begin(o2_saved);!list$1sNode$ph_end(o2_saved);it=list$1sNode$ph_next(o2_saved)){
        Value=node_compile(it,info);
        if(!Value) {
            __result_obj__0 = 0;
            come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((initializer_num) ? initializer_num = come_decrement_ref_count(initializer_num, ((struct sNode*)initializer_num)->finalize, ((struct sNode*)initializer_num)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__0;
        }
        else {
        }
        cvalue=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        buffer_append_format(num_string,"*(%s)",cvalue->c_value);
        come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(info->generics_type),info));
    list$1sNode$ph_reset(type2->mArrayNum);
    type_name=(char*)come_increment_ref_count(make_type_name_string(type2,info,1,1,0));
    type_name2=(char*)come_increment_ref_count(make_come_type_name_string(type2,info));
    if(initializer_num) {
        static int var_num=1;
        var_num++;
        var_name=(char*)come_increment_ref_count(xsprintf("__new_num__%d",var_num));
        type3=(struct sType*)come_increment_ref_count(sType_clone(type2));
        type3->mPointerNum++;
        if(type3->mNoSolvedGenericsType) {
            type3->mNoSolvedGenericsType->mPointerNum++;
        }
        type_name3=(char*)come_increment_ref_count(make_type_name_string(type3,info,0,0,0));
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value0=make_define_var(type3,var_name,info,0,0))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "21obj.c", 65, "struct buffer*"))));
        buffer_append_str(buf,"({");
        if(({(_conditional_value_X0=(((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2")))));        come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
            __dec_obj35=obj,
            obj=(char*)come_increment_ref_count(xsprintf("%s = (%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",var_name,type_name,type_name,((char*)(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,type_name3));
            __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else {
            __dec_obj36=obj,
            obj=(char*)come_increment_ref_count(xsprintf("%s = (%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",var_name,type_name,type_name,((char*)(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,type_name3));
            __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        buffer_append_str(buf,obj);
        buffer_append_str(buf,";");
        klass=type3->mClass;
        Value_10=node_compile(initializer_num,info);
        if(!Value_10) {
            __result_obj__0 = 0;
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (type_name3 = come_decrement_ref_count(type_name3, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (obj = come_decrement_ref_count(obj, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((initializer_num) ? initializer_num = come_decrement_ref_count(initializer_num, ((struct sNode*)initializer_num)->finalize, ((struct sNode*)initializer_num)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (type_name2 = come_decrement_ref_count(type_name2, (void*)0, (void*)0, 0, 0, (void*)0));
            return __result_obj__0;
        }
        else {
        }
        come_value2=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        buffer_append_str(buf,((char*)(__right_value14=string_operator_add(((char*)(__right_value13=string_operator_add(((char*)(__right_value12=string_operator_add(((char*)(__right_value11=charp_operator_add("*",var_name))),"= "))),come_value2->c_value))),";"))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value8 = come_decrement_ref_count(__right_value8, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value11 = come_decrement_ref_count(__right_value11, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value12 = come_decrement_ref_count(__right_value12, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value13 = come_decrement_ref_count(__right_value13, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value14 = come_decrement_ref_count(__right_value14, (void*)0, (void*)0, 1, 0, (void*)0));
        buffer_append_str(buf,var_name);
        buffer_append_str(buf,"; })");
        come_value_11=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 93, "struct CVALUE*"))));
        __dec_obj37=come_value_11->c_value,
        come_value_11->c_value=(char*)come_increment_ref_count(buffer_to_string(buf));
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0, (void*)0);
        type2->mHeap=1;
        type2->mPointerNum++;
        if(type2->mNoSolvedGenericsType) {
            type2->mNoSolvedGenericsType->mPointerNum++;
            type2->mNoSolvedGenericsType->mHeap=1;
        }
        __dec_obj38=come_value_11->type,
        come_value_11->type=(struct sType*)come_increment_ref_count(sType_clone(type2));
        come_call_finalizer(sType_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value_11->var=((void*)0);
        append_object_to_right_values(come_value_11,(struct sType*)come_increment_ref_count(type2),info,0,((void*)0),((void*)0),((void*)0));
        __dec_obj39=come_value_11->c_value,
        come_value_11->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_11->c_value,come_value_11->type,info));
        __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0, (void*)0);
        add_come_last_code(info,"%s",come_value_11->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_11));
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (type_name3 = come_decrement_ref_count(type_name3, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (obj = come_decrement_ref_count(obj, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_11, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(initializer) {
        static int var_num_14=1;
        var_num_14++;
        var_name_15=(char*)come_increment_ref_count(xsprintf("__new_obj__%d",var_num_14));
        type3_16=(struct sType*)come_increment_ref_count(sType_clone(type2));
        type3_16->mPointerNum++;
        if(type3_16->mNoSolvedGenericsType) {
            type3_16->mNoSolvedGenericsType->mPointerNum++;
        }
        type_name3_17=(char*)come_increment_ref_count(make_type_name_string(type3_16,info,0,0,0));
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value0=make_define_var(type3_16,var_name_15,info,0,0))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        buf_18=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "21obj.c", 132, "struct buffer*"))));
        buffer_append_str(buf_18,"({");
        if(({(_conditional_value_X1=(((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2")))));        come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X1;})) {
            __dec_obj43=obj_19,
            obj_19=(char*)come_increment_ref_count(xsprintf("%s = (%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",var_name_15,type_name,type_name,((char*)(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,type_name3_17));
            __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else {
            __dec_obj44=obj_19,
            obj_19=(char*)come_increment_ref_count(xsprintf("%s = (%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",var_name_15,type_name,type_name,((char*)(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,type_name3_17));
            __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        buffer_append_str(buf_18,obj_19);
        buffer_append_str(buf_18,";");
        klass_20=type3_16->mClass;
        i=0;
        for(o2_saved_21=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(initializer),it_23=list$1tuple2$2char$phsNode$ph$ph_begin(o2_saved_21);!list$1tuple2$2char$phsNode$ph$ph_end(o2_saved_21);it_23=list$1tuple2$2char$phsNode$ph$ph_next(o2_saved_21)){
            multiple_assign_var1=it_23;
            name=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            exp=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
            Value_25=node_compile(exp,info);
            if(!Value_25) {
                __result_obj__0 = 0;
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
                ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_21, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (var_name_15 = come_decrement_ref_count(var_name_15, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type3_16, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (type_name3_17 = come_decrement_ref_count(type_name3_17, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(buffer_finalize, buf_18, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (obj_19 = come_decrement_ref_count(obj_19, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((initializer_num) ? initializer_num = come_decrement_ref_count(initializer_num, ((struct sNode*)initializer_num)->finalize, ((struct sNode*)initializer_num)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                (type_name2 = come_decrement_ref_count(type_name2, (void*)0, (void*)0, 0, 0, (void*)0));
                return __result_obj__0;
            }
            else {
            }
            come_value2_26=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            left_type=((void*)0);
            for(o2_saved_27=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass_20->mFields),it2=list$1tuple2$2char$phsType$ph$ph_begin(o2_saved_27);!list$1tuple2$2char$phsType$ph$ph_end(o2_saved_27);it2=list$1tuple2$2char$phsType$ph$ph_next(o2_saved_27)){
                multiple_assign_var2=it2;
                field_name=(char*)come_increment_ref_count(multiple_assign_var2->v1);
                field_type=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
                if(string_operator_equals(name,field_name)) {
                    __dec_obj45=left_type,
                    left_type=(struct sType*)come_increment_ref_count(sType_clone(field_type));
                    come_call_finalizer(sType_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (field_name = come_decrement_ref_count(field_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                (field_name = come_decrement_ref_count(field_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_27, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(left_type==((void*)0)) {
                err_msg(info,"field %s is not defined",name);
                __result_obj__0 = 1;
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
                ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, come_value2_26, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_21, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (var_name_15 = come_decrement_ref_count(var_name_15, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type3_16, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (type_name3_17 = come_decrement_ref_count(type_name3_17, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(buffer_finalize, buf_18, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (obj_19 = come_decrement_ref_count(obj_19, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((initializer_num) ? initializer_num = come_decrement_ref_count(initializer_num, ((struct sNode*)initializer_num)->finalize, ((struct sNode*)initializer_num)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                (type_name2 = come_decrement_ref_count(type_name2, (void*)0, (void*)0, 0, 0, (void*)0));
                return __result_obj__0;
            }
            right_type=(struct sType*)come_increment_ref_count(come_value2_26->type);
            check_assign_type(((char*)(__right_value1=xsprintf("\%s is assining to",((char*)(__right_value0=string_to_string(name)))))),left_type,right_type,come_value2_26,0,1,1,0,info);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            __dec_obj46=right_type,
            right_type=(struct sType*)come_increment_ref_count(come_value2_26->type);
            come_call_finalizer(sType_finalize, __dec_obj46,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(left_type->mHeap&&right_type->mHeap&&left_type->mPointerNum>0&&right_type->mPointerNum>0) {
                c_value=(char*)come_increment_ref_count(increment_ref_count_object(left_type,come_value2_26->c_value,info));
                buffer_append_format(buf_18,"%s->%s = %s",var_name_15,name,c_value);
                (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            else {
                buffer_append_format(buf_18,"%s->%s = %s",var_name_15,name,come_value2_26->c_value);
            }
            buffer_append_str(buf_18,";");
            i++;
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value2_26, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_21, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_18,var_name_15);
        buffer_append_str(buf_18,"; })");
        __dec_obj47=come_value->c_value,
        come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_18));
        __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0, (void*)0);
        type2->mHeap=1;
        type2->mPointerNum++;
        if(type2->mNoSolvedGenericsType) {
            type2->mNoSolvedGenericsType->mPointerNum++;
            type2->mNoSolvedGenericsType->mHeap=1;
        }
        __dec_obj48=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_clone(type2));
        come_call_finalizer(sType_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value->var=((void*)0);
        append_object_to_right_values(come_value,(struct sType*)come_increment_ref_count(type2),info,0,((void*)0),((void*)0),((void*)0));
        __dec_obj49=come_value->c_value,
        come_value->c_value=(char*)come_increment_ref_count(append_stackframe(come_value->c_value,come_value->type,info));
        __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0, (void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
        (var_name_15 = come_decrement_ref_count(var_name_15, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type3_16, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (type_name3_17 = come_decrement_ref_count(type_name3_17, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, buf_18, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (obj_19 = come_decrement_ref_count(obj_19, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else {
        type3_30=(struct sType*)come_increment_ref_count(sType_clone(type2));
        type3_30->mPointerNum++;
        type3_30->mHeap=1;
        if(type3_30->mNoSolvedGenericsType) {
            type3_30->mNoSolvedGenericsType->mPointerNum++;
            type3_30->mNoSolvedGenericsType->mHeap=1;
        }
        type_name3_31=(char*)come_increment_ref_count(make_type_name_string(type3_30,info,0,0,0));
        if(({(_conditional_value_X2=(((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2")))));        come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X2;})) {
            __dec_obj50=come_value->c_value,
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name,type_name,((char*)(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,type_name3_31));
            __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else {
            __dec_obj51=come_value->c_value,
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name,type_name,((char*)(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,type_name3_31));
            __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        type2->mHeap=1;
        type2->mPointerNum++;
        if(type2->mNoSolvedGenericsType) {
            type2->mNoSolvedGenericsType->mPointerNum++;
            type2->mNoSolvedGenericsType->mHeap=1;
        }
        __dec_obj52=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_clone(type2));
        come_call_finalizer(sType_finalize, __dec_obj52,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value->var=((void*)0);
        append_object_to_right_values(come_value,(struct sType*)come_increment_ref_count(type2),info,0,((void*)0),((void*)0),((void*)0));
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
        come_call_finalizer(sType_finalize, type3_30, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (type_name3_31 = come_decrement_ref_count(type_name3_31, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __result_obj__0 = 1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((initializer_num) ? initializer_num = come_decrement_ref_count(initializer_num, ((struct sNode*)initializer_num)->finalize, ((struct sNode*)initializer_num)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    (type_name2 = come_decrement_ref_count(type_name2, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__0;
}

static void sNodeBase_finalize(struct sNodeBase* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self)
{
    struct sType* __result_obj__0;
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
    if(self==(void*)0) {
        __result_obj__0 = (struct sType*)come_increment_ref_count((void*)0);
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(self!=((void*)0)) {
        result->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj1=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj1,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj2=result->mChannelType,
        result->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj6=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj7=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj8=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj8 ? __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj9=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)) {
        result->mAlignasDouble=self->mAlignasDouble;
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj10=result->mTupleName,
        result->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 12, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj11=result->mAttribute,
        result->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 13, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        __dec_obj12=result->mVarAttribute,
        result->mVarAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mVarAttribute, "sType_clone", 14, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0);
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
        result->mRecord=self->mRecord;
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
        __dec_obj13=result->mAnonymousName,
        result->mAnonymousName=(char*)come_increment_ref_count((char*)come_memdup(self->mAnonymousName, "sType_clone", 39, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mInnerStruct=self->mInnerStruct;
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        __dec_obj14=result->mInnerStructName,
        result->mInnerStructName=(char*)come_increment_ref_count((char*)come_memdup(self->mInnerStructName, "sType_clone", 41, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0);
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
        __dec_obj15=result->mAsmName,
        result->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 46, "char*"));
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj19=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj19,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        __dec_obj20=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj20,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        __dec_obj21=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic));
        come_call_finalizer(list$1int$_finalize, __dec_obj21,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        __dec_obj22=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict));
        come_call_finalizer(list$1int$_finalize, __dec_obj22,(void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        __dec_obj23=result->mTypedefOriginalType,
        result->mTypedefOriginalType=(struct sType*)come_increment_ref_count(sType_clone(self->mTypedefOriginalType));
        come_call_finalizer(sType_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj24=result->mOriginalTypeName,
        result->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 58, "char*"));
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0, (void*)0);
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
        __dec_obj25=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj29=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj29,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj30=result->mResultType,
        result->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj30,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        __dec_obj31=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode));
        (__dec_obj31 ? __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = (struct sType*)come_increment_ref_count(result);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void sType_finalize(struct sType* self)
{
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
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self)
{
    struct list_item$1sType$ph* it;
    struct list_item$1sType$ph* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self)
{
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self)
{
    struct list_item$1sNode$ph* it;
    struct list_item$1sNode$ph* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self)
{
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
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

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self)
{
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sType$ph* result;
    struct list_item$1sType$ph* it;
    if(self==((void*)0)) {
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1102, "struct list$1sType$ph*"))));
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
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self)
{
    struct list$1sType$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item)
{
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType* __dec_obj3;
    struct list_item$1sType$ph* litem_0;
    struct sType* __dec_obj4;
    struct list_item$1sType$ph* litem_1;
    struct sType* __dec_obj5;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1123, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj3=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_0=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1133, "struct list_item$1sType$ph*"))));
        litem_0->prev=self->head;
        litem_0->next=((void*)0);
        __dec_obj4=litem_0->item,
        litem_0->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_0;
        self->head->next=litem_0;
    }
    else {
        litem_1=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1143, "struct list_item$1sType$ph*"))));
        litem_1->prev=self->tail;
        litem_1->next=((void*)0);
        __dec_obj5=litem_1->item,
        litem_1->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_1;
        self->tail=litem_1;
    }
    self->len++;
    __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self)
{
    struct list_item$1sType$ph* it;
    struct list_item$1sType$ph* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self)
{
    struct sNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNode* result;
    if(self==(void*)0) {
        __result_obj__0 = (struct sNode*)come_increment_ref_count((void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
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
        result->no_mutex=self->no_mutex;
    }
    __result_obj__0 = (struct sNode*)come_increment_ref_count(result);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self)
{
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sNode$ph* result;
    struct list_item$1sNode$ph* it;
    if(self==((void*)0)) {
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1102, "struct list$1sNode$ph*"))));
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
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self)
{
    struct list$1sNode$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item)
{
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj16;
    struct list_item$1sNode$ph* litem_2;
    struct sNode* __dec_obj17;
    struct list_item$1sNode$ph* litem_3;
    struct sNode* __dec_obj18;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1123, "struct list_item$1sNode$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj16=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_2=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1133, "struct list_item$1sNode$ph*"))));
        litem_2->prev=self->head;
        litem_2->next=((void*)0);
        __dec_obj17=litem_2->item,
        litem_2->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj17 ? __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem_2;
        self->head->next=litem_2;
    }
    else {
        litem_3=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1143, "struct list_item$1sNode$ph*"))));
        litem_3->prev=self->tail;
        litem_3->next=((void*)0);
        __dec_obj18=litem_3->item,
        litem_3->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj18 ? __dec_obj18 = come_decrement_ref_count(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail->next=litem_3;
        self->tail=litem_3;
    }
    self->len++;
    __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    return __result_obj__0;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self)
{
    struct list_item$1sNode$ph* it;
    struct list_item$1sNode$ph* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct list$1int$* list$1int$$p_clone(struct list$1int$* self)
{
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1int$* result;
    struct list_item$1int$* it;
    if(self==((void*)0)) {
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/neo-c.h", 1102, "struct list$1int$*"))));
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
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize(struct list$1int$* self)
{
    struct list$1int$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_add(struct list$1int$* self, int item)
{
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_4;
    struct list_item$1int$* litem_5;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1123, "struct list_item$1int$*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_4=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1133, "struct list_item$1int$*"))));
        litem_4->prev=self->head;
        litem_4->next=((void*)0);
        litem_4->item=item;
        self->tail=litem_4;
        self->head->next=litem_4;
    }
    else {
        litem_5=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1143, "struct list_item$1int$*"))));
        litem_5->prev=self->tail;
        litem_5->next=((void*)0);
        litem_5->item=item;
        self->tail->next=litem_5;
        self->tail=litem_5;
    }
    self->len++;
    __result_obj__0 = self;
    return __result_obj__0;
}

static void list$1int$_finalize(struct list$1int$* self)
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

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self)
{
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* result;
    struct list_item$1char$ph* it;
    if(self==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 1102, "struct list$1char$ph*"))));
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            list$1char$ph_add(result,(char*)come_increment_ref_count((char*)come_memdup(it->item, "/usr/local/include/neo-c.h", 1107, "char*")));
        }
        else {
            list$1char$ph_add(result,(char*)come_increment_ref_count((char*)come_memdup(it->item, "/usr/local/include/neo-c.h", 1110, "char*")));
        }
        it=it->next;
    }
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item)
{
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char* __dec_obj26;
    struct list_item$1char$ph* litem_6;
    char* __dec_obj27;
    struct list_item$1char$ph* litem_7;
    char* __dec_obj28;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1123, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj26=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_6=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1133, "struct list_item$1char$ph*"))));
        litem_6->prev=self->head;
        litem_6->next=((void*)0);
        __dec_obj27=litem_6->item,
        litem_6->item=(char*)come_increment_ref_count(item);
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_6;
        self->head->next=litem_6;
    }
    else {
        litem_7=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1143, "struct list_item$1char$ph*"))));
        litem_7->prev=self->tail;
        litem_7->next=((void*)0);
        __dec_obj28=litem_7->item,
        litem_7->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_7;
        self->tail=litem_7;
    }
    self->len++;
    __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__0;
}

static void list$1char$ph_finalize(struct list$1char$ph* self)
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

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct list_item$1tuple2$2char$phsNode$ph$ph* it;
    struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self)
{
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self)
{
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static void sNewNode_finalize(struct sNewNode* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->initializer!=((void*)0)) {
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self->initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->initializer_num!=((void*)0)) {
        ((self->initializer_num) ? self->initializer_num = come_decrement_ref_count(self->initializer_num, ((struct sNode*)self->initializer_num)->finalize, ((struct sNode*)self->initializer_num)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct list_item$1tuple2$2char$phsNode$ph$ph* it;
    struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self)
{
    struct sNode* result;
    struct sNode* __result_obj__0;
    struct sNode* result_8;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct sNode*));
        __result_obj__0 = result;
        return __result_obj__0;
    }
    self->it=self->head;
    if(self->it) {
        __result_obj__0 = self->it->item;
        return __result_obj__0;
    }
    memset(&result_8,0,sizeof(struct sNode*));
    __result_obj__0 = result_8;
    return __result_obj__0;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self)
{
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self)
{
    struct sNode* result;
    struct sNode* __result_obj__0;
    struct sNode* result_9;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(struct sNode*));
        __result_obj__0 = result;
        return __result_obj__0;
    }
    self->it=self->it->next;
    if(self->it) {
        __result_obj__0 = self->it->item;
        return __result_obj__0;
    }
    memset(&result_9,0,sizeof(struct sNode*));
    __result_obj__0 = result_9;
    return __result_obj__0;
}

static void CVALUE_finalize(struct CVALUE* self)
{
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
}

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self)
{
    struct list$1sNode$ph* __result_obj__0;
    struct list_item$1sNode$ph* it;
    struct list_item$1sNode$ph* prev_it;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        return __result_obj__0;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__0 = self;
    return __result_obj__0;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key)
{
    struct sFun* default_value;
    struct sFun* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sFun*));
    if(self==((void*)0)) {
        __result_obj__0 = (struct sFun*)come_increment_ref_count(default_value);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct sFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void sFun_finalize(struct sFun* self)
{
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
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self)
{
    struct list_item$1sVar$ph* it;
    struct list_item$1sVar$ph* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self)
{
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void sVar_finalize(struct sVar* self)
{
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
}

static void sBlock_finalize(struct sBlock* self)
{
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key)
{
    struct sFun* default_value;
    struct sFun* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sFun*));
    if(self==((void*)0)) {
        __result_obj__0 = (struct sFun*)come_increment_ref_count(default_value);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct sFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item)
{
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE* __dec_obj40;
    struct list_item$1CVALUE$ph* litem_12;
    struct CVALUE* __dec_obj41;
    struct list_item$1CVALUE$ph* litem_13;
    struct CVALUE* __dec_obj42;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1208, "struct list_item$1CVALUE$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj40=litem->item,
        litem->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_12=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1218, "struct list_item$1CVALUE$ph*"))));
        litem_12->prev=self->head;
        litem_12->next=((void*)0);
        __dec_obj41=litem_12->item,
        litem_12->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj41,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_12;
        self->head->next=litem_12;
    }
    else {
        litem_13=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1228, "struct list_item$1CVALUE$ph*"))));
        litem_13->prev=self->tail;
        litem_13->next=((void*)0);
        __dec_obj42=litem_13->item,
        litem_13->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_13;
        self->tail=litem_13;
    }
    self->len++;
    __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct tuple2$2char$phsNode$ph* result;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    struct tuple2$2char$phsNode$ph* result_22;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__0 = result;
        return __result_obj__0;
    }
    self->it=self->head;
    if(self->it) {
        __result_obj__0 = self->it->item;
        return __result_obj__0;
    }
    memset(&result_22,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__0 = result_22;
    return __result_obj__0;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct tuple2$2char$phsNode$ph* result;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    struct tuple2$2char$phsNode$ph* result_24;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__0 = result;
        return __result_obj__0;
    }
    self->it=self->it->next;
    if(self->it) {
        __result_obj__0 = self->it->item;
        return __result_obj__0;
    }
    memset(&result_24,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__0 = result_24;
    return __result_obj__0;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct tuple2$2char$phsType$ph* result;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct tuple2$2char$phsType$ph* result_28;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__0 = result;
        return __result_obj__0;
    }
    self->it=self->head;
    if(self->it) {
        __result_obj__0 = self->it->item;
        return __result_obj__0;
    }
    memset(&result_28,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__0 = result_28;
    return __result_obj__0;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct tuple2$2char$phsType$ph* result;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct tuple2$2char$phsType$ph* result_29;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__0 = result;
        return __result_obj__0;
    }
    self->it=self->it->next;
    if(self->it) {
        __result_obj__0 = self->it->item;
        return __result_obj__0;
    }
    memset(&result_29,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__0 = result_29;
    return __result_obj__0;
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
    struct list_item$1tuple2$2char$phsType$ph$ph* prev_it;
    if(self==((void*)0)) {
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self)
{
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self)
{
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj53;
    struct sType* __dec_obj54;
    struct sImplementsNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj53=self->obj_exp,
    self->obj_exp=(struct sNode*)come_increment_ref_count(sNode_clone(obj_exp));
    (__dec_obj53 ? __dec_obj53 = come_decrement_ref_count(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj54=self->inf_type,
    self->inf_type=(struct sType*)come_increment_ref_count(sType_clone(inf_type));
    come_call_finalizer(sType_finalize, __dec_obj54,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sImplementsNode*)come_increment_ref_count(self);
    come_call_finalizer(sImplementsNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((obj_exp) ? obj_exp = come_decrement_ref_count(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sType_finalize, inf_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sImplementsNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sImplementsNode_kind(struct sImplementsNode* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sImplementsNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    struct sNode* obj_exp;
    struct sType* inf_type;
    _Bool Value;
    _Bool __result_obj__0;
    struct CVALUE* come_value;
    struct sType* type;
    struct sClass* klass;
    void* __right_value1 = (void*)0;
    struct CVALUE* come_value2;
    struct sType* type2;
    char* type_name;
    char* type_name2;
    int inf_num_stack;
    char* buf;
    char* buf2;
    _Bool _conditional_value_X0;
    char* c_value;
    struct sType* typeX;
    int i;
    struct tuple2$2char$phsType$ph* multiple_assign_var3
;    char* name=0;
    struct sType* field_type=0;
    char* method_name;
    struct sFun* fun;
    struct sType* type2_34;
    struct tuple2$2sFun$pchar$ph* multiple_assign_var4
;    struct sFun* fun2=0;
    char* real_fun_name=0;
    char* __dec_obj55;
    struct sType* type2_35;
    struct tuple2$2sFun$pchar$ph* multiple_assign_var5
;    struct sFun* fun2_36=0;
    char* real_fun_name_37=0;
    char* __dec_obj56;
    struct sClass* klass2;
    char* __dec_obj57;
    char* __dec_obj58;
    struct sType* type3;
    struct sType* __dec_obj59;
    obj_exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->obj_exp));
    inf_type=(struct sType*)come_increment_ref_count(sType_clone(self->inf_type));
    Value=node_compile(obj_exp,info);
    if(!Value) {
        __result_obj__0 = 0;
        ((obj_exp) ? obj_exp = come_decrement_ref_count(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sType_finalize, inf_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    else {
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type=(struct sType*)come_increment_ref_count(sType_clone(come_value->type));
    type->mPointerNum--;
    type->mHeap=0;
    klass=inf_type->mClass;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 290, "struct CVALUE*"))));
    type2=(struct sType*)come_increment_ref_count(sType_clone(inf_type));
    type_name=(char*)come_increment_ref_count(make_type_name_string(inf_type,info,0,1,0));
    type_name2=(char*)come_increment_ref_count(make_type_name_string(type,info,0,1,0));
    static int inf_num=0;
    ++inf_num;
    inf_num_stack=inf_num;
    buf=(char*)come_increment_ref_count(xsprintf("%s* _inf_value%d;\n",type_name,inf_num_stack));
    add_come_code_at_function_head(info,buf);
    buf2=(char*)come_increment_ref_count(xsprintf("%s* _inf_obj_value%d;\n",type_name2,inf_num_stack));
    add_come_code_at_function_head(info,buf2);
    if(({(_conditional_value_X0=(((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2")))));    come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
        add_come_code(info,"_inf_value%d=(%s*)come_calloc_v2(1, sizeof(%s), \"%s\", %d, \"%s\");\n",inf_num_stack,type_name,type_name,info->sname,info->sline,type_name);
    }
    else {
        add_come_code(info,"_inf_value%d=(%s*)come_calloc(1, sizeof(%s), \"%s\", %d, \"%s\");\n",inf_num_stack,type_name,type_name,info->sname,info->sline,type_name);
    }
    c_value=(char*)come_increment_ref_count(increment_ref_count_object(come_value->type,come_value->c_value,info));
    add_come_code(info,"_inf_obj_value%d=%s;\n",inf_num_stack,c_value);
    add_come_code(info,"_inf_value%d->_protocol_obj=_inf_obj_value%d;\n",inf_num_stack,inf_num_stack);
    typeX=(struct sType*)come_increment_ref_count(sType_clone(type));
    typeX->mPointerNum++;
    ((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_finalizer_automatically((struct sType*)come_increment_ref_count(typeX),"finalize",info)));
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_cloner_automatically((struct sType*)come_increment_ref_count(typeX),"clone",info)));
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    for(i=1;i<list$1tuple2$2char$phsType$ph$ph_length(klass->mFields);i++){
        multiple_assign_var3=((struct tuple2$2char$phsType$ph*)(__right_value0=list$1tuple2$2char$phsType$ph$ph_operator_load_element(klass->mFields,i)));
        name=(char*)come_increment_ref_count(multiple_assign_var3->v1);
        field_type=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        method_name=(char*)come_increment_ref_count(create_method_name((struct sType*)come_increment_ref_count(type),0,name,info,1));
        fun=((struct sFun*)(__right_value0=map$2char$phsFun$ph_at(info->funcs,method_name,((void*)0))));
        if(fun==((void*)0)&&string_operator_equals(name,"to_string")) {
            type2_34=(struct sType*)come_increment_ref_count(sType_clone(type));
            type2_34->mPointerNum++;
            multiple_assign_var4=((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_to_string_automatically((struct sType*)come_increment_ref_count(type2_34),name,info)));
            fun2=multiple_assign_var4->v1;
            real_fun_name=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            fun=fun2;
            __dec_obj55=method_name,
            method_name=(char*)come_increment_ref_count(real_fun_name);
            __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0);
            come_call_finalizer(sType_finalize, type2_34, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(fun==((void*)0)&&string_operator_equals(name,"equals")) {
            type2_35=(struct sType*)come_increment_ref_count(sType_clone(type));
            type2_35->mPointerNum++;
            multiple_assign_var5=((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_equals_automatically((struct sType*)come_increment_ref_count(type2_35),name,info)));
            fun2_36=multiple_assign_var5->v1;
            real_fun_name_37=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            fun=fun2_36;
            __dec_obj56=method_name,
            method_name=(char*)come_increment_ref_count(real_fun_name_37);
            __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0, (void*)0);
            come_call_finalizer(sType_finalize, type2_35, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (real_fun_name_37 = come_decrement_ref_count(real_fun_name_37, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(fun==((void*)0)) {
            klass2=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,type->mClass->mName)));
            while(({(_conditional_value_X0=(((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass2->mParentClassName)))));            come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
                klass2=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass2->mParentClassName)));
                __dec_obj57=method_name,
                method_name=(char*)come_increment_ref_count(create_method_name_using_class(klass2,name,info));
                __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0);
                fun=((struct sFun*)(__right_value1=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value0=__builtin_string(method_name))),((void*)0))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                if(fun) {
                    break;
                }
            }
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_stack,name,method_name);
        }
        else {
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_stack,name,method_name);
        }
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (method_name = come_decrement_ref_count(method_name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __dec_obj58=come_value2->c_value,
    come_value2->c_value=(char*)come_increment_ref_count(xsprintf("_inf_value%d",inf_num_stack));
    __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0, (void*)0);
    type3=(struct sType*)come_increment_ref_count(sType_clone(inf_type));
    type3->mPointerNum++;
    type3->mHeap=1;
    type2->mHeap=1;
    __dec_obj59=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_clone(type2));
    come_call_finalizer(sType_finalize, __dec_obj59,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value2->type->mPointerNum++;
    come_value2->var=((void*)0);
    append_object_to_right_values(come_value2,(struct sType*)come_increment_ref_count(type3),info,0,((void*)0),((void*)0),((void*)0));
    add_come_last_code(info,"%s",come_value2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2));
    __result_obj__0 = 1;
    ((obj_exp) ? obj_exp = come_decrement_ref_count(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sType_finalize, inf_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    (type_name2 = come_decrement_ref_count(type_name2, (void*)0, (void*)0, 0, 0, (void*)0));
    (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
    (buf2 = come_decrement_ref_count(buf2, (void*)0, (void*)0, 0, 0, (void*)0));
    (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, typeX, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void sImplementsNode_finalize(struct sImplementsNode* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->obj_exp!=((void*)0)) {
        ((self->obj_exp) ? self->obj_exp = come_decrement_ref_count(self->obj_exp, ((struct sNode*)self->obj_exp)->finalize, ((struct sNode*)self->obj_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&self->inf_type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->inf_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self)
{
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position)
{
    struct tuple2$2char$phsType$ph* default_value;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
    int i;
    struct tuple2$2char$phsType$ph* default_value_32;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(it->item);
            come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_32,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value_32);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value_32, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position)
{
    struct tuple2$2char$phsType$ph* default_value;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
    int i;
    struct tuple2$2char$phsType$ph* default_value_33;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(it->item);
            come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_33,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value_33);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value_33, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value)
{
    struct sFun* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
        __result_obj__0 = (struct sFun*)come_increment_ref_count(default_value);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct sFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key)
{
    struct sClass* default_value;
    struct sClass* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sClass*));
    if(self==((void*)0)) {
        __result_obj__0 = (struct sClass*)come_increment_ref_count(default_value);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct sClass*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void sClass_finalize(struct sClass* self)
{
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
}

static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key)
{
    struct sClass* default_value;
    struct sClass* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sClass*));
    if(self==((void*)0)) {
        __result_obj__0 = (struct sClass*)come_increment_ref_count(default_value);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct sClass*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    struct sTrueNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__0 = (struct sTrueNode*)come_increment_ref_count(self);
    come_call_finalizer(sTrueNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sTrueNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sTrueNode_kind(struct sTrueNode* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sTrueNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE* come_value;
    char* __dec_obj60;
    void* __right_value2 = (void*)0;
    struct sType* __exception_result_var_b1;
    struct sType* __exception_result_var_b2;
    struct sType* __dec_obj61;
    struct sType* __exception_result_var_b3;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 405, "struct CVALUE*"))));
    __dec_obj60=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("(_Bool)1"));
    __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj61=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 408, 2),__exception_result_var_b3=(come_push_stackframe("21obj.c", 408, 0),__exception_result_var_b1=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 408, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),0,info,0), come_pop_stackframe(), __exception_result_var_b1), come_pop_stackframe(), __exception_result_var_b3));
    come_call_finalizer(sType_finalize, __dec_obj61,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    __result_obj__0 = 1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void sTrueNode_finalize(struct sTrueNode* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sNode* create_true_object(struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value1;
    struct sTrueNode* _inf_obj_value1;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 421, "struct sNode");
    _inf_obj_value1=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(__right_value1=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc_v2(1, sizeof(struct sTrueNode)*(1), "21obj.c", 421, "struct sTrueNode*")),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sTrueNode_finalize;
    _inf_value1->clone=(void*)sTrueNode_clone;
    _inf_value1->compile=(void*)sTrueNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sTrueNode_kind;
    _inf_value1->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value1)));
    come_call_finalizer(sTrueNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self)
{
    struct sTrueNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sTrueNode* result;
    char* __dec_obj62;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc_v2(1, sizeof(struct sTrueNode)*(1), "sTrueNode_clone", 3, "struct sTrueNode*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj62=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sTrueNode_clone", 5, "char*"));
        __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    __result_obj__0 = result;
    come_call_finalizer(sTrueNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    struct sFalseNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__0 = (struct sFalseNode*)come_increment_ref_count(self);
    come_call_finalizer(sFalseNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sFalseNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sFalseNode_kind(struct sFalseNode* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sFalseNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE* come_value;
    char* __dec_obj63;
    void* __right_value2 = (void*)0;
    struct sType* __exception_result_var_b4;
    struct sType* __exception_result_var_b5;
    struct sType* __dec_obj64;
    struct sType* __exception_result_var_b6;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 438, "struct CVALUE*"))));
    __dec_obj63=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("(_Bool)0"));
    __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj64=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 441, 5),__exception_result_var_b6=(come_push_stackframe("21obj.c", 441, 3),__exception_result_var_b4=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 441, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),0,info,0), come_pop_stackframe(), __exception_result_var_b4), come_pop_stackframe(), __exception_result_var_b6));
    come_call_finalizer(sType_finalize, __dec_obj64,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    __result_obj__0 = 1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void sFalseNode_finalize(struct sFalseNode* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sNode* create_false_object(struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value2;
    struct sFalseNode* _inf_obj_value2;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 454, "struct sNode");
    _inf_obj_value2=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(__right_value1=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc_v2(1, sizeof(struct sFalseNode)*(1), "21obj.c", 454, "struct sFalseNode*")),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sFalseNode_finalize;
    _inf_value2->clone=(void*)sFalseNode_clone;
    _inf_value2->compile=(void*)sFalseNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sFalseNode_kind;
    _inf_value2->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value2)));
    come_call_finalizer(sFalseNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self)
{
    struct sFalseNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sFalseNode* result;
    char* __dec_obj65;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc_v2(1, sizeof(struct sFalseNode)*(1), "sFalseNode_clone", 3, "struct sFalseNode*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj65=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFalseNode_clone", 5, "char*"));
        __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    __result_obj__0 = result;
    come_call_finalizer(sFalseNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct sGeneric* sGeneric_initialize(struct sGeneric* self, struct sNode* exp, struct list$1sType$ph* types, struct list$1sNode$ph* exps, struct sNode* default_exp, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj66;
    struct list$1sType$ph* __dec_obj67;
    struct list$1sNode$ph* __dec_obj68;
    struct sNode* __dec_obj69;
    struct sGeneric* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj66=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(exp);
    (__dec_obj66 ? __dec_obj66 = come_decrement_ref_count(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj67=self->types,
    self->types=(struct list$1sType$ph*)come_increment_ref_count(types);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj67,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj68=self->exps,
    self->exps=(struct list$1sNode$ph*)come_increment_ref_count(exps);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj68,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj69=self->default_exp,
    self->default_exp=(struct sNode*)come_increment_ref_count(default_exp);
    (__dec_obj69 ? __dec_obj69 = come_decrement_ref_count(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sGeneric*)come_increment_ref_count(self);
    come_call_finalizer(sGeneric_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sGeneric_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sGeneric_kind(struct sGeneric* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sGeneric"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sGeneric_compile(struct sGeneric* self, struct sInfo* info)
{
    struct sNode* exp;
    struct list$1sNode$ph* exps;
    struct list$1sType$ph* types;
    struct sNode* default_exp;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer* buf;
    _Bool Value;
    _Bool __result_obj__0;
    struct CVALUE* come_value;
    struct sType* result_type;
    int n;
    struct list$1sNode$ph* o2_saved;
    struct sNode* it;
    struct sType* type;
    _Bool Value_40;
    struct CVALUE* come_value_41;
    struct sType* __dec_obj70;
    _Bool Value_42;
    struct CVALUE* come_value_43;
    int n_44;
    struct list$1sNode$ph* o2_saved_45;
    struct sNode* it_46;
    struct sType* type_47;
    _Bool Value_48;
    struct CVALUE* come_value_49;
    struct sType* __dec_obj71;
    struct CVALUE* come_value2;
    char* __dec_obj72;
    struct sType* __dec_obj73;
    exp=(struct sNode*)come_increment_ref_count(self->exp);
    exps=(struct list$1sNode$ph*)come_increment_ref_count(self->exps);
    types=(struct list$1sType$ph*)come_increment_ref_count(self->types);
    default_exp=(struct sNode*)come_increment_ref_count(self->default_exp);
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "21obj.c", 481, "struct buffer*"))));
    Value=node_compile(exp,info);
    if(!Value) {
        __result_obj__0 = 0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    else {
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    buffer_append_format(buf,"_Generic((%s), ",come_value->c_value);
    result_type=((void*)0);
    if(default_exp) {
        n=0;
        for(o2_saved=(struct list$1sNode$ph*)come_increment_ref_count(exps),it=list$1sNode$ph_begin(o2_saved);!list$1sNode$ph_end(o2_saved);it=list$1sNode$ph_next(o2_saved)){
            type=(struct sType*)come_increment_ref_count(list$1sType$ph_operator_load_element(types,n));
            Value_40=node_compile(it,info);
            if(!Value_40) {
                __result_obj__0 = 0;
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__0;
            }
            else {
            }
            come_value_41=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj70=result_type,
            result_type=(struct sType*)come_increment_ref_count(come_value_41->type);
            come_call_finalizer(sType_finalize, __dec_obj70,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            buffer_append_format(buf,"%s: %s",((char*)(__right_value0=make_type_name_string(type,info,0,0,0))),come_value_41->c_value);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_format(buf,",");
            n++;
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_41, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        Value_42=node_compile(default_exp,info);
        if(!Value_42) {
            __result_obj__0 = 0;
            ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__0;
        }
        else {
        }
        come_value_43=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        buffer_append_format(buf,"default: %s",come_value_43->c_value);
        buffer_append_format(buf,")");
        come_call_finalizer(CVALUE_finalize, come_value_43, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        n_44=0;
        for(o2_saved_45=(struct list$1sNode$ph*)come_increment_ref_count(exps),it_46=list$1sNode$ph_begin(o2_saved_45);!list$1sNode$ph_end(o2_saved_45);it_46=list$1sNode$ph_next(o2_saved_45)){
            type_47=(struct sType*)come_increment_ref_count(list$1sType$ph_operator_load_element(types,n_44));
            Value_48=node_compile(it_46,info);
            if(!Value_48) {
                __result_obj__0 = 0;
                come_call_finalizer(sType_finalize, type_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_45, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__0;
            }
            else {
            }
            come_value_49=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj71=result_type,
            result_type=(struct sType*)come_increment_ref_count(come_value_49->type);
            come_call_finalizer(sType_finalize, __dec_obj71,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            buffer_append_format(buf,"%s: %s",((char*)(__right_value0=make_type_name_string(type_47,info,0,0,0))),come_value_49->c_value);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            if(n_44==list$1sNode$ph_length(exps)-1) {
                buffer_append_format(buf,")");
            }
            else {
                buffer_append_format(buf,",");
            }
            n_44++;
            come_call_finalizer(sType_finalize, type_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_49, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_45, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 548, "struct CVALUE*"))));
    __dec_obj72=come_value2->c_value,
    come_value2->c_value=(char*)come_increment_ref_count(buffer_to_string(buf));
    __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj73=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer(sType_finalize, __dec_obj73,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value2->var=((void*)0);
    add_come_last_code(info,"%s",come_value2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2));
    __result_obj__0 = 1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void sGeneric_finalize(struct sGeneric* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&self->types!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->exps!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->default_exp!=((void*)0)) {
        ((self->default_exp) ? self->default_exp = come_decrement_ref_count(self->default_exp, ((struct sNode*)self->default_exp)->finalize, ((struct sNode*)self->default_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct sType* default_value;
    struct sType* __result_obj__0;
    struct list_item$1sType$ph* it;
    int i;
    struct sType* default_value_38;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType*));
        __result_obj__0 = (struct sType*)come_increment_ref_count(default_value);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct sType*)come_increment_ref_count(it->item);
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_38,0,sizeof(struct sType*));
    __result_obj__0 = (struct sType*)come_increment_ref_count(default_value_38);
    come_call_finalizer(sType_finalize, default_value_38, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct sType* default_value;
    struct sType* __result_obj__0;
    struct list_item$1sType$ph* it;
    int i;
    struct sType* default_value_39;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType*));
        __result_obj__0 = (struct sType*)come_increment_ref_count(default_value);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct sType*)come_increment_ref_count(it->item);
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_39,0,sizeof(struct sType*));
    __result_obj__0 = (struct sType*)come_increment_ref_count(default_value_39);
    come_call_finalizer(sType_finalize, default_value_39, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self)
{
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    struct sType* __dec_obj74;
    struct sSizeOfNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj74=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj74,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sSizeOfNode*)come_increment_ref_count(self);
    come_call_finalizer(sSizeOfNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sSizeOfNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sSizeOfNode_kind(struct sSizeOfNode* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sSizeOfNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info)
{
    struct sType* type;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE* come_value;
    struct sType* type2;
    char* type_name;
    char* __dec_obj75;
    void* __right_value2 = (void*)0;
    struct sType* __exception_result_var_b7;
    struct sType* __exception_result_var_b8;
    struct sType* __dec_obj76;
    struct sType* __exception_result_var_b9;
    _Bool __result_obj__0;
    type=(struct sType*)come_increment_ref_count(self->type);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 580, "struct CVALUE*"))));
    type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(info->generics_type),info));
    type_name=(char*)come_increment_ref_count(make_type_name_string(type2,info,1,0,1));
    __dec_obj75=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("sizeof(%s)",type_name));
    __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj76=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 587, 8),__exception_result_var_b9=(come_push_stackframe("21obj.c", 587, 6),__exception_result_var_b7=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 587, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),0,info,0), come_pop_stackframe(), __exception_result_var_b7), come_pop_stackframe(), __exception_result_var_b9));
    come_call_finalizer(sType_finalize, __dec_obj76,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->type->mUnsigned=1;
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    __result_obj__0 = 1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__0;
}

static void sSizeOfNode_finalize(struct sSizeOfNode* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct sOffsetOf* sOffsetOf_initialize(struct sOffsetOf* self, struct sType* type, char* name, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    struct sType* __dec_obj77;
    char* __dec_obj78;
    struct sOffsetOf* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj77=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj77,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj78=self->name,
    self->name=(char*)come_increment_ref_count((char*)come_memdup(name, "21obj.c", 606, "char*"));
    __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__0 = (struct sOffsetOf*)come_increment_ref_count(self);
    come_call_finalizer(sOffsetOf_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sOffsetOf_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sOffsetOf_kind(struct sOffsetOf* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sOffsetOf"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sOffsetOf_compile(struct sOffsetOf* self, struct sInfo* info)
{
    struct sType* type;
    char* name;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE* come_value;
    struct sType* type2;
    char* type_name;
    char* __dec_obj79;
    struct sType* __dec_obj80;
    _Bool __result_obj__0;
    type=(struct sType*)come_increment_ref_count(self->type);
    name=(char*)come_increment_ref_count(self->name);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 619, "struct CVALUE*"))));
    type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(info->generics_type),info));
    type_name=(char*)come_increment_ref_count(make_type_name_string(type2,info,1,0,0));
    __dec_obj79=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("__builtin_offsetof(%s, %s)",type_name,name));
    __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj80=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(type2);
    come_call_finalizer(sType_finalize, __dec_obj80,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    __result_obj__0 = 1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__0;
}

static void sOffsetOf_finalize(struct sOffsetOf* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->name!=((void*)0)) {
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj81;
    struct sSizeOfExpNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj81=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj81 ? __dec_obj81 = come_decrement_ref_count(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sSizeOfExpNode*)come_increment_ref_count(self);
    come_call_finalizer(sSizeOfExpNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sSizeOfExpNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
    __result_obj__0 = (struct sSizeOfExpNode*)come_increment_ref_count(self);
    come_call_finalizer(sSizeOfExpNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sSizeOfExpNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sSizeOfExpNode_kind(struct sSizeOfExpNode* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sSizeOfExpNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info)
{
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE* come_value;
    void* __right_value1 = (void*)0;
    struct CVALUE* come_value2;
    char* __dec_obj82;
    void* __right_value2 = (void*)0;
    struct sType* __exception_result_var_b10;
    struct sType* __exception_result_var_b11;
    struct sType* __dec_obj83;
    struct sType* __exception_result_var_b12;
    exp=(struct sNode*)come_increment_ref_count(self->exp);
    Value=node_compile(exp,info);
    if(!Value) {
        __result_obj__0 = 0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__0;
    }
    else {
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 663, "struct CVALUE*"))));
    __dec_obj82=come_value2->c_value,
    come_value2->c_value=(char*)come_increment_ref_count(xsprintf("sizeof(%s)",come_value->c_value));
    __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj83=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 666, 11),__exception_result_var_b12=(come_push_stackframe("21obj.c", 666, 9),__exception_result_var_b10=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 666, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),0,info,0), come_pop_stackframe(), __exception_result_var_b10), come_pop_stackframe(), __exception_result_var_b12));
    come_call_finalizer(sType_finalize, __dec_obj83,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value2->type->mUnsigned=1;
    come_value2->var=((void*)0);
    add_come_last_code(info,"%s",come_value2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2));
    __result_obj__0 = 1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType* type, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    struct sType* __dec_obj84;
    struct sTypeOfNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj84=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj84,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sTypeOfNode*)come_increment_ref_count(self);
    come_call_finalizer(sTypeOfNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sTypeOfNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sTypeOfNode_kind(struct sTypeOfNode* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sTypeOfNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo* info)
{
    struct sType* type;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE* come_value;
    struct sType* type2;
    char* type_name;
    char* __dec_obj85;
    void* __right_value2 = (void*)0;
    struct sType* __exception_result_var_b13;
    struct sType* __exception_result_var_b14;
    struct sType* __dec_obj86;
    struct sType* __exception_result_var_b15;
    _Bool __result_obj__0;
    type=(struct sType*)come_increment_ref_count(self->type);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 696, "struct CVALUE*"))));
    type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(info->generics_type),info));
    type_name=(char*)come_increment_ref_count(make_type_name_string(type2,info,0,0,0));
    __dec_obj85=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",type_name));
    __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj86=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 703, 14),__exception_result_var_b15=(come_push_stackframe("21obj.c", 703, 12),__exception_result_var_b13=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 703, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),0,info,0), come_pop_stackframe(), __exception_result_var_b13), come_pop_stackframe(), __exception_result_var_b15));
    come_call_finalizer(sType_finalize, __dec_obj86,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    __result_obj__0 = 1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__0;
}

static void sTypeOfNode_finalize(struct sTypeOfNode* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj87;
    struct sTypeOfExpNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj87=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj87 ? __dec_obj87 = come_decrement_ref_count(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sTypeOfExpNode*)come_increment_ref_count(self);
    come_call_finalizer(sTypeOfExpNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sTypeOfExpNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sTypeOfExpNode_kind(struct sTypeOfExpNode* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sTypeOfExpNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo* info)
{
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE* come_value;
    struct sType* type;
    struct sType* type2;
    char* type_name;
    char* __dec_obj88;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sType* __exception_result_var_b16;
    struct sType* __exception_result_var_b17;
    struct sType* __dec_obj89;
    struct sType* __exception_result_var_b18;
    exp=(struct sNode*)come_increment_ref_count(self->exp);
    Value=node_compile(exp,info);
    if(!Value) {
        __result_obj__0 = 0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__0;
    }
    else {
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type=(struct sType*)come_increment_ref_count(sType_clone(come_value->type));
    type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(info->generics_type),info));
    type_name=(char*)come_increment_ref_count(make_type_name_string(type2,info,0,0,0));
    __dec_obj88=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",type_name));
    __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj89=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 745, 17),__exception_result_var_b18=(come_push_stackframe("21obj.c", 745, 15),__exception_result_var_b16=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 745, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),0,info,0), come_pop_stackframe(), __exception_result_var_b16), come_pop_stackframe(), __exception_result_var_b18));
    come_call_finalizer(sType_finalize, __dec_obj89,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    __result_obj__0 = 1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__0;
}

static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sDynamicTypeOf* sDynamicTypeOf_initialize(struct sDynamicTypeOf* self, struct sNode* exp, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj90;
    struct sDynamicTypeOf* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj90=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj90 ? __dec_obj90 = come_decrement_ref_count(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sDynamicTypeOf*)come_increment_ref_count(self);
    come_call_finalizer(sDynamicTypeOf_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sDynamicTypeOf_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sDynamicTypeOf_kind(struct sDynamicTypeOf* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sDynamicTypeOf"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sDynamicTypeOf_compile(struct sDynamicTypeOf* self, struct sInfo* info)
{
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE* come_value;
    void* __right_value1 = (void*)0;
    struct CVALUE* come_value2;
    char* __dec_obj91;
    void* __right_value2 = (void*)0;
    struct sType* __exception_result_var_b19;
    struct sType* __exception_result_var_b20;
    struct sType* __dec_obj92;
    struct sType* __exception_result_var_b21;
    struct CVALUE* come_value2_50;
    char* __dec_obj93;
    struct sType* __exception_result_var_b22;
    struct sType* __exception_result_var_b23;
    struct sType* __dec_obj94;
    struct sType* __exception_result_var_b24;
    exp=(struct sNode*)come_increment_ref_count(self->exp);
    Value=node_compile(exp,info);
    if(!Value) {
        __result_obj__0 = 0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__0;
    }
    else {
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    if(come_value->type->mPointerNum>0&&come_value->type->mHeap) {
        come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 781, "struct CVALUE*"))));
        __dec_obj91=come_value2->c_value,
        come_value2->c_value=(char*)come_increment_ref_count(xsprintf("come_dynamic_typeof(%s)",come_value->c_value));
        __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj92=come_value2->type,
        come_value2->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 784, 20),__exception_result_var_b21=(come_push_stackframe("21obj.c", 784, 18),__exception_result_var_b19=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 784, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),0,info,0), come_pop_stackframe(), __exception_result_var_b19), come_pop_stackframe(), __exception_result_var_b21));
        come_call_finalizer(sType_finalize, __dec_obj92,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value2->var=((void*)0);
        add_come_last_code(info,"%s",come_value2->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2));
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        come_value2_50=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 792, "struct CVALUE*"))));
        __dec_obj93=come_value2_50->c_value,
        come_value2_50->c_value=(char*)come_increment_ref_count(xsprintf("__builtin_string(\"NOT HEAP OBJECT\")"));
        __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj94=come_value2_50->type,
        come_value2_50->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 795, 23),__exception_result_var_b24=(come_push_stackframe("21obj.c", 795, 21),__exception_result_var_b22=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 795, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),0,info,0), come_pop_stackframe(), __exception_result_var_b22), come_pop_stackframe(), __exception_result_var_b24));
        come_call_finalizer(sType_finalize, __dec_obj94,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value2_50->var=((void*)0);
        add_come_last_code(info,"%s",come_value2_50->c_value);
        append_object_to_right_values(come_value2_50,(struct sType*)come_increment_ref_count(come_value2_50->type),info,0,((void*)0),((void*)0),((void*)0));
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_50));
        come_call_finalizer(CVALUE_finalize, come_value2_50, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = 1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void sDynamicTypeOf_finalize(struct sDynamicTypeOf* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    struct sType* __dec_obj95;
    struct sAlignOfNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj95=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj95,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sAlignOfNode*)come_increment_ref_count(self);
    come_call_finalizer(sAlignOfNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sAlignOfNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
    __result_obj__0 = (struct sAlignOfNode*)come_increment_ref_count(self);
    come_call_finalizer(sAlignOfNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sAlignOfNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sAlignOfNode_kind(struct sAlignOfNode* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sAlignOfNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info)
{
    struct sType* type;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE* come_value;
    struct sType* type2;
    char* type_name;
    char* __dec_obj96;
    void* __right_value2 = (void*)0;
    struct sType* __exception_result_var_b25;
    struct sType* __exception_result_var_b26;
    struct sType* __dec_obj97;
    struct sType* __exception_result_var_b27;
    _Bool __result_obj__0;
    type=(struct sType*)come_increment_ref_count(self->type);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 829, "struct CVALUE*"))));
    type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(info->generics_type),info));
    type_name=(char*)come_increment_ref_count(make_type_name_string(type2,info,0,0,0));
    __dec_obj96=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("_Alignof(%s)",type_name));
    __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj97=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 836, 26),__exception_result_var_b27=(come_push_stackframe("21obj.c", 836, 24),__exception_result_var_b25=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 836, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),0,info,0), come_pop_stackframe(), __exception_result_var_b25), come_pop_stackframe(), __exception_result_var_b27));
    come_call_finalizer(sType_finalize, __dec_obj97,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->type->mUnsigned=1;
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    __result_obj__0 = 1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__0;
}

static void sAlignOfNode_finalize(struct sAlignOfNode* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj98;
    struct sAlignOfExpNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj98=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj98 ? __dec_obj98 = come_decrement_ref_count(__dec_obj98, ((struct sNode*)__dec_obj98)->finalize, ((struct sNode*)__dec_obj98)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sAlignOfExpNode*)come_increment_ref_count(self);
    come_call_finalizer(sAlignOfExpNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sAlignOfExpNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sAlignOfExpNode_kind(struct sAlignOfExpNode* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sAlignOfExpNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info)
{
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE* come_value;
    void* __right_value1 = (void*)0;
    struct CVALUE* come_value2;
    char* __dec_obj99;
    void* __right_value2 = (void*)0;
    struct sType* __exception_result_var_b28;
    struct sType* __exception_result_var_b29;
    struct sType* __dec_obj100;
    struct sType* __exception_result_var_b30;
    exp=(struct sNode*)come_increment_ref_count(self->exp);
    Value=node_compile(exp,info);
    if(!Value) {
        __result_obj__0 = 0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__0;
    }
    else {
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 872, "struct CVALUE*"))));
    __dec_obj99=come_value2->c_value,
    come_value2->c_value=(char*)come_increment_ref_count(xsprintf("_AlignOf(%s)",come_value->c_value));
    __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj100=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 875, 29),__exception_result_var_b30=(come_push_stackframe("21obj.c", 875, 27),__exception_result_var_b28=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 875, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),0,info,0), come_pop_stackframe(), __exception_result_var_b28), come_pop_stackframe(), __exception_result_var_b30));
    come_call_finalizer(sType_finalize, __dec_obj100,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value2->type->mUnsigned=1;
    come_value2->var=((void*)0);
    add_come_last_code(info,"%s",come_value2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2));
    __result_obj__0 = 1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    struct sType* __dec_obj101;
    struct sAlignOfNode2* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj101=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj101,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sAlignOfNode2*)come_increment_ref_count(self);
    come_call_finalizer(sAlignOfNode2_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sAlignOfNode2_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sAlignOfNode2_kind(struct sAlignOfNode2* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sAlignOfNode2"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info)
{
    struct sType* type;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE* come_value;
    struct sType* type2;
    char* type_name;
    char* __dec_obj102;
    void* __right_value2 = (void*)0;
    struct sType* __exception_result_var_b31;
    struct sType* __exception_result_var_b32;
    struct sType* __dec_obj103;
    struct sType* __exception_result_var_b33;
    _Bool __result_obj__0;
    type=(struct sType*)come_increment_ref_count(self->type);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 905, "struct CVALUE*"))));
    type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(info->generics_type),info));
    type_name=(char*)come_increment_ref_count(make_type_name_string(type2,info,0,0,0));
    __dec_obj102=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("__alignof__(%s)",type_name));
    __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj103=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 912, 32),__exception_result_var_b33=(come_push_stackframe("21obj.c", 912, 30),__exception_result_var_b31=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 912, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),0,info,0), come_pop_stackframe(), __exception_result_var_b31), come_pop_stackframe(), __exception_result_var_b33));
    come_call_finalizer(sType_finalize, __dec_obj103,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->type->mUnsigned=1;
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    __result_obj__0 = 1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__0;
}

static void sAlignOfNode2_finalize(struct sAlignOfNode2* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj104;
    struct sAlignOfExpNode2* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj104=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj104 ? __dec_obj104 = come_decrement_ref_count(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sAlignOfExpNode2*)come_increment_ref_count(self);
    come_call_finalizer(sAlignOfExpNode2_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sAlignOfExpNode2_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sAlignOfExpNode2_kind(struct sAlignOfExpNode2* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sAlignOfExpNode2"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info)
{
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE* come_value;
    void* __right_value1 = (void*)0;
    struct CVALUE* come_value2;
    char* __dec_obj105;
    void* __right_value2 = (void*)0;
    struct sType* __exception_result_var_b34;
    struct sType* __exception_result_var_b35;
    struct sType* __dec_obj106;
    struct sType* __exception_result_var_b36;
    exp=(struct sNode*)come_increment_ref_count(self->exp);
    Value=node_compile(exp,info);
    if(!Value) {
        __result_obj__0 = 0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__0;
    }
    else {
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 948, "struct CVALUE*"))));
    __dec_obj105=come_value2->c_value,
    come_value2->c_value=(char*)come_increment_ref_count(xsprintf("__alignof__(%s)",come_value->c_value));
    __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj106=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 951, 35),__exception_result_var_b36=(come_push_stackframe("21obj.c", 951, 33),__exception_result_var_b34=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 951, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),0,info,0), come_pop_stackframe(), __exception_result_var_b34), come_pop_stackframe(), __exception_result_var_b36));
    come_call_finalizer(sType_finalize, __dec_obj106,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value2->type->mUnsigned=1;
    come_value2->var=((void*)0);
    add_come_last_code(info,"%s",come_value2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2));
    __result_obj__0 = 1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    struct sType* __dec_obj107;
    struct sAlignAsNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj107=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj107,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sAlignAsNode*)come_increment_ref_count(self);
    come_call_finalizer(sAlignAsNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sAlignAsNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sAlignAsNode_kind(struct sAlignAsNode* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sAlignAsNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info)
{
    struct sType* type;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE* come_value;
    struct sType* type2;
    char* type_name;
    char* __dec_obj108;
    void* __right_value2 = (void*)0;
    struct sType* __exception_result_var_b37;
    struct sType* __exception_result_var_b38;
    struct sType* __dec_obj109;
    struct sType* __exception_result_var_b39;
    _Bool __result_obj__0;
    type=(struct sType*)come_increment_ref_count(self->type);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 981, "struct CVALUE*"))));
    type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(info->generics_type),info));
    type_name=(char*)come_increment_ref_count(make_type_name_string(type2,info,0,0,0));
    __dec_obj108=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("_Alignas(%s)",type_name));
    __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj109=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 988, 38),__exception_result_var_b39=(come_push_stackframe("21obj.c", 988, 36),__exception_result_var_b37=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 988, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),0,info,0), come_pop_stackframe(), __exception_result_var_b37), come_pop_stackframe(), __exception_result_var_b39));
    come_call_finalizer(sType_finalize, __dec_obj109,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->type->mUnsigned=1;
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    __result_obj__0 = 1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__0;
}

static void sAlignAsNode_finalize(struct sAlignAsNode* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj110;
    struct sAlignAsExpNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj110=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj110 ? __dec_obj110 = come_decrement_ref_count(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sAlignAsExpNode*)come_increment_ref_count(self);
    come_call_finalizer(sAlignAsExpNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sAlignAsExpNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sAlignAsExpNode_kind(struct sAlignAsExpNode* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sAlignAsExpNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info)
{
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE* come_value;
    void* __right_value1 = (void*)0;
    struct CVALUE* come_value2;
    char* __dec_obj111;
    void* __right_value2 = (void*)0;
    struct sType* __exception_result_var_b40;
    struct sType* __exception_result_var_b41;
    struct sType* __dec_obj112;
    struct sType* __exception_result_var_b42;
    exp=(struct sNode*)come_increment_ref_count(self->exp);
    Value=node_compile(exp,info);
    if(!Value) {
        __result_obj__0 = 0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__0;
    }
    else {
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 1024, "struct CVALUE*"))));
    __dec_obj111=come_value2->c_value,
    come_value2->c_value=(char*)come_increment_ref_count(xsprintf("_Alignas(%s)",come_value->c_value));
    __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj112=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 1027, 41),__exception_result_var_b42=(come_push_stackframe("21obj.c", 1027, 39),__exception_result_var_b40=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 1027, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),0,info,0), come_pop_stackframe(), __exception_result_var_b40), come_pop_stackframe(), __exception_result_var_b42));
    come_call_finalizer(sType_finalize, __dec_obj112,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value2->type->mUnsigned=1;
    come_value2->var=((void*)0);
    add_come_last_code(info,"%s",come_value2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2));
    __result_obj__0 = 1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj113;
    struct sDeleteNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj113=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj113 ? __dec_obj113 = come_decrement_ref_count(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sDeleteNode*)come_increment_ref_count(self);
    come_call_finalizer(sDeleteNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sDeleteNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sDeleteNode_kind(struct sDeleteNode* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sDeleteNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info)
{
    struct sNode* node;
    _Bool Value;
    void* __right_value0 = (void*)0;
    struct CVALUE* come_value;
    _Bool __result_obj__0;
    node=self->node;
    Value=node_compile(node,info);
    if(!Value) {
        return 0;
    }
    else {
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    if(come_value->type->mPointerNum>0) {
        free_object((struct sType*)come_increment_ref_count(sType_clone(come_value->type)),come_value->c_value,0,0,info,0);
    }
    __result_obj__0 = 1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void sDeleteNode_finalize(struct sDeleteNode* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj114;
    struct sBorrowNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj114=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj114 ? __dec_obj114 = come_decrement_ref_count(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sBorrowNode*)come_increment_ref_count(self);
    come_call_finalizer(sBorrowNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sBorrowNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
    __result_obj__0 = (struct sBorrowNode*)come_increment_ref_count(self);
    come_call_finalizer(sBorrowNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sBorrowNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sBorrowNode_kind(struct sBorrowNode* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sBorrowNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info)
{
    struct sNode* node;
    _Bool Value;
    void* __right_value0 = (void*)0;
    struct CVALUE* come_value;
    struct sRightValueObject* right_value_objects;
    int right_value_id;
    _Bool __result_obj__0;
    node=self->node;
    Value=node_compile(node,info);
    if(!Value) {
        return 0;
    }
    else {
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    if(come_value->type->mPointerNum>0) {
        come_value->type->mHeap=0;
        right_value_objects=come_value->right_value_objects;
        if(right_value_objects) {
            right_value_id=right_value_objects->mID;
            if(right_value_id!=-1) {
                remove_object_from_right_values(right_value_id,info);
            }
        }
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    __result_obj__0 = 1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void sBorrowNode_finalize(struct sBorrowNode* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj115;
    struct sCloneNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj115=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj115 ? __dec_obj115 = come_decrement_ref_count(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sCloneNode*)come_increment_ref_count(self);
    come_call_finalizer(sCloneNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sCloneNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sCloneNode_kind(struct sCloneNode* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sCloneNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info)
{
    struct sNode* node;
    _Bool Value;
    void* __right_value0 = (void*)0;
    struct CVALUE* left_value;
    struct sType* left_type;
    void* __right_value1 = (void*)0;
    struct CVALUE* come_value;
    struct tuple2$2sType$phchar$ph* multiple_assign_var6
;    struct sType* result_type=0;
    char* c_value=0;
    char* __dec_obj116;
    struct sType* __dec_obj117;
    _Bool __result_obj__0;
    node=self->node;
    Value=node_compile(node,info);
    if(!Value) {
        return 0;
    }
    else {
    }
    left_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    left_type=(struct sType*)come_increment_ref_count(sType_clone(left_value->type));
    if(left_type->mPointerNum==1&&string_operator_equals(left_type->mClass->mName,"void")&&left_type->mHeap==0) {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value));
    }
    else if(left_type->mPointerNum==0) {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value));
    }
    else if(left_type->mPointerNum>0) {
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 1149, "struct CVALUE*"))));
        multiple_assign_var6=((struct tuple2$2sType$phchar$ph*)(__right_value0=(clone_object)((struct sType*)come_increment_ref_count(left_type),left_value->c_value,info)));
        result_type=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
        c_value=(char*)come_increment_ref_count(multiple_assign_var6->v2);
        come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj116=come_value->c_value,
        come_value->c_value=(char*)come_increment_ref_count(c_value);
        __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj117=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
        come_call_finalizer(sType_finalize, __dec_obj117,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value->type->mHeap=1;
        come_value->var=((void*)0);
        append_object_to_right_values(come_value,(struct sType*)come_increment_ref_count(left_type),info,0,((void*)0),((void*)0),((void*)0));
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __result_obj__0 = 1;
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void sCloneNode_finalize(struct sCloneNode* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self)
{
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj118;
    struct sDupeNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj118=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj118 ? __dec_obj118 = come_decrement_ref_count(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sDupeNode*)come_increment_ref_count(self);
    come_call_finalizer(sDupeNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sDupeNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sDupeNode_kind(struct sDupeNode* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sDupeNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info)
{
    struct sNode* node;
    _Bool Value;
    void* __right_value0 = (void*)0;
    struct CVALUE* left_value;
    struct sType* left_type;
    void* __right_value1 = (void*)0;
    struct CVALUE* come_value;
    struct tuple2$2sType$phchar$ph* multiple_assign_var7
;    struct sType* result_type=0;
    char* c_value=0;
    char* __dec_obj119;
    struct sType* __dec_obj120;
    _Bool __result_obj__0;
    node=self->node;
    Value=node_compile(node,info);
    if(!Value) {
        return 0;
    }
    else {
    }
    left_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    left_type=(struct sType*)come_increment_ref_count(sType_clone(left_value->type));
    if(left_type->mPointerNum==0) {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value));
    }
    else if(left_type->mPointerNum>0&&left_type->mHeap==0) {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value));
    }
    else if(left_type->mPointerNum>0) {
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 1199, "struct CVALUE*"))));
        multiple_assign_var7=((struct tuple2$2sType$phchar$ph*)(__right_value0=(clone_object)((struct sType*)come_increment_ref_count(left_type),left_value->c_value,info)));
        result_type=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        c_value=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj119=come_value->c_value,
        come_value->c_value=(char*)come_increment_ref_count(c_value);
        __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj120=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
        come_call_finalizer(sType_finalize, __dec_obj120,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value->type->mHeap=1;
        come_value->var=((void*)0);
        append_object_to_right_values(come_value,(struct sType*)come_increment_ref_count(left_type),info,0,((void*)0),((void*)0),((void*)0));
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __result_obj__0 = 1;
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void sDupeNode_finalize(struct sDupeNode* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj121;
    struct sDummyHeapNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj121=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj121 ? __dec_obj121 = come_decrement_ref_count(__dec_obj121, ((struct sNode*)__dec_obj121)->finalize, ((struct sNode*)__dec_obj121)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sDummyHeapNode*)come_increment_ref_count(self);
    come_call_finalizer(sDummyHeapNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sDummyHeapNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sDummyHeapNode_kind(struct sDummyHeapNode* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sDummyHeapNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info)
{
    struct sNode* node;
    _Bool Value;
    void* __right_value0 = (void*)0;
    struct CVALUE* come_value;
    _Bool __result_obj__0;
    node=self->node;
    Value=node_compile(node,info);
    if(!Value) {
        return 0;
    }
    else {
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    if(come_value->type->mPointerNum>0) {
        come_value->type->mHeap=1;
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    __result_obj__0 = 1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void sDummyHeapNode_finalize(struct sDummyHeapNode* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj122;
    struct sGCIncNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj122=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj122 ? __dec_obj122 = come_decrement_ref_count(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sGCIncNode*)come_increment_ref_count(self);
    come_call_finalizer(sGCIncNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sGCIncNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sGCIncNode_kind(struct sGCIncNode* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sGCIncNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info)
{
    struct sNode* node;
    _Bool Value;
    void* __right_value0 = (void*)0;
    struct CVALUE* come_value;
    struct sType* type;
    char* type_name;
    char* __dec_obj123;
    _Bool __result_obj__0;
    node=self->node;
    Value=node_compile(node,info);
    if(!Value) {
        return 0;
    }
    else {
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type=come_value->type;
    if(come_value->type->mHeap&&come_value->type->mPointerNum>0) {
        type_name=(char*)come_increment_ref_count(make_type_name_string(type,info,0,0,0));
        __dec_obj123=come_value->c_value,
        come_value->c_value=(char*)come_increment_ref_count(increment_ref_count_object(come_value->type,come_value->c_value,info));
        __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0, (void*)0);
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    __result_obj__0 = 1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void sGCIncNode_finalize(struct sGCIncNode* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj124;
    struct sGCDecNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj124=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj124 ? __dec_obj124 = come_decrement_ref_count(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sGCDecNode*)come_increment_ref_count(self);
    come_call_finalizer(sGCDecNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sGCDecNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sGCDecNode_kind(struct sGCDecNode* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sGCDecNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info)
{
    struct sNode* node;
    _Bool Value;
    void* __right_value0 = (void*)0;
    struct CVALUE* come_value;
    struct sType* type;
    _Bool __result_obj__0;
    node=self->node;
    Value=node_compile(node,info);
    if(!Value) {
        return 0;
    }
    else {
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type=(struct sType*)come_increment_ref_count(come_value->type);
    if(come_value->type->mHeap&&come_value->type->mPointerNum>0) {
        decrement_ref_count_object((struct sType*)come_increment_ref_count(type),come_value->c_value,info,0);
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    __result_obj__0 = 1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void sGCDecNode_finalize(struct sGCDecNode* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    struct sType* __dec_obj125;
    struct sIsHeap* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj125=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj125,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sIsHeap*)come_increment_ref_count(self);
    come_call_finalizer(sIsHeap_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sIsHeap_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sIsHeap_kind(struct sIsHeap* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sIsHeap"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info)
{
    struct sType* node;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE* come_value;
    char* __dec_obj126;
    void* __right_value2 = (void*)0;
    struct sType* __exception_result_var_b43;
    struct sType* __exception_result_var_b44;
    struct sType* __dec_obj127;
    struct sType* __exception_result_var_b45;
    struct CVALUE* come_value_51;
    char* __dec_obj128;
    struct sType* __exception_result_var_b46;
    struct sType* __exception_result_var_b47;
    struct sType* __dec_obj129;
    struct sType* __exception_result_var_b48;
    node=self->type;
    if(self->type->mHeap) {
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 1342, "struct CVALUE*"))));
        __dec_obj126=come_value->c_value,
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("1"));
        __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj127=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 1345, 44),__exception_result_var_b45=(come_push_stackframe("21obj.c", 1345, 42),__exception_result_var_b43=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 1345, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),0,info,0), come_pop_stackframe(), __exception_result_var_b43), come_pop_stackframe(), __exception_result_var_b45));
        come_call_finalizer(sType_finalize, __dec_obj127,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
        add_come_last_code(info,"%s",come_value->c_value);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        come_value_51=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 1353, "struct CVALUE*"))));
        __dec_obj128=come_value_51->c_value,
        come_value_51->c_value=(char*)come_increment_ref_count(xsprintf("0"));
        __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj129=come_value_51->type,
        come_value_51->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 1356, 47),__exception_result_var_b48=(come_push_stackframe("21obj.c", 1356, 45),__exception_result_var_b46=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 1356, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),0,info,0), come_pop_stackframe(), __exception_result_var_b46), come_pop_stackframe(), __exception_result_var_b48));
        come_call_finalizer(sType_finalize, __dec_obj129,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value_51->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_51));
        add_come_last_code(info,"%s",come_value_51->c_value);
        come_call_finalizer(CVALUE_finalize, come_value_51, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    return 1;
}

static void sIsHeap_finalize(struct sIsHeap* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType* type, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    struct sType* __dec_obj130;
    struct sIsPointer* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj130=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj130,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sIsPointer*)come_increment_ref_count(self);
    come_call_finalizer(sIsPointer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sIsPointer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sIsPointer_kind(struct sIsPointer* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sIsPointer"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sIsPointer_compile(struct sIsPointer* self, struct sInfo* info)
{
    struct sType* node;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE* come_value;
    char* __dec_obj131;
    void* __right_value2 = (void*)0;
    struct sType* __exception_result_var_b49;
    struct sType* __exception_result_var_b50;
    struct sType* __dec_obj132;
    struct sType* __exception_result_var_b51;
    struct CVALUE* come_value_52;
    char* __dec_obj133;
    struct sType* __exception_result_var_b52;
    struct sType* __exception_result_var_b53;
    struct sType* __dec_obj134;
    struct sType* __exception_result_var_b54;
    node=self->type;
    if(self->type->mPointerNum>0) {
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 1387, "struct CVALUE*"))));
        __dec_obj131=come_value->c_value,
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("1"));
        __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj132=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 1390, 50),__exception_result_var_b51=(come_push_stackframe("21obj.c", 1390, 48),__exception_result_var_b49=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 1390, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),0,info,0), come_pop_stackframe(), __exception_result_var_b49), come_pop_stackframe(), __exception_result_var_b51));
        come_call_finalizer(sType_finalize, __dec_obj132,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
        add_come_last_code(info,"%s",come_value->c_value);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        come_value_52=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 1398, "struct CVALUE*"))));
        __dec_obj133=come_value_52->c_value,
        come_value_52->c_value=(char*)come_increment_ref_count(xsprintf("0"));
        __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj134=come_value_52->type,
        come_value_52->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 1401, 53),__exception_result_var_b54=(come_push_stackframe("21obj.c", 1401, 51),__exception_result_var_b52=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 1401, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),0,info,0), come_pop_stackframe(), __exception_result_var_b52), come_pop_stackframe(), __exception_result_var_b54));
        come_call_finalizer(sType_finalize, __dec_obj134,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value_52->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_52));
        add_come_last_code(info,"%s",come_value_52->c_value);
        come_call_finalizer(CVALUE_finalize, come_value_52, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    return 1;
}

static void sIsPointer_finalize(struct sIsPointer* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct sGCDecNoFreeNode* sGCDecNoFreeNode_initialize(struct sGCDecNoFreeNode* self, struct sNode* node, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj135;
    struct sGCDecNoFreeNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj135=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj135 ? __dec_obj135 = come_decrement_ref_count(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sGCDecNoFreeNode*)come_increment_ref_count(self);
    come_call_finalizer(sGCDecNoFreeNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sGCDecNoFreeNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sGCDecNoFreeNode_kind(struct sGCDecNoFreeNode* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sGCDecNoFreeNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sGCDecNoFreeNode_compile(struct sGCDecNoFreeNode* self, struct sInfo* info)
{
    struct sNode* node;
    _Bool Value;
    void* __right_value0 = (void*)0;
    struct CVALUE* come_value;
    struct sType* type;
    _Bool __result_obj__0;
    node=self->node;
    Value=node_compile(node,info);
    if(!Value) {
        return 0;
    }
    else {
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type=(struct sType*)come_increment_ref_count(come_value->type);
    if(type->mHeap&&type->mPointerNum>0) {
        decrement_ref_count_object((struct sType*)come_increment_ref_count(type),come_value->c_value,info,1);
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    __result_obj__0 = 1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void sGCDecNoFreeNode_finalize(struct sGCDecNoFreeNode* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    struct tuple3$3sType$phchar$ph_Bool$* __exception_result_var_b55;
    struct tuple3$3sType$phchar$ph_Bool$* __exception_result_var_b56;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var8
;    struct sType* type=0;
    char* name=0;
    _Bool err=0;
    struct sNode* exp;
    int __exception_result_var_b57;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value3;
    struct sNewNode* _inf_obj_value3;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    struct sNode* _inf_value4;
    struct sNewNode* _inf_obj_value4;
    struct sNode* obj;
    char* fun_name;
    struct list$1tuple2$2char$phsNode$ph$ph* initializer;
    char* word;
    _Bool no_comma;
    struct sNode* exp_55;
    struct sNode* exp_56;
    struct sNode* _inf_value5;
    struct sNewNode* _inf_obj_value5;
    struct sNode* _inf_value6;
    struct sNewNode* _inf_obj_value6;
    struct sNode* _inf_value7;
    struct sTrueNode* _inf_obj_value7;
    struct sNode* _inf_value8;
    struct sFalseNode* _inf_obj_value8;
    struct sNode* node;
    struct sNode* _inf_value9;
    struct sDeleteNode* _inf_obj_value9;
    struct sNode* node_57;
    struct sNode* _inf_value10;
    struct sBorrowNode* _inf_obj_value10;
    struct sNode* node_58;
    struct sNode* _inf_value11;
    struct sCloneNode* _inf_obj_value11;
    struct sNode* node_59;
    struct sNode* _inf_value12;
    struct sDupeNode* _inf_obj_value12;
    struct sNode* node_60;
    struct sNode* _inf_value13;
    struct sDummyHeapNode* _inf_obj_value13;
    struct sNode* node_61;
    int __exception_result_var_b58;
    struct sNode* _inf_value14;
    struct sGCIncNode* _inf_obj_value14;
    struct sNode* node_62;
    int __exception_result_var_b59;
    struct sNode* _inf_value15;
    struct sGCDecNode* _inf_obj_value15;
    struct sNode* node_63;
    int __exception_result_var_b60;
    struct sNode* _inf_value16;
    struct sGCDecNoFreeNode* _inf_obj_value16;
    struct sNode* node_64;
    int __exception_result_var_b61;
    struct sNode* _inf_value17;
    struct sGCDecNoFreeNode* _inf_obj_value17;
    struct tuple3$3sType$phchar$ph_Bool$* __exception_result_var_b62;
    struct tuple3$3sType$phchar$ph_Bool$* __exception_result_var_b63;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var9
;    struct sType* param_type=0;
    char* param_name=0;
    _Bool err_65=0;
    struct sType* type2;
    int __exception_result_var_b64;
    struct sNode* _inf_value18;
    struct sIsHeap* _inf_obj_value18;
    struct tuple3$3sType$phchar$ph_Bool$* __exception_result_var_b65;
    struct tuple3$3sType$phchar$ph_Bool$* __exception_result_var_b66;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var10
;    struct sType* param_type_66=0;
    char* param_name_67=0;
    _Bool err_68=0;
    struct sType* type2_69;
    int __exception_result_var_b67;
    struct sNode* _inf_value19;
    struct sIsPointer* _inf_obj_value19;
    _Bool come_c;
    struct sNode* node_70;
    _Bool no_comma_71;
    struct sNode* exp_72;
    int __exception_result_var_b68;
    struct list$1sType$ph* types;
    struct list$1sNode$ph* exps;
    struct sNode* default_exp;
    int __exception_result_var_b69;
    _Bool no_comma_73;
    struct sNode* __dec_obj167;
    struct tuple3$3sType$phchar$ph_Bool$* __exception_result_var_b70;
    struct tuple3$3sType$phchar$ph_Bool$* __exception_result_var_b71;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var11
;    struct sType* type_74=0;
    char* name_75=0;
    _Bool err_76=0;
    int __exception_result_var_b72;
    _Bool no_comma_77;
    struct sNode* node_78;
    struct sNode* _inf_value20;
    struct sGeneric* _inf_obj_value20;
    int __exception_result_var_b73;
    struct tuple3$3sType$phchar$ph_Bool$* __exception_result_var_b74;
    struct tuple3$3sType$phchar$ph_Bool$* __exception_result_var_b75;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var12
;    struct sType* type_79=0;
    char* name_80=0;
    _Bool err_81=0;
    int __exception_result_var_b76;
    char* word_82;
    int __exception_result_var_b77;
    struct sNode* _inf_value21;
    struct sOffsetOf* _inf_obj_value21;
    _Bool paren;
    _Bool is_type_name_flag;
    char* p;
    int sline;
    char* word_83;
    struct tuple3$3sType$phchar$ph_Bool$* __exception_result_var_b78;
    struct tuple3$3sType$phchar$ph_Bool$* __exception_result_var_b79;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var13
;    struct sType* type_84=0;
    char* name_85=0;
    _Bool err_86=0;
    struct sNode* _inf_value22;
    struct sSizeOfNode* _inf_obj_value22;
    struct sNode* exp_87;
    _Bool no_comma_88;
    struct sNode* __dec_obj178;
    struct sNode* __dec_obj179;
    struct sNode* _inf_value23;
    struct sSizeOfExpNode* _inf_obj_value23;
    _Bool paren_89;
    struct sNode* exp_90;
    _Bool no_comma_91;
    struct sNode* __dec_obj182;
    struct sNode* __dec_obj183;
    struct sNode* _inf_value24;
    struct sDynamicTypeOf* _inf_obj_value24;
    _Bool paren_92;
    _Bool is_type_name_flag_93;
    char* p_94;
    int sline_95;
    char* word_96;
    struct tuple3$3sType$phchar$ph_Bool$* __exception_result_var_b80;
    struct tuple3$3sType$phchar$ph_Bool$* __exception_result_var_b81;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var14
;    struct sType* type_97=0;
    char* name_98=0;
    _Bool err_99=0;
    struct sNode* _inf_value25;
    struct sAlignOfNode* _inf_obj_value25;
    struct sNode* exp_100;
    _Bool no_comma_101;
    struct sNode* __dec_obj188;
    struct sNode* __dec_obj189;
    struct sNode* _inf_value26;
    struct sAlignOfExpNode* _inf_obj_value26;
    _Bool paren_102;
    _Bool is_type_name_flag_103;
    char* p_104;
    int sline_105;
    char* word_106;
    struct tuple3$3sType$phchar$ph_Bool$* __exception_result_var_b82;
    struct tuple3$3sType$phchar$ph_Bool$* __exception_result_var_b83;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var15
;    struct sType* type_107=0;
    char* name_108=0;
    _Bool err_109=0;
    struct sNode* _inf_value27;
    struct sAlignOfNode2* _inf_obj_value27;
    struct sNode* exp_110;
    _Bool no_comma_111;
    struct sNode* __dec_obj194;
    struct sNode* __dec_obj195;
    struct sNode* _inf_value28;
    struct sAlignOfExpNode2* _inf_obj_value28;
    memset(&exp_87, 0, sizeof(exp_87));
    memset(&exp_90, 0, sizeof(exp_90));
    memset(&exp_100, 0, sizeof(exp_100));
    memset(&exp_110, 0, sizeof(exp_110));
    if(!gComeC&&charp_operator_equals(buf,"new")) {
        multiple_assign_var8=(come_push_stackframe("21obj.c", 1452, 55),__exception_result_var_b56=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,0,1,0))), come_pop_stackframe(), __exception_result_var_b56);
        type=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err=multiple_assign_var8->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(!err) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        if(*info->p==40) {
            if(type->mClass->mNumber) {
                info->p++;
                skip_spaces_and_lf(info);
                exp=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
                (come_push_stackframe("21obj.c", 1464, 56),__exception_result_var_b57=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b57);
                _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1466, "struct sNode");
                _inf_obj_value3=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value1=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc_v2(1, sizeof(struct sNewNode)*(1), "21obj.c", 1466, "struct sNewNode*")),(struct sType*)come_increment_ref_count(type),((void*)0),(struct sNode*)come_increment_ref_count(exp),info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sNewNode_finalize;
                _inf_value3->clone=(void*)sNewNode_clone;
                _inf_value3->compile=(void*)sNewNode_compile;
                _inf_value3->sline=(void*)sNodeBase_sline;
                _inf_value3->sline_real=(void*)sNodeBase_sline_real;
                _inf_value3->sname=(void*)sNodeBase_sname;
                _inf_value3->terminated=(void*)sNodeBase_terminated;
                _inf_value3->kind=(void*)sNewNode_kind;
                _inf_value3->no_mutex=(void*)sNodeBase_no_mutex;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value3)));
                ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sNewNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__0;
                ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            else {
                _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1469, "struct sNode");
                _inf_obj_value4=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value1=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc_v2(1, sizeof(struct sNewNode)*(1), "21obj.c", 1469, "struct sNewNode*")),(struct sType*)come_increment_ref_count(type),((void*)0),((void*)0),info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sNewNode_finalize;
                _inf_value4->clone=(void*)sNewNode_clone;
                _inf_value4->compile=(void*)sNewNode_compile;
                _inf_value4->sline=(void*)sNodeBase_sline;
                _inf_value4->sline_real=(void*)sNodeBase_sline_real;
                _inf_value4->sname=(void*)sNodeBase_sname;
                _inf_value4->terminated=(void*)sNodeBase_terminated;
                _inf_value4->kind=(void*)sNewNode_kind;
                _inf_value4->no_mutex=(void*)sNodeBase_no_mutex;
                obj=(struct sNode*)come_increment_ref_count(_inf_value4);
                come_call_finalizer(sNewNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                fun_name=(char*)come_increment_ref_count(__builtin_string("initialize"));
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value1=parse_method_call_v20((struct sNode*)come_increment_ref_count(sNode_clone(obj)),(char*)come_increment_ref_count(fun_name),info))));
                ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
                ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0):(void*)0);
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__0;
                ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        else if(*info->p==123) {
            info->p++;
            skip_spaces_and_lf(info);
            initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "21obj.c", 1479, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
            while(1) {
                word=(char*)come_increment_ref_count(parse_word(0,info));
                if(*info->p==58) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    no_comma=info->no_comma;
                    info->no_comma=1;
                    exp_55=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
                    info->no_comma=no_comma;
                    list$1tuple2$2char$phsNode$ph$ph_add(initializer,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "21obj.c", 1493, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(word),(struct sNode*)come_increment_ref_count(exp_55))));
                    ((exp_55) ? exp_55 = come_decrement_ref_count(exp_55, ((struct sNode*)exp_55)->finalize, ((struct sNode*)exp_55)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                }
                else if(*info->p==44) {
                    exp_56=(struct sNode*)come_increment_ref_count(create_load_var(word,info));
                    list$1tuple2$2char$phsNode$ph$ph_add(initializer,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "21obj.c", 1498, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(word),(struct sNode*)come_increment_ref_count(exp_56))));
                    ((exp_56) ? exp_56 = come_decrement_ref_count(exp_56, ((struct sNode*)exp_56)->finalize, ((struct sNode*)exp_56)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                }
                else {
                    err_msg(info,"invalid character(21) %c",*info->p);
                    exit(2);
                }
                if(*info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(*info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
                    break;
                }
                else {
                    err_msg(info,"invalid character(30) %c",*info->p);
                    exit(2);
                }
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1519, "struct sNode");
            _inf_obj_value5=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value1=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc_v2(1, sizeof(struct sNewNode)*(1), "21obj.c", 1519, "struct sNewNode*")),(struct sType*)come_increment_ref_count(type),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(initializer),((void*)0),info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sNewNode_finalize;
            _inf_value5->clone=(void*)sNewNode_clone;
            _inf_value5->compile=(void*)sNewNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sNewNode_kind;
            _inf_value5->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value5)));
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sNewNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1522, "struct sNode");
            _inf_obj_value6=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value1=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc_v2(1, sizeof(struct sNewNode)*(1), "21obj.c", 1522, "struct sNewNode*")),(struct sType*)come_increment_ref_count(type),((void*)0),((void*)0),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sNewNode_finalize;
            _inf_value6->clone=(void*)sNewNode_clone;
            _inf_value6->compile=(void*)sNewNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sNewNode_kind;
            _inf_value6->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value6)));
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sNewNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(!gComeC&&charp_operator_equals(buf,"true")) {
        _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1526, "struct sNode");
        _inf_obj_value7=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(__right_value1=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc_v2(1, sizeof(struct sTrueNode)*(1), "21obj.c", 1526, "struct sTrueNode*")),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sTrueNode_finalize;
        _inf_value7->clone=(void*)sTrueNode_clone;
        _inf_value7->compile=(void*)sTrueNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sTrueNode_kind;
        _inf_value7->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value7)));
        come_call_finalizer(sTrueNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
    }
    else if(!gComeC&&charp_operator_equals(buf,"false")) {
        _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1529, "struct sNode");
        _inf_obj_value8=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(__right_value1=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc_v2(1, sizeof(struct sFalseNode)*(1), "21obj.c", 1529, "struct sFalseNode*")),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sFalseNode_finalize;
        _inf_value8->clone=(void*)sFalseNode_clone;
        _inf_value8->compile=(void*)sFalseNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sFalseNode_kind;
        _inf_value8->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value8)));
        come_call_finalizer(sFalseNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
    }
    else if(!gComeC&&charp_operator_equals(buf,"delete")) {
        node=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
        _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1534, "struct sNode");
        _inf_obj_value9=(struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)(__right_value1=sDeleteNode_initialize((struct sDeleteNode*)come_increment_ref_count((struct sDeleteNode*)come_calloc_v2(1, sizeof(struct sDeleteNode)*(1), "21obj.c", 1534, "struct sDeleteNode*")),(struct sNode*)come_increment_ref_count(node),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sDeleteNode_finalize;
        _inf_value9->clone=(void*)sDeleteNode_clone;
        _inf_value9->compile=(void*)sDeleteNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sDeleteNode_kind;
        _inf_value9->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value9)));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sDeleteNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(buf,"borrow")) {
        node_57=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
        _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1539, "struct sNode");
        _inf_obj_value10=(struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)(__right_value1=sBorrowNode_initialize((struct sBorrowNode*)come_increment_ref_count((struct sBorrowNode*)come_calloc_v2(1, sizeof(struct sBorrowNode)*(1), "21obj.c", 1539, "struct sBorrowNode*")),(struct sNode*)come_increment_ref_count(node_57),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sBorrowNode_finalize;
        _inf_value10->clone=(void*)sBorrowNode_clone;
        _inf_value10->compile=(void*)sBorrowNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sBorrowNode_kind;
        _inf_value10->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value10)));
        ((node_57) ? node_57 = come_decrement_ref_count(node_57, ((struct sNode*)node_57)->finalize, ((struct sNode*)node_57)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sBorrowNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node_57) ? node_57 = come_decrement_ref_count(node_57, ((struct sNode*)node_57)->finalize, ((struct sNode*)node_57)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(buf,"clone")) {
        node_58=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
        _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1544, "struct sNode");
        _inf_obj_value11=(struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)(__right_value1=sCloneNode_initialize((struct sCloneNode*)come_increment_ref_count((struct sCloneNode*)come_calloc_v2(1, sizeof(struct sCloneNode)*(1), "21obj.c", 1544, "struct sCloneNode*")),(struct sNode*)come_increment_ref_count(node_58),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sCloneNode_finalize;
        _inf_value11->clone=(void*)sCloneNode_clone;
        _inf_value11->compile=(void*)sCloneNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sCloneNode_kind;
        _inf_value11->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value11)));
        ((node_58) ? node_58 = come_decrement_ref_count(node_58, ((struct sNode*)node_58)->finalize, ((struct sNode*)node_58)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sCloneNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node_58) ? node_58 = come_decrement_ref_count(node_58, ((struct sNode*)node_58)->finalize, ((struct sNode*)node_58)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(buf,"dupe")) {
        node_59=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
        _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1549, "struct sNode");
        _inf_obj_value12=(struct sDupeNode*)come_increment_ref_count(((struct sDupeNode*)(__right_value1=sDupeNode_initialize((struct sDupeNode*)come_increment_ref_count((struct sDupeNode*)come_calloc_v2(1, sizeof(struct sDupeNode)*(1), "21obj.c", 1549, "struct sDupeNode*")),(struct sNode*)come_increment_ref_count(node_59),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sDupeNode_finalize;
        _inf_value12->clone=(void*)sDupeNode_clone;
        _inf_value12->compile=(void*)sDupeNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sDupeNode_kind;
        _inf_value12->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value12)));
        ((node_59) ? node_59 = come_decrement_ref_count(node_59, ((struct sNode*)node_59)->finalize, ((struct sNode*)node_59)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sDupeNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node_59) ? node_59 = come_decrement_ref_count(node_59, ((struct sNode*)node_59)->finalize, ((struct sNode*)node_59)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(buf,"dummy_heap")) {
        node_60=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
        _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1554, "struct sNode");
        _inf_obj_value13=(struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)(__right_value1=sDummyHeapNode_initialize((struct sDummyHeapNode*)come_increment_ref_count((struct sDummyHeapNode*)come_calloc_v2(1, sizeof(struct sDummyHeapNode)*(1), "21obj.c", 1554, "struct sDummyHeapNode*")),(struct sNode*)come_increment_ref_count(node_60),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sDummyHeapNode_finalize;
        _inf_value13->clone=(void*)sDummyHeapNode_clone;
        _inf_value13->compile=(void*)sDummyHeapNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sDummyHeapNode_kind;
        _inf_value13->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value13)));
        ((node_60) ? node_60 = come_decrement_ref_count(node_60, ((struct sNode*)node_60)->finalize, ((struct sNode*)node_60)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sDummyHeapNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node_60) ? node_60 = come_decrement_ref_count(node_60, ((struct sNode*)node_60)->finalize, ((struct sNode*)node_60)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(buf,"gc_inc")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_61=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
        (come_push_stackframe("21obj.c", 1562, 57),__exception_result_var_b58=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b58);
        _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1564, "struct sNode");
        _inf_obj_value14=(struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)(__right_value1=sGCIncNode_initialize((struct sGCIncNode*)come_increment_ref_count((struct sGCIncNode*)come_calloc_v2(1, sizeof(struct sGCIncNode)*(1), "21obj.c", 1564, "struct sGCIncNode*")),(struct sNode*)come_increment_ref_count(node_61),info))));
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sGCIncNode_finalize;
        _inf_value14->clone=(void*)sGCIncNode_clone;
        _inf_value14->compile=(void*)sGCIncNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sline_real=(void*)sNodeBase_sline_real;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sGCIncNode_kind;
        _inf_value14->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value14)));
        ((node_61) ? node_61 = come_decrement_ref_count(node_61, ((struct sNode*)node_61)->finalize, ((struct sNode*)node_61)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sGCIncNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node_61) ? node_61 = come_decrement_ref_count(node_61, ((struct sNode*)node_61)->finalize, ((struct sNode*)node_61)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(buf,"gc_dec")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_62=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
        (come_push_stackframe("21obj.c", 1572, 58),__exception_result_var_b59=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b59);
        _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1574, "struct sNode");
        _inf_obj_value15=(struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)(__right_value1=sGCDecNode_initialize((struct sGCDecNode*)come_increment_ref_count((struct sGCDecNode*)come_calloc_v2(1, sizeof(struct sGCDecNode)*(1), "21obj.c", 1574, "struct sGCDecNode*")),(struct sNode*)come_increment_ref_count(node_62),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sGCDecNode_finalize;
        _inf_value15->clone=(void*)sGCDecNode_clone;
        _inf_value15->compile=(void*)sGCDecNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sline_real=(void*)sNodeBase_sline_real;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sGCDecNode_kind;
        _inf_value15->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value15)));
        ((node_62) ? node_62 = come_decrement_ref_count(node_62, ((struct sNode*)node_62)->finalize, ((struct sNode*)node_62)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sGCDecNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node_62) ? node_62 = come_decrement_ref_count(node_62, ((struct sNode*)node_62)->finalize, ((struct sNode*)node_62)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(buf,"gc_dec_nofree")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_63=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
        (come_push_stackframe("21obj.c", 1582, 59),__exception_result_var_b60=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b60);
        _inf_value16=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1584, "struct sNode");
        _inf_obj_value16=(struct sGCDecNoFreeNode*)come_increment_ref_count(((struct sGCDecNoFreeNode*)(__right_value1=sGCDecNoFreeNode_initialize((struct sGCDecNoFreeNode*)come_increment_ref_count((struct sGCDecNoFreeNode*)come_calloc_v2(1, sizeof(struct sGCDecNoFreeNode)*(1), "21obj.c", 1584, "struct sGCDecNoFreeNode*")),(struct sNode*)come_increment_ref_count(node_63),info))));
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=(void*)sGCDecNoFreeNode_finalize;
        _inf_value16->clone=(void*)sGCDecNoFreeNode_clone;
        _inf_value16->compile=(void*)sGCDecNoFreeNode_compile;
        _inf_value16->sline=(void*)sNodeBase_sline;
        _inf_value16->sline_real=(void*)sNodeBase_sline_real;
        _inf_value16->sname=(void*)sNodeBase_sname;
        _inf_value16->terminated=(void*)sNodeBase_terminated;
        _inf_value16->kind=(void*)sGCDecNoFreeNode_kind;
        _inf_value16->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value16)));
        ((node_63) ? node_63 = come_decrement_ref_count(node_63, ((struct sNode*)node_63)->finalize, ((struct sNode*)node_63)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sGCDecNoFreeNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node_63) ? node_63 = come_decrement_ref_count(node_63, ((struct sNode*)node_63)->finalize, ((struct sNode*)node_63)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(buf,"lock")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_64=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
        (come_push_stackframe("21obj.c", 1592, 60),__exception_result_var_b61=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b61);
        _inf_value17=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1594, "struct sNode");
        _inf_obj_value17=(struct sGCDecNoFreeNode*)come_increment_ref_count(((struct sGCDecNoFreeNode*)(__right_value1=sGCDecNoFreeNode_initialize((struct sGCDecNoFreeNode*)come_increment_ref_count((struct sGCDecNoFreeNode*)come_calloc_v2(1, sizeof(struct sGCDecNoFreeNode)*(1), "21obj.c", 1594, "struct sGCDecNoFreeNode*")),(struct sNode*)come_increment_ref_count(node_64),info))));
        _inf_value17->_protocol_obj=_inf_obj_value17;
        _inf_value17->finalize=(void*)sGCDecNoFreeNode_finalize;
        _inf_value17->clone=(void*)sGCDecNoFreeNode_clone;
        _inf_value17->compile=(void*)sGCDecNoFreeNode_compile;
        _inf_value17->sline=(void*)sNodeBase_sline;
        _inf_value17->sline_real=(void*)sNodeBase_sline_real;
        _inf_value17->sname=(void*)sNodeBase_sname;
        _inf_value17->terminated=(void*)sNodeBase_terminated;
        _inf_value17->kind=(void*)sGCDecNoFreeNode_kind;
        _inf_value17->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value17)));
        ((node_64) ? node_64 = come_decrement_ref_count(node_64, ((struct sNode*)node_64)->finalize, ((struct sNode*)node_64)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sGCDecNoFreeNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node_64) ? node_64 = come_decrement_ref_count(node_64, ((struct sNode*)node_64)->finalize, ((struct sNode*)node_64)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(buf,"isheap")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        multiple_assign_var9=(come_push_stackframe("21obj.c", 1600, 62),__exception_result_var_b63=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,0,1,0))), come_pop_stackframe(), __exception_result_var_b63);
        param_type=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
        param_name=(char*)come_increment_ref_count(multiple_assign_var9->v2);
        err_65=multiple_assign_var9->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(!err_65) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(param_type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        (come_push_stackframe("21obj.c", 1608, 63),__exception_result_var_b64=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b64);
        _inf_value18=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1610, "struct sNode");
        _inf_obj_value18=(struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)(__right_value1=sIsHeap_initialize((struct sIsHeap*)come_increment_ref_count((struct sIsHeap*)come_calloc_v2(1, sizeof(struct sIsHeap)*(1), "21obj.c", 1610, "struct sIsHeap*")),(struct sType*)come_increment_ref_count(type2),info))));
        _inf_value18->_protocol_obj=_inf_obj_value18;
        _inf_value18->finalize=(void*)sIsHeap_finalize;
        _inf_value18->clone=(void*)sIsHeap_clone;
        _inf_value18->compile=(void*)sIsHeap_compile;
        _inf_value18->sline=(void*)sNodeBase_sline;
        _inf_value18->sline_real=(void*)sNodeBase_sline_real;
        _inf_value18->sname=(void*)sNodeBase_sname;
        _inf_value18->terminated=(void*)sNodeBase_terminated;
        _inf_value18->kind=(void*)sIsHeap_kind;
        _inf_value18->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value18)));
        come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sIsHeap_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(charp_operator_equals(buf,"ispointer")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        multiple_assign_var10=(come_push_stackframe("21obj.c", 1616, 65),__exception_result_var_b66=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,0,1,0))), come_pop_stackframe(), __exception_result_var_b66);
        param_type_66=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
        param_name_67=(char*)come_increment_ref_count(multiple_assign_var10->v2);
        err_68=multiple_assign_var10->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(!err_68) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        type2_69=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(param_type_66),(struct sType*)come_increment_ref_count(info->generics_type),info));
        (come_push_stackframe("21obj.c", 1624, 66),__exception_result_var_b67=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b67);
        _inf_value19=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1626, "struct sNode");
        _inf_obj_value19=(struct sIsPointer*)come_increment_ref_count(((struct sIsPointer*)(__right_value1=sIsPointer_initialize((struct sIsPointer*)come_increment_ref_count((struct sIsPointer*)come_calloc_v2(1, sizeof(struct sIsPointer)*(1), "21obj.c", 1626, "struct sIsPointer*")),(struct sType*)come_increment_ref_count(type2_69),info))));
        _inf_value19->_protocol_obj=_inf_obj_value19;
        _inf_value19->finalize=(void*)sIsPointer_finalize;
        _inf_value19->clone=(void*)sIsPointer_clone;
        _inf_value19->compile=(void*)sIsPointer_compile;
        _inf_value19->sline=(void*)sNodeBase_sline;
        _inf_value19->sline_real=(void*)sNodeBase_sline_real;
        _inf_value19->sname=(void*)sNodeBase_sname;
        _inf_value19->terminated=(void*)sNodeBase_terminated;
        _inf_value19->kind=(void*)sIsPointer_kind;
        _inf_value19->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value19)));
        come_call_finalizer(sType_finalize, param_type_66, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (param_name_67 = come_decrement_ref_count(param_name_67, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type2_69, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sIsPointer_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, param_type_66, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (param_name_67 = come_decrement_ref_count(param_name_67, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type2_69, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(charp_operator_equals(buf,"using")) {
        if(parsecmp("neo-c-pthread",info)) {
            info->p+=strlen("neo-c-pthread");
            skip_spaces_and_lf(info);
            gComePthread=1;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        else if(parsecmp("neo-c-net",info)) {
            info->p+=strlen("neo-c-net");
            skip_spaces_and_lf(info);
            gComeNet=1;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        else if(parsecmp("neo-c",info)) {
            info->p+=strlen("neo-c");
            skip_spaces_and_lf(info);
            gComeC=0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        else if(parsecmp("c",info)||parsecmp("C",info)) {
            info->p+=strlen("c");
            skip_spaces_and_lf(info);
            come_c=gComeC;
            gComeC=1;
            if(*info->p==123) {
                node_70=(struct sNode*)come_increment_ref_count(parse_normal_block(1,info));
                gComeC=come_c;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_70);
                ((node_70) ? node_70 = come_decrement_ref_count(node_70, ((struct sNode*)node_70)->finalize, ((struct sNode*)node_70)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__0;
                ((node_70) ? node_70 = come_decrement_ref_count(node_70, ((struct sNode*)node_70)->finalize, ((struct sNode*)node_70)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            else {
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))));
                ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__0;
            }
        }
        else {
            err_msg(info,"invalid using");
            exit(2);
        }
    }
    else if(charp_operator_equals(buf,"_Generic")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        no_comma_71=info->no_comma;
        info->no_comma=1;
        exp_72=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
        info->no_comma=no_comma_71;
        (come_push_stackframe("21obj.c", 1685, 67),__exception_result_var_b68=expected_next_character(44,info), come_pop_stackframe(), __exception_result_var_b68);
        types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "21obj.c", 1687, "struct list$1sType$ph*"))));
        exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "21obj.c", 1688, "struct list$1sNode$ph*"))));
        default_exp=((void*)0);
        while(1) {
            if(strncmp(info->p,"default",strlen("default"))==0) {
                info->p+=strlen("default");
                skip_spaces_and_lf(info);
                (come_push_stackframe("21obj.c", 1696, 68),__exception_result_var_b69=expected_next_character(58,info), come_pop_stackframe(), __exception_result_var_b69);
                no_comma_73=info->no_comma;
                info->no_comma=1;
                __dec_obj167=default_exp,
                default_exp=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
                (__dec_obj167 ? __dec_obj167 = come_decrement_ref_count(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0, (void*)0) :0);
                info->no_comma=no_comma_73;
            }
            else {
                multiple_assign_var11=(come_push_stackframe("21obj.c", 1704, 70),__exception_result_var_b71=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,0,0,0))), come_pop_stackframe(), __exception_result_var_b71);
                type_74=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
                name_75=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                err_76=multiple_assign_var11->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                list$1sType$ph_add(types,(struct sType*)come_increment_ref_count(type_74));
                (come_push_stackframe("21obj.c", 1708, 71),__exception_result_var_b72=expected_next_character(58,info), come_pop_stackframe(), __exception_result_var_b72);
                no_comma_77=info->no_comma;
                info->no_comma=1;
                node_78=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
                info->no_comma=no_comma_77;
                list$1sNode$ph_add(exps,(struct sNode*)come_increment_ref_count(node_78));
                come_call_finalizer(sType_finalize, type_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name_75 = come_decrement_ref_count(name_75, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node_78) ? node_78 = come_decrement_ref_count(node_78, ((struct sNode*)node_78)->finalize, ((struct sNode*)node_78)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            if(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(*info->p==0) {
                err_msg(info,"invalid source end");
                exit(2);
            }
            else if(*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
        }
        _inf_value20=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1733, "struct sNode");
        _inf_obj_value20=(struct sGeneric*)come_increment_ref_count(((struct sGeneric*)(__right_value1=sGeneric_initialize((struct sGeneric*)come_increment_ref_count((struct sGeneric*)come_calloc_v2(1, sizeof(struct sGeneric)*(1), "21obj.c", 1733, "struct sGeneric*")),(struct sNode*)come_increment_ref_count(exp_72),(struct list$1sType$ph*)come_increment_ref_count(types),(struct list$1sNode$ph*)come_increment_ref_count(exps),(struct sNode*)come_increment_ref_count(default_exp),info))));
        _inf_value20->_protocol_obj=_inf_obj_value20;
        _inf_value20->finalize=(void*)sGeneric_finalize;
        _inf_value20->clone=(void*)sGeneric_clone;
        _inf_value20->compile=(void*)sGeneric_compile;
        _inf_value20->sline=(void*)sNodeBase_sline;
        _inf_value20->sline_real=(void*)sNodeBase_sline_real;
        _inf_value20->sname=(void*)sNodeBase_sname;
        _inf_value20->terminated=(void*)sNodeBase_terminated;
        _inf_value20->kind=(void*)sGeneric_kind;
        _inf_value20->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value20)));
        ((exp_72) ? exp_72 = come_decrement_ref_count(exp_72, ((struct sNode*)exp_72)->finalize, ((struct sNode*)exp_72)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sGeneric_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((exp_72) ? exp_72 = come_decrement_ref_count(exp_72, ((struct sNode*)exp_72)->finalize, ((struct sNode*)exp_72)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(charp_operator_equals(buf,"offsetof")||charp_operator_equals(buf,"__builtin_offsetof")) {
        (come_push_stackframe("21obj.c", 1736, 72),__exception_result_var_b73=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b73);
        info->in_offsetof=1;
        multiple_assign_var12=(come_push_stackframe("21obj.c", 1739, 74),__exception_result_var_b75=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,0,0,0))), come_pop_stackframe(), __exception_result_var_b75);
        type_79=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
        name_80=(char*)come_increment_ref_count(multiple_assign_var12->v2);
        err_81=multiple_assign_var12->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        info->in_offsetof=0;
        if(!err_81) {
            err_msg(info,"parse type");
            exit(2);
        }
        (come_push_stackframe("21obj.c", 1747, 75),__exception_result_var_b76=expected_next_character(44,info), come_pop_stackframe(), __exception_result_var_b76);
        word_82=(char*)come_increment_ref_count(parse_word(0,info));
        (come_push_stackframe("21obj.c", 1751, 76),__exception_result_var_b77=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b77);
        _inf_value21=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1753, "struct sNode");
        _inf_obj_value21=(struct sOffsetOf*)come_increment_ref_count(((struct sOffsetOf*)(__right_value1=sOffsetOf_initialize((struct sOffsetOf*)come_increment_ref_count((struct sOffsetOf*)come_calloc_v2(1, sizeof(struct sOffsetOf)*(1), "21obj.c", 1753, "struct sOffsetOf*")),(struct sType*)come_increment_ref_count(type_79),(char*)come_increment_ref_count(word_82),info))));
        _inf_value21->_protocol_obj=_inf_obj_value21;
        _inf_value21->finalize=(void*)sOffsetOf_finalize;
        _inf_value21->clone=(void*)sOffsetOf_clone;
        _inf_value21->compile=(void*)sOffsetOf_compile;
        _inf_value21->sline=(void*)sNodeBase_sline;
        _inf_value21->sline_real=(void*)sNodeBase_sline_real;
        _inf_value21->sname=(void*)sNodeBase_sname;
        _inf_value21->terminated=(void*)sNodeBase_terminated;
        _inf_value21->kind=(void*)sOffsetOf_kind;
        _inf_value21->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value21)));
        come_call_finalizer(sType_finalize, type_79, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name_80 = come_decrement_ref_count(name_80, (void*)0, (void*)0, 0, 0, (void*)0));
        (word_82 = come_decrement_ref_count(word_82, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sOffsetOf_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, type_79, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name_80 = come_decrement_ref_count(name_80, (void*)0, (void*)0, 0, 0, (void*)0));
        (word_82 = come_decrement_ref_count(word_82, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(charp_operator_equals(buf,"sizeof")) {
        paren=0;
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            paren=1;
        }
        is_type_name_flag=0;
        {
            p=info->p;
            sline=info->sline;
            if(xisalpha(*info->p)||*info->p==95) {
                word_83=(char*)come_increment_ref_count(parse_word(0,info));
                if(is_type_name(word_83,info)) {
                    is_type_name_flag=1;
                }
                (word_83 = come_decrement_ref_count(word_83, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            info->p=p;
            info->sline=sline;
        }
        if(is_type_name_flag) {
            multiple_assign_var13=(come_push_stackframe("21obj.c", 1783, 78),__exception_result_var_b79=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,0,1,0))), come_pop_stackframe(), __exception_result_var_b79);
            type_84=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
            name_85=(char*)come_increment_ref_count(multiple_assign_var13->v2);
            err_86=multiple_assign_var13->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(!err_86) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(paren&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value22=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1796, "struct sNode");
            _inf_obj_value22=(struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)(__right_value1=sSizeOfNode_initialize((struct sSizeOfNode*)come_increment_ref_count((struct sSizeOfNode*)come_calloc_v2(1, sizeof(struct sSizeOfNode)*(1), "21obj.c", 1796, "struct sSizeOfNode*")),(struct sType*)come_increment_ref_count(type_84),info))));
            _inf_value22->_protocol_obj=_inf_obj_value22;
            _inf_value22->finalize=(void*)sSizeOfNode_finalize;
            _inf_value22->clone=(void*)sSizeOfNode_clone;
            _inf_value22->compile=(void*)sSizeOfNode_compile;
            _inf_value22->sline=(void*)sNodeBase_sline;
            _inf_value22->sline_real=(void*)sNodeBase_sline_real;
            _inf_value22->sname=(void*)sNodeBase_sname;
            _inf_value22->terminated=(void*)sNodeBase_terminated;
            _inf_value22->kind=(void*)sSizeOfNode_kind;
            _inf_value22->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value22)));
            come_call_finalizer(sType_finalize, type_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_85 = come_decrement_ref_count(name_85, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sSizeOfNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            come_call_finalizer(sType_finalize, type_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_85 = come_decrement_ref_count(name_85, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            if(!paren) {
                no_comma_88=info->no_comma;
                info->no_comma=1;
                __dec_obj178=exp_87,
                exp_87=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                (__dec_obj178 ? __dec_obj178 = come_decrement_ref_count(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0, (void*)0) :0);
                info->no_comma=no_comma_88;
            }
            else {
                __dec_obj179=exp_87,
                exp_87=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
                (__dec_obj179 ? __dec_obj179 = come_decrement_ref_count(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0, (void*)0) :0);
            }
            if(paren&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value23=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1817, "struct sNode");
            _inf_obj_value23=(struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(__right_value1=sSizeOfExpNode_initialize((struct sSizeOfExpNode*)come_increment_ref_count((struct sSizeOfExpNode*)come_calloc_v2(1, sizeof(struct sSizeOfExpNode)*(1), "21obj.c", 1817, "struct sSizeOfExpNode*")),(struct sNode*)come_increment_ref_count(exp_87),info))));
            _inf_value23->_protocol_obj=_inf_obj_value23;
            _inf_value23->finalize=(void*)sSizeOfExpNode_finalize;
            _inf_value23->clone=(void*)sSizeOfExpNode_clone;
            _inf_value23->compile=(void*)sSizeOfExpNode_compile;
            _inf_value23->sline=(void*)sNodeBase_sline;
            _inf_value23->sline_real=(void*)sNodeBase_sline_real;
            _inf_value23->sname=(void*)sNodeBase_sname;
            _inf_value23->terminated=(void*)sNodeBase_terminated;
            _inf_value23->kind=(void*)sSizeOfExpNode_kind;
            _inf_value23->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value23)));
            ((exp_87) ? exp_87 = come_decrement_ref_count(exp_87, ((struct sNode*)exp_87)->finalize, ((struct sNode*)exp_87)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(sSizeOfExpNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            ((exp_87) ? exp_87 = come_decrement_ref_count(exp_87, ((struct sNode*)exp_87)->finalize, ((struct sNode*)exp_87)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
    }
    else if(charp_operator_equals(buf,"dynamic_typeof")) {
        paren_89=0;
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_89=1;
        }
        if(!paren_89) {
            no_comma_91=info->no_comma;
            info->no_comma=1;
            __dec_obj182=exp_90,
            exp_90=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            (__dec_obj182 ? __dec_obj182 = come_decrement_ref_count(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0, (void*)0) :0);
            info->no_comma=no_comma_91;
        }
        else {
            __dec_obj183=exp_90,
            exp_90=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
            (__dec_obj183 ? __dec_obj183 = come_decrement_ref_count(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0,0, (void*)0) :0);
        }
        if(paren_89&&*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        _inf_value24=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1916, "struct sNode");
        _inf_obj_value24=(struct sDynamicTypeOf*)come_increment_ref_count(((struct sDynamicTypeOf*)(__right_value1=sDynamicTypeOf_initialize((struct sDynamicTypeOf*)come_increment_ref_count((struct sDynamicTypeOf*)come_calloc_v2(1, sizeof(struct sDynamicTypeOf)*(1), "21obj.c", 1916, "struct sDynamicTypeOf*")),(struct sNode*)come_increment_ref_count(exp_90),info))));
        _inf_value24->_protocol_obj=_inf_obj_value24;
        _inf_value24->finalize=(void*)sDynamicTypeOf_finalize;
        _inf_value24->clone=(void*)sDynamicTypeOf_clone;
        _inf_value24->compile=(void*)sDynamicTypeOf_compile;
        _inf_value24->sline=(void*)sNodeBase_sline;
        _inf_value24->sline_real=(void*)sNodeBase_sline_real;
        _inf_value24->sname=(void*)sNodeBase_sname;
        _inf_value24->terminated=(void*)sNodeBase_terminated;
        _inf_value24->kind=(void*)sDynamicTypeOf_kind;
        _inf_value24->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value24)));
        ((exp_90) ? exp_90 = come_decrement_ref_count(exp_90, ((struct sNode*)exp_90)->finalize, ((struct sNode*)exp_90)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sDynamicTypeOf_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((exp_90) ? exp_90 = come_decrement_ref_count(exp_90, ((struct sNode*)exp_90)->finalize, ((struct sNode*)exp_90)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(charp_operator_equals(buf,"_Alignof")) {
        paren_92=0;
        if(*info->p==40) {
            paren_92=1;
            info->p++;
            skip_spaces_and_lf(info);
        }
        is_type_name_flag_93=0;
        {
            p_94=info->p;
            sline_95=info->sline;
            if(xisalpha(*info->p)||*info->p==95) {
                word_96=(char*)come_increment_ref_count(parse_word(0,info));
                if(is_type_name(word_96,info)) {
                    is_type_name_flag_93=1;
                }
                (word_96 = come_decrement_ref_count(word_96, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            info->p=p_94;
            info->sline=sline_95;
        }
        if(is_type_name_flag_93) {
            multiple_assign_var14=(come_push_stackframe("21obj.c", 1945, 80),__exception_result_var_b81=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,0,1,0))), come_pop_stackframe(), __exception_result_var_b81);
            type_97=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
            name_98=(char*)come_increment_ref_count(multiple_assign_var14->v2);
            err_99=multiple_assign_var14->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(!err_99) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(paren_92&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value25=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1956, "struct sNode");
            _inf_obj_value25=(struct sAlignOfNode*)come_increment_ref_count(((struct sAlignOfNode*)(__right_value1=sAlignOfNode_initialize((struct sAlignOfNode*)come_increment_ref_count((struct sAlignOfNode*)come_calloc_v2(1, sizeof(struct sAlignOfNode)*(1), "21obj.c", 1956, "struct sAlignOfNode*")),(struct sType*)come_increment_ref_count(type_97),info))));
            _inf_value25->_protocol_obj=_inf_obj_value25;
            _inf_value25->finalize=(void*)sAlignOfNode_finalize;
            _inf_value25->clone=(void*)sAlignOfNode_clone;
            _inf_value25->compile=(void*)sAlignOfNode_compile;
            _inf_value25->sline=(void*)sNodeBase_sline;
            _inf_value25->sline_real=(void*)sNodeBase_sline_real;
            _inf_value25->sname=(void*)sNodeBase_sname;
            _inf_value25->terminated=(void*)sNodeBase_terminated;
            _inf_value25->kind=(void*)sAlignOfNode_kind;
            _inf_value25->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value25)));
            come_call_finalizer(sType_finalize, type_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_98 = come_decrement_ref_count(name_98, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sAlignOfNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            come_call_finalizer(sType_finalize, type_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_98 = come_decrement_ref_count(name_98, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            if(!paren_92) {
                no_comma_101=info->no_comma;
                info->no_comma=1;
                __dec_obj188=exp_100,
                exp_100=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                (__dec_obj188 ? __dec_obj188 = come_decrement_ref_count(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0, (void*)0) :0);
                info->no_comma=no_comma_101;
            }
            else {
                __dec_obj189=exp_100,
                exp_100=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
                (__dec_obj189 ? __dec_obj189 = come_decrement_ref_count(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0,0, (void*)0) :0);
            }
            _inf_value26=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1970, "struct sNode");
            _inf_obj_value26=(struct sAlignOfExpNode*)come_increment_ref_count(((struct sAlignOfExpNode*)(__right_value1=sAlignOfExpNode_initialize((struct sAlignOfExpNode*)come_increment_ref_count((struct sAlignOfExpNode*)come_calloc_v2(1, sizeof(struct sAlignOfExpNode)*(1), "21obj.c", 1970, "struct sAlignOfExpNode*")),(struct sNode*)come_increment_ref_count(exp_100),info))));
            _inf_value26->_protocol_obj=_inf_obj_value26;
            _inf_value26->finalize=(void*)sAlignOfExpNode_finalize;
            _inf_value26->clone=(void*)sAlignOfExpNode_clone;
            _inf_value26->compile=(void*)sAlignOfExpNode_compile;
            _inf_value26->sline=(void*)sNodeBase_sline;
            _inf_value26->sline_real=(void*)sNodeBase_sline_real;
            _inf_value26->sname=(void*)sNodeBase_sname;
            _inf_value26->terminated=(void*)sNodeBase_terminated;
            _inf_value26->kind=(void*)sAlignOfExpNode_kind;
            _inf_value26->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value26)));
            ((exp_100) ? exp_100 = come_decrement_ref_count(exp_100, ((struct sNode*)exp_100)->finalize, ((struct sNode*)exp_100)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(sAlignOfExpNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            ((exp_100) ? exp_100 = come_decrement_ref_count(exp_100, ((struct sNode*)exp_100)->finalize, ((struct sNode*)exp_100)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
    }
    else if(charp_operator_equals(buf,"__alignof__")) {
        paren_102=0;
        if(*info->p==40) {
            paren_102=1;
            info->p++;
            skip_spaces_and_lf(info);
        }
        is_type_name_flag_103=0;
        {
            p_104=info->p;
            sline_105=info->sline;
            if(xisalpha(*info->p)||*info->p==95) {
                word_106=(char*)come_increment_ref_count(parse_word(0,info));
                if(is_type_name(word_106,info)) {
                    is_type_name_flag_103=1;
                }
                (word_106 = come_decrement_ref_count(word_106, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            info->p=p_104;
            info->sline=sline_105;
        }
        if(is_type_name_flag_103) {
            multiple_assign_var15=(come_push_stackframe("21obj.c", 2000, 82),__exception_result_var_b83=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,0,1,0))), come_pop_stackframe(), __exception_result_var_b83);
            type_107=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
            name_108=(char*)come_increment_ref_count(multiple_assign_var15->v2);
            err_109=multiple_assign_var15->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(!err_109) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(paren_102&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value27=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 2011, "struct sNode");
            _inf_obj_value27=(struct sAlignOfNode2*)come_increment_ref_count(((struct sAlignOfNode2*)(__right_value1=sAlignOfNode2_initialize((struct sAlignOfNode2*)come_increment_ref_count((struct sAlignOfNode2*)come_calloc_v2(1, sizeof(struct sAlignOfNode2)*(1), "21obj.c", 2011, "struct sAlignOfNode2*")),(struct sType*)come_increment_ref_count(type_107),info))));
            _inf_value27->_protocol_obj=_inf_obj_value27;
            _inf_value27->finalize=(void*)sAlignOfNode2_finalize;
            _inf_value27->clone=(void*)sAlignOfNode2_clone;
            _inf_value27->compile=(void*)sAlignOfNode2_compile;
            _inf_value27->sline=(void*)sNodeBase_sline;
            _inf_value27->sline_real=(void*)sNodeBase_sline_real;
            _inf_value27->sname=(void*)sNodeBase_sname;
            _inf_value27->terminated=(void*)sNodeBase_terminated;
            _inf_value27->kind=(void*)sAlignOfNode2_kind;
            _inf_value27->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value27)));
            come_call_finalizer(sType_finalize, type_107, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_108 = come_decrement_ref_count(name_108, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sAlignOfNode2_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            come_call_finalizer(sType_finalize, type_107, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_108 = come_decrement_ref_count(name_108, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            if(!paren_102) {
                no_comma_111=info->no_comma;
                info->no_comma=1;
                __dec_obj194=exp_110,
                exp_110=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                (__dec_obj194 ? __dec_obj194 = come_decrement_ref_count(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0,0, (void*)0) :0);
                info->no_comma=no_comma_111;
            }
            else {
                __dec_obj195=exp_110,
                exp_110=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
                (__dec_obj195 ? __dec_obj195 = come_decrement_ref_count(__dec_obj195, ((struct sNode*)__dec_obj195)->finalize, ((struct sNode*)__dec_obj195)->_protocol_obj, 0,0, (void*)0) :0);
            }
            _inf_value28=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 2025, "struct sNode");
            _inf_obj_value28=(struct sAlignOfExpNode2*)come_increment_ref_count(((struct sAlignOfExpNode2*)(__right_value1=sAlignOfExpNode2_initialize((struct sAlignOfExpNode2*)come_increment_ref_count((struct sAlignOfExpNode2*)come_calloc_v2(1, sizeof(struct sAlignOfExpNode2)*(1), "21obj.c", 2025, "struct sAlignOfExpNode2*")),(struct sNode*)come_increment_ref_count(exp_110),info))));
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sAlignOfExpNode2_finalize;
            _inf_value28->clone=(void*)sAlignOfExpNode2_clone;
            _inf_value28->compile=(void*)sAlignOfExpNode2_compile;
            _inf_value28->sline=(void*)sNodeBase_sline;
            _inf_value28->sline_real=(void*)sNodeBase_sline_real;
            _inf_value28->sname=(void*)sNodeBase_sname;
            _inf_value28->terminated=(void*)sNodeBase_terminated;
            _inf_value28->kind=(void*)sAlignOfExpNode2_kind;
            _inf_value28->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value28)));
            ((exp_110) ? exp_110 = come_decrement_ref_count(exp_110, ((struct sNode*)exp_110)->finalize, ((struct sNode*)exp_110)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(sAlignOfExpNode2_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            ((exp_110) ? exp_110 = come_decrement_ref_count(exp_110, ((struct sNode*)exp_110)->finalize, ((struct sNode*)exp_110)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
    }
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=string_node_v20(buf,head,head_sline,info))));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self)
{
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct sNewNode* sNewNode_clone(struct sNewNode* self)
{
    struct sNewNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNewNode* result;
    char* __dec_obj136;
    struct sType* __dec_obj137;
    struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj143;
    struct sNode* __dec_obj144;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc_v2(1, sizeof(struct sNewNode)*(1), "sNewNode_clone", 3, "struct sNewNode*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj136=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNewNode_clone", 5, "char*"));
        __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj137=result->type,
        result->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj137,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->initializer!=((void*)0)) {
        __dec_obj143=result->initializer,
        result->initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->initializer));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj143,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->initializer_num!=((void*)0)) {
        __dec_obj144=result->initializer_num,
        result->initializer_num=(struct sNode*)come_increment_ref_count(sNode_clone(self->initializer_num));
        (__dec_obj144 ? __dec_obj144 = come_decrement_ref_count(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sNewNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1tuple2$2char$phsNode$ph$ph* result;
    struct list_item$1tuple2$2char$phsNode$ph$ph* it;
    if(self==((void*)0)) {
        __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1102, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            list$1tuple2$2char$phsNode$ph$ph_add(result,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph_add(result,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item)
{
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
    struct tuple2$2char$phsNode$ph* __dec_obj138;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_53;
    struct tuple2$2char$phsNode$ph* __dec_obj139;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_54;
    struct tuple2$2char$phsNode$ph* __dec_obj140;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1123, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj138=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj138,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_53=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1133, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_53->prev=self->head;
        litem_53->next=((void*)0);
        __dec_obj139=litem_53->item,
        litem_53->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj139,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_53;
        self->head->next=litem_53;
    }
    else {
        litem_54=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1143, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_54->prev=self->tail;
        litem_54->next=((void*)0);
        __dec_obj140=litem_54->item,
        litem_54->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj140,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_54;
        self->tail=litem_54;
    }
    self->len++;
    __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self)
{
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct tuple2$2char$phsNode$ph* result;
    char* __dec_obj141;
    struct sNode* __dec_obj142;
    if(self==(void*)0) {
        __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count((void*)0);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*"));
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj141=result->v1,
        result->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 4, "char*"));
        __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj142=result->v2,
        result->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj142 ? __dec_obj142 = come_decrement_ref_count(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result);
    come_call_finalizer(tuple2$2char$phsNode$ph_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self)
{
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2)
{
    char* __dec_obj145;
    struct sNode* __dec_obj146;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    __dec_obj145=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj146=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj146 ? __dec_obj146 = come_decrement_ref_count(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self)
{
    struct sDeleteNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sDeleteNode* result;
    char* __dec_obj147;
    struct sNode* __dec_obj148;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sDeleteNode*)come_increment_ref_count((struct sDeleteNode*)come_calloc_v2(1, sizeof(struct sDeleteNode)*(1), "sDeleteNode_clone", 3, "struct sDeleteNode*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj147=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sDeleteNode_clone", 5, "char*"));
        __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj148=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj148 ? __dec_obj148 = come_decrement_ref_count(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sDeleteNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self)
{
    struct sBorrowNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sBorrowNode* result;
    char* __dec_obj149;
    struct sNode* __dec_obj150;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sBorrowNode*)come_increment_ref_count((struct sBorrowNode*)come_calloc_v2(1, sizeof(struct sBorrowNode)*(1), "sBorrowNode_clone", 3, "struct sBorrowNode*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj149=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sBorrowNode_clone", 5, "char*"));
        __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj150=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj150 ? __dec_obj150 = come_decrement_ref_count(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sBorrowNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self)
{
    struct sCloneNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sCloneNode* result;
    char* __dec_obj151;
    struct sNode* __dec_obj152;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sCloneNode*)come_increment_ref_count((struct sCloneNode*)come_calloc_v2(1, sizeof(struct sCloneNode)*(1), "sCloneNode_clone", 3, "struct sCloneNode*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj151=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCloneNode_clone", 5, "char*"));
        __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj152=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj152 ? __dec_obj152 = come_decrement_ref_count(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sCloneNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self)
{
    struct sDupeNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sDupeNode* result;
    char* __dec_obj153;
    struct sNode* __dec_obj154;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sDupeNode*)come_increment_ref_count((struct sDupeNode*)come_calloc_v2(1, sizeof(struct sDupeNode)*(1), "sDupeNode_clone", 3, "struct sDupeNode*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj153=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sDupeNode_clone", 5, "char*"));
        __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj154=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj154 ? __dec_obj154 = come_decrement_ref_count(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sDupeNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self)
{
    struct sDummyHeapNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sDummyHeapNode* result;
    char* __dec_obj155;
    struct sNode* __dec_obj156;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sDummyHeapNode*)come_increment_ref_count((struct sDummyHeapNode*)come_calloc_v2(1, sizeof(struct sDummyHeapNode)*(1), "sDummyHeapNode_clone", 3, "struct sDummyHeapNode*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj155=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sDummyHeapNode_clone", 5, "char*"));
        __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj156=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj156 ? __dec_obj156 = come_decrement_ref_count(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sDummyHeapNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self)
{
    struct sGCIncNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sGCIncNode* result;
    char* __dec_obj157;
    struct sNode* __dec_obj158;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sGCIncNode*)come_increment_ref_count((struct sGCIncNode*)come_calloc_v2(1, sizeof(struct sGCIncNode)*(1), "sGCIncNode_clone", 3, "struct sGCIncNode*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj157=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sGCIncNode_clone", 5, "char*"));
        __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj158=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj158 ? __dec_obj158 = come_decrement_ref_count(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sGCIncNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self)
{
    struct sGCDecNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sGCDecNode* result;
    char* __dec_obj159;
    struct sNode* __dec_obj160;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sGCDecNode*)come_increment_ref_count((struct sGCDecNode*)come_calloc_v2(1, sizeof(struct sGCDecNode)*(1), "sGCDecNode_clone", 3, "struct sGCDecNode*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj159=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sGCDecNode_clone", 5, "char*"));
        __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj160=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj160 ? __dec_obj160 = come_decrement_ref_count(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sGCDecNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sGCDecNoFreeNode* sGCDecNoFreeNode_clone(struct sGCDecNoFreeNode* self)
{
    struct sGCDecNoFreeNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sGCDecNoFreeNode* result;
    char* __dec_obj161;
    struct sNode* __dec_obj162;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sGCDecNoFreeNode*)come_increment_ref_count((struct sGCDecNoFreeNode*)come_calloc_v2(1, sizeof(struct sGCDecNoFreeNode)*(1), "sGCDecNoFreeNode_clone", 3, "struct sGCDecNoFreeNode*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj161=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sGCDecNoFreeNode_clone", 5, "char*"));
        __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj162=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj162 ? __dec_obj162 = come_decrement_ref_count(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sGCDecNoFreeNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self)
{
    struct sIsHeap* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sIsHeap* result;
    char* __dec_obj163;
    struct sType* __dec_obj164;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sIsHeap*)come_increment_ref_count((struct sIsHeap*)come_calloc_v2(1, sizeof(struct sIsHeap)*(1), "sIsHeap_clone", 3, "struct sIsHeap*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj163=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sIsHeap_clone", 5, "char*"));
        __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj164=result->type,
        result->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj164,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sIsHeap_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self)
{
    struct sIsPointer* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sIsPointer* result;
    char* __dec_obj165;
    struct sType* __dec_obj166;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sIsPointer*)come_increment_ref_count((struct sIsPointer*)come_calloc_v2(1, sizeof(struct sIsPointer)*(1), "sIsPointer_clone", 3, "struct sIsPointer*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj165=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sIsPointer_clone", 5, "char*"));
        __dec_obj165 = come_decrement_ref_count(__dec_obj165, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj166=result->type,
        result->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj166,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sIsPointer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sGeneric* sGeneric_clone(struct sGeneric* self)
{
    struct sGeneric* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sGeneric* result;
    char* __dec_obj168;
    struct sNode* __dec_obj169;
    struct list$1sType$ph* __dec_obj170;
    struct list$1sNode$ph* __dec_obj171;
    struct sNode* __dec_obj172;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sGeneric*)come_increment_ref_count((struct sGeneric*)come_calloc_v2(1, sizeof(struct sGeneric)*(1), "sGeneric_clone", 3, "struct sGeneric*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj168=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sGeneric_clone", 5, "char*"));
        __dec_obj168 = come_decrement_ref_count(__dec_obj168, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj169=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj169 ? __dec_obj169 = come_decrement_ref_count(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&self->types!=((void*)0)) {
        __dec_obj170=result->types,
        result->types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->types));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj170,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj171=result->exps,
        result->exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->exps));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj171,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->default_exp!=((void*)0)) {
        __dec_obj172=result->default_exp,
        result->default_exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->default_exp));
        (__dec_obj172 ? __dec_obj172 = come_decrement_ref_count(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sGeneric_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sOffsetOf* sOffsetOf_clone(struct sOffsetOf* self)
{
    struct sOffsetOf* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sOffsetOf* result;
    char* __dec_obj173;
    struct sType* __dec_obj174;
    char* __dec_obj175;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sOffsetOf*)come_increment_ref_count((struct sOffsetOf*)come_calloc_v2(1, sizeof(struct sOffsetOf)*(1), "sOffsetOf_clone", 3, "struct sOffsetOf*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj173=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sOffsetOf_clone", 5, "char*"));
        __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj174=result->type,
        result->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj174,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->name!=((void*)0)) {
        __dec_obj175=result->name,
        result->name=(char*)come_increment_ref_count((char*)come_memdup(self->name, "sOffsetOf_clone", 8, "char*"));
        __dec_obj175 = come_decrement_ref_count(__dec_obj175, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sOffsetOf_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self)
{
    struct sSizeOfNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sSizeOfNode* result;
    char* __dec_obj176;
    struct sType* __dec_obj177;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sSizeOfNode*)come_increment_ref_count((struct sSizeOfNode*)come_calloc_v2(1, sizeof(struct sSizeOfNode)*(1), "sSizeOfNode_clone", 3, "struct sSizeOfNode*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj176=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSizeOfNode_clone", 5, "char*"));
        __dec_obj176 = come_decrement_ref_count(__dec_obj176, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj177=result->type,
        result->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj177,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sSizeOfNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self)
{
    struct sSizeOfExpNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sSizeOfExpNode* result;
    char* __dec_obj180;
    struct sNode* __dec_obj181;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sSizeOfExpNode*)come_increment_ref_count((struct sSizeOfExpNode*)come_calloc_v2(1, sizeof(struct sSizeOfExpNode)*(1), "sSizeOfExpNode_clone", 3, "struct sSizeOfExpNode*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj180=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSizeOfExpNode_clone", 5, "char*"));
        __dec_obj180 = come_decrement_ref_count(__dec_obj180, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj181=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj181 ? __dec_obj181 = come_decrement_ref_count(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sSizeOfExpNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sDynamicTypeOf* sDynamicTypeOf_clone(struct sDynamicTypeOf* self)
{
    struct sDynamicTypeOf* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sDynamicTypeOf* result;
    char* __dec_obj184;
    struct sNode* __dec_obj185;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sDynamicTypeOf*)come_increment_ref_count((struct sDynamicTypeOf*)come_calloc_v2(1, sizeof(struct sDynamicTypeOf)*(1), "sDynamicTypeOf_clone", 3, "struct sDynamicTypeOf*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj184=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sDynamicTypeOf_clone", 5, "char*"));
        __dec_obj184 = come_decrement_ref_count(__dec_obj184, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj185=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj185 ? __dec_obj185 = come_decrement_ref_count(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sDynamicTypeOf_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self)
{
    struct sAlignOfNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sAlignOfNode* result;
    char* __dec_obj186;
    struct sType* __dec_obj187;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sAlignOfNode*)come_increment_ref_count((struct sAlignOfNode*)come_calloc_v2(1, sizeof(struct sAlignOfNode)*(1), "sAlignOfNode_clone", 3, "struct sAlignOfNode*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj186=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAlignOfNode_clone", 5, "char*"));
        __dec_obj186 = come_decrement_ref_count(__dec_obj186, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj187=result->type,
        result->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj187,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sAlignOfNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self)
{
    struct sAlignOfExpNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sAlignOfExpNode* result;
    char* __dec_obj190;
    struct sNode* __dec_obj191;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sAlignOfExpNode*)come_increment_ref_count((struct sAlignOfExpNode*)come_calloc_v2(1, sizeof(struct sAlignOfExpNode)*(1), "sAlignOfExpNode_clone", 3, "struct sAlignOfExpNode*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj190=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAlignOfExpNode_clone", 5, "char*"));
        __dec_obj190 = come_decrement_ref_count(__dec_obj190, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj191=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj191 ? __dec_obj191 = come_decrement_ref_count(__dec_obj191, ((struct sNode*)__dec_obj191)->finalize, ((struct sNode*)__dec_obj191)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sAlignOfExpNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self)
{
    struct sAlignOfNode2* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sAlignOfNode2* result;
    char* __dec_obj192;
    struct sType* __dec_obj193;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sAlignOfNode2*)come_increment_ref_count((struct sAlignOfNode2*)come_calloc_v2(1, sizeof(struct sAlignOfNode2)*(1), "sAlignOfNode2_clone", 3, "struct sAlignOfNode2*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj192=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAlignOfNode2_clone", 5, "char*"));
        __dec_obj192 = come_decrement_ref_count(__dec_obj192, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj193=result->type,
        result->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj193,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sAlignOfNode2_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self)
{
    struct sAlignOfExpNode2* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sAlignOfExpNode2* result;
    char* __dec_obj196;
    struct sNode* __dec_obj197;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sAlignOfExpNode2*)come_increment_ref_count((struct sAlignOfExpNode2*)come_calloc_v2(1, sizeof(struct sAlignOfExpNode2)*(1), "sAlignOfExpNode2_clone", 3, "struct sAlignOfExpNode2*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj196=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAlignOfExpNode2_clone", 5, "char*"));
        __dec_obj196 = come_decrement_ref_count(__dec_obj196, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj197=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj197 ? __dec_obj197 = come_decrement_ref_count(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sAlignOfExpNode2_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    struct sNode* __result_obj__0;
    _Bool come_c;
    if(charp_operator_equals(buf,"using")) {
        if(parsecmp("neo-c-pthread",info)) {
            info->p+=strlen("neo-c-pthread");
            skip_spaces_and_lf(info);
            gComePthread=1;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        else if(parsecmp("neo-c-net",info)) {
            info->p+=strlen("neo-c-net");
            skip_spaces_and_lf(info);
            gComeNet=1;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        else if(parsecmp("neo-c",info)) {
            info->p+=strlen("neo-c");
            skip_spaces_and_lf(info);
            gComeC=0;
        }
        else if(parsecmp("c",info)||parsecmp("C",info)) {
            info->p+=strlen("c");
            skip_spaces_and_lf(info);
            if(*info->p==123) {
                info->p++;
                skip_spaces_and_lf(info);
                come_c=gComeC;
                gComeC=1;
                transpile_toplevel(1,info);
                gComeC=come_c;
            }
            else {
                gComeC=1;
            }
        }
        else {
            err_msg(info,"invalid using");
            exit(2);
        }
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))));
        ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
    }
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=top_level_v93(buf,head,head_sline,info))));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

struct sNode* create_implements(struct sNode* node, struct sType* inf_type, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value29;
    struct sImplementsNode* _inf_obj_value29;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    _inf_value29=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 2131, "struct sNode");
    _inf_obj_value29=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(__right_value1=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc_v2(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 2131, "struct sImplementsNode*")),(struct sNode*)come_increment_ref_count(node),(struct sType*)come_increment_ref_count(inf_type),info))));
    _inf_value29->_protocol_obj=_inf_obj_value29;
    _inf_value29->finalize=(void*)sImplementsNode_finalize;
    _inf_value29->clone=(void*)sImplementsNode_clone;
    _inf_value29->compile=(void*)sImplementsNode_compile;
    _inf_value29->sline=(void*)sNodeBase_sline;
    _inf_value29->sline_real=(void*)sNodeBase_sline_real;
    _inf_value29->sname=(void*)sNodeBase_sname;
    _inf_value29->terminated=(void*)sNodeBase_terminated;
    _inf_value29->kind=(void*)sImplementsNode_kind;
    _inf_value29->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value29)));
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sType_finalize, inf_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sImplementsNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self)
{
    struct sImplementsNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sImplementsNode* result;
    char* __dec_obj198;
    struct sNode* __dec_obj199;
    struct sType* __dec_obj200;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc_v2(1, sizeof(struct sImplementsNode)*(1), "sImplementsNode_clone", 3, "struct sImplementsNode*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj198=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sImplementsNode_clone", 5, "char*"));
        __dec_obj198 = come_decrement_ref_count(__dec_obj198, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->obj_exp!=((void*)0)) {
        __dec_obj199=result->obj_exp,
        result->obj_exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->obj_exp));
        (__dec_obj199 ? __dec_obj199 = come_decrement_ref_count(__dec_obj199, ((struct sNode*)__dec_obj199)->finalize, ((struct sNode*)__dec_obj199)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&self->inf_type!=((void*)0)) {
        __dec_obj200=result->inf_type,
        result->inf_type=(struct sType*)come_increment_ref_count(sType_clone(self->inf_type));
        come_call_finalizer(sType_finalize, __dec_obj200,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sImplementsNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    struct tuple3$3sType$phchar$ph_Bool$* __exception_result_var_b84;
    struct tuple3$3sType$phchar$ph_Bool$* __exception_result_var_b85;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var16
;    struct sType* type3=0;
    char* name2=0;
    _Bool err=0;
    struct sType* inf_type;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value30;
    struct sImplementsNode* _inf_obj_value30;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    if(!node->terminated(node->_protocol_obj)&&!gComeC&&parsecmp("implements",info)) {
        info->p+=strlen("implements");
        skip_spaces_and_lf(info);
        multiple_assign_var16=(come_push_stackframe("21obj.c", 2140, 84),__exception_result_var_b85=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,0,0,0))), come_pop_stackframe(), __exception_result_var_b85);
        type3=(struct sType*)come_increment_ref_count(multiple_assign_var16->v1);
        name2=(char*)come_increment_ref_count(multiple_assign_var16->v2);
        err=multiple_assign_var16->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(!err) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        inf_type=(struct sType*)come_increment_ref_count(sType_clone(type3));
        _inf_value30=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 2148, "struct sNode");
        _inf_obj_value30=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(__right_value1=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc_v2(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 2148, "struct sImplementsNode*")),(struct sNode*)come_increment_ref_count(node),(struct sType*)come_increment_ref_count(inf_type),info))));
        _inf_value30->_protocol_obj=_inf_obj_value30;
        _inf_value30->finalize=(void*)sImplementsNode_finalize;
        _inf_value30->clone=(void*)sImplementsNode_clone;
        _inf_value30->compile=(void*)sImplementsNode_compile;
        _inf_value30->sline=(void*)sNodeBase_sline;
        _inf_value30->sline_real=(void*)sNodeBase_sline_real;
        _inf_value30->sname=(void*)sNodeBase_sname;
        _inf_value30->terminated=(void*)sNodeBase_terminated;
        _inf_value30->kind=(void*)sImplementsNode_kind;
        _inf_value30->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value30)));
        come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name2 = come_decrement_ref_count(name2, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, inf_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sImplementsNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name2 = come_decrement_ref_count(name2, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, inf_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(*info->p==64) {
        info->p++;
        while(xisalnum(*info->p)||*info->p==95) {
            info->p++;
        }
        skip_spaces_and_lf(info);
    }
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=post_position_operator_v19((struct sNode*)come_increment_ref_count(node),info))));
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

