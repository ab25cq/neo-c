// source head
typedef char __int8_t;
typedef unsigned char __uint8_t;
typedef short short __int16_t;
typedef unsigned short int __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;
typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;
typedef int __darwin_ct_rune_t;
union anonymous_typeZ1
{
char __mbstate8[128];
long long _mbstateL;
};
typedef union anonymous_typeZ1 __mbstate_t;
typedef union anonymous_typeZ1 __darwin_mbstate_t;
typedef long int __darwin_ptrdiff_t;
typedef long int __darwin_size_t;
typedef __builtin_va_list __darwin_va_list;
typedef int __darwin_wchar_t;
typedef int __darwin_rune_t;
typedef int __darwin_wint_t;
typedef unsigned long int __darwin_clock_t;
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
typedef unsigned long long __darwin_ino64_t;
typedef unsigned long long __darwin_ino_t;
typedef unsigned int __darwin_mach_port_name_t;
typedef unsigned int __darwin_mach_port_t;
typedef unsigned short int __darwin_mode_t;
typedef long long __darwin_off_t;
typedef int __darwin_pid_t;
typedef unsigned int __darwin_sigset_t;
typedef int __darwin_suseconds_t;
typedef unsigned int __darwin_uid_t;
typedef unsigned int __darwin_useconds_t;
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
typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;
typedef unsigned long int __darwin_pthread_key_t;
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
typedef short short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned char u_int8_t;
typedef unsigned short int u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned long long u_int64_t;
typedef long long register_t;
typedef long intptr_t;
typedef unsigned long int uintptr_t;
typedef unsigned long long user_addr_t;
typedef unsigned long long user_size_t;
typedef long long user_ssize_t;
typedef long long user_long_t;
typedef unsigned long long user_ulong_t;
typedef long long user_time_t;
typedef long long user_off_t;
typedef unsigned long long syscall_arg_t;
typedef __darwin_va_list va_list;
typedef long int size_t;
typedef long long fpos_t;
struct __sbuf
{
    unsigned char* _base;
    int _size;
};
struct __sFILEX;
struct __sFILE
{
    unsigned char* _p;
    int _r;
    int _w;
    short short _flags;
    short short _file;
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
typedef struct __sFILE FILE;
extern struct __sFILE* __stdinp;
extern struct __sFILE* __stdoutp;
extern struct __sFILE* __stderrp;
typedef long long off_t;
typedef long ssize_t;
extern const int sys_nerr;
extern const char** sys_errlist;
enum anonymous_typeY2 { P_ALL
,P_PID
,P_PGID
};
typedef enum anonymous_typeY2 idtype_t;
typedef int pid_t;
typedef unsigned int id_t;
typedef int sig_atomic_t;
struct __darwin_arm_exception_state
{
    unsigned int __exception;
    unsigned int __fsr;
    unsigned int __far;
};
struct __darwin_arm_exception_state64
{
    unsigned long long __far;
    unsigned int __esr;
    unsigned int __exception;
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
    unsigned long long __x[29];
    unsigned long long __fp;
    unsigned long long __lr;
    unsigned long long __sp;
    unsigned long long __pc;
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
    unsigned long long __mdscr_el1;
};
struct __darwin_arm_debug_state64
{
    unsigned long long __bvr[16];
    unsigned long long __bcr[16];
    unsigned long long __wvr[16];
    unsigned long long __wcr[16];
    unsigned long long __mdscr_el1;
};
struct __darwin_arm_cpmu_state64
{
    unsigned long long __ctrs[16];
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
typedef struct __darwin_mcontext64* mcontext_t;
typedef struct _opaque_pthread_attr_t pthread_attr_t;
struct __darwin_sigaltstack
{
    void* ss_sp;
    long int ss_size;
    int ss_flags;
};
typedef struct __darwin_sigaltstack stack_t;
struct __darwin_ucontext
{
    int uc_onstack;
    unsigned int uc_sigmask;
    struct __darwin_sigaltstack uc_stack;
    struct __darwin_ucontext* uc_link;
    long int uc_mcsize;
    struct __darwin_mcontext64* uc_mcontext;
};
typedef struct __darwin_ucontext ucontext_t;
typedef unsigned int sigset_t;
typedef unsigned int uid_t;
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
    unsigned long int __pad[7];
};
typedef struct __siginfo siginfo_t;
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
typedef void (*sig_t)(int);
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
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef char int_least8_t;
typedef short short int_least16_t;
typedef int int_least32_t;
typedef long long int_least64_t;
typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;
typedef unsigned long long uint_least64_t;
typedef char int_fast8_t;
typedef short short int_fast16_t;
typedef int int_fast32_t;
typedef long long int_fast64_t;
typedef unsigned char uint_fast8_t;
typedef unsigned short int uint_fast16_t;
typedef unsigned int uint_fast32_t;
typedef unsigned long long uint_fast64_t;
typedef long int intmax_t;
typedef long int uintmax_t;
struct timeval
{
    long tv_sec;
    int tv_usec;
};
typedef unsigned long long rlim_t;
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
typedef void* rusage_info_t;
struct rusage_info_v0
{
    unsigned char ri_uuid[16];
    unsigned long long ri_user_time;
    unsigned long long ri_system_time;
    unsigned long long ri_pkg_idle_wkups;
    unsigned long long ri_interrupt_wkups;
    unsigned long long ri_pageins;
    unsigned long long ri_wired_size;
    unsigned long long ri_resident_size;
    unsigned long long ri_phys_footprint;
    unsigned long long ri_proc_start_abstime;
    unsigned long long ri_proc_exit_abstime;
};
struct rusage_info_v1
{
    unsigned char ri_uuid[16];
    unsigned long long ri_user_time;
    unsigned long long ri_system_time;
    unsigned long long ri_pkg_idle_wkups;
    unsigned long long ri_interrupt_wkups;
    unsigned long long ri_pageins;
    unsigned long long ri_wired_size;
    unsigned long long ri_resident_size;
    unsigned long long ri_phys_footprint;
    unsigned long long ri_proc_start_abstime;
    unsigned long long ri_proc_exit_abstime;
    unsigned long long ri_child_user_time;
    unsigned long long ri_child_system_time;
    unsigned long long ri_child_pkg_idle_wkups;
    unsigned long long ri_child_interrupt_wkups;
    unsigned long long ri_child_pageins;
    unsigned long long ri_child_elapsed_abstime;
};
struct rusage_info_v2
{
    unsigned char ri_uuid[16];
    unsigned long long ri_user_time;
    unsigned long long ri_system_time;
    unsigned long long ri_pkg_idle_wkups;
    unsigned long long ri_interrupt_wkups;
    unsigned long long ri_pageins;
    unsigned long long ri_wired_size;
    unsigned long long ri_resident_size;
    unsigned long long ri_phys_footprint;
    unsigned long long ri_proc_start_abstime;
    unsigned long long ri_proc_exit_abstime;
    unsigned long long ri_child_user_time;
    unsigned long long ri_child_system_time;
    unsigned long long ri_child_pkg_idle_wkups;
    unsigned long long ri_child_interrupt_wkups;
    unsigned long long ri_child_pageins;
    unsigned long long ri_child_elapsed_abstime;
    unsigned long long ri_diskio_bytesread;
    unsigned long long ri_diskio_byteswritten;
};
struct rusage_info_v3
{
    unsigned char ri_uuid[16];
    unsigned long long ri_user_time;
    unsigned long long ri_system_time;
    unsigned long long ri_pkg_idle_wkups;
    unsigned long long ri_interrupt_wkups;
    unsigned long long ri_pageins;
    unsigned long long ri_wired_size;
    unsigned long long ri_resident_size;
    unsigned long long ri_phys_footprint;
    unsigned long long ri_proc_start_abstime;
    unsigned long long ri_proc_exit_abstime;
    unsigned long long ri_child_user_time;
    unsigned long long ri_child_system_time;
    unsigned long long ri_child_pkg_idle_wkups;
    unsigned long long ri_child_interrupt_wkups;
    unsigned long long ri_child_pageins;
    unsigned long long ri_child_elapsed_abstime;
    unsigned long long ri_diskio_bytesread;
    unsigned long long ri_diskio_byteswritten;
    unsigned long long ri_cpu_time_qos_default;
    unsigned long long ri_cpu_time_qos_maintenance;
    unsigned long long ri_cpu_time_qos_background;
    unsigned long long ri_cpu_time_qos_utility;
    unsigned long long ri_cpu_time_qos_legacy;
    unsigned long long ri_cpu_time_qos_user_initiated;
    unsigned long long ri_cpu_time_qos_user_interactive;
    unsigned long long ri_billed_system_time;
    unsigned long long ri_serviced_system_time;
};
struct rusage_info_v4
{
    unsigned char ri_uuid[16];
    unsigned long long ri_user_time;
    unsigned long long ri_system_time;
    unsigned long long ri_pkg_idle_wkups;
    unsigned long long ri_interrupt_wkups;
    unsigned long long ri_pageins;
    unsigned long long ri_wired_size;
    unsigned long long ri_resident_size;
    unsigned long long ri_phys_footprint;
    unsigned long long ri_proc_start_abstime;
    unsigned long long ri_proc_exit_abstime;
    unsigned long long ri_child_user_time;
    unsigned long long ri_child_system_time;
    unsigned long long ri_child_pkg_idle_wkups;
    unsigned long long ri_child_interrupt_wkups;
    unsigned long long ri_child_pageins;
    unsigned long long ri_child_elapsed_abstime;
    unsigned long long ri_diskio_bytesread;
    unsigned long long ri_diskio_byteswritten;
    unsigned long long ri_cpu_time_qos_default;
    unsigned long long ri_cpu_time_qos_maintenance;
    unsigned long long ri_cpu_time_qos_background;
    unsigned long long ri_cpu_time_qos_utility;
    unsigned long long ri_cpu_time_qos_legacy;
    unsigned long long ri_cpu_time_qos_user_initiated;
    unsigned long long ri_cpu_time_qos_user_interactive;
    unsigned long long ri_billed_system_time;
    unsigned long long ri_serviced_system_time;
    unsigned long long ri_logical_writes;
    unsigned long long ri_lifetime_max_phys_footprint;
    unsigned long long ri_instructions;
    unsigned long long ri_cycles;
    unsigned long long ri_billed_energy;
    unsigned long long ri_serviced_energy;
    unsigned long long ri_interval_max_phys_footprint;
    unsigned long long ri_runnable_time;
};
struct rusage_info_v5
{
    unsigned char ri_uuid[16];
    unsigned long long ri_user_time;
    unsigned long long ri_system_time;
    unsigned long long ri_pkg_idle_wkups;
    unsigned long long ri_interrupt_wkups;
    unsigned long long ri_pageins;
    unsigned long long ri_wired_size;
    unsigned long long ri_resident_size;
    unsigned long long ri_phys_footprint;
    unsigned long long ri_proc_start_abstime;
    unsigned long long ri_proc_exit_abstime;
    unsigned long long ri_child_user_time;
    unsigned long long ri_child_system_time;
    unsigned long long ri_child_pkg_idle_wkups;
    unsigned long long ri_child_interrupt_wkups;
    unsigned long long ri_child_pageins;
    unsigned long long ri_child_elapsed_abstime;
    unsigned long long ri_diskio_bytesread;
    unsigned long long ri_diskio_byteswritten;
    unsigned long long ri_cpu_time_qos_default;
    unsigned long long ri_cpu_time_qos_maintenance;
    unsigned long long ri_cpu_time_qos_background;
    unsigned long long ri_cpu_time_qos_utility;
    unsigned long long ri_cpu_time_qos_legacy;
    unsigned long long ri_cpu_time_qos_user_initiated;
    unsigned long long ri_cpu_time_qos_user_interactive;
    unsigned long long ri_billed_system_time;
    unsigned long long ri_serviced_system_time;
    unsigned long long ri_logical_writes;
    unsigned long long ri_lifetime_max_phys_footprint;
    unsigned long long ri_instructions;
    unsigned long long ri_cycles;
    unsigned long long ri_billed_energy;
    unsigned long long ri_serviced_energy;
    unsigned long long ri_interval_max_phys_footprint;
    unsigned long long ri_runnable_time;
    unsigned long long ri_flags;
};
struct rusage_info_v6
{
    unsigned char ri_uuid[16];
    unsigned long long ri_user_time;
    unsigned long long ri_system_time;
    unsigned long long ri_pkg_idle_wkups;
    unsigned long long ri_interrupt_wkups;
    unsigned long long ri_pageins;
    unsigned long long ri_wired_size;
    unsigned long long ri_resident_size;
    unsigned long long ri_phys_footprint;
    unsigned long long ri_proc_start_abstime;
    unsigned long long ri_proc_exit_abstime;
    unsigned long long ri_child_user_time;
    unsigned long long ri_child_system_time;
    unsigned long long ri_child_pkg_idle_wkups;
    unsigned long long ri_child_interrupt_wkups;
    unsigned long long ri_child_pageins;
    unsigned long long ri_child_elapsed_abstime;
    unsigned long long ri_diskio_bytesread;
    unsigned long long ri_diskio_byteswritten;
    unsigned long long ri_cpu_time_qos_default;
    unsigned long long ri_cpu_time_qos_maintenance;
    unsigned long long ri_cpu_time_qos_background;
    unsigned long long ri_cpu_time_qos_utility;
    unsigned long long ri_cpu_time_qos_legacy;
    unsigned long long ri_cpu_time_qos_user_initiated;
    unsigned long long ri_cpu_time_qos_user_interactive;
    unsigned long long ri_billed_system_time;
    unsigned long long ri_serviced_system_time;
    unsigned long long ri_logical_writes;
    unsigned long long ri_lifetime_max_phys_footprint;
    unsigned long long ri_instructions;
    unsigned long long ri_cycles;
    unsigned long long ri_billed_energy;
    unsigned long long ri_serviced_energy;
    unsigned long long ri_interval_max_phys_footprint;
    unsigned long long ri_runnable_time;
    unsigned long long ri_flags;
    unsigned long long ri_user_ptime;
    unsigned long long ri_system_ptime;
    unsigned long long ri_pinstructions;
    unsigned long long ri_pcycles;
    unsigned long long ri_energy_nj;
    unsigned long long ri_penergy_nj;
    unsigned long long ri_secure_time_in_system;
    unsigned long long ri_secure_ptime_in_system;
    unsigned long long ri_reserved[12];
};
typedef struct rusage_info_v6 rusage_info_current;
struct rlimit
{
    unsigned long long rlim_cur;
    unsigned long long rlim_max;
};
struct proc_rlimit_control_wakeupmon
{
    unsigned int wm_flags;
    int wm_rate;
};
struct anonymous_typeX3
{
    unsigned int w_Termsig:7;
    unsigned int w_Coredump:1;
    unsigned int w_Retcode:8;
    unsigned int w_Filler:16;
};
struct anonymous_typeX4
{
    unsigned int w_Stopval:8;
    unsigned int w_Stopsig:8;
    unsigned int w_Filler:16;
};
union wait
{
int w_status;
struct anonymous_typeX3 w_T;
struct anonymous_typeX4 w_S;
};
typedef int ct_rune_t;
typedef int rune_t;
typedef int wchar_t;
struct anonymous_typeX5
{
    int quot;
    int rem;
};
typedef struct anonymous_typeX5 div_t;
struct anonymous_typeX6
{
    long quot;
    long rem;
};
typedef struct anonymous_typeX6 ldiv_t;
struct anonymous_typeX7
{
    long long quot;
    long long rem;
};
typedef struct anonymous_typeX7 lldiv_t;
extern int __mb_cur_max;
typedef unsigned long long malloc_type_id_t;
typedef struct _malloc_zone_t malloc_zone_t;
typedef int dev_t;
typedef unsigned short int mode_t;
extern char* suboptarg;
typedef long int rsize_t;
typedef int errno_t;
typedef __builtin_va_list va_list;
typedef __builtin_va_list __gnuc_va_list;
typedef void* any;
typedef char* string;
extern _Bool gComeGCLib;
struct list_item$1voidp
{
    void* item;
    struct list_item$1voidp* prev;
    struct list_item$1voidp* next;
};
struct list$1voidp
{
    struct list_item$1voidp* head;
    struct list_item$1voidp* tail;
    int len;
    struct list_item$1voidp* it;
};
struct buffer
{
    char* buf;
    int len;
    int size;
};
struct smart_pointer$1char
{
    struct buffer* memory;
    char* p;
};
struct smart_pointer$1short
{
    struct buffer* memory;
    short short* p;
};
struct smart_pointer$1int
{
    struct buffer* memory;
    int* p;
};
struct smart_pointer$1long
{
    struct buffer* memory;
    long* p;
};
struct smart_pointer$1float
{
    struct buffer* memory;
    float* p;
};
struct smart_pointer$1double
{
    struct buffer* memory;
    double* p;
};
struct list_item$1char
{
    char item;
    struct list_item$1char* prev;
    struct list_item$1char* next;
};
struct list$1char
{
    struct list_item$1char* head;
    struct list_item$1char* tail;
    int len;
    struct list_item$1char* it;
};
struct list_item$1short
{
    short short item;
    struct list_item$1short* prev;
    struct list_item$1short* next;
};
struct list$1short
{
    struct list_item$1short* head;
    struct list_item$1short* tail;
    int len;
    struct list_item$1short* it;
};
struct list_item$1int
{
    int item;
    struct list_item$1int* prev;
    struct list_item$1int* next;
};
struct list$1int
{
    struct list_item$1int* head;
    struct list_item$1int* tail;
    int len;
    struct list_item$1int* it;
};
struct list_item$1long
{
    long item;
    struct list_item$1long* prev;
    struct list_item$1long* next;
};
struct list$1long
{
    struct list_item$1long* head;
    struct list_item$1long* tail;
    int len;
    struct list_item$1long* it;
};
struct list_item$1float
{
    float item;
    struct list_item$1float* prev;
    struct list_item$1float* next;
};
struct list$1float
{
    struct list_item$1float* head;
    struct list_item$1float* tail;
    int len;
    struct list_item$1float* it;
};
struct list_item$1double
{
    double item;
    struct list_item$1double* prev;
    struct list_item$1double* next;
};
struct list$1double
{
    struct list_item$1double* head;
    struct list_item$1double* tail;
    int len;
    struct list_item$1double* it;
};
struct list_item$1charph
{
    char* item;
    struct list_item$1charph* prev;
    struct list_item$1charph* next;
};
struct list$1charph
{
    struct list_item$1charph* head;
    struct list_item$1charph* tail;
    int len;
    struct list_item$1charph* it;
};
struct integer
{
    long value;
};
extern _Bool gComeDebug;
extern _Bool gComeGC;
extern _Bool gComeC;
extern _Bool gComeMalloc;
extern _Bool gCommonHeader;
extern int gComeDebugStackFrameID;
struct sType;
struct sClass;
struct tuple2$2charphsTypeph
{
    char* v1;
    struct sType* v2;
};
struct list_item$1tuple2$2charphsTypephph
{
    struct tuple2$2charphsTypeph* item;
    struct list_item$1tuple2$2charphsTypephph* prev;
    struct list_item$1tuple2$2charphsTypephph* next;
};
struct list$1tuple2$2charphsTypephph
{
    struct list_item$1tuple2$2charphsTypephph* head;
    struct list_item$1tuple2$2charphsTypephph* tail;
    int len;
    struct list_item$1tuple2$2charphsTypephph* it;
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
    char* mName;
    int mGenericsNum;
    int mMethodGenericsNum;
    struct list$1tuple2$2charphsTypephph* mFields;
    _Bool mOutputed;
    _Bool mOutputed2;
    char* mDeclareSName;
    _Bool mNobodyStruct;
    char* mParentClassName;
};
struct sInfo;
struct sNode
{
    void* _protocol_obj;
    void (*finalize)(void*);
    void* (*clone)(void*);
    _Bool (*compile)(void*,struct sInfo*);
    int (*sline)(void*);
    char* (*sname)(void*);
    _Bool (*terminated)(void*);
    char* (*kind)(void*);
};
struct sNodeBase
{
    int sline;
    char* sname;
};
struct list_item$1sTypeph
{
    struct sType* item;
    struct list_item$1sTypeph* prev;
    struct list_item$1sTypeph* next;
};
struct list$1sTypeph
{
    struct list_item$1sTypeph* head;
    struct list_item$1sTypeph* tail;
    int len;
    struct list_item$1sTypeph* it;
};
struct tuple1$1sTypeph
{
    struct sType* v1;
};
struct list_item$1sNodeph
{
    struct sNode* item;
    struct list_item$1sNodeph* prev;
    struct list_item$1sNodeph* next;
};
struct list$1sNodeph
{
    struct list_item$1sNodeph* head;
    struct list_item$1sNodeph* tail;
    int len;
    struct list_item$1sNodeph* it;
};
struct sType
{
    struct sClass* mClass;
    struct list$1sTypeph* mMultipleTypes;
    struct tuple1$1sTypeph* mNoSolvedGenericsType;
    struct tuple1$1sTypeph* mOriginalLoadVarType;
    char* mGenericsName;
    struct list$1sTypeph* mGenericsTypes;
    struct list$1sNodeph* mArrayNum;
    _Bool mOmitArrayNum;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct tuple1$1sTypeph* mResultType;
    _Bool mVarArgs;
    struct sNode* mAlignas;
    _Bool mUnsigned;
    _Bool mShort;
    _Bool mLong;
    _Bool mLongLong;
    _Bool mConstant;
    _Bool mRegister;
    _Bool mVolatile;
    _Bool mStatic;
    _Bool mRecord;
    _Bool mExtern;
    _Bool mRestrict;
    _Bool mImmutable;
    _Bool mHeap;
    _Bool mDummyHeap;
    _Bool mDelegate;
    _Bool mShare;
    _Bool mClone;
    _Bool mNoHeap;
    _Bool mNoCallingDestructor;
    _Bool mRefference;
    _Bool mException;
    int mPointerNum;
    int mOriginalTypeNamePointerNum;
    int mNoArrayPointerNum;
    struct sNode* mSizeNum;
    unsigned int mDynamicArrayNum;
    unsigned int mTypeOfExpression;
    char* mOriginalTypeName;
    int mOriginalPointerNum;
    _Bool mFunctionParam;
    _Bool mAllocaValue;
    _Bool mGenericsStruct;
    _Bool mSolvedGenericsName;
    _Bool mComeMemCore;
    _Bool mInline;
    _Bool mNullValue;
    _Bool mGuardValue;
    char* mAsmName;
    _Bool mArrayPointerType;
};
struct sVar;
struct CVALUE
{
    char* c_value;
    struct sType* type;
    struct sVar* var;
};
struct sVar
{
    char* mName;
    char* mCValueName;
    struct sType* mType;
    int mBlockLevel;
    _Bool mGlobal;
    _Bool mAllocaValue;
    _Bool mFunctionParam;
    _Bool mNoFree;
    char* mFunName;
};
struct sVarTable;
struct sBlock;
struct sFun
{
    char* mName;
    struct sType* mResultType;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct list$1charph* mParamDefaultParametors;
    struct sType* mLambdaType;
    struct sBlock* mBlock;
    _Bool mExternal;
    _Bool mVarArgs;
    struct buffer* mSource;
    struct buffer* mSourceHead;
    struct buffer* mSourceHead2;
    struct buffer* mSourceDefer;
    _Bool mStatic;
    char* mComeHeader;
    _Bool mCloner;
    char* mDeclareSName;
};
struct sGenericsFun
{
    struct sType* mImplType;
    struct list$1charph* mGenericsTypeNames;
    struct list$1charph* mMethodGenericsTypeNames;
    char* mName;
    struct sType* mResultType;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct list$1charph* mParamDefaultParametors;
    char* mBlock;
    int mSLine;
    _Bool mVarArgs;
    char* mGenericsSName;
    int mGenericsSLine;
};
struct sModule
{
    struct buffer* mSourceHead;
    struct buffer* mSource;
    char* mLastCode;
    char* mLastCode2;
    char* mLastCode3;
    struct buffer* mHeader;
};
struct sVarTable;
struct list_item$1charp
{
    char* item;
    struct list_item$1charp* prev;
    struct list_item$1charp* next;
};
struct list$1charp
{
    struct list_item$1charp* head;
    struct list_item$1charp* tail;
    int len;
    struct list_item$1charp* it;
};
struct map$2charphsVarph
{
    char** keys;
    _Bool* item_existance;
    struct sVar** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct sVarTable
{
    struct map$2charphsVarph* mVars;
    _Bool mGlobal;
    struct sVarTable* mParent;
    int mID;
};
struct sBlock
{
    struct list$1sNodeph* mNodes;
    struct sVarTable* mVarTable;
};
struct sRightValueObject
{
    struct sType* mType;
    char* mVarName;
    char* mFunName;
    _Bool mFreed;
    int mID;
    int mBlockLevel;
};
struct sClassModule
{
    char* mName;
    char* mText;
    struct list$1charph* mParams;
    char* mSName;
    int mSLine;
};
struct map$2charphsFunph
{
    char** keys;
    _Bool* item_existance;
    struct sFun** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct map$2charphsGenericsFunph
{
    char** keys;
    _Bool* item_existance;
    struct sGenericsFun** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct map$2charphsClassph
{
    char** keys;
    _Bool* item_existance;
    struct sClass** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct map$2charphsClassModuleph
{
    char** keys;
    _Bool* item_existance;
    struct sClassModule** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct map$2charphsTypeph
{
    char** keys;
    _Bool* item_existance;
    struct sType** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct list_item$1sRightValueObjectph
{
    struct sRightValueObject* item;
    struct list_item$1sRightValueObjectph* prev;
    struct list_item$1sRightValueObjectph* next;
};
struct list$1sRightValueObjectph
{
    struct list_item$1sRightValueObjectph* head;
    struct list_item$1sRightValueObjectph* tail;
    int len;
    struct list_item$1sRightValueObjectph* it;
};
struct list_item$1CVALUEph
{
    struct CVALUE* item;
    struct list_item$1CVALUEph* prev;
    struct list_item$1CVALUEph* next;
};
struct list$1CVALUEph
{
    struct list_item$1CVALUEph* head;
    struct list_item$1CVALUEph* tail;
    int len;
    struct list_item$1CVALUEph* it;
};
struct map$2charphcharph
{
    char** keys;
    _Bool* item_existance;
    char** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct sInfo
{
    char* p;
    char* head;
    struct buffer* original_source;
    struct buffer* source;
    char* sname;
    char* base_sname;
    int sline;
    int err_num;
    char* err_line;
    char* clang_option;
    char* cpp_option;
    _Bool no_output_err;
    _Bool no_output_come_code;
    struct sFun* come_fun;
    char* come_fun_name;
    struct sFun* caller_fun;
    int caller_line;
    char* caller_sname;
    int block_level;
    struct map$2charphsFunph* funcs;
    struct map$2charphsGenericsFunph* generics_funcs;
    struct map$2charphsClassph* classes;
    struct map$2charphsClassModuleph* modules;
    struct map$2charphsTypeph* types;
    struct map$2charphsClassph* generics_classes;
    struct sModule* module;
    struct sType* type;
    struct list$1sRightValueObjectph* right_value_objects;
    struct sType* generics_type;
    struct list$1sTypeph* method_generics_types;
    struct list$1CVALUEph* stack;
    struct sType* come_function_result_type;
    struct sVarTable* lv_table;
    struct sVarTable* gv_table;
    _Bool no_comma;
    _Bool no_assign;
    _Bool last_statment_is_return;
    struct list$1charph* generics_type_names;
    struct list$1charph* method_generics_type_names;
    struct sType* impl_type;
    int current_stack_num;
    int num_method_block;
    struct sClass* current_stack_frame_struct;
    struct list$1sTypeph* param_types;
    struct list$1charph* param_names;
    _Bool define_struct;
    _Bool in_typedef;
    _Bool in_loop;
    char* output_file_name;
    struct sVarTable* current_loop_vtable;
    _Bool verbose;
    _Bool output_header_file;
    int num_current_stack;
    int num_source_files;
    int max_source_files;
    _Bool without_semicolon;
    _Bool writing_source_file_position;
    struct sType* function_result_type;
    _Bool in_class;
    struct map$2charphcharph* module_params;
};
struct tuple2$2sTypephcharph
{
    struct sType* v1;
    char* v2;
};
struct tuple3$3sTypephcharphbool
{
    struct sType* v1;
    char* v2;
    _Bool v3;
};
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool
{
    struct list$1sTypeph* v1;
    struct list$1charph* v2;
    struct list$1charph* v3;
    _Bool v4;
};
struct tuple2$2sFunpcharph
{
    struct sFun* v1;
    char* v2;
};
struct accessx_descriptor
{
    unsigned int ad_name_offset;
    int ad_flags;
    int ad_pad[2];
};
typedef unsigned int gid_t;
typedef unsigned int useconds_t;
extern char* optarg;
extern int optind;
extern int opterr;
extern int optopt;
struct fd_set
{
    int fds_bits[((((1024)%((sizeof(int)*8)))==0)?((1024)/((sizeof(int)*8))):(((1024)/((sizeof(int)*8)))+1))];
};
typedef struct fd_set fd_set;
struct timespec
{
    long tv_sec;
    long tv_nsec;
};
typedef long time_t;
typedef int suseconds_t;
typedef unsigned char uuid_t[16];
extern char* suboptarg;
struct fssearchblock;
struct searchstate;
extern int optreset;
typedef unsigned char u_char;
typedef unsigned short int u_short;
typedef unsigned int u_int;
typedef unsigned long int u_long;
typedef unsigned short int ushort;
typedef unsigned int uint;
typedef unsigned long long u_quad_t;
typedef long long quad_t;
typedef long long* qaddr_t;
typedef char* caddr_t;
typedef int daddr_t;
typedef unsigned int fixpt_t;
typedef long long blkcnt_t;
typedef int blksize_t;
typedef unsigned int in_addr_t;
typedef unsigned short int in_port_t;
typedef unsigned long long ino_t;
typedef unsigned long long ino64_t;
typedef int key_t;
typedef unsigned short int nlink_t;
typedef int segsz_t;
typedef int swblk_t;
typedef unsigned long int clock_t;
typedef int fd_mask;
typedef struct _opaque_pthread_cond_t pthread_cond_t;
typedef struct _opaque_pthread_condattr_t pthread_condattr_t;
typedef struct _opaque_pthread_mutex_t pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t pthread_once_t;
typedef struct _opaque_pthread_rwlock_t pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t pthread_rwlockattr_t;
typedef struct _opaque_pthread_t* pthread_t;
typedef unsigned long int pthread_key_t;
typedef unsigned int fsblkcnt_t;
typedef unsigned int fsfilcnt_t;
struct ostat
{
    unsigned short int st_dev;
    unsigned long long st_ino;
    unsigned short int st_mode;
    unsigned short int st_nlink;
    unsigned short int st_uid;
    unsigned short int st_gid;
    unsigned short int st_rdev;
    int st_size;
    struct timespec st_atimespec;
    struct timespec st_mtimespec;
    struct timespec st_ctimespec;
    int st_blksize;
    int st_blocks;
    unsigned int st_flags;
    unsigned int st_gen;
};
struct stat
{
    int st_dev;
    unsigned short int st_mode;
    unsigned short int st_nlink;
    unsigned long long st_ino;
    unsigned int st_uid;
    unsigned int st_gid;
    int st_rdev;
    struct timespec st_atimespec;
    struct timespec st_mtimespec;
    struct timespec st_ctimespec;
    struct timespec st_birthtimespec;
    long long st_size;
    long long st_blocks;
    int st_blksize;
    unsigned int st_flags;
    unsigned int st_gen;
    int st_lspare;
    long long st_qspare[2];
};
struct _filesec;
typedef struct _filesec* filesec_t;
_Bool gComeGC=(_Bool)0;
_Bool gComeC=(_Bool)0;
char* gProgramName=((void*)0);
_Bool gCommonHeader=(_Bool)0;
_Bool gComeMalloc=(_Bool)0;
_Bool gComeDebug=(_Bool)0;
_Bool gComeOriginalSourcePosition=(_Bool)1;
int gComeDebugStackFrameID=0;
struct __current_stack1__
{
    int* n_52;
    char** msg2_50;
    struct sInfo** info;
    char** msg;
};
struct __current_stack2__
{
    struct sInfo* info_298;
    struct buffer** clang_option_281;
    struct buffer** cpp_option_282;
    struct list$1charph** files_283;
    struct list$1charph** object_files_284;
    _Bool* output_object_file_285;
    _Bool* output_cpp_file_286;
    _Bool* output_source_file_flag_287;
    char** output_file_name_288;
    _Bool* verbose_289;
    _Bool* come_debug_290;
    _Bool* come_malloc_291;
    _Bool* come_str_292;
    int* argc;
    char*** argv;
};

// header function
void come_heap_init(int come_malloc, int come_debug, int come_gc);

void come_heap_final();

int renameat(int anonymous_var_nameX3, const char* anonymous_var_nameX4, int anonymous_var_nameX5, const char* anonymous_var_nameX6);

int renamex_np(const char* anonymous_var_nameX7, const char* anonymous_var_nameX8, unsigned int anonymous_var_nameX9);

int renameatx_np(int anonymous_var_nameX10, const char* anonymous_var_nameX11, int anonymous_var_nameX12, const char* anonymous_var_nameX13, unsigned int anonymous_var_nameX14);

void clearerr(struct __sFILE* anonymous_var_nameX35);

int fclose(struct __sFILE* anonymous_var_nameX36);

int feof(struct __sFILE* anonymous_var_nameX37);

int ferror(struct __sFILE* anonymous_var_nameX38);

int fflush(struct __sFILE* anonymous_var_nameX39);

int fgetc(struct __sFILE* anonymous_var_nameX40);

int fgetpos(struct __sFILE* anonymous_var_nameX41, long long* anonymous_var_nameX42);

char* fgets(char* anonymous_var_nameX43, int anonymous_var_nameX44, struct __sFILE* anonymous_var_nameX45);

struct __sFILE* fopen(const char* __filename, const char* __mode);

int fprintf(struct __sFILE* anonymous_var_nameX46, const char* anonymous_var_nameX47, ...);

int fputc(int anonymous_var_nameX48, struct __sFILE* anonymous_var_nameX49);

int fputs(const char* anonymous_var_nameX50, struct __sFILE* anonymous_var_nameX51);

long int fread(void* __ptr, long int __size, long int __nitems, struct __sFILE* __stream);

struct __sFILE* freopen(const char* anonymous_var_nameX52, const char* anonymous_var_nameX53, struct __sFILE* anonymous_var_nameX54);

int fscanf(struct __sFILE* anonymous_var_nameX55, const char* anonymous_var_nameX56, ...);

int fseek(struct __sFILE* anonymous_var_nameX57, long anonymous_var_nameX58, int anonymous_var_nameX59);

int fsetpos(struct __sFILE* anonymous_var_nameX60, const long long* anonymous_var_nameX61);

long ftell(struct __sFILE* anonymous_var_nameX62);

long int fwrite(const void* __ptr, long int __size, long int __nitems, struct __sFILE* __stream);

int getc(struct __sFILE* anonymous_var_nameX63);

int getchar();

char* gets(char* anonymous_var_nameX64);

void perror(const char* anonymous_var_nameX65);

int printf(const char* anonymous_var_nameX66, ...);

int putc(int anonymous_var_nameX67, struct __sFILE* anonymous_var_nameX68);

int putchar(int anonymous_var_nameX69);

int puts(const char* anonymous_var_nameX70);

int remove(const char* anonymous_var_nameX71);

int rename(const char* __old, const char* __new);

void rewind(struct __sFILE* anonymous_var_nameX72);

int scanf(const char* anonymous_var_nameX73, ...);

void setbuf(struct __sFILE* anonymous_var_nameX74, char* anonymous_var_nameX75);

int setvbuf(struct __sFILE* anonymous_var_nameX76, char* anonymous_var_nameX77, int anonymous_var_nameX78, long int anonymous_var_nameX79);

int sprintf(char* anonymous_var_nameX80, const char* anonymous_var_nameX81, ...);

int sscanf(const char* anonymous_var_nameX82, const char* anonymous_var_nameX83, ...);

struct __sFILE* tmpfile();

char* tmpnam(char* anonymous_var_nameX84);

int ungetc(int anonymous_var_nameX85, struct __sFILE* anonymous_var_nameX86);

int vfprintf(struct __sFILE* anonymous_var_nameX87, const char* anonymous_var_nameX88, va_list anonymous_var_nameX89);

int vprintf(const char* anonymous_var_nameX90, va_list anonymous_var_nameX91);

int vsprintf(char* anonymous_var_nameX92, const char* anonymous_var_nameX93, va_list anonymous_var_nameX94);

char* ctermid(char* anonymous_var_nameX95);

struct __sFILE* fdopen(int anonymous_var_nameX96, const char* anonymous_var_nameX97);

int fileno(struct __sFILE* anonymous_var_nameX98);

int pclose(struct __sFILE* anonymous_var_nameX99);

struct __sFILE* popen(const char* anonymous_var_nameX100, const char* anonymous_var_nameX101);

int __srget(struct __sFILE* anonymous_var_nameX102);

int __svfscanf(struct __sFILE* anonymous_var_nameX103, const char* anonymous_var_nameX104, va_list anonymous_var_nameX105);

int __swbuf(int anonymous_var_nameX106, struct __sFILE* anonymous_var_nameX107);

void flockfile(struct __sFILE* anonymous_var_nameX108);

int ftrylockfile(struct __sFILE* anonymous_var_nameX109);

void funlockfile(struct __sFILE* anonymous_var_nameX110);

int getc_unlocked(struct __sFILE* anonymous_var_nameX111);

int getchar_unlocked();

int putc_unlocked(int anonymous_var_nameX112, struct __sFILE* anonymous_var_nameX113);

int putchar_unlocked(int anonymous_var_nameX114);

int getw(struct __sFILE* anonymous_var_nameX115);

int putw(int anonymous_var_nameX116, struct __sFILE* anonymous_var_nameX117);

char* tempnam(const char* __dir, const char* __prefix);

int fseeko(struct __sFILE* __stream, long long __offset, int __whence);

long long ftello(struct __sFILE* __stream);

int snprintf(char* __str, long int __size, const char* __format, ...);

int vfscanf(struct __sFILE* __stream, const char* __format, va_list anonymous_var_nameX118);

int vscanf(const char* __format, va_list anonymous_var_nameX119);

int vsnprintf(char* __str, long int __size, const char* __format, va_list anonymous_var_nameX120);

int vsscanf(const char* __str, const char* __format, va_list anonymous_var_nameX121);

int dprintf(int anonymous_var_nameX122, const char* anonymous_var_nameX123, ...);

int vdprintf(int anonymous_var_nameX124, const char* anonymous_var_nameX125, va_list anonymous_var_nameX126);

long getdelim(char** __linep, long int* __linecapp, int __delimiter, struct __sFILE* __stream);

long getline(char** __linep, long int* __linecapp, struct __sFILE* __stream);

struct __sFILE* fmemopen(void* __buf, long int __size, const char* __mode);

struct __sFILE* open_memstream(char** __bufp, long int* __sizep);

int asprintf(char** anonymous_var_nameX127, const char* anonymous_var_nameX128, ...);

char* ctermid_r(char* anonymous_var_nameX129);

char* fgetln(struct __sFILE* anonymous_var_nameX130, long int* anonymous_var_nameX131);

const char* fmtcheck(const char* anonymous_var_nameX132, const char* anonymous_var_nameX133);

int fpurge(struct __sFILE* anonymous_var_nameX134);

void setbuffer(struct __sFILE* anonymous_var_nameX135, char* anonymous_var_nameX136, int anonymous_var_nameX137);

int setlinebuf(struct __sFILE* anonymous_var_nameX138);

int vasprintf(char** anonymous_var_nameX139, const char* anonymous_var_nameX140, va_list anonymous_var_nameX141);

struct __sFILE* funopen(const void* anonymous_var_nameX142, int (*anonymous_lambda_var_nameZ1)(void*,char*,int), int (*anonymous_lambda_var_nameZ2)(void*,const char*,int), long long (*anonymous_lambda_var_nameZ3)(void*,long long,int), int (*anonymous_lambda_var_nameZ4)(void*));

void (*signal(int _function_pointer_result_var_name_a1, void (*_function_pointer_result_var_name_a2)(int)))(int);

int getpriority(int anonymous_var_nameX173, unsigned int anonymous_var_nameX174);

int getiopolicy_np(int anonymous_var_nameX175, int anonymous_var_nameX176);

int getrlimit(int anonymous_var_nameX177, struct rlimit* anonymous_var_nameX178);

int getrusage(int anonymous_var_nameX179, struct rusage* anonymous_var_nameX180);

int setpriority(int anonymous_var_nameX181, unsigned int anonymous_var_nameX182, int anonymous_var_nameX183);

int setiopolicy_np(int anonymous_var_nameX184, int anonymous_var_nameX185, int anonymous_var_nameX186);

int setrlimit(int anonymous_var_nameX187, const struct rlimit* anonymous_var_nameX188);

int wait(int* anonymous_var_nameX189);

int waitpid(int anonymous_var_nameX190, int* anonymous_var_nameX191, int anonymous_var_nameX192);

int waitid(enum anonymous_typeY2 anonymous_var_nameX193, unsigned int anonymous_var_nameX194, struct __siginfo* anonymous_var_nameX195, int anonymous_var_nameX196);

int wait3(int* anonymous_var_nameX197, int anonymous_var_nameX198, struct rusage* anonymous_var_nameX199);

int wait4(int anonymous_var_nameX200, int* anonymous_var_nameX201, int anonymous_var_nameX202, struct rusage* anonymous_var_nameX203);

void* alloca(long int anonymous_var_nameX204);

void* malloc_type_malloc(long int size, unsigned long long type_id);

void* malloc_type_calloc(long int count, long int size, unsigned long long type_id);

void malloc_type_free(void* ptr, unsigned long long type_id);

void* malloc_type_realloc(void* ptr, long int size, unsigned long long type_id);

void* malloc_type_valloc(long int size, unsigned long long type_id);

void* malloc_type_aligned_alloc(long int alignment, long int size, unsigned long long type_id);

int malloc_type_posix_memalign(void** memptr, long int alignment, long int size, unsigned long long type_id);

void* malloc_type_zone_malloc(struct _malloc_zone_t* zone, long int size, unsigned long long type_id);

void* malloc_type_zone_calloc(struct _malloc_zone_t* zone, long int count, long int size, unsigned long long type_id);

void malloc_type_zone_free(struct _malloc_zone_t* zone, void* ptr, unsigned long long type_id);

void* malloc_type_zone_realloc(struct _malloc_zone_t* zone, void* ptr, long int size, unsigned long long type_id);

void* malloc_type_zone_valloc(struct _malloc_zone_t* zone, long int size, unsigned long long type_id);

void* malloc_type_zone_memalign(struct _malloc_zone_t* zone, long int alignment, long int size, unsigned long long type_id);

void* malloc(long int __size);

void* calloc(long int __count, long int __size);

void free(void* anonymous_var_nameX205);

void* realloc(void* __ptr, long int __size);

void* reallocf(void* __ptr, long int __size);

void* aligned_alloc(long int __alignment, long int __size);

int posix_memalign(void** __memptr, long int __alignment, long int __size);

void abort();

int abs(int anonymous_var_nameX207);

int atexit(void (*anonymous_lambda_var_nameZ6)());

double atof(const char* anonymous_var_nameX208);

int atoi(const char* anonymous_var_nameX209);

long atol(const char* anonymous_var_nameX210);

long long atoll(const char* anonymous_var_nameX211);

void* bsearch(const void* __key, const void* __base, long int __nel, long int __width, int (*__compar)(const void*,const void*));

struct anonymous_typeX5 div(int anonymous_var_nameX214, int anonymous_var_nameX215);

void exit(int anonymous_var_nameX216);

char* getenv(const char* anonymous_var_nameX217);

long labs(long anonymous_var_nameX218);

struct anonymous_typeX6 ldiv(long anonymous_var_nameX219, long anonymous_var_nameX220);

long long llabs(long long anonymous_var_nameX221);

struct anonymous_typeX7 lldiv(long long anonymous_var_nameX222, long long anonymous_var_nameX223);

int mblen(const char* __s, long int __n);

long int mbstowcs(int* anonymous_var_nameX224, const char* anonymous_var_nameX225, long int anonymous_var_nameX226);

int mbtowc(int* anonymous_var_nameX227, const char* anonymous_var_nameX228, long int anonymous_var_nameX229);

void qsort(void* __base, long int __nel, long int __width, int (*__compar)(const void*,const void*));

int rand();

void srand(unsigned int anonymous_var_nameX232);

double strtod(const char* anonymous_var_nameX233, char** anonymous_var_nameX234);

float strtof(const char* anonymous_var_nameX235, char** anonymous_var_nameX236);

long strtol(const char* __str, char** __endptr, int __base);

long double strtold(const char* anonymous_var_nameX237, char** anonymous_var_nameX238);

long long strtoll(const char* __str, char** __endptr, int __base);

unsigned long int strtoul(const char* __str, char** __endptr, int __base);

unsigned long long strtoull(const char* __str, char** __endptr, int __base);

int system(const char* anonymous_var_nameX239);

long int wcstombs(char* anonymous_var_nameX240, const int* anonymous_var_nameX241, long int anonymous_var_nameX242);

int wctomb(char* anonymous_var_nameX243, int anonymous_var_nameX244);

long a64l(const char* anonymous_var_nameX246);

double drand48();

char* ecvt(double anonymous_var_nameX247, int anonymous_var_nameX248, int* anonymous_var_nameX249, int* anonymous_var_nameX250);

double erand48(unsigned short int anonymous_var_nameX251[3]);

char* fcvt(double anonymous_var_nameX252, int anonymous_var_nameX253, int* anonymous_var_nameX254, int* anonymous_var_nameX255);

char* gcvt(double anonymous_var_nameX256, int anonymous_var_nameX257, char* anonymous_var_nameX258);

int grantpt(int anonymous_var_nameX262);

char* initstate(unsigned int anonymous_var_nameX263, char* anonymous_var_nameX264, long int anonymous_var_nameX265);

long jrand48(unsigned short int anonymous_var_nameX266[3]);

char* l64a(long anonymous_var_nameX267);

void lcong48(unsigned short int anonymous_var_nameX268[7]);

long lrand48();

long mrand48();

long nrand48(unsigned short int anonymous_var_nameX271[3]);

int posix_openpt(int anonymous_var_nameX272);

char* ptsname(int anonymous_var_nameX273);

int ptsname_r(int fildes, char* buffer, long int buflen);

int putenv(char* anonymous_var_nameX274);

long random();

int rand_r(unsigned int* anonymous_var_nameX275);

char* realpath(const char* anonymous_var_nameX276, char* anonymous_var_nameX277);

unsigned short int* seed48(unsigned short int anonymous_var_nameX278[3]);

int setenv(const char* __name, const char* __value, int __overwrite);

char* setstate(const char* anonymous_var_nameX280);

void srand48(long anonymous_var_nameX281);

void srandom(unsigned int anonymous_var_nameX282);

int unlockpt(int anonymous_var_nameX283);

int unsetenv(const char* anonymous_var_nameX284);

unsigned int arc4random();

void arc4random_addrandom(unsigned char* anonymous_var_nameX285, int anonymous_var_nameX286);

void arc4random_buf(void* __buf, long int __nbytes);

void arc4random_stir();

unsigned int arc4random_uniform(unsigned int __upper_bound);

int atexit_b(void (*anonymous_lambda_var_nameZ7)());

void* bsearch_b(const void* __key, const void* __base, long int __nel, long int __width, int (*__compar)(const void*,const void*));

char* cgetcap(char* anonymous_var_nameX289, const char* anonymous_var_nameX290, int anonymous_var_nameX291);

int cgetclose();

int cgetent(char** anonymous_var_nameX292, char** anonymous_var_nameX293, const char* anonymous_var_nameX294);

int cgetfirst(char** anonymous_var_nameX295, char** anonymous_var_nameX296);

int cgetmatch(const char* anonymous_var_nameX297, const char* anonymous_var_nameX298);

int cgetnext(char** anonymous_var_nameX299, char** anonymous_var_nameX300);

int cgetnum(char* anonymous_var_nameX301, const char* anonymous_var_nameX302, long* anonymous_var_nameX303);

int cgetset(const char* anonymous_var_nameX304);

int cgetstr(char* anonymous_var_nameX305, const char* anonymous_var_nameX306, char** anonymous_var_nameX307);

int cgetustr(char* anonymous_var_nameX308, const char* anonymous_var_nameX309, char** anonymous_var_nameX310);

int daemon(int anonymous_var_nameX311, int anonymous_var_nameX312);

char* devname(int anonymous_var_nameX313, unsigned short int anonymous_var_nameX314);

char* devname_r(int anonymous_var_nameX315, unsigned short int anonymous_var_nameX316, char* buf, int len);

char* getbsize(int* anonymous_var_nameX317, long* anonymous_var_nameX318);

int getloadavg(double* anonymous_var_nameX319, int anonymous_var_nameX320);

const char* getprogname();

void setprogname(const char* anonymous_var_nameX321);

int heapsort(void* __base, long int __nel, long int __width, int (*__compar)(const void*,const void*));

int heapsort_b(void* __base, long int __nel, long int __width, int (*__compar)(const void*,const void*));

int mergesort(void* __base, long int __nel, long int __width, int (*__compar)(const void*,const void*));

int mergesort_b(void* __base, long int __nel, long int __width, int (*__compar)(const void*,const void*));

void psort(void* __base, long int __nel, long int __width, int (*__compar)(const void*,const void*));

void psort_b(void* __base, long int __nel, long int __width, int (*__compar)(const void*,const void*));

void psort_r(void* __base, long int __nel, long int __width, void* anonymous_var_nameX334, int (*__compar)(void*,const void*,const void*));

void qsort_b(void* __base, long int __nel, long int __width, int (*__compar)(const void*,const void*));

void qsort_r(void* __base, long int __nel, long int __width, void* anonymous_var_nameX340, int (*__compar)(void*,const void*,const void*));

int radixsort(const unsigned char** __base, int __nel, const unsigned char* __table, unsigned int __endbyte);

int rpmatch(const char* anonymous_var_nameX344);

int sradixsort(const unsigned char** __base, int __nel, const unsigned char* __table, unsigned int __endbyte);

void sranddev();

void srandomdev();

long long strtonum(const char* __numstr, long long __minval, long long __maxval, const char** __errstrp);

long long strtoq(const char* __str, char** __endptr, int __base);

unsigned long long strtouq(const char* __str, char** __endptr, int __base);

void* memchr(const void* __s, int __c, long int __n);

int memcmp(const void* __s1, const void* __s2, long int __n);

void* memcpy(void* __dst, const void* __src, long int __n);

void* memmove(void* __dst, const void* __src, long int __len);

void* memset(void* __b, int __c, long int __len);

char* strcat(char* __s1, const char* __s2);

char* strchr(const char* __s, int __c);

int strcmp(const char* __s1, const char* __s2);

int strcoll(const char* __s1, const char* __s2);

char* strcpy(char* __dst, const char* __src);

long int strcspn(const char* __s, const char* __charset);

char* strerror(int __errnum);

long int strlen(const char* __s);

char* strncat(char* __s1, const char* __s2, long int __n);

int strncmp(const char* __s1, const char* __s2, long int __n);

char* strncpy(char* __dst, const char* __src, long int __n);

char* strpbrk(const char* __s, const char* __charset);

char* strrchr(const char* __s, int __c);

long int strspn(const char* __s, const char* __charset);

char* strstr(const char* __big, const char* __little);

char* strtok(char* __str, const char* __sep);

long int strxfrm(char* __s1, const char* __s2, long int __n);

char* strtok_r(char* __str, const char* __sep, char** __lasts);

int strerror_r(int __errnum, char* __strerrbuf, long int __buflen);

char* strdup(const char* __s1);

void* memccpy(void* __dst, const void* __src, int __c, long int __n);

char* stpcpy(char* __dst, const char* __src);

char* stpncpy(char* __dst, const char* __src, long int __n);

char* strndup(const char* __s1, long int __n);

long int strnlen(const char* __s1, long int __n);

char* strsignal(int __sig);

int memset_s(void* __s, long int __smax, int __c, long int __n);

void* memmem(const void* __big, long int __big_len, const void* __little, long int __little_len);

void memset_pattern4(void* __b, const void* __pattern4, long int __len);

void memset_pattern8(void* __b, const void* __pattern8, long int __len);

void memset_pattern16(void* __b, const void* __pattern16, long int __len);

char* strcasestr(const char* __big, const char* __little);

char* strnstr(const char* __big, const char* __little, long int __len);

long int strlcat(char* __dst, const char* __source, long int __size);

long int strlcpy(char* __dst, const char* __source, long int __size);

void strmode(int __mode, char* __bp);

char* strsep(char** __stringp, const char* __delim);

int timingsafe_bcmp(const void* __b1, const void* __b2, long int __len);

int strsignal_r(int __sig, char* __strsignalbuf, long int __buflen);

int bcmp(const void* anonymous_var_nameX348, const void* anonymous_var_nameX349, long int anonymous_var_nameX350);

void bcopy(const void* anonymous_var_nameX351, void* anonymous_var_nameX352, long int anonymous_var_nameX353);

void bzero(void* anonymous_var_nameX354, long int anonymous_var_nameX355);

char* index(const char* anonymous_var_nameX356, int anonymous_var_nameX357);

char* rindex(const char* anonymous_var_nameX358, int anonymous_var_nameX359);

int ffs(int anonymous_var_nameX360);

int strcasecmp(const char* anonymous_var_nameX361, const char* anonymous_var_nameX362);

int strncasecmp(const char* anonymous_var_nameX363, const char* anonymous_var_nameX364, long int anonymous_var_nameX365);

int ffsl(long anonymous_var_nameX366);

int ffsll(long long anonymous_var_nameX367);

int fls(int anonymous_var_nameX368);

int flsl(long anonymous_var_nameX369);

int flsll(long long anonymous_var_nameX370);

void come_push_stackframe(char* sname, int sline, int id);

void come_pop_stackframe();

void stackframe();

void come_save_stackframe(char* sname, int sline);

void* come_null_check(void* mem, char* sname, int sline, int id);

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline);

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*));

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*));

_Bool bool_value(_Bool self, void* parent, void (*block)(void*));

int int_expect(int self, void* parent, void (*block)(void*));

int int_catch(int self, void* parent, void (*block)(void*));

int int_value(int self, void* parent, void (*block)(void*));

int int_except(int self, void* parent, void (*block)(void*));

_Bool bool_except(_Bool self, void* parent, void (*block)(void*));

void xassert(char* msg, _Bool test);

void* come_calloc(long int count, long int size, char* sname, int sline, char* class_name);

void* come_increment_ref_count(void* mem);

void* come_print_ref_count(void* mem);

void* come_dynamic_typeof(void* mem);

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);

void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);

void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);

void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);

void come_free_object(void* mem);

void come_free(void* mem);

void* come_memdup(void* block, char* sname, int sline, char* class_name);

char* __builtin_string(char* str);

struct buffer* buffer_initialize(struct buffer* self);

void buffer_finalize(struct buffer* self);

void buffer_force_finalize(struct buffer* self);

struct buffer* buffer_clone(struct buffer* self);

int buffer_length(struct buffer* self);

void buffer_reset(struct buffer* self);

void buffer_trim(struct buffer* self, int len);

struct buffer* buffer_append(struct buffer* self, char* mem, long int size);

struct buffer* buffer_append_char(struct buffer* self, char c);

struct buffer* buffer_append_str(struct buffer* self, char* str);

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* str);

struct buffer* buffer_append_int(struct buffer* self, int value);

struct buffer* buffer_append_long(struct buffer* self, long value);

struct buffer* buffer_append_short(struct buffer* self, short short value);

struct buffer* buffer_alignment(struct buffer* self);

int buffer_compare(struct buffer* left, struct buffer* right);

struct buffer* string_to_buffer(char* self);

struct buffer* charp_to_buffer(char* self);

char* buffer_to_string(struct buffer* self);

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self);
static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self);
static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self);
static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self);
static struct smart_pointer$1char* smart_pointer$1char_initialize(struct smart_pointer$1char* self, void* memory, int size);
static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size);
static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size);
static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size);
static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size);
static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self);
static struct smart_pointer$1double* smart_pointer$1double_initialize(struct smart_pointer$1double* self, void* memory, int size);
static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self);
static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values);
static struct list$1char* list$1char_push_back(struct list$1char* self, char item);
static void list_item$1charp_finalize(struct list_item$1char* self);
static void list$1charp_finalize(struct list$1char* self);
static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values);
static struct list$1short* list$1short_push_back(struct list$1short* self, short short item);
static void list_item$1shortp_finalize(struct list_item$1short* self);
static void list$1shortp_finalize(struct list$1short* self);
static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values);
static struct list$1int* list$1int_push_back(struct list$1int* self, int item);
static void list_item$1intp_finalize(struct list_item$1int* self);
static void list$1intp_finalize(struct list$1int* self);
static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values);
static struct list$1long* list$1long_push_back(struct list$1long* self, long item);
static void list_item$1longp_finalize(struct list_item$1long* self);
static void list$1longp_finalize(struct list$1long* self);
static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values);
static struct list$1float* list$1float_push_back(struct list$1float* self, float item);
static void list_item$1floatp_finalize(struct list_item$1float* self);
static void list$1floatp_finalize(struct list$1float* self);
static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values);
static struct list$1double* list$1double_push_back(struct list$1double* self, double item);
static void list_item$1doublep_finalize(struct list_item$1double* self);
static void list$1doublep_finalize(struct list$1double* self);
_Bool bool_equals(_Bool self, _Bool right);

_Bool char_equals(char self, char right);

_Bool int_equals(int self, int right);

_Bool short_equals(short short self, short short right);

_Bool long_equals(long self, long right);

_Bool size_t_equals(long self, long right);

_Bool float_equals(float self, float right);

_Bool double_equals(double self, double right);

_Bool charp_equals(char* self, char* right);

_Bool string_equals(char* self, char* right);

_Bool string_operator_equals(char* self, char* right);

_Bool charp_operator_equals(char* self, char* right);

_Bool string_operator_not_equals(char* self, char* right);

_Bool charp_operator_not_equals(char* self, char* right);

char* charp_operator_add(char* self, char* right);

char* string_operator_add(char* self, char* right);

char* charp_operator_mult(char* self, int right);

char* string_operator_mult(char* self, int right);

unsigned int bool_get_hash_key(_Bool value);

unsigned int char_get_hash_key(char value);

unsigned int short_get_hash_key(short short value);

unsigned int int_get_hash_key(int value);

unsigned int long_get_hash_key(long value);

unsigned int size_t_get_hash_key(long value);

unsigned int float_get_hash_key(float value);

unsigned int double_get_hash_key(double value);

unsigned int string_get_hash_key(char* value);

unsigned int charp_get_hash_key(char* value);

_Bool bool_clone(char self);

char char_clone(char self);

short int short_clone(short short self);

int int_clone(int self);

long int long_clone(long self);

long int size_t_clone(long self);

double double_clone(double self);

float float_clone(float self);

char* charp_clone(char* self);

char* string_clone(char* self);

_Bool xiswascii(int c);

_Bool xiswalpha(int c);

_Bool xiswblank(int c);

_Bool xiswdigit(int c);

_Bool xiswalnum(int c);

_Bool xisblank(char c);

_Bool xisdigit(char c);

_Bool xisalnum(char c);

_Bool xisascii(char c);

_Bool xisalpha(char c);

int string_length(char* str);

int charp_length(char* str);

char* charp_substring(char* str, int head, int tail);

char* string_substring(char* str, int head, int tail);

char* string_operator_load_range_element(char* str, int head, int tail);

char* charp_operator_load_range_element(char* str, int head, int tail);

char* charp_reverse(char* str);

char* string_reverse(char* str);

char* xsprintf(char* msg, ...);

char* charp_delete(char* str, int head, int tail);

char* string_delete(char* str, int head, int tail);

struct list$1charph* string_split_char(char* self, char c);

struct list$1charph* charp_split_char(char* self, char c);

char* xrealpath(char* path);

char* xbasename(char* path);

char* xextname(char* path);

char* xdirname(char* path);

char* xnoextname(char* path);

char* bool_to_string(_Bool self);

char* char_to_string(char self);

char* short_to_string(short short self);

char* int_to_string(int self);

char* long_to_string(long self);

char* size_t_to_string(long int self);

char* float_to_string(float self);

char* double_to_string(double self);

char* string_to_string(char* self);

char* charp_to_string(char* self);

int bool_compare(_Bool left, _Bool right);

int char_compare(char left, char right);

int short_compare(short short left, short short right);

int int_compare(int left, int right);

int long_compare(long left, long right);

int float_compare(float left, float right);

int double_compare(float left, float right);

int size_t_compare(long left, long right);

int string_compare(char* left, char* right);

int charp_compare(char* left, char* right);

int FILE_write(struct __sFILE* f, char* str);

char* FILE_read(struct __sFILE* f);

int FILE_fclose(struct __sFILE* f);

int* FILE_fprintf(struct __sFILE* f, const char* msg, ...);

struct list$1charph* FILE_readlines(struct __sFILE* f);

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct __sFILE*));

int string_write(char* self, char* file_name, _Bool append);

int charp_write(char* self, char* file_name, _Bool append);

char* charp_read(char* file_name);

char* string_read(char* file_name);

char* charp_puts(char* self);

char* string_puts(char* self);

int int_printf(int self, char* msg);

char* string_printf(char* self, ...);

char* charp_printf(char* self, ...);

char* charp_print(char* self);

void int_times(int self, void* parent, void (*block)(void*,int));

struct integer* integer_initialize(struct integer* self, long value);

struct integer* char_to_integer(char self);

struct integer* short_to_integer(short short self);

struct integer* int_to_integer(int self);

struct integer* long_to_integer(long self);

int integer_to_int(struct integer* self);

_Bool integer_equals(struct integer* self, struct integer* right);

int integer_compare(struct integer* self, struct integer* right);

_Bool integer_operator_equals(struct integer* self, struct integer* right);

_Bool integer_operator_not_equals(struct integer* self, struct integer* right);

struct integer* integer_operator_add(struct integer* left, struct integer* right);

struct integer* integer_operator_sub(struct integer* left, struct integer* right);

struct integer* integer_operator_mult(struct integer* left, struct integer* right);

struct integer* integer_operator_div(struct integer* left, struct integer* right);

struct integer* integer_operator_mod(struct integer* left, struct integer* right);

struct integer* integer_operator_lshift(struct integer* left, struct integer* right);

struct integer* integer_operator_rshift(struct integer* left, struct integer* right);

struct integer* integer_operator_gteq(struct integer* left, struct integer* right);

struct integer* integer_operator_lteq(struct integer* left, struct integer* right);

struct integer* integer_operator_lt(struct integer* left, struct integer* right);

struct integer* integer_operator_gt(struct integer* left, struct integer* right);

struct integer* integer_operator_and(struct integer* left, struct integer* right);

struct integer* integer_operator_xor(struct integer* left, struct integer* right);

struct integer* integer_operator_or(struct integer* left, struct integer* right);

struct integer* integer_operator_andand(struct integer* left, struct integer* right);

struct integer* integer_operator_oror(struct integer* left, struct integer* right);

int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);

char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);

int come_main_v1(int argc, char** argv);

struct sModule* sModule_initialize(struct sModule* self);

struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);

struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);

void sVarTable_finalize(struct sVarTable* self);

struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);

struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info);

struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info);

char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info);

char* make_come_type_name_string(struct sType* type, struct sInfo* info);

char* make_come_type_name_string_no_solved(struct sType* type, struct sInfo* info);

char* make_define_var_no_solved(struct sType* type, char* name, _Bool in_header, struct sInfo* info);

char* header_function(struct sFun* fun, struct sInfo* info);

int transpile_v3(struct sInfo* info);

_Bool output_source_file_v3(struct sInfo* info);

void show_type(struct sType* type, struct sInfo* info);

char* create_generics_name(struct sType* generics_type, struct sInfo* info);

void add_last_code_to_source(struct sInfo* info);

void add_come_code_at_function_head(struct sInfo* info, char* code, ...);

void add_come_code_at_come_header(struct sInfo* info, const char* msg, ...);

void add_come_code_at_function_head2(struct sInfo* info, char* code, ...);

void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...);

void add_come_code(struct sInfo* info, const char* msg, ...);

void add_come_last_code(struct sInfo* info, const char* msg, ...);

void add_come_last_code2(struct sInfo* info, const char* msg, ...);

void add_come_last_code3(struct sInfo* info, const char* msg, ...);

void add_last_code_to_source_with_comma(struct sInfo* info);

void dec_stack_ptr(int value, struct sInfo* info);

struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);

char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info);

void transpiler_clear_last_code(struct sInfo* info);

_Bool output_header_file(struct sInfo* info);

struct sType* solve_method_generics(struct sType* type, struct sInfo* info);

_Bool existance_free_right_value_objects(struct sInfo* info);

void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info);

char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info);

_Bool create_equals_method(struct sType* type, struct sInfo* info);

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info);

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info);

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info);

struct sVar* get_variable_from_table(struct sVarTable* table, char* name);

void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);

void free_objects_on_break(struct sInfo* info);

void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_);

struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info);

void free_right_value_objects(struct sInfo* info, _Bool comma);

void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);

_Bool is_right_values(int right_value_num, struct sInfo* info);

int get_right_value_id_from_obj(char* obj);

void remove_object_from_right_values(int right_value_num, struct sInfo* info);

char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_);

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);

_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);

_Bool strmemcmp(char* p, char* p2);

void caller_begin(struct sInfo* info);

void caller_end(struct sInfo* info);

struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);

struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);

void transpile_toplevel(_Bool block, struct sInfo* info);

void skip_pointer_attribute(struct sInfo* info);

struct sNode* parse_normal_block(struct sInfo* info);

_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, struct sInfo* info);

void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);

char* parse_attribute(struct sInfo* info);

struct sNode* get_number(_Bool minus, struct sInfo* info);

struct sNode* get_oct_number(struct sInfo* info);

struct sNode* get_hex_number(_Bool minus, struct sInfo* info);

struct sNode* create_int_node(int value, struct sInfo* info);

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

char* skip_block(struct sInfo* info);

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);

_Bool is_type_name(char* buf, struct sInfo* info);

_Bool parsecmp(char* str, struct sInfo* info);

char* parse_word(struct sInfo* info);

char* backtrace_parse_word(struct sInfo* info);

void skip_spaces_and_lf(struct sInfo* info);

int expected_next_character(char c, struct sInfo* info);

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last);

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block);

void arrange_stack(struct sInfo* info, int top);

struct sNode* parse_function(struct sInfo* info);

struct sNode* expression_v5(struct sInfo* info);

struct sNode* statment(struct sInfo* info);

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* expression_node_v1(struct sInfo* info);

struct sNode* expression_node_v99(struct sInfo* info);

struct sNode* expression_node_v98(struct sInfo* info);

struct sNode* expression_node_v97(struct sInfo* info);

int transpile_v5(struct sInfo* info);

void parse_sharp_v5(struct sInfo* info);

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

struct sNode* expression_node_v96(struct sInfo* info);

struct sNode* parse_tuple(struct sInfo* info);

struct sNode* parse_global_variable(struct sInfo* info);

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_node, struct sInfo* info);

struct sNode* load_var(char* name, struct sInfo* info);

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);

struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info);

struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info);

struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info);

struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info);

struct sNode* string_node_v9(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* string_node_v10(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* string_node_v11(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* string_node_v12(char* buf, char* head, int head_sline, struct sInfo* info);

_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);

struct sNode* expression_v13(struct sInfo* info);

struct sNode* post_op_v13(struct sNode* node, struct sInfo* info);

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* parse_struct(char* type_name, struct sInfo* info);

char* get_none_generics_name(char* class_name);

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);

void output_struct(struct sClass* klass, struct sInfo* info);

struct sNode* string_node_v15(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* parse_union(char* type_name, struct sInfo* info);

struct sNode* top_level_v97(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* parse_enum(char* type_name, struct sInfo* info);

struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v95(char* buf, char* head, int head_sline, struct sInfo* info);

_Bool compiletime_get_exception_value(struct sInfo* info);

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);

struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);

struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info);

char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* create_object(struct sType* type, struct sInfo* info);

struct sNode* create_true_object(struct sInfo* info);

struct sNode* create_false_object(struct sInfo* info);

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);

struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);

int getattrlistbulk(int anonymous_var_nameX506, void* anonymous_var_nameX507, void* anonymous_var_nameX508, long int anonymous_var_nameX509, unsigned long long anonymous_var_nameX510);

int getattrlistat(int anonymous_var_nameX511, const char* anonymous_var_nameX512, void* anonymous_var_nameX513, void* anonymous_var_nameX514, long int anonymous_var_nameX515, unsigned long int anonymous_var_nameX516);

int setattrlistat(int anonymous_var_nameX517, const char* anonymous_var_nameX518, void* anonymous_var_nameX519, void* anonymous_var_nameX520, long int anonymous_var_nameX521, unsigned int anonymous_var_nameX522);

long freadlink(int anonymous_var_nameX523, char* anonymous_var_nameX524, long int anonymous_var_nameX525);

int faccessat(int anonymous_var_nameX526, const char* anonymous_var_nameX527, int anonymous_var_nameX528, int anonymous_var_nameX529);

int fchownat(int anonymous_var_nameX530, const char* anonymous_var_nameX531, unsigned int anonymous_var_nameX532, unsigned int anonymous_var_nameX533, int anonymous_var_nameX534);

int linkat(int anonymous_var_nameX535, const char* anonymous_var_nameX536, int anonymous_var_nameX537, const char* anonymous_var_nameX538, int anonymous_var_nameX539);

long readlinkat(int anonymous_var_nameX540, const char* anonymous_var_nameX541, char* anonymous_var_nameX542, long int anonymous_var_nameX543);

int symlinkat(const char* anonymous_var_nameX544, int anonymous_var_nameX545, const char* anonymous_var_nameX546);

int unlinkat(int anonymous_var_nameX547, const char* anonymous_var_nameX548, int anonymous_var_nameX549);

void _exit(int anonymous_var_nameX550);

int access(const char* anonymous_var_nameX551, int anonymous_var_nameX552);

unsigned int alarm(unsigned int anonymous_var_nameX553);

int chdir(const char* anonymous_var_nameX554);

int chown(const char* anonymous_var_nameX555, unsigned int anonymous_var_nameX556, unsigned int anonymous_var_nameX557);

int close(int anonymous_var_nameX558);

int dup(int anonymous_var_nameX559);

int dup2(int anonymous_var_nameX560, int anonymous_var_nameX561);

int execl(const char* __path, const char* __arg0, ...);

int execle(const char* __path, const char* __arg0, ...);

int execlp(const char* __file, const char* __arg0, ...);

int execv(const char* __path, char** __argv);

int execve(const char* __file, char** __argv, char** __envp);

int execvp(const char* __file, char** __argv);

int fork();

long fpathconf(int anonymous_var_nameX562, int anonymous_var_nameX563);

char* getcwd(char* anonymous_var_nameX564, long int anonymous_var_nameX565);

unsigned int getegid();

unsigned int geteuid();

unsigned int getgid();

int getgroups(int anonymous_var_nameX566, unsigned int* anonymous_var_nameX567);

char* getlogin();

int getpgrp();

int getpid();

int getppid();

unsigned int getuid();

int isatty(int anonymous_var_nameX568);

int link(const char* anonymous_var_nameX569, const char* anonymous_var_nameX570);

long long lseek(int anonymous_var_nameX571, long long anonymous_var_nameX572, int anonymous_var_nameX573);

long pathconf(const char* anonymous_var_nameX574, int anonymous_var_nameX575);

int pause();

int pipe(int anonymous_var_nameX576[2]);

long read(int anonymous_var_nameX577, void* anonymous_var_nameX578, long int anonymous_var_nameX579);

int rmdir(const char* anonymous_var_nameX580);

int setgid(unsigned int anonymous_var_nameX581);

int setpgid(int anonymous_var_nameX582, int anonymous_var_nameX583);

int setsid();

int setuid(unsigned int anonymous_var_nameX584);

unsigned int sleep(unsigned int anonymous_var_nameX585);

long sysconf(int anonymous_var_nameX586);

int tcgetpgrp(int anonymous_var_nameX587);

int tcsetpgrp(int anonymous_var_nameX588, int anonymous_var_nameX589);

char* ttyname(int anonymous_var_nameX590);

int ttyname_r(int anonymous_var_nameX591, char* anonymous_var_nameX592, long int anonymous_var_nameX593);

int unlink(const char* anonymous_var_nameX594);

long write(int __fd, const void* __buf, long int __nbyte);

long int confstr(int anonymous_var_nameX595, char* anonymous_var_nameX596, long int anonymous_var_nameX597);

int getopt(int anonymous_var_nameX598, char** anonymous_var_nameX599, const char* anonymous_var_nameX600);

void* brk(const void* anonymous_var_nameX601);

int chroot(const char* anonymous_var_nameX602);

char* crypt(const char* anonymous_var_nameX603, const char* anonymous_var_nameX604);

void encrypt(char* anonymous_var_nameX605, int anonymous_var_nameX606);

int fchdir(int anonymous_var_nameX607);

long gethostid();

int getpgid(int anonymous_var_nameX608);

int getsid(int anonymous_var_nameX609);

int getdtablesize();

int getpagesize();

char* getpass(const char* anonymous_var_nameX610);

char* getwd(char* anonymous_var_nameX611);

int lchown(const char* anonymous_var_nameX612, unsigned int anonymous_var_nameX613, unsigned int anonymous_var_nameX614);

int lockf(int anonymous_var_nameX615, int anonymous_var_nameX616, long long anonymous_var_nameX617);

int nice(int anonymous_var_nameX618);

long pread(int __fd, void* __buf, long int __nbyte, long long __offset);

long pwrite(int __fd, const void* __buf, long int __nbyte, long long __offset);

void* sbrk(int anonymous_var_nameX619);

int setpgrp();

int setregid(unsigned int anonymous_var_nameX620, unsigned int anonymous_var_nameX621);

int setreuid(unsigned int anonymous_var_nameX622, unsigned int anonymous_var_nameX623);

void swab(const void* anonymous_var_nameX624, void* anonymous_var_nameX625, long anonymous_var_nameX626);

void sync();

int truncate(const char* anonymous_var_nameX627, long long anonymous_var_nameX628);

unsigned int ualarm(unsigned int anonymous_var_nameX629, unsigned int anonymous_var_nameX630);

int usleep(unsigned int anonymous_var_nameX631);

int vfork();

int fsync(int anonymous_var_nameX632);

int ftruncate(int anonymous_var_nameX633, long long anonymous_var_nameX634);

int getlogin_r(char* anonymous_var_nameX635, long int anonymous_var_nameX636);

int fchown(int anonymous_var_nameX637, unsigned int anonymous_var_nameX638, unsigned int anonymous_var_nameX639);

int gethostname(char* anonymous_var_nameX640, long int anonymous_var_nameX641);

long readlink(const char* anonymous_var_nameX642, char* anonymous_var_nameX643, long int anonymous_var_nameX644);

int setegid(unsigned int anonymous_var_nameX645);

int seteuid(unsigned int anonymous_var_nameX646);

int symlink(const char* anonymous_var_nameX647, const char* anonymous_var_nameX648);

int __darwin_check_fd_set_overflow(int anonymous_var_nameX649, const void* anonymous_var_nameX650, int anonymous_var_nameX651);

int pselect(int anonymous_var_nameX982, struct fd_set* anonymous_var_nameX983, struct fd_set* anonymous_var_nameX984, struct fd_set* anonymous_var_nameX985, const struct timespec* anonymous_var_nameX986, const unsigned int* anonymous_var_nameX987);

int select(int anonymous_var_nameX988, struct fd_set* anonymous_var_nameX989, struct fd_set* anonymous_var_nameX990, struct fd_set* anonymous_var_nameX991, struct timeval* anonymous_var_nameX992);

void _Exit(int anonymous_var_nameX993);

int accessx_np(const struct accessx_descriptor* anonymous_var_nameX994, long int anonymous_var_nameX995, int* anonymous_var_nameX996, unsigned int anonymous_var_nameX997);

int acct(const char* anonymous_var_nameX998);

int add_profil(char* anonymous_var_nameX999, long int anonymous_var_nameX1000, unsigned long int anonymous_var_nameX1001, unsigned int anonymous_var_nameX1002);

void endusershell();

int execvP(const char* __file, const char* __searchpath, char** __argv);

char* fflagstostr(unsigned long int anonymous_var_nameX1003);

int getdomainname(char* anonymous_var_nameX1004, int anonymous_var_nameX1005);

int getgrouplist(const char* anonymous_var_nameX1006, int anonymous_var_nameX1007, int* anonymous_var_nameX1008, int* anonymous_var_nameX1009);

int gethostuuid(unsigned char anonymous_var_nameX1010[16], const struct timespec* anonymous_var_nameX1011);

unsigned short int getmode(const void* anonymous_var_nameX1012, unsigned short int anonymous_var_nameX1013);

int getpeereid(int anonymous_var_nameX1014, unsigned int* anonymous_var_nameX1015, unsigned int* anonymous_var_nameX1016);

int getsgroups_np(int* anonymous_var_nameX1017, unsigned char anonymous_var_nameX1018[16]);

char* getusershell();

int getwgroups_np(int* anonymous_var_nameX1019, unsigned char anonymous_var_nameX1020[16]);

int initgroups(const char* anonymous_var_nameX1021, int anonymous_var_nameX1022);

int issetugid();

char* mkdtemp(char* anonymous_var_nameX1023);

int mkpath_np(const char* path, unsigned short int omode);

int mkpathat_np(int dfd, const char* path, unsigned short int omode);

int mkstemp(char* anonymous_var_nameX1027);

int mkstemps(char* anonymous_var_nameX1028, int anonymous_var_nameX1029);

char* mktemp(char* anonymous_var_nameX1030);

int mkostemp(char* path, int oflags);

int mkostemps(char* path, int slen, int oflags);

int mkstemp_dprotected_np(char* path, int dpclass, int dpflags);

char* mkdtempat_np(int dfd, char* path);

int mkstempsat_np(int dfd, char* path, int slen);

int mkostempsat_np(int dfd, char* path, int slen, int oflags);

int nfssvc(int anonymous_var_nameX1031, void* anonymous_var_nameX1032);

int profil(char* anonymous_var_nameX1033, long int anonymous_var_nameX1034, unsigned long int anonymous_var_nameX1035, unsigned int anonymous_var_nameX1036);

int pthread_setugid_np(unsigned int anonymous_var_nameX1037, unsigned int anonymous_var_nameX1038);

int pthread_getugid_np(unsigned int* anonymous_var_nameX1039, unsigned int* anonymous_var_nameX1040);

int reboot(int anonymous_var_nameX1041);

int revoke(const char* anonymous_var_nameX1042);

int rcmd(char** anonymous_var_nameX1043, int anonymous_var_nameX1044, const char* anonymous_var_nameX1045, const char* anonymous_var_nameX1046, const char* anonymous_var_nameX1047, int* anonymous_var_nameX1048);

int rcmd_af(char** anonymous_var_nameX1049, int anonymous_var_nameX1050, const char* anonymous_var_nameX1051, const char* anonymous_var_nameX1052, const char* anonymous_var_nameX1053, int* anonymous_var_nameX1054, int anonymous_var_nameX1055);

int rresvport(int* anonymous_var_nameX1056);

int rresvport_af(int* anonymous_var_nameX1057, int anonymous_var_nameX1058);

int iruserok(unsigned long int anonymous_var_nameX1059, int anonymous_var_nameX1060, const char* anonymous_var_nameX1061, const char* anonymous_var_nameX1062);

int iruserok_sa(const void* anonymous_var_nameX1063, int anonymous_var_nameX1064, int anonymous_var_nameX1065, const char* anonymous_var_nameX1066, const char* anonymous_var_nameX1067);

int ruserok(const char* anonymous_var_nameX1068, int anonymous_var_nameX1069, const char* anonymous_var_nameX1070, const char* anonymous_var_nameX1071);

int setdomainname(const char* anonymous_var_nameX1072, int anonymous_var_nameX1073);

int setgroups(int anonymous_var_nameX1074, const unsigned int* anonymous_var_nameX1075);

void sethostid(long anonymous_var_nameX1076);

int sethostname(const char* anonymous_var_nameX1077, int anonymous_var_nameX1078);

void setkey(const char* anonymous_var_nameX1079);

int setlogin(const char* anonymous_var_nameX1080);

void* setmode(const char* anonymous_var_nameX1081);

int setrgid(unsigned int anonymous_var_nameX1082);

int setruid(unsigned int anonymous_var_nameX1083);

int setsgroups_np(int anonymous_var_nameX1084, const unsigned char anonymous_var_nameX1085[16]);

void setusershell();

int setwgroups_np(int anonymous_var_nameX1086, const unsigned char anonymous_var_nameX1087[16]);

int strtofflags(char** anonymous_var_nameX1088, unsigned long int* anonymous_var_nameX1089, unsigned long int* anonymous_var_nameX1090);

int swapon(const char* anonymous_var_nameX1091);

int ttyslot();

int undelete(const char* anonymous_var_nameX1092);

int unwhiteout(const char* anonymous_var_nameX1093);

void* valloc(long int anonymous_var_nameX1094);

int syscall(int anonymous_var_nameX1095, ...);

int getsubopt(char** anonymous_var_nameX1096, char** anonymous_var_nameX1097, char** anonymous_var_nameX1098);

int fgetattrlist(int anonymous_var_nameX1099, void* anonymous_var_nameX1100, void* anonymous_var_nameX1101, long int anonymous_var_nameX1102, unsigned int anonymous_var_nameX1103);

int fsetattrlist(int anonymous_var_nameX1104, void* anonymous_var_nameX1105, void* anonymous_var_nameX1106, long int anonymous_var_nameX1107, unsigned int anonymous_var_nameX1108);

int getattrlist(const char* anonymous_var_nameX1109, void* anonymous_var_nameX1110, void* anonymous_var_nameX1111, long int anonymous_var_nameX1112, unsigned int anonymous_var_nameX1113);

int setattrlist(const char* anonymous_var_nameX1114, void* anonymous_var_nameX1115, void* anonymous_var_nameX1116, long int anonymous_var_nameX1117, unsigned int anonymous_var_nameX1118);

int exchangedata(const char* anonymous_var_nameX1119, const char* anonymous_var_nameX1120, unsigned int anonymous_var_nameX1121);

int getdirentriesattr(int anonymous_var_nameX1122, void* anonymous_var_nameX1123, void* anonymous_var_nameX1124, long int anonymous_var_nameX1125, unsigned int* anonymous_var_nameX1126, unsigned int* anonymous_var_nameX1127, unsigned int* anonymous_var_nameX1128, unsigned int anonymous_var_nameX1129);

int searchfs(const char* anonymous_var_nameX1130, struct fssearchblock* anonymous_var_nameX1131, unsigned long int* anonymous_var_nameX1132, unsigned int anonymous_var_nameX1133, unsigned int anonymous_var_nameX1134, struct searchstate* anonymous_var_nameX1135);

int fsctl(const char* anonymous_var_nameX1136, unsigned long int anonymous_var_nameX1137, void* anonymous_var_nameX1138, unsigned int anonymous_var_nameX1139);

int ffsctl(int anonymous_var_nameX1140, unsigned long int anonymous_var_nameX1141, void* anonymous_var_nameX1142, unsigned int anonymous_var_nameX1143);

int fsync_volume_np(int anonymous_var_nameX1144, int anonymous_var_nameX1145);

int sync_volume_np(const char* anonymous_var_nameX1146, int anonymous_var_nameX1147);

int chmod(const char* anonymous_var_nameX1148, unsigned short int anonymous_var_nameX1149);

int fchmod(int anonymous_var_nameX1150, unsigned short int anonymous_var_nameX1151);

int fstat(int anonymous_var_nameX1152, struct stat* anonymous_var_nameX1153);

int lstat(const char* anonymous_var_nameX1154, struct stat* anonymous_var_nameX1155);

int mkdir(const char* anonymous_var_nameX1156, unsigned short int anonymous_var_nameX1157);

int mkfifo(const char* anonymous_var_nameX1158, unsigned short int anonymous_var_nameX1159);

int stat(const char* anonymous_var_nameX1160, struct stat* anonymous_var_nameX1161);

int mknod(const char* anonymous_var_nameX1162, unsigned short int anonymous_var_nameX1163, int anonymous_var_nameX1164);

unsigned short int umask(unsigned short int anonymous_var_nameX1165);

int fchmodat(int anonymous_var_nameX1166, const char* anonymous_var_nameX1167, unsigned short int anonymous_var_nameX1168, int anonymous_var_nameX1169);

int fstatat(int anonymous_var_nameX1170, const char* anonymous_var_nameX1171, struct stat* anonymous_var_nameX1172, int anonymous_var_nameX1173);

int mkdirat(int anonymous_var_nameX1174, const char* anonymous_var_nameX1175, unsigned short int anonymous_var_nameX1176);

int mkfifoat(int anonymous_var_nameX1177, const char* anonymous_var_nameX1178, unsigned short int anonymous_var_nameX1179);

int mknodat(int anonymous_var_nameX1180, const char* anonymous_var_nameX1181, unsigned short int anonymous_var_nameX1182, int anonymous_var_nameX1183);

int futimens(int __fd, const struct timespec __times[2]);

int utimensat(int __fd, const char* __path, const struct timespec __times[2], int __flag);

int chflags(const char* anonymous_var_nameX1184, unsigned int anonymous_var_nameX1185);

int chmodx_np(const char* anonymous_var_nameX1186, struct _filesec* anonymous_var_nameX1187);

int fchflags(int anonymous_var_nameX1188, unsigned int anonymous_var_nameX1189);

int fchmodx_np(int anonymous_var_nameX1190, struct _filesec* anonymous_var_nameX1191);

int fstatx_np(int anonymous_var_nameX1192, struct stat* anonymous_var_nameX1193, struct _filesec* anonymous_var_nameX1194);

int lchflags(const char* anonymous_var_nameX1195, unsigned int anonymous_var_nameX1196);

int lchmod(const char* anonymous_var_nameX1197, unsigned short int anonymous_var_nameX1198);

int lstatx_np(const char* anonymous_var_nameX1199, struct stat* anonymous_var_nameX1200, struct _filesec* anonymous_var_nameX1201);

int mkdirx_np(const char* anonymous_var_nameX1202, struct _filesec* anonymous_var_nameX1203);

int mkfifox_np(const char* anonymous_var_nameX1204, struct _filesec* anonymous_var_nameX1205);

int statx_np(const char* anonymous_var_nameX1206, struct stat* anonymous_var_nameX1207, struct _filesec* anonymous_var_nameX1208);

int umaskx_np(struct _filesec* anonymous_var_nameX1209);

int* __error();

static void write_source_file_position_to_source(struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);

void err_msg(struct sInfo* info, char* msg, ...);

static struct list$1charph* list$1charph_sublist(struct list$1charph* self, int begin, int tail);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct list$1charph* list$1charph_map2(struct list$1charph* self, void* parent, char* (*block)(void*,char*));
char* method_block1_02transpilec(struct __current_stack1__* parent, char* it);

static char* list$1charph_join(struct list$1charph* self, char* sep);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static int list$1charph_length(struct list$1charph* self);
static void va_list_finalize(va_list self);
int transpile_v2(struct sInfo* info);

_Bool output_source_file_v2(struct sInfo* info);

static void clear_tmp_file(struct sInfo* info);
static _Bool cpp(struct sInfo* info);
static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1charph* object_files);
static _Bool linker(struct sInfo* info, struct list$1charph* object_files);
_Bool new_project(int argc, char** argv);

_Bool run_project(int argc, char** argv);

_Bool make_header_project(int argc, char** argv);

_Bool compile_project(int argc, char** argv);

_Bool debug_run_project(int argc, char** argv);

_Bool clean_project(int argc, char** argv);

_Bool install_project(int argc, char** argv, char* prefix);

static void init_classes(struct sInfo* info);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item);
static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self);
static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self);
static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static struct sClass* sClass_clone(struct sClass* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct sType* sType_clone(struct sType* self);
static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charph_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
int come_main_v2(int argc, char** argv);

static struct map$2charphsFunph* map$2charphsFunph_initialize(struct map$2charphsFunph* self);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self);
static void map$2charphsFunph_finalize(struct map$2charphsFunph* self);
static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_initialize(struct map$2charphsGenericsFunph* self);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void map$2charphsGenericsFunphp_finalize(struct map$2charphsGenericsFunph* self);
static void map$2charphsGenericsFunph_finalize(struct map$2charphsGenericsFunph* self);
static struct map$2charphsClassph* map$2charphsClassph_initialize(struct map$2charphsClassph* self);
static void map$2charphsClassphp_finalize(struct map$2charphsClassph* self);
static void map$2charphsClassph_finalize(struct map$2charphsClassph* self);
static struct map$2charphsClassModuleph* map$2charphsClassModuleph_initialize(struct map$2charphsClassModuleph* self);
static void sClassModule_finalize(struct sClassModule* self);
static void map$2charphsClassModulephp_finalize(struct map$2charphsClassModuleph* self);
static void map$2charphsClassModuleph_finalize(struct map$2charphsClassModuleph* self);
static struct map$2charphsTypeph* map$2charphsTypeph_initialize(struct map$2charphsTypeph* self);
static void map$2charphsTypephp_finalize(struct map$2charphsTypeph* self);
static void map$2charphsTypeph_finalize(struct map$2charphsTypeph* self);
static void sModule_finalize(struct sModule* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void list$1CVALUEph_finalize(struct list$1CVALUEph* self);
static void sInfo_finalize(struct sInfo* self);
static void map$2charphcharphp_finalize(struct map$2charphcharph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
void method_block2_02transpilec(struct __current_stack2__* parent);

// inline function
static inline _Bool die(char* msg){
void* __result_obj__;
_Bool __result1__;
memset(&__result_obj__, 0, sizeof(void*));
    # 45 "/usr/local/include/neo-c.h"
    perror(msg);
    # 46 "/usr/local/include/neo-c.h"
    stackframe();
    # 47 "/usr/local/include/neo-c.h"
    exit(4);
    # 49 "/usr/local/include/neo-c.h"
    __result1__ = (_Bool)0;
    return __result1__;
}
static inline struct buffer* charpa_to_buffer(char* self, long int len){
void* __result_obj__;
void* right_value0;
void* right_value1;
struct buffer* result_0;
struct buffer* __result2__;
memset(&__result_obj__, 0, sizeof(void*));
right_value0 = (void*)0;
right_value1 = (void*)0;
memset(&result_0, 0, sizeof(struct buffer*));
    # 1897 "/usr/local/include/neo-c.h"
    result_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 1897, "buffer"))))))));
    come_call_finalizer3(right_value0,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value1,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1898 "/usr/local/include/neo-c.h"
    buffer_append(result_0,self,sizeof(char)*len);
    # 1899 "/usr/local/include/neo-c.h"
    __result2__ = __result_obj__ = result_0;
    come_call_finalizer3(result_0,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result2__;
    come_call_finalizer3(result_0,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* shortpa_to_buffer(short short* self, long int len){
void* __result_obj__;
void* right_value2;
void* right_value3;
struct buffer* result_1;
struct buffer* __result3__;
memset(&__result_obj__, 0, sizeof(void*));
right_value2 = (void*)0;
right_value3 = (void*)0;
memset(&result_1, 0, sizeof(struct buffer*));
    # 1904 "/usr/local/include/neo-c.h"
    result_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 1904, "buffer"))))))));
    come_call_finalizer3(right_value2,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value3,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1905 "/usr/local/include/neo-c.h"
    buffer_append(result_1,(char*)self,sizeof(short short)*len);
    # 1906 "/usr/local/include/neo-c.h"
    __result3__ = __result_obj__ = result_1;
    come_call_finalizer3(result_1,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result3__;
    come_call_finalizer3(result_1,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* intpa_to_buffer(int* self, long int len){
void* __result_obj__;
void* right_value4;
void* right_value5;
struct buffer* result_2;
struct buffer* __result4__;
memset(&__result_obj__, 0, sizeof(void*));
right_value4 = (void*)0;
right_value5 = (void*)0;
memset(&result_2, 0, sizeof(struct buffer*));
    # 1911 "/usr/local/include/neo-c.h"
    result_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 1911, "buffer"))))))));
    come_call_finalizer3(right_value4,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value5,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1912 "/usr/local/include/neo-c.h"
    buffer_append(result_2,(char*)self,sizeof(int)*len);
    # 1913 "/usr/local/include/neo-c.h"
    __result4__ = __result_obj__ = result_2;
    come_call_finalizer3(result_2,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result4__;
    come_call_finalizer3(result_2,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* longpa_to_buffer(long* self, long int len){
void* __result_obj__;
void* right_value6;
void* right_value7;
struct buffer* result_3;
struct buffer* __result5__;
memset(&__result_obj__, 0, sizeof(void*));
right_value6 = (void*)0;
right_value7 = (void*)0;
memset(&result_3, 0, sizeof(struct buffer*));
    # 1918 "/usr/local/include/neo-c.h"
    result_3=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 1918, "buffer"))))))));
    come_call_finalizer3(right_value6,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value7,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1919 "/usr/local/include/neo-c.h"
    buffer_append(result_3,(char*)self,sizeof(long)*len);
    # 1920 "/usr/local/include/neo-c.h"
    __result5__ = __result_obj__ = result_3;
    come_call_finalizer3(result_3,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result5__;
    come_call_finalizer3(result_3,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* floatpa_to_buffer(float* self, long int len){
void* __result_obj__;
void* right_value8;
void* right_value9;
struct buffer* result_4;
struct buffer* __result6__;
memset(&__result_obj__, 0, sizeof(void*));
right_value8 = (void*)0;
right_value9 = (void*)0;
memset(&result_4, 0, sizeof(struct buffer*));
    # 1925 "/usr/local/include/neo-c.h"
    result_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 1925, "buffer"))))))));
    come_call_finalizer3(right_value8,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value9,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1926 "/usr/local/include/neo-c.h"
    buffer_append(result_4,(char*)self,sizeof(float)*len);
    # 1927 "/usr/local/include/neo-c.h"
    __result6__ = __result_obj__ = result_4;
    come_call_finalizer3(result_4,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result6__;
    come_call_finalizer3(result_4,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* doublepa_to_buffer(double* self, long int len){
void* __result_obj__;
void* right_value10;
void* right_value11;
struct buffer* result_5;
struct buffer* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
right_value11 = (void*)0;
memset(&result_5, 0, sizeof(struct buffer*));
    # 1932 "/usr/local/include/neo-c.h"
    result_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 1932, "buffer"))))))));
    come_call_finalizer3(right_value10,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value11,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1933 "/usr/local/include/neo-c.h"
    buffer_append(result_5,(char*)self,sizeof(double)*len);
    # 1934 "/usr/local/include/neo-c.h"
    __result7__ = __result_obj__ = result_5;
    come_call_finalizer3(result_5,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result7__;
    come_call_finalizer3(result_5,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__;
void* right_value12;
struct smart_pointer$1char* result_6;
void* right_value13;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
right_value12 = (void*)0;
memset(&result_6, 0, sizeof(struct smart_pointer$1char*));
right_value13 = (void*)0;
    # 1948 "/usr/local/include/neo-c.h"
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/neo-c.h", 1948, "smart_pointer$1char"))));
    come_call_finalizer3(right_value12,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1950 "/usr/local/include/neo-c.h"
    __dec_obj1=result_6->memory;
    result_6->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=buffer_clone(self))));
    come_call_finalizer3(__dec_obj1,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value13,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1951 "/usr/local/include/neo-c.h"
    result_6->p=result_6->memory->buf;
    # 1953 "/usr/local/include/neo-c.h"
    __result8__ = __result_obj__ = result_6;
    come_call_finalizer3(result_6,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result8__;
    come_call_finalizer3(result_6,smart_pointer$1charp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__;
void* right_value14;
struct smart_pointer$1char* result_7;
void* right_value15;
struct buffer* __dec_obj2;
struct smart_pointer$1char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
right_value14 = (void*)0;
memset(&result_7, 0, sizeof(struct smart_pointer$1char*));
right_value15 = (void*)0;
    # 1958 "/usr/local/include/neo-c.h"
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/neo-c.h", 1958, "smart_pointer$1char"))));
    come_call_finalizer3(right_value14,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1960 "/usr/local/include/neo-c.h"
    __dec_obj2=result_7->memory;
    result_7->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value15=buffer_clone(self))));
    come_call_finalizer3(__dec_obj2,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value15,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1961 "/usr/local/include/neo-c.h"
    result_7->p=(char*)result_7->memory->buf;
    # 1963 "/usr/local/include/neo-c.h"
    __result9__ = __result_obj__ = result_7;
    come_call_finalizer3(result_7,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result9__;
    come_call_finalizer3(result_7,smart_pointer$1charp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__;
void* right_value16;
struct smart_pointer$1short* result_8;
void* right_value17;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
right_value16 = (void*)0;
memset(&result_8, 0, sizeof(struct smart_pointer$1short*));
right_value17 = (void*)0;
    # 1968 "/usr/local/include/neo-c.h"
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/neo-c.h", 1968, "smart_pointer$1short"))));
    come_call_finalizer3(right_value16,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1970 "/usr/local/include/neo-c.h"
    __dec_obj3=result_8->memory;
    result_8->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value17=buffer_clone(self))));
    come_call_finalizer3(__dec_obj3,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value17,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1971 "/usr/local/include/neo-c.h"
    result_8->p=(short short*)result_8->memory->buf;
    # 1973 "/usr/local/include/neo-c.h"
    __result10__ = __result_obj__ = result_8;
    come_call_finalizer3(result_8,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    return __result10__;
    come_call_finalizer3(result_8,smart_pointer$1shortp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__;
void* right_value18;
struct smart_pointer$1int* result_9;
void* right_value19;
struct buffer* __dec_obj4;
struct smart_pointer$1int* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
right_value18 = (void*)0;
memset(&result_9, 0, sizeof(struct smart_pointer$1int*));
right_value19 = (void*)0;
    # 1978 "/usr/local/include/neo-c.h"
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/neo-c.h", 1978, "smart_pointer$1int"))));
    come_call_finalizer3(right_value18,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1980 "/usr/local/include/neo-c.h"
    __dec_obj4=result_9->memory;
    result_9->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value19=buffer_clone(self))));
    come_call_finalizer3(__dec_obj4,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value19,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1981 "/usr/local/include/neo-c.h"
    result_9->p=(int*)result_9->memory->buf;
    # 1983 "/usr/local/include/neo-c.h"
    __result11__ = __result_obj__ = result_9;
    come_call_finalizer3(result_9,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    return __result11__;
    come_call_finalizer3(result_9,smart_pointer$1intp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__;
void* right_value20;
struct smart_pointer$1long* result_10;
void* right_value21;
struct buffer* __dec_obj5;
struct smart_pointer$1long* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
right_value20 = (void*)0;
memset(&result_10, 0, sizeof(struct smart_pointer$1long*));
right_value21 = (void*)0;
    # 1988 "/usr/local/include/neo-c.h"
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/neo-c.h", 1988, "smart_pointer$1long"))));
    come_call_finalizer3(right_value20,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1990 "/usr/local/include/neo-c.h"
    __dec_obj5=result_10->memory;
    result_10->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value21=buffer_clone(self))));
    come_call_finalizer3(__dec_obj5,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value21,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1991 "/usr/local/include/neo-c.h"
    result_10->p=(long*)result_10->memory->buf;
    # 1993 "/usr/local/include/neo-c.h"
    __result12__ = __result_obj__ = result_10;
    come_call_finalizer3(result_10,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    return __result12__;
    come_call_finalizer3(result_10,smart_pointer$1longp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, long int len){
void* __result_obj__;
void* right_value22;
void* right_value25;
struct smart_pointer$1char* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
right_value22 = (void*)0;
right_value25 = (void*)0;
    # 2159 "/usr/local/include/neo-c.h"
    __result14__ = __result_obj__ = ((struct smart_pointer$1char*)(right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/neo-c.h", 2159, "smart_pointer$1char")))),self,len)));
    come_call_finalizer3(right_value22,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value25,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result14__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, long int len){
void* __result_obj__;
void* right_value26;
void* right_value29;
struct smart_pointer$1short* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
right_value26 = (void*)0;
right_value29 = (void*)0;
    # 2164 "/usr/local/include/neo-c.h"
    __result16__ = __result_obj__ = ((struct smart_pointer$1short*)(right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/neo-c.h", 2164, "smart_pointer$1short")))),self,len)));
    come_call_finalizer3(right_value26,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value29,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result16__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, long int len){
void* __result_obj__;
void* right_value30;
void* right_value33;
struct smart_pointer$1int* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
right_value30 = (void*)0;
right_value33 = (void*)0;
    # 2169 "/usr/local/include/neo-c.h"
    __result18__ = __result_obj__ = ((struct smart_pointer$1int*)(right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/neo-c.h", 2169, "smart_pointer$1int")))),self,len)));
    come_call_finalizer3(right_value30,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value33,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result18__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, long int len){
void* __result_obj__;
void* right_value34;
void* right_value37;
struct smart_pointer$1long* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
right_value34 = (void*)0;
right_value37 = (void*)0;
    # 2174 "/usr/local/include/neo-c.h"
    __result20__ = __result_obj__ = ((struct smart_pointer$1long*)(right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/neo-c.h", 2174, "smart_pointer$1long")))),self,len)));
    come_call_finalizer3(right_value34,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value37,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result20__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, long int len){
void* __result_obj__;
void* right_value38;
void* right_value41;
struct smart_pointer$1float* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
right_value38 = (void*)0;
right_value41 = (void*)0;
    # 2179 "/usr/local/include/neo-c.h"
    __result22__ = __result_obj__ = ((struct smart_pointer$1float*)(right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "/usr/local/include/neo-c.h", 2179, "smart_pointer$1float")))),self,len)));
    come_call_finalizer3(right_value38,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value41,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result22__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, long int len){
void* __result_obj__;
void* right_value42;
void* right_value45;
struct smart_pointer$1double* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
right_value42 = (void*)0;
right_value45 = (void*)0;
    # 2184 "/usr/local/include/neo-c.h"
    __result24__ = __result_obj__ = ((struct smart_pointer$1double*)(right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "/usr/local/include/neo-c.h", 2184, "smart_pointer$1double")))),self,len)));
    come_call_finalizer3(right_value42,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value45,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    return __result24__;
}
static inline struct list$1char* charpa_to_list(char* self, long int len){
void* __result_obj__;
void* right_value46;
void* right_value50;
struct list$1char* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
right_value46 = (void*)0;
right_value50 = (void*)0;
    # 2189 "/usr/local/include/neo-c.h"
    __result27__ = __result_obj__ = ((struct list$1char*)(right_value50=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count(((struct list$1char*)(right_value46=(struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "/usr/local/include/neo-c.h", 2189, "list$1char")))),len,self)));
    come_call_finalizer3(right_value46,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value50,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result27__;
}
static inline struct list$1short* shortpa_to_list(short short* self, long int len){
void* __result_obj__;
void* right_value51;
void* right_value55;
struct list$1short* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
right_value51 = (void*)0;
right_value55 = (void*)0;
    # 2194 "/usr/local/include/neo-c.h"
    __result30__ = __result_obj__ = ((struct list$1short*)(right_value55=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count(((struct list$1short*)(right_value51=(struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "/usr/local/include/neo-c.h", 2194, "list$1short")))),len,self)));
    come_call_finalizer3(right_value51,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value55,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result30__;
}
static inline struct list$1int* intpa_to_list(int* self, long int len){
void* __result_obj__;
void* right_value56;
void* right_value60;
struct list$1int* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
right_value56 = (void*)0;
right_value60 = (void*)0;
    # 2199 "/usr/local/include/neo-c.h"
    __result33__ = __result_obj__ = ((struct list$1int*)(right_value60=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value56=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "/usr/local/include/neo-c.h", 2199, "list$1int")))),len,self)));
    come_call_finalizer3(right_value56,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value60,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result33__;
}
static inline struct list$1long* longpa_to_list(long* self, long int len){
void* __result_obj__;
void* right_value61;
void* right_value65;
struct list$1long* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
right_value61 = (void*)0;
right_value65 = (void*)0;
    # 2204 "/usr/local/include/neo-c.h"
    __result36__ = __result_obj__ = ((struct list$1long*)(right_value65=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count(((struct list$1long*)(right_value61=(struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "/usr/local/include/neo-c.h", 2204, "list$1long")))),len,self)));
    come_call_finalizer3(right_value61,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value65,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result36__;
}
static inline struct list$1float* floatpa_to_list(float* self, long int len){
void* __result_obj__;
void* right_value66;
void* right_value70;
struct list$1float* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
right_value66 = (void*)0;
right_value70 = (void*)0;
    # 2209 "/usr/local/include/neo-c.h"
    __result39__ = __result_obj__ = ((struct list$1float*)(right_value70=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count(((struct list$1float*)(right_value66=(struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "/usr/local/include/neo-c.h", 2209, "list$1float")))),len,self)));
    come_call_finalizer3(right_value66,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value70,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result39__;
}
static inline struct list$1double* doublepa_to_list(double* self, long int len){
void* __result_obj__;
void* right_value71;
void* right_value75;
struct list$1double* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
right_value71 = (void*)0;
right_value75 = (void*)0;
    # 2214 "/usr/local/include/neo-c.h"
    __result42__ = __result_obj__ = ((struct list$1double*)(right_value75=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count(((struct list$1double*)(right_value71=(struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "/usr/local/include/neo-c.h", 2214, "list$1double")))),len,self)));
    come_call_finalizer3(right_value71,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value75,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    return __result42__;
}
static inline long int charpa_length(char* self, long int len){
void* __result_obj__;
long int __result43__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2244 "/usr/local/include/neo-c.h"
    __result43__ = len;
    return __result43__;
}
static inline long int shortpa_length(short short* self, long int len){
void* __result_obj__;
long int __result44__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2249 "/usr/local/include/neo-c.h"
    __result44__ = len;
    return __result44__;
}
static inline long int intpa_length(int* self, long int len){
void* __result_obj__;
long int __result45__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2254 "/usr/local/include/neo-c.h"
    __result45__ = len;
    return __result45__;
}
static inline long int longpa_length(long* self, long int len){
void* __result_obj__;
long int __result46__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2259 "/usr/local/include/neo-c.h"
    __result46__ = len;
    return __result46__;
}
static inline long int floatpa_length(float* self, long int len){
void* __result_obj__;
long int __result47__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2264 "/usr/local/include/neo-c.h"
    __result47__ = len;
    return __result47__;
}
static inline long int doublepa_length(double* self, long int len){
void* __result_obj__;
long int __result48__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2269 "/usr/local/include/neo-c.h"
    __result48__ = len;
    return __result48__;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value76;
char* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
right_value76 = (void*)0;
    # 2330 "/usr/local/include/neo-c.h"
    __result49__ = __result_obj__ = ((char*)(right_value76=xsprintf(msg,self)));
    right_value76 = come_decrement_ref_count2(right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result49__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value77;
char* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
right_value77 = (void*)0;
    # 2335 "/usr/local/include/neo-c.h"
    __result50__ = __result_obj__ = ((char*)(right_value77=xsprintf(msg,self)));
    right_value77 = come_decrement_ref_count2(right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result50__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__;
void* right_value78;
char* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
right_value78 = (void*)0;
    # 2340 "/usr/local/include/neo-c.h"
    __result51__ = __result_obj__ = ((char*)(right_value78=xsprintf(msg,self)));
    right_value78 = come_decrement_ref_count2(right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result51__;
}
static inline int __darwin_check_fd_set(int _a, const void* _b){
void* __result_obj__;
_Bool _if_conditional19;
int __result52__;
int __result53__;
memset(&__result_obj__, 0, sizeof(void*));
    # 74 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"
    # 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"
    if(_if_conditional19=(unsigned long int)&__darwin_check_fd_set_overflow!=(unsigned long int)0,    _if_conditional19) {
        # 68 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"
        __result52__ = __darwin_check_fd_set_overflow(_a,_b,0);
        return __result52__;
    }
    else {
        # 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"
        __result53__ = 1;
        return __result53__;
    }
}
static inline int __darwin_fd_isset(int _fd, const struct fd_set* _p){
void* __result_obj__;
_Bool _if_conditional20;
int __result54__;
int __result55__;
memset(&__result_obj__, 0, sizeof(void*));
    # 86 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"
    # 82 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"
    if(_if_conditional20=__darwin_check_fd_set(_fd,(const void*)_p),    _if_conditional20) {
        # 83 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"
        __result54__ = _p->fds_bits[(unsigned long int)_fd/(sizeof(int)*8)]&((int)(((unsigned long int)1)<<((unsigned long int)_fd%(sizeof(int)*8))));
        return __result54__;
    }
    # 86 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"
    __result55__ = 0;
    return __result55__;
}
static inline void __darwin_fd_set(int _fd, struct fd_set* _p){
void* __result_obj__;
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
    # 95 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"
    # 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"
    if(_if_conditional21=__darwin_check_fd_set(_fd,(const void*)_p),    _if_conditional21) {
        # 93 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"
        (_p->fds_bits[(unsigned long int)_fd/(sizeof(int)*8)]|=((int)(((unsigned long int)1)<<((unsigned long int)_fd%(sizeof(int)*8)))));
    }
}
static inline void __darwin_fd_clr(int _fd, struct fd_set* _p){
void* __result_obj__;
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
    # 103 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"
    # 100 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"
    if(_if_conditional22=__darwin_check_fd_set(_fd,(const void*)_p),    _if_conditional22) {
        # 101 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"
        (_p->fds_bits[(unsigned long int)_fd/(sizeof(int)*8)]&=~((int)(((unsigned long int)1)<<((unsigned long int)_fd%(sizeof(int)*8)))));
    }
}

// body function








static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
void* __result_obj__;
_Bool _if_conditional1;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "smart_pointer$1charp_finalize"
        # 0 "smart_pointer$1charp_finalize"
        if(_if_conditional1=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional1) {
            # 0 "smart_pointer$1charp_finalize"
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}



static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
void* __result_obj__;
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "smart_pointer$1shortp_finalize"
        # 0 "smart_pointer$1shortp_finalize"
        if(_if_conditional2=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional2) {
            # 0 "smart_pointer$1shortp_finalize"
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
void* __result_obj__;
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "smart_pointer$1intp_finalize"
        # 0 "smart_pointer$1intp_finalize"
        if(_if_conditional3=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional3) {
            # 0 "smart_pointer$1intp_finalize"
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
void* __result_obj__;
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "smart_pointer$1longp_finalize"
        # 0 "smart_pointer$1longp_finalize"
        if(_if_conditional4=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional4) {
            # 0 "smart_pointer$1longp_finalize"
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}


static struct smart_pointer$1char* smart_pointer$1char_initialize(struct smart_pointer$1char* self, void* memory, int size){
void* __result_obj__;
void* right_value23;
void* right_value24;
struct buffer* __dec_obj6;
struct smart_pointer$1char* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
right_value23 = (void*)0;
right_value24 = (void*)0;
        # 2000 "/usr/local/include/neo-c.h"
        __dec_obj6=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 2000, "buffer"))))))));
        come_call_finalizer3(__dec_obj6,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value23,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value24,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2002 "/usr/local/include/neo-c.h"
        buffer_append(self->memory,memory,sizeof(char)*size);
        # 2004 "/usr/local/include/neo-c.h"
        self->p=(char*)self->memory->buf;
        # 2006 "/usr/local/include/neo-c.h"
        __result13__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
        return __result13__;
        come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size){
void* __result_obj__;
void* right_value27;
void* right_value28;
struct buffer* __dec_obj7;
struct smart_pointer$1short* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
right_value27 = (void*)0;
right_value28 = (void*)0;
        # 2000 "/usr/local/include/neo-c.h"
        __dec_obj7=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 2000, "buffer"))))))));
        come_call_finalizer3(__dec_obj7,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value27,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value28,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2002 "/usr/local/include/neo-c.h"
        buffer_append(self->memory,memory,sizeof(short short)*size);
        # 2004 "/usr/local/include/neo-c.h"
        self->p=(short short*)self->memory->buf;
        # 2006 "/usr/local/include/neo-c.h"
        __result15__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
        return __result15__;
        come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size){
void* __result_obj__;
void* right_value31;
void* right_value32;
struct buffer* __dec_obj8;
struct smart_pointer$1int* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
right_value31 = (void*)0;
right_value32 = (void*)0;
        # 2000 "/usr/local/include/neo-c.h"
        __dec_obj8=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 2000, "buffer"))))))));
        come_call_finalizer3(__dec_obj8,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value31,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value32,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2002 "/usr/local/include/neo-c.h"
        buffer_append(self->memory,memory,sizeof(int)*size);
        # 2004 "/usr/local/include/neo-c.h"
        self->p=(int*)self->memory->buf;
        # 2006 "/usr/local/include/neo-c.h"
        __result17__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
        return __result17__;
        come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size){
void* __result_obj__;
void* right_value35;
void* right_value36;
struct buffer* __dec_obj9;
struct smart_pointer$1long* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
right_value35 = (void*)0;
right_value36 = (void*)0;
        # 2000 "/usr/local/include/neo-c.h"
        __dec_obj9=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 2000, "buffer"))))))));
        come_call_finalizer3(__dec_obj9,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value35,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value36,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2002 "/usr/local/include/neo-c.h"
        buffer_append(self->memory,memory,sizeof(long)*size);
        # 2004 "/usr/local/include/neo-c.h"
        self->p=(long*)self->memory->buf;
        # 2006 "/usr/local/include/neo-c.h"
        __result19__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
        return __result19__;
        come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size){
void* __result_obj__;
void* right_value39;
void* right_value40;
struct buffer* __dec_obj10;
struct smart_pointer$1float* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
right_value39 = (void*)0;
right_value40 = (void*)0;
        # 2000 "/usr/local/include/neo-c.h"
        __dec_obj10=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 2000, "buffer"))))))));
        come_call_finalizer3(__dec_obj10,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value39,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value40,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2002 "/usr/local/include/neo-c.h"
        buffer_append(self->memory,memory,sizeof(float)*size);
        # 2004 "/usr/local/include/neo-c.h"
        self->p=(float*)self->memory->buf;
        # 2006 "/usr/local/include/neo-c.h"
        __result21__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
        return __result21__;
        come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
void* __result_obj__;
_Bool _if_conditional5;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "smart_pointer$1floatp_finalize"
            # 0 "smart_pointer$1floatp_finalize"
            if(_if_conditional5=self!=((void*)0)&&self->memory!=((void*)0),            _if_conditional5) {
                # 0 "smart_pointer$1floatp_finalize"
                come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct smart_pointer$1double* smart_pointer$1double_initialize(struct smart_pointer$1double* self, void* memory, int size){
void* __result_obj__;
void* right_value43;
void* right_value44;
struct buffer* __dec_obj11;
struct smart_pointer$1double* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
right_value43 = (void*)0;
right_value44 = (void*)0;
        # 2000 "/usr/local/include/neo-c.h"
        __dec_obj11=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 2000, "buffer"))))))));
        come_call_finalizer3(__dec_obj11,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value43,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value44,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2002 "/usr/local/include/neo-c.h"
        buffer_append(self->memory,memory,sizeof(double)*size);
        # 2004 "/usr/local/include/neo-c.h"
        self->p=(double*)self->memory->buf;
        # 2006 "/usr/local/include/neo-c.h"
        __result23__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
        return __result23__;
        come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
void* __result_obj__;
_Bool _if_conditional6;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "smart_pointer$1doublep_finalize"
            # 0 "smart_pointer$1doublep_finalize"
            if(_if_conditional6=self!=((void*)0)&&self->memory!=((void*)0),            _if_conditional6) {
                # 0 "smart_pointer$1doublep_finalize"
                come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__;
int i_11;
struct list$1char* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_11, 0, sizeof(int));
        # 103 "/usr/local/include/neo-c.h"
        self->head=((void*)0);
        # 104 "/usr/local/include/neo-c.h"
        self->tail=((void*)0);
        # 105 "/usr/local/include/neo-c.h"
        self->len=0;
        # 111 "/usr/local/include/neo-c.h"
        for(        i_11=0;        i_11<num_value;        i_11++        ){
            # 108 "/usr/local/include/neo-c.h"
            list$1char_push_back(self,values[i_11]);
        }
        # 111 "/usr/local/include/neo-c.h"
        __result26__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
        return __result26__;
        come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__;
_Bool _if_conditional7;
void* right_value47;
struct list_item$1char* litem_12;
_Bool _if_conditional8;
void* right_value48;
struct list_item$1char* litem_13;
void* right_value49;
struct list_item$1char* litem_14;
struct list$1char* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
right_value47 = (void*)0;
memset(&litem_12, 0, sizeof(struct list_item$1char*));
right_value48 = (void*)0;
memset(&litem_13, 0, sizeof(struct list_item$1char*));
right_value49 = (void*)0;
memset(&litem_14, 0, sizeof(struct list_item$1char*));
                # 247 "/usr/local/include/neo-c.h"
                # 216 "/usr/local/include/neo-c.h"
                if(_if_conditional7=self->len==0,                _if_conditional7) {
                    # 217 "/usr/local/include/neo-c.h"
                    litem_12=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value47=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/neo-c.h", 217, "list_item$1char"))));
                    come_call_finalizer3(right_value47,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "/usr/local/include/neo-c.h"
                    litem_12->prev=((void*)0);
                    # 220 "/usr/local/include/neo-c.h"
                    litem_12->next=((void*)0);
                    # 221 "/usr/local/include/neo-c.h"
                    litem_12->item=item;
                    # 223 "/usr/local/include/neo-c.h"
                    self->tail=litem_12;
                    # 224 "/usr/local/include/neo-c.h"
                    self->head=litem_12;
                }
                else {
                    # 247 "/usr/local/include/neo-c.h"
                    # 226 "/usr/local/include/neo-c.h"
                    if(_if_conditional8=self->len==1,                    _if_conditional8) {
                        # 227 "/usr/local/include/neo-c.h"
                        litem_13=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value48=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/neo-c.h", 227, "list_item$1char"))));
                        come_call_finalizer3(right_value48,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "/usr/local/include/neo-c.h"
                        litem_13->prev=self->head;
                        # 230 "/usr/local/include/neo-c.h"
                        litem_13->next=((void*)0);
                        # 231 "/usr/local/include/neo-c.h"
                        litem_13->item=item;
                        # 233 "/usr/local/include/neo-c.h"
                        self->tail=litem_13;
                        # 234 "/usr/local/include/neo-c.h"
                        self->head->next=litem_13;
                    }
                    else {
                        # 237 "/usr/local/include/neo-c.h"
                        litem_14=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value49=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/neo-c.h", 237, "list_item$1char"))));
                        come_call_finalizer3(right_value49,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "/usr/local/include/neo-c.h"
                        litem_14->prev=self->tail;
                        # 240 "/usr/local/include/neo-c.h"
                        litem_14->next=((void*)0);
                        # 241 "/usr/local/include/neo-c.h"
                        litem_14->item=item;
                        # 243 "/usr/local/include/neo-c.h"
                        self->tail->next=litem_14;
                        # 244 "/usr/local/include/neo-c.h"
                        self->tail=litem_14;
                    }
                }
                # 247 "/usr/local/include/neo-c.h"
                self->len++;
                # 249 "/usr/local/include/neo-c.h"
                __result25__ = __result_obj__ = self;
                return __result25__;
}

static void list_item$1charp_finalize(struct list_item$1char* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1charp_finalize(struct list$1char* self){
void* __result_obj__;
struct list_item$1char* it_15;
_Bool _while_condtional1;
struct list_item$1char* prev_it_16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_15, 0, sizeof(struct list_item$1char*));
memset(&prev_it_16, 0, sizeof(struct list_item$1char*));
            # 114 "/usr/local/include/neo-c.h"
            it_15=self->head;
            # 120 "/usr/local/include/neo-c.h"
            while(_while_condtional1=it_15!=((void*)0),            _while_condtional1) {
                # 116 "/usr/local/include/neo-c.h"
                prev_it_16=it_15;
                # 117 "/usr/local/include/neo-c.h"
                it_15=it_15->next;
                # 118 "/usr/local/include/neo-c.h"
                come_call_finalizer3(prev_it_16,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values){
void* __result_obj__;
int i_17;
struct list$1short* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_17, 0, sizeof(int));
        # 103 "/usr/local/include/neo-c.h"
        self->head=((void*)0);
        # 104 "/usr/local/include/neo-c.h"
        self->tail=((void*)0);
        # 105 "/usr/local/include/neo-c.h"
        self->len=0;
        # 111 "/usr/local/include/neo-c.h"
        for(        i_17=0;        i_17<num_value;        i_17++        ){
            # 108 "/usr/local/include/neo-c.h"
            list$1short_push_back(self,values[i_17]);
        }
        # 111 "/usr/local/include/neo-c.h"
        __result29__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
        return __result29__;
        come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short short item){
void* __result_obj__;
_Bool _if_conditional9;
void* right_value52;
struct list_item$1short* litem_18;
_Bool _if_conditional10;
void* right_value53;
struct list_item$1short* litem_19;
void* right_value54;
struct list_item$1short* litem_20;
struct list$1short* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
right_value52 = (void*)0;
memset(&litem_18, 0, sizeof(struct list_item$1short*));
right_value53 = (void*)0;
memset(&litem_19, 0, sizeof(struct list_item$1short*));
right_value54 = (void*)0;
memset(&litem_20, 0, sizeof(struct list_item$1short*));
                # 247 "/usr/local/include/neo-c.h"
                # 216 "/usr/local/include/neo-c.h"
                if(_if_conditional9=self->len==0,                _if_conditional9) {
                    # 217 "/usr/local/include/neo-c.h"
                    litem_18=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value52=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/neo-c.h", 217, "list_item$1short"))));
                    come_call_finalizer3(right_value52,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "/usr/local/include/neo-c.h"
                    litem_18->prev=((void*)0);
                    # 220 "/usr/local/include/neo-c.h"
                    litem_18->next=((void*)0);
                    # 221 "/usr/local/include/neo-c.h"
                    litem_18->item=item;
                    # 223 "/usr/local/include/neo-c.h"
                    self->tail=litem_18;
                    # 224 "/usr/local/include/neo-c.h"
                    self->head=litem_18;
                }
                else {
                    # 247 "/usr/local/include/neo-c.h"
                    # 226 "/usr/local/include/neo-c.h"
                    if(_if_conditional10=self->len==1,                    _if_conditional10) {
                        # 227 "/usr/local/include/neo-c.h"
                        litem_19=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value53=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/neo-c.h", 227, "list_item$1short"))));
                        come_call_finalizer3(right_value53,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "/usr/local/include/neo-c.h"
                        litem_19->prev=self->head;
                        # 230 "/usr/local/include/neo-c.h"
                        litem_19->next=((void*)0);
                        # 231 "/usr/local/include/neo-c.h"
                        litem_19->item=item;
                        # 233 "/usr/local/include/neo-c.h"
                        self->tail=litem_19;
                        # 234 "/usr/local/include/neo-c.h"
                        self->head->next=litem_19;
                    }
                    else {
                        # 237 "/usr/local/include/neo-c.h"
                        litem_20=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value54=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/neo-c.h", 237, "list_item$1short"))));
                        come_call_finalizer3(right_value54,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "/usr/local/include/neo-c.h"
                        litem_20->prev=self->tail;
                        # 240 "/usr/local/include/neo-c.h"
                        litem_20->next=((void*)0);
                        # 241 "/usr/local/include/neo-c.h"
                        litem_20->item=item;
                        # 243 "/usr/local/include/neo-c.h"
                        self->tail->next=litem_20;
                        # 244 "/usr/local/include/neo-c.h"
                        self->tail=litem_20;
                    }
                }
                # 247 "/usr/local/include/neo-c.h"
                self->len++;
                # 249 "/usr/local/include/neo-c.h"
                __result28__ = __result_obj__ = self;
                return __result28__;
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1shortp_finalize(struct list$1short* self){
void* __result_obj__;
struct list_item$1short* it_21;
_Bool _while_condtional2;
struct list_item$1short* prev_it_22;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_21, 0, sizeof(struct list_item$1short*));
memset(&prev_it_22, 0, sizeof(struct list_item$1short*));
            # 114 "/usr/local/include/neo-c.h"
            it_21=self->head;
            # 120 "/usr/local/include/neo-c.h"
            while(_while_condtional2=it_21!=((void*)0),            _while_condtional2) {
                # 116 "/usr/local/include/neo-c.h"
                prev_it_22=it_21;
                # 117 "/usr/local/include/neo-c.h"
                it_21=it_21->next;
                # 118 "/usr/local/include/neo-c.h"
                come_call_finalizer3(prev_it_22,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__;
int i_23;
struct list$1int* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_23, 0, sizeof(int));
        # 103 "/usr/local/include/neo-c.h"
        self->head=((void*)0);
        # 104 "/usr/local/include/neo-c.h"
        self->tail=((void*)0);
        # 105 "/usr/local/include/neo-c.h"
        self->len=0;
        # 111 "/usr/local/include/neo-c.h"
        for(        i_23=0;        i_23<num_value;        i_23++        ){
            # 108 "/usr/local/include/neo-c.h"
            list$1int_push_back(self,values[i_23]);
        }
        # 111 "/usr/local/include/neo-c.h"
        __result32__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
        return __result32__;
        come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__;
_Bool _if_conditional11;
void* right_value57;
struct list_item$1int* litem_24;
_Bool _if_conditional12;
void* right_value58;
struct list_item$1int* litem_25;
void* right_value59;
struct list_item$1int* litem_26;
struct list$1int* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
right_value57 = (void*)0;
memset(&litem_24, 0, sizeof(struct list_item$1int*));
right_value58 = (void*)0;
memset(&litem_25, 0, sizeof(struct list_item$1int*));
right_value59 = (void*)0;
memset(&litem_26, 0, sizeof(struct list_item$1int*));
                # 247 "/usr/local/include/neo-c.h"
                # 216 "/usr/local/include/neo-c.h"
                if(_if_conditional11=self->len==0,                _if_conditional11) {
                    # 217 "/usr/local/include/neo-c.h"
                    litem_24=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value57=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/neo-c.h", 217, "list_item$1int"))));
                    come_call_finalizer3(right_value57,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "/usr/local/include/neo-c.h"
                    litem_24->prev=((void*)0);
                    # 220 "/usr/local/include/neo-c.h"
                    litem_24->next=((void*)0);
                    # 221 "/usr/local/include/neo-c.h"
                    litem_24->item=item;
                    # 223 "/usr/local/include/neo-c.h"
                    self->tail=litem_24;
                    # 224 "/usr/local/include/neo-c.h"
                    self->head=litem_24;
                }
                else {
                    # 247 "/usr/local/include/neo-c.h"
                    # 226 "/usr/local/include/neo-c.h"
                    if(_if_conditional12=self->len==1,                    _if_conditional12) {
                        # 227 "/usr/local/include/neo-c.h"
                        litem_25=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value58=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/neo-c.h", 227, "list_item$1int"))));
                        come_call_finalizer3(right_value58,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "/usr/local/include/neo-c.h"
                        litem_25->prev=self->head;
                        # 230 "/usr/local/include/neo-c.h"
                        litem_25->next=((void*)0);
                        # 231 "/usr/local/include/neo-c.h"
                        litem_25->item=item;
                        # 233 "/usr/local/include/neo-c.h"
                        self->tail=litem_25;
                        # 234 "/usr/local/include/neo-c.h"
                        self->head->next=litem_25;
                    }
                    else {
                        # 237 "/usr/local/include/neo-c.h"
                        litem_26=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value59=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/neo-c.h", 237, "list_item$1int"))));
                        come_call_finalizer3(right_value59,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "/usr/local/include/neo-c.h"
                        litem_26->prev=self->tail;
                        # 240 "/usr/local/include/neo-c.h"
                        litem_26->next=((void*)0);
                        # 241 "/usr/local/include/neo-c.h"
                        litem_26->item=item;
                        # 243 "/usr/local/include/neo-c.h"
                        self->tail->next=litem_26;
                        # 244 "/usr/local/include/neo-c.h"
                        self->tail=litem_26;
                    }
                }
                # 247 "/usr/local/include/neo-c.h"
                self->len++;
                # 249 "/usr/local/include/neo-c.h"
                __result31__ = __result_obj__ = self;
                return __result31__;
}

static void list_item$1intp_finalize(struct list_item$1int* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1intp_finalize(struct list$1int* self){
void* __result_obj__;
struct list_item$1int* it_27;
_Bool _while_condtional3;
struct list_item$1int* prev_it_28;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_27, 0, sizeof(struct list_item$1int*));
memset(&prev_it_28, 0, sizeof(struct list_item$1int*));
            # 114 "/usr/local/include/neo-c.h"
            it_27=self->head;
            # 120 "/usr/local/include/neo-c.h"
            while(_while_condtional3=it_27!=((void*)0),            _while_condtional3) {
                # 116 "/usr/local/include/neo-c.h"
                prev_it_28=it_27;
                # 117 "/usr/local/include/neo-c.h"
                it_27=it_27->next;
                # 118 "/usr/local/include/neo-c.h"
                come_call_finalizer3(prev_it_28,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__;
int i_29;
struct list$1long* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_29, 0, sizeof(int));
        # 103 "/usr/local/include/neo-c.h"
        self->head=((void*)0);
        # 104 "/usr/local/include/neo-c.h"
        self->tail=((void*)0);
        # 105 "/usr/local/include/neo-c.h"
        self->len=0;
        # 111 "/usr/local/include/neo-c.h"
        for(        i_29=0;        i_29<num_value;        i_29++        ){
            # 108 "/usr/local/include/neo-c.h"
            list$1long_push_back(self,values[i_29]);
        }
        # 111 "/usr/local/include/neo-c.h"
        __result35__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
        return __result35__;
        come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__;
_Bool _if_conditional13;
void* right_value62;
struct list_item$1long* litem_30;
_Bool _if_conditional14;
void* right_value63;
struct list_item$1long* litem_31;
void* right_value64;
struct list_item$1long* litem_32;
struct list$1long* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
right_value62 = (void*)0;
memset(&litem_30, 0, sizeof(struct list_item$1long*));
right_value63 = (void*)0;
memset(&litem_31, 0, sizeof(struct list_item$1long*));
right_value64 = (void*)0;
memset(&litem_32, 0, sizeof(struct list_item$1long*));
                # 247 "/usr/local/include/neo-c.h"
                # 216 "/usr/local/include/neo-c.h"
                if(_if_conditional13=self->len==0,                _if_conditional13) {
                    # 217 "/usr/local/include/neo-c.h"
                    litem_30=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value62=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/neo-c.h", 217, "list_item$1long"))));
                    come_call_finalizer3(right_value62,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "/usr/local/include/neo-c.h"
                    litem_30->prev=((void*)0);
                    # 220 "/usr/local/include/neo-c.h"
                    litem_30->next=((void*)0);
                    # 221 "/usr/local/include/neo-c.h"
                    litem_30->item=item;
                    # 223 "/usr/local/include/neo-c.h"
                    self->tail=litem_30;
                    # 224 "/usr/local/include/neo-c.h"
                    self->head=litem_30;
                }
                else {
                    # 247 "/usr/local/include/neo-c.h"
                    # 226 "/usr/local/include/neo-c.h"
                    if(_if_conditional14=self->len==1,                    _if_conditional14) {
                        # 227 "/usr/local/include/neo-c.h"
                        litem_31=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value63=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/neo-c.h", 227, "list_item$1long"))));
                        come_call_finalizer3(right_value63,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "/usr/local/include/neo-c.h"
                        litem_31->prev=self->head;
                        # 230 "/usr/local/include/neo-c.h"
                        litem_31->next=((void*)0);
                        # 231 "/usr/local/include/neo-c.h"
                        litem_31->item=item;
                        # 233 "/usr/local/include/neo-c.h"
                        self->tail=litem_31;
                        # 234 "/usr/local/include/neo-c.h"
                        self->head->next=litem_31;
                    }
                    else {
                        # 237 "/usr/local/include/neo-c.h"
                        litem_32=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value64=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/neo-c.h", 237, "list_item$1long"))));
                        come_call_finalizer3(right_value64,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "/usr/local/include/neo-c.h"
                        litem_32->prev=self->tail;
                        # 240 "/usr/local/include/neo-c.h"
                        litem_32->next=((void*)0);
                        # 241 "/usr/local/include/neo-c.h"
                        litem_32->item=item;
                        # 243 "/usr/local/include/neo-c.h"
                        self->tail->next=litem_32;
                        # 244 "/usr/local/include/neo-c.h"
                        self->tail=litem_32;
                    }
                }
                # 247 "/usr/local/include/neo-c.h"
                self->len++;
                # 249 "/usr/local/include/neo-c.h"
                __result34__ = __result_obj__ = self;
                return __result34__;
}

static void list_item$1longp_finalize(struct list_item$1long* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1longp_finalize(struct list$1long* self){
void* __result_obj__;
struct list_item$1long* it_33;
_Bool _while_condtional4;
struct list_item$1long* prev_it_34;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_33, 0, sizeof(struct list_item$1long*));
memset(&prev_it_34, 0, sizeof(struct list_item$1long*));
            # 114 "/usr/local/include/neo-c.h"
            it_33=self->head;
            # 120 "/usr/local/include/neo-c.h"
            while(_while_condtional4=it_33!=((void*)0),            _while_condtional4) {
                # 116 "/usr/local/include/neo-c.h"
                prev_it_34=it_33;
                # 117 "/usr/local/include/neo-c.h"
                it_33=it_33->next;
                # 118 "/usr/local/include/neo-c.h"
                come_call_finalizer3(prev_it_34,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__;
int i_35;
struct list$1float* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_35, 0, sizeof(int));
        # 103 "/usr/local/include/neo-c.h"
        self->head=((void*)0);
        # 104 "/usr/local/include/neo-c.h"
        self->tail=((void*)0);
        # 105 "/usr/local/include/neo-c.h"
        self->len=0;
        # 111 "/usr/local/include/neo-c.h"
        for(        i_35=0;        i_35<num_value;        i_35++        ){
            # 108 "/usr/local/include/neo-c.h"
            list$1float_push_back(self,values[i_35]);
        }
        # 111 "/usr/local/include/neo-c.h"
        __result38__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
        return __result38__;
        come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__;
_Bool _if_conditional15;
void* right_value67;
struct list_item$1float* litem_36;
_Bool _if_conditional16;
void* right_value68;
struct list_item$1float* litem_37;
void* right_value69;
struct list_item$1float* litem_38;
struct list$1float* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
right_value67 = (void*)0;
memset(&litem_36, 0, sizeof(struct list_item$1float*));
right_value68 = (void*)0;
memset(&litem_37, 0, sizeof(struct list_item$1float*));
right_value69 = (void*)0;
memset(&litem_38, 0, sizeof(struct list_item$1float*));
                # 247 "/usr/local/include/neo-c.h"
                # 216 "/usr/local/include/neo-c.h"
                if(_if_conditional15=self->len==0,                _if_conditional15) {
                    # 217 "/usr/local/include/neo-c.h"
                    litem_36=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value67=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/neo-c.h", 217, "list_item$1float"))));
                    come_call_finalizer3(right_value67,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "/usr/local/include/neo-c.h"
                    litem_36->prev=((void*)0);
                    # 220 "/usr/local/include/neo-c.h"
                    litem_36->next=((void*)0);
                    # 221 "/usr/local/include/neo-c.h"
                    litem_36->item=item;
                    # 223 "/usr/local/include/neo-c.h"
                    self->tail=litem_36;
                    # 224 "/usr/local/include/neo-c.h"
                    self->head=litem_36;
                }
                else {
                    # 247 "/usr/local/include/neo-c.h"
                    # 226 "/usr/local/include/neo-c.h"
                    if(_if_conditional16=self->len==1,                    _if_conditional16) {
                        # 227 "/usr/local/include/neo-c.h"
                        litem_37=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value68=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/neo-c.h", 227, "list_item$1float"))));
                        come_call_finalizer3(right_value68,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "/usr/local/include/neo-c.h"
                        litem_37->prev=self->head;
                        # 230 "/usr/local/include/neo-c.h"
                        litem_37->next=((void*)0);
                        # 231 "/usr/local/include/neo-c.h"
                        litem_37->item=item;
                        # 233 "/usr/local/include/neo-c.h"
                        self->tail=litem_37;
                        # 234 "/usr/local/include/neo-c.h"
                        self->head->next=litem_37;
                    }
                    else {
                        # 237 "/usr/local/include/neo-c.h"
                        litem_38=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value69=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/neo-c.h", 237, "list_item$1float"))));
                        come_call_finalizer3(right_value69,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "/usr/local/include/neo-c.h"
                        litem_38->prev=self->tail;
                        # 240 "/usr/local/include/neo-c.h"
                        litem_38->next=((void*)0);
                        # 241 "/usr/local/include/neo-c.h"
                        litem_38->item=item;
                        # 243 "/usr/local/include/neo-c.h"
                        self->tail->next=litem_38;
                        # 244 "/usr/local/include/neo-c.h"
                        self->tail=litem_38;
                    }
                }
                # 247 "/usr/local/include/neo-c.h"
                self->len++;
                # 249 "/usr/local/include/neo-c.h"
                __result37__ = __result_obj__ = self;
                return __result37__;
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1floatp_finalize(struct list$1float* self){
void* __result_obj__;
struct list_item$1float* it_39;
_Bool _while_condtional5;
struct list_item$1float* prev_it_40;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_39, 0, sizeof(struct list_item$1float*));
memset(&prev_it_40, 0, sizeof(struct list_item$1float*));
            # 114 "/usr/local/include/neo-c.h"
            it_39=self->head;
            # 120 "/usr/local/include/neo-c.h"
            while(_while_condtional5=it_39!=((void*)0),            _while_condtional5) {
                # 116 "/usr/local/include/neo-c.h"
                prev_it_40=it_39;
                # 117 "/usr/local/include/neo-c.h"
                it_39=it_39->next;
                # 118 "/usr/local/include/neo-c.h"
                come_call_finalizer3(prev_it_40,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__;
int i_41;
struct list$1double* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_41, 0, sizeof(int));
        # 103 "/usr/local/include/neo-c.h"
        self->head=((void*)0);
        # 104 "/usr/local/include/neo-c.h"
        self->tail=((void*)0);
        # 105 "/usr/local/include/neo-c.h"
        self->len=0;
        # 111 "/usr/local/include/neo-c.h"
        for(        i_41=0;        i_41<num_value;        i_41++        ){
            # 108 "/usr/local/include/neo-c.h"
            list$1double_push_back(self,values[i_41]);
        }
        # 111 "/usr/local/include/neo-c.h"
        __result41__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
        return __result41__;
        come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__;
_Bool _if_conditional17;
void* right_value72;
struct list_item$1double* litem_42;
_Bool _if_conditional18;
void* right_value73;
struct list_item$1double* litem_43;
void* right_value74;
struct list_item$1double* litem_44;
struct list$1double* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
right_value72 = (void*)0;
memset(&litem_42, 0, sizeof(struct list_item$1double*));
right_value73 = (void*)0;
memset(&litem_43, 0, sizeof(struct list_item$1double*));
right_value74 = (void*)0;
memset(&litem_44, 0, sizeof(struct list_item$1double*));
                # 247 "/usr/local/include/neo-c.h"
                # 216 "/usr/local/include/neo-c.h"
                if(_if_conditional17=self->len==0,                _if_conditional17) {
                    # 217 "/usr/local/include/neo-c.h"
                    litem_42=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value72=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/neo-c.h", 217, "list_item$1double"))));
                    come_call_finalizer3(right_value72,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "/usr/local/include/neo-c.h"
                    litem_42->prev=((void*)0);
                    # 220 "/usr/local/include/neo-c.h"
                    litem_42->next=((void*)0);
                    # 221 "/usr/local/include/neo-c.h"
                    litem_42->item=item;
                    # 223 "/usr/local/include/neo-c.h"
                    self->tail=litem_42;
                    # 224 "/usr/local/include/neo-c.h"
                    self->head=litem_42;
                }
                else {
                    # 247 "/usr/local/include/neo-c.h"
                    # 226 "/usr/local/include/neo-c.h"
                    if(_if_conditional18=self->len==1,                    _if_conditional18) {
                        # 227 "/usr/local/include/neo-c.h"
                        litem_43=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value73=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/neo-c.h", 227, "list_item$1double"))));
                        come_call_finalizer3(right_value73,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "/usr/local/include/neo-c.h"
                        litem_43->prev=self->head;
                        # 230 "/usr/local/include/neo-c.h"
                        litem_43->next=((void*)0);
                        # 231 "/usr/local/include/neo-c.h"
                        litem_43->item=item;
                        # 233 "/usr/local/include/neo-c.h"
                        self->tail=litem_43;
                        # 234 "/usr/local/include/neo-c.h"
                        self->head->next=litem_43;
                    }
                    else {
                        # 237 "/usr/local/include/neo-c.h"
                        litem_44=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value74=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/neo-c.h", 237, "list_item$1double"))));
                        come_call_finalizer3(right_value74,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "/usr/local/include/neo-c.h"
                        litem_44->prev=self->tail;
                        # 240 "/usr/local/include/neo-c.h"
                        litem_44->next=((void*)0);
                        # 241 "/usr/local/include/neo-c.h"
                        litem_44->item=item;
                        # 243 "/usr/local/include/neo-c.h"
                        self->tail->next=litem_44;
                        # 244 "/usr/local/include/neo-c.h"
                        self->tail=litem_44;
                    }
                }
                # 247 "/usr/local/include/neo-c.h"
                self->len++;
                # 249 "/usr/local/include/neo-c.h"
                __result40__ = __result_obj__ = self;
                return __result40__;
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1doublep_finalize(struct list$1double* self){
void* __result_obj__;
struct list_item$1double* it_45;
_Bool _while_condtional6;
struct list_item$1double* prev_it_46;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_45, 0, sizeof(struct list_item$1double*));
memset(&prev_it_46, 0, sizeof(struct list_item$1double*));
            # 114 "/usr/local/include/neo-c.h"
            it_45=self->head;
            # 120 "/usr/local/include/neo-c.h"
            while(_while_condtional6=it_45!=((void*)0),            _while_condtional6) {
                # 116 "/usr/local/include/neo-c.h"
                prev_it_46=it_45;
                # 117 "/usr/local/include/neo-c.h"
                it_45=it_45->next;
                # 118 "/usr/local/include/neo-c.h"
                come_call_finalizer3(prev_it_46,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
            }
}














static void write_source_file_position_to_source(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional23;
_Bool _if_conditional24;
void* right_value79;
void* right_value80;
void* right_value81;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value80 = (void*)0;
right_value81 = (void*)0;
    # 28 "02transpile.c"
    # 22 "02transpile.c"
    if(gComeOriginalSourcePosition) {
        # 27 "02transpile.c"
        # 23 "02transpile.c"
        if(info->writing_source_file_position) {
            # 24 "02transpile.c"
            add_come_code(info,((char*)(right_value81=xsprintf("# \%s \"\%s\"\n",((char*)(right_value79=int_to_string(info->sline))),((char*)(right_value80=string_to_string(info->sname)))))));
            right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 25 "02transpile.c"
            info->writing_source_file_position=(_Bool)0;
        }
    }
}

_Bool node_compile(struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value82;
char* sname_47;
int sline_48;
void* right_value83;
void* right_value84;
char* __dec_obj12;
_Bool result_49;
void* right_value85;
char* __dec_obj13;
_Bool __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
memset(&sname_47, 0, sizeof(char*));
memset(&sline_48, 0, sizeof(int));
right_value83 = (void*)0;
right_value84 = (void*)0;
memset(&result_49, 0, sizeof(_Bool));
right_value85 = (void*)0;
    # 32 "02transpile.c"
    sname_47=(char*)come_increment_ref_count(((char*)(right_value82=__builtin_string(info->sname))));
    right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 33 "02transpile.c"
    sline_48=info->sline;
    # 35 "02transpile.c"
    __dec_obj12=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value84=__builtin_string(((char*)(right_value83=node->sname(node->_protocol_obj)))))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 36 "02transpile.c"
    info->sline=node->sline(node->_protocol_obj);
    # 38 "02transpile.c"
    write_source_file_position_to_source(info);
    # 40 "02transpile.c"
    result_49=node->compile(node->_protocol_obj,info);
    # 42 "02transpile.c"
    __dec_obj13=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value85=__builtin_string(sname_47))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 43 "02transpile.c"
    info->sline=sline_48;
    # 45 "02transpile.c"
    __result56__ = result_49;
    sname_47 = come_decrement_ref_count2(sname_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result56__;
    sname_47 = come_decrement_ref_count2(sname_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void err_msg(struct sInfo* info, char* msg, ...){
void* __result_obj__;
_Bool _if_conditional25;
char* msg2_50;
va_list args_51;
_Bool _if_conditional26;
int n_52;
void* right_value86;
void* right_value87;
void* right_value93;
struct __current_stack1__ __current_stack1__;
void* right_value98;
void* right_value102;
void* right_value103;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_50, 0, sizeof(char*));
memset(&args_51, 0, sizeof(va_list));
memset(&n_52, 0, sizeof(int));
right_value86 = (void*)0;
right_value87 = (void*)0;
right_value93 = (void*)0;
memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
right_value98 = (void*)0;
right_value102 = (void*)0;
right_value103 = (void*)0;
    # 69 "02transpile.c"
    # 50 "02transpile.c"
    if(_if_conditional25=!info->no_output_err,    _if_conditional25) {
        # 51 "02transpile.c"
        # 53 "02transpile.c"
        # 54 "02transpile.c"
        __builtin_va_start(args_51,msg);
        # 55 "02transpile.c"
        vasprintf(&msg2_50,msg,args_51);
        # 56 "02transpile.c"
        __builtin_va_end(args_51);
        # 58 "02transpile.c"
        printf("%s %d: %s\n",info->sname,info->sline,msg2_50);
        # 59 "02transpile.c"
        info->err_num++;
        # 60 "02transpile.c"
        stackframe();
        # 67 "02transpile.c"
        # 62 "02transpile.c"
        if(info->come_fun) {
            # 63 "02transpile.c"
            n_52=info->sline-5;
            # 64 "02transpile.c"
            __current_stack1__.n_52 = &n_52;
            __current_stack1__.msg2_50 = &msg2_50;
            __current_stack1__.info = &info;
            __current_stack1__.msg = &msg;
            ((char*)(right_value103=string_puts(((char*)(right_value102=list$1charph_join(((struct list$1charph*)(right_value98=list$1charph_map2(((struct list$1charph*)(right_value93=list$1charph_sublist(((struct list$1charph*)(right_value87=string_split_char(((char*)(right_value86=buffer_to_string(info->original_source))),10))),n_52,n_52+10))),&__current_stack1__,(void*)method_block1_02transpilec))),"\n"))))));
            right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value87,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value93,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value98,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 67 "02transpile.c"
        free(msg2_50);
        come_call_finalizer3((&args_51),va_list_finalize, 1, 0, 0, 0, (void*)0);
    }
}

static struct list$1charph* list$1charph_sublist(struct list$1charph* self, int begin, int tail){
void* __result_obj__;
void* right_value88;
void* right_value89;
struct list$1charph* result_55;
_Bool _if_conditional28;
_Bool _if_conditional29;
_Bool _if_conditional30;
_Bool _if_conditional31;
struct list_item$1charph* it_56;
int i_57;
_Bool _while_condtional8;
_Bool _if_conditional32;
struct list$1charph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
right_value89 = (void*)0;
memset(&result_55, 0, sizeof(struct list$1charph*));
memset(&it_56, 0, sizeof(struct list_item$1charph*));
memset(&i_57, 0, sizeof(int));
                # 633 "/usr/local/include/neo-c.h"
                result_55=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value89=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value88=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/neo-c.h", 633, "list$1charph"))))))));
                come_call_finalizer3(right_value88,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value89,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 639 "/usr/local/include/neo-c.h"
                # 635 "/usr/local/include/neo-c.h"
                if(_if_conditional28=begin<0,                _if_conditional28) {
                    # 636 "/usr/local/include/neo-c.h"
                    begin+=self->len;
                }
                # 643 "/usr/local/include/neo-c.h"
                # 639 "/usr/local/include/neo-c.h"
                if(_if_conditional29=tail<0,                _if_conditional29) {
                    # 640 "/usr/local/include/neo-c.h"
                    tail+=self->len+1;
                }
                # 647 "/usr/local/include/neo-c.h"
                # 643 "/usr/local/include/neo-c.h"
                if(_if_conditional30=begin<0,                _if_conditional30) {
                    # 644 "/usr/local/include/neo-c.h"
                    begin=0;
                }
                # 651 "/usr/local/include/neo-c.h"
                # 647 "/usr/local/include/neo-c.h"
                if(_if_conditional31=tail>=self->len,                _if_conditional31) {
                    # 648 "/usr/local/include/neo-c.h"
                    tail=self->len;
                }
                # 651 "/usr/local/include/neo-c.h"
                it_56=self->head;
                # 652 "/usr/local/include/neo-c.h"
                i_57=0;
                # 659 "/usr/local/include/neo-c.h"
                while(_while_condtional8=it_56!=((void*)0),                _while_condtional8) {
                    # 657 "/usr/local/include/neo-c.h"
                    # 654 "/usr/local/include/neo-c.h"
                    if(_if_conditional32=i_57>=begin&&i_57<tail,                    _if_conditional32) {
                        # 655 "/usr/local/include/neo-c.h"
                        list$1charph_push_back(result_55,(char*)come_increment_ref_count(it_56->item));
                    }
                    # 657 "/usr/local/include/neo-c.h"
                    it_56=it_56->next;
                    # 658 "/usr/local/include/neo-c.h"
                    i_57++;
                }
                # 661 "/usr/local/include/neo-c.h"
                __result59__ = __result_obj__ = result_55;
                come_call_finalizer3(result_55,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result59__;
                come_call_finalizer3(result_55,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 95 "/usr/local/include/neo-c.h"
                    self->head=((void*)0);
                    # 96 "/usr/local/include/neo-c.h"
                    self->tail=((void*)0);
                    # 97 "/usr/local/include/neo-c.h"
                    self->len=0;
                    # 99 "/usr/local/include/neo-c.h"
                    __result57__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result57__;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_53;
_Bool _while_condtional7;
struct list_item$1charph* prev_it_54;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_53, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_54, 0, sizeof(struct list_item$1charph*));
                        # 114 "/usr/local/include/neo-c.h"
                        it_53=self->head;
                        # 120 "/usr/local/include/neo-c.h"
                        while(_while_condtional7=it_53!=((void*)0),                        _while_condtional7) {
                            # 116 "/usr/local/include/neo-c.h"
                            prev_it_54=it_53;
                            # 117 "/usr/local/include/neo-c.h"
                            it_53=it_53->next;
                            # 118 "/usr/local/include/neo-c.h"
                            come_call_finalizer3(prev_it_54,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional27;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "list_item$1charphp_finalize"
                                # 0 "list_item$1charphp_finalize"
                                if(_if_conditional27=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional27) {
                                    # 0 "list_item$1charphp_finalize"
                                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional33;
void* right_value90;
struct list_item$1charph* litem_58;
char* __dec_obj14;
_Bool _if_conditional34;
void* right_value91;
struct list_item$1charph* litem_59;
char* __dec_obj15;
void* right_value92;
struct list_item$1charph* litem_60;
char* __dec_obj16;
struct list$1charph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value90 = (void*)0;
memset(&litem_58, 0, sizeof(struct list_item$1charph*));
right_value91 = (void*)0;
memset(&litem_59, 0, sizeof(struct list_item$1charph*));
right_value92 = (void*)0;
memset(&litem_60, 0, sizeof(struct list_item$1charph*));
                            # 247 "/usr/local/include/neo-c.h"
                            # 216 "/usr/local/include/neo-c.h"
                            if(_if_conditional33=self->len==0,                            _if_conditional33) {
                                # 217 "/usr/local/include/neo-c.h"
                                litem_58=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value90=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/neo-c.h", 217, "list_item$1charph"))));
                                come_call_finalizer3(right_value90,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 219 "/usr/local/include/neo-c.h"
                                litem_58->prev=((void*)0);
                                # 220 "/usr/local/include/neo-c.h"
                                litem_58->next=((void*)0);
                                # 221 "/usr/local/include/neo-c.h"
                                __dec_obj14=litem_58->item;
                                litem_58->item=(char*)come_increment_ref_count(item);
                                __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 223 "/usr/local/include/neo-c.h"
                                self->tail=litem_58;
                                # 224 "/usr/local/include/neo-c.h"
                                self->head=litem_58;
                            }
                            else {
                                # 247 "/usr/local/include/neo-c.h"
                                # 226 "/usr/local/include/neo-c.h"
                                if(_if_conditional34=self->len==1,                                _if_conditional34) {
                                    # 227 "/usr/local/include/neo-c.h"
                                    litem_59=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value91=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/neo-c.h", 227, "list_item$1charph"))));
                                    come_call_finalizer3(right_value91,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 229 "/usr/local/include/neo-c.h"
                                    litem_59->prev=self->head;
                                    # 230 "/usr/local/include/neo-c.h"
                                    litem_59->next=((void*)0);
                                    # 231 "/usr/local/include/neo-c.h"
                                    __dec_obj15=litem_59->item;
                                    litem_59->item=(char*)come_increment_ref_count(item);
                                    __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 233 "/usr/local/include/neo-c.h"
                                    self->tail=litem_59;
                                    # 234 "/usr/local/include/neo-c.h"
                                    self->head->next=litem_59;
                                }
                                else {
                                    # 237 "/usr/local/include/neo-c.h"
                                    litem_60=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value92=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/neo-c.h", 237, "list_item$1charph"))));
                                    come_call_finalizer3(right_value92,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 239 "/usr/local/include/neo-c.h"
                                    litem_60->prev=self->tail;
                                    # 240 "/usr/local/include/neo-c.h"
                                    litem_60->next=((void*)0);
                                    # 241 "/usr/local/include/neo-c.h"
                                    __dec_obj16=litem_60->item;
                                    litem_60->item=(char*)come_increment_ref_count(item);
                                    __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 243 "/usr/local/include/neo-c.h"
                                    self->tail->next=litem_60;
                                    # 244 "/usr/local/include/neo-c.h"
                                    self->tail=litem_60;
                                }
                            }
                            # 247 "/usr/local/include/neo-c.h"
                            self->len++;
                            # 249 "/usr/local/include/neo-c.h"
                            __result58__ = __result_obj__ = self;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result58__;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_map2(struct list$1charph* self, void* parent, char* (*block)(void*,char*)){
void* __result_obj__;
void* right_value94;
void* right_value95;
struct list$1charph* result_61;
struct list_item$1charph* it_62;
_Bool _while_condtional9;
void* right_value96;
struct list$1charph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
right_value95 = (void*)0;
memset(&result_61, 0, sizeof(struct list$1charph*));
memset(&it_62, 0, sizeof(struct list_item$1charph*));
right_value96 = (void*)0;
                # 927 "/usr/local/include/neo-c.h"
                result_61=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value95=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value94=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/neo-c.h", 927, "list$1charph"))))))));
                come_call_finalizer3(right_value94,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value95,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 929 "/usr/local/include/neo-c.h"
                it_62=self->head;
                # 936 "/usr/local/include/neo-c.h"
                while(_while_condtional9=it_62!=((void*)0),                _while_condtional9) {
                    # 931 "/usr/local/include/neo-c.h"
                    list$1charph_push_back(result_61,(char*)come_increment_ref_count(((char*)(right_value96=block(parent,it_62->item)))));
                    right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 933 "/usr/local/include/neo-c.h"
                    it_62=it_62->next;
                }
                # 936 "/usr/local/include/neo-c.h"
                __result60__ = __result_obj__ = result_61;
                come_call_finalizer3(result_61,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result60__;
                come_call_finalizer3(result_61,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

char* method_block1_02transpilec(struct __current_stack1__* parent, char* it){
void* __result_obj__;
void* right_value97;
char* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value97 = (void*)0;
                # 65 "02transpile.c"
                __result61__ = __result_obj__ = ((char*)(right_value97=xsprintf("%d %s",++(*(parent->n_52)),it)));
                right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result61__;
}

static char* list$1charph_join(struct list$1charph* self, char* sep){
void* __result_obj__;
void* right_value99;
void* right_value100;
struct buffer* buf_63;
int n_64;
char* it_67;
_Bool _if_conditional40;
void* right_value101;
char* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value99 = (void*)0;
right_value100 = (void*)0;
memset(&buf_63, 0, sizeof(struct buffer*));
memset(&n_64, 0, sizeof(int));
memset(&it_67, 0, sizeof(char*));
right_value101 = (void*)0;
                # 1022 "/usr/local/include/neo-c.h"
                buf_63=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value100=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value99=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 1022, "buffer"))))))));
                come_call_finalizer3(right_value99,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value100,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                # 1024 "/usr/local/include/neo-c.h"
                n_64=0;
                # 1035 "/usr/local/include/neo-c.h"
                for(                it_67=list$1charph_begin(self);                !list$1charph_end(self);                it_67=list$1charph_next(self)                ){
                    # 1026 "/usr/local/include/neo-c.h"
                    buffer_append_str(buf_63,it_67);
                    # 1032 "/usr/local/include/neo-c.h"
                    # 1028 "/usr/local/include/neo-c.h"
                    if(_if_conditional40=n_64<list$1charph_length(self)-1,                    _if_conditional40) {
                        # 1029 "/usr/local/include/neo-c.h"
                        buffer_append_str(buf_63,sep);
                    }
                    # 1032 "/usr/local/include/neo-c.h"
                    n_64++;
                }
                # 1035 "/usr/local/include/neo-c.h"
                __result71__ = __result_obj__ = ((char*)(right_value101=buffer_to_string(buf_63)));
                come_call_finalizer3(buf_63,buffer_finalize, 0, 0, 0, 0, (void*)0);
                right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result71__;
                come_call_finalizer3(buf_63,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional35;
char* result_65;
char* __result62__;
_Bool _if_conditional36;
char* __result63__;
char* result_66;
char* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_65, 0, sizeof(char*));
memset(&result_66, 0, sizeof(char*));
                    # 281 "/usr/local/include/neo-c.h"
                    # 276 "/usr/local/include/neo-c.h"
                    if(_if_conditional35=self==((void*)0),                    _if_conditional35) {
                        # 277 "/usr/local/include/neo-c.h"
                        # 278 "/usr/local/include/neo-c.h"
                        memset(&result_65,0,sizeof(char*));
                        # 279 "/usr/local/include/neo-c.h"
                        __result62__ = __result_obj__ = result_65;
                        return __result62__;
                    }
                    # 281 "/usr/local/include/neo-c.h"
                    self->it=self->head;
                    # 287 "/usr/local/include/neo-c.h"
                    # 283 "/usr/local/include/neo-c.h"
                    if(self->it) {
                        # 284 "/usr/local/include/neo-c.h"
                        __result63__ = __result_obj__ = self->it->item;
                        return __result63__;
                    }
                    # 287 "/usr/local/include/neo-c.h"
                    # 288 "/usr/local/include/neo-c.h"
                    memset(&result_66,0,sizeof(char*));
                    # 289 "/usr/local/include/neo-c.h"
                    __result64__ = __result_obj__ = result_66;
                    return __result64__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result65__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 311 "/usr/local/include/neo-c.h"
                    __result65__ = self==((void*)0)||self->it==((void*)0);
                    return __result65__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional37;
char* result_68;
char* __result66__;
_Bool _if_conditional38;
char* __result67__;
char* result_69;
char* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_68, 0, sizeof(char*));
memset(&result_69, 0, sizeof(char*));
                    # 299 "/usr/local/include/neo-c.h"
                    # 293 "/usr/local/include/neo-c.h"
                    if(_if_conditional37=self==((void*)0)||self->it==((void*)0),                    _if_conditional37) {
                        # 294 "/usr/local/include/neo-c.h"
                        # 295 "/usr/local/include/neo-c.h"
                        memset(&result_68,0,sizeof(char*));
                        # 296 "/usr/local/include/neo-c.h"
                        __result66__ = __result_obj__ = result_68;
                        return __result66__;
                    }
                    # 299 "/usr/local/include/neo-c.h"
                    self->it=self->it->next;
                    # 305 "/usr/local/include/neo-c.h"
                    # 301 "/usr/local/include/neo-c.h"
                    if(self->it) {
                        # 302 "/usr/local/include/neo-c.h"
                        __result67__ = __result_obj__ = self->it->item;
                        return __result67__;
                    }
                    # 305 "/usr/local/include/neo-c.h"
                    # 306 "/usr/local/include/neo-c.h"
                    memset(&result_69,0,sizeof(char*));
                    # 307 "/usr/local/include/neo-c.h"
                    __result68__ = __result_obj__ = result_69;
                    return __result68__;
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional39;
int __result69__;
int __result70__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 354 "/usr/local/include/neo-c.h"
                        # 351 "/usr/local/include/neo-c.h"
                        if(_if_conditional39=self==((void*)0),                        _if_conditional39) {
                            # 352 "/usr/local/include/neo-c.h"
                            __result69__ = 0;
                            return __result69__;
                        }
                        # 354 "/usr/local/include/neo-c.h"
                        __result70__ = self->len;
                        return __result70__;
}

static void va_list_finalize(va_list self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

int transpile_v2(struct sInfo* info){
void* __result_obj__;
int __result72__;
memset(&__result_obj__, 0, sizeof(void*));
    # 73 "02transpile.c"
    __result72__ = 0;
    return __result72__;
}

_Bool output_source_file_v2(struct sInfo* info){
void* __result_obj__;
void* right_value104;
char* output_file_name_70;
void* right_value105;
_Bool __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value104 = (void*)0;
memset(&output_file_name_70, 0, sizeof(char*));
right_value105 = (void*)0;
    # 78 "02transpile.c"
    output_file_name_70=(char*)come_increment_ref_count(((char*)(right_value104=xsprintf("%s.c",info->sname))));
    right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 82 "02transpile.c"
    string_write(((char*)(right_value105=__builtin_string("int main(int argc, char** argv) { return 0; }\n"))),output_file_name_70,(_Bool)0);
    right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 84 "02transpile.c"
    __result73__ = (_Bool)1;
    output_file_name_70 = come_decrement_ref_count2(output_file_name_70, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result73__;
    output_file_name_70 = come_decrement_ref_count2(output_file_name_70, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void clear_tmp_file(struct sInfo* info){
void* __result_obj__;
char* input_file_name_71;
void* right_value106;
void* right_value107;
memset(&__result_obj__, 0, sizeof(void*));
memset(&input_file_name_71, 0, sizeof(char*));
right_value106 = (void*)0;
right_value107 = (void*)0;
    # 89 "02transpile.c"
    input_file_name_71=(char*)come_increment_ref_count(info->sname);
    # 91 "02transpile.c"
    system(((char*)(right_value107=xsprintf("rm -f \%s.*",((char*)(right_value106=string_to_string(input_file_name_71)))))));
    right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    input_file_name_71 = come_decrement_ref_count2(input_file_name_71, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static _Bool cpp(struct sInfo* info){
void* __result_obj__;
char* input_file_name_72;
char* output_file_name_73;
_Bool _if_conditional41;
void* right_value108;
char* __dec_obj17;
void* right_value109;
char* __dec_obj18;
void* right_value110;
char* cmd_74;
_Bool exist_common_h_75;
struct __sFILE* f_76;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
int rc_77;
_Bool _if_conditional46;
void* right_value111;
void* right_value112;
char* cmd2_78;
_Bool _if_conditional47;
int rc_79;
_Bool _if_conditional48;
void* right_value113;
char* command2_80;
_Bool _if_conditional49;
void* right_value114;
void* right_value115;
char* cmd3_81;
_Bool _if_conditional50;
int rc_82;
void* right_value116;
char* command2_83;
_Bool _if_conditional51;
_Bool _if_conditional52;
void* right_value117;
void* right_value118;
char* cmd4_84;
void* right_value119;
char* command_85;
_Bool _if_conditional53;
void* right_value120;
char* command2_86;
_Bool _if_conditional54;
_Bool _if_conditional55;
_Bool __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&input_file_name_72, 0, sizeof(char*));
memset(&output_file_name_73, 0, sizeof(char*));
right_value108 = (void*)0;
right_value109 = (void*)0;
right_value110 = (void*)0;
memset(&cmd_74, 0, sizeof(char*));
memset(&exist_common_h_75, 0, sizeof(_Bool));
memset(&f_76, 0, sizeof(struct __sFILE*));
memset(&rc_77, 0, sizeof(int));
right_value111 = (void*)0;
right_value112 = (void*)0;
memset(&cmd2_78, 0, sizeof(char*));
memset(&rc_79, 0, sizeof(int));
right_value113 = (void*)0;
memset(&command2_80, 0, sizeof(char*));
right_value114 = (void*)0;
right_value115 = (void*)0;
memset(&cmd3_81, 0, sizeof(char*));
memset(&rc_82, 0, sizeof(int));
right_value116 = (void*)0;
memset(&command2_83, 0, sizeof(char*));
right_value117 = (void*)0;
right_value118 = (void*)0;
memset(&cmd4_84, 0, sizeof(char*));
right_value119 = (void*)0;
memset(&command_85, 0, sizeof(char*));
right_value120 = (void*)0;
memset(&command2_86, 0, sizeof(char*));
    # 96 "02transpile.c"
    input_file_name_72=(char*)come_increment_ref_count(info->sname);
    # 98 "02transpile.c"
    # 106 "02transpile.c"
    # 99 "02transpile.c"
    if(_if_conditional41=!info->output_header_file&&info->output_file_name,    _if_conditional41) {
        # 100 "02transpile.c"
        __dec_obj17=output_file_name_73;
        output_file_name_73=(char*)come_increment_ref_count(((char*)(right_value108=string_operator_add(info->output_file_name,".i"))));
        __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        # 103 "02transpile.c"
        __dec_obj18=output_file_name_73;
        output_file_name_73=(char*)come_increment_ref_count(((char*)(right_value109=string_operator_add(info->sname,".i"))));
        __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 106 "02transpile.c"
    cmd_74=(char*)come_increment_ref_count(((char*)(right_value110=xsprintf("uname -a | grep Darwin 1> /dev/null 2>/dev/null"))));
    right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 108 "02transpile.c"
    exist_common_h_75=(_Bool)0;
    # 122 "02transpile.c"
    {
        # 110 "02transpile.c"
        f_76=fopen("common.h","r");
        # 114 "02transpile.c"
        # 111 "02transpile.c"
        if(f_76) {
            # 112 "02transpile.c"
            exist_common_h_75=(_Bool)1;
        }
        # 117 "02transpile.c"
        # 114 "02transpile.c"
        if(_if_conditional43=string_operator_equals(info->output_file_name,"common.h"),        _if_conditional43) {
            # 115 "02transpile.c"
            exist_common_h_75=(_Bool)0;
        }
        # 120 "02transpile.c"
        # 117 "02transpile.c"
        if(f_76) {
            # 118 "02transpile.c"
            fclose(f_76);
        }
    }
    # 127 "02transpile.c"
    # 122 "02transpile.c"
    if(_if_conditional45=!gCommonHeader,    _if_conditional45) {
        # 123 "02transpile.c"
        exist_common_h_75=(_Bool)0;
    }
    # 127 "02transpile.c"
    rc_77=system(cmd_74);
    # 176 "02transpile.c"
    # 128 "02transpile.c"
    if(_if_conditional46=rc_77==0,    _if_conditional46) {
        # 129 "02transpile.c"
        cmd2_78=(char*)come_increment_ref_count(((char*)(right_value112=xsprintf("gcc -E -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DCOMELANG2 -D__DARWIN_ARM__ -I/opt/homebrew/opt/pcre/include -I/opt/homebrew/opt/boehmgc/include/ -U__GNUC__ %s %s > %s 2> %s.cpp.out",info->cpp_option,"/usr/local/","/usr/local/",exist_common_h_75?((char*)(right_value111=__builtin_string(" -include common.h "))):"",input_file_name_72,output_file_name_73,output_file_name_73))));
        right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 131 "02transpile.c"
        # 131 "02transpile.c"
        if(info->verbose) {
            # 131 "02transpile.c"
            puts(cmd2_78);
        }
        # 133 "02transpile.c"
        rc_79=system(cmd2_78);
        # 140 "02transpile.c"
        # 135 "02transpile.c"
        if(_if_conditional48=rc_79!=0,        _if_conditional48) {
            # 136 "02transpile.c"
            printf("failed to cpp(2) (%s)\n",cmd2_78);
            # 137 "02transpile.c"
            exit(5);
        }
        # 140 "02transpile.c"
        command2_80=(char*)come_increment_ref_count(((char*)(right_value113=xsprintf("grep error\\: %s.cpp.out",output_file_name_73))));
        right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 142 "02transpile.c"
        # 142 "02transpile.c"
        if(info->verbose) {
            # 142 "02transpile.c"
            puts(command2_80);
        }
        # 143 "02transpile.c"
        (void)system(command2_80);
        cmd2_78 = come_decrement_ref_count2(cmd2_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_80 = come_decrement_ref_count2(command2_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 147 "02transpile.c"
        cmd3_81=(char*)come_increment_ref_count(((char*)(right_value115=xsprintf("cpp -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DCOMELANG2 -U__GNUC__ %s %s > %s 2> %s.cpp.out",info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",exist_common_h_75?((char*)(right_value114=__builtin_string(" -include common.h "))):"",input_file_name_72,output_file_name_73,output_file_name_73))));
        right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 149 "02transpile.c"
        # 149 "02transpile.c"
        if(info->verbose) {
            # 149 "02transpile.c"
            puts(cmd3_81);
        }
        # 150 "02transpile.c"
        rc_82=system(cmd3_81);
        # 152 "02transpile.c"
        command2_83=(char*)come_increment_ref_count(((char*)(right_value116=xsprintf("grep error\\: %s.cpp.out",output_file_name_73))));
        right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 154 "02transpile.c"
        # 154 "02transpile.c"
        if(info->verbose) {
            # 154 "02transpile.c"
            puts(command2_83);
        }
        # 155 "02transpile.c"
        (void)system(command2_83);
        # 174 "02transpile.c"
        # 157 "02transpile.c"
        if(_if_conditional52=rc_82!=0,        _if_conditional52) {
            # 158 "02transpile.c"
            cmd4_84=(char*)come_increment_ref_count(((char*)(right_value118=xsprintf("cpp -I. %s -DPREFIX=%s -I%s/include -C %s %s > %s 2> %s.cpp.out",info->cpp_option,"/usr/local/","/usr/local/",exist_common_h_75?((char*)(right_value117=__builtin_string(" -include common.h "))):"",input_file_name_72,output_file_name_73,output_file_name_73))));
            right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 159 "02transpile.c"
            command_85=(char*)come_increment_ref_count(((char*)(right_value119=xsprintf("clang -o %s -c %s %s >> %s.out 2>&1",output_file_name_73,input_file_name_72,info->clang_option,input_file_name_72))));
            right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 161 "02transpile.c"
            # 161 "02transpile.c"
            if(info->verbose) {
                # 161 "02transpile.c"
                puts(cmd4_84);
            }
            # 162 "02transpile.c"
            rc_82=system(cmd4_84);
            # 164 "02transpile.c"
            command2_86=(char*)come_increment_ref_count(((char*)(right_value120=xsprintf("grep error\\: %s.cpp.out",output_file_name_73))));
            right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 166 "02transpile.c"
            # 166 "02transpile.c"
            if(info->verbose) {
                # 166 "02transpile.c"
                puts(command2_86);
            }
            # 167 "02transpile.c"
            (void)system(command2_86);
            # 173 "02transpile.c"
            # 169 "02transpile.c"
            if(_if_conditional55=rc_82!=0,            _if_conditional55) {
                # 170 "02transpile.c"
                printf("failed to cpp(2) (%s)\n",cmd4_84);
                # 171 "02transpile.c"
                exit(5);
            }
            cmd4_84 = come_decrement_ref_count2(cmd4_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            command_85 = come_decrement_ref_count2(command_85, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            command2_86 = come_decrement_ref_count2(command2_86, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        cmd3_81 = come_decrement_ref_count2(cmd3_81, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_83 = come_decrement_ref_count2(command2_83, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 176 "02transpile.c"
    __result74__ = (_Bool)1;
    input_file_name_72 = come_decrement_ref_count2(input_file_name_72, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_73 = come_decrement_ref_count2(output_file_name_73, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cmd_74 = come_decrement_ref_count2(cmd_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result74__;
    input_file_name_72 = come_decrement_ref_count2(input_file_name_72, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_73 = come_decrement_ref_count2(output_file_name_73, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cmd_74 = come_decrement_ref_count2(cmd_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1charph* object_files){
void* __result_obj__;
void* right_value121;
char* input_file_name_87;
char* output_file_name_88;
_Bool _if_conditional56;
void* right_value122;
char* __dec_obj19;
void* right_value123;
char* __dec_obj20;
void* right_value124;
char* command_89;
_Bool _if_conditional57;
int rc_90;
void* right_value125;
char* command2_91;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool __result75__;
_Bool _if_conditional60;
void* right_value126;
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
right_value121 = (void*)0;
memset(&input_file_name_87, 0, sizeof(char*));
memset(&output_file_name_88, 0, sizeof(char*));
right_value122 = (void*)0;
right_value123 = (void*)0;
right_value124 = (void*)0;
memset(&command_89, 0, sizeof(char*));
memset(&rc_90, 0, sizeof(int));
right_value125 = (void*)0;
memset(&command2_91, 0, sizeof(char*));
right_value126 = (void*)0;
    # 181 "02transpile.c"
    input_file_name_87=(char*)come_increment_ref_count(((char*)(right_value121=string_operator_add(info->sname,".c"))));
    right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 183 "02transpile.c"
    output_file_name_88=((void*)0);
    # 191 "02transpile.c"
    # 184 "02transpile.c"
    if(_if_conditional56=info->output_file_name&&output_object_file,    _if_conditional56) {
        # 185 "02transpile.c"
        __dec_obj19=output_file_name_88;
        output_file_name_88=(char*)come_increment_ref_count(((char*)(right_value122=__builtin_string(info->output_file_name))));
        __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        # 188 "02transpile.c"
        __dec_obj20=output_file_name_88;
        output_file_name_88=(char*)come_increment_ref_count(((char*)(right_value123=string_operator_add(info->sname,".o"))));
        __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 191 "02transpile.c"
    command_89=(char*)come_increment_ref_count(((char*)(right_value124=xsprintf("clang -o %s -c %s %s >> %s.out 2>&1",output_file_name_88,input_file_name_87,info->clang_option,input_file_name_87))));
    right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 193 "02transpile.c"
    # 193 "02transpile.c"
    if(info->verbose) {
        # 193 "02transpile.c"
        puts(command_89);
    }
    # 194 "02transpile.c"
    rc_90=system(command_89);
    # 196 "02transpile.c"
    command2_91=(char*)come_increment_ref_count(((char*)(right_value125=xsprintf("grep error\\: %s.out",input_file_name_87))));
    right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 198 "02transpile.c"
    # 198 "02transpile.c"
    if(info->verbose) {
        # 198 "02transpile.c"
        puts(command2_91);
    }
    # 199 "02transpile.c"
    (void)system(command2_91);
    # 206 "02transpile.c"
    # 201 "02transpile.c"
    if(_if_conditional59=rc_90!=0,    _if_conditional59) {
        # 202 "02transpile.c"
        printf("%s %d: clang is faild\n",info->sname,info->sline);
        # 203 "02transpile.c"
        __result75__ = (_Bool)0;
        input_file_name_87 = come_decrement_ref_count2(input_file_name_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        output_file_name_88 = come_decrement_ref_count2(output_file_name_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command_89 = come_decrement_ref_count2(command_89, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_91 = come_decrement_ref_count2(command2_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result75__;
    }
    # 210 "02transpile.c"
    # 206 "02transpile.c"
    if(_if_conditional60=!output_object_file,    _if_conditional60) {
        # 207 "02transpile.c"
        list$1charph_push_back(object_files,(char*)come_increment_ref_count(((char*)(right_value126=__builtin_string(output_file_name_88)))));
        right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 210 "02transpile.c"
    __result76__ = (_Bool)1;
    input_file_name_87 = come_decrement_ref_count2(input_file_name_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_88 = come_decrement_ref_count2(output_file_name_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command_89 = come_decrement_ref_count2(command_89, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command2_91 = come_decrement_ref_count2(command2_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result76__;
    input_file_name_87 = come_decrement_ref_count2(input_file_name_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_88 = come_decrement_ref_count2(output_file_name_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command_89 = come_decrement_ref_count2(command_89, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command2_91 = come_decrement_ref_count2(command2_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static _Bool linker(struct sInfo* info, struct list$1charph* object_files){
void* __result_obj__;
char* output_file_name_92;
_Bool _if_conditional61;
void* right_value127;
char* __dec_obj21;
void* right_value128;
char* __dec_obj22;
void* right_value129;
void* right_value130;
struct buffer* command_93;
void* right_value131;
struct list$1charph* o2_saved_94;
char* it_95;
void* right_value132;
_Bool _if_conditional62;
void* right_value133;
char* cmd_96;
int rc_97;
_Bool _if_conditional63;
void* right_value134;
_Bool _if_conditional64;
void* right_value135;
_Bool _if_conditional65;
void* right_value136;
void* right_value137;
_Bool _if_conditional66;
_Bool __result77__;
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&output_file_name_92, 0, sizeof(char*));
right_value127 = (void*)0;
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
memset(&command_93, 0, sizeof(struct buffer*));
right_value131 = (void*)0;
memset(&o2_saved_94, 0, sizeof(struct list$1charph*));
memset(&it_95, 0, sizeof(char*));
right_value132 = (void*)0;
right_value133 = (void*)0;
memset(&cmd_96, 0, sizeof(char*));
memset(&rc_97, 0, sizeof(int));
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value136 = (void*)0;
right_value137 = (void*)0;
    # 215 "02transpile.c"
    output_file_name_92=((void*)0);
    # 223 "02transpile.c"
    # 216 "02transpile.c"
    if(info->output_file_name) {
        # 217 "02transpile.c"
        __dec_obj21=output_file_name_92;
        output_file_name_92=(char*)come_increment_ref_count(((char*)(right_value127=__builtin_string(info->output_file_name))));
        __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        # 220 "02transpile.c"
        __dec_obj22=output_file_name_92;
        output_file_name_92=(char*)come_increment_ref_count(((char*)(right_value128=xnoextname(info->sname))));
        __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 223 "02transpile.c"
    command_93=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value130=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value129=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 223, "buffer"))))))));
    come_call_finalizer3(right_value129,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value130,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 225 "02transpile.c"
    buffer_append_str(command_93,((char*)(right_value131=xsprintf("clang -o %s -L%s/lib -L%s/lib ",output_file_name_92,getenv("HOME"),"/usr/local/"))));
    right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 231 "02transpile.c"
    for(    o2_saved_94=(object_files),it_95=list$1charph_begin((o2_saved_94));    !list$1charph_end((o2_saved_94));    it_95=list$1charph_next((o2_saved_94))    ){
        # 228 "02transpile.c"
        buffer_append_str(command_93,((char*)(right_value132=xsprintf("%s ",it_95))));
        right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 237 "02transpile.c"
    # 231 "02transpile.c"
    if(gComeGC) {
        # 232 "02transpile.c"
        buffer_append_str(command_93,"-L/usr/local/lib -lneo-c-gc ");
    }
    else {
        # 235 "02transpile.c"
        buffer_append_str(command_93,"-L/usr/local/lib -lneo-c ");
    }
    # 237 "02transpile.c"
    cmd_96=(char*)come_increment_ref_count(((char*)(right_value133=xsprintf("which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null"))));
    right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 239 "02transpile.c"
    rc_97=system(cmd_96);
    # 243 "02transpile.c"
    # 240 "02transpile.c"
    if(_if_conditional63=rc_97==0,    _if_conditional63) {
        # 241 "02transpile.c"
        buffer_append_str(command_93," -L/opt/homebrew/opt/pcre/lib ");
    }
    # 243 "02transpile.c"
    buffer_append_str(command_93,((char*)(right_value134=xsprintf(" %s ",info->clang_option))));
    right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 249 "02transpile.c"
    # 245 "02transpile.c"
    if(gComeGC) {
        # 246 "02transpile.c"
        buffer_append_str(command_93,((char*)(right_value135=xsprintf(" -L/opt/homebrew/opt/boehmgc/lib -lgc "))));
        right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 249 "02transpile.c"
    # 249 "02transpile.c"
    if(info->verbose) {
        # 249 "02transpile.c"
        puts(((char*)(right_value136=buffer_to_string(command_93))));
        right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 250 "02transpile.c"
    rc_97=system(((char*)(right_value137=buffer_to_string(command_93))));
    right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 257 "02transpile.c"
    # 252 "02transpile.c"
    if(_if_conditional66=rc_97!=0,    _if_conditional66) {
        # 253 "02transpile.c"
        printf("%s %d: clang is faild\n",info->sname,info->sline);
        # 254 "02transpile.c"
        __result77__ = (_Bool)0;
        output_file_name_92 = come_decrement_ref_count2(output_file_name_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(command_93,buffer_finalize, 0, 0, 0, 0, (void*)0);
        cmd_96 = come_decrement_ref_count2(cmd_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result77__;
    }
    # 257 "02transpile.c"
    __result78__ = (_Bool)1;
    output_file_name_92 = come_decrement_ref_count2(output_file_name_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(command_93,buffer_finalize, 0, 0, 0, 0, (void*)0);
    cmd_96 = come_decrement_ref_count2(cmd_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result78__;
    output_file_name_92 = come_decrement_ref_count2(output_file_name_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(command_93,buffer_finalize, 0, 0, 0, 0, (void*)0);
    cmd_96 = come_decrement_ref_count2(cmd_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool new_project(int argc, char** argv){
void* __result_obj__;
void* right_value138;
char* project_name_98;
void* right_value139;
void* right_value140;
void* right_value141;
char* project_name_debug_99;
void* right_value142;
char* cc_100;
void* right_value143;
char* install_101;
void* right_value144;
char* libs_102;
void* right_value145;
char* os_103;
void* right_value146;
char* prefix_104;
void* right_value147;
char* cflags_105;
void* right_value148;
char* cflags_debug_106;
_Bool _or_conditional1;
_Bool __exception_result_var_b1;
void* right_value149;
void* right_value150;
void* right_value151;
void* right_value152;
void* right_value153;
void* right_value154;
void* right_value155;
void* right_value156;
void* right_value157;
void* right_value158;
void* right_value159;
void* right_value160;
void* right_value161;
void* right_value162;
void* right_value163;
void* right_value164;
void* right_value165;
void* right_value166;
void* right_value167;
void* right_value168;
void* right_value169;
void* right_value170;
void* right_value171;
void* right_value172;
void* right_value173;
void* right_value174;
void* right_value175;
void* right_value176;
void* right_value177;
_Bool __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value138 = (void*)0;
memset(&project_name_98, 0, sizeof(char*));
right_value139 = (void*)0;
right_value140 = (void*)0;
right_value141 = (void*)0;
memset(&project_name_debug_99, 0, sizeof(char*));
right_value142 = (void*)0;
memset(&cc_100, 0, sizeof(char*));
right_value143 = (void*)0;
memset(&install_101, 0, sizeof(char*));
right_value144 = (void*)0;
memset(&libs_102, 0, sizeof(char*));
right_value145 = (void*)0;
memset(&os_103, 0, sizeof(char*));
right_value146 = (void*)0;
memset(&prefix_104, 0, sizeof(char*));
right_value147 = (void*)0;
memset(&cflags_105, 0, sizeof(char*));
right_value148 = (void*)0;
memset(&cflags_debug_106, 0, sizeof(char*));
right_value149 = (void*)0;
right_value150 = (void*)0;
right_value151 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
right_value155 = (void*)0;
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
right_value161 = (void*)0;
right_value162 = (void*)0;
right_value163 = (void*)0;
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
right_value168 = (void*)0;
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value171 = (void*)0;
right_value172 = (void*)0;
right_value173 = (void*)0;
right_value174 = (void*)0;
right_value175 = (void*)0;
right_value176 = (void*)0;
right_value177 = (void*)0;
    # 262 "02transpile.c"
    project_name_98=(char*)come_increment_ref_count(((char*)(right_value138=__builtin_string(argv[2]))));
    right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 263 "02transpile.c"
    project_name_debug_99=(char*)come_increment_ref_count(((char*)(right_value141=string_operator_add(((char*)(right_value139=__builtin_string(argv[2]))),((char*)(right_value140=__builtin_string("-debug")))))));
    right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 264 "02transpile.c"
    cc_100=(char*)come_increment_ref_count(((char*)(right_value142=__builtin_string("neo-c"))));
    right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 265 "02transpile.c"
    install_101=(char*)come_increment_ref_count(((char*)(right_value143=__builtin_string("install"))));
    right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 266 "02transpile.c"
    libs_102=(char*)come_increment_ref_count(((char*)(right_value144=__builtin_string("-lpcre"))));
    right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 267 "02transpile.c"
    os_103=(char*)come_increment_ref_count(((char*)(right_value145=__builtin_string("linux"))));
    right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 268 "02transpile.c"
    prefix_104=(char*)come_increment_ref_count(((char*)(right_value146=__builtin_string("/usr/local/"))));
    right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 269 "02transpile.c"
    cflags_105=(char*)come_increment_ref_count(((char*)(right_value147=__builtin_string(" -common-header -O2 "))));
    right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 270 "02transpile.c"
    cflags_debug_106=(char*)come_increment_ref_count(((char*)(right_value148=__builtin_string(" -common-header -gdwarf-4 -cg "))));
    right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 272 "02transpile.c"
    if(_or_conditional1=mkdir(project_name_98,448|56|4|1),    _or_conditional1 != 0) {
        # 272 "02transpile.c"
        (come_push_stackframe("02transpile.c", 272, 0),__exception_result_var_b1=die("mkdir error"), come_pop_stackframe(), __exception_result_var_b1);
    }
    # 366 "02transpile.c"
    charp_write(((char*)(right_value175=xsprintf("\#########################################\n\# istalled directories\n\#########################################\nprefix=\%s\nexec_prefix=${prefix}\nbindir=${exec_prefix}/bin\ndatadir=${datarootdir}\nmandir=${datarootdir}/man\nsharedstatedir=${prefix}/\%s\nsysconfdir=${prefix}/etc/\%s\nincludedir=${prefix}/include/\%s\ndatarootdir=${prefix}/share/\%s\ndocdir=${datarootdir}/doc\nlibdir=${exec_prefix}/lib\n\n\#########################################\n\# environmnet variables\n\#########################################\nCC=\%s\nINSTALL=\%s\nCFLAGS=\%s\nCFLAGS_DEBUG=\%s\nLIBS=\%s\nOS=\%s\nDESTDIR=\%s\nSRCS=$(wildcard *.c)\nSINGLE_SRCS=$(filter-out %%.c.c, $(SRCS))\nOBJS=$(SINGLE_SRCS:.c=.o)\nDEBUG_OBJS=$(SINGLE_SRCS:.c=.debug.o)\nTARGET=\%s\nTARGET_DEBUG=\%s\n\n\#########################################\n\# main\n\#########################################\nall: $(TARGET)\n\n$(TARGET): $(OBJS)\n\t$(CC) $(CFLAGS) $^ -o $@\n\n$(TARGET_DEBUG): $(DEBUG_OBJS)\n\t$(CC) $(CFLAGS_DEBUG) $^ -o $@\n\n%%.o: %%.c\n\t$(CC) $(CFLAGS) -c $< -o $@\n\n%%.debug.o: %%.c\n\t$(CC) $(CFLAGS_DEBUG) -c $< -o $@\n\n\#########################################\n\# header\n\#########################################\n\nheader: common.h\n\ncommon.h: $(SINGLE_SRCS)\n\tneo-c header -common-header $(SINGLE_SRCS)\n\n\#########################################\n\# install\n\#########################################\ninstall:\n\tmkdir -p \"$(DESTDIR)/bin\"\n\t$(INSTALL) -m 755 ./\%s \"$(DESTDIR)/bin\"\n\tmkdir -p \"$(DESTDIR)/include\"\n\tmkdir -p \"$(DESTDIR)/lib\"\n\tmkdir -p \"$(DESTDIR)/share/doc/\%s\"\n\t$(INSTALL) -m 644 README.md \"$(DESTDIR)/share/doc/\%s/README.md\"\n\n\#########################################\n\# clean\n\#########################################\nclean:\n\trm -fR *.o *.c.i *.c.out *.c.c \%s *.log *.out common.h \%s\n\n\#########################################\n\# uninstall\n\#########################################\nuninstall:\n\trm -f \"$(DESTDIR)\"/bin/\%s\n\trm -f \"$(DESTDIR)/share/doc/\%s/README.md\"\n\nrun: \%s\n\trm -f *.log\n\t./\%s\n\ncompile: \%s\n\ndebug: \%s\n\trm -f *.log\n\t./\%s\n",((char*)(right_value149=string_to_string(prefix_104))),((char*)(right_value150=string_to_string(project_name_98))),((char*)(right_value151=string_to_string(project_name_98))),((char*)(right_value152=string_to_string(project_name_98))),((char*)(right_value153=string_to_string(project_name_98))),((char*)(right_value154=string_to_string(cc_100))),((char*)(right_value155=string_to_string(install_101))),((char*)(right_value156=string_to_string(cflags_105))),((char*)(right_value157=string_to_string(cflags_debug_106))),((char*)(right_value158=string_to_string(libs_102))),((char*)(right_value159=string_to_string(os_103))),((char*)(right_value160=string_to_string(prefix_104))),((char*)(right_value161=string_to_string(project_name_98))),((char*)(right_value162=string_to_string(project_name_debug_99))),((char*)(right_value163=string_to_string(project_name_98))),((char*)(right_value164=string_to_string(project_name_98))),((char*)(right_value165=string_to_string(project_name_98))),((char*)(right_value166=string_to_string(project_name_98))),((char*)(right_value167=string_to_string(project_name_debug_99))),((char*)(right_value168=string_to_string(project_name_98))),((char*)(right_value169=string_to_string(project_name_98))),((char*)(right_value170=string_to_string(project_name_98))),((char*)(right_value171=string_to_string(project_name_98))),((char*)(right_value172=string_to_string(project_name_98))),((char*)(right_value173=string_to_string(project_name_debug_99))),((char*)(right_value174=string_to_string(project_name_debug_99)))))),((char*)(right_value177=xsprintf("\%s/Makefile",((char*)(right_value176=string_to_string(project_name_98)))))),(_Bool)0);
    right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 368 "02transpile.c"
    __result79__ = (_Bool)1;
    project_name_98 = come_decrement_ref_count2(project_name_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    project_name_debug_99 = come_decrement_ref_count2(project_name_debug_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cc_100 = come_decrement_ref_count2(cc_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    install_101 = come_decrement_ref_count2(install_101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    libs_102 = come_decrement_ref_count2(libs_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    os_103 = come_decrement_ref_count2(os_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    prefix_104 = come_decrement_ref_count2(prefix_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_105 = come_decrement_ref_count2(cflags_105, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_debug_106 = come_decrement_ref_count2(cflags_debug_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result79__;
    project_name_98 = come_decrement_ref_count2(project_name_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    project_name_debug_99 = come_decrement_ref_count2(project_name_debug_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cc_100 = come_decrement_ref_count2(cc_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    install_101 = come_decrement_ref_count2(install_101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    libs_102 = come_decrement_ref_count2(libs_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    os_103 = come_decrement_ref_count2(os_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    prefix_104 = come_decrement_ref_count2(prefix_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_105 = come_decrement_ref_count2(cflags_105, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_debug_106 = come_decrement_ref_count2(cflags_debug_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool run_project(int argc, char** argv){
void* __result_obj__;
_Bool _or_conditional2;
_Bool __exception_result_var_b2;
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
    # 373 "02transpile.c"
    if(_or_conditional2=system("make run"),    _or_conditional2 != 0) {
        # 373 "02transpile.c"
        (come_push_stackframe("02transpile.c", 373, 1),__exception_result_var_b2=die("system"), come_pop_stackframe(), __exception_result_var_b2);
    }
    # 375 "02transpile.c"
    __result80__ = (_Bool)1;
    return __result80__;
}

_Bool make_header_project(int argc, char** argv){
void* __result_obj__;
_Bool _or_conditional3;
_Bool __exception_result_var_b3;
_Bool __result81__;
memset(&__result_obj__, 0, sizeof(void*));
    # 380 "02transpile.c"
    if(_or_conditional3=system("make header"),    _or_conditional3 != 0) {
        # 380 "02transpile.c"
        (come_push_stackframe("02transpile.c", 380, 2),__exception_result_var_b3=die("system"), come_pop_stackframe(), __exception_result_var_b3);
    }
    # 382 "02transpile.c"
    __result81__ = (_Bool)1;
    return __result81__;
}

_Bool compile_project(int argc, char** argv){
void* __result_obj__;
_Bool _or_conditional4;
_Bool __exception_result_var_b4;
_Bool __result82__;
memset(&__result_obj__, 0, sizeof(void*));
    # 387 "02transpile.c"
    if(_or_conditional4=system("make compile"),    _or_conditional4 != 0) {
        # 387 "02transpile.c"
        (come_push_stackframe("02transpile.c", 387, 3),__exception_result_var_b4=die("system"), come_pop_stackframe(), __exception_result_var_b4);
    }
    # 389 "02transpile.c"
    __result82__ = (_Bool)1;
    return __result82__;
}

_Bool debug_run_project(int argc, char** argv){
void* __result_obj__;
_Bool _or_conditional5;
_Bool __exception_result_var_b5;
_Bool __result83__;
memset(&__result_obj__, 0, sizeof(void*));
    # 394 "02transpile.c"
    if(_or_conditional5=system("make debug"),    _or_conditional5 != 0) {
        # 394 "02transpile.c"
        (come_push_stackframe("02transpile.c", 394, 4),__exception_result_var_b5=die("system"), come_pop_stackframe(), __exception_result_var_b5);
    }
    # 396 "02transpile.c"
    __result83__ = (_Bool)1;
    return __result83__;
}

_Bool clean_project(int argc, char** argv){
void* __result_obj__;
_Bool _or_conditional6;
_Bool __exception_result_var_b6;
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
    # 401 "02transpile.c"
    if(_or_conditional6=system("make clean"),    _or_conditional6 != 0) {
        # 401 "02transpile.c"
        (come_push_stackframe("02transpile.c", 401, 5),__exception_result_var_b6=die("system"), come_pop_stackframe(), __exception_result_var_b6);
    }
    # 403 "02transpile.c"
    __result84__ = (_Bool)1;
    return __result84__;
}

_Bool install_project(int argc, char** argv, char* prefix){
void* __result_obj__;
void* right_value178;
void* right_value179;
_Bool _or_conditional7;
_Bool __exception_result_var_b7;
_Bool __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value178 = (void*)0;
right_value179 = (void*)0;
    # 408 "02transpile.c"
    if(_or_conditional7=system(((char*)(right_value179=xsprintf("make install DESTDIR=\%s",((char*)(right_value178=charp_to_string(prefix))))))),    right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
    right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
    _or_conditional7 != 0) {
        # 408 "02transpile.c"
        (come_push_stackframe("02transpile.c", 408, 6),__exception_result_var_b7=die("system"), come_pop_stackframe(), __exception_result_var_b7);
    }
    # 410 "02transpile.c"
    __result85__ = (_Bool)1;
    return __result85__;
}

static void init_classes(struct sInfo* info){
void* __result_obj__;
void* right_value186;
void* right_value187;
void* right_value188;
void* right_value189;
void* right_value190;
void* right_value191;
void* right_value192;
void* right_value193;
void* right_value194;
void* right_value195;
void* right_value196;
void* right_value197;
void* right_value198;
void* right_value199;
void* right_value200;
void* right_value201;
void* right_value202;
void* right_value203;
void* right_value204;
void* right_value205;
void* right_value206;
void* right_value207;
void* right_value208;
void* right_value209;
void* right_value210;
void* right_value211;
void* right_value212;
void* right_value213;
void* right_value214;
void* right_value215;
void* right_value216;
void* right_value217;
void* right_value218;
int i_157;
void* right_value219;
char* generics_type_158;
void* right_value220;
void* right_value221;
int i_159;
void* right_value222;
char* generics_type_160;
void* right_value223;
void* right_value224;
int rc_162;
_Bool _if_conditional137;
void* right_value225;
void* right_value226;
void* right_value227;
void* right_value228;
char* type_name_163;
void* right_value229;
void* right_value230;
struct sType* type_164;
void* right_value231;
char* __dec_obj23;
void* right_value235;
void* right_value236;
void* right_value237;
struct sClass* klass_186;
void* right_value241;
void* right_value242;
void* right_value243;
void* right_value244;
void* right_value245;
void* right_value246;
void* right_value247;
void* right_value248;
void* right_value249;
void* right_value250;
void* right_value251;
void* right_value252;
void* right_value253;
void* right_value254;
void* right_value255;
void* right_value256;
void* right_value257;
void* right_value258;
void* right_value259;
void* right_value260;
void* right_value261;
void* right_value262;
void* right_value263;
void* right_value264;
void* right_value265;
void* right_value266;
void* right_value320;
memset(&__result_obj__, 0, sizeof(void*));
right_value186 = (void*)0;
right_value187 = (void*)0;
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
right_value193 = (void*)0;
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value200 = (void*)0;
right_value201 = (void*)0;
right_value202 = (void*)0;
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
right_value210 = (void*)0;
right_value211 = (void*)0;
right_value212 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
memset(&i_157, 0, sizeof(int));
right_value219 = (void*)0;
memset(&generics_type_158, 0, sizeof(char*));
right_value220 = (void*)0;
right_value221 = (void*)0;
memset(&i_159, 0, sizeof(int));
right_value222 = (void*)0;
memset(&generics_type_160, 0, sizeof(char*));
right_value223 = (void*)0;
right_value224 = (void*)0;
memset(&rc_162, 0, sizeof(int));
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
right_value228 = (void*)0;
memset(&type_name_163, 0, sizeof(char*));
right_value229 = (void*)0;
right_value230 = (void*)0;
memset(&type_164, 0, sizeof(struct sType*));
right_value231 = (void*)0;
right_value235 = (void*)0;
right_value236 = (void*)0;
right_value237 = (void*)0;
memset(&klass_186, 0, sizeof(struct sClass*));
right_value241 = (void*)0;
right_value242 = (void*)0;
right_value243 = (void*)0;
right_value244 = (void*)0;
right_value245 = (void*)0;
right_value246 = (void*)0;
right_value247 = (void*)0;
right_value248 = (void*)0;
right_value249 = (void*)0;
right_value250 = (void*)0;
right_value251 = (void*)0;
right_value252 = (void*)0;
right_value253 = (void*)0;
right_value254 = (void*)0;
right_value255 = (void*)0;
right_value256 = (void*)0;
right_value257 = (void*)0;
right_value258 = (void*)0;
right_value259 = (void*)0;
right_value260 = (void*)0;
right_value261 = (void*)0;
right_value262 = (void*)0;
right_value263 = (void*)0;
right_value264 = (void*)0;
right_value265 = (void*)0;
right_value266 = (void*)0;
right_value320 = (void*)0;
    # 415 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value186=__builtin_string("int")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value188=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value187=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 415, "sClass")))),"int",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value187,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value188,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 416 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value189=__builtin_string("short")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value191=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value190=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 416, "sClass")))),"short",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value190,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value191,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 417 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value192=__builtin_string("long")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value194=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value193=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 417, "sClass")))),"long",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value193,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value194,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 418 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value195=__builtin_string("char")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value197=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value196=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 418, "sClass")))),"char",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value196,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value197,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 419 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value198=__builtin_string("bool")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value200=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value199=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 419, "sClass")))),"bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value199,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value200,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 420 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value201=__builtin_string("_Bool")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value203=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value202=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 420, "sClass")))),"_Bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value202,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value203,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 421 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value204=__builtin_string("void")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value206=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value205=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 421, "sClass")))),"void",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value205,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value206,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 422 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value207=__builtin_string("float")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value209=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value208=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 422, "sClass")))),"float",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)))));
    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value208,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value209,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 423 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value210=__builtin_string("double")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value212=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value211=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 423, "sClass")))),"double",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)))));
    right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value211,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value212,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 424 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value213=__builtin_string("lambda")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value215=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value214=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 424, "sClass")))),"lambda",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value214,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value215,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 425 "02transpile.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value216=__builtin_string("__uint128_t")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value218=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value217=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 425, "sClass")))),"__uint128_t",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value217,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value218,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 430 "02transpile.c"
    for(    i_157=0;    i_157<12;    i_157++    ){
        # 427 "02transpile.c"
        generics_type_158=(char*)come_increment_ref_count(((char*)(right_value219=xsprintf("generics_type%d",i_157))));
        right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 428 "02transpile.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(generics_type_158),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value221=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value220=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 428, "sClass")))),generics_type_158,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,i_157,-1,(_Bool)0,info)))));
        come_call_finalizer3(right_value220,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value221,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        generics_type_158 = come_decrement_ref_count2(generics_type_158, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 435 "02transpile.c"
    for(    i_159=0;    i_159<7;    i_159++    ){
        # 431 "02transpile.c"
        generics_type_160=(char*)come_increment_ref_count(((char*)(right_value222=xsprintf("mgenerics_type%d",i_159))));
        right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 432 "02transpile.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(generics_type_160),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value224=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value223=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 432, "sClass")))),generics_type_160,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,-1,i_159,(_Bool)0,info)))));
        come_call_finalizer3(right_value223,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value224,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        generics_type_160 = come_decrement_ref_count2(generics_type_160, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 435 "02transpile.c"
    char cmd_161[1024];
    memset(&cmd_161, 0, sizeof(char)    *(1024)    );
    # 436 "02transpile.c"
    snprintf(cmd_161,1024,"which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null");
    # 438 "02transpile.c"
    rc_162=system(cmd_161);
    # 462 "02transpile.c"
    # 439 "02transpile.c"
    if(_if_conditional137=rc_162==0,    _if_conditional137) {
        # 440 "02transpile.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value225=__builtin_string("__builtin_va_list")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value227=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value226=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 440, "sClass")))),"__builtin_va_list",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
        right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value226,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value227,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        # 442 "02transpile.c"
        type_name_163=(char*)come_increment_ref_count(((char*)(right_value228=__builtin_string("__builtin_va_list"))));
        right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 444 "02transpile.c"
        type_164=(struct sType*)come_increment_ref_count(((struct sType*)(right_value230=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value229=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 444, "sType")))),"__builtin_va_list",(_Bool)0,info))));
        come_call_finalizer3(right_value229,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value230,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 445 "02transpile.c"
        __dec_obj23=type_164->mOriginalTypeName;
        type_164->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value231=__builtin_string("__builtin_va_list"))));
        __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 447 "02transpile.c"
        map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(((char*)(right_value235=__builtin_string(type_name_163)))),(struct sType*)come_increment_ref_count(type_164));
        right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        type_name_163 = come_decrement_ref_count2(type_name_163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_164,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 452 "02transpile.c"
        klass_186=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value237=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value236=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 452, "sClass")))),"__builtin_va_list",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
        come_call_finalizer3(right_value236,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value237,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        # 454 "02transpile.c"
        list$1tuple2$2charphsTypephph_push_back(klass_186->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value245=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value241=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 454, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value242=__builtin_string("v1")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value244=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value243=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 454, "sType")))),"char*",(_Bool)0,info)))))))));
        come_call_finalizer3(right_value241,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value243,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value244,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value245,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 455 "02transpile.c"
        list$1tuple2$2charphsTypephph_push_back(klass_186->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value250=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value246=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 455, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value247=__builtin_string("v2")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value249=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value248=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 455, "sType")))),"char*",(_Bool)0,info)))))))));
        come_call_finalizer3(right_value246,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value248,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value249,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value250,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 456 "02transpile.c"
        list$1tuple2$2charphsTypephph_push_back(klass_186->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value255=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value251=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 456, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value252=__builtin_string("v3")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value254=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value253=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 456, "sType")))),"char*",(_Bool)0,info)))))))));
        come_call_finalizer3(right_value251,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value253,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value254,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value255,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 457 "02transpile.c"
        list$1tuple2$2charphsTypephph_push_back(klass_186->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value260=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value256=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 457, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value257=__builtin_string("v4")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value259=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value258=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 457, "sType")))),"int",(_Bool)0,info)))))))));
        come_call_finalizer3(right_value256,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value258,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value259,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value260,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 458 "02transpile.c"
        list$1tuple2$2charphsTypephph_push_back(klass_186->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value265=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value261=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 458, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value262=__builtin_string("v5")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value264=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value263=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 458, "sType")))),"int",(_Bool)0,info)))))))));
        come_call_finalizer3(right_value261,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value263,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value264,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value265,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 460 "02transpile.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value266=__builtin_string("__builtin_va_list")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value320=sClass_clone(klass_186)))));
        right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value320,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(klass_186,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional67;
unsigned int hash_130;
unsigned int it_131;
_Bool _while_condtional15;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool same_key_exist_148;
char* it2_151;
_Bool _if_conditional133;
_Bool _if_conditional134;
struct map$2charphsClassph* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_130, 0, sizeof(unsigned int));
memset(&it_131, 0, sizeof(unsigned int));
memset(&same_key_exist_148, 0, sizeof(_Bool));
memset(&it2_151, 0, sizeof(char*));
        # 1368 "/usr/local/include/neo-c.h"
        # 1365 "/usr/local/include/neo-c.h"
        if(_if_conditional67=self->len*10>=self->size,        _if_conditional67) {
            # 1366 "/usr/local/include/neo-c.h"
            map$2charphsClassph_rehash(self);
        }
        # 1368 "/usr/local/include/neo-c.h"
        hash_130=string_get_hash_key(key)%self->size;
        # 1369 "/usr/local/include/neo-c.h"
        it_131=hash_130;
        # 1427 "/usr/local/include/neo-c.h"
        while(_while_condtional15=(_Bool)1,        _while_condtional15) {
            # 1425 "/usr/local/include/neo-c.h"
            # 1372 "/usr/local/include/neo-c.h"
            if(_if_conditional102=self->item_existance[it_131],            _if_conditional102) {
                # 1395 "/usr/local/include/neo-c.h"
                # 1374 "/usr/local/include/neo-c.h"
                if(_if_conditional103=string_equals(self->keys[it_131],key),                _if_conditional103) {
                    # 1385 "/usr/local/include/neo-c.h"
                    # 1376 "/usr/local/include/neo-c.h"
                    if(_if_conditional104=1,                    _if_conditional104) {
                        # 1377 "/usr/local/include/neo-c.h"
                        list$1charp_remove(self->key_list,self->keys[it_131]);
                        # 1378 "/usr/local/include/neo-c.h"
                        self->keys[it_131] = come_decrement_ref_count2(self->keys[it_131], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        # 1379 "/usr/local/include/neo-c.h"
                        self->keys[it_131]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1382 "/usr/local/include/neo-c.h"
                        list$1charp_remove(self->key_list,self->keys[it_131]);
                        # 1383 "/usr/local/include/neo-c.h"
                        self->keys[it_131]=key;
                    }
                    # 1392 "/usr/local/include/neo-c.h"
                    # 1385 "/usr/local/include/neo-c.h"
                    if(_if_conditional124=1,                    _if_conditional124) {
                        # 1386 "/usr/local/include/neo-c.h"
                        come_call_finalizer3(self->items[it_131],sClass_finalize, 0, 0, 0, 0, (void*)0);
                        # 1387 "/usr/local/include/neo-c.h"
                        self->items[it_131]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        # 1390 "/usr/local/include/neo-c.h"
                        self->items[it_131]=item;
                    }
                    # 1392 "/usr/local/include/neo-c.h"
                    break;
                }
                # 1395 "/usr/local/include/neo-c.h"
                it_131++;
                # 1405 "/usr/local/include/neo-c.h"
                # 1397 "/usr/local/include/neo-c.h"
                if(_if_conditional125=it_131>=self->size,                _if_conditional125) {
                    # 1398 "/usr/local/include/neo-c.h"
                    it_131=0;
                }
                else {
                    # 1405 "/usr/local/include/neo-c.h"
                    # 1400 "/usr/local/include/neo-c.h"
                    if(_if_conditional126=it_131==hash_130,                    _if_conditional126) {
                        # 1401 "/usr/local/include/neo-c.h"
                        printf("unexpected error in map.insert\n");
                        # 1402 "/usr/local/include/neo-c.h"
                        stackframe();
                        # 1403 "/usr/local/include/neo-c.h"
                        exit(2);
                    }
                }
            }
            else {
                # 1407 "/usr/local/include/neo-c.h"
                self->item_existance[it_131]=(_Bool)1;
                # 1414 "/usr/local/include/neo-c.h"
                # 1408 "/usr/local/include/neo-c.h"
                if(_if_conditional127=1,                _if_conditional127) {
                    # 1409 "/usr/local/include/neo-c.h"
                    self->keys[it_131]=(char*)come_increment_ref_count(key);
                }
                else {
                    # 1412 "/usr/local/include/neo-c.h"
                    self->keys[it_131]=key;
                }
                # 1421 "/usr/local/include/neo-c.h"
                # 1414 "/usr/local/include/neo-c.h"
                if(_if_conditional128=1,                _if_conditional128) {
                    # 1415 "/usr/local/include/neo-c.h"
                    self->items[it_131]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    # 1418 "/usr/local/include/neo-c.h"
                    self->items[it_131]=item;
                }
                # 1421 "/usr/local/include/neo-c.h"
                self->len++;
                # 1423 "/usr/local/include/neo-c.h"
                break;
            }
        }
        # 1427 "/usr/local/include/neo-c.h"
        same_key_exist_148=(_Bool)0;
        # 1435 "/usr/local/include/neo-c.h"
        for(        it2_151=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_151=list$1charp_next(self->key_list)        ){
            # 1433 "/usr/local/include/neo-c.h"
            # 1430 "/usr/local/include/neo-c.h"
            if(_if_conditional133=string_equals(it2_151,key),            _if_conditional133) {
                # 1431 "/usr/local/include/neo-c.h"
                same_key_exist_148=(_Bool)1;
            }
        }
        # 1439 "/usr/local/include/neo-c.h"
        # 1435 "/usr/local/include/neo-c.h"
        if(_if_conditional134=!same_key_exist_148,        _if_conditional134) {
            # 1436 "/usr/local/include/neo-c.h"
            list$1charp_push_back(self->key_list,key);
        }
        # 1439 "/usr/local/include/neo-c.h"
        __result109__ = __result_obj__ = self;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
        return __result109__;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_107;
void* right_value180;
char** keys_108;
void* right_value181;
struct sClass** items_109;
void* right_value182;
_Bool* item_existance_116;
int len_117;
char* it_120;
struct sClass* default_value_123;
struct sClass* it2_126;
unsigned int hash_127;
int n_128;
_Bool _while_condtional14;
_Bool _if_conditional99;
_Bool _if_conditional100;
_Bool _if_conditional101;
struct sClass* default_value_129;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_107, 0, sizeof(int));
right_value180 = (void*)0;
memset(&keys_108, 0, sizeof(char**));
right_value181 = (void*)0;
memset(&items_109, 0, sizeof(struct sClass**));
right_value182 = (void*)0;
memset(&item_existance_116, 0, sizeof(_Bool*));
memset(&len_117, 0, sizeof(int));
memset(&it_120, 0, sizeof(char*));
memset(&default_value_123, 0, sizeof(struct sClass*));
memset(&it2_126, 0, sizeof(struct sClass*));
memset(&hash_127, 0, sizeof(unsigned int));
memset(&n_128, 0, sizeof(int));
memset(&default_value_129, 0, sizeof(struct sClass*));
                # 1312 "/usr/local/include/neo-c.h"
                size_107=self->size*10;
                # 1313 "/usr/local/include/neo-c.h"
                keys_108=(char**)come_increment_ref_count(((char**)(right_value180=(char**)come_calloc(1, sizeof(char*)*(1*(size_107)), "/usr/local/include/neo-c.h", 1313, "char*%"))));
                right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1314 "/usr/local/include/neo-c.h"
                items_109=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value181=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_107)), "/usr/local/include/neo-c.h", 1314, "sClass*%"))));
                come_call_finalizer3(right_value181,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                # 1315 "/usr/local/include/neo-c.h"
                item_existance_116=(_Bool*)come_increment_ref_count(((_Bool*)(right_value182=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_107)), "/usr/local/include/neo-c.h", 1315, "bool"))));
                right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1317 "/usr/local/include/neo-c.h"
                len_117=0;
                # 1352 "/usr/local/include/neo-c.h"
                for(                it_120=map$2charphsClassph_begin(self);                !map$2charphsClassph_end(self);                it_120=map$2charphsClassph_next(self)                ){
                    # 1320 "/usr/local/include/neo-c.h"
                    # 1321 "/usr/local/include/neo-c.h"
                    memset(&default_value_123,0,sizeof(struct sClass*));
                    # 1322 "/usr/local/include/neo-c.h"
                    it2_126=map$2charphsClassph_at(self,it_120,default_value_123);
                    # 1323 "/usr/local/include/neo-c.h"
                    hash_127=string_get_hash_key(it_120)%size_107;
                    # 1324 "/usr/local/include/neo-c.h"
                    n_128=hash_127;
                    # 1350 "/usr/local/include/neo-c.h"
                    while(_while_condtional14=(_Bool)1,                    _while_condtional14) {
                        # 1349 "/usr/local/include/neo-c.h"
                        # 1327 "/usr/local/include/neo-c.h"
                        if(_if_conditional99=item_existance_116[n_128],                        _if_conditional99) {
                            # 1329 "/usr/local/include/neo-c.h"
                            n_128++;
                            # 1339 "/usr/local/include/neo-c.h"
                            # 1331 "/usr/local/include/neo-c.h"
                            if(_if_conditional100=n_128>=size_107,                            _if_conditional100) {
                                # 1332 "/usr/local/include/neo-c.h"
                                n_128=0;
                            }
                            else {
                                # 1339 "/usr/local/include/neo-c.h"
                                # 1334 "/usr/local/include/neo-c.h"
                                if(_if_conditional101=n_128==hash_127,                                _if_conditional101) {
                                    # 1335 "/usr/local/include/neo-c.h"
                                    printf("unexpected error in map.rehash(1)\n");
                                    # 1336 "/usr/local/include/neo-c.h"
                                    stackframe();
                                    # 1337 "/usr/local/include/neo-c.h"
                                    exit(2);
                                }
                            }
                        }
                        else {
                            # 1341 "/usr/local/include/neo-c.h"
                            item_existance_116[n_128]=(_Bool)1;
                            # 1342 "/usr/local/include/neo-c.h"
                            keys_108[n_128]=it_120;
                            # 1343 "/usr/local/include/neo-c.h"
                            # 1344 "/usr/local/include/neo-c.h"
                            items_109[n_128]=map$2charphsClassph_at(self,it_120,default_value_129);
                            # 1346 "/usr/local/include/neo-c.h"
                            len_117++;
                            # 1347 "/usr/local/include/neo-c.h"
                            break;
                        }
                    }
                }
                # 1352 "/usr/local/include/neo-c.h"
                come_free((char*)self->items);
                # 1353 "/usr/local/include/neo-c.h"
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                # 1354 "/usr/local/include/neo-c.h"
                come_free((char*)self->keys);
                # 1356 "/usr/local/include/neo-c.h"
                self->keys=keys_108;
                # 1357 "/usr/local/include/neo-c.h"
                self->items=items_109;
                # 1358 "/usr/local/include/neo-c.h"
                self->item_existance=item_existance_116;
                # 1360 "/usr/local/include/neo-c.h"
                self->size=size_107;
                # 1361 "/usr/local/include/neo-c.h"
                self->len=len_117;
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional68;
_Bool _if_conditional69;
_Bool _if_conditional89;
_Bool _if_conditional90;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "sClass_finalize"
                    # 0 "sClass_finalize"
                    if(_if_conditional68=self!=((void*)0)&&self->mName!=((void*)0),                    _if_conditional68) {
                        # 0 "sClass_finalize"
                        self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 2 "sClass_finalize"
                    # 1 "sClass_finalize"
                    if(_if_conditional69=self!=((void*)0)&&self->mFields!=((void*)0),                    _if_conditional69) {
                        # 1 "sClass_finalize"
                        come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    # 3 "sClass_finalize"
                    # 2 "sClass_finalize"
                    if(_if_conditional89=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                    _if_conditional89) {
                        # 2 "sClass_finalize"
                        self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 4 "sClass_finalize"
                    # 3 "sClass_finalize"
                    if(_if_conditional90=self!=((void*)0)&&self->mParentClassName!=((void*)0),                    _if_conditional90) {
                        # 3 "sClass_finalize"
                        self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_110;
_Bool _while_condtional10;
struct list_item$1tuple2$2charphsTypephph* prev_it_111;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_110, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_111, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                            # 114 "/usr/local/include/neo-c.h"
                            it_110=self->head;
                            # 120 "/usr/local/include/neo-c.h"
                            while(_while_condtional10=it_110!=((void*)0),                            _while_condtional10) {
                                # 116 "/usr/local/include/neo-c.h"
                                prev_it_111=it_110;
                                # 117 "/usr/local/include/neo-c.h"
                                it_110=it_110->next;
                                # 118 "/usr/local/include/neo-c.h"
                                come_call_finalizer3(prev_it_111,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional70;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                                    # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                    if(_if_conditional70=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional70) {
                                        # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                        come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional73;
_Bool _if_conditional75;
_Bool _if_conditional77;
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
memset(&__result_obj__, 0, sizeof(void*));
                                                    # 1 "sType_finalize"
                                                    # 0 "sType_finalize"
                                                    if(_if_conditional73=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                                    _if_conditional73) {
                                                        # 0 "sType_finalize"
                                                        come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 2 "sType_finalize"
                                                    # 1 "sType_finalize"
                                                    if(_if_conditional75=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                                    _if_conditional75) {
                                                        # 1 "sType_finalize"
                                                        come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 3 "sType_finalize"
                                                    # 2 "sType_finalize"
                                                    if(_if_conditional77=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                                    _if_conditional77) {
                                                        # 2 "sType_finalize"
                                                        come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 4 "sType_finalize"
                                                    # 3 "sType_finalize"
                                                    if(_if_conditional78=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                                    _if_conditional78) {
                                                        # 3 "sType_finalize"
                                                        self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 5 "sType_finalize"
                                                    # 4 "sType_finalize"
                                                    if(_if_conditional79=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                                    _if_conditional79) {
                                                        # 4 "sType_finalize"
                                                        come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 6 "sType_finalize"
                                                    # 5 "sType_finalize"
                                                    if(_if_conditional80=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                                    _if_conditional80) {
                                                        # 5 "sType_finalize"
                                                        come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 7 "sType_finalize"
                                                    # 6 "sType_finalize"
                                                    if(_if_conditional82=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                                    _if_conditional82) {
                                                        # 6 "sType_finalize"
                                                        come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 8 "sType_finalize"
                                                    # 7 "sType_finalize"
                                                    if(_if_conditional83=self!=((void*)0)&&self->mParamNames!=((void*)0),                                                    _if_conditional83) {
                                                        # 7 "sType_finalize"
                                                        come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 9 "sType_finalize"
                                                    # 8 "sType_finalize"
                                                    if(_if_conditional84=self!=((void*)0)&&self->mResultType!=((void*)0),                                                    _if_conditional84) {
                                                        # 8 "sType_finalize"
                                                        come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 10 "sType_finalize"
                                                    # 9 "sType_finalize"
                                                    if(_if_conditional85=self!=((void*)0)&&self->mAlignas!=((void*)0),                                                    _if_conditional85) {
                                                        # 9 "sType_finalize"
                                                        if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    # 11 "sType_finalize"
                                                    # 10 "sType_finalize"
                                                    if(_if_conditional86=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                                    _if_conditional86) {
                                                        # 10 "sType_finalize"
                                                        if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    # 12 "sType_finalize"
                                                    # 11 "sType_finalize"
                                                    if(_if_conditional87=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                                    _if_conditional87) {
                                                        # 11 "sType_finalize"
                                                        self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 13 "sType_finalize"
                                                    # 12 "sType_finalize"
                                                    if(_if_conditional88=self!=((void*)0)&&self->mAsmName!=((void*)0),                                                    _if_conditional88) {
                                                        # 12 "sType_finalize"
                                                        self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_112;
_Bool _while_condtional11;
struct list_item$1sTypeph* prev_it_113;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_112, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_113, 0, sizeof(struct list_item$1sTypeph*));
                                                            # 114 "/usr/local/include/neo-c.h"
                                                            it_112=self->head;
                                                            # 120 "/usr/local/include/neo-c.h"
                                                            while(_while_condtional11=it_112!=((void*)0),                                                            _while_condtional11) {
                                                                # 116 "/usr/local/include/neo-c.h"
                                                                prev_it_113=it_112;
                                                                # 117 "/usr/local/include/neo-c.h"
                                                                it_112=it_112->next;
                                                                # 118 "/usr/local/include/neo-c.h"
                                                                come_call_finalizer3(prev_it_113,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                            }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional74;
memset(&__result_obj__, 0, sizeof(void*));
                                                                    # 1 "list_item$1sTypephp_finalize"
                                                                    # 0 "list_item$1sTypephp_finalize"
                                                                    if(_if_conditional74=self!=((void*)0)&&self->item!=((void*)0),                                                                    _if_conditional74) {
                                                                        # 0 "list_item$1sTypephp_finalize"
                                                                        come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional76;
memset(&__result_obj__, 0, sizeof(void*));
                                                            # 1 "tuple1$1sTypephp_finalize"
                                                            # 0 "tuple1$1sTypephp_finalize"
                                                            if(_if_conditional76=self!=((void*)0)&&self->v1!=((void*)0),                                                            _if_conditional76) {
                                                                # 0 "tuple1$1sTypephp_finalize"
                                                                come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_114;
_Bool _while_condtional12;
struct list_item$1sNodeph* prev_it_115;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_114, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_115, 0, sizeof(struct list_item$1sNodeph*));
                                                            # 114 "/usr/local/include/neo-c.h"
                                                            it_114=self->head;
                                                            # 120 "/usr/local/include/neo-c.h"
                                                            while(_while_condtional12=it_114!=((void*)0),                                                            _while_condtional12) {
                                                                # 116 "/usr/local/include/neo-c.h"
                                                                prev_it_115=it_114;
                                                                # 117 "/usr/local/include/neo-c.h"
                                                                it_114=it_114->next;
                                                                # 118 "/usr/local/include/neo-c.h"
                                                                come_call_finalizer3(prev_it_115,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                            }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional81;
memset(&__result_obj__, 0, sizeof(void*));
                                                                    # 1 "list_item$1sNodephp_finalize"
                                                                    # 0 "list_item$1sNodephp_finalize"
                                                                    if(_if_conditional81=self!=((void*)0)&&self->item!=((void*)0),                                                                    _if_conditional81) {
                                                                        # 0 "list_item$1sNodephp_finalize"
                                                                        if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                    }
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional91;
char* result_118;
char* __result86__;
_Bool _if_conditional92;
char* __result87__;
char* result_119;
char* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_118, 0, sizeof(char*));
memset(&result_119, 0, sizeof(char*));
                    # 1279 "/usr/local/include/neo-c.h"
                    # 1274 "/usr/local/include/neo-c.h"
                    if(_if_conditional91=self==((void*)0),                    _if_conditional91) {
                        # 1275 "/usr/local/include/neo-c.h"
                        # 1276 "/usr/local/include/neo-c.h"
                        memset(&result_118,0,sizeof(char*));
                        # 1277 "/usr/local/include/neo-c.h"
                        __result86__ = __result_obj__ = result_118;
                        return __result86__;
                    }
                    # 1279 "/usr/local/include/neo-c.h"
                    self->key_list->it=self->key_list->head;
                    # 1285 "/usr/local/include/neo-c.h"
                    # 1281 "/usr/local/include/neo-c.h"
                    if(self->key_list->it) {
                        # 1282 "/usr/local/include/neo-c.h"
                        __result87__ = __result_obj__ = self->key_list->it->item;
                        return __result87__;
                    }
                    # 1285 "/usr/local/include/neo-c.h"
                    # 1286 "/usr/local/include/neo-c.h"
                    memset(&result_119,0,sizeof(char*));
                    # 1287 "/usr/local/include/neo-c.h"
                    __result88__ = __result_obj__ = result_119;
                    return __result88__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result89__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1308 "/usr/local/include/neo-c.h"
                    __result89__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result89__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional93;
char* result_121;
char* __result90__;
_Bool _if_conditional94;
char* __result91__;
char* result_122;
char* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_121, 0, sizeof(char*));
memset(&result_122, 0, sizeof(char*));
                    # 1296 "/usr/local/include/neo-c.h"
                    # 1291 "/usr/local/include/neo-c.h"
                    if(_if_conditional93=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional93) {
                        # 1292 "/usr/local/include/neo-c.h"
                        # 1293 "/usr/local/include/neo-c.h"
                        memset(&result_121,0,sizeof(char*));
                        # 1294 "/usr/local/include/neo-c.h"
                        __result90__ = __result_obj__ = result_121;
                        return __result90__;
                    }
                    # 1296 "/usr/local/include/neo-c.h"
                    self->key_list->it=self->key_list->it->next;
                    # 1302 "/usr/local/include/neo-c.h"
                    # 1298 "/usr/local/include/neo-c.h"
                    if(self->key_list->it) {
                        # 1299 "/usr/local/include/neo-c.h"
                        __result91__ = __result_obj__ = self->key_list->it->item;
                        return __result91__;
                    }
                    # 1302 "/usr/local/include/neo-c.h"
                    # 1303 "/usr/local/include/neo-c.h"
                    memset(&result_122,0,sizeof(char*));
                    # 1304 "/usr/local/include/neo-c.h"
                    __result92__ = __result_obj__ = result_122;
                    return __result92__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_124;
unsigned int it_125;
_Bool _while_condtional13;
_Bool _if_conditional95;
_Bool _if_conditional96;
struct sClass* __result93__;
_Bool _if_conditional97;
_Bool _if_conditional98;
struct sClass* __result94__;
struct sClass* __result95__;
struct sClass* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_124, 0, sizeof(unsigned int));
memset(&it_125, 0, sizeof(unsigned int));
                        # 1201 "/usr/local/include/neo-c.h"
                        hash_124=string_get_hash_key(((char*)key))%self->size;
                        # 1202 "/usr/local/include/neo-c.h"
                        it_125=hash_124;
                        # 1226 "/usr/local/include/neo-c.h"
                        while(_while_condtional13=(_Bool)1,                        _while_condtional13) {
                            # 1224 "/usr/local/include/neo-c.h"
                            # 1205 "/usr/local/include/neo-c.h"
                            if(_if_conditional95=self->item_existance[it_125],                            _if_conditional95) {
                                # 1212 "/usr/local/include/neo-c.h"
                                # 1207 "/usr/local/include/neo-c.h"
                                if(_if_conditional96=string_equals(self->keys[it_125],key),                                _if_conditional96) {
                                    # 1209 "/usr/local/include/neo-c.h"
                                    __result93__ = __result_obj__ = self->items[it_125];
                                    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result93__;
                                }
                                # 1212 "/usr/local/include/neo-c.h"
                                it_125++;
                                # 1220 "/usr/local/include/neo-c.h"
                                # 1214 "/usr/local/include/neo-c.h"
                                if(_if_conditional97=it_125>=self->size,                                _if_conditional97) {
                                    # 1215 "/usr/local/include/neo-c.h"
                                    it_125=0;
                                }
                                else {
                                    # 1220 "/usr/local/include/neo-c.h"
                                    # 1217 "/usr/local/include/neo-c.h"
                                    if(_if_conditional98=it_125==hash_124,                                    _if_conditional98) {
                                        # 1218 "/usr/local/include/neo-c.h"
                                        __result94__ = __result_obj__ = default_value;
                                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result94__;
                                    }
                                }
                            }
                            else {
                                # 1222 "/usr/local/include/neo-c.h"
                                __result95__ = __result_obj__ = default_value;
                                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                return __result95__;
                            }
                        }
                        # 1226 "/usr/local/include/neo-c.h"
                        __result96__ = __result_obj__ = default_value;
                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                        return __result96__;
                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_132;
struct list_item$1charp* it_133;
_Bool _while_condtional16;
_Bool _if_conditional105;
struct list$1charp* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_132, 0, sizeof(int));
memset(&it_133, 0, sizeof(struct list_item$1charp*));
                            # 435 "/usr/local/include/neo-c.h"
                            it2_132=0;
                            # 436 "/usr/local/include/neo-c.h"
                            it_133=self->head;
                            # 447 "/usr/local/include/neo-c.h"
                            while(_while_condtional16=it_133!=((void*)0),                            _while_condtional16) {
                                # 442 "/usr/local/include/neo-c.h"
                                # 438 "/usr/local/include/neo-c.h"
                                if(_if_conditional105=string_equals(it_133->item,item),                                _if_conditional105) {
                                    # 439 "/usr/local/include/neo-c.h"
                                    list$1charp_delete(self,it2_132,it2_132+1);
                                    # 440 "/usr/local/include/neo-c.h"
                                    break;
                                }
                                # 442 "/usr/local/include/neo-c.h"
                                it2_132++;
                                # 444 "/usr/local/include/neo-c.h"
                                it_133=it_133->next;
                            }
                            # 447 "/usr/local/include/neo-c.h"
                            __result100__ = __result_obj__ = self;
                            return __result100__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
int tmp_134;
_Bool _if_conditional109;
_Bool _if_conditional110;
_Bool _if_conditional111;
struct list$1charp* __result97__;
_Bool _if_conditional112;
_Bool _if_conditional113;
struct list_item$1charp* it_137;
int i_138;
_Bool _while_condtional18;
_Bool _if_conditional114;
struct list_item$1charp* prev_it_139;
_Bool _if_conditional115;
_Bool _if_conditional116;
struct list_item$1charp* it_140;
int i_141;
_Bool _while_condtional19;
_Bool _if_conditional117;
_Bool _if_conditional118;
struct list_item$1charp* prev_it_142;
struct list_item$1charp* it_143;
struct list_item$1charp* head_prev_it_144;
struct list_item$1charp* tail_it_145;
int i_146;
_Bool _while_condtional20;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
struct list_item$1charp* prev_it_147;
_Bool _if_conditional122;
_Bool _if_conditional123;
struct list$1charp* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_134, 0, sizeof(int));
memset(&it_137, 0, sizeof(struct list_item$1charp*));
memset(&i_138, 0, sizeof(int));
memset(&prev_it_139, 0, sizeof(struct list_item$1charp*));
memset(&it_140, 0, sizeof(struct list_item$1charp*));
memset(&i_141, 0, sizeof(int));
memset(&prev_it_142, 0, sizeof(struct list_item$1charp*));
memset(&it_143, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_144, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_145, 0, sizeof(struct list_item$1charp*));
memset(&i_146, 0, sizeof(int));
memset(&prev_it_147, 0, sizeof(struct list_item$1charp*));
                                        # 454 "/usr/local/include/neo-c.h"
                                        # 451 "/usr/local/include/neo-c.h"
                                        if(_if_conditional106=head<0,                                        _if_conditional106) {
                                            # 452 "/usr/local/include/neo-c.h"
                                            head+=self->len;
                                        }
                                        # 458 "/usr/local/include/neo-c.h"
                                        # 454 "/usr/local/include/neo-c.h"
                                        if(_if_conditional107=tail<0,                                        _if_conditional107) {
                                            # 455 "/usr/local/include/neo-c.h"
                                            tail+=self->len+1;
                                        }
                                        # 464 "/usr/local/include/neo-c.h"
                                        # 458 "/usr/local/include/neo-c.h"
                                        if(_if_conditional108=head>tail,                                        _if_conditional108) {
                                            # 459 "/usr/local/include/neo-c.h"
                                            tmp_134=tail;
                                            # 460 "/usr/local/include/neo-c.h"
                                            tail=head;
                                            # 461 "/usr/local/include/neo-c.h"
                                            head=tmp_134;
                                        }
                                        # 468 "/usr/local/include/neo-c.h"
                                        # 464 "/usr/local/include/neo-c.h"
                                        if(_if_conditional109=head<0,                                        _if_conditional109) {
                                            # 465 "/usr/local/include/neo-c.h"
                                            head=0;
                                        }
                                        # 472 "/usr/local/include/neo-c.h"
                                        # 468 "/usr/local/include/neo-c.h"
                                        if(_if_conditional110=tail>self->len,                                        _if_conditional110) {
                                            # 469 "/usr/local/include/neo-c.h"
                                            tail=self->len;
                                        }
                                        # 476 "/usr/local/include/neo-c.h"
                                        # 472 "/usr/local/include/neo-c.h"
                                        if(_if_conditional111=head==tail,                                        _if_conditional111) {
                                            # 473 "/usr/local/include/neo-c.h"
                                            __result97__ = __result_obj__ = self;
                                            return __result97__;
                                        }
                                        # 571 "/usr/local/include/neo-c.h"
                                        # 476 "/usr/local/include/neo-c.h"
                                        if(_if_conditional112=head==0&&tail==self->len,                                        _if_conditional112) {
                                            # 478 "/usr/local/include/neo-c.h"
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            # 571 "/usr/local/include/neo-c.h"
                                            # 480 "/usr/local/include/neo-c.h"
                                            if(_if_conditional113=head==0,                                            _if_conditional113) {
                                                # 481 "/usr/local/include/neo-c.h"
                                                it_137=self->head;
                                                # 482 "/usr/local/include/neo-c.h"
                                                i_138=0;
                                                # 504 "/usr/local/include/neo-c.h"
                                                while(_while_condtional18=it_137!=((void*)0),                                                _while_condtional18) {
                                                    # 503 "/usr/local/include/neo-c.h"
                                                    # 484 "/usr/local/include/neo-c.h"
                                                    if(_if_conditional114=i_138<tail,                                                    _if_conditional114) {
                                                        # 485 "/usr/local/include/neo-c.h"
                                                        prev_it_139=it_137;
                                                        # 487 "/usr/local/include/neo-c.h"
                                                        it_137=it_137->next;
                                                        # 488 "/usr/local/include/neo-c.h"
                                                        i_138++;
                                                        # 490 "/usr/local/include/neo-c.h"
                                                        come_call_finalizer3(prev_it_139,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                        # 492 "/usr/local/include/neo-c.h"
                                                        self->len--;
                                                    }
                                                    else {
                                                        # 503 "/usr/local/include/neo-c.h"
                                                        # 494 "/usr/local/include/neo-c.h"
                                                        if(_if_conditional115=i_138==tail,                                                        _if_conditional115) {
                                                            # 495 "/usr/local/include/neo-c.h"
                                                            self->head=it_137;
                                                            # 496 "/usr/local/include/neo-c.h"
                                                            self->head->prev=((void*)0);
                                                            # 497 "/usr/local/include/neo-c.h"
                                                            break;
                                                        }
                                                        else {
                                                            # 500 "/usr/local/include/neo-c.h"
                                                            it_137=it_137->next;
                                                            # 501 "/usr/local/include/neo-c.h"
                                                            i_138++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                # 571 "/usr/local/include/neo-c.h"
                                                # 505 "/usr/local/include/neo-c.h"
                                                if(_if_conditional116=tail==self->len,                                                _if_conditional116) {
                                                    # 506 "/usr/local/include/neo-c.h"
                                                    it_140=self->head;
                                                    # 507 "/usr/local/include/neo-c.h"
                                                    i_141=0;
                                                    # 529 "/usr/local/include/neo-c.h"
                                                    while(_while_condtional19=it_140!=((void*)0),                                                    _while_condtional19) {
                                                        # 514 "/usr/local/include/neo-c.h"
                                                        # 509 "/usr/local/include/neo-c.h"
                                                        if(_if_conditional117=i_141==head,                                                        _if_conditional117) {
                                                            # 510 "/usr/local/include/neo-c.h"
                                                            self->tail=it_140->prev;
                                                            # 511 "/usr/local/include/neo-c.h"
                                                            self->tail->next=((void*)0);
                                                        }
                                                        # 528 "/usr/local/include/neo-c.h"
                                                        # 514 "/usr/local/include/neo-c.h"
                                                        if(_if_conditional118=i_141>=head,                                                        _if_conditional118) {
                                                            # 515 "/usr/local/include/neo-c.h"
                                                            prev_it_142=it_140;
                                                            # 517 "/usr/local/include/neo-c.h"
                                                            it_140=it_140->next;
                                                            # 518 "/usr/local/include/neo-c.h"
                                                            i_141++;
                                                            # 520 "/usr/local/include/neo-c.h"
                                                            come_call_finalizer3(prev_it_142,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            # 522 "/usr/local/include/neo-c.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 525 "/usr/local/include/neo-c.h"
                                                            it_140=it_140->next;
                                                            # 526 "/usr/local/include/neo-c.h"
                                                            i_141++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 531 "/usr/local/include/neo-c.h"
                                                    it_143=self->head;
                                                    # 533 "/usr/local/include/neo-c.h"
                                                    head_prev_it_144=((void*)0);
                                                    # 534 "/usr/local/include/neo-c.h"
                                                    tail_it_145=((void*)0);
                                                    # 537 "/usr/local/include/neo-c.h"
                                                    i_146=0;
                                                    # 563 "/usr/local/include/neo-c.h"
                                                    while(_while_condtional20=it_143!=((void*)0),                                                    _while_condtional20) {
                                                        # 542 "/usr/local/include/neo-c.h"
                                                        # 539 "/usr/local/include/neo-c.h"
                                                        if(_if_conditional119=i_146==head,                                                        _if_conditional119) {
                                                            # 540 "/usr/local/include/neo-c.h"
                                                            head_prev_it_144=it_143->prev;
                                                        }
                                                        # 546 "/usr/local/include/neo-c.h"
                                                        # 542 "/usr/local/include/neo-c.h"
                                                        if(_if_conditional120=i_146==tail,                                                        _if_conditional120) {
                                                            # 543 "/usr/local/include/neo-c.h"
                                                            tail_it_145=it_143;
                                                        }
                                                        # 561 "/usr/local/include/neo-c.h"
                                                        # 546 "/usr/local/include/neo-c.h"
                                                        if(_if_conditional121=i_146>=head&&i_146<tail,                                                        _if_conditional121) {
                                                            # 548 "/usr/local/include/neo-c.h"
                                                            prev_it_147=it_143;
                                                            # 550 "/usr/local/include/neo-c.h"
                                                            it_143=it_143->next;
                                                            # 551 "/usr/local/include/neo-c.h"
                                                            i_146++;
                                                            # 553 "/usr/local/include/neo-c.h"
                                                            come_call_finalizer3(prev_it_147,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            # 555 "/usr/local/include/neo-c.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 558 "/usr/local/include/neo-c.h"
                                                            it_143=it_143->next;
                                                            # 559 "/usr/local/include/neo-c.h"
                                                            i_146++;
                                                        }
                                                    }
                                                    # 566 "/usr/local/include/neo-c.h"
                                                    # 563 "/usr/local/include/neo-c.h"
                                                    if(_if_conditional122=head_prev_it_144!=((void*)0),                                                    _if_conditional122) {
                                                        # 564 "/usr/local/include/neo-c.h"
                                                        head_prev_it_144->next=tail_it_145;
                                                    }
                                                    # 569 "/usr/local/include/neo-c.h"
                                                    # 566 "/usr/local/include/neo-c.h"
                                                    if(_if_conditional123=tail_it_145!=((void*)0),                                                    _if_conditional123) {
                                                        # 567 "/usr/local/include/neo-c.h"
                                                        tail_it_145->prev=head_prev_it_144;
                                                    }
                                                }
                                            }
                                        }
                                        # 571 "/usr/local/include/neo-c.h"
                                        __result99__ = __result_obj__ = self;
                                        return __result99__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_135;
_Bool _while_condtional17;
struct list_item$1charp* prev_it_136;
struct list$1charp* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_135, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_136, 0, sizeof(struct list_item$1charp*));
                                                # 420 "/usr/local/include/neo-c.h"
                                                it_135=self->head;
                                                # 427 "/usr/local/include/neo-c.h"
                                                while(_while_condtional17=it_135!=((void*)0),                                                _while_condtional17) {
                                                    # 422 "/usr/local/include/neo-c.h"
                                                    prev_it_136=it_135;
                                                    # 423 "/usr/local/include/neo-c.h"
                                                    it_135=it_135->next;
                                                    # 424 "/usr/local/include/neo-c.h"
                                                    come_call_finalizer3(prev_it_136,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                # 427 "/usr/local/include/neo-c.h"
                                                self->head=((void*)0);
                                                # 428 "/usr/local/include/neo-c.h"
                                                self->tail=((void*)0);
                                                # 430 "/usr/local/include/neo-c.h"
                                                self->len=0;
                                                # 432 "/usr/local/include/neo-c.h"
                                                __result98__ = __result_obj__ = self;
                                                return __result98__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional129;
char* result_149;
char* __result101__;
_Bool _if_conditional130;
char* __result102__;
char* result_150;
char* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_149, 0, sizeof(char*));
memset(&result_150, 0, sizeof(char*));
            # 281 "/usr/local/include/neo-c.h"
            # 276 "/usr/local/include/neo-c.h"
            if(_if_conditional129=self==((void*)0),            _if_conditional129) {
                # 277 "/usr/local/include/neo-c.h"
                # 278 "/usr/local/include/neo-c.h"
                memset(&result_149,0,sizeof(char*));
                # 279 "/usr/local/include/neo-c.h"
                __result101__ = __result_obj__ = result_149;
                return __result101__;
            }
            # 281 "/usr/local/include/neo-c.h"
            self->it=self->head;
            # 287 "/usr/local/include/neo-c.h"
            # 283 "/usr/local/include/neo-c.h"
            if(self->it) {
                # 284 "/usr/local/include/neo-c.h"
                __result102__ = __result_obj__ = self->it->item;
                return __result102__;
            }
            # 287 "/usr/local/include/neo-c.h"
            # 288 "/usr/local/include/neo-c.h"
            memset(&result_150,0,sizeof(char*));
            # 289 "/usr/local/include/neo-c.h"
            __result103__ = __result_obj__ = result_150;
            return __result103__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result104__;
memset(&__result_obj__, 0, sizeof(void*));
            # 311 "/usr/local/include/neo-c.h"
            __result104__ = self==((void*)0)||self->it==((void*)0);
            return __result104__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional131;
char* result_152;
char* __result105__;
_Bool _if_conditional132;
char* __result106__;
char* result_153;
char* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_152, 0, sizeof(char*));
memset(&result_153, 0, sizeof(char*));
            # 299 "/usr/local/include/neo-c.h"
            # 293 "/usr/local/include/neo-c.h"
            if(_if_conditional131=self==((void*)0)||self->it==((void*)0),            _if_conditional131) {
                # 294 "/usr/local/include/neo-c.h"
                # 295 "/usr/local/include/neo-c.h"
                memset(&result_152,0,sizeof(char*));
                # 296 "/usr/local/include/neo-c.h"
                __result105__ = __result_obj__ = result_152;
                return __result105__;
            }
            # 299 "/usr/local/include/neo-c.h"
            self->it=self->it->next;
            # 305 "/usr/local/include/neo-c.h"
            # 301 "/usr/local/include/neo-c.h"
            if(self->it) {
                # 302 "/usr/local/include/neo-c.h"
                __result106__ = __result_obj__ = self->it->item;
                return __result106__;
            }
            # 305 "/usr/local/include/neo-c.h"
            # 306 "/usr/local/include/neo-c.h"
            memset(&result_153,0,sizeof(char*));
            # 307 "/usr/local/include/neo-c.h"
            __result107__ = __result_obj__ = result_153;
            return __result107__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional135;
void* right_value183;
struct list_item$1charp* litem_154;
_Bool _if_conditional136;
void* right_value184;
struct list_item$1charp* litem_155;
void* right_value185;
struct list_item$1charp* litem_156;
struct list$1charp* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
right_value183 = (void*)0;
memset(&litem_154, 0, sizeof(struct list_item$1charp*));
right_value184 = (void*)0;
memset(&litem_155, 0, sizeof(struct list_item$1charp*));
right_value185 = (void*)0;
memset(&litem_156, 0, sizeof(struct list_item$1charp*));
                # 247 "/usr/local/include/neo-c.h"
                # 216 "/usr/local/include/neo-c.h"
                if(_if_conditional135=self->len==0,                _if_conditional135) {
                    # 217 "/usr/local/include/neo-c.h"
                    litem_154=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value183=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/neo-c.h", 217, "list_item$1charp"))));
                    come_call_finalizer3(right_value183,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "/usr/local/include/neo-c.h"
                    litem_154->prev=((void*)0);
                    # 220 "/usr/local/include/neo-c.h"
                    litem_154->next=((void*)0);
                    # 221 "/usr/local/include/neo-c.h"
                    litem_154->item=item;
                    # 223 "/usr/local/include/neo-c.h"
                    self->tail=litem_154;
                    # 224 "/usr/local/include/neo-c.h"
                    self->head=litem_154;
                }
                else {
                    # 247 "/usr/local/include/neo-c.h"
                    # 226 "/usr/local/include/neo-c.h"
                    if(_if_conditional136=self->len==1,                    _if_conditional136) {
                        # 227 "/usr/local/include/neo-c.h"
                        litem_155=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value184=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/neo-c.h", 227, "list_item$1charp"))));
                        come_call_finalizer3(right_value184,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "/usr/local/include/neo-c.h"
                        litem_155->prev=self->head;
                        # 230 "/usr/local/include/neo-c.h"
                        litem_155->next=((void*)0);
                        # 231 "/usr/local/include/neo-c.h"
                        litem_155->item=item;
                        # 233 "/usr/local/include/neo-c.h"
                        self->tail=litem_155;
                        # 234 "/usr/local/include/neo-c.h"
                        self->head->next=litem_155;
                    }
                    else {
                        # 237 "/usr/local/include/neo-c.h"
                        litem_156=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value185=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/neo-c.h", 237, "list_item$1charp"))));
                        come_call_finalizer3(right_value185,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "/usr/local/include/neo-c.h"
                        litem_156->prev=self->tail;
                        # 240 "/usr/local/include/neo-c.h"
                        litem_156->next=((void*)0);
                        # 241 "/usr/local/include/neo-c.h"
                        litem_156->item=item;
                        # 243 "/usr/local/include/neo-c.h"
                        self->tail->next=litem_156;
                        # 244 "/usr/local/include/neo-c.h"
                        self->tail=litem_156;
                    }
                }
                # 247 "/usr/local/include/neo-c.h"
                self->len++;
                # 249 "/usr/local/include/neo-c.h"
                __result108__ = __result_obj__ = self;
                return __result108__;
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__;
_Bool _if_conditional138;
unsigned int hash_182;
unsigned int it_183;
_Bool _while_condtional23;
_Bool _if_conditional150;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
_Bool _if_conditional154;
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool _if_conditional157;
_Bool same_key_exist_184;
char* it2_185;
_Bool _if_conditional158;
_Bool _if_conditional159;
struct map$2charphsTypeph* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_182, 0, sizeof(unsigned int));
memset(&it_183, 0, sizeof(unsigned int));
memset(&same_key_exist_184, 0, sizeof(_Bool));
memset(&it2_185, 0, sizeof(char*));
            # 1368 "/usr/local/include/neo-c.h"
            # 1365 "/usr/local/include/neo-c.h"
            if(_if_conditional138=self->len*10>=self->size,            _if_conditional138) {
                # 1366 "/usr/local/include/neo-c.h"
                map$2charphsTypeph_rehash(self);
            }
            # 1368 "/usr/local/include/neo-c.h"
            hash_182=string_get_hash_key(key)%self->size;
            # 1369 "/usr/local/include/neo-c.h"
            it_183=hash_182;
            # 1427 "/usr/local/include/neo-c.h"
            while(_while_condtional23=(_Bool)1,            _while_condtional23) {
                # 1425 "/usr/local/include/neo-c.h"
                # 1372 "/usr/local/include/neo-c.h"
                if(_if_conditional150=self->item_existance[it_183],                _if_conditional150) {
                    # 1395 "/usr/local/include/neo-c.h"
                    # 1374 "/usr/local/include/neo-c.h"
                    if(_if_conditional151=string_equals(self->keys[it_183],key),                    _if_conditional151) {
                        # 1385 "/usr/local/include/neo-c.h"
                        # 1376 "/usr/local/include/neo-c.h"
                        if(_if_conditional152=1,                        _if_conditional152) {
                            # 1377 "/usr/local/include/neo-c.h"
                            list$1charp_remove(self->key_list,self->keys[it_183]);
                            # 1378 "/usr/local/include/neo-c.h"
                            self->keys[it_183] = come_decrement_ref_count2(self->keys[it_183], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            # 1379 "/usr/local/include/neo-c.h"
                            self->keys[it_183]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            # 1382 "/usr/local/include/neo-c.h"
                            list$1charp_remove(self->key_list,self->keys[it_183]);
                            # 1383 "/usr/local/include/neo-c.h"
                            self->keys[it_183]=key;
                        }
                        # 1392 "/usr/local/include/neo-c.h"
                        # 1385 "/usr/local/include/neo-c.h"
                        if(_if_conditional153=1,                        _if_conditional153) {
                            # 1386 "/usr/local/include/neo-c.h"
                            come_call_finalizer3(self->items[it_183],sType_finalize, 0, 0, 0, 0, (void*)0);
                            # 1387 "/usr/local/include/neo-c.h"
                            self->items[it_183]=(struct sType*)come_increment_ref_count(item);
                        }
                        else {
                            # 1390 "/usr/local/include/neo-c.h"
                            self->items[it_183]=item;
                        }
                        # 1392 "/usr/local/include/neo-c.h"
                        break;
                    }
                    # 1395 "/usr/local/include/neo-c.h"
                    it_183++;
                    # 1405 "/usr/local/include/neo-c.h"
                    # 1397 "/usr/local/include/neo-c.h"
                    if(_if_conditional154=it_183>=self->size,                    _if_conditional154) {
                        # 1398 "/usr/local/include/neo-c.h"
                        it_183=0;
                    }
                    else {
                        # 1405 "/usr/local/include/neo-c.h"
                        # 1400 "/usr/local/include/neo-c.h"
                        if(_if_conditional155=it_183==hash_182,                        _if_conditional155) {
                            # 1401 "/usr/local/include/neo-c.h"
                            printf("unexpected error in map.insert\n");
                            # 1402 "/usr/local/include/neo-c.h"
                            stackframe();
                            # 1403 "/usr/local/include/neo-c.h"
                            exit(2);
                        }
                    }
                }
                else {
                    # 1407 "/usr/local/include/neo-c.h"
                    self->item_existance[it_183]=(_Bool)1;
                    # 1414 "/usr/local/include/neo-c.h"
                    # 1408 "/usr/local/include/neo-c.h"
                    if(_if_conditional156=1,                    _if_conditional156) {
                        # 1409 "/usr/local/include/neo-c.h"
                        self->keys[it_183]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1412 "/usr/local/include/neo-c.h"
                        self->keys[it_183]=key;
                    }
                    # 1421 "/usr/local/include/neo-c.h"
                    # 1414 "/usr/local/include/neo-c.h"
                    if(_if_conditional157=1,                    _if_conditional157) {
                        # 1415 "/usr/local/include/neo-c.h"
                        self->items[it_183]=(struct sType*)come_increment_ref_count(item);
                    }
                    else {
                        # 1418 "/usr/local/include/neo-c.h"
                        self->items[it_183]=item;
                    }
                    # 1421 "/usr/local/include/neo-c.h"
                    self->len++;
                    # 1423 "/usr/local/include/neo-c.h"
                    break;
                }
            }
            # 1427 "/usr/local/include/neo-c.h"
            same_key_exist_184=(_Bool)0;
            # 1435 "/usr/local/include/neo-c.h"
            for(            it2_185=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_185=list$1charp_next(self->key_list)            ){
                # 1433 "/usr/local/include/neo-c.h"
                # 1430 "/usr/local/include/neo-c.h"
                if(_if_conditional158=string_equals(it2_185,key),                _if_conditional158) {
                    # 1431 "/usr/local/include/neo-c.h"
                    same_key_exist_184=(_Bool)1;
                }
            }
            # 1439 "/usr/local/include/neo-c.h"
            # 1435 "/usr/local/include/neo-c.h"
            if(_if_conditional159=!same_key_exist_184,            _if_conditional159) {
                # 1436 "/usr/local/include/neo-c.h"
                list$1charp_push_back(self->key_list,key);
            }
            # 1439 "/usr/local/include/neo-c.h"
            __result121__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result121__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
void* __result_obj__;
int size_165;
void* right_value232;
char** keys_166;
void* right_value233;
struct sType** items_167;
void* right_value234;
_Bool* item_existance_168;
int len_169;
char* it_172;
struct sType* default_value_175;
struct sType* it2_178;
unsigned int hash_179;
int n_180;
_Bool _while_condtional22;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
struct sType* default_value_181;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_165, 0, sizeof(int));
right_value232 = (void*)0;
memset(&keys_166, 0, sizeof(char**));
right_value233 = (void*)0;
memset(&items_167, 0, sizeof(struct sType**));
right_value234 = (void*)0;
memset(&item_existance_168, 0, sizeof(_Bool*));
memset(&len_169, 0, sizeof(int));
memset(&it_172, 0, sizeof(char*));
memset(&default_value_175, 0, sizeof(struct sType*));
memset(&it2_178, 0, sizeof(struct sType*));
memset(&hash_179, 0, sizeof(unsigned int));
memset(&n_180, 0, sizeof(int));
memset(&default_value_181, 0, sizeof(struct sType*));
                    # 1312 "/usr/local/include/neo-c.h"
                    size_165=self->size*10;
                    # 1313 "/usr/local/include/neo-c.h"
                    keys_166=(char**)come_increment_ref_count(((char**)(right_value232=(char**)come_calloc(1, sizeof(char*)*(1*(size_165)), "/usr/local/include/neo-c.h", 1313, "char*%"))));
                    right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1314 "/usr/local/include/neo-c.h"
                    items_167=(struct sType**)come_increment_ref_count(((struct sType**)(right_value233=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_165)), "/usr/local/include/neo-c.h", 1314, "sType*%"))));
                    come_call_finalizer3(right_value233,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 1315 "/usr/local/include/neo-c.h"
                    item_existance_168=(_Bool*)come_increment_ref_count(((_Bool*)(right_value234=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_165)), "/usr/local/include/neo-c.h", 1315, "bool"))));
                    right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1317 "/usr/local/include/neo-c.h"
                    len_169=0;
                    # 1352 "/usr/local/include/neo-c.h"
                    for(                    it_172=map$2charphsTypeph_begin(self);                    !map$2charphsTypeph_end(self);                    it_172=map$2charphsTypeph_next(self)                    ){
                        # 1320 "/usr/local/include/neo-c.h"
                        # 1321 "/usr/local/include/neo-c.h"
                        memset(&default_value_175,0,sizeof(struct sType*));
                        # 1322 "/usr/local/include/neo-c.h"
                        it2_178=map$2charphsTypeph_at(self,it_172,default_value_175);
                        # 1323 "/usr/local/include/neo-c.h"
                        hash_179=string_get_hash_key(it_172)%size_165;
                        # 1324 "/usr/local/include/neo-c.h"
                        n_180=hash_179;
                        # 1350 "/usr/local/include/neo-c.h"
                        while(_while_condtional22=(_Bool)1,                        _while_condtional22) {
                            # 1349 "/usr/local/include/neo-c.h"
                            # 1327 "/usr/local/include/neo-c.h"
                            if(_if_conditional147=item_existance_168[n_180],                            _if_conditional147) {
                                # 1329 "/usr/local/include/neo-c.h"
                                n_180++;
                                # 1339 "/usr/local/include/neo-c.h"
                                # 1331 "/usr/local/include/neo-c.h"
                                if(_if_conditional148=n_180>=size_165,                                _if_conditional148) {
                                    # 1332 "/usr/local/include/neo-c.h"
                                    n_180=0;
                                }
                                else {
                                    # 1339 "/usr/local/include/neo-c.h"
                                    # 1334 "/usr/local/include/neo-c.h"
                                    if(_if_conditional149=n_180==hash_179,                                    _if_conditional149) {
                                        # 1335 "/usr/local/include/neo-c.h"
                                        printf("unexpected error in map.rehash(1)\n");
                                        # 1336 "/usr/local/include/neo-c.h"
                                        stackframe();
                                        # 1337 "/usr/local/include/neo-c.h"
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                # 1341 "/usr/local/include/neo-c.h"
                                item_existance_168[n_180]=(_Bool)1;
                                # 1342 "/usr/local/include/neo-c.h"
                                keys_166[n_180]=it_172;
                                # 1343 "/usr/local/include/neo-c.h"
                                # 1344 "/usr/local/include/neo-c.h"
                                items_167[n_180]=map$2charphsTypeph_at(self,it_172,default_value_181);
                                # 1346 "/usr/local/include/neo-c.h"
                                len_169++;
                                # 1347 "/usr/local/include/neo-c.h"
                                break;
                            }
                        }
                    }
                    # 1352 "/usr/local/include/neo-c.h"
                    come_free((char*)self->items);
                    # 1353 "/usr/local/include/neo-c.h"
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    # 1354 "/usr/local/include/neo-c.h"
                    come_free((char*)self->keys);
                    # 1356 "/usr/local/include/neo-c.h"
                    self->keys=keys_166;
                    # 1357 "/usr/local/include/neo-c.h"
                    self->items=items_167;
                    # 1358 "/usr/local/include/neo-c.h"
                    self->item_existance=item_existance_168;
                    # 1360 "/usr/local/include/neo-c.h"
                    self->size=size_165;
                    # 1361 "/usr/local/include/neo-c.h"
                    self->len=len_169;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional139;
char* result_170;
char* __result110__;
_Bool _if_conditional140;
char* __result111__;
char* result_171;
char* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_170, 0, sizeof(char*));
memset(&result_171, 0, sizeof(char*));
                        # 1279 "/usr/local/include/neo-c.h"
                        # 1274 "/usr/local/include/neo-c.h"
                        if(_if_conditional139=self==((void*)0),                        _if_conditional139) {
                            # 1275 "/usr/local/include/neo-c.h"
                            # 1276 "/usr/local/include/neo-c.h"
                            memset(&result_170,0,sizeof(char*));
                            # 1277 "/usr/local/include/neo-c.h"
                            __result110__ = __result_obj__ = result_170;
                            return __result110__;
                        }
                        # 1279 "/usr/local/include/neo-c.h"
                        self->key_list->it=self->key_list->head;
                        # 1285 "/usr/local/include/neo-c.h"
                        # 1281 "/usr/local/include/neo-c.h"
                        if(self->key_list->it) {
                            # 1282 "/usr/local/include/neo-c.h"
                            __result111__ = __result_obj__ = self->key_list->it->item;
                            return __result111__;
                        }
                        # 1285 "/usr/local/include/neo-c.h"
                        # 1286 "/usr/local/include/neo-c.h"
                        memset(&result_171,0,sizeof(char*));
                        # 1287 "/usr/local/include/neo-c.h"
                        __result112__ = __result_obj__ = result_171;
                        return __result112__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __result113__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1308 "/usr/local/include/neo-c.h"
                        __result113__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result113__;
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional141;
char* result_173;
char* __result114__;
_Bool _if_conditional142;
char* __result115__;
char* result_174;
char* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_173, 0, sizeof(char*));
memset(&result_174, 0, sizeof(char*));
                        # 1296 "/usr/local/include/neo-c.h"
                        # 1291 "/usr/local/include/neo-c.h"
                        if(_if_conditional141=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional141) {
                            # 1292 "/usr/local/include/neo-c.h"
                            # 1293 "/usr/local/include/neo-c.h"
                            memset(&result_173,0,sizeof(char*));
                            # 1294 "/usr/local/include/neo-c.h"
                            __result114__ = __result_obj__ = result_173;
                            return __result114__;
                        }
                        # 1296 "/usr/local/include/neo-c.h"
                        self->key_list->it=self->key_list->it->next;
                        # 1302 "/usr/local/include/neo-c.h"
                        # 1298 "/usr/local/include/neo-c.h"
                        if(self->key_list->it) {
                            # 1299 "/usr/local/include/neo-c.h"
                            __result115__ = __result_obj__ = self->key_list->it->item;
                            return __result115__;
                        }
                        # 1302 "/usr/local/include/neo-c.h"
                        # 1303 "/usr/local/include/neo-c.h"
                        memset(&result_174,0,sizeof(char*));
                        # 1304 "/usr/local/include/neo-c.h"
                        __result116__ = __result_obj__ = result_174;
                        return __result116__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__;
unsigned int hash_176;
unsigned int it_177;
_Bool _while_condtional21;
_Bool _if_conditional143;
_Bool _if_conditional144;
struct sType* __result117__;
_Bool _if_conditional145;
_Bool _if_conditional146;
struct sType* __result118__;
struct sType* __result119__;
struct sType* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_176, 0, sizeof(unsigned int));
memset(&it_177, 0, sizeof(unsigned int));
                            # 1201 "/usr/local/include/neo-c.h"
                            hash_176=string_get_hash_key(((char*)key))%self->size;
                            # 1202 "/usr/local/include/neo-c.h"
                            it_177=hash_176;
                            # 1226 "/usr/local/include/neo-c.h"
                            while(_while_condtional21=(_Bool)1,                            _while_condtional21) {
                                # 1224 "/usr/local/include/neo-c.h"
                                # 1205 "/usr/local/include/neo-c.h"
                                if(_if_conditional143=self->item_existance[it_177],                                _if_conditional143) {
                                    # 1212 "/usr/local/include/neo-c.h"
                                    # 1207 "/usr/local/include/neo-c.h"
                                    if(_if_conditional144=string_equals(self->keys[it_177],key),                                    _if_conditional144) {
                                        # 1209 "/usr/local/include/neo-c.h"
                                        __result117__ = __result_obj__ = self->items[it_177];
                                        come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result117__;
                                    }
                                    # 1212 "/usr/local/include/neo-c.h"
                                    it_177++;
                                    # 1220 "/usr/local/include/neo-c.h"
                                    # 1214 "/usr/local/include/neo-c.h"
                                    if(_if_conditional145=it_177>=self->size,                                    _if_conditional145) {
                                        # 1215 "/usr/local/include/neo-c.h"
                                        it_177=0;
                                    }
                                    else {
                                        # 1220 "/usr/local/include/neo-c.h"
                                        # 1217 "/usr/local/include/neo-c.h"
                                        if(_if_conditional146=it_177==hash_176,                                        _if_conditional146) {
                                            # 1218 "/usr/local/include/neo-c.h"
                                            __result118__ = __result_obj__ = default_value;
                                            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result118__;
                                        }
                                    }
                                }
                                else {
                                    # 1222 "/usr/local/include/neo-c.h"
                                    __result119__ = __result_obj__ = default_value;
                                    come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result119__;
                                }
                            }
                            # 1226 "/usr/local/include/neo-c.h"
                            __result120__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                            return __result120__;
                            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional160;
void* right_value238;
struct list_item$1tuple2$2charphsTypephph* litem_187;
struct tuple2$2charphsTypeph* __dec_obj24;
_Bool _if_conditional163;
void* right_value239;
struct list_item$1tuple2$2charphsTypephph* litem_188;
struct tuple2$2charphsTypeph* __dec_obj25;
void* right_value240;
struct list_item$1tuple2$2charphsTypephph* litem_189;
struct tuple2$2charphsTypeph* __dec_obj26;
struct list$1tuple2$2charphsTypephph* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
right_value238 = (void*)0;
memset(&litem_187, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value239 = (void*)0;
memset(&litem_188, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value240 = (void*)0;
memset(&litem_189, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
            # 247 "/usr/local/include/neo-c.h"
            # 216 "/usr/local/include/neo-c.h"
            if(_if_conditional160=self->len==0,            _if_conditional160) {
                # 217 "/usr/local/include/neo-c.h"
                litem_187=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value238=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/neo-c.h", 217, "list_item$1tuple2$2charphsTypephph"))));
                come_call_finalizer3(right_value238,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 219 "/usr/local/include/neo-c.h"
                litem_187->prev=((void*)0);
                # 220 "/usr/local/include/neo-c.h"
                litem_187->next=((void*)0);
                # 221 "/usr/local/include/neo-c.h"
                __dec_obj24=litem_187->item;
                litem_187->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj24,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                # 223 "/usr/local/include/neo-c.h"
                self->tail=litem_187;
                # 224 "/usr/local/include/neo-c.h"
                self->head=litem_187;
            }
            else {
                # 247 "/usr/local/include/neo-c.h"
                # 226 "/usr/local/include/neo-c.h"
                if(_if_conditional163=self->len==1,                _if_conditional163) {
                    # 227 "/usr/local/include/neo-c.h"
                    litem_188=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value239=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/neo-c.h", 227, "list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer3(right_value239,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 229 "/usr/local/include/neo-c.h"
                    litem_188->prev=self->head;
                    # 230 "/usr/local/include/neo-c.h"
                    litem_188->next=((void*)0);
                    # 231 "/usr/local/include/neo-c.h"
                    __dec_obj25=litem_188->item;
                    litem_188->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj25,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    # 233 "/usr/local/include/neo-c.h"
                    self->tail=litem_188;
                    # 234 "/usr/local/include/neo-c.h"
                    self->head->next=litem_188;
                }
                else {
                    # 237 "/usr/local/include/neo-c.h"
                    litem_189=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value240=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/neo-c.h", 237, "list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer3(right_value240,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 239 "/usr/local/include/neo-c.h"
                    litem_189->prev=self->tail;
                    # 240 "/usr/local/include/neo-c.h"
                    litem_189->next=((void*)0);
                    # 241 "/usr/local/include/neo-c.h"
                    __dec_obj26=litem_189->item;
                    litem_189->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj26,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    # 243 "/usr/local/include/neo-c.h"
                    self->tail->next=litem_189;
                    # 244 "/usr/local/include/neo-c.h"
                    self->tail=litem_189;
                }
            }
            # 247 "/usr/local/include/neo-c.h"
            self->len++;
            # 249 "/usr/local/include/neo-c.h"
            __result122__ = __result_obj__ = self;
            come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result122__;
            come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
char* __dec_obj27;
struct sType* __dec_obj28;
struct tuple2$2charphsTypeph* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
            # 1738 "/usr/local/include/neo-c.h"
            __dec_obj27=self->v1;
            self->v1=(char*)come_increment_ref_count(v1);
            __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
            # 1739 "/usr/local/include/neo-c.h"
            __dec_obj28=self->v2;
            self->v2=(struct sType*)come_increment_ref_count(v2);
            come_call_finalizer3(__dec_obj28,sType_finalize, 0, 0, 0, 0, (void*)0);
            # 1741 "/usr/local/include/neo-c.h"
            __result123__ = __result_obj__ = self;
            come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(v2,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result123__;
            come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(v2,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional168;
struct sClass* __result124__;
void* right_value267;
struct sClass* result_190;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool _if_conditional171;
_Bool _if_conditional172;
_Bool _if_conditional173;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool _if_conditional176;
_Bool _if_conditional177;
void* right_value268;
char* __dec_obj29;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional180;
void* right_value317;
struct list$1tuple2$2charphsTypephph* __dec_obj60;
_Bool _if_conditional273;
_Bool _if_conditional274;
_Bool _if_conditional275;
void* right_value318;
char* __dec_obj61;
_Bool _if_conditional276;
_Bool _if_conditional277;
void* right_value319;
char* __dec_obj62;
struct sClass* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
right_value267 = (void*)0;
memset(&result_190, 0, sizeof(struct sClass*));
right_value268 = (void*)0;
right_value317 = (void*)0;
right_value318 = (void*)0;
right_value319 = (void*)0;
            # 3 "sClass_clone"
            # 2 "sClass_clone"
            if(_if_conditional168=self==(void*)0,            _if_conditional168) {
                # 2 "sClass_clone"
                __result124__ = __result_obj__ = (void*)0;
                return __result124__;
            }
            # 3 "sClass_clone"
            result_190=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value267=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "sClass"))));
            come_call_finalizer3(right_value267,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            # 5 "sClass_clone"
            # 4 "sClass_clone"
            if(_if_conditional169=self!=((void*)0),            _if_conditional169) {
                # 4 "sClass_clone"
                result_190->mStruct=self->mStruct;
            }
            # 6 "sClass_clone"
            # 5 "sClass_clone"
            if(_if_conditional170=self!=((void*)0),            _if_conditional170) {
                # 5 "sClass_clone"
                result_190->mFloat=self->mFloat;
            }
            # 7 "sClass_clone"
            # 6 "sClass_clone"
            if(_if_conditional171=self!=((void*)0),            _if_conditional171) {
                # 6 "sClass_clone"
                result_190->mUnion=self->mUnion;
            }
            # 8 "sClass_clone"
            # 7 "sClass_clone"
            if(_if_conditional172=self!=((void*)0),            _if_conditional172) {
                # 7 "sClass_clone"
                result_190->mGenerics=self->mGenerics;
            }
            # 9 "sClass_clone"
            # 8 "sClass_clone"
            if(_if_conditional173=self!=((void*)0),            _if_conditional173) {
                # 8 "sClass_clone"
                result_190->mMethodGenerics=self->mMethodGenerics;
            }
            # 10 "sClass_clone"
            # 9 "sClass_clone"
            if(_if_conditional174=self!=((void*)0),            _if_conditional174) {
                # 9 "sClass_clone"
                result_190->mEnum=self->mEnum;
            }
            # 11 "sClass_clone"
            # 10 "sClass_clone"
            if(_if_conditional175=self!=((void*)0),            _if_conditional175) {
                # 10 "sClass_clone"
                result_190->mProtocol=self->mProtocol;
            }
            # 12 "sClass_clone"
            # 11 "sClass_clone"
            if(_if_conditional176=self!=((void*)0),            _if_conditional176) {
                # 11 "sClass_clone"
                result_190->mNumber=self->mNumber;
            }
            # 13 "sClass_clone"
            # 12 "sClass_clone"
            if(_if_conditional177=self!=((void*)0)&&self->mName!=((void*)0),            _if_conditional177) {
                # 12 "sClass_clone"
                __dec_obj29=result_190->mName;
                result_190->mName=(char*)come_increment_ref_count(((char*)(right_value268=string_clone(self->mName))));
                __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 14 "sClass_clone"
            # 13 "sClass_clone"
            if(_if_conditional178=self!=((void*)0),            _if_conditional178) {
                # 13 "sClass_clone"
                result_190->mGenericsNum=self->mGenericsNum;
            }
            # 15 "sClass_clone"
            # 14 "sClass_clone"
            if(_if_conditional179=self!=((void*)0),            _if_conditional179) {
                # 14 "sClass_clone"
                result_190->mMethodGenericsNum=self->mMethodGenericsNum;
            }
            # 16 "sClass_clone"
            # 15 "sClass_clone"
            if(_if_conditional180=self!=((void*)0)&&self->mFields!=((void*)0),            _if_conditional180) {
                # 15 "sClass_clone"
                __dec_obj60=result_190->mFields;
                result_190->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value317=list$1tuple2$2charphsTypephphp_clone(self->mFields))));
                come_call_finalizer3(__dec_obj60,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value317,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 17 "sClass_clone"
            # 16 "sClass_clone"
            if(_if_conditional273=self!=((void*)0),            _if_conditional273) {
                # 16 "sClass_clone"
                result_190->mOutputed=self->mOutputed;
            }
            # 18 "sClass_clone"
            # 17 "sClass_clone"
            if(_if_conditional274=self!=((void*)0),            _if_conditional274) {
                # 17 "sClass_clone"
                result_190->mOutputed2=self->mOutputed2;
            }
            # 19 "sClass_clone"
            # 18 "sClass_clone"
            if(_if_conditional275=self!=((void*)0)&&self->mDeclareSName!=((void*)0),            _if_conditional275) {
                # 18 "sClass_clone"
                __dec_obj61=result_190->mDeclareSName;
                result_190->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value318=string_clone(self->mDeclareSName))));
                __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value318 = come_decrement_ref_count2(right_value318, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 20 "sClass_clone"
            # 19 "sClass_clone"
            if(_if_conditional276=self!=((void*)0),            _if_conditional276) {
                # 19 "sClass_clone"
                result_190->mNobodyStruct=self->mNobodyStruct;
            }
            # 21 "sClass_clone"
            # 20 "sClass_clone"
            if(_if_conditional277=self!=((void*)0)&&self->mParentClassName!=((void*)0),            _if_conditional277) {
                # 20 "sClass_clone"
                __dec_obj62=result_190->mParentClassName;
                result_190->mParentClassName=(char*)come_increment_ref_count(((char*)(right_value319=string_clone(self->mParentClassName))));
                __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value319 = come_decrement_ref_count2(right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 21 "sClass_clone"
            __result152__ = __result_obj__ = result_190;
            come_call_finalizer3(result_190,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result152__;
            come_call_finalizer3(result_190,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional181;
struct list$1tuple2$2charphsTypephph* __result125__;
void* right_value269;
void* right_value270;
struct list$1tuple2$2charphsTypephph* result_191;
struct list_item$1tuple2$2charphsTypephph* it_192;
_Bool _while_condtional24;
void* right_value316;
struct list$1tuple2$2charphsTypephph* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
right_value269 = (void*)0;
right_value270 = (void*)0;
memset(&result_191, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_192, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value316 = (void*)0;
                    # 133 "/usr/local/include/neo-c.h"
                    # 130 "/usr/local/include/neo-c.h"
                    if(_if_conditional181=self==((void*)0),                    _if_conditional181) {
                        # 131 "/usr/local/include/neo-c.h"
                        __result125__ = __result_obj__ = ((void*)0);
                        return __result125__;
                    }
                    # 133 "/usr/local/include/neo-c.h"
                    result_191=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value270=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value269=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "/usr/local/include/neo-c.h", 133, "list$1tuple2$2charphsTypephph"))))))));
                    come_call_finalizer3(right_value269,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value270,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 135 "/usr/local/include/neo-c.h"
                    it_192=self->head;
                    # 142 "/usr/local/include/neo-c.h"
                    while(_while_condtional24=it_192!=((void*)0),                    _while_condtional24) {
                        # 137 "/usr/local/include/neo-c.h"
                        list$1tuple2$2charphsTypephph_add(result_191,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value316=tuple2$2charphsTypephp_clone(it_192->item)))));
                        come_call_finalizer3(right_value316,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 139 "/usr/local/include/neo-c.h"
                        it_192=it_192->next;
                    }
                    # 142 "/usr/local/include/neo-c.h"
                    __result151__ = __result_obj__ = result_191;
                    come_call_finalizer3(result_191,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result151__;
                    come_call_finalizer3(result_191,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsTypephph* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 95 "/usr/local/include/neo-c.h"
                        self->head=((void*)0);
                        # 96 "/usr/local/include/neo-c.h"
                        self->tail=((void*)0);
                        # 97 "/usr/local/include/neo-c.h"
                        self->len=0;
                        # 99 "/usr/local/include/neo-c.h"
                        __result126__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result126__;
                        come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional182;
void* right_value271;
struct list_item$1tuple2$2charphsTypephph* litem_193;
struct tuple2$2charphsTypeph* __dec_obj30;
_Bool _if_conditional185;
void* right_value272;
struct list_item$1tuple2$2charphsTypephph* litem_194;
struct tuple2$2charphsTypeph* __dec_obj31;
void* right_value273;
struct list_item$1tuple2$2charphsTypephph* litem_195;
struct tuple2$2charphsTypeph* __dec_obj32;
struct list$1tuple2$2charphsTypephph* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
right_value271 = (void*)0;
memset(&litem_193, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value272 = (void*)0;
memset(&litem_194, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value273 = (void*)0;
memset(&litem_195, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                            # 177 "/usr/local/include/neo-c.h"
                            # 146 "/usr/local/include/neo-c.h"
                            if(_if_conditional182=self->len==0,                            _if_conditional182) {
                                # 147 "/usr/local/include/neo-c.h"
                                litem_193=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value271=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/neo-c.h", 147, "list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer3(right_value271,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 149 "/usr/local/include/neo-c.h"
                                litem_193->prev=((void*)0);
                                # 150 "/usr/local/include/neo-c.h"
                                litem_193->next=((void*)0);
                                # 151 "/usr/local/include/neo-c.h"
                                __dec_obj30=litem_193->item;
                                litem_193->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj30,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                # 153 "/usr/local/include/neo-c.h"
                                self->tail=litem_193;
                                # 154 "/usr/local/include/neo-c.h"
                                self->head=litem_193;
                            }
                            else {
                                # 177 "/usr/local/include/neo-c.h"
                                # 156 "/usr/local/include/neo-c.h"
                                if(_if_conditional185=self->len==1,                                _if_conditional185) {
                                    # 157 "/usr/local/include/neo-c.h"
                                    litem_194=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value272=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/neo-c.h", 157, "list_item$1tuple2$2charphsTypephph"))));
                                    come_call_finalizer3(right_value272,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 159 "/usr/local/include/neo-c.h"
                                    litem_194->prev=self->head;
                                    # 160 "/usr/local/include/neo-c.h"
                                    litem_194->next=((void*)0);
                                    # 161 "/usr/local/include/neo-c.h"
                                    __dec_obj31=litem_194->item;
                                    litem_194->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj31,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    # 163 "/usr/local/include/neo-c.h"
                                    self->tail=litem_194;
                                    # 164 "/usr/local/include/neo-c.h"
                                    self->head->next=litem_194;
                                }
                                else {
                                    # 167 "/usr/local/include/neo-c.h"
                                    litem_195=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value273=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/neo-c.h", 167, "list_item$1tuple2$2charphsTypephph"))));
                                    come_call_finalizer3(right_value273,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 169 "/usr/local/include/neo-c.h"
                                    litem_195->prev=self->tail;
                                    # 170 "/usr/local/include/neo-c.h"
                                    litem_195->next=((void*)0);
                                    # 171 "/usr/local/include/neo-c.h"
                                    __dec_obj32=litem_195->item;
                                    litem_195->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj32,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    # 173 "/usr/local/include/neo-c.h"
                                    self->tail->next=litem_195;
                                    # 174 "/usr/local/include/neo-c.h"
                                    self->tail=litem_195;
                                }
                            }
                            # 177 "/usr/local/include/neo-c.h"
                            self->len++;
                            # 179 "/usr/local/include/neo-c.h"
                            __result127__ = __result_obj__ = self;
                            come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                            return __result127__;
                            come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional188;
_Bool _if_conditional189;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "tuple2$2charphsTypephp_finalize"
                                        # 0 "tuple2$2charphsTypephp_finalize"
                                        if(_if_conditional188=self!=((void*)0)&&self->v1!=((void*)0),                                        _if_conditional188) {
                                            # 0 "tuple2$2charphsTypephp_finalize"
                                            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        # 2 "tuple2$2charphsTypephp_finalize"
                                        # 1 "tuple2$2charphsTypephp_finalize"
                                        if(_if_conditional189=self!=((void*)0)&&self->v2!=((void*)0),                                        _if_conditional189) {
                                            # 1 "tuple2$2charphsTypephp_finalize"
                                            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional190;
struct tuple2$2charphsTypeph* __result128__;
void* right_value274;
struct tuple2$2charphsTypeph* result_196;
_Bool _if_conditional193;
void* right_value275;
char* __dec_obj33;
_Bool _if_conditional194;
void* right_value315;
struct sType* __dec_obj59;
struct tuple2$2charphsTypeph* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
right_value274 = (void*)0;
memset(&result_196, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value275 = (void*)0;
right_value315 = (void*)0;
                            # 3 "tuple2$2charphsTypephp_clone"
                            # 2 "tuple2$2charphsTypephp_clone"
                            if(_if_conditional190=self==(void*)0,                            _if_conditional190) {
                                # 2 "tuple2$2charphsTypephp_clone"
                                __result128__ = __result_obj__ = (void*)0;
                                return __result128__;
                            }
                            # 3 "tuple2$2charphsTypephp_clone"
                            result_196=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value274=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"))));
                            come_call_finalizer3(right_value274,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                            # 5 "tuple2$2charphsTypephp_clone"
                            # 4 "tuple2$2charphsTypephp_clone"
                            if(_if_conditional193=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional193) {
                                # 4 "tuple2$2charphsTypephp_clone"
                                __dec_obj33=result_196->v1;
                                result_196->v1=(char*)come_increment_ref_count(((char*)(right_value275=string_clone(self->v1))));
                                __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 6 "tuple2$2charphsTypephp_clone"
                            # 5 "tuple2$2charphsTypephp_clone"
                            if(_if_conditional194=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional194) {
                                # 5 "tuple2$2charphsTypephp_clone"
                                __dec_obj59=result_196->v2;
                                result_196->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value315=sType_clone(self->v2))));
                                come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value315,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            }
                            # 6 "tuple2$2charphsTypephp_clone"
                            __result150__ = __result_obj__ = result_196;
                            come_call_finalizer3(result_196,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
                            return __result150__;
                            come_call_finalizer3(result_196,tuple2$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional191;
_Bool _if_conditional192;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "tuple2$2charphsTypeph_finalize"
                                # 0 "tuple2$2charphsTypeph_finalize"
                                if(_if_conditional191=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional191) {
                                    # 0 "tuple2$2charphsTypeph_finalize"
                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "tuple2$2charphsTypeph_finalize"
                                # 1 "tuple2$2charphsTypeph_finalize"
                                if(_if_conditional192=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional192) {
                                    # 1 "tuple2$2charphsTypeph_finalize"
                                    come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional195;
struct sType* __result129__;
void* right_value276;
struct sType* result_197;
_Bool _if_conditional196;
_Bool _if_conditional197;
void* right_value283;
struct list$1sTypeph* __dec_obj37;
_Bool _if_conditional201;
void* right_value286;
struct tuple1$1sTypeph* __dec_obj39;
_Bool _if_conditional205;
void* right_value289;
struct tuple1$1sTypeph* __dec_obj41;
_Bool _if_conditional208;
void* right_value290;
char* __dec_obj42;
_Bool _if_conditional209;
void* right_value291;
struct list$1sTypeph* __dec_obj43;
_Bool _if_conditional210;
void* right_value299;
struct list$1sNodeph* __dec_obj47;
_Bool _if_conditional223;
_Bool _if_conditional224;
void* right_value300;
struct list$1sTypeph* __dec_obj48;
_Bool _if_conditional225;
void* right_value307;
struct list$1charph* __dec_obj52;
_Bool _if_conditional229;
void* right_value310;
struct tuple1$1sTypeph* __dec_obj54;
_Bool _if_conditional232;
_Bool _if_conditional233;
void* right_value311;
struct sNode* __dec_obj55;
_Bool _if_conditional234;
_Bool _if_conditional235;
_Bool _if_conditional236;
_Bool _if_conditional237;
_Bool _if_conditional238;
_Bool _if_conditional239;
_Bool _if_conditional240;
_Bool _if_conditional241;
_Bool _if_conditional242;
_Bool _if_conditional243;
_Bool _if_conditional244;
_Bool _if_conditional245;
_Bool _if_conditional246;
_Bool _if_conditional247;
_Bool _if_conditional248;
_Bool _if_conditional249;
_Bool _if_conditional250;
_Bool _if_conditional251;
_Bool _if_conditional252;
_Bool _if_conditional253;
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool _if_conditional256;
_Bool _if_conditional257;
_Bool _if_conditional258;
void* right_value312;
struct sNode* __dec_obj56;
_Bool _if_conditional259;
_Bool _if_conditional260;
_Bool _if_conditional261;
void* right_value313;
char* __dec_obj57;
_Bool _if_conditional262;
_Bool _if_conditional263;
_Bool _if_conditional264;
_Bool _if_conditional265;
_Bool _if_conditional266;
_Bool _if_conditional267;
_Bool _if_conditional268;
_Bool _if_conditional269;
_Bool _if_conditional270;
_Bool _if_conditional271;
void* right_value314;
char* __dec_obj58;
_Bool _if_conditional272;
struct sType* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
right_value276 = (void*)0;
memset(&result_197, 0, sizeof(struct sType*));
right_value283 = (void*)0;
right_value286 = (void*)0;
right_value289 = (void*)0;
right_value290 = (void*)0;
right_value291 = (void*)0;
right_value299 = (void*)0;
right_value300 = (void*)0;
right_value307 = (void*)0;
right_value310 = (void*)0;
right_value311 = (void*)0;
right_value312 = (void*)0;
right_value313 = (void*)0;
right_value314 = (void*)0;
                                    # 3 "sType_clone"
                                    # 2 "sType_clone"
                                    if(_if_conditional195=self==(void*)0,                                    _if_conditional195) {
                                        # 2 "sType_clone"
                                        __result129__ = __result_obj__ = (void*)0;
                                        return __result129__;
                                    }
                                    # 3 "sType_clone"
                                    result_197=(struct sType*)come_increment_ref_count(((struct sType*)(right_value276=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
                                    come_call_finalizer3(right_value276,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 5 "sType_clone"
                                    # 4 "sType_clone"
                                    if(_if_conditional196=self!=((void*)0),                                    _if_conditional196) {
                                        # 4 "sType_clone"
                                        result_197->mClass=self->mClass;
                                    }
                                    # 6 "sType_clone"
                                    # 5 "sType_clone"
                                    if(_if_conditional197=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                    _if_conditional197) {
                                        # 5 "sType_clone"
                                        __dec_obj37=result_197->mMultipleTypes;
                                        result_197->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value283=list$1sTypeph_clone(self->mMultipleTypes))));
                                        come_call_finalizer3(__dec_obj37,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value283,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 7 "sType_clone"
                                    # 6 "sType_clone"
                                    if(_if_conditional201=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                    _if_conditional201) {
                                        # 6 "sType_clone"
                                        __dec_obj39=result_197->mNoSolvedGenericsType;
                                        result_197->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value286=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                                        come_call_finalizer3(__dec_obj39,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value286,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 8 "sType_clone"
                                    # 7 "sType_clone"
                                    if(_if_conditional205=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                    _if_conditional205) {
                                        # 7 "sType_clone"
                                        __dec_obj41=result_197->mOriginalLoadVarType;
                                        result_197->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value289=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                                        come_call_finalizer3(__dec_obj41,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value289,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 9 "sType_clone"
                                    # 8 "sType_clone"
                                    if(_if_conditional208=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                    _if_conditional208) {
                                        # 8 "sType_clone"
                                        __dec_obj42=result_197->mGenericsName;
                                        result_197->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value290=string_clone(self->mGenericsName))));
                                        __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value290 = come_decrement_ref_count2(right_value290, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 10 "sType_clone"
                                    # 9 "sType_clone"
                                    if(_if_conditional209=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                    _if_conditional209) {
                                        # 9 "sType_clone"
                                        __dec_obj43=result_197->mGenericsTypes;
                                        result_197->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value291=list$1sTypeph_clone(self->mGenericsTypes))));
                                        come_call_finalizer3(__dec_obj43,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value291,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 11 "sType_clone"
                                    # 10 "sType_clone"
                                    if(_if_conditional210=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                    _if_conditional210) {
                                        # 10 "sType_clone"
                                        __dec_obj47=result_197->mArrayNum;
                                        result_197->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value299=list$1sNodeph_clone(self->mArrayNum))));
                                        come_call_finalizer3(__dec_obj47,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value299,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 12 "sType_clone"
                                    # 11 "sType_clone"
                                    if(_if_conditional223=self!=((void*)0),                                    _if_conditional223) {
                                        # 11 "sType_clone"
                                        result_197->mOmitArrayNum=self->mOmitArrayNum;
                                    }
                                    # 13 "sType_clone"
                                    # 12 "sType_clone"
                                    if(_if_conditional224=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                    _if_conditional224) {
                                        # 12 "sType_clone"
                                        __dec_obj48=result_197->mParamTypes;
                                        result_197->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value300=list$1sTypeph_clone(self->mParamTypes))));
                                        come_call_finalizer3(__dec_obj48,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value300,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 14 "sType_clone"
                                    # 13 "sType_clone"
                                    if(_if_conditional225=self!=((void*)0)&&self->mParamNames!=((void*)0),                                    _if_conditional225) {
                                        # 13 "sType_clone"
                                        __dec_obj52=result_197->mParamNames;
                                        result_197->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value307=list$1charph_clone(self->mParamNames))));
                                        come_call_finalizer3(__dec_obj52,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value307,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 15 "sType_clone"
                                    # 14 "sType_clone"
                                    if(_if_conditional229=self!=((void*)0)&&self->mResultType!=((void*)0),                                    _if_conditional229) {
                                        # 14 "sType_clone"
                                        __dec_obj54=result_197->mResultType;
                                        result_197->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value310=tuple1$1sTypephp_clone(self->mResultType))));
                                        come_call_finalizer3(__dec_obj54,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value310,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 16 "sType_clone"
                                    # 15 "sType_clone"
                                    if(_if_conditional232=self!=((void*)0),                                    _if_conditional232) {
                                        # 15 "sType_clone"
                                        result_197->mVarArgs=self->mVarArgs;
                                    }
                                    # 17 "sType_clone"
                                    # 16 "sType_clone"
                                    if(_if_conditional233=self!=((void*)0)&&self->mAlignas!=((void*)0),                                    _if_conditional233) {
                                        # 16 "sType_clone"
                                        __dec_obj55=result_197->mAlignas;
                                        result_197->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value311=sNode_clone(self->mAlignas))));
                                        if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count2(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value311) { right_value311 = come_decrement_ref_count2(right_value311, ((struct sNode*)right_value311)->finalize, ((struct sNode*)right_value311)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    # 18 "sType_clone"
                                    # 17 "sType_clone"
                                    if(_if_conditional234=self!=((void*)0),                                    _if_conditional234) {
                                        # 17 "sType_clone"
                                        result_197->mUnsigned=self->mUnsigned;
                                    }
                                    # 19 "sType_clone"
                                    # 18 "sType_clone"
                                    if(_if_conditional235=self!=((void*)0),                                    _if_conditional235) {
                                        # 18 "sType_clone"
                                        result_197->mShort=self->mShort;
                                    }
                                    # 20 "sType_clone"
                                    # 19 "sType_clone"
                                    if(_if_conditional236=self!=((void*)0),                                    _if_conditional236) {
                                        # 19 "sType_clone"
                                        result_197->mLong=self->mLong;
                                    }
                                    # 21 "sType_clone"
                                    # 20 "sType_clone"
                                    if(_if_conditional237=self!=((void*)0),                                    _if_conditional237) {
                                        # 20 "sType_clone"
                                        result_197->mLongLong=self->mLongLong;
                                    }
                                    # 22 "sType_clone"
                                    # 21 "sType_clone"
                                    if(_if_conditional238=self!=((void*)0),                                    _if_conditional238) {
                                        # 21 "sType_clone"
                                        result_197->mConstant=self->mConstant;
                                    }
                                    # 23 "sType_clone"
                                    # 22 "sType_clone"
                                    if(_if_conditional239=self!=((void*)0),                                    _if_conditional239) {
                                        # 22 "sType_clone"
                                        result_197->mRegister=self->mRegister;
                                    }
                                    # 24 "sType_clone"
                                    # 23 "sType_clone"
                                    if(_if_conditional240=self!=((void*)0),                                    _if_conditional240) {
                                        # 23 "sType_clone"
                                        result_197->mVolatile=self->mVolatile;
                                    }
                                    # 25 "sType_clone"
                                    # 24 "sType_clone"
                                    if(_if_conditional241=self!=((void*)0),                                    _if_conditional241) {
                                        # 24 "sType_clone"
                                        result_197->mStatic=self->mStatic;
                                    }
                                    # 26 "sType_clone"
                                    # 25 "sType_clone"
                                    if(_if_conditional242=self!=((void*)0),                                    _if_conditional242) {
                                        # 25 "sType_clone"
                                        result_197->mRecord=self->mRecord;
                                    }
                                    # 27 "sType_clone"
                                    # 26 "sType_clone"
                                    if(_if_conditional243=self!=((void*)0),                                    _if_conditional243) {
                                        # 26 "sType_clone"
                                        result_197->mExtern=self->mExtern;
                                    }
                                    # 28 "sType_clone"
                                    # 27 "sType_clone"
                                    if(_if_conditional244=self!=((void*)0),                                    _if_conditional244) {
                                        # 27 "sType_clone"
                                        result_197->mRestrict=self->mRestrict;
                                    }
                                    # 29 "sType_clone"
                                    # 28 "sType_clone"
                                    if(_if_conditional245=self!=((void*)0),                                    _if_conditional245) {
                                        # 28 "sType_clone"
                                        result_197->mImmutable=self->mImmutable;
                                    }
                                    # 30 "sType_clone"
                                    # 29 "sType_clone"
                                    if(_if_conditional246=self!=((void*)0),                                    _if_conditional246) {
                                        # 29 "sType_clone"
                                        result_197->mHeap=self->mHeap;
                                    }
                                    # 31 "sType_clone"
                                    # 30 "sType_clone"
                                    if(_if_conditional247=self!=((void*)0),                                    _if_conditional247) {
                                        # 30 "sType_clone"
                                        result_197->mDummyHeap=self->mDummyHeap;
                                    }
                                    # 32 "sType_clone"
                                    # 31 "sType_clone"
                                    if(_if_conditional248=self!=((void*)0),                                    _if_conditional248) {
                                        # 31 "sType_clone"
                                        result_197->mDelegate=self->mDelegate;
                                    }
                                    # 33 "sType_clone"
                                    # 32 "sType_clone"
                                    if(_if_conditional249=self!=((void*)0),                                    _if_conditional249) {
                                        # 32 "sType_clone"
                                        result_197->mShare=self->mShare;
                                    }
                                    # 34 "sType_clone"
                                    # 33 "sType_clone"
                                    if(_if_conditional250=self!=((void*)0),                                    _if_conditional250) {
                                        # 33 "sType_clone"
                                        result_197->mClone=self->mClone;
                                    }
                                    # 35 "sType_clone"
                                    # 34 "sType_clone"
                                    if(_if_conditional251=self!=((void*)0),                                    _if_conditional251) {
                                        # 34 "sType_clone"
                                        result_197->mNoHeap=self->mNoHeap;
                                    }
                                    # 36 "sType_clone"
                                    # 35 "sType_clone"
                                    if(_if_conditional252=self!=((void*)0),                                    _if_conditional252) {
                                        # 35 "sType_clone"
                                        result_197->mNoCallingDestructor=self->mNoCallingDestructor;
                                    }
                                    # 37 "sType_clone"
                                    # 36 "sType_clone"
                                    if(_if_conditional253=self!=((void*)0),                                    _if_conditional253) {
                                        # 36 "sType_clone"
                                        result_197->mRefference=self->mRefference;
                                    }
                                    # 38 "sType_clone"
                                    # 37 "sType_clone"
                                    if(_if_conditional254=self!=((void*)0),                                    _if_conditional254) {
                                        # 37 "sType_clone"
                                        result_197->mException=self->mException;
                                    }
                                    # 39 "sType_clone"
                                    # 38 "sType_clone"
                                    if(_if_conditional255=self!=((void*)0),                                    _if_conditional255) {
                                        # 38 "sType_clone"
                                        result_197->mPointerNum=self->mPointerNum;
                                    }
                                    # 40 "sType_clone"
                                    # 39 "sType_clone"
                                    if(_if_conditional256=self!=((void*)0),                                    _if_conditional256) {
                                        # 39 "sType_clone"
                                        result_197->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                                    }
                                    # 41 "sType_clone"
                                    # 40 "sType_clone"
                                    if(_if_conditional257=self!=((void*)0),                                    _if_conditional257) {
                                        # 40 "sType_clone"
                                        result_197->mNoArrayPointerNum=self->mNoArrayPointerNum;
                                    }
                                    # 42 "sType_clone"
                                    # 41 "sType_clone"
                                    if(_if_conditional258=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                    _if_conditional258) {
                                        # 41 "sType_clone"
                                        __dec_obj56=result_197->mSizeNum;
                                        result_197->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value312=sNode_clone(self->mSizeNum))));
                                        if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count2(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value312) { right_value312 = come_decrement_ref_count2(right_value312, ((struct sNode*)right_value312)->finalize, ((struct sNode*)right_value312)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    # 43 "sType_clone"
                                    # 42 "sType_clone"
                                    if(_if_conditional259=self!=((void*)0),                                    _if_conditional259) {
                                        # 42 "sType_clone"
                                        result_197->mDynamicArrayNum=self->mDynamicArrayNum;
                                    }
                                    # 44 "sType_clone"
                                    # 43 "sType_clone"
                                    if(_if_conditional260=self!=((void*)0),                                    _if_conditional260) {
                                        # 43 "sType_clone"
                                        result_197->mTypeOfExpression=self->mTypeOfExpression;
                                    }
                                    # 45 "sType_clone"
                                    # 44 "sType_clone"
                                    if(_if_conditional261=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                    _if_conditional261) {
                                        # 44 "sType_clone"
                                        __dec_obj57=result_197->mOriginalTypeName;
                                        result_197->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value313=string_clone(self->mOriginalTypeName))));
                                        __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value313 = come_decrement_ref_count2(right_value313, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 46 "sType_clone"
                                    # 45 "sType_clone"
                                    if(_if_conditional262=self!=((void*)0),                                    _if_conditional262) {
                                        # 45 "sType_clone"
                                        result_197->mOriginalPointerNum=self->mOriginalPointerNum;
                                    }
                                    # 47 "sType_clone"
                                    # 46 "sType_clone"
                                    if(_if_conditional263=self!=((void*)0),                                    _if_conditional263) {
                                        # 46 "sType_clone"
                                        result_197->mFunctionParam=self->mFunctionParam;
                                    }
                                    # 48 "sType_clone"
                                    # 47 "sType_clone"
                                    if(_if_conditional264=self!=((void*)0),                                    _if_conditional264) {
                                        # 47 "sType_clone"
                                        result_197->mAllocaValue=self->mAllocaValue;
                                    }
                                    # 49 "sType_clone"
                                    # 48 "sType_clone"
                                    if(_if_conditional265=self!=((void*)0),                                    _if_conditional265) {
                                        # 48 "sType_clone"
                                        result_197->mGenericsStruct=self->mGenericsStruct;
                                    }
                                    # 50 "sType_clone"
                                    # 49 "sType_clone"
                                    if(_if_conditional266=self!=((void*)0),                                    _if_conditional266) {
                                        # 49 "sType_clone"
                                        result_197->mSolvedGenericsName=self->mSolvedGenericsName;
                                    }
                                    # 51 "sType_clone"
                                    # 50 "sType_clone"
                                    if(_if_conditional267=self!=((void*)0),                                    _if_conditional267) {
                                        # 50 "sType_clone"
                                        result_197->mComeMemCore=self->mComeMemCore;
                                    }
                                    # 52 "sType_clone"
                                    # 51 "sType_clone"
                                    if(_if_conditional268=self!=((void*)0),                                    _if_conditional268) {
                                        # 51 "sType_clone"
                                        result_197->mInline=self->mInline;
                                    }
                                    # 53 "sType_clone"
                                    # 52 "sType_clone"
                                    if(_if_conditional269=self!=((void*)0),                                    _if_conditional269) {
                                        # 52 "sType_clone"
                                        result_197->mNullValue=self->mNullValue;
                                    }
                                    # 54 "sType_clone"
                                    # 53 "sType_clone"
                                    if(_if_conditional270=self!=((void*)0),                                    _if_conditional270) {
                                        # 53 "sType_clone"
                                        result_197->mGuardValue=self->mGuardValue;
                                    }
                                    # 55 "sType_clone"
                                    # 54 "sType_clone"
                                    if(_if_conditional271=self!=((void*)0)&&self->mAsmName!=((void*)0),                                    _if_conditional271) {
                                        # 54 "sType_clone"
                                        __dec_obj58=result_197->mAsmName;
                                        result_197->mAsmName=(char*)come_increment_ref_count(((char*)(right_value314=string_clone(self->mAsmName))));
                                        __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value314 = come_decrement_ref_count2(right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 56 "sType_clone"
                                    # 55 "sType_clone"
                                    if(_if_conditional272=self!=((void*)0),                                    _if_conditional272) {
                                        # 55 "sType_clone"
                                        result_197->mArrayPointerType=self->mArrayPointerType;
                                    }
                                    # 56 "sType_clone"
                                    __result149__ = __result_obj__ = result_197;
                                    come_call_finalizer3(result_197,sType_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result149__;
                                    come_call_finalizer3(result_197,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional198;
struct list$1sTypeph* __result130__;
void* right_value277;
void* right_value278;
struct list$1sTypeph* result_198;
struct list_item$1sTypeph* it_199;
_Bool _while_condtional25;
void* right_value282;
struct list$1sTypeph* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
right_value277 = (void*)0;
right_value278 = (void*)0;
memset(&result_198, 0, sizeof(struct list$1sTypeph*));
memset(&it_199, 0, sizeof(struct list_item$1sTypeph*));
right_value282 = (void*)0;
                                            # 133 "/usr/local/include/neo-c.h"
                                            # 130 "/usr/local/include/neo-c.h"
                                            if(_if_conditional198=self==((void*)0),                                            _if_conditional198) {
                                                # 131 "/usr/local/include/neo-c.h"
                                                __result130__ = __result_obj__ = ((void*)0);
                                                return __result130__;
                                            }
                                            # 133 "/usr/local/include/neo-c.h"
                                            result_198=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value278=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value277=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/neo-c.h", 133, "list$1sTypeph"))))))));
                                            come_call_finalizer3(right_value277,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value278,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            # 135 "/usr/local/include/neo-c.h"
                                            it_199=self->head;
                                            # 142 "/usr/local/include/neo-c.h"
                                            while(_while_condtional25=it_199!=((void*)0),                                            _while_condtional25) {
                                                # 137 "/usr/local/include/neo-c.h"
                                                list$1sTypeph_add(result_198,(struct sType*)come_increment_ref_count(((struct sType*)(right_value282=sType_clone(it_199->item)))));
                                                come_call_finalizer3(right_value282,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                # 139 "/usr/local/include/neo-c.h"
                                                it_199=it_199->next;
                                            }
                                            # 142 "/usr/local/include/neo-c.h"
                                            __result133__ = __result_obj__ = result_198;
                                            come_call_finalizer3(result_198,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result133__;
                                            come_call_finalizer3(result_198,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 95 "/usr/local/include/neo-c.h"
                                                self->head=((void*)0);
                                                # 96 "/usr/local/include/neo-c.h"
                                                self->tail=((void*)0);
                                                # 97 "/usr/local/include/neo-c.h"
                                                self->len=0;
                                                # 99 "/usr/local/include/neo-c.h"
                                                __result131__ = __result_obj__ = self;
                                                come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result131__;
                                                come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional199;
void* right_value279;
struct list_item$1sTypeph* litem_200;
struct sType* __dec_obj34;
_Bool _if_conditional200;
void* right_value280;
struct list_item$1sTypeph* litem_201;
struct sType* __dec_obj35;
void* right_value281;
struct list_item$1sTypeph* litem_202;
struct sType* __dec_obj36;
struct list$1sTypeph* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
right_value279 = (void*)0;
memset(&litem_200, 0, sizeof(struct list_item$1sTypeph*));
right_value280 = (void*)0;
memset(&litem_201, 0, sizeof(struct list_item$1sTypeph*));
right_value281 = (void*)0;
memset(&litem_202, 0, sizeof(struct list_item$1sTypeph*));
                                                    # 177 "/usr/local/include/neo-c.h"
                                                    # 146 "/usr/local/include/neo-c.h"
                                                    if(_if_conditional199=self->len==0,                                                    _if_conditional199) {
                                                        # 147 "/usr/local/include/neo-c.h"
                                                        litem_200=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value279=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/neo-c.h", 147, "list_item$1sTypeph"))));
                                                        come_call_finalizer3(right_value279,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        # 149 "/usr/local/include/neo-c.h"
                                                        litem_200->prev=((void*)0);
                                                        # 150 "/usr/local/include/neo-c.h"
                                                        litem_200->next=((void*)0);
                                                        # 151 "/usr/local/include/neo-c.h"
                                                        __dec_obj34=litem_200->item;
                                                        litem_200->item=(struct sType*)come_increment_ref_count(item);
                                                        come_call_finalizer3(__dec_obj34,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        # 153 "/usr/local/include/neo-c.h"
                                                        self->tail=litem_200;
                                                        # 154 "/usr/local/include/neo-c.h"
                                                        self->head=litem_200;
                                                    }
                                                    else {
                                                        # 177 "/usr/local/include/neo-c.h"
                                                        # 156 "/usr/local/include/neo-c.h"
                                                        if(_if_conditional200=self->len==1,                                                        _if_conditional200) {
                                                            # 157 "/usr/local/include/neo-c.h"
                                                            litem_201=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value280=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/neo-c.h", 157, "list_item$1sTypeph"))));
                                                            come_call_finalizer3(right_value280,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            # 159 "/usr/local/include/neo-c.h"
                                                            litem_201->prev=self->head;
                                                            # 160 "/usr/local/include/neo-c.h"
                                                            litem_201->next=((void*)0);
                                                            # 161 "/usr/local/include/neo-c.h"
                                                            __dec_obj35=litem_201->item;
                                                            litem_201->item=(struct sType*)come_increment_ref_count(item);
                                                            come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            # 163 "/usr/local/include/neo-c.h"
                                                            self->tail=litem_201;
                                                            # 164 "/usr/local/include/neo-c.h"
                                                            self->head->next=litem_201;
                                                        }
                                                        else {
                                                            # 167 "/usr/local/include/neo-c.h"
                                                            litem_202=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value281=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/neo-c.h", 167, "list_item$1sTypeph"))));
                                                            come_call_finalizer3(right_value281,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            # 169 "/usr/local/include/neo-c.h"
                                                            litem_202->prev=self->tail;
                                                            # 170 "/usr/local/include/neo-c.h"
                                                            litem_202->next=((void*)0);
                                                            # 171 "/usr/local/include/neo-c.h"
                                                            __dec_obj36=litem_202->item;
                                                            litem_202->item=(struct sType*)come_increment_ref_count(item);
                                                            come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            # 173 "/usr/local/include/neo-c.h"
                                                            self->tail->next=litem_202;
                                                            # 174 "/usr/local/include/neo-c.h"
                                                            self->tail=litem_202;
                                                        }
                                                    }
                                                    # 177 "/usr/local/include/neo-c.h"
                                                    self->len++;
                                                    # 179 "/usr/local/include/neo-c.h"
                                                    __result132__ = __result_obj__ = self;
                                                    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                                                    return __result132__;
                                                    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_203;
_Bool _while_condtional26;
struct list_item$1sTypeph* prev_it_204;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_203, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_204, 0, sizeof(struct list_item$1sTypeph*));
                                            # 114 "/usr/local/include/neo-c.h"
                                            it_203=self->head;
                                            # 120 "/usr/local/include/neo-c.h"
                                            while(_while_condtional26=it_203!=((void*)0),                                            _while_condtional26) {
                                                # 116 "/usr/local/include/neo-c.h"
                                                prev_it_204=it_203;
                                                # 117 "/usr/local/include/neo-c.h"
                                                it_203=it_203->next;
                                                # 118 "/usr/local/include/neo-c.h"
                                                come_call_finalizer3(prev_it_204,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional203;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "tuple1$1sTypeph_finalize"
                                                # 0 "tuple1$1sTypeph_finalize"
                                                if(_if_conditional203=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional203) {
                                                    # 0 "tuple1$1sTypeph_finalize"
                                                    come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional211;
struct list$1sNodeph* __result138__;
void* right_value292;
void* right_value293;
struct list$1sNodeph* result_207;
struct list_item$1sNodeph* it_208;
_Bool _while_condtional27;
void* right_value298;
struct list$1sNodeph* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
right_value292 = (void*)0;
right_value293 = (void*)0;
memset(&result_207, 0, sizeof(struct list$1sNodeph*));
memset(&it_208, 0, sizeof(struct list_item$1sNodeph*));
right_value298 = (void*)0;
                                            # 133 "/usr/local/include/neo-c.h"
                                            # 130 "/usr/local/include/neo-c.h"
                                            if(_if_conditional211=self==((void*)0),                                            _if_conditional211) {
                                                # 131 "/usr/local/include/neo-c.h"
                                                __result138__ = __result_obj__ = ((void*)0);
                                                return __result138__;
                                            }
                                            # 133 "/usr/local/include/neo-c.h"
                                            result_207=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value293=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value292=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/neo-c.h", 133, "list$1sNodeph"))))))));
                                            come_call_finalizer3(right_value292,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value293,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            # 135 "/usr/local/include/neo-c.h"
                                            it_208=self->head;
                                            # 142 "/usr/local/include/neo-c.h"
                                            while(_while_condtional27=it_208!=((void*)0),                                            _while_condtional27) {
                                                # 137 "/usr/local/include/neo-c.h"
                                                list$1sNodeph_add(result_207,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value298=sNode_clone(it_208->item)))));
                                                if(right_value298) { right_value298 = come_decrement_ref_count2(right_value298, ((struct sNode*)right_value298)->finalize, ((struct sNode*)right_value298)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                # 139 "/usr/local/include/neo-c.h"
                                                it_208=it_208->next;
                                            }
                                            # 142 "/usr/local/include/neo-c.h"
                                            __result143__ = __result_obj__ = result_207;
                                            come_call_finalizer3(result_207,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result143__;
                                            come_call_finalizer3(result_207,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 95 "/usr/local/include/neo-c.h"
                                                self->head=((void*)0);
                                                # 96 "/usr/local/include/neo-c.h"
                                                self->tail=((void*)0);
                                                # 97 "/usr/local/include/neo-c.h"
                                                self->len=0;
                                                # 99 "/usr/local/include/neo-c.h"
                                                __result139__ = __result_obj__ = self;
                                                come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result139__;
                                                come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional212;
void* right_value294;
struct list_item$1sNodeph* litem_209;
struct sNode* __dec_obj44;
_Bool _if_conditional213;
void* right_value295;
struct list_item$1sNodeph* litem_210;
struct sNode* __dec_obj45;
void* right_value296;
struct list_item$1sNodeph* litem_211;
struct sNode* __dec_obj46;
struct list$1sNodeph* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
right_value294 = (void*)0;
memset(&litem_209, 0, sizeof(struct list_item$1sNodeph*));
right_value295 = (void*)0;
memset(&litem_210, 0, sizeof(struct list_item$1sNodeph*));
right_value296 = (void*)0;
memset(&litem_211, 0, sizeof(struct list_item$1sNodeph*));
                                                    # 177 "/usr/local/include/neo-c.h"
                                                    # 146 "/usr/local/include/neo-c.h"
                                                    if(_if_conditional212=self->len==0,                                                    _if_conditional212) {
                                                        # 147 "/usr/local/include/neo-c.h"
                                                        litem_209=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value294=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/neo-c.h", 147, "list_item$1sNodeph"))));
                                                        come_call_finalizer3(right_value294,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        # 149 "/usr/local/include/neo-c.h"
                                                        litem_209->prev=((void*)0);
                                                        # 150 "/usr/local/include/neo-c.h"
                                                        litem_209->next=((void*)0);
                                                        # 151 "/usr/local/include/neo-c.h"
                                                        __dec_obj44=litem_209->item;
                                                        litem_209->item=(struct sNode*)come_increment_ref_count(item);
                                                        if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count2(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0,0, (void*)0); }
                                                        # 153 "/usr/local/include/neo-c.h"
                                                        self->tail=litem_209;
                                                        # 154 "/usr/local/include/neo-c.h"
                                                        self->head=litem_209;
                                                    }
                                                    else {
                                                        # 177 "/usr/local/include/neo-c.h"
                                                        # 156 "/usr/local/include/neo-c.h"
                                                        if(_if_conditional213=self->len==1,                                                        _if_conditional213) {
                                                            # 157 "/usr/local/include/neo-c.h"
                                                            litem_210=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value295=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/neo-c.h", 157, "list_item$1sNodeph"))));
                                                            come_call_finalizer3(right_value295,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            # 159 "/usr/local/include/neo-c.h"
                                                            litem_210->prev=self->head;
                                                            # 160 "/usr/local/include/neo-c.h"
                                                            litem_210->next=((void*)0);
                                                            # 161 "/usr/local/include/neo-c.h"
                                                            __dec_obj45=litem_210->item;
                                                            litem_210->item=(struct sNode*)come_increment_ref_count(item);
                                                            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count2(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0, (void*)0); }
                                                            # 163 "/usr/local/include/neo-c.h"
                                                            self->tail=litem_210;
                                                            # 164 "/usr/local/include/neo-c.h"
                                                            self->head->next=litem_210;
                                                        }
                                                        else {
                                                            # 167 "/usr/local/include/neo-c.h"
                                                            litem_211=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value296=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/neo-c.h", 167, "list_item$1sNodeph"))));
                                                            come_call_finalizer3(right_value296,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            # 169 "/usr/local/include/neo-c.h"
                                                            litem_211->prev=self->tail;
                                                            # 170 "/usr/local/include/neo-c.h"
                                                            litem_211->next=((void*)0);
                                                            # 171 "/usr/local/include/neo-c.h"
                                                            __dec_obj46=litem_211->item;
                                                            litem_211->item=(struct sNode*)come_increment_ref_count(item);
                                                            if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); }
                                                            # 173 "/usr/local/include/neo-c.h"
                                                            self->tail->next=litem_211;
                                                            # 174 "/usr/local/include/neo-c.h"
                                                            self->tail=litem_211;
                                                        }
                                                    }
                                                    # 177 "/usr/local/include/neo-c.h"
                                                    self->len++;
                                                    # 179 "/usr/local/include/neo-c.h"
                                                    __result140__ = __result_obj__ = self;
                                                    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                    return __result140__;
                                                    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional214;
struct sNode* __result141__;
void* right_value297;
struct sNode* result_212;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
struct sNode* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
right_value297 = (void*)0;
memset(&result_212, 0, sizeof(struct sNode*));
                                                    # 3 "sNode_clone"
                                                    # 2 "sNode_clone"
                                                    if(_if_conditional214=self==(void*)0,                                                    _if_conditional214) {
                                                        # 2 "sNode_clone"
                                                        __result141__ = __result_obj__ = (void*)0;
                                                        return __result141__;
                                                    }
                                                    # 3 "sNode_clone"
                                                    result_212=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value297=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                                                    if(right_value297) { right_value297 = come_decrement_ref_count2(right_value297, ((struct sNode*)right_value297)->finalize, ((struct sNode*)right_value297)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    # 5 "sNode_clone"
                                                    # 4 "sNode_clone"
                                                    if(_if_conditional215=self!=((void*)0)&&self->clone!=((void*)0),                                                    _if_conditional215) {
                                                        # 4 "sNode_clone"
                                                        result_212->_protocol_obj=self->clone(self->_protocol_obj);
                                                    }
                                                    # 6 "sNode_clone"
                                                    # 5 "sNode_clone"
                                                    if(_if_conditional216=self!=((void*)0),                                                    _if_conditional216) {
                                                        # 5 "sNode_clone"
                                                        result_212->finalize=self->finalize;
                                                    }
                                                    # 7 "sNode_clone"
                                                    # 6 "sNode_clone"
                                                    if(_if_conditional217=self!=((void*)0),                                                    _if_conditional217) {
                                                        # 6 "sNode_clone"
                                                        result_212->clone=self->clone;
                                                    }
                                                    # 8 "sNode_clone"
                                                    # 7 "sNode_clone"
                                                    if(_if_conditional218=self!=((void*)0),                                                    _if_conditional218) {
                                                        # 7 "sNode_clone"
                                                        result_212->compile=self->compile;
                                                    }
                                                    # 9 "sNode_clone"
                                                    # 8 "sNode_clone"
                                                    if(_if_conditional219=self!=((void*)0),                                                    _if_conditional219) {
                                                        # 8 "sNode_clone"
                                                        result_212->sline=self->sline;
                                                    }
                                                    # 10 "sNode_clone"
                                                    # 9 "sNode_clone"
                                                    if(_if_conditional220=self!=((void*)0),                                                    _if_conditional220) {
                                                        # 9 "sNode_clone"
                                                        result_212->sname=self->sname;
                                                    }
                                                    # 11 "sNode_clone"
                                                    # 10 "sNode_clone"
                                                    if(_if_conditional221=self!=((void*)0),                                                    _if_conditional221) {
                                                        # 10 "sNode_clone"
                                                        result_212->terminated=self->terminated;
                                                    }
                                                    # 12 "sNode_clone"
                                                    # 11 "sNode_clone"
                                                    if(_if_conditional222=self!=((void*)0),                                                    _if_conditional222) {
                                                        # 11 "sNode_clone"
                                                        result_212->kind=self->kind;
                                                    }
                                                    # 12 "sNode_clone"
                                                    __result142__ = __result_obj__ = result_212;
                                                    if(result_212) { result_212 = come_decrement_ref_count2(result_212, ((struct sNode*)result_212)->finalize, ((struct sNode*)result_212)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                    return __result142__;
                                                    if(result_212) { result_212 = come_decrement_ref_count2(result_212, ((struct sNode*)result_212)->finalize, ((struct sNode*)result_212)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_213;
_Bool _while_condtional28;
struct list_item$1sNodeph* prev_it_214;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_213, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_214, 0, sizeof(struct list_item$1sNodeph*));
                                            # 114 "/usr/local/include/neo-c.h"
                                            it_213=self->head;
                                            # 120 "/usr/local/include/neo-c.h"
                                            while(_while_condtional28=it_213!=((void*)0),                                            _while_condtional28) {
                                                # 116 "/usr/local/include/neo-c.h"
                                                prev_it_214=it_213;
                                                # 117 "/usr/local/include/neo-c.h"
                                                it_213=it_213->next;
                                                # 118 "/usr/local/include/neo-c.h"
                                                come_call_finalizer3(prev_it_214,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional226;
struct list$1charph* __result144__;
void* right_value301;
void* right_value302;
struct list$1charph* result_215;
struct list_item$1charph* it_216;
_Bool _while_condtional29;
void* right_value306;
struct list$1charph* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
right_value301 = (void*)0;
right_value302 = (void*)0;
memset(&result_215, 0, sizeof(struct list$1charph*));
memset(&it_216, 0, sizeof(struct list_item$1charph*));
right_value306 = (void*)0;
                                            # 133 "/usr/local/include/neo-c.h"
                                            # 130 "/usr/local/include/neo-c.h"
                                            if(_if_conditional226=self==((void*)0),                                            _if_conditional226) {
                                                # 131 "/usr/local/include/neo-c.h"
                                                __result144__ = __result_obj__ = ((void*)0);
                                                return __result144__;
                                            }
                                            # 133 "/usr/local/include/neo-c.h"
                                            result_215=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value302=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value301=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/neo-c.h", 133, "list$1charph"))))))));
                                            come_call_finalizer3(right_value301,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value302,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                            # 135 "/usr/local/include/neo-c.h"
                                            it_216=self->head;
                                            # 142 "/usr/local/include/neo-c.h"
                                            while(_while_condtional29=it_216!=((void*)0),                                            _while_condtional29) {
                                                # 137 "/usr/local/include/neo-c.h"
                                                list$1charph_add(result_215,(char*)come_increment_ref_count(((char*)(right_value306=string_clone(it_216->item)))));
                                                right_value306 = come_decrement_ref_count2(right_value306, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                # 139 "/usr/local/include/neo-c.h"
                                                it_216=it_216->next;
                                            }
                                            # 142 "/usr/local/include/neo-c.h"
                                            __result146__ = __result_obj__ = result_215;
                                            come_call_finalizer3(result_215,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result146__;
                                            come_call_finalizer3(result_215,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional227;
void* right_value303;
struct list_item$1charph* litem_217;
char* __dec_obj49;
_Bool _if_conditional228;
void* right_value304;
struct list_item$1charph* litem_218;
char* __dec_obj50;
void* right_value305;
struct list_item$1charph* litem_219;
char* __dec_obj51;
struct list$1charph* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
right_value303 = (void*)0;
memset(&litem_217, 0, sizeof(struct list_item$1charph*));
right_value304 = (void*)0;
memset(&litem_218, 0, sizeof(struct list_item$1charph*));
right_value305 = (void*)0;
memset(&litem_219, 0, sizeof(struct list_item$1charph*));
                                                    # 177 "/usr/local/include/neo-c.h"
                                                    # 146 "/usr/local/include/neo-c.h"
                                                    if(_if_conditional227=self->len==0,                                                    _if_conditional227) {
                                                        # 147 "/usr/local/include/neo-c.h"
                                                        litem_217=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value303=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/neo-c.h", 147, "list_item$1charph"))));
                                                        come_call_finalizer3(right_value303,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        # 149 "/usr/local/include/neo-c.h"
                                                        litem_217->prev=((void*)0);
                                                        # 150 "/usr/local/include/neo-c.h"
                                                        litem_217->next=((void*)0);
                                                        # 151 "/usr/local/include/neo-c.h"
                                                        __dec_obj49=litem_217->item;
                                                        litem_217->item=(char*)come_increment_ref_count(item);
                                                        __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        # 153 "/usr/local/include/neo-c.h"
                                                        self->tail=litem_217;
                                                        # 154 "/usr/local/include/neo-c.h"
                                                        self->head=litem_217;
                                                    }
                                                    else {
                                                        # 177 "/usr/local/include/neo-c.h"
                                                        # 156 "/usr/local/include/neo-c.h"
                                                        if(_if_conditional228=self->len==1,                                                        _if_conditional228) {
                                                            # 157 "/usr/local/include/neo-c.h"
                                                            litem_218=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value304=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/neo-c.h", 157, "list_item$1charph"))));
                                                            come_call_finalizer3(right_value304,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            # 159 "/usr/local/include/neo-c.h"
                                                            litem_218->prev=self->head;
                                                            # 160 "/usr/local/include/neo-c.h"
                                                            litem_218->next=((void*)0);
                                                            # 161 "/usr/local/include/neo-c.h"
                                                            __dec_obj50=litem_218->item;
                                                            litem_218->item=(char*)come_increment_ref_count(item);
                                                            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            # 163 "/usr/local/include/neo-c.h"
                                                            self->tail=litem_218;
                                                            # 164 "/usr/local/include/neo-c.h"
                                                            self->head->next=litem_218;
                                                        }
                                                        else {
                                                            # 167 "/usr/local/include/neo-c.h"
                                                            litem_219=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value305=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/neo-c.h", 167, "list_item$1charph"))));
                                                            come_call_finalizer3(right_value305,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            # 169 "/usr/local/include/neo-c.h"
                                                            litem_219->prev=self->tail;
                                                            # 170 "/usr/local/include/neo-c.h"
                                                            litem_219->next=((void*)0);
                                                            # 171 "/usr/local/include/neo-c.h"
                                                            __dec_obj51=litem_219->item;
                                                            litem_219->item=(char*)come_increment_ref_count(item);
                                                            __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            # 173 "/usr/local/include/neo-c.h"
                                                            self->tail->next=litem_219;
                                                            # 174 "/usr/local/include/neo-c.h"
                                                            self->tail=litem_219;
                                                        }
                                                    }
                                                    # 177 "/usr/local/include/neo-c.h"
                                                    self->len++;
                                                    # 179 "/usr/local/include/neo-c.h"
                                                    __result145__ = __result_obj__ = self;
                                                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                    return __result145__;
                                                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_220;
_Bool _while_condtional30;
struct list_item$1charph* prev_it_221;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_220, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_221, 0, sizeof(struct list_item$1charph*));
                                            # 114 "/usr/local/include/neo-c.h"
                                            it_220=self->head;
                                            # 120 "/usr/local/include/neo-c.h"
                                            while(_while_condtional30=it_220!=((void*)0),                                            _while_condtional30) {
                                                # 116 "/usr/local/include/neo-c.h"
                                                prev_it_221=it_220;
                                                # 117 "/usr/local/include/neo-c.h"
                                                it_220=it_220->next;
                                                # 118 "/usr/local/include/neo-c.h"
                                                come_call_finalizer3(prev_it_221,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional230;
struct tuple1$1sTypeph* __result147__;
void* right_value308;
struct tuple1$1sTypeph* result_222;
_Bool _if_conditional231;
void* right_value309;
struct sType* __dec_obj53;
struct tuple1$1sTypeph* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
right_value308 = (void*)0;
memset(&result_222, 0, sizeof(struct tuple1$1sTypeph*));
right_value309 = (void*)0;
                                            # 3 "tuple1$1sTypephp_clone"
                                            # 2 "tuple1$1sTypephp_clone"
                                            if(_if_conditional230=self==(void*)0,                                            _if_conditional230) {
                                                # 2 "tuple1$1sTypephp_clone"
                                                __result147__ = __result_obj__ = (void*)0;
                                                return __result147__;
                                            }
                                            # 3 "tuple1$1sTypephp_clone"
                                            result_222=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value308=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                                            come_call_finalizer3(right_value308,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                                            # 5 "tuple1$1sTypephp_clone"
                                            # 4 "tuple1$1sTypephp_clone"
                                            if(_if_conditional231=self!=((void*)0)&&self->v1!=((void*)0),                                            _if_conditional231) {
                                                # 4 "tuple1$1sTypephp_clone"
                                                __dec_obj53=result_222->v1;
                                                result_222->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value309=sType_clone(self->v1))));
                                                come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                come_call_finalizer3(right_value309,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                            }
                                            # 5 "tuple1$1sTypephp_clone"
                                            __result148__ = __result_obj__ = result_222;
                                            come_call_finalizer3(result_222,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result148__;
                                            come_call_finalizer3(result_222,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_223;
_Bool _while_condtional31;
struct list_item$1tuple2$2charphsTypephph* prev_it_224;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_223, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_224, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                    # 114 "/usr/local/include/neo-c.h"
                    it_223=self->head;
                    # 120 "/usr/local/include/neo-c.h"
                    while(_while_condtional31=it_223!=((void*)0),                    _while_condtional31) {
                        # 116 "/usr/local/include/neo-c.h"
                        prev_it_224=it_223;
                        # 117 "/usr/local/include/neo-c.h"
                        it_223=it_223->next;
                        # 118 "/usr/local/include/neo-c.h"
                        come_call_finalizer3(prev_it_224,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

int come_main_v2(int argc, char** argv){
void* __result_obj__;
_Bool _if_conditional278;
void* right_value321;
void* right_value322;
struct buffer* clang_option_225;
void* right_value323;
void* right_value324;
struct buffer* cpp_option_226;
void* right_value325;
void* right_value326;
struct list$1charph* files_227;
void* right_value327;
void* right_value328;
struct list$1charph* object_files_228;
_Bool output_object_file_229;
_Bool output_cpp_file_230;
_Bool output_source_file_flag_231;
void* right_value329;
char* output_file_name_232;
_Bool verbose_233;
_Bool prohibit_common_header_234;
_Bool come_debug_235;
_Bool come_malloc_236;
_Bool come_str_237;
int i_238;
_Bool _if_conditional279;
void* right_value330;
char* __dec_obj63;
_Bool _if_conditional280;
_Bool _if_conditional281;
_Bool _if_conditional282;
_Bool _if_conditional283;
_Bool _if_conditional284;
_Bool _if_conditional285;
_Bool _if_conditional286;
void* right_value331;
_Bool _if_conditional287;
void* right_value332;
void* right_value333;
void* right_value334;
_Bool _if_conditional288;
void* right_value335;
void* right_value336;
void* right_value337;
void* right_value338;
_Bool _if_conditional289;
_Bool _if_conditional290;
void* right_value339;
void* right_value340;
_Bool _if_conditional291;
_Bool _if_conditional292;
_Bool _if_conditional293;
_Bool _if_conditional294;
_Bool _if_conditional295;
void* right_value341;
_Bool _if_conditional296;
void* right_value342;
void* right_value343;
_Bool _if_conditional297;
_Bool _if_conditional298;
struct __sFILE* f_239;
_Bool _and_conditional1;
_Bool __exception_result_var_b8;
_Bool _or_conditional8;
_Bool __exception_result_var_b9;
void* right_value344;
char* tmp_file_240;
void* right_value345;
void* right_value346;
void* right_value347;
void* right_value348;
struct sInfo info_241;
void* right_value349;
char* __dec_obj64;
void* right_value350;
char* __dec_obj65;
void* right_value351;
char* __dec_obj66;
void* right_value352;
char* __dec_obj67;
void* right_value353;
void* right_value359;
struct map$2charphsFunph* __dec_obj69;
void* right_value360;
void* right_value366;
struct map$2charphsGenericsFunph* __dec_obj71;
void* right_value367;
void* right_value373;
struct map$2charphsClassph* __dec_obj73;
void* right_value374;
void* right_value380;
struct map$2charphsClassModuleph* __dec_obj75;
void* right_value381;
void* right_value387;
struct map$2charphsTypeph* __dec_obj77;
void* right_value388;
void* right_value389;
struct sModule* __dec_obj78;
void* right_value390;
void* right_value391;
struct list$1sRightValueObjectph* __dec_obj79;
void* right_value392;
void* right_value393;
struct list$1CVALUEph* __dec_obj80;
void* right_value394;
void* right_value395;
struct sVarTable* __dec_obj81;
void* right_value396;
void* right_value397;
struct sVarTable* lv_table_277;
void* right_value398;
void* right_value399;
struct list$1charph* __dec_obj82;
void* right_value400;
void* right_value401;
struct list$1charph* __dec_obj83;
void* right_value402;
void* right_value403;
struct map$2charphsClassph* __dec_obj84;
static int n_278=0;
void* right_value404;
char* __dec_obj85;
_Bool _if_conditional381;
void* right_value405;
void* right_value406;
void* right_value407;
struct buffer* __dec_obj86;
void* right_value408;
void* right_value409;
void* right_value410;
struct buffer* __dec_obj87;
_Bool _if_conditional382;
_Bool _if_conditional383;
void* right_value411;
void* right_value412;
_Bool _if_conditional416;
_Bool _if_conditional417;
int __result161__;
_Bool _if_conditional418;
_Bool _if_conditional419;
int __result162__;
_Bool _if_conditional420;
_Bool _if_conditional421;
int __result163__;
_Bool _if_conditional422;
_Bool _if_conditional423;
int __result164__;
_Bool _if_conditional424;
_Bool _if_conditional425;
int __result165__;
_Bool _if_conditional426;
_Bool _if_conditional427;
int __result166__;
_Bool _if_conditional428;
_Bool _if_conditional429;
_Bool _if_conditional430;
int __result167__;
_Bool _if_conditional431;
_Bool _if_conditional432;
int __result168__;
void* right_value413;
void* right_value414;
struct buffer* clang_option_281;
void* right_value415;
void* right_value416;
struct buffer* cpp_option_282;
void* right_value417;
void* right_value418;
struct list$1charph* files_283;
void* right_value419;
void* right_value420;
struct list$1charph* object_files_284;
_Bool output_object_file_285;
_Bool output_cpp_file_286;
_Bool output_source_file_flag_287;
char* output_file_name_288;
_Bool verbose_289;
_Bool come_debug_290;
_Bool come_malloc_291;
_Bool come_str_292;
int i_293;
_Bool _if_conditional433;
void* right_value421;
char* __dec_obj88;
_Bool _if_conditional434;
_Bool _if_conditional435;
_Bool _if_conditional436;
_Bool _if_conditional437;
_Bool _if_conditional438;
_Bool _if_conditional439;
void* right_value422;
_Bool _if_conditional440;
void* right_value423;
void* right_value424;
void* right_value425;
_Bool _if_conditional441;
void* right_value426;
void* right_value427;
void* right_value428;
void* right_value429;
_Bool _if_conditional442;
_Bool _if_conditional443;
_Bool _if_conditional444;
void* right_value430;
void* right_value431;
_Bool _if_conditional445;
_Bool _if_conditional446;
_Bool _if_conditional447;
_Bool _if_conditional448;
_Bool _if_conditional449;
void* right_value432;
_Bool _if_conditional450;
void* right_value433;
void* right_value434;
void* right_value435;
_Bool _if_conditional451;
_Bool _if_conditional452;
struct list$1charph* o2_saved_294;
char* it_295;
struct sInfo info_296;
void* right_value436;
char* __dec_obj89;
void* right_value437;
char* __dec_obj90;
void* right_value438;
char* __dec_obj91;
void* right_value439;
void* right_value440;
struct map$2charphsFunph* __dec_obj92;
void* right_value441;
void* right_value442;
struct map$2charphsGenericsFunph* __dec_obj93;
void* right_value443;
void* right_value444;
struct map$2charphsClassph* __dec_obj94;
void* right_value445;
void* right_value446;
struct map$2charphsClassModuleph* __dec_obj95;
void* right_value447;
void* right_value448;
struct map$2charphsTypeph* __dec_obj96;
void* right_value449;
void* right_value450;
struct sModule* __dec_obj97;
void* right_value451;
void* right_value452;
struct list$1sRightValueObjectph* __dec_obj98;
void* right_value453;
void* right_value454;
struct list$1CVALUEph* __dec_obj99;
void* right_value455;
void* right_value456;
struct sVarTable* __dec_obj100;
void* right_value457;
void* right_value458;
struct sVarTable* lv_table_297;
void* right_value459;
void* right_value460;
struct list$1charph* __dec_obj101;
void* right_value461;
void* right_value462;
struct list$1charph* __dec_obj102;
void* right_value463;
void* right_value464;
struct map$2charphsClassph* __dec_obj103;
_Bool _if_conditional453;
void* right_value465;
void* right_value466;
void* right_value467;
struct buffer* __dec_obj104;
void* right_value468;
void* right_value469;
void* right_value470;
struct buffer* __dec_obj105;
_Bool _if_conditional454;
void* right_value471;
char* __dec_obj106;
char* __dec_obj107;
_Bool _if_conditional455;
_Bool _if_conditional456;
_Bool _if_conditional457;
_Bool _if_conditional458;
_Bool _if_conditional459;
struct sInfo info_298;
void* right_value472;
char* __dec_obj108;
void* right_value473;
char* __dec_obj109;
_Bool _if_conditional462;
void* right_value474;
char* __dec_obj110;
char* __dec_obj111;
struct __current_stack2__ __current_stack2__;
int __result171__;
memset(&__result_obj__, 0, sizeof(void*));
right_value321 = (void*)0;
right_value322 = (void*)0;
memset(&clang_option_225, 0, sizeof(struct buffer*));
right_value323 = (void*)0;
right_value324 = (void*)0;
memset(&cpp_option_226, 0, sizeof(struct buffer*));
right_value325 = (void*)0;
right_value326 = (void*)0;
memset(&files_227, 0, sizeof(struct list$1charph*));
right_value327 = (void*)0;
right_value328 = (void*)0;
memset(&object_files_228, 0, sizeof(struct list$1charph*));
memset(&output_object_file_229, 0, sizeof(_Bool));
memset(&output_cpp_file_230, 0, sizeof(_Bool));
memset(&output_source_file_flag_231, 0, sizeof(_Bool));
right_value329 = (void*)0;
memset(&output_file_name_232, 0, sizeof(char*));
memset(&verbose_233, 0, sizeof(_Bool));
memset(&prohibit_common_header_234, 0, sizeof(_Bool));
memset(&come_debug_235, 0, sizeof(_Bool));
memset(&come_malloc_236, 0, sizeof(_Bool));
memset(&come_str_237, 0, sizeof(_Bool));
memset(&i_238, 0, sizeof(int));
right_value330 = (void*)0;
right_value331 = (void*)0;
right_value332 = (void*)0;
right_value333 = (void*)0;
right_value334 = (void*)0;
right_value335 = (void*)0;
right_value336 = (void*)0;
right_value337 = (void*)0;
right_value338 = (void*)0;
right_value339 = (void*)0;
right_value340 = (void*)0;
right_value341 = (void*)0;
right_value342 = (void*)0;
right_value343 = (void*)0;
memset(&f_239, 0, sizeof(struct __sFILE*));
right_value344 = (void*)0;
memset(&tmp_file_240, 0, sizeof(char*));
right_value345 = (void*)0;
right_value346 = (void*)0;
right_value347 = (void*)0;
right_value348 = (void*)0;
memset(&info_241, 0, sizeof(struct sInfo));
right_value349 = (void*)0;
right_value350 = (void*)0;
right_value351 = (void*)0;
right_value352 = (void*)0;
right_value353 = (void*)0;
right_value359 = (void*)0;
right_value360 = (void*)0;
right_value366 = (void*)0;
right_value367 = (void*)0;
right_value373 = (void*)0;
right_value374 = (void*)0;
right_value380 = (void*)0;
right_value381 = (void*)0;
right_value387 = (void*)0;
right_value388 = (void*)0;
right_value389 = (void*)0;
right_value390 = (void*)0;
right_value391 = (void*)0;
right_value392 = (void*)0;
right_value393 = (void*)0;
right_value394 = (void*)0;
right_value395 = (void*)0;
right_value396 = (void*)0;
right_value397 = (void*)0;
memset(&lv_table_277, 0, sizeof(struct sVarTable*));
right_value398 = (void*)0;
right_value399 = (void*)0;
right_value400 = (void*)0;
right_value401 = (void*)0;
right_value402 = (void*)0;
right_value403 = (void*)0;
right_value404 = (void*)0;
right_value405 = (void*)0;
right_value406 = (void*)0;
right_value407 = (void*)0;
right_value408 = (void*)0;
right_value409 = (void*)0;
right_value410 = (void*)0;
right_value411 = (void*)0;
right_value412 = (void*)0;
right_value413 = (void*)0;
right_value414 = (void*)0;
memset(&clang_option_281, 0, sizeof(struct buffer*));
right_value415 = (void*)0;
right_value416 = (void*)0;
memset(&cpp_option_282, 0, sizeof(struct buffer*));
right_value417 = (void*)0;
right_value418 = (void*)0;
memset(&files_283, 0, sizeof(struct list$1charph*));
right_value419 = (void*)0;
right_value420 = (void*)0;
memset(&object_files_284, 0, sizeof(struct list$1charph*));
memset(&output_object_file_285, 0, sizeof(_Bool));
memset(&output_cpp_file_286, 0, sizeof(_Bool));
memset(&output_source_file_flag_287, 0, sizeof(_Bool));
memset(&output_file_name_288, 0, sizeof(char*));
memset(&verbose_289, 0, sizeof(_Bool));
memset(&come_debug_290, 0, sizeof(_Bool));
memset(&come_malloc_291, 0, sizeof(_Bool));
memset(&come_str_292, 0, sizeof(_Bool));
memset(&i_293, 0, sizeof(int));
right_value421 = (void*)0;
right_value422 = (void*)0;
right_value423 = (void*)0;
right_value424 = (void*)0;
right_value425 = (void*)0;
right_value426 = (void*)0;
right_value427 = (void*)0;
right_value428 = (void*)0;
right_value429 = (void*)0;
right_value430 = (void*)0;
right_value431 = (void*)0;
right_value432 = (void*)0;
right_value433 = (void*)0;
right_value434 = (void*)0;
right_value435 = (void*)0;
memset(&o2_saved_294, 0, sizeof(struct list$1charph*));
memset(&it_295, 0, sizeof(char*));
memset(&info_296, 0, sizeof(struct sInfo));
right_value436 = (void*)0;
right_value437 = (void*)0;
right_value438 = (void*)0;
right_value439 = (void*)0;
right_value440 = (void*)0;
right_value441 = (void*)0;
right_value442 = (void*)0;
right_value443 = (void*)0;
right_value444 = (void*)0;
right_value445 = (void*)0;
right_value446 = (void*)0;
right_value447 = (void*)0;
right_value448 = (void*)0;
right_value449 = (void*)0;
right_value450 = (void*)0;
right_value451 = (void*)0;
right_value452 = (void*)0;
right_value453 = (void*)0;
right_value454 = (void*)0;
right_value455 = (void*)0;
right_value456 = (void*)0;
right_value457 = (void*)0;
right_value458 = (void*)0;
memset(&lv_table_297, 0, sizeof(struct sVarTable*));
right_value459 = (void*)0;
right_value460 = (void*)0;
right_value461 = (void*)0;
right_value462 = (void*)0;
right_value463 = (void*)0;
right_value464 = (void*)0;
right_value465 = (void*)0;
right_value466 = (void*)0;
right_value467 = (void*)0;
right_value468 = (void*)0;
right_value469 = (void*)0;
right_value470 = (void*)0;
right_value471 = (void*)0;
memset(&info_298, 0, sizeof(struct sInfo));
right_value472 = (void*)0;
right_value473 = (void*)0;
right_value474 = (void*)0;
memset(&__current_stack2__, 0, sizeof(struct __current_stack2__));
    # 857 "02transpile.c"
    # 466 "02transpile.c"
    if(_if_conditional278=charp_operator_equals(argv[1],"header")&&argc>=3,    _if_conditional278) {
        # 467 "02transpile.c"
        gProgramName=argv[0];
        # 469 "02transpile.c"
        clang_option_225=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value322=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value321=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 469, "buffer"))))))));
        come_call_finalizer3(right_value321,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value322,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 470 "02transpile.c"
        cpp_option_226=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value324=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value323=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 470, "buffer"))))))));
        come_call_finalizer3(right_value323,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value324,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 471 "02transpile.c"
        files_227=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value326=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value325=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 471, "list$1charph"))))))));
        come_call_finalizer3(right_value325,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value326,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 472 "02transpile.c"
        object_files_228=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value328=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value327=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 472, "list$1charph"))))))));
        come_call_finalizer3(right_value327,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value328,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 473 "02transpile.c"
        output_object_file_229=(_Bool)0;
        # 474 "02transpile.c"
        output_cpp_file_230=(_Bool)0;
        # 475 "02transpile.c"
        output_source_file_flag_231=(_Bool)0;
        # 476 "02transpile.c"
        output_file_name_232=(char*)come_increment_ref_count(((char*)(right_value329=__builtin_string("common.h"))));
        right_value329 = come_decrement_ref_count2(right_value329, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 477 "02transpile.c"
        verbose_233=(_Bool)0;
        # 478 "02transpile.c"
        prohibit_common_header_234=(_Bool)0;
        # 479 "02transpile.c"
        come_debug_235=(_Bool)0;
        # 480 "02transpile.c"
        come_malloc_236=(_Bool)0;
        # 481 "02transpile.c"
        come_str_237=(_Bool)0;
        # 547 "02transpile.c"
        for(        i_238=2;        i_238<argc;        i_238++        ){
            # 545 "02transpile.c"
            # 483 "02transpile.c"
            if(_if_conditional279=charp_operator_equals(argv[i_238],"-o")&&i_238+1<argc,            _if_conditional279) {
                # 484 "02transpile.c"
                __dec_obj63=output_file_name_232;
                output_file_name_232=(char*)come_increment_ref_count(((char*)(right_value330=__builtin_string(argv[i_238+1]))));
                __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value330 = come_decrement_ref_count2(right_value330, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 485 "02transpile.c"
                i_238++;
            }
            else {
                # 545 "02transpile.c"
                # 487 "02transpile.c"
                if(_if_conditional280=charp_operator_equals(argv[i_238],"-str"),                _if_conditional280) {
                    # 488 "02transpile.c"
                    come_str_237=(_Bool)1;
                }
                else {
                    # 545 "02transpile.c"
                    # 490 "02transpile.c"
                    if(_if_conditional281=charp_operator_equals(argv[i_238],"-leak"),                    _if_conditional281) {
                        # 491 "02transpile.c"
                        come_malloc_236=(_Bool)1;
                    }
                    else {
                        # 545 "02transpile.c"
                        # 493 "02transpile.c"
                        if(_if_conditional282=charp_operator_equals(argv[i_238],"-gc"),                        _if_conditional282) {
                            # 494 "02transpile.c"
                            gComeGC=(_Bool)1;
                        }
                        else {
                            # 545 "02transpile.c"
                            # 496 "02transpile.c"
                            if(_if_conditional283=charp_operator_equals(argv[i_238],"-g"),                            _if_conditional283) {
                                # 497 "02transpile.c"
                                buffer_append_str(clang_option_225,"-g ");
                            }
                            else {
                                # 545 "02transpile.c"
                                # 499 "02transpile.c"
                                if(_if_conditional284=charp_operator_equals(argv[i_238],"-cg"),                                _if_conditional284) {
                                    # 500 "02transpile.c"
                                    buffer_append_str(clang_option_225,"-g ");
                                    # 501 "02transpile.c"
                                    come_debug_235=(_Bool)1;
                                }
                                else {
                                    # 545 "02transpile.c"
                                    # 503 "02transpile.c"
                                    if(_if_conditional285=charp_operator_equals(argv[i_238],"-common-header"),                                    _if_conditional285) {
                                        # 504 "02transpile.c"
                                        gCommonHeader=(_Bool)1;
                                    }
                                    else {
                                        # 545 "02transpile.c"
                                        # 506 "02transpile.c"
                                        if(_if_conditional286=charp_operator_equals(argv[i_238],"-original-position"),                                        _if_conditional286) {
                                            # 507 "02transpile.c"
                                            gComeOriginalSourcePosition=(_Bool)0;
                                        }
                                        else {
                                            # 545 "02transpile.c"
                                            # 509 "02transpile.c"
                                            if(_if_conditional287=string_operator_equals(((char*)(right_value331=charp_operator_load_range_element(argv[i_238],0,2))),"-O"),                                            right_value331 = come_decrement_ref_count2(right_value331, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                                            _if_conditional287) {
                                                # 510 "02transpile.c"
                                                buffer_append_str(clang_option_225,((char*)(right_value333=xsprintf(" \%s ",((char*)(right_value332=charp_to_string(argv[i_238])))))));
                                                right_value332 = come_decrement_ref_count2(right_value332, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                right_value333 = come_decrement_ref_count2(right_value333, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                # 511 "02transpile.c"
                                                come_debug_235=(_Bool)0;
                                            }
                                            else {
                                                # 545 "02transpile.c"
                                                # 513 "02transpile.c"
                                                if(_if_conditional288=string_operator_equals(((char*)(right_value334=charp_operator_load_range_element(argv[i_238],0,2))),"-D"),                                                right_value334 = come_decrement_ref_count2(right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                                                _if_conditional288) {
                                                    # 514 "02transpile.c"
                                                    buffer_append_str(cpp_option_226,((char*)(right_value336=xsprintf(" \%s ",((char*)(right_value335=charp_to_string(argv[i_238])))))));
                                                    right_value335 = come_decrement_ref_count2(right_value335, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    right_value336 = come_decrement_ref_count2(right_value336, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    # 515 "02transpile.c"
                                                    buffer_append_str(clang_option_225,((char*)(right_value338=xsprintf(" \%s ",((char*)(right_value337=charp_to_string(argv[i_238])))))));
                                                    right_value337 = come_decrement_ref_count2(right_value337, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    right_value338 = come_decrement_ref_count2(right_value338, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                else {
                                                    # 545 "02transpile.c"
                                                    # 517 "02transpile.c"
                                                    if(_if_conditional289=charp_operator_equals(argv[i_238],"-v"),                                                    _if_conditional289) {
                                                        # 518 "02transpile.c"
                                                        buffer_append_str(clang_option_225,"-v ");
                                                        # 519 "02transpile.c"
                                                        verbose_233=(_Bool)1;
                                                    }
                                                    else {
                                                        # 545 "02transpile.c"
                                                        # 521 "02transpile.c"
                                                        if(_if_conditional290=strlen(argv[i_238])>=2&&memcmp(argv[i_238],"-I",strlen("-I"))==0,                                                        _if_conditional290) {
                                                            # 522 "02transpile.c"
                                                            buffer_append_str(cpp_option_226,((char*)(right_value340=charp_operator_add(" ",((char*)(right_value339=charp_operator_add(argv[i_238]," ")))))));
                                                            right_value339 = come_decrement_ref_count2(right_value339, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            right_value340 = come_decrement_ref_count2(right_value340, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        }
                                                        else {
                                                            # 545 "02transpile.c"
                                                            # 524 "02transpile.c"
                                                            if(_if_conditional291=charp_operator_equals(argv[i_238],"-gdwarf-4"),                                                            _if_conditional291) {
                                                                # 525 "02transpile.c"
                                                                buffer_append_str(clang_option_225,"-gdwarf-4 ");
                                                            }
                                                            else {
                                                                # 545 "02transpile.c"
                                                                # 527 "02transpile.c"
                                                                if(_if_conditional292=charp_operator_equals(argv[i_238],"-s")||charp_operator_equals(argv[i_238],"-S"),                                                                _if_conditional292) {
                                                                    # 528 "02transpile.c"
                                                                    output_source_file_flag_231=(_Bool)1;
                                                                }
                                                                else {
                                                                    # 545 "02transpile.c"
                                                                    # 530 "02transpile.c"
                                                                    if(_if_conditional293=charp_operator_equals(argv[i_238],"-c"),                                                                    _if_conditional293) {
                                                                        # 531 "02transpile.c"
                                                                        output_object_file_229=(_Bool)1;
                                                                    }
                                                                    else {
                                                                        # 545 "02transpile.c"
                                                                        # 533 "02transpile.c"
                                                                        if(_if_conditional294=charp_operator_equals(argv[i_238],"-E"),                                                                        _if_conditional294) {
                                                                            # 534 "02transpile.c"
                                                                            output_cpp_file_230=(_Bool)1;
                                                                        }
                                                                        else {
                                                                            # 545 "02transpile.c"
                                                                            # 536 "02transpile.c"
                                                                            if(_if_conditional295=argv[i_238][0]==45,                                                                            _if_conditional295) {
                                                                                # 537 "02transpile.c"
                                                                                buffer_append_str(clang_option_225,((char*)(right_value341=charp_operator_add(argv[i_238]," "))));
                                                                                right_value341 = come_decrement_ref_count2(right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            }
                                                                            else {
                                                                                # 545 "02transpile.c"
                                                                                # 539 "02transpile.c"
                                                                                if(_if_conditional296=strlen(argv[i_238])>2&&memcmp(argv[i_238]+strlen(argv[i_238])-2,".o",2)==0,                                                                                _if_conditional296) {
                                                                                    # 540 "02transpile.c"
                                                                                    list$1charph_push_back(object_files_228,(char*)come_increment_ref_count(((char*)(right_value342=__builtin_string(argv[i_238])))));
                                                                                    right_value342 = come_decrement_ref_count2(right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                else {
                                                                                    # 543 "02transpile.c"
                                                                                    list$1charph_push_back(files_227,(char*)come_increment_ref_count(((char*)(right_value343=__builtin_string(argv[i_238])))));
                                                                                    right_value343 = come_decrement_ref_count2(right_value343, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        # 547 "02transpile.c"
        gComeDebug=come_debug_235;
        # 548 "02transpile.c"
        gComeMalloc=come_malloc_236;
        # 559 "02transpile.c"
        # 550 "02transpile.c"
        if(come_str_237) {
            # 557 "02transpile.c"
            # 551 "02transpile.c"
            if(gComeGC) {
                # 552 "02transpile.c"
                buffer_append_str(clang_option_225," -lneo-c-str-gc -lpcre ");
            }
            else {
                # 555 "02transpile.c"
                buffer_append_str(clang_option_225," -lneo-c-str -lpcre ");
            }
        }
        # 559 "02transpile.c"
        if(_and_conditional1=f_239=fopen(output_file_name_232,"w"),        _and_conditional1 == 0) {
            # 559 "02transpile.c"
            (come_push_stackframe("02transpile.c", 559, 7),__exception_result_var_b8=die("fopen"), come_pop_stackframe(), __exception_result_var_b8);
        }
        # 560 "02transpile.c"
        fclose(f_239);
        # 562 "02transpile.c"
        if(_or_conditional8=truncate(output_file_name_232,0),        _or_conditional8 != 0) {
            # 562 "02transpile.c"
            (come_push_stackframe("02transpile.c", 562, 8),__exception_result_var_b9=die("truncate"), come_pop_stackframe(), __exception_result_var_b9);
        }
        # 564 "02transpile.c"
        tmp_file_240=(char*)come_increment_ref_count(((char*)(right_value344=__builtin_string("tmp-common-header"))));
        right_value344 = come_decrement_ref_count2(right_value344, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 566 "02transpile.c"
        system(((char*)(right_value348=xsprintf("cat \%s > \%s",((char*)(right_value346=string_to_string(((char*)(right_value345=list$1charph_join(files_227," ")))))),((char*)(right_value347=string_to_string(tmp_file_240)))))));
        right_value345 = come_decrement_ref_count2(right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value346 = come_decrement_ref_count2(right_value346, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value347 = come_decrement_ref_count2(right_value347, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value348 = come_decrement_ref_count2(right_value348, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 568 "02transpile.c"
        # 570 "02transpile.c"
        memset(&info_241,0,sizeof(struct sInfo));
        # 572 "02transpile.c"
        __dec_obj64=info_241.base_sname;
        info_241.base_sname=(char*)come_increment_ref_count(((char*)(right_value349=__builtin_string(tmp_file_240))));
        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value349 = come_decrement_ref_count2(right_value349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 573 "02transpile.c"
        __dec_obj65=info_241.sname;
        info_241.sname=(char*)come_increment_ref_count(((char*)(right_value350=__builtin_string(tmp_file_240))));
        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value350 = come_decrement_ref_count2(right_value350, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 574 "02transpile.c"
        info_241.sline=1;
        # 575 "02transpile.c"
        info_241.err_num=0;
        # 576 "02transpile.c"
        __dec_obj66=info_241.clang_option;
        info_241.clang_option=(char*)come_increment_ref_count(((char*)(right_value351=buffer_to_string(clang_option_225))));
        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value351 = come_decrement_ref_count2(right_value351, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 577 "02transpile.c"
        __dec_obj67=info_241.cpp_option;
        info_241.cpp_option=(char*)come_increment_ref_count(((char*)(right_value352=buffer_to_string(cpp_option_226))));
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value352 = come_decrement_ref_count2(right_value352, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 578 "02transpile.c"
        info_241.no_output_err=(_Bool)0;
        # 579 "02transpile.c"
        __dec_obj69=info_241.funcs;
        info_241.funcs=(struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value359=map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value353=(struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 579, "map$2charphsFunph"))))))));
        come_call_finalizer3(__dec_obj69,map$2charphsFunph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value353,map$2charphsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value359,map$2charphsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 580 "02transpile.c"
        __dec_obj71=info_241.generics_funcs;
        info_241.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value366=map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value360=(struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 580, "map$2charphsGenericsFunph"))))))));
        come_call_finalizer3(__dec_obj71,map$2charphsGenericsFunph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value360,map$2charphsGenericsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value366,map$2charphsGenericsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 581 "02transpile.c"
        __dec_obj73=info_241.classes;
        info_241.classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value373=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value367=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 581, "map$2charphsClassph"))))))));
        come_call_finalizer3(__dec_obj73,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value367,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value373,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 582 "02transpile.c"
        __dec_obj75=info_241.modules;
        info_241.modules=(struct map$2charphsClassModuleph*)come_increment_ref_count(((struct map$2charphsClassModuleph*)(right_value380=map$2charphsClassModuleph_initialize((struct map$2charphsClassModuleph*)come_increment_ref_count(((struct map$2charphsClassModuleph*)(right_value374=(struct map$2charphsClassModuleph*)come_calloc(1, sizeof(struct map$2charphsClassModuleph)*(1), "02transpile.c", 582, "map$2charphsClassModuleph"))))))));
        come_call_finalizer3(__dec_obj75,map$2charphsClassModuleph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value374,map$2charphsClassModulephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value380,map$2charphsClassModulephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 583 "02transpile.c"
        __dec_obj77=info_241.types;
        info_241.types=(struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value387=map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value381=(struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 583, "map$2charphsTypeph"))))))));
        come_call_finalizer3(__dec_obj77,map$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value381,map$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value387,map$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 584 "02transpile.c"
        __dec_obj78=info_241.module;
        info_241.module=(struct sModule*)come_increment_ref_count(((struct sModule*)(right_value389=sModule_initialize((struct sModule*)come_increment_ref_count(((struct sModule*)(right_value388=(struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 584, "sModule"))))))));
        come_call_finalizer3(__dec_obj78,sModule_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value388,sModule_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value389,sModule_finalize, 0, 1, 0, 0, __result_obj__);
        # 585 "02transpile.c"
        __dec_obj79=info_241.right_value_objects;
        info_241.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value391=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value390=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 585, "list$1sRightValueObjectph"))))))));
        come_call_finalizer3(__dec_obj79,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value390,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value391,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 586 "02transpile.c"
        __dec_obj80=info_241.stack;
        info_241.stack=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value393=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value392=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 586, "list$1CVALUEph"))))))));
        come_call_finalizer3(__dec_obj80,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value392,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value393,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 587 "02transpile.c"
        __dec_obj81=info_241.gv_table;
        info_241.gv_table=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value395=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value394=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 587, "sVarTable")))),(_Bool)1,((void*)0)))));
        come_call_finalizer3(__dec_obj81,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value394,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value395,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        # 588 "02transpile.c"
        lv_table_277=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value397=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value396=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 588, "sVarTable")))),(_Bool)0,((void*)0)))));
        come_call_finalizer3(right_value396,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value397,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        # 589 "02transpile.c"
        info_241.lv_table=lv_table_277;
        # 590 "02transpile.c"
        __dec_obj82=info_241.generics_type_names;
        info_241.generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value399=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value398=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 590, "list$1charph"))))))));
        come_call_finalizer3(__dec_obj82,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value398,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value399,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 591 "02transpile.c"
        __dec_obj83=info_241.method_generics_type_names;
        info_241.method_generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value401=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value400=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 591, "list$1charph"))))))));
        come_call_finalizer3(__dec_obj83,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value400,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value401,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 592 "02transpile.c"
        __dec_obj84=info_241.generics_classes;
        info_241.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value403=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value402=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 592, "map$2charphsClassph"))))))));
        come_call_finalizer3(__dec_obj84,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value402,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value403,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 593 "02transpile.c"
        info_241.verbose=verbose_233;
        # 594 "02transpile.c"
        info_241.output_header_file=(_Bool)1;
        # 596 "02transpile.c"
        # 597 "02transpile.c"
        info_241.num_source_files=n_278++;
        # 598 "02transpile.c"
        info_241.max_source_files=list$1charph_length(files_227);
        # 600 "02transpile.c"
        __dec_obj85=info_241.output_file_name;
        info_241.output_file_name=(char*)come_increment_ref_count(((char*)(right_value404=__builtin_string(output_file_name_232))));
        __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value404 = come_decrement_ref_count2(right_value404, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 602 "02transpile.c"
        init_classes(&info_241);
        # 604 "02transpile.c"
        clear_tmp_file(&info_241);
        # 611 "02transpile.c"
        # 606 "02transpile.c"
        if(_if_conditional381=!cpp(&info_241),        _if_conditional381) {
            # 607 "02transpile.c"
            printf("%s %d: transpile failed\n",info_241.sname,info_241.sline);
            # 608 "02transpile.c"
            exit(2);
        }
        # 611 "02transpile.c"
        __dec_obj86=info_241.original_source;
        info_241.original_source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value407=string_to_buffer(((char*)(right_value406=string_read(((char*)(right_value405=xsprintf("%s",tmp_file_240))))))))));
        come_call_finalizer3(__dec_obj86,buffer_finalize, 0, 0, 0, 0, (void*)0);
        right_value405 = come_decrement_ref_count2(right_value405, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value406 = come_decrement_ref_count2(right_value406, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value407,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 612 "02transpile.c"
        __dec_obj87=info_241.source;
        info_241.source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value410=string_to_buffer(((char*)(right_value409=string_read(((char*)(right_value408=xsprintf("%s.i",tmp_file_240))))))))));
        come_call_finalizer3(__dec_obj87,buffer_finalize, 0, 0, 0, 0, (void*)0);
        right_value408 = come_decrement_ref_count2(right_value408, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value409 = come_decrement_ref_count2(right_value409, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value410,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 613 "02transpile.c"
        info_241.p=info_241.source->buf;
        # 614 "02transpile.c"
        info_241.head=info_241.source->buf;
        # 625 "02transpile.c"
        # 616 "02transpile.c"
        if(_if_conditional382=!output_cpp_file_230,        _if_conditional382) {
            # 617 "02transpile.c"
            transpile_v5(&info_241);
            # 623 "02transpile.c"
            # 619 "02transpile.c"
            if(_if_conditional383=!output_header_file(&info_241),            _if_conditional383) {
                # 620 "02transpile.c"
                printf("%s %d: output source file faield\n",info_241.sname,info_241.sline);
                # 621 "02transpile.c"
                exit(2);
            }
        }
        # 625 "02transpile.c"
        system(((char*)(right_value412=xsprintf("rm -rf \%s*",((char*)(right_value411=string_to_string(tmp_file_240)))))));
        right_value411 = come_decrement_ref_count2(right_value411, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value412 = come_decrement_ref_count2(right_value412, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(clang_option_225,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(cpp_option_226,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(files_227,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(object_files_228,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        output_file_name_232 = come_decrement_ref_count2(output_file_name_232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        tmp_file_240 = come_decrement_ref_count2(tmp_file_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3((&info_241),sInfo_finalize, 1, 0, 0, 0, (void*)0);
        come_call_finalizer3(lv_table_277,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 857 "02transpile.c"
        # 627 "02transpile.c"
        if(_if_conditional416=charp_operator_equals(argv[1],"new")&&argc==3,        _if_conditional416) {
            # 631 "02transpile.c"
            # 628 "02transpile.c"
            if(_if_conditional417=!new_project(argc,argv),            _if_conditional417) {
                # 629 "02transpile.c"
                __result161__ = (_Bool)0;
                return __result161__;
            }
        }
        else {
            # 857 "02transpile.c"
            # 632 "02transpile.c"
            if(_if_conditional418=charp_operator_equals(argv[1],"run")&&argc==2,            _if_conditional418) {
                # 636 "02transpile.c"
                # 633 "02transpile.c"
                if(_if_conditional419=!run_project(argc,argv),                _if_conditional419) {
                    # 634 "02transpile.c"
                    __result162__ = (_Bool)0;
                    return __result162__;
                }
            }
            else {
                # 857 "02transpile.c"
                # 637 "02transpile.c"
                if(_if_conditional420=charp_operator_equals(argv[1],"header")&&argc==2,                _if_conditional420) {
                    # 641 "02transpile.c"
                    # 638 "02transpile.c"
                    if(_if_conditional421=!make_header_project(argc,argv),                    _if_conditional421) {
                        # 639 "02transpile.c"
                        __result163__ = (_Bool)0;
                        return __result163__;
                    }
                }
                else {
                    # 857 "02transpile.c"
                    # 642 "02transpile.c"
                    if(_if_conditional422=charp_operator_equals(argv[1],"compile")&&argc==2,                    _if_conditional422) {
                        # 646 "02transpile.c"
                        # 643 "02transpile.c"
                        if(_if_conditional423=!compile_project(argc,argv),                        _if_conditional423) {
                            # 644 "02transpile.c"
                            __result164__ = (_Bool)0;
                            return __result164__;
                        }
                    }
                    else {
                        # 857 "02transpile.c"
                        # 647 "02transpile.c"
                        if(_if_conditional424=charp_operator_equals(argv[1],"debug")&&argc==2,                        _if_conditional424) {
                            # 651 "02transpile.c"
                            # 648 "02transpile.c"
                            if(_if_conditional425=!debug_run_project(argc,argv),                            _if_conditional425) {
                                # 649 "02transpile.c"
                                __result165__ = (_Bool)0;
                                return __result165__;
                            }
                        }
                        else {
                            # 857 "02transpile.c"
                            # 652 "02transpile.c"
                            if(_if_conditional426=charp_operator_equals(argv[1],"clean")&&argc==2,                            _if_conditional426) {
                                # 656 "02transpile.c"
                                # 653 "02transpile.c"
                                if(_if_conditional427=!clean_project(argc,argv),                                _if_conditional427) {
                                    # 654 "02transpile.c"
                                    __result166__ = (_Bool)0;
                                    return __result166__;
                                }
                            }
                            else {
                                # 857 "02transpile.c"
                                # 657 "02transpile.c"
                                if(_if_conditional428=charp_operator_equals(argv[1],"install")&&argc>=2,                                _if_conditional428) {
                                    # 668 "02transpile.c"
                                    # 658 "02transpile.c"
                                    if(_if_conditional429=argc==2,                                    _if_conditional429) {
                                        # 662 "02transpile.c"
                                        # 659 "02transpile.c"
                                        if(_if_conditional430=!install_project(argc,argv,"/usr/local"),                                        _if_conditional430) {
                                            # 660 "02transpile.c"
                                            __result167__ = (_Bool)0;
                                            return __result167__;
                                        }
                                    }
                                    else {
                                        # 668 "02transpile.c"
                                        # 663 "02transpile.c"
                                        if(_if_conditional431=argc>=3,                                        _if_conditional431) {
                                            # 667 "02transpile.c"
                                            # 664 "02transpile.c"
                                            if(_if_conditional432=!install_project(argc,argv,argv[2]),                                            _if_conditional432) {
                                                # 665 "02transpile.c"
                                                __result168__ = (_Bool)0;
                                                return __result168__;
                                            }
                                        }
                                    }
                                }
                                else {
                                    # 670 "02transpile.c"
                                    gProgramName=argv[0];
                                    # 672 "02transpile.c"
                                    clang_option_281=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value414=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value413=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 672, "buffer"))))))));
                                    come_call_finalizer3(right_value413,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value414,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 673 "02transpile.c"
                                    cpp_option_282=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value416=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value415=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 673, "buffer"))))))));
                                    come_call_finalizer3(right_value415,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value416,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 674 "02transpile.c"
                                    files_283=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value418=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value417=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 674, "list$1charph"))))))));
                                    come_call_finalizer3(right_value417,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value418,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 675 "02transpile.c"
                                    object_files_284=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value420=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value419=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 675, "list$1charph"))))))));
                                    come_call_finalizer3(right_value419,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value420,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 676 "02transpile.c"
                                    output_object_file_285=(_Bool)0;
                                    # 677 "02transpile.c"
                                    output_cpp_file_286=(_Bool)0;
                                    # 678 "02transpile.c"
                                    output_source_file_flag_287=(_Bool)0;
                                    # 679 "02transpile.c"
                                    output_file_name_288=((void*)0);
                                    # 680 "02transpile.c"
                                    verbose_289=(_Bool)0;
                                    # 681 "02transpile.c"
                                    come_debug_290=(_Bool)0;
                                    # 682 "02transpile.c"
                                    come_malloc_291=(_Bool)0;
                                    # 683 "02transpile.c"
                                    come_str_292=(_Bool)0;
                                    # 749 "02transpile.c"
                                    for(                                    i_293=1;                                    i_293<argc;                                    i_293++                                    ){
                                        # 747 "02transpile.c"
                                        # 685 "02transpile.c"
                                        if(_if_conditional433=charp_operator_equals(argv[i_293],"-o")&&i_293+1<argc,                                        _if_conditional433) {
                                            # 686 "02transpile.c"
                                            __dec_obj88=output_file_name_288;
                                            output_file_name_288=(char*)come_increment_ref_count(((char*)(right_value421=__builtin_string(argv[i_293+1]))));
                                            __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value421 = come_decrement_ref_count2(right_value421, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            # 687 "02transpile.c"
                                            i_293++;
                                        }
                                        else {
                                            # 747 "02transpile.c"
                                            # 689 "02transpile.c"
                                            if(_if_conditional434=charp_operator_equals(argv[i_293],"-str"),                                            _if_conditional434) {
                                                # 690 "02transpile.c"
                                                come_str_292=(_Bool)1;
                                            }
                                            else {
                                                # 747 "02transpile.c"
                                                # 692 "02transpile.c"
                                                if(_if_conditional435=charp_operator_equals(argv[i_293],"-leak"),                                                _if_conditional435) {
                                                    # 693 "02transpile.c"
                                                    come_malloc_291=(_Bool)1;
                                                }
                                                else {
                                                    # 747 "02transpile.c"
                                                    # 695 "02transpile.c"
                                                    if(_if_conditional436=charp_operator_equals(argv[i_293],"-gc"),                                                    _if_conditional436) {
                                                        # 696 "02transpile.c"
                                                        gComeGC=(_Bool)1;
                                                    }
                                                    else {
                                                        # 747 "02transpile.c"
                                                        # 698 "02transpile.c"
                                                        if(_if_conditional437=charp_operator_equals(argv[i_293],"-cg"),                                                        _if_conditional437) {
                                                            # 699 "02transpile.c"
                                                            come_debug_290=(_Bool)1;
                                                            # 700 "02transpile.c"
                                                            buffer_append_str(clang_option_281,"-g ");
                                                        }
                                                        else {
                                                            # 747 "02transpile.c"
                                                            # 702 "02transpile.c"
                                                            if(_if_conditional438=charp_operator_equals(argv[i_293],"-common-header"),                                                            _if_conditional438) {
                                                                # 703 "02transpile.c"
                                                                gCommonHeader=(_Bool)1;
                                                            }
                                                            else {
                                                                # 747 "02transpile.c"
                                                                # 705 "02transpile.c"
                                                                if(_if_conditional439=charp_operator_equals(argv[i_293],"-original-position"),                                                                _if_conditional439) {
                                                                    # 706 "02transpile.c"
                                                                    gComeOriginalSourcePosition=(_Bool)0;
                                                                }
                                                                else {
                                                                    # 747 "02transpile.c"
                                                                    # 708 "02transpile.c"
                                                                    if(_if_conditional440=string_operator_equals(((char*)(right_value422=charp_operator_load_range_element(argv[i_293],0,2))),"-O"),                                                                    right_value422 = come_decrement_ref_count2(right_value422, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                                                                    _if_conditional440) {
                                                                        # 709 "02transpile.c"
                                                                        buffer_append_str(clang_option_281,((char*)(right_value424=xsprintf(" \%s ",((char*)(right_value423=charp_to_string(argv[i_293])))))));
                                                                        right_value423 = come_decrement_ref_count2(right_value423, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        right_value424 = come_decrement_ref_count2(right_value424, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        # 710 "02transpile.c"
                                                                        come_debug_290=(_Bool)0;
                                                                    }
                                                                    else {
                                                                        # 747 "02transpile.c"
                                                                        # 712 "02transpile.c"
                                                                        if(_if_conditional441=string_operator_equals(((char*)(right_value425=charp_operator_load_range_element(argv[i_293],0,2))),"-D"),                                                                        right_value425 = come_decrement_ref_count2(right_value425, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                                                                        _if_conditional441) {
                                                                            # 713 "02transpile.c"
                                                                            buffer_append_str(cpp_option_282,((char*)(right_value427=xsprintf(" \%s ",((char*)(right_value426=charp_to_string(argv[i_293])))))));
                                                                            right_value426 = come_decrement_ref_count2(right_value426, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            right_value427 = come_decrement_ref_count2(right_value427, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            # 714 "02transpile.c"
                                                                            buffer_append_str(clang_option_281,((char*)(right_value429=xsprintf(" \%s ",((char*)(right_value428=charp_to_string(argv[i_293])))))));
                                                                            right_value428 = come_decrement_ref_count2(right_value428, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            right_value429 = come_decrement_ref_count2(right_value429, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        }
                                                                        else {
                                                                            # 747 "02transpile.c"
                                                                            # 716 "02transpile.c"
                                                                            if(_if_conditional442=charp_operator_equals(argv[i_293],"-g"),                                                                            _if_conditional442) {
                                                                                # 717 "02transpile.c"
                                                                                buffer_append_str(clang_option_281,"-g ");
                                                                            }
                                                                            else {
                                                                                # 747 "02transpile.c"
                                                                                # 719 "02transpile.c"
                                                                                if(_if_conditional443=charp_operator_equals(argv[i_293],"-v"),                                                                                _if_conditional443) {
                                                                                    # 720 "02transpile.c"
                                                                                    buffer_append_str(clang_option_281,"-v ");
                                                                                    # 721 "02transpile.c"
                                                                                    verbose_289=(_Bool)1;
                                                                                }
                                                                                else {
                                                                                    # 747 "02transpile.c"
                                                                                    # 723 "02transpile.c"
                                                                                    if(_if_conditional444=strlen(argv[i_293])>=2&&memcmp(argv[i_293],"-I",strlen("-I"))==0,                                                                                    _if_conditional444) {
                                                                                        # 724 "02transpile.c"
                                                                                        buffer_append_str(cpp_option_282,((char*)(right_value431=charp_operator_add(" ",((char*)(right_value430=charp_operator_add(argv[i_293]," ")))))));
                                                                                        right_value430 = come_decrement_ref_count2(right_value430, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                        right_value431 = come_decrement_ref_count2(right_value431, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    }
                                                                                    else {
                                                                                        # 747 "02transpile.c"
                                                                                        # 726 "02transpile.c"
                                                                                        if(_if_conditional445=charp_operator_equals(argv[i_293],"-gdwarf-4"),                                                                                        _if_conditional445) {
                                                                                            # 727 "02transpile.c"
                                                                                            buffer_append_str(clang_option_281,"-gdwarf-4 ");
                                                                                        }
                                                                                        else {
                                                                                            # 747 "02transpile.c"
                                                                                            # 729 "02transpile.c"
                                                                                            if(_if_conditional446=charp_operator_equals(argv[i_293],"-s")||charp_operator_equals(argv[i_293],"-S"),                                                                                            _if_conditional446) {
                                                                                                # 730 "02transpile.c"
                                                                                                output_source_file_flag_287=(_Bool)1;
                                                                                            }
                                                                                            else {
                                                                                                # 747 "02transpile.c"
                                                                                                # 732 "02transpile.c"
                                                                                                if(_if_conditional447=charp_operator_equals(argv[i_293],"-c"),                                                                                                _if_conditional447) {
                                                                                                    # 733 "02transpile.c"
                                                                                                    output_object_file_285=(_Bool)1;
                                                                                                }
                                                                                                else {
                                                                                                    # 747 "02transpile.c"
                                                                                                    # 735 "02transpile.c"
                                                                                                    if(_if_conditional448=charp_operator_equals(argv[i_293],"-E"),                                                                                                    _if_conditional448) {
                                                                                                        # 736 "02transpile.c"
                                                                                                        output_cpp_file_286=(_Bool)1;
                                                                                                    }
                                                                                                    else {
                                                                                                        # 747 "02transpile.c"
                                                                                                        # 738 "02transpile.c"
                                                                                                        if(_if_conditional449=argv[i_293][0]==45,                                                                                                        _if_conditional449) {
                                                                                                            # 739 "02transpile.c"
                                                                                                            buffer_append_str(clang_option_281,((char*)(right_value432=charp_operator_add(argv[i_293]," "))));
                                                                                                            right_value432 = come_decrement_ref_count2(right_value432, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                        }
                                                                                                        else {
                                                                                                            # 747 "02transpile.c"
                                                                                                            # 741 "02transpile.c"
                                                                                                            if(_if_conditional450=strlen(argv[i_293])>2&&memcmp(argv[i_293]+strlen(argv[i_293])-2,".o",2)==0,                                                                                                            _if_conditional450) {
                                                                                                                # 742 "02transpile.c"
                                                                                                                list$1charph_push_back(object_files_284,(char*)come_increment_ref_count(((char*)(right_value433=__builtin_string(argv[i_293])))));
                                                                                                                right_value433 = come_decrement_ref_count2(right_value433, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                            }
                                                                                                            else {
                                                                                                                # 745 "02transpile.c"
                                                                                                                list$1charph_push_back(files_283,(char*)come_increment_ref_count(((char*)(right_value435=string_clone(((char*)(right_value434=__builtin_string(argv[i_293]))))))));
                                                                                                                right_value434 = come_decrement_ref_count2(right_value434, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                right_value435 = come_decrement_ref_count2(right_value435, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    # 749 "02transpile.c"
                                    gComeDebug=come_debug_290;
                                    # 750 "02transpile.c"
                                    gComeMalloc=come_malloc_291;
                                    # 761 "02transpile.c"
                                    # 752 "02transpile.c"
                                    if(come_str_292) {
                                        # 759 "02transpile.c"
                                        # 753 "02transpile.c"
                                        if(gComeGC) {
                                            # 754 "02transpile.c"
                                            buffer_append_str(clang_option_281," -lneo-c-str-gc -lpcre ");
                                        }
                                        else {
                                            # 757 "02transpile.c"
                                            buffer_append_str(clang_option_281," -lneo-c-str -lpcre ");
                                        }
                                    }
                                    # 833 "02transpile.c"
                                    for(                                    o2_saved_294=(struct list$1charph*)come_increment_ref_count((files_283)),it_295=list$1charph_begin((o2_saved_294));                                    !list$1charph_end((o2_saved_294));                                    it_295=list$1charph_next((o2_saved_294))                                    ){
                                        # 762 "02transpile.c"
                                        # 764 "02transpile.c"
                                        memset(&info_296,0,sizeof(struct sInfo));
                                        # 766 "02transpile.c"
                                        __dec_obj89=info_296.sname;
                                        info_296.sname=(char*)come_increment_ref_count(((char*)(right_value436=__builtin_string(it_295))));
                                        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value436 = come_decrement_ref_count2(right_value436, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 767 "02transpile.c"
                                        info_296.sline=1;
                                        # 768 "02transpile.c"
                                        info_296.err_num=0;
                                        # 769 "02transpile.c"
                                        __dec_obj90=info_296.clang_option;
                                        info_296.clang_option=(char*)come_increment_ref_count(((char*)(right_value437=buffer_to_string(clang_option_281))));
                                        __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value437 = come_decrement_ref_count2(right_value437, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 770 "02transpile.c"
                                        __dec_obj91=info_296.cpp_option;
                                        info_296.cpp_option=(char*)come_increment_ref_count(((char*)(right_value438=buffer_to_string(cpp_option_282))));
                                        __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value438 = come_decrement_ref_count2(right_value438, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 771 "02transpile.c"
                                        info_296.no_output_err=(_Bool)0;
                                        # 772 "02transpile.c"
                                        __dec_obj92=info_296.funcs;
                                        info_296.funcs=(struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value440=map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value439=(struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 772, "map$2charphsFunph"))))))));
                                        come_call_finalizer3(__dec_obj92,map$2charphsFunph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value439,map$2charphsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value440,map$2charphsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 773 "02transpile.c"
                                        __dec_obj93=info_296.generics_funcs;
                                        info_296.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value442=map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value441=(struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 773, "map$2charphsGenericsFunph"))))))));
                                        come_call_finalizer3(__dec_obj93,map$2charphsGenericsFunph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value441,map$2charphsGenericsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value442,map$2charphsGenericsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 774 "02transpile.c"
                                        __dec_obj94=info_296.classes;
                                        info_296.classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value444=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value443=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 774, "map$2charphsClassph"))))))));
                                        come_call_finalizer3(__dec_obj94,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value443,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value444,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 775 "02transpile.c"
                                        __dec_obj95=info_296.modules;
                                        info_296.modules=(struct map$2charphsClassModuleph*)come_increment_ref_count(((struct map$2charphsClassModuleph*)(right_value446=map$2charphsClassModuleph_initialize((struct map$2charphsClassModuleph*)come_increment_ref_count(((struct map$2charphsClassModuleph*)(right_value445=(struct map$2charphsClassModuleph*)come_calloc(1, sizeof(struct map$2charphsClassModuleph)*(1), "02transpile.c", 775, "map$2charphsClassModuleph"))))))));
                                        come_call_finalizer3(__dec_obj95,map$2charphsClassModuleph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value445,map$2charphsClassModulephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value446,map$2charphsClassModulephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 776 "02transpile.c"
                                        __dec_obj96=info_296.types;
                                        info_296.types=(struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value448=map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value447=(struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 776, "map$2charphsTypeph"))))))));
                                        come_call_finalizer3(__dec_obj96,map$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value447,map$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value448,map$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 777 "02transpile.c"
                                        __dec_obj97=info_296.module;
                                        info_296.module=(struct sModule*)come_increment_ref_count(((struct sModule*)(right_value450=sModule_initialize((struct sModule*)come_increment_ref_count(((struct sModule*)(right_value449=(struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 777, "sModule"))))))));
                                        come_call_finalizer3(__dec_obj97,sModule_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value449,sModule_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value450,sModule_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 778 "02transpile.c"
                                        __dec_obj98=info_296.right_value_objects;
                                        info_296.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value452=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value451=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 778, "list$1sRightValueObjectph"))))))));
                                        come_call_finalizer3(__dec_obj98,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value451,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value452,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 779 "02transpile.c"
                                        __dec_obj99=info_296.stack;
                                        info_296.stack=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value454=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value453=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 779, "list$1CVALUEph"))))))));
                                        come_call_finalizer3(__dec_obj99,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value453,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value454,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 780 "02transpile.c"
                                        __dec_obj100=info_296.gv_table;
                                        info_296.gv_table=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value456=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value455=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 780, "sVarTable")))),(_Bool)1,((void*)0)))));
                                        come_call_finalizer3(__dec_obj100,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value455,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value456,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 781 "02transpile.c"
                                        lv_table_297=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value458=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value457=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 781, "sVarTable")))),(_Bool)0,((void*)0)))));
                                        come_call_finalizer3(right_value457,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value458,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 782 "02transpile.c"
                                        info_296.lv_table=lv_table_297;
                                        # 783 "02transpile.c"
                                        __dec_obj101=info_296.generics_type_names;
                                        info_296.generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value460=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value459=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 783, "list$1charph"))))))));
                                        come_call_finalizer3(__dec_obj101,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value459,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value460,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 784 "02transpile.c"
                                        __dec_obj102=info_296.method_generics_type_names;
                                        info_296.method_generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value462=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value461=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 784, "list$1charph"))))))));
                                        come_call_finalizer3(__dec_obj102,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value461,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value462,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 785 "02transpile.c"
                                        __dec_obj103=info_296.generics_classes;
                                        info_296.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value464=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value463=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 785, "map$2charphsClassph"))))))));
                                        come_call_finalizer3(__dec_obj103,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value463,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value464,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 786 "02transpile.c"
                                        info_296.verbose=verbose_289;
                                        # 788 "02transpile.c"
                                        init_classes(&info_296);
                                        # 790 "02transpile.c"
                                        clear_tmp_file(&info_296);
                                        # 797 "02transpile.c"
                                        # 792 "02transpile.c"
                                        if(_if_conditional453=!cpp(&info_296),                                        _if_conditional453) {
                                            # 793 "02transpile.c"
                                            printf("%s %d: transpile failed\n",info_296.sname,info_296.sline);
                                            # 794 "02transpile.c"
                                            exit(2);
                                        }
                                        # 797 "02transpile.c"
                                        __dec_obj104=info_296.original_source;
                                        info_296.original_source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value467=string_to_buffer(((char*)(right_value466=string_read(((char*)(right_value465=xsprintf("%s",it_295))))))))));
                                        come_call_finalizer3(__dec_obj104,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                        right_value465 = come_decrement_ref_count2(right_value465, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value466 = come_decrement_ref_count2(right_value466, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value467,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 798 "02transpile.c"
                                        __dec_obj105=info_296.source;
                                        info_296.source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value470=string_to_buffer(((char*)(right_value469=string_read(((char*)(right_value468=xsprintf("%s.i",it_295))))))))));
                                        come_call_finalizer3(__dec_obj105,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                        right_value468 = come_decrement_ref_count2(right_value468, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value469 = come_decrement_ref_count2(right_value469, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value470,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 799 "02transpile.c"
                                        info_296.p=info_296.source->buf;
                                        # 800 "02transpile.c"
                                        info_296.head=info_296.source->buf;
                                        # 809 "02transpile.c"
                                        # 802 "02transpile.c"
                                        if(output_file_name_288) {
                                            # 803 "02transpile.c"
                                            __dec_obj106=info_296.output_file_name;
                                            info_296.output_file_name=(char*)come_increment_ref_count(((char*)(right_value471=__builtin_string(output_file_name_288))));
                                            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value471 = come_decrement_ref_count2(right_value471, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        else {
                                            # 806 "02transpile.c"
                                            __dec_obj107=info_296.output_file_name;
                                            info_296.output_file_name=((void*)0);
                                            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        }
                                        # 831 "02transpile.c"
                                        # 809 "02transpile.c"
                                        if(_if_conditional455=!output_cpp_file_286,                                        _if_conditional455) {
                                            # 810 "02transpile.c"
                                            transpile_v5(&info_296);
                                            # 817 "02transpile.c"
                                            # 812 "02transpile.c"
                                            if(_if_conditional456=!output_source_file_v3(&info_296),                                            _if_conditional456) {
                                                # 813 "02transpile.c"
                                                printf("%s %d: output source file faield\n",info_296.sname,info_296.sline);
                                                # 814 "02transpile.c"
                                                exit(2);
                                            }
                                            # 830 "02transpile.c"
                                            # 817 "02transpile.c"
                                            if(_if_conditional457=info_296.err_num>0,                                            _if_conditional457) {
                                                # 818 "02transpile.c"
                                                printf("transpile error. err num %d\n",info_296.err_num);
                                                # 820 "02transpile.c"
                                                exit(2);
                                            }
                                            else {
                                                # 828 "02transpile.c"
                                                # 823 "02transpile.c"
                                                if(_if_conditional458=!compile(&info_296,output_object_file_285,object_files_284),                                                _if_conditional458) {
                                                    # 824 "02transpile.c"
                                                    printf("%s %d: compile faield\n",info_296.sname,info_296.sline);
                                                    # 825 "02transpile.c"
                                                    exit(27);
                                                }
                                            }
                                        }
                                        come_call_finalizer3((&info_296),sInfo_finalize, 1, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(lv_table_297,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    come_call_finalizer3(o2_saved_294,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    # 854 "02transpile.c"
                                    # 833 "02transpile.c"
                                    if(_if_conditional459=!output_object_file_285&&!output_cpp_file_286&&(list$1charph_length(files_283)>0||list$1charph_length(object_files_284)>0),                                    _if_conditional459) {
                                        # 834 "02transpile.c"
                                        # 836 "02transpile.c"
                                        memset(&info_298,0,sizeof(struct sInfo));
                                        # 838 "02transpile.c"
                                        __dec_obj108=info_298.sname;
                                        info_298.sname=(char*)come_increment_ref_count(((char*)(right_value472=string_clone(list$1charphp_operator_load_element(files_283,0)))));
                                        __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value472 = come_decrement_ref_count2(right_value472, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 839 "02transpile.c"
                                        __dec_obj109=info_298.clang_option;
                                        info_298.clang_option=(char*)come_increment_ref_count(((char*)(right_value473=buffer_to_string(clang_option_281))));
                                        __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value473 = come_decrement_ref_count2(right_value473, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 840 "02transpile.c"
                                        info_298.verbose=verbose_289;
                                        # 849 "02transpile.c"
                                        # 842 "02transpile.c"
                                        if(output_file_name_288) {
                                            # 843 "02transpile.c"
                                            __dec_obj110=info_298.output_file_name;
                                            info_298.output_file_name=(char*)come_increment_ref_count(((char*)(right_value474=__builtin_string(output_file_name_288))));
                                            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value474 = come_decrement_ref_count2(right_value474, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        else {
                                            # 846 "02transpile.c"
                                            __dec_obj111=info_298.output_file_name;
                                            info_298.output_file_name=((void*)0);
                                            __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        }
                                        # 853 "02transpile.c"
                                        __current_stack2__.info_298 = &info_298;
                                        __current_stack2__.clang_option_281 = &clang_option_281;
                                        __current_stack2__.cpp_option_282 = &cpp_option_282;
                                        __current_stack2__.files_283 = &files_283;
                                        __current_stack2__.object_files_284 = &object_files_284;
                                        __current_stack2__.output_object_file_285 = &output_object_file_285;
                                        __current_stack2__.output_cpp_file_286 = &output_cpp_file_286;
                                        __current_stack2__.output_source_file_flag_287 = &output_source_file_flag_287;
                                        __current_stack2__.output_file_name_288 = &output_file_name_288;
                                        __current_stack2__.verbose_289 = &verbose_289;
                                        __current_stack2__.come_debug_290 = &come_debug_290;
                                        __current_stack2__.come_malloc_291 = &come_malloc_291;
                                        __current_stack2__.come_str_292 = &come_str_292;
                                        __current_stack2__.argc = &argc;
                                        __current_stack2__.argv = &argv;
                                        bool_expect(linker(&info_298,object_files_284),&__current_stack2__,(void*)method_block2_02transpilec);
                                        come_call_finalizer3((&info_298),sInfo_finalize, 1, 0, 0, 0, (void*)0);
                                    }
                                    come_call_finalizer3(clang_option_281,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(cpp_option_282,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(files_283,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(object_files_284,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    output_file_name_288 = come_decrement_ref_count2(output_file_name_288, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    # 857 "02transpile.c"
    __result171__ = 0;
    return __result171__;
}

static struct map$2charphsFunph* map$2charphsFunph_initialize(struct map$2charphsFunph* self){
void* __result_obj__;
void* right_value354;
void* right_value355;
void* right_value356;
int i_242;
void* right_value357;
void* right_value358;
struct list$1charp* __dec_obj68;
struct map$2charphsFunph* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
right_value354 = (void*)0;
right_value355 = (void*)0;
right_value356 = (void*)0;
memset(&i_242, 0, sizeof(int));
right_value357 = (void*)0;
right_value358 = (void*)0;
            # 1062 "/usr/local/include/neo-c.h"
            self->keys=(char**)come_increment_ref_count(((char**)(right_value354=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/neo-c.h", 1062, "char*%"))));
            right_value354 = come_decrement_ref_count2(right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1063 "/usr/local/include/neo-c.h"
            self->items=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value355=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(128)), "/usr/local/include/neo-c.h", 1063, "sFun*%"))));
            come_call_finalizer3(right_value355,sFun_finalize, 0, 1, 0, 0, __result_obj__);
            # 1064 "/usr/local/include/neo-c.h"
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value356=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/neo-c.h", 1064, "bool"))));
            right_value356 = come_decrement_ref_count2(right_value356, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1071 "/usr/local/include/neo-c.h"
            for(            i_242=0;            i_242<128;            i_242++            ){
                # 1068 "/usr/local/include/neo-c.h"
                self->item_existance[i_242]=(_Bool)0;
            }
            # 1071 "/usr/local/include/neo-c.h"
            self->size=128;
            # 1072 "/usr/local/include/neo-c.h"
            self->len=0;
            # 1074 "/usr/local/include/neo-c.h"
            __dec_obj68=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value358=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value357=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/neo-c.h", 1074, "list$1charp"))))))));
            come_call_finalizer3(__dec_obj68,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value357,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value358,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            # 1076 "/usr/local/include/neo-c.h"
            self->it=0;
            # 1078 "/usr/local/include/neo-c.h"
            __result154__ = __result_obj__ = self;
            come_call_finalizer3(self,map$2charphsFunphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result154__;
            come_call_finalizer3(self,map$2charphsFunphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional299;
_Bool _if_conditional300;
_Bool _if_conditional301;
_Bool _if_conditional302;
_Bool _if_conditional303;
_Bool _if_conditional304;
_Bool _if_conditional305;
_Bool _if_conditional308;
_Bool _if_conditional309;
_Bool _if_conditional310;
_Bool _if_conditional311;
_Bool _if_conditional312;
_Bool _if_conditional313;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sFun_finalize"
                # 0 "sFun_finalize"
                if(_if_conditional299=self!=((void*)0)&&self->mName!=((void*)0),                _if_conditional299) {
                    # 0 "sFun_finalize"
                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 2 "sFun_finalize"
                # 1 "sFun_finalize"
                if(_if_conditional300=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional300) {
                    # 1 "sFun_finalize"
                    come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 3 "sFun_finalize"
                # 2 "sFun_finalize"
                if(_if_conditional301=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional301) {
                    # 2 "sFun_finalize"
                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 4 "sFun_finalize"
                # 3 "sFun_finalize"
                if(_if_conditional302=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional302) {
                    # 3 "sFun_finalize"
                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 5 "sFun_finalize"
                # 4 "sFun_finalize"
                if(_if_conditional303=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                _if_conditional303) {
                    # 4 "sFun_finalize"
                    come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 6 "sFun_finalize"
                # 5 "sFun_finalize"
                if(_if_conditional304=self!=((void*)0)&&self->mLambdaType!=((void*)0),                _if_conditional304) {
                    # 5 "sFun_finalize"
                    come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 7 "sFun_finalize"
                # 6 "sFun_finalize"
                if(_if_conditional305=self!=((void*)0)&&self->mBlock!=((void*)0),                _if_conditional305) {
                    # 6 "sFun_finalize"
                    come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 8 "sFun_finalize"
                # 7 "sFun_finalize"
                if(_if_conditional308=self!=((void*)0)&&self->mSource!=((void*)0),                _if_conditional308) {
                    # 7 "sFun_finalize"
                    come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 9 "sFun_finalize"
                # 8 "sFun_finalize"
                if(_if_conditional309=self!=((void*)0)&&self->mSourceHead!=((void*)0),                _if_conditional309) {
                    # 8 "sFun_finalize"
                    come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 10 "sFun_finalize"
                # 9 "sFun_finalize"
                if(_if_conditional310=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                _if_conditional310) {
                    # 9 "sFun_finalize"
                    come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 11 "sFun_finalize"
                # 10 "sFun_finalize"
                if(_if_conditional311=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                _if_conditional311) {
                    # 10 "sFun_finalize"
                    come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 12 "sFun_finalize"
                # 11 "sFun_finalize"
                if(_if_conditional312=self!=((void*)0)&&self->mComeHeader!=((void*)0),                _if_conditional312) {
                    # 11 "sFun_finalize"
                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 13 "sFun_finalize"
                # 12 "sFun_finalize"
                if(_if_conditional313=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                _if_conditional313) {
                    # 12 "sFun_finalize"
                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional306;
_Bool _if_conditional307;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sBlock_finalize"
                        # 0 "sBlock_finalize"
                        if(_if_conditional306=self!=((void*)0)&&self->mNodes!=((void*)0),                        _if_conditional306) {
                            # 0 "sBlock_finalize"
                            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        # 2 "sBlock_finalize"
                        # 1 "sBlock_finalize"
                        if(_if_conditional307=self!=((void*)0)&&self->mVarTable!=((void*)0),                        _if_conditional307) {
                            # 1 "sBlock_finalize"
                            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
                # 95 "/usr/local/include/neo-c.h"
                self->head=((void*)0);
                # 96 "/usr/local/include/neo-c.h"
                self->tail=((void*)0);
                # 97 "/usr/local/include/neo-c.h"
                self->len=0;
                # 99 "/usr/local/include/neo-c.h"
                __result153__ = __result_obj__ = self;
                come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
                return __result153__;
                come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_243;
_Bool _while_condtional32;
struct list_item$1charp* prev_it_244;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_243, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_244, 0, sizeof(struct list_item$1charp*));
                    # 114 "/usr/local/include/neo-c.h"
                    it_243=self->head;
                    # 120 "/usr/local/include/neo-c.h"
                    while(_while_condtional32=it_243!=((void*)0),                    _while_condtional32) {
                        # 116 "/usr/local/include/neo-c.h"
                        prev_it_244=it_243;
                        # 117 "/usr/local/include/neo-c.h"
                        it_243=it_243->next;
                        # 118 "/usr/local/include/neo-c.h"
                        come_call_finalizer3(prev_it_244,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
int i_245;
_Bool _if_conditional314;
_Bool _if_conditional315;
int i_246;
_Bool _if_conditional316;
_Bool _if_conditional317;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_245, 0, sizeof(int));
memset(&i_246, 0, sizeof(int));
                # 1112 "/usr/local/include/neo-c.h"
                for(                i_245=0;                i_245<self->size;                i_245++                ){
                    # 1111 "/usr/local/include/neo-c.h"
                    # 1106 "/usr/local/include/neo-c.h"
                    if(_if_conditional314=self->item_existance[i_245],                    _if_conditional314) {
                        # 1110 "/usr/local/include/neo-c.h"
                        # 1107 "/usr/local/include/neo-c.h"
                        if(_if_conditional315=1,                        _if_conditional315) {
                            # 1108 "/usr/local/include/neo-c.h"
                            come_call_finalizer3(self->items[i_245],sFun_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1112 "/usr/local/include/neo-c.h"
                come_free((char*)self->items);
                # 1121 "/usr/local/include/neo-c.h"
                for(                i_246=0;                i_246<self->size;                i_246++                ){
                    # 1120 "/usr/local/include/neo-c.h"
                    # 1115 "/usr/local/include/neo-c.h"
                    if(_if_conditional316=self->item_existance[i_246],                    _if_conditional316) {
                        # 1119 "/usr/local/include/neo-c.h"
                        # 1116 "/usr/local/include/neo-c.h"
                        if(_if_conditional317=1,                        _if_conditional317) {
                            # 1117 "/usr/local/include/neo-c.h"
                            self->keys[i_246] = come_decrement_ref_count2(self->keys[i_246], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1121 "/usr/local/include/neo-c.h"
                come_free((char*)self->keys);
                # 1123 "/usr/local/include/neo-c.h"
                come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                # 1125 "/usr/local/include/neo-c.h"
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsFunph_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
int i_247;
_Bool _if_conditional318;
_Bool _if_conditional319;
int i_248;
_Bool _if_conditional320;
_Bool _if_conditional321;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_247, 0, sizeof(int));
memset(&i_248, 0, sizeof(int));
            # 1112 "/usr/local/include/neo-c.h"
            for(            i_247=0;            i_247<self->size;            i_247++            ){
                # 1111 "/usr/local/include/neo-c.h"
                # 1106 "/usr/local/include/neo-c.h"
                if(_if_conditional318=self->item_existance[i_247],                _if_conditional318) {
                    # 1110 "/usr/local/include/neo-c.h"
                    # 1107 "/usr/local/include/neo-c.h"
                    if(_if_conditional319=1,                    _if_conditional319) {
                        # 1108 "/usr/local/include/neo-c.h"
                        come_call_finalizer3(self->items[i_247],sFun_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1112 "/usr/local/include/neo-c.h"
            come_free((char*)self->items);
            # 1121 "/usr/local/include/neo-c.h"
            for(            i_248=0;            i_248<self->size;            i_248++            ){
                # 1120 "/usr/local/include/neo-c.h"
                # 1115 "/usr/local/include/neo-c.h"
                if(_if_conditional320=self->item_existance[i_248],                _if_conditional320) {
                    # 1119 "/usr/local/include/neo-c.h"
                    # 1116 "/usr/local/include/neo-c.h"
                    if(_if_conditional321=1,                    _if_conditional321) {
                        # 1117 "/usr/local/include/neo-c.h"
                        self->keys[i_248] = come_decrement_ref_count2(self->keys[i_248], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1121 "/usr/local/include/neo-c.h"
            come_free((char*)self->keys);
            # 1123 "/usr/local/include/neo-c.h"
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            # 1125 "/usr/local/include/neo-c.h"
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_initialize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
void* right_value361;
void* right_value362;
void* right_value363;
int i_249;
void* right_value364;
void* right_value365;
struct list$1charp* __dec_obj70;
struct map$2charphsGenericsFunph* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
right_value361 = (void*)0;
right_value362 = (void*)0;
right_value363 = (void*)0;
memset(&i_249, 0, sizeof(int));
right_value364 = (void*)0;
right_value365 = (void*)0;
            # 1062 "/usr/local/include/neo-c.h"
            self->keys=(char**)come_increment_ref_count(((char**)(right_value361=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/neo-c.h", 1062, "char*%"))));
            right_value361 = come_decrement_ref_count2(right_value361, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1063 "/usr/local/include/neo-c.h"
            self->items=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(right_value362=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(128)), "/usr/local/include/neo-c.h", 1063, "sGenericsFun*%"))));
            come_call_finalizer3(right_value362,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
            # 1064 "/usr/local/include/neo-c.h"
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value363=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/neo-c.h", 1064, "bool"))));
            right_value363 = come_decrement_ref_count2(right_value363, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1071 "/usr/local/include/neo-c.h"
            for(            i_249=0;            i_249<128;            i_249++            ){
                # 1068 "/usr/local/include/neo-c.h"
                self->item_existance[i_249]=(_Bool)0;
            }
            # 1071 "/usr/local/include/neo-c.h"
            self->size=128;
            # 1072 "/usr/local/include/neo-c.h"
            self->len=0;
            # 1074 "/usr/local/include/neo-c.h"
            __dec_obj70=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value365=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value364=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/neo-c.h", 1074, "list$1charp"))))))));
            come_call_finalizer3(__dec_obj70,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value364,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value365,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            # 1076 "/usr/local/include/neo-c.h"
            self->it=0;
            # 1078 "/usr/local/include/neo-c.h"
            __result155__ = __result_obj__ = self;
            come_call_finalizer3(self,map$2charphsGenericsFunphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result155__;
            come_call_finalizer3(self,map$2charphsGenericsFunphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool _if_conditional322;
_Bool _if_conditional323;
_Bool _if_conditional324;
_Bool _if_conditional325;
_Bool _if_conditional326;
_Bool _if_conditional327;
_Bool _if_conditional328;
_Bool _if_conditional329;
_Bool _if_conditional330;
_Bool _if_conditional331;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sGenericsFun_finalize"
                # 0 "sGenericsFun_finalize"
                if(_if_conditional322=self!=((void*)0)&&self->mImplType!=((void*)0),                _if_conditional322) {
                    # 0 "sGenericsFun_finalize"
                    come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 2 "sGenericsFun_finalize"
                # 1 "sGenericsFun_finalize"
                if(_if_conditional323=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                _if_conditional323) {
                    # 1 "sGenericsFun_finalize"
                    come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 3 "sGenericsFun_finalize"
                # 2 "sGenericsFun_finalize"
                if(_if_conditional324=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),                _if_conditional324) {
                    # 2 "sGenericsFun_finalize"
                    come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 4 "sGenericsFun_finalize"
                # 3 "sGenericsFun_finalize"
                if(_if_conditional325=self!=((void*)0)&&self->mName!=((void*)0),                _if_conditional325) {
                    # 3 "sGenericsFun_finalize"
                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 5 "sGenericsFun_finalize"
                # 4 "sGenericsFun_finalize"
                if(_if_conditional326=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional326) {
                    # 4 "sGenericsFun_finalize"
                    come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 6 "sGenericsFun_finalize"
                # 5 "sGenericsFun_finalize"
                if(_if_conditional327=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional327) {
                    # 5 "sGenericsFun_finalize"
                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 7 "sGenericsFun_finalize"
                # 6 "sGenericsFun_finalize"
                if(_if_conditional328=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional328) {
                    # 6 "sGenericsFun_finalize"
                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 8 "sGenericsFun_finalize"
                # 7 "sGenericsFun_finalize"
                if(_if_conditional329=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                _if_conditional329) {
                    # 7 "sGenericsFun_finalize"
                    come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 9 "sGenericsFun_finalize"
                # 8 "sGenericsFun_finalize"
                if(_if_conditional330=self!=((void*)0)&&self->mBlock!=((void*)0),                _if_conditional330) {
                    # 8 "sGenericsFun_finalize"
                    self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 10 "sGenericsFun_finalize"
                # 9 "sGenericsFun_finalize"
                if(_if_conditional331=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                _if_conditional331) {
                    # 9 "sGenericsFun_finalize"
                    self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void map$2charphsGenericsFunphp_finalize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
int i_250;
_Bool _if_conditional332;
_Bool _if_conditional333;
int i_251;
_Bool _if_conditional334;
_Bool _if_conditional335;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_250, 0, sizeof(int));
memset(&i_251, 0, sizeof(int));
                # 1112 "/usr/local/include/neo-c.h"
                for(                i_250=0;                i_250<self->size;                i_250++                ){
                    # 1111 "/usr/local/include/neo-c.h"
                    # 1106 "/usr/local/include/neo-c.h"
                    if(_if_conditional332=self->item_existance[i_250],                    _if_conditional332) {
                        # 1110 "/usr/local/include/neo-c.h"
                        # 1107 "/usr/local/include/neo-c.h"
                        if(_if_conditional333=1,                        _if_conditional333) {
                            # 1108 "/usr/local/include/neo-c.h"
                            come_call_finalizer3(self->items[i_250],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1112 "/usr/local/include/neo-c.h"
                come_free((char*)self->items);
                # 1121 "/usr/local/include/neo-c.h"
                for(                i_251=0;                i_251<self->size;                i_251++                ){
                    # 1120 "/usr/local/include/neo-c.h"
                    # 1115 "/usr/local/include/neo-c.h"
                    if(_if_conditional334=self->item_existance[i_251],                    _if_conditional334) {
                        # 1119 "/usr/local/include/neo-c.h"
                        # 1116 "/usr/local/include/neo-c.h"
                        if(_if_conditional335=1,                        _if_conditional335) {
                            # 1117 "/usr/local/include/neo-c.h"
                            self->keys[i_251] = come_decrement_ref_count2(self->keys[i_251], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1121 "/usr/local/include/neo-c.h"
                come_free((char*)self->keys);
                # 1123 "/usr/local/include/neo-c.h"
                come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                # 1125 "/usr/local/include/neo-c.h"
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsGenericsFunph_finalize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
int i_252;
_Bool _if_conditional336;
_Bool _if_conditional337;
int i_253;
_Bool _if_conditional338;
_Bool _if_conditional339;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_252, 0, sizeof(int));
memset(&i_253, 0, sizeof(int));
            # 1112 "/usr/local/include/neo-c.h"
            for(            i_252=0;            i_252<self->size;            i_252++            ){
                # 1111 "/usr/local/include/neo-c.h"
                # 1106 "/usr/local/include/neo-c.h"
                if(_if_conditional336=self->item_existance[i_252],                _if_conditional336) {
                    # 1110 "/usr/local/include/neo-c.h"
                    # 1107 "/usr/local/include/neo-c.h"
                    if(_if_conditional337=1,                    _if_conditional337) {
                        # 1108 "/usr/local/include/neo-c.h"
                        come_call_finalizer3(self->items[i_252],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1112 "/usr/local/include/neo-c.h"
            come_free((char*)self->items);
            # 1121 "/usr/local/include/neo-c.h"
            for(            i_253=0;            i_253<self->size;            i_253++            ){
                # 1120 "/usr/local/include/neo-c.h"
                # 1115 "/usr/local/include/neo-c.h"
                if(_if_conditional338=self->item_existance[i_253],                _if_conditional338) {
                    # 1119 "/usr/local/include/neo-c.h"
                    # 1116 "/usr/local/include/neo-c.h"
                    if(_if_conditional339=1,                    _if_conditional339) {
                        # 1117 "/usr/local/include/neo-c.h"
                        self->keys[i_253] = come_decrement_ref_count2(self->keys[i_253], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1121 "/usr/local/include/neo-c.h"
            come_free((char*)self->keys);
            # 1123 "/usr/local/include/neo-c.h"
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            # 1125 "/usr/local/include/neo-c.h"
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassph_initialize(struct map$2charphsClassph* self){
void* __result_obj__;
void* right_value368;
void* right_value369;
void* right_value370;
int i_254;
void* right_value371;
void* right_value372;
struct list$1charp* __dec_obj72;
struct map$2charphsClassph* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
right_value368 = (void*)0;
right_value369 = (void*)0;
right_value370 = (void*)0;
memset(&i_254, 0, sizeof(int));
right_value371 = (void*)0;
right_value372 = (void*)0;
            # 1062 "/usr/local/include/neo-c.h"
            self->keys=(char**)come_increment_ref_count(((char**)(right_value368=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/neo-c.h", 1062, "char*%"))));
            right_value368 = come_decrement_ref_count2(right_value368, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1063 "/usr/local/include/neo-c.h"
            self->items=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value369=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(128)), "/usr/local/include/neo-c.h", 1063, "sClass*%"))));
            come_call_finalizer3(right_value369,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            # 1064 "/usr/local/include/neo-c.h"
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value370=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/neo-c.h", 1064, "bool"))));
            right_value370 = come_decrement_ref_count2(right_value370, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1071 "/usr/local/include/neo-c.h"
            for(            i_254=0;            i_254<128;            i_254++            ){
                # 1068 "/usr/local/include/neo-c.h"
                self->item_existance[i_254]=(_Bool)0;
            }
            # 1071 "/usr/local/include/neo-c.h"
            self->size=128;
            # 1072 "/usr/local/include/neo-c.h"
            self->len=0;
            # 1074 "/usr/local/include/neo-c.h"
            __dec_obj72=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value372=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value371=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/neo-c.h", 1074, "list$1charp"))))))));
            come_call_finalizer3(__dec_obj72,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value371,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value372,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            # 1076 "/usr/local/include/neo-c.h"
            self->it=0;
            # 1078 "/usr/local/include/neo-c.h"
            __result156__ = __result_obj__ = self;
            come_call_finalizer3(self,map$2charphsClassphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result156__;
            come_call_finalizer3(self,map$2charphsClassphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassphp_finalize(struct map$2charphsClassph* self){
void* __result_obj__;
int i_255;
_Bool _if_conditional340;
_Bool _if_conditional341;
int i_256;
_Bool _if_conditional342;
_Bool _if_conditional343;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_255, 0, sizeof(int));
memset(&i_256, 0, sizeof(int));
                # 1112 "/usr/local/include/neo-c.h"
                for(                i_255=0;                i_255<self->size;                i_255++                ){
                    # 1111 "/usr/local/include/neo-c.h"
                    # 1106 "/usr/local/include/neo-c.h"
                    if(_if_conditional340=self->item_existance[i_255],                    _if_conditional340) {
                        # 1110 "/usr/local/include/neo-c.h"
                        # 1107 "/usr/local/include/neo-c.h"
                        if(_if_conditional341=1,                        _if_conditional341) {
                            # 1108 "/usr/local/include/neo-c.h"
                            come_call_finalizer3(self->items[i_255],sClass_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1112 "/usr/local/include/neo-c.h"
                come_free((char*)self->items);
                # 1121 "/usr/local/include/neo-c.h"
                for(                i_256=0;                i_256<self->size;                i_256++                ){
                    # 1120 "/usr/local/include/neo-c.h"
                    # 1115 "/usr/local/include/neo-c.h"
                    if(_if_conditional342=self->item_existance[i_256],                    _if_conditional342) {
                        # 1119 "/usr/local/include/neo-c.h"
                        # 1116 "/usr/local/include/neo-c.h"
                        if(_if_conditional343=1,                        _if_conditional343) {
                            # 1117 "/usr/local/include/neo-c.h"
                            self->keys[i_256] = come_decrement_ref_count2(self->keys[i_256], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1121 "/usr/local/include/neo-c.h"
                come_free((char*)self->keys);
                # 1123 "/usr/local/include/neo-c.h"
                come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                # 1125 "/usr/local/include/neo-c.h"
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsClassph_finalize(struct map$2charphsClassph* self){
void* __result_obj__;
int i_257;
_Bool _if_conditional344;
_Bool _if_conditional345;
int i_258;
_Bool _if_conditional346;
_Bool _if_conditional347;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_257, 0, sizeof(int));
memset(&i_258, 0, sizeof(int));
            # 1112 "/usr/local/include/neo-c.h"
            for(            i_257=0;            i_257<self->size;            i_257++            ){
                # 1111 "/usr/local/include/neo-c.h"
                # 1106 "/usr/local/include/neo-c.h"
                if(_if_conditional344=self->item_existance[i_257],                _if_conditional344) {
                    # 1110 "/usr/local/include/neo-c.h"
                    # 1107 "/usr/local/include/neo-c.h"
                    if(_if_conditional345=1,                    _if_conditional345) {
                        # 1108 "/usr/local/include/neo-c.h"
                        come_call_finalizer3(self->items[i_257],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1112 "/usr/local/include/neo-c.h"
            come_free((char*)self->items);
            # 1121 "/usr/local/include/neo-c.h"
            for(            i_258=0;            i_258<self->size;            i_258++            ){
                # 1120 "/usr/local/include/neo-c.h"
                # 1115 "/usr/local/include/neo-c.h"
                if(_if_conditional346=self->item_existance[i_258],                _if_conditional346) {
                    # 1119 "/usr/local/include/neo-c.h"
                    # 1116 "/usr/local/include/neo-c.h"
                    if(_if_conditional347=1,                    _if_conditional347) {
                        # 1117 "/usr/local/include/neo-c.h"
                        self->keys[i_258] = come_decrement_ref_count2(self->keys[i_258], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1121 "/usr/local/include/neo-c.h"
            come_free((char*)self->keys);
            # 1123 "/usr/local/include/neo-c.h"
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            # 1125 "/usr/local/include/neo-c.h"
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassModuleph* map$2charphsClassModuleph_initialize(struct map$2charphsClassModuleph* self){
void* __result_obj__;
void* right_value375;
void* right_value376;
void* right_value377;
int i_259;
void* right_value378;
void* right_value379;
struct list$1charp* __dec_obj74;
struct map$2charphsClassModuleph* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
right_value375 = (void*)0;
right_value376 = (void*)0;
right_value377 = (void*)0;
memset(&i_259, 0, sizeof(int));
right_value378 = (void*)0;
right_value379 = (void*)0;
            # 1062 "/usr/local/include/neo-c.h"
            self->keys=(char**)come_increment_ref_count(((char**)(right_value375=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/neo-c.h", 1062, "char*%"))));
            right_value375 = come_decrement_ref_count2(right_value375, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1063 "/usr/local/include/neo-c.h"
            self->items=(struct sClassModule**)come_increment_ref_count(((struct sClassModule**)(right_value376=(struct sClassModule**)come_calloc(1, sizeof(struct sClassModule*)*(1*(128)), "/usr/local/include/neo-c.h", 1063, "sClassModule*%"))));
            come_call_finalizer3(right_value376,sClassModule_finalize, 0, 1, 0, 0, __result_obj__);
            # 1064 "/usr/local/include/neo-c.h"
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value377=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/neo-c.h", 1064, "bool"))));
            right_value377 = come_decrement_ref_count2(right_value377, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1071 "/usr/local/include/neo-c.h"
            for(            i_259=0;            i_259<128;            i_259++            ){
                # 1068 "/usr/local/include/neo-c.h"
                self->item_existance[i_259]=(_Bool)0;
            }
            # 1071 "/usr/local/include/neo-c.h"
            self->size=128;
            # 1072 "/usr/local/include/neo-c.h"
            self->len=0;
            # 1074 "/usr/local/include/neo-c.h"
            __dec_obj74=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value379=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value378=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/neo-c.h", 1074, "list$1charp"))))))));
            come_call_finalizer3(__dec_obj74,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value378,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value379,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            # 1076 "/usr/local/include/neo-c.h"
            self->it=0;
            # 1078 "/usr/local/include/neo-c.h"
            __result157__ = __result_obj__ = self;
            come_call_finalizer3(self,map$2charphsClassModulephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result157__;
            come_call_finalizer3(self,map$2charphsClassModulephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void sClassModule_finalize(struct sClassModule* self){
void* __result_obj__;
_Bool _if_conditional348;
_Bool _if_conditional349;
_Bool _if_conditional350;
_Bool _if_conditional351;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sClassModule_finalize"
                # 0 "sClassModule_finalize"
                if(_if_conditional348=self!=((void*)0)&&self->mName!=((void*)0),                _if_conditional348) {
                    # 0 "sClassModule_finalize"
                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 2 "sClassModule_finalize"
                # 1 "sClassModule_finalize"
                if(_if_conditional349=self!=((void*)0)&&self->mText!=((void*)0),                _if_conditional349) {
                    # 1 "sClassModule_finalize"
                    self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 3 "sClassModule_finalize"
                # 2 "sClassModule_finalize"
                if(_if_conditional350=self!=((void*)0)&&self->mParams!=((void*)0),                _if_conditional350) {
                    # 2 "sClassModule_finalize"
                    come_call_finalizer3(self->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 4 "sClassModule_finalize"
                # 3 "sClassModule_finalize"
                if(_if_conditional351=self!=((void*)0)&&self->mSName!=((void*)0),                _if_conditional351) {
                    # 3 "sClassModule_finalize"
                    self->mSName = come_decrement_ref_count2(self->mSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void map$2charphsClassModulephp_finalize(struct map$2charphsClassModuleph* self){
void* __result_obj__;
int i_260;
_Bool _if_conditional352;
_Bool _if_conditional353;
int i_261;
_Bool _if_conditional354;
_Bool _if_conditional355;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_260, 0, sizeof(int));
memset(&i_261, 0, sizeof(int));
                # 1112 "/usr/local/include/neo-c.h"
                for(                i_260=0;                i_260<self->size;                i_260++                ){
                    # 1111 "/usr/local/include/neo-c.h"
                    # 1106 "/usr/local/include/neo-c.h"
                    if(_if_conditional352=self->item_existance[i_260],                    _if_conditional352) {
                        # 1110 "/usr/local/include/neo-c.h"
                        # 1107 "/usr/local/include/neo-c.h"
                        if(_if_conditional353=1,                        _if_conditional353) {
                            # 1108 "/usr/local/include/neo-c.h"
                            come_call_finalizer3(self->items[i_260],sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1112 "/usr/local/include/neo-c.h"
                come_free((char*)self->items);
                # 1121 "/usr/local/include/neo-c.h"
                for(                i_261=0;                i_261<self->size;                i_261++                ){
                    # 1120 "/usr/local/include/neo-c.h"
                    # 1115 "/usr/local/include/neo-c.h"
                    if(_if_conditional354=self->item_existance[i_261],                    _if_conditional354) {
                        # 1119 "/usr/local/include/neo-c.h"
                        # 1116 "/usr/local/include/neo-c.h"
                        if(_if_conditional355=1,                        _if_conditional355) {
                            # 1117 "/usr/local/include/neo-c.h"
                            self->keys[i_261] = come_decrement_ref_count2(self->keys[i_261], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1121 "/usr/local/include/neo-c.h"
                come_free((char*)self->keys);
                # 1123 "/usr/local/include/neo-c.h"
                come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                # 1125 "/usr/local/include/neo-c.h"
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsClassModuleph_finalize(struct map$2charphsClassModuleph* self){
void* __result_obj__;
int i_262;
_Bool _if_conditional356;
_Bool _if_conditional357;
int i_263;
_Bool _if_conditional358;
_Bool _if_conditional359;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_262, 0, sizeof(int));
memset(&i_263, 0, sizeof(int));
            # 1112 "/usr/local/include/neo-c.h"
            for(            i_262=0;            i_262<self->size;            i_262++            ){
                # 1111 "/usr/local/include/neo-c.h"
                # 1106 "/usr/local/include/neo-c.h"
                if(_if_conditional356=self->item_existance[i_262],                _if_conditional356) {
                    # 1110 "/usr/local/include/neo-c.h"
                    # 1107 "/usr/local/include/neo-c.h"
                    if(_if_conditional357=1,                    _if_conditional357) {
                        # 1108 "/usr/local/include/neo-c.h"
                        come_call_finalizer3(self->items[i_262],sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1112 "/usr/local/include/neo-c.h"
            come_free((char*)self->items);
            # 1121 "/usr/local/include/neo-c.h"
            for(            i_263=0;            i_263<self->size;            i_263++            ){
                # 1120 "/usr/local/include/neo-c.h"
                # 1115 "/usr/local/include/neo-c.h"
                if(_if_conditional358=self->item_existance[i_263],                _if_conditional358) {
                    # 1119 "/usr/local/include/neo-c.h"
                    # 1116 "/usr/local/include/neo-c.h"
                    if(_if_conditional359=1,                    _if_conditional359) {
                        # 1117 "/usr/local/include/neo-c.h"
                        self->keys[i_263] = come_decrement_ref_count2(self->keys[i_263], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1121 "/usr/local/include/neo-c.h"
            come_free((char*)self->keys);
            # 1123 "/usr/local/include/neo-c.h"
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            # 1125 "/usr/local/include/neo-c.h"
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsTypeph* map$2charphsTypeph_initialize(struct map$2charphsTypeph* self){
void* __result_obj__;
void* right_value382;
void* right_value383;
void* right_value384;
int i_264;
void* right_value385;
void* right_value386;
struct list$1charp* __dec_obj76;
struct map$2charphsTypeph* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
right_value382 = (void*)0;
right_value383 = (void*)0;
right_value384 = (void*)0;
memset(&i_264, 0, sizeof(int));
right_value385 = (void*)0;
right_value386 = (void*)0;
            # 1062 "/usr/local/include/neo-c.h"
            self->keys=(char**)come_increment_ref_count(((char**)(right_value382=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/neo-c.h", 1062, "char*%"))));
            right_value382 = come_decrement_ref_count2(right_value382, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1063 "/usr/local/include/neo-c.h"
            self->items=(struct sType**)come_increment_ref_count(((struct sType**)(right_value383=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(128)), "/usr/local/include/neo-c.h", 1063, "sType*%"))));
            come_call_finalizer3(right_value383,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 1064 "/usr/local/include/neo-c.h"
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value384=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/neo-c.h", 1064, "bool"))));
            right_value384 = come_decrement_ref_count2(right_value384, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1071 "/usr/local/include/neo-c.h"
            for(            i_264=0;            i_264<128;            i_264++            ){
                # 1068 "/usr/local/include/neo-c.h"
                self->item_existance[i_264]=(_Bool)0;
            }
            # 1071 "/usr/local/include/neo-c.h"
            self->size=128;
            # 1072 "/usr/local/include/neo-c.h"
            self->len=0;
            # 1074 "/usr/local/include/neo-c.h"
            __dec_obj76=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value386=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value385=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/neo-c.h", 1074, "list$1charp"))))))));
            come_call_finalizer3(__dec_obj76,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value385,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value386,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            # 1076 "/usr/local/include/neo-c.h"
            self->it=0;
            # 1078 "/usr/local/include/neo-c.h"
            __result158__ = __result_obj__ = self;
            come_call_finalizer3(self,map$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result158__;
            come_call_finalizer3(self,map$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsTypephp_finalize(struct map$2charphsTypeph* self){
void* __result_obj__;
int i_265;
_Bool _if_conditional360;
_Bool _if_conditional361;
int i_266;
_Bool _if_conditional362;
_Bool _if_conditional363;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_265, 0, sizeof(int));
memset(&i_266, 0, sizeof(int));
                # 1112 "/usr/local/include/neo-c.h"
                for(                i_265=0;                i_265<self->size;                i_265++                ){
                    # 1111 "/usr/local/include/neo-c.h"
                    # 1106 "/usr/local/include/neo-c.h"
                    if(_if_conditional360=self->item_existance[i_265],                    _if_conditional360) {
                        # 1110 "/usr/local/include/neo-c.h"
                        # 1107 "/usr/local/include/neo-c.h"
                        if(_if_conditional361=1,                        _if_conditional361) {
                            # 1108 "/usr/local/include/neo-c.h"
                            come_call_finalizer3(self->items[i_265],sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1112 "/usr/local/include/neo-c.h"
                come_free((char*)self->items);
                # 1121 "/usr/local/include/neo-c.h"
                for(                i_266=0;                i_266<self->size;                i_266++                ){
                    # 1120 "/usr/local/include/neo-c.h"
                    # 1115 "/usr/local/include/neo-c.h"
                    if(_if_conditional362=self->item_existance[i_266],                    _if_conditional362) {
                        # 1119 "/usr/local/include/neo-c.h"
                        # 1116 "/usr/local/include/neo-c.h"
                        if(_if_conditional363=1,                        _if_conditional363) {
                            # 1117 "/usr/local/include/neo-c.h"
                            self->keys[i_266] = come_decrement_ref_count2(self->keys[i_266], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1121 "/usr/local/include/neo-c.h"
                come_free((char*)self->keys);
                # 1123 "/usr/local/include/neo-c.h"
                come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                # 1125 "/usr/local/include/neo-c.h"
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsTypeph_finalize(struct map$2charphsTypeph* self){
void* __result_obj__;
int i_267;
_Bool _if_conditional364;
_Bool _if_conditional365;
int i_268;
_Bool _if_conditional366;
_Bool _if_conditional367;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_267, 0, sizeof(int));
memset(&i_268, 0, sizeof(int));
            # 1112 "/usr/local/include/neo-c.h"
            for(            i_267=0;            i_267<self->size;            i_267++            ){
                # 1111 "/usr/local/include/neo-c.h"
                # 1106 "/usr/local/include/neo-c.h"
                if(_if_conditional364=self->item_existance[i_267],                _if_conditional364) {
                    # 1110 "/usr/local/include/neo-c.h"
                    # 1107 "/usr/local/include/neo-c.h"
                    if(_if_conditional365=1,                    _if_conditional365) {
                        # 1108 "/usr/local/include/neo-c.h"
                        come_call_finalizer3(self->items[i_267],sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1112 "/usr/local/include/neo-c.h"
            come_free((char*)self->items);
            # 1121 "/usr/local/include/neo-c.h"
            for(            i_268=0;            i_268<self->size;            i_268++            ){
                # 1120 "/usr/local/include/neo-c.h"
                # 1115 "/usr/local/include/neo-c.h"
                if(_if_conditional366=self->item_existance[i_268],                _if_conditional366) {
                    # 1119 "/usr/local/include/neo-c.h"
                    # 1116 "/usr/local/include/neo-c.h"
                    if(_if_conditional367=1,                    _if_conditional367) {
                        # 1117 "/usr/local/include/neo-c.h"
                        self->keys[i_268] = come_decrement_ref_count2(self->keys[i_268], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1121 "/usr/local/include/neo-c.h"
            come_free((char*)self->keys);
            # 1123 "/usr/local/include/neo-c.h"
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            # 1125 "/usr/local/include/neo-c.h"
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sModule_finalize(struct sModule* self){
void* __result_obj__;
_Bool _if_conditional368;
_Bool _if_conditional369;
_Bool _if_conditional370;
_Bool _if_conditional371;
_Bool _if_conditional372;
_Bool _if_conditional373;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sModule_finalize"
            # 0 "sModule_finalize"
            if(_if_conditional368=self!=((void*)0)&&self->mSourceHead!=((void*)0),            _if_conditional368) {
                # 0 "sModule_finalize"
                come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 2 "sModule_finalize"
            # 1 "sModule_finalize"
            if(_if_conditional369=self!=((void*)0)&&self->mSource!=((void*)0),            _if_conditional369) {
                # 1 "sModule_finalize"
                come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 3 "sModule_finalize"
            # 2 "sModule_finalize"
            if(_if_conditional370=self!=((void*)0)&&self->mLastCode!=((void*)0),            _if_conditional370) {
                # 2 "sModule_finalize"
                self->mLastCode = come_decrement_ref_count2(self->mLastCode, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 4 "sModule_finalize"
            # 3 "sModule_finalize"
            if(_if_conditional371=self!=((void*)0)&&self->mLastCode2!=((void*)0),            _if_conditional371) {
                # 3 "sModule_finalize"
                self->mLastCode2 = come_decrement_ref_count2(self->mLastCode2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 5 "sModule_finalize"
            # 4 "sModule_finalize"
            if(_if_conditional372=self!=((void*)0)&&self->mLastCode3!=((void*)0),            _if_conditional372) {
                # 4 "sModule_finalize"
                self->mLastCode3 = come_decrement_ref_count2(self->mLastCode3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 6 "sModule_finalize"
            # 5 "sModule_finalize"
            if(_if_conditional373=self!=((void*)0)&&self->mHeader!=((void*)0),            _if_conditional373) {
                # 5 "sModule_finalize"
                come_call_finalizer3(self->mHeader,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list$1sRightValueObjectph* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
            # 95 "/usr/local/include/neo-c.h"
            self->head=((void*)0);
            # 96 "/usr/local/include/neo-c.h"
            self->tail=((void*)0);
            # 97 "/usr/local/include/neo-c.h"
            self->len=0;
            # 99 "/usr/local/include/neo-c.h"
            __result159__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result159__;
            come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_269;
_Bool _while_condtional33;
struct list_item$1sRightValueObjectph* prev_it_270;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_269, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_270, 0, sizeof(struct list_item$1sRightValueObjectph*));
                # 114 "/usr/local/include/neo-c.h"
                it_269=self->head;
                # 120 "/usr/local/include/neo-c.h"
                while(_while_condtional33=it_269!=((void*)0),                _while_condtional33) {
                    # 116 "/usr/local/include/neo-c.h"
                    prev_it_270=it_269;
                    # 117 "/usr/local/include/neo-c.h"
                    it_269=it_269->next;
                    # 118 "/usr/local/include/neo-c.h"
                    come_call_finalizer3(prev_it_270,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional374;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1sRightValueObjectphp_finalize"
                        # 0 "list_item$1sRightValueObjectphp_finalize"
                        if(_if_conditional374=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional374) {
                            # 0 "list_item$1sRightValueObjectphp_finalize"
                            come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
void* __result_obj__;
_Bool _if_conditional375;
_Bool _if_conditional376;
_Bool _if_conditional377;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sRightValueObject_finalize"
                                # 0 "sRightValueObject_finalize"
                                if(_if_conditional375=self!=((void*)0)&&self->mType!=((void*)0),                                _if_conditional375) {
                                    # 0 "sRightValueObject_finalize"
                                    come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sRightValueObject_finalize"
                                # 1 "sRightValueObject_finalize"
                                if(_if_conditional376=self!=((void*)0)&&self->mVarName!=((void*)0),                                _if_conditional376) {
                                    # 1 "sRightValueObject_finalize"
                                    self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 3 "sRightValueObject_finalize"
                                # 2 "sRightValueObject_finalize"
                                if(_if_conditional377=self!=((void*)0)&&self->mFunName!=((void*)0),                                _if_conditional377) {
                                    # 2 "sRightValueObject_finalize"
                                    self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_271;
_Bool _while_condtional34;
struct list_item$1sRightValueObjectph* prev_it_272;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_271, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_272, 0, sizeof(struct list_item$1sRightValueObjectph*));
            # 114 "/usr/local/include/neo-c.h"
            it_271=self->head;
            # 120 "/usr/local/include/neo-c.h"
            while(_while_condtional34=it_271!=((void*)0),            _while_condtional34) {
                # 116 "/usr/local/include/neo-c.h"
                prev_it_272=it_271;
                # 117 "/usr/local/include/neo-c.h"
                it_271=it_271->next;
                # 118 "/usr/local/include/neo-c.h"
                come_call_finalizer3(prev_it_272,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
            # 95 "/usr/local/include/neo-c.h"
            self->head=((void*)0);
            # 96 "/usr/local/include/neo-c.h"
            self->tail=((void*)0);
            # 97 "/usr/local/include/neo-c.h"
            self->len=0;
            # 99 "/usr/local/include/neo-c.h"
            __result160__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result160__;
            come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_273;
_Bool _while_condtional35;
struct list_item$1CVALUEph* prev_it_274;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_273, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_274, 0, sizeof(struct list_item$1CVALUEph*));
                # 114 "/usr/local/include/neo-c.h"
                it_273=self->head;
                # 120 "/usr/local/include/neo-c.h"
                while(_while_condtional35=it_273!=((void*)0),                _while_condtional35) {
                    # 116 "/usr/local/include/neo-c.h"
                    prev_it_274=it_273;
                    # 117 "/usr/local/include/neo-c.h"
                    it_273=it_273->next;
                    # 118 "/usr/local/include/neo-c.h"
                    come_call_finalizer3(prev_it_274,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional378;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1CVALUEphp_finalize"
                        # 0 "list_item$1CVALUEphp_finalize"
                        if(_if_conditional378=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional378) {
                            # 0 "list_item$1CVALUEphp_finalize"
                            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional379;
_Bool _if_conditional380;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "CVALUE_finalize"
                                # 0 "CVALUE_finalize"
                                if(_if_conditional379=self!=((void*)0)&&self->c_value!=((void*)0),                                _if_conditional379) {
                                    # 0 "CVALUE_finalize"
                                    self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "CVALUE_finalize"
                                # 1 "CVALUE_finalize"
                                if(_if_conditional380=self!=((void*)0)&&self->type!=((void*)0),                                _if_conditional380) {
                                    # 1 "CVALUE_finalize"
                                    come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_275;
_Bool _while_condtional36;
struct list_item$1CVALUEph* prev_it_276;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_275, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_276, 0, sizeof(struct list_item$1CVALUEph*));
            # 114 "/usr/local/include/neo-c.h"
            it_275=self->head;
            # 120 "/usr/local/include/neo-c.h"
            while(_while_condtional36=it_275!=((void*)0),            _while_condtional36) {
                # 116 "/usr/local/include/neo-c.h"
                prev_it_276=it_275;
                # 117 "/usr/local/include/neo-c.h"
                it_275=it_275->next;
                # 118 "/usr/local/include/neo-c.h"
                come_call_finalizer3(prev_it_276,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static void sInfo_finalize(struct sInfo* self){
void* __result_obj__;
_Bool _if_conditional384;
_Bool _if_conditional385;
_Bool _if_conditional386;
_Bool _if_conditional387;
_Bool _if_conditional388;
_Bool _if_conditional389;
_Bool _if_conditional390;
_Bool _if_conditional391;
_Bool _if_conditional392;
_Bool _if_conditional393;
_Bool _if_conditional394;
_Bool _if_conditional395;
_Bool _if_conditional396;
_Bool _if_conditional397;
_Bool _if_conditional398;
_Bool _if_conditional399;
_Bool _if_conditional400;
_Bool _if_conditional401;
_Bool _if_conditional402;
_Bool _if_conditional403;
_Bool _if_conditional404;
_Bool _if_conditional405;
_Bool _if_conditional406;
_Bool _if_conditional407;
_Bool _if_conditional408;
_Bool _if_conditional409;
_Bool _if_conditional410;
_Bool _if_conditional411;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sInfo_finalize"
            # 0 "sInfo_finalize"
            if(_if_conditional384=self!=((void*)0)&&self->original_source!=((void*)0),            _if_conditional384) {
                # 0 "sInfo_finalize"
                come_call_finalizer3(self->original_source,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 2 "sInfo_finalize"
            # 1 "sInfo_finalize"
            if(_if_conditional385=self!=((void*)0)&&self->source!=((void*)0),            _if_conditional385) {
                # 1 "sInfo_finalize"
                come_call_finalizer3(self->source,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 3 "sInfo_finalize"
            # 2 "sInfo_finalize"
            if(_if_conditional386=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional386) {
                # 2 "sInfo_finalize"
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 4 "sInfo_finalize"
            # 3 "sInfo_finalize"
            if(_if_conditional387=self!=((void*)0)&&self->base_sname!=((void*)0),            _if_conditional387) {
                # 3 "sInfo_finalize"
                self->base_sname = come_decrement_ref_count2(self->base_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 5 "sInfo_finalize"
            # 4 "sInfo_finalize"
            if(_if_conditional388=self!=((void*)0)&&self->err_line!=((void*)0),            _if_conditional388) {
                # 4 "sInfo_finalize"
                self->err_line = come_decrement_ref_count2(self->err_line, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 6 "sInfo_finalize"
            # 5 "sInfo_finalize"
            if(_if_conditional389=self!=((void*)0)&&self->clang_option!=((void*)0),            _if_conditional389) {
                # 5 "sInfo_finalize"
                self->clang_option = come_decrement_ref_count2(self->clang_option, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 7 "sInfo_finalize"
            # 6 "sInfo_finalize"
            if(_if_conditional390=self!=((void*)0)&&self->cpp_option!=((void*)0),            _if_conditional390) {
                # 6 "sInfo_finalize"
                self->cpp_option = come_decrement_ref_count2(self->cpp_option, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 8 "sInfo_finalize"
            # 7 "sInfo_finalize"
            if(_if_conditional391=self!=((void*)0)&&self->come_fun_name!=((void*)0),            _if_conditional391) {
                # 7 "sInfo_finalize"
                self->come_fun_name = come_decrement_ref_count2(self->come_fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 9 "sInfo_finalize"
            # 8 "sInfo_finalize"
            if(_if_conditional392=self!=((void*)0)&&self->funcs!=((void*)0),            _if_conditional392) {
                # 8 "sInfo_finalize"
                come_call_finalizer3(self->funcs,map$2charphsFunphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 10 "sInfo_finalize"
            # 9 "sInfo_finalize"
            if(_if_conditional393=self!=((void*)0)&&self->generics_funcs!=((void*)0),            _if_conditional393) {
                # 9 "sInfo_finalize"
                come_call_finalizer3(self->generics_funcs,map$2charphsGenericsFunphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 11 "sInfo_finalize"
            # 10 "sInfo_finalize"
            if(_if_conditional394=self!=((void*)0)&&self->classes!=((void*)0),            _if_conditional394) {
                # 10 "sInfo_finalize"
                come_call_finalizer3(self->classes,map$2charphsClassphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 12 "sInfo_finalize"
            # 11 "sInfo_finalize"
            if(_if_conditional395=self!=((void*)0)&&self->modules!=((void*)0),            _if_conditional395) {
                # 11 "sInfo_finalize"
                come_call_finalizer3(self->modules,map$2charphsClassModulephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 13 "sInfo_finalize"
            # 12 "sInfo_finalize"
            if(_if_conditional396=self!=((void*)0)&&self->types!=((void*)0),            _if_conditional396) {
                # 12 "sInfo_finalize"
                come_call_finalizer3(self->types,map$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 14 "sInfo_finalize"
            # 13 "sInfo_finalize"
            if(_if_conditional397=self!=((void*)0)&&self->generics_classes!=((void*)0),            _if_conditional397) {
                # 13 "sInfo_finalize"
                come_call_finalizer3(self->generics_classes,map$2charphsClassphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 15 "sInfo_finalize"
            # 14 "sInfo_finalize"
            if(_if_conditional398=self!=((void*)0)&&self->module!=((void*)0),            _if_conditional398) {
                # 14 "sInfo_finalize"
                come_call_finalizer3(self->module,sModule_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 16 "sInfo_finalize"
            # 15 "sInfo_finalize"
            if(_if_conditional399=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional399) {
                # 15 "sInfo_finalize"
                come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 17 "sInfo_finalize"
            # 16 "sInfo_finalize"
            if(_if_conditional400=self!=((void*)0)&&self->right_value_objects!=((void*)0),            _if_conditional400) {
                # 16 "sInfo_finalize"
                come_call_finalizer3(self->right_value_objects,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 18 "sInfo_finalize"
            # 17 "sInfo_finalize"
            if(_if_conditional401=self!=((void*)0)&&self->generics_type!=((void*)0),            _if_conditional401) {
                # 17 "sInfo_finalize"
                come_call_finalizer3(self->generics_type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 19 "sInfo_finalize"
            # 18 "sInfo_finalize"
            if(_if_conditional402=self!=((void*)0)&&self->method_generics_types!=((void*)0),            _if_conditional402) {
                # 18 "sInfo_finalize"
                come_call_finalizer3(self->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 20 "sInfo_finalize"
            # 19 "sInfo_finalize"
            if(_if_conditional403=self!=((void*)0)&&self->stack!=((void*)0),            _if_conditional403) {
                # 19 "sInfo_finalize"
                come_call_finalizer3(self->stack,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 21 "sInfo_finalize"
            # 20 "sInfo_finalize"
            if(_if_conditional404=self!=((void*)0)&&self->come_function_result_type!=((void*)0),            _if_conditional404) {
                # 20 "sInfo_finalize"
                come_call_finalizer3(self->come_function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 22 "sInfo_finalize"
            # 21 "sInfo_finalize"
            if(_if_conditional405=self!=((void*)0)&&self->gv_table!=((void*)0),            _if_conditional405) {
                # 21 "sInfo_finalize"
                come_call_finalizer3(self->gv_table,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 23 "sInfo_finalize"
            # 22 "sInfo_finalize"
            if(_if_conditional406=self!=((void*)0)&&self->generics_type_names!=((void*)0),            _if_conditional406) {
                # 22 "sInfo_finalize"
                come_call_finalizer3(self->generics_type_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 24 "sInfo_finalize"
            # 23 "sInfo_finalize"
            if(_if_conditional407=self!=((void*)0)&&self->method_generics_type_names!=((void*)0),            _if_conditional407) {
                # 23 "sInfo_finalize"
                come_call_finalizer3(self->method_generics_type_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 25 "sInfo_finalize"
            # 24 "sInfo_finalize"
            if(_if_conditional408=self!=((void*)0)&&self->impl_type!=((void*)0),            _if_conditional408) {
                # 24 "sInfo_finalize"
                come_call_finalizer3(self->impl_type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 26 "sInfo_finalize"
            # 25 "sInfo_finalize"
            if(_if_conditional409=self!=((void*)0)&&self->output_file_name!=((void*)0),            _if_conditional409) {
                # 25 "sInfo_finalize"
                self->output_file_name = come_decrement_ref_count2(self->output_file_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 27 "sInfo_finalize"
            # 26 "sInfo_finalize"
            if(_if_conditional410=self!=((void*)0)&&self->function_result_type!=((void*)0),            _if_conditional410) {
                # 26 "sInfo_finalize"
                come_call_finalizer3(self->function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 28 "sInfo_finalize"
            # 27 "sInfo_finalize"
            if(_if_conditional411=self!=((void*)0)&&self->module_params!=((void*)0),            _if_conditional411) {
                # 27 "sInfo_finalize"
                come_call_finalizer3(self->module_params,map$2charphcharphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static void map$2charphcharphp_finalize(struct map$2charphcharph* self){
void* __result_obj__;
int i_279;
_Bool _if_conditional412;
_Bool _if_conditional413;
int i_280;
_Bool _if_conditional414;
_Bool _if_conditional415;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_279, 0, sizeof(int));
memset(&i_280, 0, sizeof(int));
                    # 1112 "/usr/local/include/neo-c.h"
                    for(                    i_279=0;                    i_279<self->size;                    i_279++                    ){
                        # 1111 "/usr/local/include/neo-c.h"
                        # 1106 "/usr/local/include/neo-c.h"
                        if(_if_conditional412=self->item_existance[i_279],                        _if_conditional412) {
                            # 1110 "/usr/local/include/neo-c.h"
                            # 1107 "/usr/local/include/neo-c.h"
                            if(_if_conditional413=1,                            _if_conditional413) {
                                # 1108 "/usr/local/include/neo-c.h"
                                self->items[i_279] = come_decrement_ref_count2(self->items[i_279], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                    # 1112 "/usr/local/include/neo-c.h"
                    come_free((char*)self->items);
                    # 1121 "/usr/local/include/neo-c.h"
                    for(                    i_280=0;                    i_280<self->size;                    i_280++                    ){
                        # 1120 "/usr/local/include/neo-c.h"
                        # 1115 "/usr/local/include/neo-c.h"
                        if(_if_conditional414=self->item_existance[i_280],                        _if_conditional414) {
                            # 1119 "/usr/local/include/neo-c.h"
                            # 1116 "/usr/local/include/neo-c.h"
                            if(_if_conditional415=1,                            _if_conditional415) {
                                # 1117 "/usr/local/include/neo-c.h"
                                self->keys[i_280] = come_decrement_ref_count2(self->keys[i_280], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                    # 1121 "/usr/local/include/neo-c.h"
                    come_free((char*)self->keys);
                    # 1123 "/usr/local/include/neo-c.h"
                    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                    # 1125 "/usr/local/include/neo-c.h"
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional460;
struct list_item$1charph* it_299;
int i_300;
_Bool _while_condtional37;
_Bool _if_conditional461;
char* __result169__;
char* default_value_301;
char* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_299, 0, sizeof(struct list_item$1charph*));
memset(&i_300, 0, sizeof(int));
memset(&default_value_301, 0, sizeof(char*));
                                            # 673 "/usr/local/include/neo-c.h"
                                            # 669 "/usr/local/include/neo-c.h"
                                            if(_if_conditional460=position<0,                                            _if_conditional460) {
                                                # 670 "/usr/local/include/neo-c.h"
                                                position+=self->len;
                                            }
                                            # 673 "/usr/local/include/neo-c.h"
                                            it_299=self->head;
                                            # 674 "/usr/local/include/neo-c.h"
                                            i_300=0;
                                            # 681 "/usr/local/include/neo-c.h"
                                            while(_while_condtional37=it_299!=((void*)0),                                            _while_condtional37) {
                                                # 679 "/usr/local/include/neo-c.h"
                                                # 676 "/usr/local/include/neo-c.h"
                                                if(_if_conditional461=position==i_300,                                                _if_conditional461) {
                                                    # 677 "/usr/local/include/neo-c.h"
                                                    __result169__ = __result_obj__ = it_299->item;
                                                    return __result169__;
                                                }
                                                # 679 "/usr/local/include/neo-c.h"
                                                it_299=it_299->next;
                                                # 680 "/usr/local/include/neo-c.h"
                                                i_300++;
                                            }
                                            # 683 "/usr/local/include/neo-c.h"
                                            # 684 "/usr/local/include/neo-c.h"
                                            memset(&default_value_301,0,sizeof(char*));
                                            # 685 "/usr/local/include/neo-c.h"
                                            __result170__ = __result_obj__ = default_value_301;
                                            default_value_301 = come_decrement_ref_count2(default_value_301, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                            return __result170__;
                                            default_value_301 = come_decrement_ref_count2(default_value_301, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void method_block2_02transpilec(struct __current_stack2__* parent){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
                                            # 851 "02transpile.c"
                                            printf("%s %d: linker faield\n",(*(parent->info_298)).sname,(*(parent->info_298)).sline);
                                            # 852 "02transpile.c"
                                            exit(13);
}

