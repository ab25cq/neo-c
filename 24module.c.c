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

struct sModuleNode
{
    int sline;
    char* sname;
    int sline_real;
    char* name;
    struct sClassModule* module;
};

struct sStaticAssert
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
    struct sNode* exp2;
};

struct sUndefNode
{
    int sline;
    char* sname;
    int sline_real;
    char* str;
};

struct sNoneNode
{
    int sline;
    char* sname;
    int sline_real;
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
struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info);
_Bool sNothingNode_terminated(struct sNothingNode* self);
char* sNothingNode_kind(struct sNothingNode* self);
_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info);
struct sModuleNode* sModuleNode_initialize(struct sModuleNode* self, char* name, struct sClassModule* module, struct sInfo* info);
char* sModuleNode_kind(struct sModuleNode* self);
_Bool sModuleNode_compile(struct sModuleNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sClassModule* sClassModule_clone(struct sClassModule* self);
static void sClassModule_finalize(struct sClassModule* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static void sModuleNode_finalize(struct sModuleNode* self);
struct sStaticAssert* sStaticAssert_initialize(struct sStaticAssert* self, struct sNode* exp, struct sNode* exp2, struct sInfo* info);
char* sStaticAssert_kind(struct sStaticAssert* self);
_Bool sStaticAssert_compile(struct sStaticAssert* self, struct sInfo* info);
static void sStaticAssert_finalize(struct sStaticAssert* self);
static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
struct sUndefNode* sUndefNode_initialize(struct sUndefNode* self, char* str, struct sInfo* info);
char* sUndefNode_kind(struct sUndefNode* self);
_Bool sUndefNode_compile(struct sUndefNode* self, struct sInfo* info);
static void sUndefNode_finalize(struct sUndefNode* self);
static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_remove(struct map$2char$phbuffer$ph* self, char* key);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar* self);
static void sBlock_finalize(struct sBlock* self);
static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph_remove(struct map$2char$phsGenericsFun$ph* self, char* key);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static struct map$2char$phsClassModule$ph* map$2char$phsClassModule$ph_remove(struct map$2char$phsClassModule$ph* self, char* key);
static struct map$2char$phsType$ph* map$2char$phsType$ph_remove(struct map$2char$phsType$ph* self, char* key);
struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct sInfo* info);
char* sNoneNode_kind(struct sNoneNode* self);
_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info);
static void sNoneNode_finalize(struct sNoneNode* self);
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo* info);
static struct sStaticAssert* sStaticAssert_clone(struct sStaticAssert* self);
static struct sNode* sNode_clone(struct sNode* self);
int sizeof_struct(struct sType* type, struct sInfo* info);
static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position);
int sizeof_union(struct sType* type, struct sInfo* info);
int sizeof_type(struct sType* type, struct sInfo* info);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position);
static struct sType* sType_clone(struct sType* self);
static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item);
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static struct list$1int$* list$1int$$p_clone(struct list$1int$* self);
static struct list$1int$* list$1int$_initialize(struct list$1int$* self);
static struct list$1int$* list$1int$_add(struct list$1int$* self, int item);
static void list$1int$_finalize(struct list$1int$* self);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
int alignof_type(struct sType* type, struct sInfo* info);
char* reflection_node(struct sInfo* info);
static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key);
static struct sType* map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char* key);
static struct buffer* map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char* key);
static struct buffer* map$2char$phbuffer$ph_operator_load_element(struct map$2char$phbuffer$ph* self, char* key);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key);
static struct sGenericsFun* map$2char$phsGenericsFun$ph_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key);
static struct sClassModule* map$2char$phsClassModule$ph$p_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key);
static struct sClassModule* map$2char$phsClassModule$ph_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static char* map$2char$phchar$ph$p_operator_load_element(struct map$2char$phchar$ph* self, char* key);
static char* map$2char$phchar$ph_operator_load_element(struct map$2char$phchar$ph* self, char* key);
char* reflection_expression_mult(struct sInfo* info);
char* reflection_expression_add(struct sInfo* info);
char* reflection_expression_comp(struct sInfo* info);
char* reflection_expression_eq(struct sInfo* info);
char* reflection_expression_oror(struct sInfo* info);
char* reflection_expression_andand(struct sInfo* info);
char* reflection_expression(struct sInfo* info);
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
static void map$2char$phsClassModule$ph_operator_store_element(struct map$2char$phsClassModule$ph* self, char* key, struct sClassModule* item);
static struct map$2char$phsClassModule$ph* map$2char$phsClassModule$ph_insert(struct map$2char$phsClassModule$ph* self, char* key, struct sClassModule* item);
static void map$2char$phsClassModule$ph_rehash(struct map$2char$phsClassModule$ph* self);
static char* map$2char$phsClassModule$ph_begin(struct map$2char$phsClassModule$ph* self);
static _Bool map$2char$phsClassModule$ph_end(struct map$2char$phsClassModule$ph* self);
static char* map$2char$phsClassModule$ph_next(struct map$2char$phsClassModule$ph* self);
static struct sClassModule* map$2char$phsClassModule$ph_at(struct map$2char$phsClassModule$ph* self, char* key, struct sClassModule* default_value);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
static struct sModuleNode* sModuleNode_clone(struct sModuleNode* self);
static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_insert(struct map$2char$phbuffer$ph* self, char* key, struct buffer* item);
static void map$2char$phbuffer$ph_rehash(struct map$2char$phbuffer$ph* self);
static char* map$2char$phbuffer$ph_begin(struct map$2char$phbuffer$ph* self);
static _Bool map$2char$phbuffer$ph_end(struct map$2char$phbuffer$ph* self);
static char* map$2char$phbuffer$ph_next(struct map$2char$phbuffer$ph* self);
static struct buffer* map$2char$phbuffer$ph_at(struct map$2char$phbuffer$ph* self, char* key, struct buffer* default_value);
static void sNothingNode_finalize(struct sNothingNode* self);
static struct sNothingNode* sNothingNode_clone(struct sNothingNode* self);
static struct sUndefNode* sUndefNode_clone(struct sUndefNode* self);
static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item);
static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self);
static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value);
// uniq global variable
// inline function
static inline int align_up(int x, int align)
{
    return (x+align-1)&~(align-1);
}

// body function
struct sModuleNode* sModuleNode_initialize(struct sModuleNode* self, char* name, struct sClassModule* module, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    char* __dec_obj1;
    struct sClassModule* __dec_obj9;
    struct sModuleNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj1=self->name,
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj9=self->module,
    self->module=(struct sClassModule*)come_increment_ref_count(sClassModule_clone(module));
    come_call_finalizer(sClassModule_finalize, __dec_obj9,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sModuleNode*)come_increment_ref_count(self);
    come_call_finalizer(sModuleNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sClassModule_finalize, module, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sModuleNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sModuleNode_kind(struct sModuleNode* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sModuleNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sModuleNode_compile(struct sModuleNode* self, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    char* name;
    struct sClassModule* module;
    _Bool __result_obj__0;
    name=(char*)come_increment_ref_count(__builtin_string(self->name));
    module=self->module;
    __result_obj__0 = 1;
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__0;
}

static void sNodeBase_finalize(struct sNodeBase* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct sClassModule* sClassModule_clone(struct sClassModule* self)
{
    struct sClassModule* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sClassModule* result;
    char* __dec_obj2;
    char* __dec_obj3;
    struct list$1char$ph* __dec_obj7;
    char* __dec_obj8;
    if(self==(void*)0) {
        __result_obj__0 = (struct sClassModule*)come_increment_ref_count((void*)0);
        come_call_finalizer(sClassModule_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct sClassModule*)come_increment_ref_count((struct sClassModule*)come_calloc_v2(1, sizeof(struct sClassModule)*(1), "sClassModule_clone", 3, "struct sClassModule*"));
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj2=result->mName,
        result->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sClassModule_clone", 4, "char*"));
        __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mText!=((void*)0)) {
        __dec_obj3=result->mText,
        result->mText=(char*)come_increment_ref_count((char*)come_memdup(self->mText, "sClassModule_clone", 5, "char*"));
        __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParams!=((void*)0)) {
        __dec_obj7=result->mParams,
        result->mParams=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParams));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mSName!=((void*)0)) {
        __dec_obj8=result->mSName,
        result->mSName=(char*)come_increment_ref_count((char*)come_memdup(self->mSName, "sClassModule_clone", 7, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mSLine=self->mSLine;
    }
    __result_obj__0 = (struct sClassModule*)come_increment_ref_count(result);
    come_call_finalizer(sClassModule_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sClassModule_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void sClassModule_finalize(struct sClassModule* self)
{
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
    char* __dec_obj4;
    struct list_item$1char$ph* litem_0;
    char* __dec_obj5;
    struct list_item$1char$ph* litem_1;
    char* __dec_obj6;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1123, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj4=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_0=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1133, "struct list_item$1char$ph*"))));
        litem_0->prev=self->head;
        litem_0->next=((void*)0);
        __dec_obj5=litem_0->item,
        litem_0->item=(char*)come_increment_ref_count(item);
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_0;
        self->head->next=litem_0;
    }
    else {
        litem_1=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1143, "struct list_item$1char$ph*"))));
        litem_1->prev=self->tail;
        litem_1->next=((void*)0);
        __dec_obj6=litem_1->item,
        litem_1->item=(char*)come_increment_ref_count(item);
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_1;
        self->tail=litem_1;
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

static void sModuleNode_finalize(struct sModuleNode* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->name!=((void*)0)) {
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->module!=((void*)0)) {
        come_call_finalizer(sClassModule_finalize, self->module, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct sStaticAssert* sStaticAssert_initialize(struct sStaticAssert* self, struct sNode* exp, struct sNode* exp2, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj10;
    struct sNode* __dec_obj11;
    struct sStaticAssert* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj10=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(exp);
    (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj11=self->exp2,
    self->exp2=(struct sNode*)come_increment_ref_count(exp2);
    (__dec_obj11 ? __dec_obj11 = come_decrement_ref_count(__dec_obj11, ((struct sNode*)__dec_obj11)->finalize, ((struct sNode*)__dec_obj11)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sStaticAssert*)come_increment_ref_count(self);
    come_call_finalizer(sStaticAssert_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((exp2) ? exp2 = come_decrement_ref_count(exp2, ((struct sNode*)exp2)->finalize, ((struct sNode*)exp2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sStaticAssert_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sStaticAssert_kind(struct sStaticAssert* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sStaticAssert"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sStaticAssert_compile(struct sStaticAssert* self, struct sInfo* info)
{
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE* come_value;
    struct sNode* exp2;
    _Bool Value_2;
    struct CVALUE* come_value2;
    void* __right_value1 = (void*)0;
    struct CVALUE* come_value3;
    char* __dec_obj12;
    void* __right_value2 = (void*)0;
    struct sType* __exception_result_var_b1;
    struct sType* __exception_result_var_b2;
    struct sType* __dec_obj13;
    struct sType* __exception_result_var_b3;
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
    exp2=(struct sNode*)come_increment_ref_count(self->exp2);
    Value_2=node_compile(exp2,info);
    if(!Value_2) {
        __result_obj__0 = 0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((exp2) ? exp2 = come_decrement_ref_count(exp2, ((struct sNode*)exp2)->finalize, ((struct sNode*)exp2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__0;
    }
    else {
    }
    come_value2=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value3=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "24module.c", 56, "struct CVALUE*"))));
    __dec_obj12=come_value3->c_value,
    come_value3->c_value=(char*)come_increment_ref_count(xsprintf("_Static_assert(%s, %s)",come_value->c_value,come_value2->c_value));
    __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj13=come_value3->type,
    come_value3->type=(struct sType*)come_increment_ref_count((come_push_stackframe("24module.c", 59, 2),__exception_result_var_b3=(come_push_stackframe("24module.c", 59, 0),__exception_result_var_b1=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "24module.c", 59, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),0,info,0), come_pop_stackframe(), __exception_result_var_b1), come_pop_stackframe(), __exception_result_var_b3));
    come_call_finalizer(sType_finalize, __dec_obj13,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value3->var=((void*)0);
    add_come_last_code(info,"%s",come_value3->c_value);
    __result_obj__0 = 1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((exp2) ? exp2 = come_decrement_ref_count(exp2, ((struct sNode*)exp2)->finalize, ((struct sNode*)exp2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void sStaticAssert_finalize(struct sStaticAssert* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&self->exp2!=((void*)0)) {
        ((self->exp2) ? self->exp2 = come_decrement_ref_count(self->exp2, ((struct sNode*)self->exp2)->finalize, ((struct sNode*)self->exp2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
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

struct sUndefNode* sUndefNode_initialize(struct sUndefNode* self, char* str, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    char* __dec_obj14;
    struct sUndefNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj14=self->str,
    self->str=(char*)come_increment_ref_count(str);
    __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__0 = (struct sUndefNode*)come_increment_ref_count(self);
    come_call_finalizer(sUndefNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sUndefNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sUndefNode_kind(struct sUndefNode* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sUndefNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sUndefNode_compile(struct sUndefNode* self, struct sInfo* info)
{
    char* str;
    _Bool __result_obj__0;
    str=(char*)come_increment_ref_count(self->str);
    map$2char$phbuffer$ph_remove(info->struct_definition,(char*)come_increment_ref_count(str));
    map$2char$phsFun$ph_remove(info->funcs,(char*)come_increment_ref_count(str));
    map$2char$phsGenericsFun$ph_remove(info->generics_funcs,(char*)come_increment_ref_count(str));
    map$2char$phsClassModule$ph_remove(info->modules,(char*)come_increment_ref_count(str));
    map$2char$phsType$ph_remove(info->types,(char*)come_increment_ref_count(str));
    map$2char$phbuffer$ph_remove(info->typedef_definition,(char*)come_increment_ref_count(str));
    __result_obj__0 = 1;
    (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__0;
}

static void sUndefNode_finalize(struct sUndefNode* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->str!=((void*)0)) {
        (self->str = come_decrement_ref_count(self->str, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_remove(struct map$2char$phbuffer$ph* self, char* key)
{
    struct map$2char$phbuffer$ph* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                list$1char$ph_remove(self->key_list,self->keys[it]);
                self->item_existance[it]=0;
                if(1) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0));
                }
                self->keys[it]=((void*)0);
                if(1) {
                    come_call_finalizer(buffer_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                memset(self->items+it,0,sizeof(struct buffer*));
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
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item)
{
    struct list$1char$ph* __result_obj__0;
    int it2;
    struct list_item$1char$ph* it;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        return __result_obj__0;
    }
    it2=0;
    it=self->head;
    while(it!=((void*)0)) {
        if(string_equals(it->item,item)) {
            list$1char$ph_delete(self,it2,it2+1);
            break;
        }
        it2++;
        it=it->next;
    }
    __result_obj__0 = self;
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail)
{
    struct list$1char$ph* __result_obj__0;
    int tmp;
    struct list_item$1char$ph* it;
    int i;
    struct list_item$1char$ph* prev_it;
    struct list_item$1char$ph* it_3;
    int i_4;
    struct list_item$1char$ph* prev_it_5;
    struct list_item$1char$ph* it_6;
    struct list_item$1char$ph* head_prev_it;
    struct list_item$1char$ph* tail_it;
    int i_7;
    struct list_item$1char$ph* prev_it_8;
    if(self==((void*)0)) {
        __result_obj__0 = self;
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
        return __result_obj__0;
    }
    if(head==tail) {
        __result_obj__0 = self;
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
        it_3=self->head;
        i_4=0;
        while(it_3!=((void*)0)) {
            if(i_4==head) {
                self->tail=it_3->prev;
                self->tail->next=((void*)0);
            }
            if(i_4>=head) {
                prev_it_5=it_3;
                it_3=it_3->next;
                i_4++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_5, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_3=it_3->next;
                i_4++;
            }
        }
    }
    else {
        it_6=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_7=0;
        while(it_6!=((void*)0)) {
            if(i_7==head) {
                head_prev_it=it_6->prev;
            }
            if(i_7==tail) {
                tail_it=it_6;
            }
            if(i_7>=head&&i_7<tail) {
                prev_it_8=it_6;
                it_6=it_6->next;
                i_7++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_8, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_6=it_6->next;
                i_7++;
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
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self)
{
    struct list$1char$ph* __result_obj__0;
    struct list_item$1char$ph* it;
    struct list_item$1char$ph* prev_it;
    if(self==((void*)0)) {
        __result_obj__0 = self;
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
    return __result_obj__0;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char* key)
{
    struct map$2char$phsFun$ph* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                list$1char$ph_remove(self->key_list,self->keys[it]);
                self->item_existance[it]=0;
                if(1) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0));
                }
                self->keys[it]=((void*)0);
                if(1) {
                    come_call_finalizer(sFun_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                memset(self->items+it,0,sizeof(struct sFun*));
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
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
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

static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph_remove(struct map$2char$phsGenericsFun$ph* self, char* key)
{
    struct map$2char$phsGenericsFun$ph* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                list$1char$ph_remove(self->key_list,self->keys[it]);
                self->item_existance[it]=0;
                if(1) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0));
                }
                self->keys[it]=((void*)0);
                if(1) {
                    come_call_finalizer(sGenericsFun_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                memset(self->items+it,0,sizeof(struct sGenericsFun*));
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
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__0;
}

static void sGenericsFun_finalize(struct sGenericsFun* self)
{
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
}

static struct map$2char$phsClassModule$ph* map$2char$phsClassModule$ph_remove(struct map$2char$phsClassModule$ph* self, char* key)
{
    struct map$2char$phsClassModule$ph* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                list$1char$ph_remove(self->key_list,self->keys[it]);
                self->item_existance[it]=0;
                if(1) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0));
                }
                self->keys[it]=((void*)0);
                if(1) {
                    come_call_finalizer(sClassModule_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                memset(self->items+it,0,sizeof(struct sClassModule*));
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
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__0;
}

static struct map$2char$phsType$ph* map$2char$phsType$ph_remove(struct map$2char$phsType$ph* self, char* key)
{
    struct map$2char$phsType$ph* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                list$1char$ph_remove(self->key_list,self->keys[it]);
                self->item_existance[it]=0;
                if(1) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0));
                }
                self->keys[it]=((void*)0);
                if(1) {
                    come_call_finalizer(sType_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                memset(self->items+it,0,sizeof(struct sType*));
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
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__0;
}

struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    struct sNoneNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__0 = (struct sNoneNode*)come_increment_ref_count(self);
    come_call_finalizer(sNoneNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sNoneNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char* sNoneNode_kind(struct sNoneNode* self)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sNoneNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info)
{
    return 1;
}

static void sNoneNode_finalize(struct sNoneNode* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value1;
    struct sStaticAssert* _inf_obj_value1;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "24module.c", 113, "struct sNode");
    _inf_obj_value1=(struct sStaticAssert*)come_increment_ref_count(((struct sStaticAssert*)(__right_value1=sStaticAssert_initialize((struct sStaticAssert*)come_increment_ref_count((struct sStaticAssert*)come_calloc_v2(1, sizeof(struct sStaticAssert)*(1), "24module.c", 113, "struct sStaticAssert*")),(struct sNode*)come_increment_ref_count(exp),(struct sNode*)come_increment_ref_count(exp2),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStaticAssert_finalize;
    _inf_value1->clone=(void*)sStaticAssert_clone;
    _inf_value1->compile=(void*)sStaticAssert_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStaticAssert_kind;
    _inf_value1->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value1)));
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((exp2) ? exp2 = come_decrement_ref_count(exp2, ((struct sNode*)exp2)->finalize, ((struct sNode*)exp2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sStaticAssert_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct sStaticAssert* sStaticAssert_clone(struct sStaticAssert* self)
{
    struct sStaticAssert* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sStaticAssert* result;
    char* __dec_obj15;
    struct sNode* __dec_obj16;
    struct sNode* __dec_obj17;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sStaticAssert*)come_increment_ref_count((struct sStaticAssert*)come_calloc_v2(1, sizeof(struct sStaticAssert)*(1), "sStaticAssert_clone", 3, "struct sStaticAssert*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj15=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStaticAssert_clone", 5, "char*"));
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj16=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&self->exp2!=((void*)0)) {
        __dec_obj17=result->exp2,
        result->exp2=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp2));
        (__dec_obj17 ? __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sStaticAssert_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
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

int sizeof_struct(struct sType* type, struct sInfo* info)
{
    int offset;
    int max_align;
    int n;
    int i;
    void* __right_value0 = (void*)0;
    struct tuple2$2char$phsType$ph* multiple_assign_var1
;    char* name=0;
    struct sType* field_type=0;
    int align;
    int size;
    int __result_obj__0;
    offset=0;
    max_align=1;
    n=list$1tuple2$2char$phsType$ph$ph_length(type->mClass->mFields);
    for(i=0;i<n;i++){
        multiple_assign_var1=((struct tuple2$2char$phsType$ph*)(__right_value0=list$1tuple2$2char$phsType$ph$ph_operator_load_element(type->mClass->mFields,i)));
        name=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        field_type=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        align=alignof_type((struct sType*)come_increment_ref_count(field_type),info);
        size=(sizeof_type)((struct sType*)come_increment_ref_count(field_type),info);
        offset=align_up(offset,align);
        offset+=size;
        if(align>max_align) {
            max_align=align;
        }
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    offset=align_up(offset,max_align);
    __result_obj__0 = offset;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
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
    struct tuple2$2char$phsType$ph* default_value_9;
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
    memset(&default_value_9,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value_9);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value_9, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
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

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position)
{
    struct tuple2$2char$phsType$ph* default_value;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
    int i;
    struct tuple2$2char$phsType$ph* default_value_10;
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
    memset(&default_value_10,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value_10);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value_10, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

int sizeof_union(struct sType* type, struct sInfo* info)
{
    int max_size;
    int max_align;
    int n;
    int i;
    void* __right_value0 = (void*)0;
    struct tuple2$2char$phsType$ph* multiple_assign_var2
;    char* name=0;
    struct sType* field_type=0;
    int size;
    int align;
    int __result_obj__0;
    max_size=0;
    max_align=1;
    n=list$1tuple2$2char$phsType$ph$ph_length(type->mClass->mFields);
    for(i=0;i<n;i++){
        multiple_assign_var2=((struct tuple2$2char$phsType$ph*)(__right_value0=list$1tuple2$2char$phsType$ph$ph_operator_load_element(type->mClass->mFields,i)));
        name=(char*)come_increment_ref_count(multiple_assign_var2->v1);
        field_type=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        size=(sizeof_type)((struct sType*)come_increment_ref_count(field_type),info);
        align=alignof_type((struct sType*)come_increment_ref_count(field_type),info);
        if(size>max_size) {
            max_size=size;
        }
        if(align>max_align) {
            max_align=align;
        }
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = align_up(max_size,max_align);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

int sizeof_type(struct sType* type, struct sInfo* info)
{
    int element_num;
    int i;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    _Bool no_output_come_code;
    _Bool Value;
    struct CVALUE* cvalue;
    struct sType* element_type;
    int __result_obj__0;
    if(list$1sNode$ph_length(type->mArrayNum)>0) {
        element_num=0;
        for(i=0;i<list$1sNode$ph_length(type->mArrayNum);i++){
            node=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(type->mArrayNum,i));
            no_output_come_code=info->no_output_come_code;
            info->no_output_come_code=1;
            Value=node_compile(node,info);
            if(!Value) {
                err_msg(info,"invalid array num");
                exit(2);
            }
            else {
            }
            info->no_output_come_code=no_output_come_code;
            cvalue=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            element_num+=atoi(cvalue->c_value);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        element_type=(struct sType*)come_increment_ref_count(sType_clone(type));
        list$1sNode$ph_reset(element_type->mArrayNum);
        __result_obj__0 = (sizeof_type)((struct sType*)come_increment_ref_count(element_type),info)*element_num;
        come_call_finalizer(sType_finalize, element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(type->mPointerNum>0) {
        __result_obj__0 = 8;
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    if(type->mClass->mStruct) {
        __result_obj__0 = (sizeof_struct)((struct sType*)come_increment_ref_count(type),info);
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    if(type->mClass->mUnion) {
        __result_obj__0 = (sizeof_union)((struct sType*)come_increment_ref_count(type),info);
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    if(string_operator_equals(type->mClass->mName,"char")) {
        __result_obj__0 = 1;
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    if(string_operator_equals(type->mClass->mName,"short")) {
        __result_obj__0 = 2;
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    if(string_operator_equals(type->mClass->mName,"int")) {
        __result_obj__0 = 4;
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    if(string_operator_equals(type->mClass->mName,"long")) {
        __result_obj__0 = 8;
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    err_msg(info,"sizeof: unsupported type");
    exit(2);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self)
{
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position)
{
    struct sNode* default_value;
    struct sNode* __result_obj__0;
    struct list_item$1sNode$ph* it;
    int i;
    struct sNode* default_value_11;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sNode*));
        __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value);
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct sNode*)come_increment_ref_count(it->item);
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_11,0,sizeof(struct sNode*));
    __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value_11);
    ((default_value_11) ? default_value_11 = come_decrement_ref_count(default_value_11, ((struct sNode*)default_value_11)->finalize, ((struct sNode*)default_value_11)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position)
{
    struct sNode* default_value;
    struct sNode* __result_obj__0;
    struct list_item$1sNode$ph* it;
    int i;
    struct sNode* default_value_12;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sNode*));
        __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value);
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct sNode*)come_increment_ref_count(it->item);
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_12,0,sizeof(struct sNode*));
    __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value_12);
    ((default_value_12) ? default_value_12 = come_decrement_ref_count(default_value_12, ((struct sNode*)default_value_12)->finalize, ((struct sNode*)default_value_12)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct sType* sType_clone(struct sType* self)
{
    struct sType* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sType* result;
    struct sType* __dec_obj18;
    struct sType* __dec_obj19;
    struct list$1sType$ph* __dec_obj23;
    struct sType* __dec_obj24;
    struct sNode* __dec_obj25;
    struct sNode* __dec_obj26;
    char* __dec_obj27;
    char* __dec_obj28;
    char* __dec_obj29;
    char* __dec_obj30;
    char* __dec_obj31;
    char* __dec_obj32;
    struct list$1sNode$ph* __dec_obj36;
    struct list$1sNode$ph* __dec_obj37;
    struct list$1int$* __dec_obj38;
    struct list$1int$* __dec_obj39;
    struct sType* __dec_obj40;
    char* __dec_obj41;
    struct list$1sType$ph* __dec_obj42;
    struct list$1char$ph* __dec_obj43;
    struct sType* __dec_obj44;
    struct sNode* __dec_obj45;
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
        __dec_obj18=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj18,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj19=result->mChannelType,
        result->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj19,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj23=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj24=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj25=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj25 ? __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj26=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj26 ? __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)) {
        result->mAlignasDouble=self->mAlignasDouble;
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj27=result->mTupleName,
        result->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 12, "char*"));
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj28=result->mAttribute,
        result->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 13, "char*"));
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        __dec_obj29=result->mVarAttribute,
        result->mVarAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mVarAttribute, "sType_clone", 14, "char*"));
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0);
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
        __dec_obj30=result->mAnonymousName,
        result->mAnonymousName=(char*)come_increment_ref_count((char*)come_memdup(self->mAnonymousName, "sType_clone", 39, "char*"));
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mInnerStruct=self->mInnerStruct;
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        __dec_obj31=result->mInnerStructName,
        result->mInnerStructName=(char*)come_increment_ref_count((char*)come_memdup(self->mInnerStructName, "sType_clone", 41, "char*"));
        __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0, (void*)0);
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
        __dec_obj32=result->mAsmName,
        result->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 46, "char*"));
        __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj36=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        __dec_obj37=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj37,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        __dec_obj38=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic));
        come_call_finalizer(list$1int$_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        __dec_obj39=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict));
        come_call_finalizer(list$1int$_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        __dec_obj40=result->mTypedefOriginalType,
        result->mTypedefOriginalType=(struct sType*)come_increment_ref_count(sType_clone(self->mTypedefOriginalType));
        come_call_finalizer(sType_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj41=result->mOriginalTypeName,
        result->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 58, "char*"));
        __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0, (void*)0);
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
        __dec_obj42=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj43=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj43,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj44=result->mResultType,
        result->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        __dec_obj45=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode));
        (__dec_obj45 ? __dec_obj45 = come_decrement_ref_count(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = (struct sType*)come_increment_ref_count(result);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
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
    struct sType* __dec_obj20;
    struct list_item$1sType$ph* litem_13;
    struct sType* __dec_obj21;
    struct list_item$1sType$ph* litem_14;
    struct sType* __dec_obj22;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1123, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj20=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj20,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_13=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1133, "struct list_item$1sType$ph*"))));
        litem_13->prev=self->head;
        litem_13->next=((void*)0);
        __dec_obj21=litem_13->item,
        litem_13->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj21,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_13;
        self->head->next=litem_13;
    }
    else {
        litem_14=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1143, "struct list_item$1sType$ph*"))));
        litem_14->prev=self->tail;
        litem_14->next=((void*)0);
        __dec_obj22=litem_14->item,
        litem_14->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj22,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_14;
        self->tail=litem_14;
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
    struct sNode* __dec_obj33;
    struct list_item$1sNode$ph* litem_15;
    struct sNode* __dec_obj34;
    struct list_item$1sNode$ph* litem_16;
    struct sNode* __dec_obj35;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1123, "struct list_item$1sNode$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj33=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj33 ? __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_15=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1133, "struct list_item$1sNode$ph*"))));
        litem_15->prev=self->head;
        litem_15->next=((void*)0);
        __dec_obj34=litem_15->item,
        litem_15->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj34 ? __dec_obj34 = come_decrement_ref_count(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem_15;
        self->head->next=litem_15;
    }
    else {
        litem_16=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1143, "struct list_item$1sNode$ph*"))));
        litem_16->prev=self->tail;
        litem_16->next=((void*)0);
        __dec_obj35=litem_16->item,
        litem_16->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj35 ? __dec_obj35 = come_decrement_ref_count(__dec_obj35, ((struct sNode*)__dec_obj35)->finalize, ((struct sNode*)__dec_obj35)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail->next=litem_16;
        self->tail=litem_16;
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
    struct list_item$1int$* litem_17;
    struct list_item$1int$* litem_18;
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
        litem_17=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1133, "struct list_item$1int$*"))));
        litem_17->prev=self->head;
        litem_17->next=((void*)0);
        litem_17->item=item;
        self->tail=litem_17;
        self->head->next=litem_17;
    }
    else {
        litem_18=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1143, "struct list_item$1int$*"))));
        litem_18->prev=self->tail;
        litem_18->next=((void*)0);
        litem_18->item=item;
        self->tail->next=litem_18;
        self->tail=litem_18;
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

int alignof_type(struct sType* type, struct sInfo* info)
{
    int __result_obj__0;
    int max_align;
    int n;
    int i;
    void* __right_value0 = (void*)0;
    struct tuple2$2char$phsType$ph* multiple_assign_var3
;    char* name=0;
    struct sType* field_type=0;
    int a;
    if(type->mPointerNum>0) {
        __result_obj__0 = 8;
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    if(type->mClass->mStruct||type->mClass->mUnion) {
        max_align=1;
        n=list$1tuple2$2char$phsType$ph$ph_length(type->mClass->mFields);
        for(i=0;i<n;i++){
            multiple_assign_var3=((struct tuple2$2char$phsType$ph*)(__right_value0=list$1tuple2$2char$phsType$ph$ph_operator_load_element(type->mClass->mFields,i)));
            name=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            field_type=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
            come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            a=alignof_type((struct sType*)come_increment_ref_count(field_type),info);
            if(a>max_align) {
                max_align=a;
            }
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        __result_obj__0 = max_align;
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    if(string_operator_equals(type->mClass->mName,"char")) {
        __result_obj__0 = 1;
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    if(string_operator_equals(type->mClass->mName,"short")) {
        __result_obj__0 = 2;
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    if(string_operator_equals(type->mClass->mName,"int")) {
        __result_obj__0 = 4;
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    if(string_operator_equals(type->mClass->mName,"long")) {
        __result_obj__0 = 8;
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    err_msg(info,"sizeof: unsupported type");
    exit(2);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* reflection_node(struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    char* exp;
    char* result;
    struct sType* Value;
    _Bool _conditional_value_X0;
    unsigned long  int size;
    char* __dec_obj46;
    char* __result_obj__0;
    char* exp_19;
    char* result_20;
    struct sType* Value_21;
    _Bool _conditional_value_X1;
    unsigned long  int size_22;
    char* __dec_obj47;
    char* exp_23;
    _Bool defined;
    struct buffer* Value_24;
    _Bool _conditional_value_X2;
    struct sFun* Value_25;
    _Bool _conditional_value_X3;
    struct sGenericsFun* Value_26;
    _Bool _conditional_value_X4;
    struct sClassModule* Value_27;
    _Bool _conditional_value_X5;
    struct sType* Value_28;
    _Bool _conditional_value_X6;
    struct sVar* Value_29;
    char* exp_30;
    char* exp_31;
    char* exp_32;
    char* exp_33;
    char* exp_34;
    _Bool defined_35;
    struct sType* Value_36;
    _Bool _conditional_value_X7;
    char* exp_37;
    char* result_38;
    struct sFun* Value_39;
    _Bool _conditional_value_X8;
    char* __dec_obj48;
    struct sVar* Value_40;
    char* __dec_obj49;
    char* exp_41;
    char* result_42;
    struct sFun* Value_43;
    _Bool _conditional_value_X9;
    char* __dec_obj50;
    char* exp_44;
    char* exp2;
    char* result_45;
    struct sFun* Value_46;
    _Bool _conditional_value_X10;
    struct sType* type;
    char* __dec_obj51;
    char* exp_49;
    char* exp2_50;
    char* result_51;
    struct sFun* Value_52;
    _Bool _conditional_value_X11;
    char* __dec_obj52;
    char* exp_55;
    char* result_56;
    struct sFun* Value_57;
    _Bool _conditional_value_X12;
    char* __dec_obj53;
    char* exp_58;
    char* result_59;
    struct sClass* Value_60;
    _Bool _conditional_value_X13;
    char* __dec_obj54;
    char* exp_61;
    char* exp2_62;
    char* result_63;
    struct sClass* Value_64;
    _Bool _conditional_value_X14;
    int n;
    struct tuple2$2char$phsType$ph* multiple_assign_var4
;    char* name=0;
    struct sType* type_65=0;
    char* __dec_obj55;
    char* exp_66;
    _Bool defined_67;
    struct sFun* Value_68;
    _Bool _conditional_value_X15;
    char* exp_69;
    _Bool defined_70;
    struct sClass* Value_71;
    _Bool _conditional_value_X16;
    char* exp_72;
    _Bool defined_73;
    struct sClass* Value_74;
    _Bool _conditional_value_X17;
    char* exp_75;
    _Bool defined_76;
    struct sClass* Value_77;
    _Bool _conditional_value_X18;
    char* exp_78;
    _Bool defined_79;
    struct sClass* Value_80;
    _Bool _conditional_value_X19;
    char* exp_81;
    _Bool defined_82;
    struct sClass* Value_83;
    _Bool _conditional_value_X20;
    char* exp_84;
    _Bool defined_85;
    struct sClassModule* Value_86;
    _Bool _conditional_value_X21;
    int sline_real;
    int sline;
    void* __right_value1 = (void*)0;
    struct buffer* value;
    char* p;
    int sline_87;
    char* exp_88;
    int __exception_result_var_b4;
    int sline2;
    char* var_name;
    char* value_89;
    struct buffer* buf;
    int n_90;
    int n_91;
    char* exp_92;
    if(parsecmp("sizeof",info)) {
        (void)((char*)(__right_value0=parse_word(0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        skip_spaces_and_lf(info);
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        exp=(char*)come_increment_ref_count(reflection_expression(info));
        if(*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        result=((void*)0);
        Value=(struct sType*)come_increment_ref_count(map$2char$phsType$ph_operator_load_element(info->types,exp));
        if(({(_conditional_value_X0=(Value));_conditional_value_X0;})) {
            size=(sizeof_type)((struct sType*)come_increment_ref_count(Value),info);
            __dec_obj46=result,
            result=(char*)come_increment_ref_count(size_t_to_string(size));
            __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else {
        }
        if(result) {
            __result_obj__0 = (char*)come_increment_ref_count(result);
            (exp = come_decrement_ref_count(exp, (void*)0, (void*)0, 0, 0, (void*)0));
            (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
            come_call_finalizer(sType_finalize, Value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        else {
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))));
            (exp = come_decrement_ref_count(exp, (void*)0, (void*)0, 0, 0, (void*)0));
            (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, Value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        (exp = come_decrement_ref_count(exp, (void*)0, (void*)0, 0, 0, (void*)0));
        (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, Value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(parsecmp("alignof",info)) {
        (void)((char*)(__right_value0=parse_word(0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        skip_spaces_and_lf(info);
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        exp_19=(char*)come_increment_ref_count(reflection_expression(info));
        if(*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        result_20=((void*)0);
        Value_21=(struct sType*)come_increment_ref_count(map$2char$phsType$ph_operator_load_element(info->types,exp_19));
        if(({(_conditional_value_X1=(Value_21));_conditional_value_X1;})) {
            size_22=alignof_type((struct sType*)come_increment_ref_count(Value_21),info);
            __dec_obj47=result_20,
            result_20=(char*)come_increment_ref_count(size_t_to_string(size_22));
            __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else {
        }
        if(result_20) {
            __result_obj__0 = (char*)come_increment_ref_count(result_20);
            (exp_19 = come_decrement_ref_count(exp_19, (void*)0, (void*)0, 0, 0, (void*)0));
            (result_20 = come_decrement_ref_count(result_20, (void*)0, (void*)0, 0, 1, (void*)0));
            come_call_finalizer(sType_finalize, Value_21, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        else {
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))));
            (exp_19 = come_decrement_ref_count(exp_19, (void*)0, (void*)0, 0, 0, (void*)0));
            (result_20 = come_decrement_ref_count(result_20, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, Value_21, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        (exp_19 = come_decrement_ref_count(exp_19, (void*)0, (void*)0, 0, 0, (void*)0));
        (result_20 = come_decrement_ref_count(result_20, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, Value_21, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(parsecmp("defined",info)) {
        (void)((char*)(__right_value0=parse_word(0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        skip_spaces_and_lf(info);
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        exp_23=(char*)come_increment_ref_count(reflection_expression(info));
        if(*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        defined=0;
        Value_24=(struct buffer*)come_increment_ref_count(map$2char$phbuffer$ph_operator_load_element(info->struct_definition,exp_23));
        if(({(_conditional_value_X2=(Value_24));_conditional_value_X2;})) {
            defined=1;
        }
        else {
        }
        come_call_finalizer(buffer_finalize, Value_24, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        Value_25=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,exp_23));
        if(({(_conditional_value_X3=(Value_25));_conditional_value_X3;})) {
            defined=1;
        }
        else {
        }
        come_call_finalizer(sFun_finalize, Value_25, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        Value_26=(struct sGenericsFun*)come_increment_ref_count(map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,exp_23));
        if(({(_conditional_value_X4=(Value_26));_conditional_value_X4;})) {
            defined=1;
        }
        else {
        }
        come_call_finalizer(sGenericsFun_finalize, Value_26, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        Value_27=(struct sClassModule*)come_increment_ref_count(map$2char$phsClassModule$ph_operator_load_element(info->modules,exp_23));
        if(({(_conditional_value_X5=(Value_27));_conditional_value_X5;})) {
            defined=1;
        }
        else {
        }
        come_call_finalizer(sClassModule_finalize, Value_27, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        Value_28=(struct sType*)come_increment_ref_count(map$2char$phsType$ph_operator_load_element(info->types,exp_23));
        if(({(_conditional_value_X6=(Value_28));_conditional_value_X6;})) {
            defined=1;
        }
        else {
        }
        come_call_finalizer(sType_finalize, Value_28, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        Value_29=get_variable_from_table(info->gv_table,exp_23);
        if(Value_29) {
            defined=1;
        }
        else {
        }
        if(defined) {
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))));
            (exp_23 = come_decrement_ref_count(exp_23, (void*)0, (void*)0, 0, 0, (void*)0));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        else {
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))));
            (exp_23 = come_decrement_ref_count(exp_23, (void*)0, (void*)0, 0, 0, (void*)0));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        (exp_23 = come_decrement_ref_count(exp_23, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(parsecmp("is_static",info)) {
        (void)((char*)(__right_value0=parse_word(0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        skip_spaces_and_lf(info);
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        exp_30=(char*)come_increment_ref_count(reflection_expression(info));
        if(*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        if(strstr(exp_30,"static ")) {
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))));
            (exp_30 = come_decrement_ref_count(exp_30, (void*)0, (void*)0, 0, 0, (void*)0));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        else {
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))));
            (exp_30 = come_decrement_ref_count(exp_30, (void*)0, (void*)0, 0, 0, (void*)0));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        (exp_30 = come_decrement_ref_count(exp_30, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(parsecmp("is_heap",info)) {
        (void)((char*)(__right_value0=parse_word(0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        skip_spaces_and_lf(info);
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        exp_31=(char*)come_increment_ref_count(reflection_expression(info));
        if(*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        if(strstr(exp_31,"%")) {
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))));
            (exp_31 = come_decrement_ref_count(exp_31, (void*)0, (void*)0, 0, 0, (void*)0));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        else {
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))));
            (exp_31 = come_decrement_ref_count(exp_31, (void*)0, (void*)0, 0, 0, (void*)0));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        (exp_31 = come_decrement_ref_count(exp_31, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(parsecmp("is_const",info)) {
        (void)((char*)(__right_value0=parse_word(0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        skip_spaces_and_lf(info);
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        exp_32=(char*)come_increment_ref_count(reflection_expression(info));
        if(*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        if(strstr(exp_32,"const ")) {
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))));
            (exp_32 = come_decrement_ref_count(exp_32, (void*)0, (void*)0, 0, 0, (void*)0));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        else {
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))));
            (exp_32 = come_decrement_ref_count(exp_32, (void*)0, (void*)0, 0, 0, (void*)0));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        (exp_32 = come_decrement_ref_count(exp_32, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(parsecmp("is_uniq",info)) {
        (void)((char*)(__right_value0=parse_word(0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        skip_spaces_and_lf(info);
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        exp_33=(char*)come_increment_ref_count(reflection_expression(info));
        if(*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        if(strstr(exp_33,"uniq ")) {
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))));
            (exp_33 = come_decrement_ref_count(exp_33, (void*)0, (void*)0, 0, 0, (void*)0));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        else {
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))));
            (exp_33 = come_decrement_ref_count(exp_33, (void*)0, (void*)0, 0, 0, (void*)0));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        (exp_33 = come_decrement_ref_count(exp_33, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(parsecmp("is_type",info)) {
        (void)((char*)(__right_value0=parse_word(0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        skip_spaces_and_lf(info);
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        exp_34=(char*)come_increment_ref_count(reflection_expression(info));
        if(*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        defined_35=0;
        Value_36=(struct sType*)come_increment_ref_count(map$2char$phsType$ph_operator_load_element(info->types,exp_34));
        if(({(_conditional_value_X7=(Value_36));_conditional_value_X7;})) {
            defined_35=1;
        }
        else {
        }
        if(defined_35) {
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))));
            (exp_34 = come_decrement_ref_count(exp_34, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, Value_36, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        else {
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))));
            (exp_34 = come_decrement_ref_count(exp_34, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, Value_36, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        (exp_34 = come_decrement_ref_count(exp_34, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, Value_36, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(parsecmp("type",info)) {
        (void)((char*)(__right_value0=parse_word(0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        skip_spaces_and_lf(info);
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        exp_37=(char*)come_increment_ref_count(reflection_expression(info));
        if(*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        result_38=((void*)0);
        Value_39=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,exp_37));
        if(({(_conditional_value_X8=(Value_39));_conditional_value_X8;})) {
            __dec_obj48=result_38,
            result_38=(char*)come_increment_ref_count(make_come_type_name_string(Value_39->mResultType,info));
            __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else {
        }
        come_call_finalizer(sFun_finalize, Value_39, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        Value_40=get_variable_from_table(info->gv_table,exp_37);
        if(Value_40) {
            __dec_obj49=result_38,
            result_38=(char*)come_increment_ref_count(make_come_type_name_string(Value_40->mType,info));
            __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else {
        }
        if(result_38) {
            __result_obj__0 = (char*)come_increment_ref_count(result_38);
            (exp_37 = come_decrement_ref_count(exp_37, (void*)0, (void*)0, 0, 0, (void*)0));
            (result_38 = come_decrement_ref_count(result_38, (void*)0, (void*)0, 0, 1, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        else {
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))));
            (exp_37 = come_decrement_ref_count(exp_37, (void*)0, (void*)0, 0, 0, (void*)0));
            (result_38 = come_decrement_ref_count(result_38, (void*)0, (void*)0, 0, 0, (void*)0));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        (exp_37 = come_decrement_ref_count(exp_37, (void*)0, (void*)0, 0, 0, (void*)0));
        (result_38 = come_decrement_ref_count(result_38, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(parsecmp("result_type",info)) {
        (void)((char*)(__right_value0=parse_word(0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        skip_spaces_and_lf(info);
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        exp_41=(char*)come_increment_ref_count(reflection_expression(info));
        if(*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        result_42=((void*)0);
        Value_43=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,exp_41));
        if(({(_conditional_value_X9=(Value_43));_conditional_value_X9;})) {
            __dec_obj50=result_42,
            result_42=(char*)come_increment_ref_count(make_come_type_name_string(Value_43->mResultType,info));
            __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else {
        }
        if(result_42) {
            __result_obj__0 = (char*)come_increment_ref_count(result_42);
            (exp_41 = come_decrement_ref_count(exp_41, (void*)0, (void*)0, 0, 0, (void*)0));
            (result_42 = come_decrement_ref_count(result_42, (void*)0, (void*)0, 0, 1, (void*)0));
            come_call_finalizer(sFun_finalize, Value_43, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        else {
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))));
            (exp_41 = come_decrement_ref_count(exp_41, (void*)0, (void*)0, 0, 0, (void*)0));
            (result_42 = come_decrement_ref_count(result_42, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sFun_finalize, Value_43, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        (exp_41 = come_decrement_ref_count(exp_41, (void*)0, (void*)0, 0, 0, (void*)0));
        (result_42 = come_decrement_ref_count(result_42, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sFun_finalize, Value_43, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(parsecmp("param_types",info)) {
        (void)((char*)(__right_value0=parse_word(0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        skip_spaces_and_lf(info);
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        exp_44=(char*)come_increment_ref_count(reflection_expression(info));
        if(*info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        exp2=(char*)come_increment_ref_count(reflection_expression(info));
        if(*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        result_45=((void*)0);
        Value_46=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,exp_44));
        if(({(_conditional_value_X10=(Value_46));_conditional_value_X10;})) {
            type=((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(Value_46->mParamTypes,atoi(exp2))));
            if(type) {
                __dec_obj51=result_45,
                result_45=(char*)come_increment_ref_count(make_come_type_name_string(type,info));
                __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0, (void*)0);
            }
        }
        else {
        }
        if(result_45) {
            __result_obj__0 = (char*)come_increment_ref_count(result_45);
            (exp_44 = come_decrement_ref_count(exp_44, (void*)0, (void*)0, 0, 0, (void*)0));
            (exp2 = come_decrement_ref_count(exp2, (void*)0, (void*)0, 0, 0, (void*)0));
            (result_45 = come_decrement_ref_count(result_45, (void*)0, (void*)0, 0, 1, (void*)0));
            come_call_finalizer(sFun_finalize, Value_46, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        else {
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))));
            (exp_44 = come_decrement_ref_count(exp_44, (void*)0, (void*)0, 0, 0, (void*)0));
            (exp2 = come_decrement_ref_count(exp2, (void*)0, (void*)0, 0, 0, (void*)0));
            (result_45 = come_decrement_ref_count(result_45, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sFun_finalize, Value_46, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        (exp_44 = come_decrement_ref_count(exp_44, (void*)0, (void*)0, 0, 0, (void*)0));
        (exp2 = come_decrement_ref_count(exp2, (void*)0, (void*)0, 0, 0, (void*)0));
        (result_45 = come_decrement_ref_count(result_45, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sFun_finalize, Value_46, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(parsecmp("param_names",info)) {
        (void)((char*)(__right_value0=parse_word(0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        skip_spaces_and_lf(info);
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        exp_49=(char*)come_increment_ref_count(reflection_expression(info));
        if(*info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        exp2_50=(char*)come_increment_ref_count(reflection_expression(info));
        if(*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        result_51=((void*)0);
        Value_52=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,exp_49));
        if(({(_conditional_value_X11=(Value_52));_conditional_value_X11;})) {
            __dec_obj52=result_51,
            result_51=(char*)come_increment_ref_count(list$1char$ph_operator_load_element(Value_52->mParamNames,atoi(exp2_50)));
            __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else {
        }
        if(result_51) {
            __result_obj__0 = (char*)come_increment_ref_count(result_51);
            (exp_49 = come_decrement_ref_count(exp_49, (void*)0, (void*)0, 0, 0, (void*)0));
            (exp2_50 = come_decrement_ref_count(exp2_50, (void*)0, (void*)0, 0, 0, (void*)0));
            (result_51 = come_decrement_ref_count(result_51, (void*)0, (void*)0, 0, 1, (void*)0));
            come_call_finalizer(sFun_finalize, Value_52, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        else {
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))));
            (exp_49 = come_decrement_ref_count(exp_49, (void*)0, (void*)0, 0, 0, (void*)0));
            (exp2_50 = come_decrement_ref_count(exp2_50, (void*)0, (void*)0, 0, 0, (void*)0));
            (result_51 = come_decrement_ref_count(result_51, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sFun_finalize, Value_52, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        (exp_49 = come_decrement_ref_count(exp_49, (void*)0, (void*)0, 0, 0, (void*)0));
        (exp2_50 = come_decrement_ref_count(exp2_50, (void*)0, (void*)0, 0, 0, (void*)0));
        (result_51 = come_decrement_ref_count(result_51, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sFun_finalize, Value_52, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(parsecmp("num_param_types",info)) {
        (void)((char*)(__right_value0=parse_word(0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        skip_spaces_and_lf(info);
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        exp_55=(char*)come_increment_ref_count(reflection_expression(info));
        if(*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        result_56=((void*)0);
        Value_57=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,exp_55));
        if(({(_conditional_value_X12=(Value_57));_conditional_value_X12;})) {
            __dec_obj53=result_56,
            result_56=(char*)come_increment_ref_count(xsprintf("%d",list$1sType$ph_length(Value_57->mParamTypes)));
            __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else {
        }
        if(result_56) {
            __result_obj__0 = (char*)come_increment_ref_count(result_56);
            (exp_55 = come_decrement_ref_count(exp_55, (void*)0, (void*)0, 0, 0, (void*)0));
            (result_56 = come_decrement_ref_count(result_56, (void*)0, (void*)0, 0, 1, (void*)0));
            come_call_finalizer(sFun_finalize, Value_57, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        else {
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))));
            (exp_55 = come_decrement_ref_count(exp_55, (void*)0, (void*)0, 0, 0, (void*)0));
            (result_56 = come_decrement_ref_count(result_56, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sFun_finalize, Value_57, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        (exp_55 = come_decrement_ref_count(exp_55, (void*)0, (void*)0, 0, 0, (void*)0));
        (result_56 = come_decrement_ref_count(result_56, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sFun_finalize, Value_57, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(parsecmp("num_fields",info)) {
        (void)((char*)(__right_value0=parse_word(0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        skip_spaces_and_lf(info);
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        exp_58=(char*)come_increment_ref_count(reflection_expression(info));
        if(*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        result_59=((void*)0);
        Value_60=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(info->classes,exp_58));
        if(({(_conditional_value_X13=(Value_60));_conditional_value_X13;})) {
            if(Value_60->mStruct) {
                __dec_obj54=result_59,
                result_59=(char*)come_increment_ref_count(xsprintf("%d",list$1tuple2$2char$phsType$ph$ph_length(Value_60->mFields)));
                __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0, (void*)0);
            }
        }
        else {
        }
        if(result_59) {
            __result_obj__0 = (char*)come_increment_ref_count(result_59);
            (exp_58 = come_decrement_ref_count(exp_58, (void*)0, (void*)0, 0, 0, (void*)0));
            (result_59 = come_decrement_ref_count(result_59, (void*)0, (void*)0, 0, 1, (void*)0));
            come_call_finalizer(sClass_finalize, Value_60, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        else {
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))));
            (exp_58 = come_decrement_ref_count(exp_58, (void*)0, (void*)0, 0, 0, (void*)0));
            (result_59 = come_decrement_ref_count(result_59, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sClass_finalize, Value_60, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        (exp_58 = come_decrement_ref_count(exp_58, (void*)0, (void*)0, 0, 0, (void*)0));
        (result_59 = come_decrement_ref_count(result_59, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sClass_finalize, Value_60, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(parsecmp("field_types",info)) {
        (void)((char*)(__right_value0=parse_word(0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        skip_spaces_and_lf(info);
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        exp_61=(char*)come_increment_ref_count(reflection_expression(info));
        if(*info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        exp2_62=(char*)come_increment_ref_count(reflection_expression(info));
        if(*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        result_63=((void*)0);
        Value_64=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(info->classes,exp_61));
        if(({(_conditional_value_X14=(Value_64));_conditional_value_X14;})) {
            if(Value_64->mStruct) {
                n=atoi(exp2_62);
                if(n<list$1tuple2$2char$phsType$ph$ph_length(Value_64->mFields)) {
                    multiple_assign_var4=((struct tuple2$2char$phsType$ph*)(__right_value0=list$1tuple2$2char$phsType$ph$ph_operator_load_element(Value_64->mFields,n)));
                    name=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                    type_65=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
                    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    if(type_65) {
                        __dec_obj55=result_63,
                        result_63=(char*)come_increment_ref_count(make_come_type_name_string(type_65,info));
                        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0);
                    }
                    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, type_65, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        else {
        }
        if(result_63) {
            __result_obj__0 = (char*)come_increment_ref_count(result_63);
            (exp_61 = come_decrement_ref_count(exp_61, (void*)0, (void*)0, 0, 0, (void*)0));
            (exp2_62 = come_decrement_ref_count(exp2_62, (void*)0, (void*)0, 0, 0, (void*)0));
            (result_63 = come_decrement_ref_count(result_63, (void*)0, (void*)0, 0, 1, (void*)0));
            come_call_finalizer(sClass_finalize, Value_64, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        else {
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))));
            (exp_61 = come_decrement_ref_count(exp_61, (void*)0, (void*)0, 0, 0, (void*)0));
            (exp2_62 = come_decrement_ref_count(exp2_62, (void*)0, (void*)0, 0, 0, (void*)0));
            (result_63 = come_decrement_ref_count(result_63, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sClass_finalize, Value_64, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        (exp_61 = come_decrement_ref_count(exp_61, (void*)0, (void*)0, 0, 0, (void*)0));
        (exp2_62 = come_decrement_ref_count(exp2_62, (void*)0, (void*)0, 0, 0, (void*)0));
        (result_63 = come_decrement_ref_count(result_63, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sClass_finalize, Value_64, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(parsecmp("is_inline",info)) {
        (void)((char*)(__right_value0=parse_word(0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        skip_spaces_and_lf(info);
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        exp_66=(char*)come_increment_ref_count(reflection_expression(info));
        if(*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        defined_67=0;
        Value_68=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,exp_66));
        if(({(_conditional_value_X15=(Value_68));_conditional_value_X15;})) {
            if(Value_68->mResultType->mInline) {
                defined_67=1;
            }
        }
        else {
        }
        if(defined_67) {
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))));
            (exp_66 = come_decrement_ref_count(exp_66, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sFun_finalize, Value_68, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        else {
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))));
            (exp_66 = come_decrement_ref_count(exp_66, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sFun_finalize, Value_68, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        (exp_66 = come_decrement_ref_count(exp_66, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sFun_finalize, Value_68, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(parsecmp("is_struct",info)) {
        (void)((char*)(__right_value0=parse_word(0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        skip_spaces_and_lf(info);
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        exp_69=(char*)come_increment_ref_count(reflection_expression(info));
        if(*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        defined_70=0;
        Value_71=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(info->classes,exp_69));
        if(({(_conditional_value_X16=(Value_71));_conditional_value_X16;})) {
            if(Value_71->mStruct) {
                defined_70=1;
            }
        }
        else {
        }
        if(defined_70) {
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))));
            (exp_69 = come_decrement_ref_count(exp_69, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sClass_finalize, Value_71, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        else {
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))));
            (exp_69 = come_decrement_ref_count(exp_69, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sClass_finalize, Value_71, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        (exp_69 = come_decrement_ref_count(exp_69, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sClass_finalize, Value_71, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(parsecmp("is_union",info)) {
        (void)((char*)(__right_value0=parse_word(0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        skip_spaces_and_lf(info);
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        exp_72=(char*)come_increment_ref_count(reflection_expression(info));
        if(*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        defined_73=0;
        Value_74=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(info->classes,exp_72));
        if(({(_conditional_value_X17=(Value_74));_conditional_value_X17;})) {
            if(Value_74->mUnion) {
                defined_73=1;
            }
        }
        else {
        }
        if(defined_73) {
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))));
            (exp_72 = come_decrement_ref_count(exp_72, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sClass_finalize, Value_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        else {
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))));
            (exp_72 = come_decrement_ref_count(exp_72, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sClass_finalize, Value_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        (exp_72 = come_decrement_ref_count(exp_72, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sClass_finalize, Value_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(parsecmp("is_enum",info)) {
        (void)((char*)(__right_value0=parse_word(0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        skip_spaces_and_lf(info);
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        exp_75=(char*)come_increment_ref_count(reflection_expression(info));
        if(*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        defined_76=0;
        Value_77=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(info->classes,exp_75));
        if(({(_conditional_value_X18=(Value_77));_conditional_value_X18;})) {
            if(Value_77->mEnum) {
                defined_76=1;
            }
        }
        else {
        }
        if(defined_76) {
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))));
            (exp_75 = come_decrement_ref_count(exp_75, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sClass_finalize, Value_77, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        else {
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))));
            (exp_75 = come_decrement_ref_count(exp_75, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sClass_finalize, Value_77, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        (exp_75 = come_decrement_ref_count(exp_75, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sClass_finalize, Value_77, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(parsecmp("is_interface",info)) {
        (void)((char*)(__right_value0=parse_word(0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        skip_spaces_and_lf(info);
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        exp_78=(char*)come_increment_ref_count(reflection_expression(info));
        if(*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        defined_79=0;
        Value_80=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(info->classes,exp_78));
        if(({(_conditional_value_X19=(Value_80));_conditional_value_X19;})) {
            if(Value_80->mProtocol) {
                defined_79=1;
            }
        }
        else {
        }
        if(defined_79) {
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))));
            (exp_78 = come_decrement_ref_count(exp_78, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sClass_finalize, Value_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        else {
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))));
            (exp_78 = come_decrement_ref_count(exp_78, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sClass_finalize, Value_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        (exp_78 = come_decrement_ref_count(exp_78, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sClass_finalize, Value_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(parsecmp("is_generics",info)) {
        (void)((char*)(__right_value0=parse_word(0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        skip_spaces_and_lf(info);
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        exp_81=(char*)come_increment_ref_count(reflection_expression(info));
        if(*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        defined_82=0;
        Value_83=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(info->classes,exp_81));
        if(({(_conditional_value_X20=(Value_83));_conditional_value_X20;})) {
            if(Value_83->mGenerics) {
                defined_82=1;
            }
        }
        else {
        }
        if(defined_82) {
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))));
            (exp_81 = come_decrement_ref_count(exp_81, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sClass_finalize, Value_83, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        else {
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))));
            (exp_81 = come_decrement_ref_count(exp_81, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sClass_finalize, Value_83, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        (exp_81 = come_decrement_ref_count(exp_81, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sClass_finalize, Value_83, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(parsecmp("is_module",info)) {
        (void)((char*)(__right_value0=parse_word(0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        skip_spaces_and_lf(info);
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        exp_84=(char*)come_increment_ref_count(reflection_expression(info));
        if(*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        defined_85=0;
        Value_86=(struct sClassModule*)come_increment_ref_count(map$2char$phsClassModule$ph_operator_load_element(info->modules,exp_84));
        if(({(_conditional_value_X21=(Value_86));_conditional_value_X21;})) {
            defined_85=1;
        }
        else {
        }
        if(defined_85) {
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))));
            (exp_84 = come_decrement_ref_count(exp_84, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sClassModule_finalize, Value_86, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        else {
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))));
            (exp_84 = come_decrement_ref_count(exp_84, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sClassModule_finalize, Value_86, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        (exp_84 = come_decrement_ref_count(exp_84, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sClassModule_finalize, Value_86, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(*info->p==34) {
        sline_real=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline=info->sline;
        value=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "24module.c", 1006, "struct buffer*"))));
        while(1) {
            if(*info->p==34) {
                info->p++;
                p=info->p;
                sline_87=info->sline;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                if(*info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p;
                    info->sline=sline_87;
                    break;
                }
            }
            else if(*info->p==92) {
                info->p++;
                if(*info->p==123) {
                    info->p++;
                    exp_88=(char*)come_increment_ref_count(reflection_expression(info));
                    (come_push_stackframe("24module.c", 1036, 3),__exception_result_var_b4=expected_next_character(125,info), come_pop_stackframe(), __exception_result_var_b4);
                    buffer_append_str(value,exp_88);
                    (exp_88 = come_decrement_ref_count(exp_88, (void*)0, (void*)0, 0, 0, (void*)0));
                }
                else if(*info->p==34) {
                    buffer_append_char(value,92);
                    buffer_append_char(value,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value,92);
                    buffer_append_char(value,*info->p);
                    info->p++;
                }
            }
            else if(*info->p==0) {
                sline2=info->sline;
                info->sline=sline;
                err_msg(info,"close \" to make c string value");
                info->sline=sline2;
                exit(2);
            }
            else {
                if(*info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real;
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=buffer_to_string(value))));
        come_call_finalizer(buffer_finalize, value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(*info->p==36) {
        info->p++;
        var_name=(char*)come_increment_ref_count(parse_word(0,info));
        value_89=(char*)come_increment_ref_count(map$2char$phchar$ph_operator_load_element(info->reflection_vars,var_name));
        if(value_89==((void*)0)) {
            err_msg(info,"no declare compile time var %s\n",var_name);
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf(""))));
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (value_89 = come_decrement_ref_count(value_89, (void*)0, (void*)0, 0, 0, (void*)0));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        __result_obj__0 = (char*)come_increment_ref_count(value_89);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (value_89 = come_decrement_ref_count(value_89, (void*)0, (void*)0, 0, 1, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (value_89 = come_decrement_ref_count(value_89, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(xisalpha(*info->p)||*info->p==95) {
        buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "24module.c", 1085, "struct buffer*"))));
        while(xisalnum(*info->p)||*info->p==95||*info->p==42||*info->p==37||*info->p==60||*info->p==62) {
            buffer_append_char(buf,*info->p);
            info->p++;
        }
        skip_spaces_and_lf(info);
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=buffer_to_string(buf))));
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(*info->p==45&&xisdigit(*(info->p+1))) {
        n_90=0;
        while(xisdigit(*info->p)) {
            n_90=n_90*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("-%d",n_90))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    else if(xisdigit(*info->p)) {
        n_91=0;
        while(xisdigit(*info->p)) {
            n_91=n_91*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("%d",n_91))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    else if(*info->p==33) {
        info->p++;
        skip_spaces_and_lf(info);
        exp_92=(char*)come_increment_ref_count(reflection_expression(info));
        if(string_operator_equals(exp_92,"true")) {
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))));
            (exp_92 = come_decrement_ref_count(exp_92, (void*)0, (void*)0, 0, 0, (void*)0));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        else {
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))));
            (exp_92 = come_decrement_ref_count(exp_92, (void*)0, (void*)0, 0, 0, (void*)0));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        (exp_92 = come_decrement_ref_count(exp_92, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else {
        err_msg(info,"invalid character(%c)",*info->p);
    }
    err_msg(info,"invalid character(%c)",*info->p);
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf(""))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key)
{
    struct sType* default_value;
    struct sType* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sType*));
    if(self==((void*)0)) {
        __result_obj__0 = (struct sType*)come_increment_ref_count(default_value);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct sType*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct sType*)come_increment_ref_count(default_value);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sType*)come_increment_ref_count(default_value);
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sType* map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char* key)
{
    struct sType* default_value;
    struct sType* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sType*));
    if(self==((void*)0)) {
        __result_obj__0 = (struct sType*)come_increment_ref_count(default_value);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct sType*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct sType*)come_increment_ref_count(default_value);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sType*)come_increment_ref_count(default_value);
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct buffer* map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char* key)
{
    struct buffer* default_value;
    struct buffer* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct buffer*));
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer*)come_increment_ref_count(default_value);
        come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct buffer*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct buffer*)come_increment_ref_count(default_value);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct buffer*)come_increment_ref_count(default_value);
            come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct buffer*)come_increment_ref_count(default_value);
    come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct buffer* map$2char$phbuffer$ph_operator_load_element(struct map$2char$phbuffer$ph* self, char* key)
{
    struct buffer* default_value;
    struct buffer* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct buffer*));
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer*)come_increment_ref_count(default_value);
        come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct buffer*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct buffer*)come_increment_ref_count(default_value);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct buffer*)come_increment_ref_count(default_value);
            come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct buffer*)come_increment_ref_count(default_value);
    come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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

static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key)
{
    struct sGenericsFun* default_value;
    struct sGenericsFun* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sGenericsFun*));
    if(self==((void*)0)) {
        __result_obj__0 = (struct sGenericsFun*)come_increment_ref_count(default_value);
        come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct sGenericsFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key)
{
    struct sGenericsFun* default_value;
    struct sGenericsFun* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sGenericsFun*));
    if(self==((void*)0)) {
        __result_obj__0 = (struct sGenericsFun*)come_increment_ref_count(default_value);
        come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct sGenericsFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sClassModule* map$2char$phsClassModule$ph$p_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key)
{
    struct sClassModule* default_value;
    struct sClassModule* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sClassModule*));
    if(self==((void*)0)) {
        __result_obj__0 = (struct sClassModule*)come_increment_ref_count(default_value);
        come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sClassModule_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct sClassModule*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sClassModule_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct sClassModule*)come_increment_ref_count(default_value);
                come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sClassModule_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sClassModule*)come_increment_ref_count(default_value);
            come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sClassModule_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sClassModule*)come_increment_ref_count(default_value);
    come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sClassModule_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sClassModule* map$2char$phsClassModule$ph_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key)
{
    struct sClassModule* default_value;
    struct sClassModule* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sClassModule*));
    if(self==((void*)0)) {
        __result_obj__0 = (struct sClassModule*)come_increment_ref_count(default_value);
        come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sClassModule_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct sClassModule*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sClassModule_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct sClassModule*)come_increment_ref_count(default_value);
                come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sClassModule_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sClassModule*)come_increment_ref_count(default_value);
            come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sClassModule_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sClassModule*)come_increment_ref_count(default_value);
    come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sClassModule_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct sType* default_value;
    struct sType* __result_obj__0;
    struct list_item$1sType$ph* it;
    int i;
    struct sType* default_value_47;
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
    memset(&default_value_47,0,sizeof(struct sType*));
    __result_obj__0 = (struct sType*)come_increment_ref_count(default_value_47);
    come_call_finalizer(sType_finalize, default_value_47, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct sType* default_value;
    struct sType* __result_obj__0;
    struct list_item$1sType$ph* it;
    int i;
    struct sType* default_value_48;
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
    memset(&default_value_48,0,sizeof(struct sType*));
    __result_obj__0 = (struct sType*)come_increment_ref_count(default_value_48);
    come_call_finalizer(sType_finalize, default_value_48, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position)
{
    char* default_value;
    char* __result_obj__0;
    struct list_item$1char$ph* it;
    int i;
    char* default_value_53;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(char*));
        __result_obj__0 = (char*)come_increment_ref_count(default_value);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (char*)come_increment_ref_count(it->item);
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_53,0,sizeof(char*));
    __result_obj__0 = (char*)come_increment_ref_count(default_value_53);
    (default_value_53 = come_decrement_ref_count(default_value_53, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position)
{
    char* default_value;
    char* __result_obj__0;
    struct list_item$1char$ph* it;
    int i;
    char* default_value_54;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(char*));
        __result_obj__0 = (char*)come_increment_ref_count(default_value);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (char*)come_increment_ref_count(it->item);
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_54,0,sizeof(char*));
    __result_obj__0 = (char*)come_increment_ref_count(default_value_54);
    (default_value_54 = come_decrement_ref_count(default_value_54, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

static int list$1sType$ph_length(struct list$1sType$ph* self)
{
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
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

static char* map$2char$phchar$ph$p_operator_load_element(struct map$2char$phchar$ph* self, char* key)
{
    char* default_value;
    char* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(char*));
    if(self==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(default_value);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (char*)come_increment_ref_count(self->items[it]);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0));
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (char*)come_increment_ref_count(default_value);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (char*)come_increment_ref_count(default_value);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
    }
    __result_obj__0 = (char*)come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

static char* map$2char$phchar$ph_operator_load_element(struct map$2char$phchar$ph* self, char* key)
{
    char* default_value;
    char* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(char*));
    if(self==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(default_value);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (char*)come_increment_ref_count(self->items[it]);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0));
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (char*)come_increment_ref_count(default_value);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (char*)come_increment_ref_count(default_value);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
    }
    __result_obj__0 = (char*)come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* reflection_expression_mult(struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    char* node;
    char* right;
    char* __result_obj__0;
    char* right_93;
    char* right_94;
    node=(char*)come_increment_ref_count(reflection_node(info));
    skip_spaces_and_lf(info);
    while(*info->p) {
        if(*info->p==42) {
            info->p++;
            skip_spaces_and_lf(info);
            right=(char*)come_increment_ref_count(reflection_node(info));
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=int_to_string((atoi(node)*atoi(right))))));
            (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0));
            (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
            (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(*info->p==47) {
            info->p++;
            skip_spaces_and_lf(info);
            right_93=(char*)come_increment_ref_count(reflection_node(info));
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=int_to_string((atoi(node)/atoi(right_93))))));
            (right_93 = come_decrement_ref_count(right_93, (void*)0, (void*)0, 0, 0, (void*)0));
            (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
            (right_93 = come_decrement_ref_count(right_93, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(*info->p==37) {
            info->p++;
            skip_spaces_and_lf(info);
            right_94=(char*)come_increment_ref_count(reflection_node(info));
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=int_to_string((atoi(node)%atoi(right_94))))));
            (right_94 = come_decrement_ref_count(right_94, (void*)0, (void*)0, 0, 0, (void*)0));
            (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
            (right_94 = come_decrement_ref_count(right_94, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            break;
        }
    }
    __result_obj__0 = (char*)come_increment_ref_count(node);
    (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* reflection_expression_add(struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    char* node;
    char* right;
    char* __result_obj__0;
    char* right_95;
    char* right_96;
    node=(char*)come_increment_ref_count(reflection_expression_mult(info));
    skip_spaces_and_lf(info);
    while(*info->p) {
        if(*info->p==46) {
            info->p++;
            skip_spaces_and_lf(info);
            right=(char*)come_increment_ref_count(reflection_expression_mult(info));
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=string_operator_add(node,right))));
            (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0));
            (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
            (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(*info->p==43) {
            info->p++;
            skip_spaces_and_lf(info);
            right_95=(char*)come_increment_ref_count(reflection_expression_mult(info));
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=int_to_string((atoi(node)+atoi(right_95))))));
            (right_95 = come_decrement_ref_count(right_95, (void*)0, (void*)0, 0, 0, (void*)0));
            (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
            (right_95 = come_decrement_ref_count(right_95, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(*info->p==45) {
            info->p++;
            skip_spaces_and_lf(info);
            right_96=(char*)come_increment_ref_count(reflection_expression_mult(info));
            __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=int_to_string((atoi(node)-atoi(right_96))))));
            (right_96 = come_decrement_ref_count(right_96, (void*)0, (void*)0, 0, 0, (void*)0));
            (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
            (right_96 = come_decrement_ref_count(right_96, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            break;
        }
    }
    __result_obj__0 = (char*)come_increment_ref_count(node);
    (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* reflection_expression_comp(struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    char* node;
    char* right;
    char* __result_obj__0;
    char* right_97;
    char* right_98;
    char* right_99;
    node=(char*)come_increment_ref_count(reflection_expression_add(info));
    skip_spaces_and_lf(info);
    while(*info->p) {
        if(*info->p==62&&*(info->p+1)==61) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right=(char*)come_increment_ref_count(reflection_expression_add(info));
            if(atoi(node)>=atoi(right)) {
                __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))));
                (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
            else {
                __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))));
                (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
            (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(*info->p==60&&*(info->p+1)==61) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_97=(char*)come_increment_ref_count(reflection_expression_add(info));
            if(atoi(node)<=atoi(right_97)) {
                __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))));
                (right_97 = come_decrement_ref_count(right_97, (void*)0, (void*)0, 0, 0, (void*)0));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
            else {
                __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))));
                (right_97 = come_decrement_ref_count(right_97, (void*)0, (void*)0, 0, 0, (void*)0));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
            (right_97 = come_decrement_ref_count(right_97, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(*info->p==62) {
            info->p+=1;
            skip_spaces_and_lf(info);
            right_98=(char*)come_increment_ref_count(reflection_expression_add(info));
            if(atoi(node)>atoi(right_98)) {
                __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))));
                (right_98 = come_decrement_ref_count(right_98, (void*)0, (void*)0, 0, 0, (void*)0));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
            else {
                __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))));
                (right_98 = come_decrement_ref_count(right_98, (void*)0, (void*)0, 0, 0, (void*)0));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
            (right_98 = come_decrement_ref_count(right_98, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(*info->p==60) {
            info->p+=1;
            skip_spaces_and_lf(info);
            right_99=(char*)come_increment_ref_count(reflection_expression_add(info));
            if(atoi(node)<atoi(right_99)) {
                __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))));
                (right_99 = come_decrement_ref_count(right_99, (void*)0, (void*)0, 0, 0, (void*)0));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
            else {
                __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))));
                (right_99 = come_decrement_ref_count(right_99, (void*)0, (void*)0, 0, 0, (void*)0));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
            (right_99 = come_decrement_ref_count(right_99, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            break;
        }
    }
    __result_obj__0 = (char*)come_increment_ref_count(node);
    (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* reflection_expression_eq(struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    char* node;
    char* right;
    char* __result_obj__0;
    char* right_100;
    node=(char*)come_increment_ref_count(reflection_expression_comp(info));
    skip_spaces_and_lf(info);
    while(*info->p) {
        if(*info->p==61&&*(info->p+1)==61&&*(info->p+2)!=61) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right=(char*)come_increment_ref_count(reflection_expression_comp(info));
            if(string_operator_equals(node,right)) {
                __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))));
                (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
            else {
                __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))));
                (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
            (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(*info->p==33&&*(info->p+1)==61&&*(info->p+2)!=61) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_100=(char*)come_increment_ref_count(reflection_expression_comp(info));
            if(string_operator_equals(node,right_100)) {
                __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))));
                (right_100 = come_decrement_ref_count(right_100, (void*)0, (void*)0, 0, 0, (void*)0));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
            else {
                __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))));
                (right_100 = come_decrement_ref_count(right_100, (void*)0, (void*)0, 0, 0, (void*)0));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
            (right_100 = come_decrement_ref_count(right_100, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            break;
        }
    }
    __result_obj__0 = (char*)come_increment_ref_count(node);
    (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* reflection_expression_oror(struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    char* node;
    char* right;
    char* __result_obj__0;
    node=(char*)come_increment_ref_count(reflection_expression_eq(info));
    skip_spaces_and_lf(info);
    while(*info->p) {
        if(*info->p==124&&*(info->p+1)==124) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right=(char*)come_increment_ref_count(reflection_expression_eq(info));
            if(string_operator_equals(node,"true")||string_operator_equals(right,"true")) {
                __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))));
                (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
            else {
                __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))));
                (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
            (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            break;
        }
    }
    __result_obj__0 = (char*)come_increment_ref_count(node);
    (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* reflection_expression_andand(struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    char* node;
    char* right;
    char* __result_obj__0;
    node=(char*)come_increment_ref_count(reflection_expression_oror(info));
    skip_spaces_and_lf(info);
    while(*info->p) {
        if(*info->p==38&&*(info->p+1)==38) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right=(char*)come_increment_ref_count(reflection_expression_oror(info));
            if(string_operator_equals(node,"true")&&string_operator_equals(right,"true")) {
                __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))));
                (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
            else {
                __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))));
                (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
            (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            break;
        }
    }
    __result_obj__0 = (char*)come_increment_ref_count(node);
    (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char* reflection_expression(struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    char* __result_obj__0;
    __result_obj__0 = (char*)come_increment_ref_count(((char*)(__right_value0=reflection_expression_andand(info))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info)
{
    void* __right_value0 = (void*)0;
    char* type_name;
    char* sname;
    int sline;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* params;
    char* word;
    int __exception_result_var_b5;
    char* source_head;
    char* source_tail;
    struct buffer* buf_101;
    _Bool squort;
    _Bool dquort;
    int nest;
    void* __right_value2 = (void*)0;
    struct sClassModule* module;
    struct list$1char$ph* __dec_obj56;
    struct sNode* _inf_value2;
    struct sModuleNode* _inf_obj_value2;
    void* __right_value3 = (void*)0;
    struct sNode* __result_obj__0;
    char* block_text;
    char* p;
    char* contents;
    struct sNode* _inf_value3;
    struct sNothingNode* _inf_obj_value3;
    int __exception_result_var_b6;
    _Bool no_comma;
    struct sNode* exp;
    int __exception_result_var_b7;
    struct sNode* exp2;
    int __exception_result_var_b8;
    struct sNode* _inf_value4;
    struct sStaticAssert* _inf_obj_value4;
    char* word_112;
    struct sNode* _inf_value5;
    struct sUndefNode* _inf_obj_value5;
    char* reflection_condtional;
    _Bool match_;
    int __exception_result_var_b9;
    char* reflection_condtional_113;
    int __exception_result_var_b10;
    int __exception_result_var_b11;
    struct sNode* _inf_value6;
    struct sNothingNode* _inf_obj_value6;
    char* value;
    struct buffer* source2;
    char* p_114;
    struct buffer* source;
    char* head_115;
    char* end;
    char* sname_116;
    int sline_117;
    struct buffer* __dec_obj66;
    char* __dec_obj67;
    struct buffer* __dec_obj68;
    char* __dec_obj69;
    struct sNode* _inf_value7;
    struct sNothingNode* _inf_obj_value7;
    char* var_name;
    int __exception_result_var_b12;
    char* value_118;
    struct sNode* _inf_value8;
    struct sNothingNode* _inf_obj_value8;
    char* exp_122;
    struct sNode* _inf_value9;
    struct sNothingNode* _inf_obj_value9;
    if(charp_operator_equals(buf,"module")) {
        type_name=(char*)come_increment_ref_count(parse_word(0,info));
        sname=(char*)come_increment_ref_count(info->sname);
        sline=info->sline;
        params=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "24module.c", 1389, "struct list$1char$ph*"))));
        if(*info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            while(1) {
                word=(char*)come_increment_ref_count(parse_word(0,info));
                list$1char$ph_add(params,(char*)come_increment_ref_count(word));
                if(*info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(*info->p==0) {
                    err_msg(info,"invalid source end");
                    exit(2);
                }
                else if(*info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
                    break;
                }
                else {
                    err_msg(info,"invalid charactor(%c)",*info->p);
                    exit(2);
                }
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        (come_push_stackframe("24module.c", 1420, 4),__exception_result_var_b5=expected_next_character(123,info), come_pop_stackframe(), __exception_result_var_b5);
        source_head=info->p;
        source_tail=((void*)0);
        buf_101=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "24module.c", 1425, "struct buffer*"))));
        squort=0;
        dquort=0;
        nest=1;
        while(1) {
            if(*info->p==0) {
                err_msg(info,"unexpected source end in module");
                exit(2);
            }
            else if(*info->p==92) {
                buffer_append_char(buf_101,*info->p);
                info->p++;
                if(*info->p==10) {
                    info->sline++;
                }
                buffer_append_char(buf_101,*info->p);
                info->p++;
            }
            else if(!squort&&*info->p==34) {
                buffer_append_char(buf_101,*info->p);
                info->p++;
                dquort=!dquort;
            }
            else if(!dquort&&*info->p==39) {
                buffer_append_char(buf_101,*info->p);
                info->p++;
                squort=!squort;
            }
            else if(squort||dquort) {
                buffer_append_char(buf_101,*info->p);
                if(*info->p==10) {
                    info->sline++;
                }
                info->p++;
            }
            else if(*info->p==123) {
                nest++;
                buffer_append_char(buf_101,*info->p);
                info->p++;
            }
            else if(*info->p==125) {
                nest--;
                if(nest==0) {
                    source_tail=info->p-1;
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                buffer_append_char(buf_101,*info->p);
                info->p++;
            }
            else if(*info->p==10) {
                info->sline++;
                buffer_append_char(buf_101,*info->p);
                info->p++;
            }
            else {
                buffer_append_char(buf_101,*info->p);
                info->p++;
            }
        }
        module=(struct sClassModule*)come_increment_ref_count(sClassModule_initialize((struct sClassModule*)come_increment_ref_count((struct sClassModule*)come_calloc_v2(1, sizeof(struct sClassModule)*(1), "24module.c", 1491, "struct sClassModule*")),(char*)come_increment_ref_count(type_name),(char*)come_increment_ref_count(buffer_to_string(buf_101)),(char*)come_increment_ref_count(sname),sline));
        __dec_obj56=module->mParams,
        module->mParams=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(params));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj56,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        map$2char$phsClassModule$ph_operator_store_element(info->modules,(char*)come_increment_ref_count(__builtin_string(type_name)),(struct sClassModule*)come_increment_ref_count(module));
        _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "24module.c", 1497, "struct sNode");
        _inf_obj_value2=(struct sModuleNode*)come_increment_ref_count(((struct sModuleNode*)(__right_value2=sModuleNode_initialize((struct sModuleNode*)come_increment_ref_count((struct sModuleNode*)come_calloc_v2(1, sizeof(struct sModuleNode)*(1), "24module.c", 1497, "struct sModuleNode*")),(char*)come_increment_ref_count(__builtin_string(type_name)),(struct sClassModule*)come_increment_ref_count(module),info))));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=(void*)sModuleNode_finalize;
        _inf_value2->clone=(void*)sModuleNode_clone;
        _inf_value2->compile=(void*)sModuleNode_compile;
        _inf_value2->sline=(void*)sNodeBase_sline;
        _inf_value2->sline_real=(void*)sNodeBase_sline_real;
        _inf_value2->sname=(void*)sNodeBase_sname;
        _inf_value2->terminated=(void*)sNodeBase_terminated;
        _inf_value2->kind=(void*)sModuleNode_kind;
        _inf_value2->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value2)));
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf_101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sClassModule_finalize, module, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sModuleNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf_101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sClassModule_finalize, module, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(charp_operator_equals(buf,"__c__")&&*info->p==123) {
        block_text=(char*)come_increment_ref_count(skip_block(info,0));
        p=block_text+strlen(block_text);
        while(*p&&p>=block_text&&*p!=125) {
            p--;
        }
        p--;
        contents=(char*)come_increment_ref_count(charp_substring(block_text,1,p-(block_text+strlen(block_text))-1));
        static int n=0;
        n++;
        map$2char$phbuffer$ph_insert(info->previous_struct_definition,(char*)come_increment_ref_count(xsprintf("__c__\%s",((char*)(__right_value0=int_to_string(n))))),(struct buffer*)come_increment_ref_count(charp_to_buffer(contents)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "24module.c", 1516, "struct sNode");
        _inf_obj_value3=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value1=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc_v2(1, sizeof(struct sNothingNode)*(1), "24module.c", 1516, "struct sNothingNode*")),info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sNothingNode_finalize;
        _inf_value3->clone=(void*)sNothingNode_clone;
        _inf_value3->compile=(void*)sNothingNode_compile;
        _inf_value3->sline=(void*)sNodeBase_sline;
        _inf_value3->sline_real=(void*)sNodeBase_sline_real;
        _inf_value3->sname=(void*)sNodeBase_sname;
        _inf_value3->terminated=(void*)sNothingNode_terminated;
        _inf_value3->kind=(void*)sNothingNode_kind;
        _inf_value3->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value3)));
        (block_text = come_decrement_ref_count(block_text, (void*)0, (void*)0, 0, 0, (void*)0));
        (contents = come_decrement_ref_count(contents, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sNothingNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        (block_text = come_decrement_ref_count(block_text, (void*)0, (void*)0, 0, 0, (void*)0));
        (contents = come_decrement_ref_count(contents, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(charp_operator_equals(buf,"_Static_assert")||charp_operator_equals(buf,"static_assert")||charp_operator_equals(buf,"__STATIC_ASSERT")) {
        (come_push_stackframe("24module.c", 1519, 5),__exception_result_var_b6=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b6);
        no_comma=info->no_comma;
        info->no_comma=1;
        exp=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
        info->no_comma=no_comma;
        (come_push_stackframe("24module.c", 1526, 6),__exception_result_var_b7=expected_next_character(44,info), come_pop_stackframe(), __exception_result_var_b7);
        exp2=(struct sNode*)come_increment_ref_count(expression_v13(info,0));
        (come_push_stackframe("24module.c", 1530, 7),__exception_result_var_b8=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b8);
        _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "24module.c", 1532, "struct sNode");
        _inf_obj_value4=(struct sStaticAssert*)come_increment_ref_count(((struct sStaticAssert*)(__right_value1=sStaticAssert_initialize((struct sStaticAssert*)come_increment_ref_count((struct sStaticAssert*)come_calloc_v2(1, sizeof(struct sStaticAssert)*(1), "24module.c", 1532, "struct sStaticAssert*")),(struct sNode*)come_increment_ref_count(exp),(struct sNode*)come_increment_ref_count(exp2),info))));
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sStaticAssert_finalize;
        _inf_value4->clone=(void*)sStaticAssert_clone;
        _inf_value4->compile=(void*)sStaticAssert_compile;
        _inf_value4->sline=(void*)sNodeBase_sline;
        _inf_value4->sline_real=(void*)sNodeBase_sline_real;
        _inf_value4->sname=(void*)sNodeBase_sname;
        _inf_value4->terminated=(void*)sNodeBase_terminated;
        _inf_value4->kind=(void*)sStaticAssert_kind;
        _inf_value4->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value4)));
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((exp2) ? exp2 = come_decrement_ref_count(exp2, ((struct sNode*)exp2)->finalize, ((struct sNode*)exp2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sStaticAssert_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((exp2) ? exp2 = come_decrement_ref_count(exp2, ((struct sNode*)exp2)->finalize, ((struct sNode*)exp2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(charp_operator_equals(buf,"undef")) {
        word_112=(char*)come_increment_ref_count(parse_word(0,info));
        if(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "24module.c", 1542, "struct sNode");
        _inf_obj_value5=(struct sUndefNode*)come_increment_ref_count(((struct sUndefNode*)(__right_value1=sUndefNode_initialize((struct sUndefNode*)come_increment_ref_count((struct sUndefNode*)come_calloc_v2(1, sizeof(struct sUndefNode)*(1), "24module.c", 1542, "struct sUndefNode*")),(char*)come_increment_ref_count(word_112),info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sUndefNode_finalize;
        _inf_value5->clone=(void*)sUndefNode_clone;
        _inf_value5->compile=(void*)sUndefNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sUndefNode_kind;
        _inf_value5->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value5)));
        (word_112 = come_decrement_ref_count(word_112, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sUndefNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        (word_112 = come_decrement_ref_count(word_112, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(charp_operator_equals(buf,"if")) {
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        reflection_condtional=(char*)come_increment_ref_count(reflection_expression(info));
        if(*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        match_=0;
        if(string_operator_equals(reflection_condtional,"true")) {
            (come_push_stackframe("24module.c", 1557, 8),__exception_result_var_b9=expected_next_character(123,info), come_pop_stackframe(), __exception_result_var_b9);
            transpile_toplevel(1,info);
            match_=1;
        }
        else {
            ((char*)(__right_value0=skip_block(info,0)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        skip_spaces_and_lf(info);
        while(1) {
            if(parsecmp("elif",info)) {
                (void)((char*)(__right_value0=parse_word(0,info)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                if(*info->p==40) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                reflection_condtional_113=(char*)come_increment_ref_count(reflection_expression(info));
                if(*info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                if(!match_&&string_operator_equals(reflection_condtional_113,"true")) {
                    (come_push_stackframe("24module.c", 1584, 9),__exception_result_var_b10=expected_next_character(123,info), come_pop_stackframe(), __exception_result_var_b10);
                    transpile_toplevel(1,info);
                    match_=1;
                }
                else {
                    ((char*)(__right_value0=skip_block(info,0)));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                }
                (reflection_condtional_113 = come_decrement_ref_count(reflection_condtional_113, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            else {
                break;
            }
        }
        if(parsecmp("else",info)) {
            (void)((char*)(__right_value0=parse_word(0,info)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            if(!match_) {
                (come_push_stackframe("24module.c", 1601, 10),__exception_result_var_b11=expected_next_character(123,info), come_pop_stackframe(), __exception_result_var_b11);
                transpile_toplevel(1,info);
            }
            else {
                ((char*)(__right_value0=skip_block(info,0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            }
        }
        _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "24module.c", 1609, "struct sNode");
        _inf_obj_value6=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value1=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc_v2(1, sizeof(struct sNothingNode)*(1), "24module.c", 1609, "struct sNothingNode*")),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sNothingNode_finalize;
        _inf_value6->clone=(void*)sNothingNode_clone;
        _inf_value6->compile=(void*)sNothingNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNothingNode_terminated;
        _inf_value6->kind=(void*)sNothingNode_kind;
        _inf_value6->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value6)));
        (reflection_condtional = come_decrement_ref_count(reflection_condtional, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sNothingNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        (reflection_condtional = come_decrement_ref_count(reflection_condtional, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(charp_operator_equals(buf,"eval")) {
        value=(char*)come_increment_ref_count(reflection_expression(info));
        source2=(struct buffer*)come_increment_ref_count(charp_to_buffer(value));
        p_114=info->p;
        source=(struct buffer*)come_increment_ref_count(info->source);
        head_115=info->head;
        end=info->end;
        sname_116=(char*)come_increment_ref_count(info->sname);
        sline_117=info->sline;
        info->p=source2->buf;
        __dec_obj66=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source2);
        come_call_finalizer(buffer_finalize, __dec_obj66,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        info->head=source2->buf;
        info->end=source2->buf+source2->len;
        __dec_obj67=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string("eval"));
        __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0, (void*)0);
        info->sline=1;
        transpile_toplevel(0,info);
        info->p=p_114;
        __dec_obj68=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source);
        come_call_finalizer(buffer_finalize, __dec_obj68,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        info->head=head_115;
        info->end=end;
        __dec_obj69=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_116);
        __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0, (void*)0);
        info->sline=sline_117;
        _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "24module.c", 1641, "struct sNode");
        _inf_obj_value7=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value1=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc_v2(1, sizeof(struct sNothingNode)*(1), "24module.c", 1641, "struct sNothingNode*")),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sNothingNode_finalize;
        _inf_value7->clone=(void*)sNothingNode_clone;
        _inf_value7->compile=(void*)sNothingNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNothingNode_terminated;
        _inf_value7->kind=(void*)sNothingNode_kind;
        _inf_value7->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value7)));
        (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, source2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (sname_116 = come_decrement_ref_count(sname_116, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sNothingNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, source2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (sname_116 = come_decrement_ref_count(sname_116, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(charp_operator_equals(buf,"var")) {
        var_name=(char*)come_increment_ref_count(parse_word(0,info));
        (come_push_stackframe("24module.c", 1646, 11),__exception_result_var_b12=expected_next_character(61,info), come_pop_stackframe(), __exception_result_var_b12);
        value_118=(char*)come_increment_ref_count(reflection_expression(info));
        map$2char$phchar$ph_insert(info->reflection_vars,(char*)come_increment_ref_count(var_name),(char*)come_increment_ref_count(value_118));
        _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "24module.c", 1652, "struct sNode");
        _inf_obj_value8=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value1=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc_v2(1, sizeof(struct sNothingNode)*(1), "24module.c", 1652, "struct sNothingNode*")),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sNothingNode_finalize;
        _inf_value8->clone=(void*)sNothingNode_clone;
        _inf_value8->compile=(void*)sNothingNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNothingNode_terminated;
        _inf_value8->kind=(void*)sNothingNode_kind;
        _inf_value8->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value8)));
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (value_118 = come_decrement_ref_count(value_118, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sNothingNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (value_118 = come_decrement_ref_count(value_118, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(charp_operator_equals(buf,"puts")) {
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        exp_122=(char*)come_increment_ref_count(reflection_expression(info));
        puts(exp_122);
        if(*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "24module.c", 1669, "struct sNode");
        _inf_obj_value9=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value1=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc_v2(1, sizeof(struct sNothingNode)*(1), "24module.c", 1669, "struct sNothingNode*")),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sNothingNode_finalize;
        _inf_value9->clone=(void*)sNothingNode_clone;
        _inf_value9->compile=(void*)sNothingNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNothingNode_terminated;
        _inf_value9->kind=(void*)sNothingNode_kind;
        _inf_value9->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value9)));
        (exp_122 = come_decrement_ref_count(exp_122, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sNothingNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        (exp_122 = come_decrement_ref_count(exp_122, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=top_level_v1(buf,head,head_sline,info))));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static void map$2char$phsClassModule$ph_operator_store_element(struct map$2char$phsClassModule$ph* self, char* key, struct sClassModule* item)
{
    if(self==((void*)0)) {
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sClassModule_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return;
    }
    map$2char$phsClassModule$ph_insert(self,(char*)come_increment_ref_count(key),(struct sClassModule*)come_increment_ref_count(item));
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sClassModule_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2char$phsClassModule$ph* map$2char$phsClassModule$ph_insert(struct map$2char$phsClassModule$ph* self, char* key, struct sClassModule* item)
{
    struct map$2char$phsClassModule$ph* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    _Bool same_key_exist;
    char* it2;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sClassModule_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    if(self->len*10>=self->size) {
        map$2char$phsClassModule$ph_rehash(self);
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                if(1) {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    self->keys[it]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=key;
                }
                if(1) {
                    come_call_finalizer(sClassModule_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it]=(struct sClassModule*)come_increment_ref_count(item);
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
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it]=1;
            if(1) {
                self->keys[it]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it]=key;
            }
            if(1) {
                self->items[it]=(struct sClassModule*)come_increment_ref_count(item);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist=0;
    for(it2=list$1char$ph_begin(self->key_list);!list$1char$ph_end(self->key_list);it2=list$1char$ph_next(self->key_list)){
        if(string_equals(it2,key)) {
            same_key_exist=1;
        }
    }
    if(!same_key_exist) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sClassModule_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void map$2char$phsClassModule$ph_rehash(struct map$2char$phsClassModule$ph* self)
{
    int size;
    void* __right_value0 = (void*)0;
    char** keys;
    struct sClassModule** items;
    _Bool* item_existance;
    int len;
    char* it;
    struct sClassModule* default_value;
    struct sClassModule* it2;
    unsigned int hash;
    int n;
    struct sClassModule* default_value_104;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size)), "/usr/local/include/neo-c.h", 2468, "char**"))));
    items=(struct sClassModule**)come_increment_ref_count(((struct sClassModule**)(__right_value0=(struct sClassModule**)come_calloc_v2(1, sizeof(struct sClassModule*)*(1*(size)), "/usr/local/include/neo-c.h", 2469, "struct sClassModule**"))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/neo-c.h", 2470, "_Bool*"))));
    len=0;
    for(it=map$2char$phsClassModule$ph_begin(self);!map$2char$phsClassModule$ph_end(self);it=map$2char$phsClassModule$ph_next(self)){
        memset(&default_value,0,sizeof(struct sClassModule*));
        it2=((struct sClassModule*)(__right_value0=map$2char$phsClassModule$ph_at(self,it,(struct sClassModule*)come_increment_ref_count(default_value))));
        hash=string_get_hash_key(((char*)it))%size;
        n=hash;
        while(1) {
            if(item_existance[n]) {
                n++;
                if(n>=size) {
                    n=0;
                }
                else if(n==hash) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance[n]=1;
                keys[n]=it;
                memset(&default_value_104,0,sizeof(struct sClassModule*));
                items[n]=((struct sClassModule*)(__right_value0=map$2char$phsClassModule$ph_at(self,it,(struct sClassModule*)come_increment_ref_count(default_value_104))));
                len++;
                come_call_finalizer(sClassModule_finalize, default_value_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer(sClassModule_finalize, default_value_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static char* map$2char$phsClassModule$ph_begin(struct map$2char$phsClassModule$ph* self)
{
    char* result;
    char* __result_obj__0;
    char* result_102;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char*));
        __result_obj__0 = result;
        return __result_obj__0;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result_obj__0 = self->key_list->it->item;
        return __result_obj__0;
    }
    memset(&result_102,0,sizeof(char*));
    __result_obj__0 = result_102;
    return __result_obj__0;
}

static _Bool map$2char$phsClassModule$ph_end(struct map$2char$phsClassModule$ph* self)
{
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClassModule$ph_next(struct map$2char$phsClassModule$ph* self)
{
    char* result;
    char* __result_obj__0;
    char* result_103;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result,0,sizeof(char*));
        __result_obj__0 = result;
        return __result_obj__0;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result_obj__0 = self->key_list->it->item;
        return __result_obj__0;
    }
    memset(&result_103,0,sizeof(char*));
    __result_obj__0 = result_103;
    return __result_obj__0;
}

static struct sClassModule* map$2char$phsClassModule$ph_at(struct map$2char$phsClassModule$ph* self, char* key, struct sClassModule* default_value)
{
    struct sClassModule* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
        __result_obj__0 = (struct sClassModule*)come_increment_ref_count(default_value);
        come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(sClassModule_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct sClassModule*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sClassModule_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct sClassModule*)come_increment_ref_count(default_value);
                come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sClassModule_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sClassModule*)come_increment_ref_count(default_value);
            come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sClassModule_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sClassModule*)come_increment_ref_count(default_value);
    come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sClassModule_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static char* list$1char$ph_begin(struct list$1char$ph* self)
{
    char* result;
    char* __result_obj__0;
    char* result_105;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char*));
        __result_obj__0 = result;
        return __result_obj__0;
    }
    self->it=self->head;
    if(self->it) {
        __result_obj__0 = self->it->item;
        return __result_obj__0;
    }
    memset(&result_105,0,sizeof(char*));
    __result_obj__0 = result_105;
    return __result_obj__0;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self)
{
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self)
{
    char* result;
    char* __result_obj__0;
    char* result_106;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(char*));
        __result_obj__0 = result;
        return __result_obj__0;
    }
    self->it=self->it->next;
    if(self->it) {
        __result_obj__0 = self->it->item;
        return __result_obj__0;
    }
    memset(&result_106,0,sizeof(char*));
    __result_obj__0 = result_106;
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item)
{
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char* __dec_obj57;
    struct list_item$1char$ph* litem_107;
    char* __dec_obj58;
    struct list_item$1char$ph* litem_108;
    char* __dec_obj59;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1208, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj57=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_107=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1218, "struct list_item$1char$ph*"))));
        litem_107->prev=self->head;
        litem_107->next=((void*)0);
        __dec_obj58=litem_107->item,
        litem_107->item=(char*)come_increment_ref_count(item);
        __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_107;
        self->head->next=litem_107;
    }
    else {
        litem_108=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1228, "struct list_item$1char$ph*"))));
        litem_108->prev=self->tail;
        litem_108->next=((void*)0);
        __dec_obj59=litem_108->item,
        litem_108->item=(char*)come_increment_ref_count(item);
        __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_108;
        self->tail=litem_108;
    }
    self->len++;
    __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__0;
}

static struct sModuleNode* sModuleNode_clone(struct sModuleNode* self)
{
    struct sModuleNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sModuleNode* result;
    char* __dec_obj60;
    char* __dec_obj61;
    struct sClassModule* __dec_obj62;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sModuleNode*)come_increment_ref_count((struct sModuleNode*)come_calloc_v2(1, sizeof(struct sModuleNode)*(1), "sModuleNode_clone", 3, "struct sModuleNode*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj60=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sModuleNode_clone", 5, "char*"));
        __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->name!=((void*)0)) {
        __dec_obj61=result->name,
        result->name=(char*)come_increment_ref_count((char*)come_memdup(self->name, "sModuleNode_clone", 7, "char*"));
        __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->module!=((void*)0)) {
        __dec_obj62=result->module,
        result->module=(struct sClassModule*)come_increment_ref_count(sClassModule_clone(self->module));
        come_call_finalizer(sClassModule_finalize, __dec_obj62,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sModuleNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_insert(struct map$2char$phbuffer$ph* self, char* key, struct buffer* item)
{
    struct map$2char$phbuffer$ph* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    _Bool same_key_exist;
    char* it2;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__0;
    }
    if(self->len*10>=self->size) {
        map$2char$phbuffer$ph_rehash(self);
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                if(1) {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    self->keys[it]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=key;
                }
                if(1) {
                    come_call_finalizer(buffer_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it]=(struct buffer*)come_increment_ref_count(item);
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
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it]=1;
            if(1) {
                self->keys[it]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it]=key;
            }
            if(1) {
                self->items[it]=(struct buffer*)come_increment_ref_count(item);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist=0;
    for(it2=list$1char$ph_begin(self->key_list);!list$1char$ph_end(self->key_list);it2=list$1char$ph_next(self->key_list)){
        if(string_equals(it2,key)) {
            same_key_exist=1;
        }
    }
    if(!same_key_exist) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__0;
}

static void map$2char$phbuffer$ph_rehash(struct map$2char$phbuffer$ph* self)
{
    int size;
    void* __right_value0 = (void*)0;
    char** keys;
    struct buffer** items;
    _Bool* item_existance;
    int len;
    char* it;
    struct buffer* default_value;
    struct buffer* it2;
    unsigned int hash;
    int n;
    struct buffer* default_value_111;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size)), "/usr/local/include/neo-c.h", 2468, "char**"))));
    items=(struct buffer**)come_increment_ref_count(((struct buffer**)(__right_value0=(struct buffer**)come_calloc_v2(1, sizeof(struct buffer*)*(1*(size)), "/usr/local/include/neo-c.h", 2469, "struct buffer**"))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/neo-c.h", 2470, "_Bool*"))));
    len=0;
    for(it=map$2char$phbuffer$ph_begin(self);!map$2char$phbuffer$ph_end(self);it=map$2char$phbuffer$ph_next(self)){
        memset(&default_value,0,sizeof(struct buffer*));
        it2=((struct buffer*)(__right_value0=map$2char$phbuffer$ph_at(self,it,(struct buffer*)come_increment_ref_count(default_value))));
        hash=string_get_hash_key(((char*)it))%size;
        n=hash;
        while(1) {
            if(item_existance[n]) {
                n++;
                if(n>=size) {
                    n=0;
                }
                else if(n==hash) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance[n]=1;
                keys[n]=it;
                memset(&default_value_111,0,sizeof(struct buffer*));
                items[n]=((struct buffer*)(__right_value0=map$2char$phbuffer$ph_at(self,it,(struct buffer*)come_increment_ref_count(default_value_111))));
                len++;
                come_call_finalizer(buffer_finalize, default_value_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer(buffer_finalize, default_value_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static char* map$2char$phbuffer$ph_begin(struct map$2char$phbuffer$ph* self)
{
    char* result;
    char* __result_obj__0;
    char* result_109;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char*));
        __result_obj__0 = result;
        return __result_obj__0;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result_obj__0 = self->key_list->it->item;
        return __result_obj__0;
    }
    memset(&result_109,0,sizeof(char*));
    __result_obj__0 = result_109;
    return __result_obj__0;
}

static _Bool map$2char$phbuffer$ph_end(struct map$2char$phbuffer$ph* self)
{
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phbuffer$ph_next(struct map$2char$phbuffer$ph* self)
{
    char* result;
    char* __result_obj__0;
    char* result_110;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result,0,sizeof(char*));
        __result_obj__0 = result;
        return __result_obj__0;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result_obj__0 = self->key_list->it->item;
        return __result_obj__0;
    }
    memset(&result_110,0,sizeof(char*));
    __result_obj__0 = result_110;
    return __result_obj__0;
}

static struct buffer* map$2char$phbuffer$ph_at(struct map$2char$phbuffer$ph* self, char* key, struct buffer* default_value)
{
    struct buffer* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer*)come_increment_ref_count(default_value);
        come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct buffer*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct buffer*)come_increment_ref_count(default_value);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct buffer*)come_increment_ref_count(default_value);
            come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct buffer*)come_increment_ref_count(default_value);
    come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void sNothingNode_finalize(struct sNothingNode* self)
{
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct sNothingNode* sNothingNode_clone(struct sNothingNode* self)
{
    struct sNothingNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNothingNode* result;
    char* __dec_obj63;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc_v2(1, sizeof(struct sNothingNode)*(1), "sNothingNode_clone", 3, "struct sNothingNode*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj63=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNothingNode_clone", 5, "char*"));
        __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    __result_obj__0 = result;
    come_call_finalizer(sNothingNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sUndefNode* sUndefNode_clone(struct sUndefNode* self)
{
    struct sUndefNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sUndefNode* result;
    char* __dec_obj64;
    char* __dec_obj65;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        return __result_obj__0;
    }
    result=(struct sUndefNode*)come_increment_ref_count((struct sUndefNode*)come_calloc_v2(1, sizeof(struct sUndefNode)*(1), "sUndefNode_clone", 3, "struct sUndefNode*"));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj64=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sUndefNode_clone", 5, "char*"));
        __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->str!=((void*)0)) {
        __dec_obj65=result->str,
        result->str=(char*)come_increment_ref_count((char*)come_memdup(self->str, "sUndefNode_clone", 7, "char*"));
        __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sUndefNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item)
{
    struct map$2char$phchar$ph* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    _Bool same_key_exist;
    char* it2;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
        return __result_obj__0;
    }
    if(self->len*10>=self->size) {
        map$2char$phchar$ph_rehash(self);
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                if(1) {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    self->keys[it]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=key;
                }
                if(1) {
                    (self->items[it] = come_decrement_ref_count(self->items[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    self->items[it]=(char*)come_increment_ref_count(item);
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
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it]=1;
            if(1) {
                self->keys[it]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it]=key;
            }
            if(1) {
                self->items[it]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist=0;
    for(it2=list$1char$ph_begin(self->key_list);!list$1char$ph_end(self->key_list);it2=list$1char$ph_next(self->key_list)){
        if(string_equals(it2,key)) {
            same_key_exist=1;
        }
    }
    if(!same_key_exist) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__0;
}

static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self)
{
    int size;
    void* __right_value0 = (void*)0;
    char** keys;
    char** items;
    _Bool* item_existance;
    int len;
    char* it;
    char* default_value;
    char* it2;
    unsigned int hash;
    int n;
    char* default_value_121;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size)), "/usr/local/include/neo-c.h", 2468, "char**"))));
    items=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size)), "/usr/local/include/neo-c.h", 2469, "char**"))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/neo-c.h", 2470, "_Bool*"))));
    len=0;
    for(it=map$2char$phchar$ph_begin(self);!map$2char$phchar$ph_end(self);it=map$2char$phchar$ph_next(self)){
        memset(&default_value,0,sizeof(char*));
        it2=((char*)(__right_value0=map$2char$phchar$ph_at(self,it,(char*)come_increment_ref_count(default_value))));
        hash=string_get_hash_key(((char*)it))%size;
        n=hash;
        while(1) {
            if(item_existance[n]) {
                n++;
                if(n>=size) {
                    n=0;
                }
                else if(n==hash) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance[n]=1;
                keys[n]=it;
                memset(&default_value_121,0,sizeof(char*));
                items[n]=((char*)(__right_value0=map$2char$phchar$ph_at(self,it,(char*)come_increment_ref_count(default_value_121))));
                len++;
                (default_value_121 = come_decrement_ref_count(default_value_121, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
                (default_value_121 = come_decrement_ref_count(default_value_121, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0));
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

static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self)
{
    char* result;
    char* __result_obj__0;
    char* result_119;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char*));
        __result_obj__0 = result;
        return __result_obj__0;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result_obj__0 = self->key_list->it->item;
        return __result_obj__0;
    }
    memset(&result_119,0,sizeof(char*));
    __result_obj__0 = result_119;
    return __result_obj__0;
}

static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self)
{
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self)
{
    char* result;
    char* __result_obj__0;
    char* result_120;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result,0,sizeof(char*));
        __result_obj__0 = result;
        return __result_obj__0;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result_obj__0 = self->key_list->it->item;
        return __result_obj__0;
    }
    memset(&result_120,0,sizeof(char*));
    __result_obj__0 = result_120;
    return __result_obj__0;
}

static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value)
{
    char* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
        __result_obj__0 = (char*)come_increment_ref_count(default_value);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (char*)come_increment_ref_count(self->items[it]);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0));
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (char*)come_increment_ref_count(default_value);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (char*)come_increment_ref_count(default_value);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
    }
    __result_obj__0 = (char*)come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

