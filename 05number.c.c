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
struct sIntNode
{
    int sline;
    char* sname;
    int value;
};
struct sUIntNode
{
    int sline;
    char* sname;
    unsigned int value;
};
struct sLongNode
{
    int sline;
    char* sname;
    long value;
};
struct sULongNode
{
    int sline;
    char* sname;
    unsigned long int value;
};
struct sFloatNode
{
    int sline;
    char* sname;
    float value;
};
struct sDoubleNode
{
    int sline;
    char* sname;
    double value;
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

void* valloc(long int anonymous_var_nameX206);

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

void _Exit(int anonymous_var_nameX245);

long a64l(const char* anonymous_var_nameX246);

double drand48();

char* ecvt(double anonymous_var_nameX247, int anonymous_var_nameX248, int* anonymous_var_nameX249, int* anonymous_var_nameX250);

double erand48(unsigned short int anonymous_var_nameX251[3]);

char* fcvt(double anonymous_var_nameX252, int anonymous_var_nameX253, int* anonymous_var_nameX254, int* anonymous_var_nameX255);

char* gcvt(double anonymous_var_nameX256, int anonymous_var_nameX257, char* anonymous_var_nameX258);

int getsubopt(char** anonymous_var_nameX259, char** anonymous_var_nameX260, char** anonymous_var_nameX261);

int grantpt(int anonymous_var_nameX262);

char* initstate(unsigned int anonymous_var_nameX263, char* anonymous_var_nameX264, long int anonymous_var_nameX265);

long jrand48(unsigned short int anonymous_var_nameX266[3]);

char* l64a(long anonymous_var_nameX267);

void lcong48(unsigned short int anonymous_var_nameX268[7]);

long lrand48();

char* mktemp(char* anonymous_var_nameX269);

int mkstemp(char* anonymous_var_nameX270);

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

void setkey(const char* anonymous_var_nameX279);

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

void swab(const void* anonymous_var_nameX345, void* anonymous_var_nameX346, long anonymous_var_nameX347);

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

_Bool node_compile(struct sNode* node, struct sInfo* info);

int come_main_v2(int argc, char** argv);

void err_msg(struct sInfo* info, char* msg, ...);

int transpile_v2(struct sInfo* info);

_Bool output_source_file_v2(struct sInfo* info);

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

struct sIntNode* sIntNode_initialize(struct sIntNode* self, int value, struct sInfo* info);

char* sIntNode_kind(struct sIntNode* self);

_Bool sIntNode_compile(struct sIntNode* self, struct sInfo* info);

_Bool sIntNode_terminated(struct sIntNode* self);

static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sUIntNode* sUIntNode_initialize(struct sUIntNode* self, unsigned int value, struct sInfo* info);

_Bool sUIntNode_terminated(struct sUIntNode* self);

char* sUIntNode_kind(struct sUIntNode* self);

_Bool sUIntNode_compile(struct sUIntNode* self, struct sInfo* info);

struct sLongNode* sLongNode_initialize(struct sLongNode* self, unsigned long int value, struct sInfo* info);

char* sLongNode_kind(struct sLongNode* self);

_Bool sLongNode_compile(struct sLongNode* self, struct sInfo* info);

_Bool sLongNode_terminated(struct sLongNode* self);

struct sULongNode* sULongNode_initialize(struct sULongNode* self, unsigned long int value, struct sInfo* info);

char* sULongNode_kind(struct sULongNode* self);

_Bool sULongNode_compile(struct sULongNode* self, struct sInfo* info);

_Bool sULongNode_terminated(struct sULongNode* self);

struct sFloatNode* sFloatNode_initialize(struct sFloatNode* self, float value, struct sInfo* info);

char* sFloatNode_kind(struct sFloatNode* self);

_Bool sFloatNode_compile(struct sFloatNode* self, struct sInfo* info);

_Bool sFloatNode_terminated(struct sFloatNode* self);

struct sDoubleNode* sDoubleNode_initialize(struct sDoubleNode* self, double value, struct sInfo* info);

char* sDoubleNode_kind(struct sDoubleNode* self);

_Bool sDoubleNode_compile(struct sDoubleNode* self, struct sInfo* info);

_Bool sDoubleNode_terminated(struct sDoubleNode* self);

struct sNode* create_int_node(int value, struct sInfo* info);

struct sNode* get_number(_Bool minus, struct sInfo* info);

static void sFloatNode_finalize(struct sFloatNode* self);
static struct sFloatNode* sFloatNode_clone(struct sFloatNode* self);
static void sDoubleNode_finalize(struct sDoubleNode* self);
static struct sDoubleNode* sDoubleNode_clone(struct sDoubleNode* self);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);

struct sNode* get_oct_number(struct sInfo* info);

static void sUIntNode_finalize(struct sUIntNode* self);
static struct sUIntNode* sUIntNode_clone(struct sUIntNode* self);
static void sULongNode_finalize(struct sULongNode* self);
static struct sULongNode* sULongNode_clone(struct sULongNode* self);
static void sLongNode_finalize(struct sLongNode* self);
static struct sLongNode* sLongNode_clone(struct sLongNode* self);
static void sIntNode_finalize(struct sIntNode* self);
static struct sIntNode* sIntNode_clone(struct sIntNode* self);
struct sNode* expression_node_v99(struct sInfo* info);

// inline function
static inline _Bool die(char* msg){
void* __result_obj__;
_Bool __result1__;
memset(&__result_obj__, 0, sizeof(void*));
    perror(msg);
    stackframe();
    exit(4);
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
    result_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 1897, "buffer"))))))));
    come_call_finalizer3(right_value0,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value1,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_0,self,sizeof(char)*len);
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
    result_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 1904, "buffer"))))))));
    come_call_finalizer3(right_value2,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value3,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_1,(char*)self,sizeof(short short)*len);
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
    result_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 1911, "buffer"))))))));
    come_call_finalizer3(right_value4,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value5,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_2,(char*)self,sizeof(int)*len);
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
    result_3=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 1918, "buffer"))))))));
    come_call_finalizer3(right_value6,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value7,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_3,(char*)self,sizeof(long)*len);
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
    result_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 1925, "buffer"))))))));
    come_call_finalizer3(right_value8,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value9,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_4,(char*)self,sizeof(float)*len);
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
    result_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 1932, "buffer"))))))));
    come_call_finalizer3(right_value10,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value11,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_5,(char*)self,sizeof(double)*len);
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
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/neo-c.h", 1948, "smart_pointer$1char"))));
    come_call_finalizer3(right_value12,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj1=result_6->memory;
    result_6->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=buffer_clone(self))));
    come_call_finalizer3(__dec_obj1,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value13,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    result_6->p=result_6->memory->buf;
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
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/neo-c.h", 1958, "smart_pointer$1char"))));
    come_call_finalizer3(right_value14,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj2=result_7->memory;
    result_7->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value15=buffer_clone(self))));
    come_call_finalizer3(__dec_obj2,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value15,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    result_7->p=(char*)result_7->memory->buf;
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
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/neo-c.h", 1968, "smart_pointer$1short"))));
    come_call_finalizer3(right_value16,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj3=result_8->memory;
    result_8->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value17=buffer_clone(self))));
    come_call_finalizer3(__dec_obj3,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value17,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    result_8->p=(short short*)result_8->memory->buf;
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
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/neo-c.h", 1978, "smart_pointer$1int"))));
    come_call_finalizer3(right_value18,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj4=result_9->memory;
    result_9->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value19=buffer_clone(self))));
    come_call_finalizer3(__dec_obj4,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value19,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    result_9->p=(int*)result_9->memory->buf;
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
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/neo-c.h", 1988, "smart_pointer$1long"))));
    come_call_finalizer3(right_value20,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj5=result_10->memory;
    result_10->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value21=buffer_clone(self))));
    come_call_finalizer3(__dec_obj5,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value21,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    result_10->p=(long*)result_10->memory->buf;
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
    __result42__ = __result_obj__ = ((struct list$1double*)(right_value75=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count(((struct list$1double*)(right_value71=(struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "/usr/local/include/neo-c.h", 2214, "list$1double")))),len,self)));
    come_call_finalizer3(right_value71,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value75,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    return __result42__;
}
static inline long int charpa_length(char* self, long int len){
void* __result_obj__;
long int __result43__;
memset(&__result_obj__, 0, sizeof(void*));
    __result43__ = len;
    return __result43__;
}
static inline long int shortpa_length(short short* self, long int len){
void* __result_obj__;
long int __result44__;
memset(&__result_obj__, 0, sizeof(void*));
    __result44__ = len;
    return __result44__;
}
static inline long int intpa_length(int* self, long int len){
void* __result_obj__;
long int __result45__;
memset(&__result_obj__, 0, sizeof(void*));
    __result45__ = len;
    return __result45__;
}
static inline long int longpa_length(long* self, long int len){
void* __result_obj__;
long int __result46__;
memset(&__result_obj__, 0, sizeof(void*));
    __result46__ = len;
    return __result46__;
}
static inline long int floatpa_length(float* self, long int len){
void* __result_obj__;
long int __result47__;
memset(&__result_obj__, 0, sizeof(void*));
    __result47__ = len;
    return __result47__;
}
static inline long int doublepa_length(double* self, long int len){
void* __result_obj__;
long int __result48__;
memset(&__result_obj__, 0, sizeof(void*));
    __result48__ = len;
    return __result48__;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value76;
char* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
right_value76 = (void*)0;
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
    __result51__ = __result_obj__ = ((char*)(right_value78=xsprintf(msg,self)));
    right_value78 = come_decrement_ref_count2(right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result51__;
}

// body function








static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
void* __result_obj__;
_Bool _if_conditional1;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional1=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional1) {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}



static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
void* __result_obj__;
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional2=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional2) {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
void* __result_obj__;
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional3=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional3) {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
void* __result_obj__;
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional4=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional4) {
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
        __dec_obj6=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 2000, "buffer"))))))));
        come_call_finalizer3(__dec_obj6,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value23,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value24,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(char)*size);
        self->p=(char*)self->memory->buf;
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
        __dec_obj7=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 2000, "buffer"))))))));
        come_call_finalizer3(__dec_obj7,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value27,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value28,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(short short)*size);
        self->p=(short short*)self->memory->buf;
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
        __dec_obj8=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 2000, "buffer"))))))));
        come_call_finalizer3(__dec_obj8,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value31,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value32,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(int)*size);
        self->p=(int*)self->memory->buf;
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
        __dec_obj9=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 2000, "buffer"))))))));
        come_call_finalizer3(__dec_obj9,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value35,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value36,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(long)*size);
        self->p=(long*)self->memory->buf;
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
        __dec_obj10=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 2000, "buffer"))))))));
        come_call_finalizer3(__dec_obj10,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value39,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value40,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(float)*size);
        self->p=(float*)self->memory->buf;
        __result21__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
        return __result21__;
        come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
void* __result_obj__;
_Bool _if_conditional5;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional5=self!=((void*)0)&&self->memory!=((void*)0),            _if_conditional5) {
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
        __dec_obj11=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/neo-c.h", 2000, "buffer"))))))));
        come_call_finalizer3(__dec_obj11,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value43,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value44,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(double)*size);
        self->p=(double*)self->memory->buf;
        __result23__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
        return __result23__;
        come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
void* __result_obj__;
_Bool _if_conditional6;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional6=self!=((void*)0)&&self->memory!=((void*)0),            _if_conditional6) {
                come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__;
int i_11;
struct list$1char* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_11, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_11=0;        i_11<num_value;        i_11++        ){
            list$1char_push_back(self,values[i_11]);
        }
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
                if(_if_conditional7=self->len==0,                _if_conditional7) {
                    litem_12=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value47=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/neo-c.h", 217, "list_item$1char"))));
                    come_call_finalizer3(right_value47,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_12->prev=((void*)0);
                    litem_12->next=((void*)0);
                    litem_12->item=item;
                    self->tail=litem_12;
                    self->head=litem_12;
                }
                else {
                    if(_if_conditional8=self->len==1,                    _if_conditional8) {
                        litem_13=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value48=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/neo-c.h", 227, "list_item$1char"))));
                        come_call_finalizer3(right_value48,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_13->prev=self->head;
                        litem_13->next=((void*)0);
                        litem_13->item=item;
                        self->tail=litem_13;
                        self->head->next=litem_13;
                    }
                    else {
                        litem_14=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value49=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/neo-c.h", 237, "list_item$1char"))));
                        come_call_finalizer3(right_value49,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_14->prev=self->tail;
                        litem_14->next=((void*)0);
                        litem_14->item=item;
                        self->tail->next=litem_14;
                        self->tail=litem_14;
                    }
                }
                self->len++;
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
            it_15=self->head;
            while(_while_condtional1=it_15!=((void*)0),            _while_condtional1) {
                prev_it_16=it_15;
                it_15=it_15->next;
                come_call_finalizer3(prev_it_16,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values){
void* __result_obj__;
int i_17;
struct list$1short* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_17, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_17=0;        i_17<num_value;        i_17++        ){
            list$1short_push_back(self,values[i_17]);
        }
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
                if(_if_conditional9=self->len==0,                _if_conditional9) {
                    litem_18=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value52=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/neo-c.h", 217, "list_item$1short"))));
                    come_call_finalizer3(right_value52,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_18->prev=((void*)0);
                    litem_18->next=((void*)0);
                    litem_18->item=item;
                    self->tail=litem_18;
                    self->head=litem_18;
                }
                else {
                    if(_if_conditional10=self->len==1,                    _if_conditional10) {
                        litem_19=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value53=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/neo-c.h", 227, "list_item$1short"))));
                        come_call_finalizer3(right_value53,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_19->prev=self->head;
                        litem_19->next=((void*)0);
                        litem_19->item=item;
                        self->tail=litem_19;
                        self->head->next=litem_19;
                    }
                    else {
                        litem_20=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value54=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/neo-c.h", 237, "list_item$1short"))));
                        come_call_finalizer3(right_value54,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_20->prev=self->tail;
                        litem_20->next=((void*)0);
                        litem_20->item=item;
                        self->tail->next=litem_20;
                        self->tail=litem_20;
                    }
                }
                self->len++;
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
            it_21=self->head;
            while(_while_condtional2=it_21!=((void*)0),            _while_condtional2) {
                prev_it_22=it_21;
                it_21=it_21->next;
                come_call_finalizer3(prev_it_22,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__;
int i_23;
struct list$1int* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_23, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_23=0;        i_23<num_value;        i_23++        ){
            list$1int_push_back(self,values[i_23]);
        }
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
                if(_if_conditional11=self->len==0,                _if_conditional11) {
                    litem_24=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value57=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/neo-c.h", 217, "list_item$1int"))));
                    come_call_finalizer3(right_value57,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_24->prev=((void*)0);
                    litem_24->next=((void*)0);
                    litem_24->item=item;
                    self->tail=litem_24;
                    self->head=litem_24;
                }
                else {
                    if(_if_conditional12=self->len==1,                    _if_conditional12) {
                        litem_25=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value58=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/neo-c.h", 227, "list_item$1int"))));
                        come_call_finalizer3(right_value58,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_25->prev=self->head;
                        litem_25->next=((void*)0);
                        litem_25->item=item;
                        self->tail=litem_25;
                        self->head->next=litem_25;
                    }
                    else {
                        litem_26=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value59=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/neo-c.h", 237, "list_item$1int"))));
                        come_call_finalizer3(right_value59,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_26->prev=self->tail;
                        litem_26->next=((void*)0);
                        litem_26->item=item;
                        self->tail->next=litem_26;
                        self->tail=litem_26;
                    }
                }
                self->len++;
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
            it_27=self->head;
            while(_while_condtional3=it_27!=((void*)0),            _while_condtional3) {
                prev_it_28=it_27;
                it_27=it_27->next;
                come_call_finalizer3(prev_it_28,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__;
int i_29;
struct list$1long* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_29, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_29=0;        i_29<num_value;        i_29++        ){
            list$1long_push_back(self,values[i_29]);
        }
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
                if(_if_conditional13=self->len==0,                _if_conditional13) {
                    litem_30=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value62=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/neo-c.h", 217, "list_item$1long"))));
                    come_call_finalizer3(right_value62,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_30->prev=((void*)0);
                    litem_30->next=((void*)0);
                    litem_30->item=item;
                    self->tail=litem_30;
                    self->head=litem_30;
                }
                else {
                    if(_if_conditional14=self->len==1,                    _if_conditional14) {
                        litem_31=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value63=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/neo-c.h", 227, "list_item$1long"))));
                        come_call_finalizer3(right_value63,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_31->prev=self->head;
                        litem_31->next=((void*)0);
                        litem_31->item=item;
                        self->tail=litem_31;
                        self->head->next=litem_31;
                    }
                    else {
                        litem_32=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value64=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/neo-c.h", 237, "list_item$1long"))));
                        come_call_finalizer3(right_value64,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_32->prev=self->tail;
                        litem_32->next=((void*)0);
                        litem_32->item=item;
                        self->tail->next=litem_32;
                        self->tail=litem_32;
                    }
                }
                self->len++;
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
            it_33=self->head;
            while(_while_condtional4=it_33!=((void*)0),            _while_condtional4) {
                prev_it_34=it_33;
                it_33=it_33->next;
                come_call_finalizer3(prev_it_34,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__;
int i_35;
struct list$1float* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_35, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_35=0;        i_35<num_value;        i_35++        ){
            list$1float_push_back(self,values[i_35]);
        }
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
                if(_if_conditional15=self->len==0,                _if_conditional15) {
                    litem_36=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value67=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/neo-c.h", 217, "list_item$1float"))));
                    come_call_finalizer3(right_value67,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_36->prev=((void*)0);
                    litem_36->next=((void*)0);
                    litem_36->item=item;
                    self->tail=litem_36;
                    self->head=litem_36;
                }
                else {
                    if(_if_conditional16=self->len==1,                    _if_conditional16) {
                        litem_37=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value68=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/neo-c.h", 227, "list_item$1float"))));
                        come_call_finalizer3(right_value68,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_37->prev=self->head;
                        litem_37->next=((void*)0);
                        litem_37->item=item;
                        self->tail=litem_37;
                        self->head->next=litem_37;
                    }
                    else {
                        litem_38=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value69=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/neo-c.h", 237, "list_item$1float"))));
                        come_call_finalizer3(right_value69,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_38->prev=self->tail;
                        litem_38->next=((void*)0);
                        litem_38->item=item;
                        self->tail->next=litem_38;
                        self->tail=litem_38;
                    }
                }
                self->len++;
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
            it_39=self->head;
            while(_while_condtional5=it_39!=((void*)0),            _while_condtional5) {
                prev_it_40=it_39;
                it_39=it_39->next;
                come_call_finalizer3(prev_it_40,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__;
int i_41;
struct list$1double* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_41, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_41=0;        i_41<num_value;        i_41++        ){
            list$1double_push_back(self,values[i_41]);
        }
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
                if(_if_conditional17=self->len==0,                _if_conditional17) {
                    litem_42=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value72=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/neo-c.h", 217, "list_item$1double"))));
                    come_call_finalizer3(right_value72,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_42->prev=((void*)0);
                    litem_42->next=((void*)0);
                    litem_42->item=item;
                    self->tail=litem_42;
                    self->head=litem_42;
                }
                else {
                    if(_if_conditional18=self->len==1,                    _if_conditional18) {
                        litem_43=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value73=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/neo-c.h", 227, "list_item$1double"))));
                        come_call_finalizer3(right_value73,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_43->prev=self->head;
                        litem_43->next=((void*)0);
                        litem_43->item=item;
                        self->tail=litem_43;
                        self->head->next=litem_43;
                    }
                    else {
                        litem_44=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value74=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/neo-c.h", 237, "list_item$1double"))));
                        come_call_finalizer3(right_value74,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_44->prev=self->tail;
                        litem_44->next=((void*)0);
                        litem_44->item=item;
                        self->tail->next=litem_44;
                        self->tail=litem_44;
                    }
                }
                self->len++;
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
            it_45=self->head;
            while(_while_condtional6=it_45!=((void*)0),            _while_condtional6) {
                prev_it_46=it_45;
                it_45=it_45->next;
                come_call_finalizer3(prev_it_46,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
            }
}










struct sIntNode* sIntNode_initialize(struct sIntNode* self, int value, struct sInfo* info){
void* __result_obj__;
void* right_value79;
char* __dec_obj12;
struct sIntNode* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
    self->value=value;
    self->sline=info->sline;
    __dec_obj12=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value79=__builtin_string(info->sname))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result52__ = __result_obj__ = self;
    come_call_finalizer3(self,sIntNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result52__;
    come_call_finalizer3(self,sIntNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sIntNode_kind(struct sIntNode* self){
void* __result_obj__;
void* right_value80;
char* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
    __result53__ = __result_obj__ = ((char*)(right_value80=__builtin_string("sIntNode")));
    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result53__;
}

_Bool sIntNode_compile(struct sIntNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value81;
struct CVALUE* come_value_47;
void* right_value82;
char* __dec_obj13;
void* right_value83;
void* right_value84;
struct sType* __dec_obj14;
_Bool __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
memset(&come_value_47, 0, sizeof(struct CVALUE*));
right_value82 = (void*)0;
right_value83 = (void*)0;
right_value84 = (void*)0;
    come_value_47=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value81=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05number.c", 22, "CVALUE"))));
    come_call_finalizer3(right_value81,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj13=come_value_47->c_value;
    come_value_47->c_value=(char*)come_increment_ref_count(((char*)(right_value82=xsprintf("%d",self->value))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj14=come_value_47->type;
    come_value_47->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value84=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value83=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05number.c", 25, "sType")))),"int",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value83,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value84,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_47->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_47));
    add_come_last_code(info,"%s;\n",come_value_47->c_value);
    __result55__ = (_Bool)1;
    come_call_finalizer3(come_value_47,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result55__;
    come_call_finalizer3(come_value_47,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

_Bool sIntNode_terminated(struct sIntNode* self){
void* __result_obj__;
_Bool __result56__;
memset(&__result_obj__, 0, sizeof(void*));
    __result56__ = (_Bool)0;
    return __result56__;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional20;
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional20=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional20) {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional21=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional21) {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional22;
_Bool _if_conditional24;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional29;
_Bool _if_conditional31;
_Bool _if_conditional32;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional38;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional22=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                _if_conditional22) {
                    come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional24=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional24) {
                    come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional26=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional26) {
                    come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional27=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional27) {
                    self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional28=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional28) {
                    come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional29=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional29) {
                    come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional31=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional31) {
                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional32=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional32) {
                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional34=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional34) {
                    come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional35=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional35) {
                    if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional36=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional36) {
                    if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional37=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional37) {
                    self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional38=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional38) {
                    self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_48;
_Bool _while_condtional7;
struct list_item$1sTypeph* prev_it_49;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_48, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_49, 0, sizeof(struct list_item$1sTypeph*));
                        it_48=self->head;
                        while(_while_condtional7=it_48!=((void*)0),                        _while_condtional7) {
                            prev_it_49=it_48;
                            it_48=it_48->next;
                            come_call_finalizer3(prev_it_49,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional23;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional23=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional23) {
                                    come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional25=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional25) {
                            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_50;
_Bool _while_condtional8;
struct list_item$1sNodeph* prev_it_51;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_50, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_51, 0, sizeof(struct list_item$1sNodeph*));
                        it_50=self->head;
                        while(_while_condtional8=it_50!=((void*)0),                        _while_condtional8) {
                            prev_it_51=it_50;
                            it_50=it_50->next;
                            come_call_finalizer3(prev_it_51,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional30;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional30=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional30) {
                                    if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_52;
_Bool _while_condtional9;
struct list_item$1charph* prev_it_53;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_52, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_53, 0, sizeof(struct list_item$1charph*));
                        it_52=self->head;
                        while(_while_condtional9=it_52!=((void*)0),                        _while_condtional9) {
                            prev_it_53=it_52;
                            it_52=it_52->next;
                            come_call_finalizer3(prev_it_53,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional33;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional33=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional33) {
                                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional39;
void* right_value85;
struct list_item$1CVALUEph* litem_54;
struct CVALUE* __dec_obj15;
_Bool _if_conditional41;
void* right_value86;
struct list_item$1CVALUEph* litem_55;
struct CVALUE* __dec_obj16;
void* right_value87;
struct list_item$1CVALUEph* litem_56;
struct CVALUE* __dec_obj17;
struct list$1CVALUEph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value85 = (void*)0;
memset(&litem_54, 0, sizeof(struct list_item$1CVALUEph*));
right_value86 = (void*)0;
memset(&litem_55, 0, sizeof(struct list_item$1CVALUEph*));
right_value87 = (void*)0;
memset(&litem_56, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional39=self->len==0,        _if_conditional39) {
            litem_54=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value85=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/neo-c.h", 217, "list_item$1CVALUEph"))));
            come_call_finalizer3(right_value85,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_54->prev=((void*)0);
            litem_54->next=((void*)0);
            __dec_obj15=litem_54->item;
            litem_54->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj15,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_54;
            self->head=litem_54;
        }
        else {
            if(_if_conditional41=self->len==1,            _if_conditional41) {
                litem_55=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value86=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/neo-c.h", 227, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value86,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_55->prev=self->head;
                litem_55->next=((void*)0);
                __dec_obj16=litem_55->item;
                litem_55->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj16,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                self->tail=litem_55;
                self->head->next=litem_55;
            }
            else {
                litem_56=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value87=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/neo-c.h", 237, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value87,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_56->prev=self->tail;
                litem_56->next=((void*)0);
                __dec_obj17=litem_56->item;
                litem_56->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj17,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                self->tail->next=litem_56;
                self->tail=litem_56;
            }
        }
        self->len++;
        __result54__ = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        return __result54__;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional40;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional40=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional40) {
                    come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
}

struct sUIntNode* sUIntNode_initialize(struct sUIntNode* self, unsigned int value, struct sInfo* info){
void* __result_obj__;
void* right_value88;
char* __dec_obj18;
struct sUIntNode* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
    self->value=value;
    self->sline=info->sline;
    __dec_obj18=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value88=__builtin_string(info->sname))));
    __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result57__ = __result_obj__ = self;
    come_call_finalizer3(self,sUIntNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result57__;
    come_call_finalizer3(self,sUIntNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sUIntNode_terminated(struct sUIntNode* self){
void* __result_obj__;
_Bool __result58__;
memset(&__result_obj__, 0, sizeof(void*));
    __result58__ = (_Bool)0;
    return __result58__;
}

char* sUIntNode_kind(struct sUIntNode* self){
void* __result_obj__;
void* right_value89;
char* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
    __result59__ = __result_obj__ = ((char*)(right_value89=__builtin_string("sUIntNode")));
    right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result59__;
}

_Bool sUIntNode_compile(struct sUIntNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value90;
struct CVALUE* come_value_57;
void* right_value91;
char* __dec_obj19;
void* right_value92;
void* right_value93;
struct sType* __dec_obj20;
_Bool __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value90 = (void*)0;
memset(&come_value_57, 0, sizeof(struct CVALUE*));
right_value91 = (void*)0;
right_value92 = (void*)0;
right_value93 = (void*)0;
    come_value_57=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value90=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05number.c", 65, "CVALUE"))));
    come_call_finalizer3(right_value90,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj19=come_value_57->c_value;
    come_value_57->c_value=(char*)come_increment_ref_count(((char*)(right_value91=xsprintf("%u",self->value))));
    __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj20=come_value_57->type;
    come_value_57->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value93=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value92=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05number.c", 68, "sType")))),"int",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj20,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value92,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value93,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_57->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_57));
    add_come_last_code(info,"%s;\n",come_value_57->c_value);
    __result60__ = (_Bool)1;
    come_call_finalizer3(come_value_57,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result60__;
    come_call_finalizer3(come_value_57,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sLongNode* sLongNode_initialize(struct sLongNode* self, unsigned long int value, struct sInfo* info){
void* __result_obj__;
void* right_value94;
char* __dec_obj21;
struct sLongNode* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
    self->value=value;
    self->sline=info->sline;
    __dec_obj21=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value94=__builtin_string(info->sname))));
    __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result61__ = __result_obj__ = self;
    come_call_finalizer3(self,sLongNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result61__;
    come_call_finalizer3(self,sLongNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sLongNode_kind(struct sLongNode* self){
void* __result_obj__;
void* right_value95;
char* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
right_value95 = (void*)0;
    __result62__ = __result_obj__ = ((char*)(right_value95=__builtin_string("sLongNode")));
    right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result62__;
}

_Bool sLongNode_compile(struct sLongNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value96;
struct CVALUE* come_value_58;
void* right_value97;
char* __dec_obj22;
void* right_value98;
void* right_value99;
struct sType* __dec_obj23;
_Bool __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value96 = (void*)0;
memset(&come_value_58, 0, sizeof(struct CVALUE*));
right_value97 = (void*)0;
right_value98 = (void*)0;
right_value99 = (void*)0;
    come_value_58=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value96=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05number.c", 98, "CVALUE"))));
    come_call_finalizer3(right_value96,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj22=come_value_58->c_value;
    come_value_58->c_value=(char*)come_increment_ref_count(((char*)(right_value97=xsprintf("%ld",self->value))));
    __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj23=come_value_58->type;
    come_value_58->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value99=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value98=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05number.c", 101, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj23,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value98,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value99,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_58->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_58));
    add_come_last_code(info,"%s;\n",come_value_58->c_value);
    __result63__ = (_Bool)1;
    come_call_finalizer3(come_value_58,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result63__;
    come_call_finalizer3(come_value_58,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

_Bool sLongNode_terminated(struct sLongNode* self){
void* __result_obj__;
_Bool __result64__;
memset(&__result_obj__, 0, sizeof(void*));
    __result64__ = (_Bool)0;
    return __result64__;
}

struct sULongNode* sULongNode_initialize(struct sULongNode* self, unsigned long int value, struct sInfo* info){
void* __result_obj__;
void* right_value100;
char* __dec_obj24;
struct sULongNode* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
right_value100 = (void*)0;
    self->value=value;
    self->sline=info->sline;
    __dec_obj24=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value100=__builtin_string(info->sname))));
    __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result65__ = __result_obj__ = self;
    come_call_finalizer3(self,sULongNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result65__;
    come_call_finalizer3(self,sULongNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sULongNode_kind(struct sULongNode* self){
void* __result_obj__;
void* right_value101;
char* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
right_value101 = (void*)0;
    __result66__ = __result_obj__ = ((char*)(right_value101=__builtin_string("sULongNode")));
    right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result66__;
}

_Bool sULongNode_compile(struct sULongNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value102;
struct CVALUE* come_value_59;
void* right_value103;
char* __dec_obj25;
void* right_value104;
void* right_value105;
struct sType* __dec_obj26;
_Bool __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value102 = (void*)0;
memset(&come_value_59, 0, sizeof(struct CVALUE*));
right_value103 = (void*)0;
right_value104 = (void*)0;
right_value105 = (void*)0;
    come_value_59=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value102=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05number.c", 136, "CVALUE"))));
    come_call_finalizer3(right_value102,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj25=come_value_59->c_value;
    come_value_59->c_value=(char*)come_increment_ref_count(((char*)(right_value103=xsprintf("%lu",self->value))));
    __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj26=come_value_59->type;
    come_value_59->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value105=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value104=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05number.c", 139, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj26,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value104,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value105,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_59->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_59));
    add_come_last_code(info,"%s;\n",come_value_59->c_value);
    __result67__ = (_Bool)1;
    come_call_finalizer3(come_value_59,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result67__;
    come_call_finalizer3(come_value_59,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

_Bool sULongNode_terminated(struct sULongNode* self){
void* __result_obj__;
_Bool __result68__;
memset(&__result_obj__, 0, sizeof(void*));
    __result68__ = (_Bool)0;
    return __result68__;
}

struct sFloatNode* sFloatNode_initialize(struct sFloatNode* self, float value, struct sInfo* info){
void* __result_obj__;
void* right_value106;
char* __dec_obj27;
struct sFloatNode* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
    self->value=value;
    self->sline=info->sline;
    __dec_obj27=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value106=__builtin_string(info->sname))));
    __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result69__ = __result_obj__ = self;
    come_call_finalizer3(self,sFloatNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result69__;
    come_call_finalizer3(self,sFloatNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sFloatNode_kind(struct sFloatNode* self){
void* __result_obj__;
void* right_value107;
char* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value107 = (void*)0;
    __result70__ = __result_obj__ = ((char*)(right_value107=__builtin_string("sFloatNode")));
    right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result70__;
}

_Bool sFloatNode_compile(struct sFloatNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value108;
struct CVALUE* come_value_60;
void* right_value109;
char* __dec_obj28;
void* right_value110;
void* right_value111;
struct sType* __dec_obj29;
_Bool __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value108 = (void*)0;
memset(&come_value_60, 0, sizeof(struct CVALUE*));
right_value109 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
    come_value_60=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value108=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05number.c", 174, "CVALUE"))));
    come_call_finalizer3(right_value108,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj28=come_value_60->c_value;
    come_value_60->c_value=(char*)come_increment_ref_count(((char*)(right_value109=xsprintf("%f",self->value))));
    __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj29=come_value_60->type;
    come_value_60->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value111=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value110=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05number.c", 177, "sType")))),"float",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj29,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value110,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value111,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_60->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_60));
    add_come_last_code(info,"%s;\n",come_value_60->c_value);
    __result71__ = (_Bool)1;
    come_call_finalizer3(come_value_60,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result71__;
    come_call_finalizer3(come_value_60,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

_Bool sFloatNode_terminated(struct sFloatNode* self){
void* __result_obj__;
_Bool __result72__;
memset(&__result_obj__, 0, sizeof(void*));
    __result72__ = (_Bool)0;
    return __result72__;
}

struct sDoubleNode* sDoubleNode_initialize(struct sDoubleNode* self, double value, struct sInfo* info){
void* __result_obj__;
void* right_value112;
char* __dec_obj30;
struct sDoubleNode* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value112 = (void*)0;
    self->value=value;
    self->sline=info->sline;
    __dec_obj30=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value112=__builtin_string(info->sname))));
    __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result73__ = __result_obj__ = self;
    come_call_finalizer3(self,sDoubleNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result73__;
    come_call_finalizer3(self,sDoubleNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sDoubleNode_kind(struct sDoubleNode* self){
void* __result_obj__;
void* right_value113;
char* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value113 = (void*)0;
    __result74__ = __result_obj__ = ((char*)(right_value113=__builtin_string("sDoubleNode")));
    right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result74__;
}

_Bool sDoubleNode_compile(struct sDoubleNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value114;
struct CVALUE* come_value_61;
void* right_value115;
char* __dec_obj31;
void* right_value116;
void* right_value117;
struct sType* __dec_obj32;
_Bool __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value114 = (void*)0;
memset(&come_value_61, 0, sizeof(struct CVALUE*));
right_value115 = (void*)0;
right_value116 = (void*)0;
right_value117 = (void*)0;
    come_value_61=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value114=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05number.c", 212, "CVALUE"))));
    come_call_finalizer3(right_value114,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj31=come_value_61->c_value;
    come_value_61->c_value=(char*)come_increment_ref_count(((char*)(right_value115=xsprintf("%lf",self->value))));
    __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj32=come_value_61->type;
    come_value_61->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value117=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value116=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05number.c", 215, "sType")))),"double",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj32,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value116,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value117,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_61->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_61));
    add_come_last_code(info,"%s;\n",come_value_61->c_value);
    __result75__ = (_Bool)1;
    come_call_finalizer3(come_value_61,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result75__;
    come_call_finalizer3(come_value_61,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

_Bool sDoubleNode_terminated(struct sDoubleNode* self){
void* __result_obj__;
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
    __result76__ = (_Bool)0;
    return __result76__;
}

struct sNode* create_int_node(int value, struct sInfo* info){
void* __result_obj__;
void* right_value118;
void* right_value119;
struct sNode* _inf_value1;
struct sIntNode* _inf_obj_value1;
void* right_value122;
struct sNode* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value118 = (void*)0;
right_value119 = (void*)0;
right_value122 = (void*)0;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 233, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sIntNode*)(right_value119=sIntNode_initialize((struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value118=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "05number.c", 233, "sIntNode")))),value,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sIntNode_finalize;
    _inf_value1->clone=(void*)sIntNode_clone;
    _inf_value1->compile=(void*)sIntNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sIntNode_terminated;
    _inf_value1->kind=(void*)sIntNode_kind;
    __result79__ = __result_obj__ = ((struct sNode*)(right_value122=_inf_value1));
    come_call_finalizer3(right_value118,sIntNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value119,sIntNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value122) { right_value122 = come_decrement_ref_count2(right_value122, ((struct sNode*)right_value122)->finalize, ((struct sNode*)right_value122)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result79__;
}

struct sNode* get_number(_Bool minus, struct sInfo* info){
void* __result_obj__;
const int buf_size_63=128;
char* p2_65;
_Bool _if_conditional52;
_Bool _if_conditional53;
_Bool _while_condtional10;
_Bool _if_conditional54;
_Bool _if_conditional55;
char c_66;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _while_condtional11;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional63;
_Bool _if_conditional64;
_Bool _if_conditional65;
_Bool _while_condtional12;
_Bool _if_conditional66;
_Bool _if_conditional67;
_Bool _if_conditional68;
void* right_value123;
void* right_value124;
struct sNode* _inf_value2;
struct sFloatNode* _inf_obj_value2;
void* right_value127;
struct sNode* __result82__;
_Bool _if_conditional74;
void* right_value128;
void* right_value129;
struct sNode* _inf_value3;
struct sDoubleNode* _inf_obj_value3;
void* right_value132;
struct sNode* __result85__;
void* right_value133;
void* right_value134;
struct sNode* _inf_value4;
struct sDoubleNode* _inf_obj_value4;
void* right_value137;
struct sNode* __result88__;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
unsigned long int lont_70;
int value2_71;
void* right_value138;
void* right_value139;
struct sNode* _inf_value5;
struct sULongNode* _inf_obj_value5;
void* right_value142;
struct sNode* __result91__;
unsigned long int lont_73;
int value_74;
void* right_value143;
void* right_value144;
struct sNode* _inf_value6;
struct sULongNode* _inf_obj_value6;
void* right_value147;
struct sNode* __result94__;
unsigned int value_76;
void* right_value148;
void* right_value149;
struct sNode* _inf_value7;
struct sUIntNode* _inf_obj_value7;
void* right_value152;
struct sNode* __result97__;
_Bool _if_conditional103;
_Bool _if_conditional104;
unsigned long long int value_78;
void* right_value153;
void* right_value154;
struct sNode* _inf_value8;
struct sLongNode* _inf_obj_value8;
void* right_value157;
struct sNode* __result100__;
_Bool _if_conditional110;
unsigned long long int value_80;
void* right_value158;
void* right_value159;
struct sNode* _inf_value9;
struct sULongNode* _inf_obj_value9;
void* right_value162;
struct sNode* __result103__;
unsigned long long int value_82;
void* right_value163;
void* right_value164;
struct sNode* _inf_value10;
struct sLongNode* _inf_obj_value10;
void* right_value167;
struct sNode* __result106__;
unsigned long int lont_84;
int value_85;
void* right_value168;
void* right_value169;
struct sNode* _inf_value11;
struct sIntNode* _inf_obj_value11;
void* right_value172;
struct sNode* __result109__;
struct sNode* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p2_65, 0, sizeof(char*));
memset(&c_66, 0, sizeof(char));
right_value123 = (void*)0;
right_value124 = (void*)0;
right_value127 = (void*)0;
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
right_value134 = (void*)0;
right_value137 = (void*)0;
memset(&lont_70, 0, sizeof(unsigned long int));
memset(&value2_71, 0, sizeof(int));
right_value138 = (void*)0;
right_value139 = (void*)0;
right_value142 = (void*)0;
memset(&lont_73, 0, sizeof(unsigned long int));
memset(&value_74, 0, sizeof(int));
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value147 = (void*)0;
memset(&value_76, 0, sizeof(unsigned int));
right_value148 = (void*)0;
right_value149 = (void*)0;
right_value152 = (void*)0;
memset(&value_78, 0, sizeof(unsigned long long int));
right_value153 = (void*)0;
right_value154 = (void*)0;
right_value157 = (void*)0;
memset(&value_80, 0, sizeof(unsigned long long int));
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value162 = (void*)0;
memset(&value_82, 0, sizeof(unsigned long long int));
right_value163 = (void*)0;
right_value164 = (void*)0;
right_value167 = (void*)0;
memset(&lont_84, 0, sizeof(unsigned long int));
memset(&value_85, 0, sizeof(int));
right_value168 = (void*)0;
right_value169 = (void*)0;
right_value172 = (void*)0;
    char buf_64[128+1];
    memset(&buf_64, 0, sizeof(char)    *(128+1)    );
    p2_65=buf_64;
    if(minus) {
        *p2_65=45;
        p2_65++;
    }
    if(_if_conditional53=xisdigit(*info->p),    _if_conditional53) {
        while(_while_condtional10=xisdigit(*info->p)||*info->p==95,        _while_condtional10) {
            if(_if_conditional54=*info->p==95,            _if_conditional54) {
                info->p++;
            }
            else {
                *p2_65++=*info->p;
                info->p++;
            }
            if(_if_conditional55=p2_65-buf_64>=buf_size_63,            _if_conditional55) {
                printf("%s %d: overflow node of number\n",info->sname,info->sline);
                exit(5);
            }
        }
        *p2_65=0;
        skip_spaces_and_lf(info);
        c_66=*(info->p+1);
        if(_if_conditional56=*info->p==46&&xisdigit(c_66),        _if_conditional56) {
            *p2_65++=*info->p;
            if(_if_conditional57=p2_65-buf_64>=buf_size_63,            _if_conditional57) {
                printf("%s %d: overflow node of number",info->sname,info->sline);
                exit(11);
            }
            info->p++;
            skip_spaces_and_lf(info);
            while(_while_condtional11=xisdigit(*info->p)||*info->p==95,            _while_condtional11) {
                if(_if_conditional58=*info->p==95,                _if_conditional58) {
                    info->p++;
                }
                else {
                    *p2_65++=*info->p;
                    info->p++;
                }
                if(_if_conditional59=p2_65-buf_64>=buf_size_63,                _if_conditional59) {
                    err_msg(info,"overflow node of number");
                    exit(2);
                }
            }
            if(_if_conditional60=*info->p==101,            _if_conditional60) {
                *p2_65++=*info->p;
                info->p++;
                if(_if_conditional61=p2_65-buf_64>=buf_size_63,                _if_conditional61) {
                    err_msg(info,"overflow node of number");
                    exit(2);
                }
                if(_if_conditional62=*info->p==43,                _if_conditional62) {
                    *p2_65++=*info->p;
                    info->p++;
                    if(_if_conditional63=p2_65-buf_64>=buf_size_63,                    _if_conditional63) {
                        err_msg(info,"overflow node of number");
                        exit(2);
                    }
                }
                else {
                    if(_if_conditional64=*info->p==45,                    _if_conditional64) {
                        *p2_65++=*info->p;
                        info->p++;
                        if(_if_conditional65=p2_65-buf_64>=buf_size_63,                        _if_conditional65) {
                            err_msg(info,"overflow node of number");
                            exit(2);
                        }
                    }
                    else {
                        err_msg(info,"invalid float value");
                        exit(2);
                    }
                }
                while(_while_condtional12=xisdigit(*info->p)||*info->p==95,                _while_condtional12) {
                    if(_if_conditional66=*info->p==95,                    _if_conditional66) {
                        info->p++;
                    }
                    else {
                        *p2_65++=*info->p;
                        info->p++;
                    }
                    if(_if_conditional67=p2_65-buf_64>=buf_size_63,                    _if_conditional67) {
                        err_msg(info,"overflow node of number");
                        exit(2);
                    }
                }
            }
            *p2_65=0;
            skip_spaces_and_lf(info);
            if(_if_conditional68=*info->p==102||*info->p==70,            _if_conditional68) {
                info->p++;
                skip_spaces_and_lf(info);
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 347, "struct sNode");
                _inf_obj_value2=come_increment_ref_count(((struct sFloatNode*)(right_value124=sFloatNode_initialize((struct sFloatNode*)come_increment_ref_count(((struct sFloatNode*)(right_value123=(struct sFloatNode*)come_calloc(1, sizeof(struct sFloatNode)*(1), "05number.c", 347, "sFloatNode")))),strtof(buf_64,((void*)0)),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFloatNode_finalize;
                _inf_value2->clone=(void*)sFloatNode_clone;
                _inf_value2->compile=(void*)sFloatNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sFloatNode_terminated;
                _inf_value2->kind=(void*)sFloatNode_kind;
                __result82__ = __result_obj__ = ((struct sNode*)(right_value127=_inf_value2));
                come_call_finalizer3(right_value123,sFloatNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value124,sFloatNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value127) { right_value127 = come_decrement_ref_count2(right_value127, ((struct sNode*)right_value127)->finalize, ((struct sNode*)right_value127)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result82__;
            }
            else {
                if(_if_conditional74=*info->p==108||*info->p==76,                _if_conditional74) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 353, "struct sNode");
                    _inf_obj_value3=come_increment_ref_count(((struct sDoubleNode*)(right_value129=sDoubleNode_initialize((struct sDoubleNode*)come_increment_ref_count(((struct sDoubleNode*)(right_value128=(struct sDoubleNode*)come_calloc(1, sizeof(struct sDoubleNode)*(1), "05number.c", 353, "sDoubleNode")))),strtod(buf_64,((void*)0)),info))));
                    _inf_value3->_protocol_obj=_inf_obj_value3;
                    _inf_value3->finalize=(void*)sDoubleNode_finalize;
                    _inf_value3->clone=(void*)sDoubleNode_clone;
                    _inf_value3->compile=(void*)sDoubleNode_compile;
                    _inf_value3->sline=(void*)sNodeBase_sline;
                    _inf_value3->sname=(void*)sNodeBase_sname;
                    _inf_value3->terminated=(void*)sDoubleNode_terminated;
                    _inf_value3->kind=(void*)sDoubleNode_kind;
                    __result85__ = __result_obj__ = ((struct sNode*)(right_value132=_inf_value3));
                    come_call_finalizer3(right_value128,sDoubleNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value129,sDoubleNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value132) { right_value132 = come_decrement_ref_count2(right_value132, ((struct sNode*)right_value132)->finalize, ((struct sNode*)right_value132)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result85__;
                }
                else {
                    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 356, "struct sNode");
                    _inf_obj_value4=come_increment_ref_count(((struct sDoubleNode*)(right_value134=sDoubleNode_initialize((struct sDoubleNode*)come_increment_ref_count(((struct sDoubleNode*)(right_value133=(struct sDoubleNode*)come_calloc(1, sizeof(struct sDoubleNode)*(1), "05number.c", 356, "sDoubleNode")))),strtod(buf_64,((void*)0)),info))));
                    _inf_value4->_protocol_obj=_inf_obj_value4;
                    _inf_value4->finalize=(void*)sDoubleNode_finalize;
                    _inf_value4->clone=(void*)sDoubleNode_clone;
                    _inf_value4->compile=(void*)sDoubleNode_compile;
                    _inf_value4->sline=(void*)sNodeBase_sline;
                    _inf_value4->sname=(void*)sNodeBase_sname;
                    _inf_value4->terminated=(void*)sDoubleNode_terminated;
                    _inf_value4->kind=(void*)sDoubleNode_kind;
                    __result88__ = __result_obj__ = ((struct sNode*)(right_value137=_inf_value4));
                    come_call_finalizer3(right_value133,sDoubleNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value134,sDoubleNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value137) { right_value137 = come_decrement_ref_count2(right_value137, ((struct sNode*)right_value137)->finalize, ((struct sNode*)right_value137)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result88__;
                }
            }
        }
        else {
            if(_if_conditional85=*info->p==117||*info->p==85,            _if_conditional85) {
                info->p++;
                skip_spaces_and_lf(info);
                if(_if_conditional86=*info->p==76||*info->p==108,                _if_conditional86) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(_if_conditional87=*info->p==76||*info->p==108,                    _if_conditional87) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        value2_71=strtoull(buf_64,((void*)0),0);
                        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 376, "struct sNode");
                        _inf_obj_value5=come_increment_ref_count(((struct sULongNode*)(right_value139=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value138=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05number.c", 376, "sULongNode")))),value2_71,info))));
                        _inf_value5->_protocol_obj=_inf_obj_value5;
                        _inf_value5->finalize=(void*)sULongNode_finalize;
                        _inf_value5->clone=(void*)sULongNode_clone;
                        _inf_value5->compile=(void*)sULongNode_compile;
                        _inf_value5->sline=(void*)sNodeBase_sline;
                        _inf_value5->sname=(void*)sNodeBase_sname;
                        _inf_value5->terminated=(void*)sULongNode_terminated;
                        _inf_value5->kind=(void*)sULongNode_kind;
                        __result91__ = __result_obj__ = ((struct sNode*)(right_value142=_inf_value5));
                        come_call_finalizer3(right_value138,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value139,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value142) { right_value142 = come_decrement_ref_count2(right_value142, ((struct sNode*)right_value142)->finalize, ((struct sNode*)right_value142)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result91__;
                    }
                    else {
                        value_74=strtoull(buf_64,((void*)0),0);
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 380, "struct sNode");
                        _inf_obj_value6=come_increment_ref_count(((struct sULongNode*)(right_value144=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value143=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05number.c", 380, "sULongNode")))),value_74,info))));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sULongNode_finalize;
                        _inf_value6->clone=(void*)sULongNode_clone;
                        _inf_value6->compile=(void*)sULongNode_compile;
                        _inf_value6->sline=(void*)sNodeBase_sline;
                        _inf_value6->sname=(void*)sNodeBase_sname;
                        _inf_value6->terminated=(void*)sULongNode_terminated;
                        _inf_value6->kind=(void*)sULongNode_kind;
                        __result94__ = __result_obj__ = ((struct sNode*)(right_value147=_inf_value6));
                        come_call_finalizer3(right_value143,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value144,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value147) { right_value147 = come_decrement_ref_count2(right_value147, ((struct sNode*)right_value147)->finalize, ((struct sNode*)right_value147)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result94__;
                    }
                }
                else {
                    value_76=strtoul(buf_64,((void*)0),0);
                    _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 385, "struct sNode");
                    _inf_obj_value7=come_increment_ref_count(((struct sUIntNode*)(right_value149=sUIntNode_initialize((struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(right_value148=(struct sUIntNode*)come_calloc(1, sizeof(struct sUIntNode)*(1), "05number.c", 385, "sUIntNode")))),value_76,info))));
                    _inf_value7->_protocol_obj=_inf_obj_value7;
                    _inf_value7->finalize=(void*)sUIntNode_finalize;
                    _inf_value7->clone=(void*)sUIntNode_clone;
                    _inf_value7->compile=(void*)sUIntNode_compile;
                    _inf_value7->sline=(void*)sNodeBase_sline;
                    _inf_value7->sname=(void*)sNodeBase_sname;
                    _inf_value7->terminated=(void*)sUIntNode_terminated;
                    _inf_value7->kind=(void*)sUIntNode_kind;
                    __result97__ = __result_obj__ = ((struct sNode*)(right_value152=_inf_value7));
                    come_call_finalizer3(right_value148,sUIntNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value149,sUIntNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value152) { right_value152 = come_decrement_ref_count2(right_value152, ((struct sNode*)right_value152)->finalize, ((struct sNode*)right_value152)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result97__;
                }
            }
            else {
                if(_if_conditional103=*info->p==76||*info->p==108,                _if_conditional103) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(_if_conditional104=*info->p==76||*info->p==108,                    _if_conditional104) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        value_78=strtoull(buf_64,((void*)0),0);
                        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 399, "struct sNode");
                        _inf_obj_value8=come_increment_ref_count(((struct sLongNode*)(right_value154=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value153=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05number.c", 399, "sLongNode")))),value_78,info))));
                        _inf_value8->_protocol_obj=_inf_obj_value8;
                        _inf_value8->finalize=(void*)sLongNode_finalize;
                        _inf_value8->clone=(void*)sLongNode_clone;
                        _inf_value8->compile=(void*)sLongNode_compile;
                        _inf_value8->sline=(void*)sNodeBase_sline;
                        _inf_value8->sname=(void*)sNodeBase_sname;
                        _inf_value8->terminated=(void*)sLongNode_terminated;
                        _inf_value8->kind=(void*)sLongNode_kind;
                        __result100__ = __result_obj__ = ((struct sNode*)(right_value157=_inf_value8));
                        come_call_finalizer3(right_value153,sLongNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value154,sLongNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value157) { right_value157 = come_decrement_ref_count2(right_value157, ((struct sNode*)right_value157)->finalize, ((struct sNode*)right_value157)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result100__;
                    }
                    else {
                        if(_if_conditional110=*info->p==85||*info->p==117,                        _if_conditional110) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            value_80=strtoull(buf_64,((void*)0),0);
                            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 408, "struct sNode");
                            _inf_obj_value9=come_increment_ref_count(((struct sULongNode*)(right_value159=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value158=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05number.c", 408, "sULongNode")))),value_80,info))));
                            _inf_value9->_protocol_obj=_inf_obj_value9;
                            _inf_value9->finalize=(void*)sULongNode_finalize;
                            _inf_value9->clone=(void*)sULongNode_clone;
                            _inf_value9->compile=(void*)sULongNode_compile;
                            _inf_value9->sline=(void*)sNodeBase_sline;
                            _inf_value9->sname=(void*)sNodeBase_sname;
                            _inf_value9->terminated=(void*)sULongNode_terminated;
                            _inf_value9->kind=(void*)sULongNode_kind;
                            __result103__ = __result_obj__ = ((struct sNode*)(right_value162=_inf_value9));
                            come_call_finalizer3(right_value158,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value159,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value162) { right_value162 = come_decrement_ref_count2(right_value162, ((struct sNode*)right_value162)->finalize, ((struct sNode*)right_value162)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result103__;
                        }
                        else {
                            value_82=strtoull(buf_64,((void*)0),0);
                            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 412, "struct sNode");
                            _inf_obj_value10=come_increment_ref_count(((struct sLongNode*)(right_value164=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value163=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05number.c", 412, "sLongNode")))),value_82,info))));
                            _inf_value10->_protocol_obj=_inf_obj_value10;
                            _inf_value10->finalize=(void*)sLongNode_finalize;
                            _inf_value10->clone=(void*)sLongNode_clone;
                            _inf_value10->compile=(void*)sLongNode_compile;
                            _inf_value10->sline=(void*)sNodeBase_sline;
                            _inf_value10->sname=(void*)sNodeBase_sname;
                            _inf_value10->terminated=(void*)sLongNode_terminated;
                            _inf_value10->kind=(void*)sLongNode_kind;
                            __result106__ = __result_obj__ = ((struct sNode*)(right_value167=_inf_value10));
                            come_call_finalizer3(right_value163,sLongNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value164,sLongNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value167) { right_value167 = come_decrement_ref_count2(right_value167, ((struct sNode*)right_value167)->finalize, ((struct sNode*)right_value167)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result106__;
                        }
                    }
                }
                else {
                    value_85=strtoll(buf_64,((void*)0),0);
                    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 417, "struct sNode");
                    _inf_obj_value11=come_increment_ref_count(((struct sIntNode*)(right_value169=sIntNode_initialize((struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value168=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "05number.c", 417, "sIntNode")))),value_85,info))));
                    _inf_value11->_protocol_obj=_inf_obj_value11;
                    _inf_value11->finalize=(void*)sIntNode_finalize;
                    _inf_value11->clone=(void*)sIntNode_clone;
                    _inf_value11->compile=(void*)sIntNode_compile;
                    _inf_value11->sline=(void*)sNodeBase_sline;
                    _inf_value11->sname=(void*)sNodeBase_sname;
                    _inf_value11->terminated=(void*)sIntNode_terminated;
                    _inf_value11->kind=(void*)sIntNode_kind;
                    __result109__ = __result_obj__ = ((struct sNode*)(right_value172=_inf_value11));
                    come_call_finalizer3(right_value168,sIntNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value169,sIntNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value172) { right_value172 = come_decrement_ref_count2(right_value172, ((struct sNode*)right_value172)->finalize, ((struct sNode*)right_value172)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result109__;
                }
            }
        }
    }
    else {
        err_msg(info,"require digits after + or -");
        exit(2);
    }
    __result110__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result110__;
}

static void sFloatNode_finalize(struct sFloatNode* self){
void* __result_obj__;
_Bool _if_conditional69;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional69=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional69) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sFloatNode* sFloatNode_clone(struct sFloatNode* self){
void* __result_obj__;
_Bool _if_conditional70;
struct sFloatNode* __result80__;
void* right_value125;
struct sFloatNode* result_67;
_Bool _if_conditional71;
_Bool _if_conditional72;
void* right_value126;
char* __dec_obj34;
_Bool _if_conditional73;
struct sFloatNode* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
right_value125 = (void*)0;
memset(&result_67, 0, sizeof(struct sFloatNode*));
right_value126 = (void*)0;
                    if(_if_conditional70=self==(void*)0,                    _if_conditional70) {
                        __result80__ = __result_obj__ = (void*)0;
                        return __result80__;
                    }
                    result_67=(struct sFloatNode*)come_increment_ref_count(((struct sFloatNode*)(right_value125=(struct sFloatNode*)come_calloc(1, sizeof(struct sFloatNode)*(1), "sFloatNode_clone", 3, "sFloatNode"))));
                    come_call_finalizer3(right_value125,sFloatNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional71=self!=((void*)0),                    _if_conditional71) {
                        result_67->sline=self->sline;
                    }
                    if(_if_conditional72=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional72) {
                        __dec_obj34=result_67->sname;
                        result_67->sname=(char*)come_increment_ref_count(((char*)(right_value126=string_clone(self->sname))));
                        __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional73=self!=((void*)0),                    _if_conditional73) {
                        result_67->value=self->value;
                    }
                    __result81__ = __result_obj__ = result_67;
                    come_call_finalizer3(result_67,sFloatNode_finalize, 0, 0, 1, 0, (void*)0);
                    return __result81__;
                    come_call_finalizer3(result_67,sFloatNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sDoubleNode_finalize(struct sDoubleNode* self){
void* __result_obj__;
_Bool _if_conditional80;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional80=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional80) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sDoubleNode* sDoubleNode_clone(struct sDoubleNode* self){
void* __result_obj__;
_Bool _if_conditional81;
struct sDoubleNode* __result86__;
void* right_value135;
struct sDoubleNode* result_69;
_Bool _if_conditional82;
_Bool _if_conditional83;
void* right_value136;
char* __dec_obj36;
_Bool _if_conditional84;
struct sDoubleNode* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value135 = (void*)0;
memset(&result_69, 0, sizeof(struct sDoubleNode*));
right_value136 = (void*)0;
                        if(_if_conditional81=self==(void*)0,                        _if_conditional81) {
                            __result86__ = __result_obj__ = (void*)0;
                            return __result86__;
                        }
                        result_69=(struct sDoubleNode*)come_increment_ref_count(((struct sDoubleNode*)(right_value135=(struct sDoubleNode*)come_calloc(1, sizeof(struct sDoubleNode)*(1), "sDoubleNode_clone", 3, "sDoubleNode"))));
                        come_call_finalizer3(right_value135,sDoubleNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional82=self!=((void*)0),                        _if_conditional82) {
                            result_69->sline=self->sline;
                        }
                        if(_if_conditional83=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional83) {
                            __dec_obj36=result_69->sname;
                            result_69->sname=(char*)come_increment_ref_count(((char*)(right_value136=string_clone(self->sname))));
                            __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional84=self!=((void*)0),                        _if_conditional84) {
                            result_69->value=self->value;
                        }
                        __result87__ = __result_obj__ = result_69;
                        come_call_finalizer3(result_69,sDoubleNode_finalize, 0, 0, 1, 0, (void*)0);
                        return __result87__;
                        come_call_finalizer3(result_69,sDoubleNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* get_hex_number(_Bool minus, struct sInfo* info){
void* __result_obj__;
int buf_size_87;
char* p_89;
_Bool _while_condtional13;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
unsigned long long int value_90;
_Bool _if_conditional131;
void* right_value173;
void* right_value174;
struct sNode* _inf_value12;
struct sULongNode* _inf_obj_value12;
void* right_value177;
struct sNode* __result113__;
void* right_value178;
void* right_value179;
struct sNode* _inf_value13;
struct sULongNode* _inf_obj_value13;
void* right_value182;
struct sNode* __result116__;
unsigned long long int value_93;
_Bool _if_conditional142;
void* right_value183;
void* right_value184;
struct sNode* _inf_value14;
struct sULongNode* _inf_obj_value14;
void* right_value187;
struct sNode* __result119__;
void* right_value188;
void* right_value189;
struct sNode* _inf_value15;
struct sULongNode* _inf_obj_value15;
void* right_value192;
struct sNode* __result122__;
unsigned long long int value_96;
_Bool _if_conditional153;
void* right_value193;
void* right_value194;
struct sNode* _inf_value16;
struct sUIntNode* _inf_obj_value16;
void* right_value197;
struct sNode* __result125__;
void* right_value198;
void* right_value199;
struct sNode* _inf_value17;
struct sUIntNode* _inf_obj_value17;
void* right_value202;
struct sNode* __result128__;
_Bool _if_conditional164;
_Bool _if_conditional165;
unsigned long long int value_99;
_Bool _if_conditional166;
void* right_value203;
void* right_value204;
struct sNode* _inf_value18;
struct sLongNode* _inf_obj_value18;
void* right_value207;
struct sNode* __result131__;
void* right_value208;
void* right_value209;
struct sNode* _inf_value19;
struct sLongNode* _inf_obj_value19;
void* right_value212;
struct sNode* __result134__;
_Bool _if_conditional177;
unsigned long long int value_102;
_Bool _if_conditional178;
void* right_value213;
void* right_value214;
struct sNode* _inf_value20;
struct sULongNode* _inf_obj_value20;
void* right_value217;
struct sNode* __result137__;
void* right_value218;
void* right_value219;
struct sNode* _inf_value21;
struct sULongNode* _inf_obj_value21;
void* right_value222;
struct sNode* __result140__;
unsigned long long int value_105;
_Bool _if_conditional189;
void* right_value223;
void* right_value224;
struct sNode* _inf_value22;
struct sLongNode* _inf_obj_value22;
void* right_value227;
struct sNode* __result143__;
void* right_value228;
void* right_value229;
struct sNode* _inf_value23;
struct sLongNode* _inf_obj_value23;
void* right_value232;
struct sNode* __result146__;
unsigned long long int value_108;
_Bool _if_conditional200;
void* right_value233;
void* right_value234;
struct sNode* _inf_value24;
struct sIntNode* _inf_obj_value24;
void* right_value237;
struct sNode* __result149__;
void* right_value238;
void* right_value239;
struct sNode* _inf_value25;
struct sIntNode* _inf_obj_value25;
void* right_value242;
struct sNode* __result152__;
struct sNode* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&buf_size_87, 0, sizeof(int));
memset(&p_89, 0, sizeof(char*));
memset(&value_90, 0, sizeof(unsigned long long int));
right_value173 = (void*)0;
right_value174 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
right_value182 = (void*)0;
memset(&value_93, 0, sizeof(unsigned long long int));
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value187 = (void*)0;
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value192 = (void*)0;
memset(&value_96, 0, sizeof(unsigned long long int));
right_value193 = (void*)0;
right_value194 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value202 = (void*)0;
memset(&value_99, 0, sizeof(unsigned long long int));
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
right_value212 = (void*)0;
memset(&value_102, 0, sizeof(unsigned long long int));
right_value213 = (void*)0;
right_value214 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
right_value219 = (void*)0;
right_value222 = (void*)0;
memset(&value_105, 0, sizeof(unsigned long long int));
right_value223 = (void*)0;
right_value224 = (void*)0;
right_value227 = (void*)0;
right_value228 = (void*)0;
right_value229 = (void*)0;
right_value232 = (void*)0;
memset(&value_108, 0, sizeof(unsigned long long int));
right_value233 = (void*)0;
right_value234 = (void*)0;
right_value237 = (void*)0;
right_value238 = (void*)0;
right_value239 = (void*)0;
right_value242 = (void*)0;
    buf_size_87=128;
    char buf_88[128+1];
    memset(&buf_88, 0, sizeof(char)    *(128+1)    );
    p_89=buf_88;
    *p_89++=48;
    *p_89++=120;
    while(_while_condtional13=(*info->p>=48&&*info->p<=57)||(*info->p>=97&&*info->p<=102)||(*info->p>=65&&*info->p<=70)||*info->p==95,    _while_condtional13) {
        if(_if_conditional126=*info->p==95,        _if_conditional126) {
            info->p++;
        }
        else {
            *p_89++=*info->p;
            info->p++;
        }
        if(_if_conditional127=p_89-buf_88>=buf_size_87-1,        _if_conditional127) {
            err_msg(info,"overflow node of number");
            exit(2);
        }
    }
    *p_89=0;
    skip_spaces_and_lf(info);
    if(_if_conditional128=*info->p==117||*info->p==85,    _if_conditional128) {
        info->p++;
        skip_spaces_and_lf(info);
        if(_if_conditional129=*info->p==76||*info->p==108,        _if_conditional129) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional130=*info->p==76||*info->p==108,            _if_conditional130) {
                info->p++;
                skip_spaces_and_lf(info);
                value_90=strtoull(buf_88,((void*)0),0);
                if(minus) {
                    _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 473, "struct sNode");
                    _inf_obj_value12=come_increment_ref_count(((struct sULongNode*)(right_value174=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value173=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05number.c", 473, "sULongNode")))),-value_90,info))));
                    _inf_value12->_protocol_obj=_inf_obj_value12;
                    _inf_value12->finalize=(void*)sULongNode_finalize;
                    _inf_value12->clone=(void*)sULongNode_clone;
                    _inf_value12->compile=(void*)sULongNode_compile;
                    _inf_value12->sline=(void*)sNodeBase_sline;
                    _inf_value12->sname=(void*)sNodeBase_sname;
                    _inf_value12->terminated=(void*)sULongNode_terminated;
                    _inf_value12->kind=(void*)sULongNode_kind;
                    __result113__ = __result_obj__ = ((struct sNode*)(right_value177=_inf_value12));
                    come_call_finalizer3(right_value173,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value174,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value177) { right_value177 = come_decrement_ref_count2(right_value177, ((struct sNode*)right_value177)->finalize, ((struct sNode*)right_value177)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result113__;
                }
                else {
                    _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 476, "struct sNode");
                    _inf_obj_value13=come_increment_ref_count(((struct sULongNode*)(right_value179=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value178=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05number.c", 476, "sULongNode")))),value_90,info))));
                    _inf_value13->_protocol_obj=_inf_obj_value13;
                    _inf_value13->finalize=(void*)sULongNode_finalize;
                    _inf_value13->clone=(void*)sULongNode_clone;
                    _inf_value13->compile=(void*)sULongNode_compile;
                    _inf_value13->sline=(void*)sNodeBase_sline;
                    _inf_value13->sname=(void*)sNodeBase_sname;
                    _inf_value13->terminated=(void*)sULongNode_terminated;
                    _inf_value13->kind=(void*)sULongNode_kind;
                    __result116__ = __result_obj__ = ((struct sNode*)(right_value182=_inf_value13));
                    come_call_finalizer3(right_value178,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value179,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value182) { right_value182 = come_decrement_ref_count2(right_value182, ((struct sNode*)right_value182)->finalize, ((struct sNode*)right_value182)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result116__;
                }
            }
            else {
                value_93=strtoull(buf_88,((void*)0),0);
                if(minus) {
                    _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 483, "struct sNode");
                    _inf_obj_value14=come_increment_ref_count(((struct sULongNode*)(right_value184=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value183=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05number.c", 483, "sULongNode")))),-value_93,info))));
                    _inf_value14->_protocol_obj=_inf_obj_value14;
                    _inf_value14->finalize=(void*)sULongNode_finalize;
                    _inf_value14->clone=(void*)sULongNode_clone;
                    _inf_value14->compile=(void*)sULongNode_compile;
                    _inf_value14->sline=(void*)sNodeBase_sline;
                    _inf_value14->sname=(void*)sNodeBase_sname;
                    _inf_value14->terminated=(void*)sULongNode_terminated;
                    _inf_value14->kind=(void*)sULongNode_kind;
                    __result119__ = __result_obj__ = ((struct sNode*)(right_value187=_inf_value14));
                    come_call_finalizer3(right_value183,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value184,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value187) { right_value187 = come_decrement_ref_count2(right_value187, ((struct sNode*)right_value187)->finalize, ((struct sNode*)right_value187)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result119__;
                }
                else {
                    _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 486, "struct sNode");
                    _inf_obj_value15=come_increment_ref_count(((struct sULongNode*)(right_value189=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value188=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05number.c", 486, "sULongNode")))),value_93,info))));
                    _inf_value15->_protocol_obj=_inf_obj_value15;
                    _inf_value15->finalize=(void*)sULongNode_finalize;
                    _inf_value15->clone=(void*)sULongNode_clone;
                    _inf_value15->compile=(void*)sULongNode_compile;
                    _inf_value15->sline=(void*)sNodeBase_sline;
                    _inf_value15->sname=(void*)sNodeBase_sname;
                    _inf_value15->terminated=(void*)sULongNode_terminated;
                    _inf_value15->kind=(void*)sULongNode_kind;
                    __result122__ = __result_obj__ = ((struct sNode*)(right_value192=_inf_value15));
                    come_call_finalizer3(right_value188,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value189,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value192) { right_value192 = come_decrement_ref_count2(right_value192, ((struct sNode*)right_value192)->finalize, ((struct sNode*)right_value192)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result122__;
                }
            }
        }
        else {
            value_96=strtoull(buf_88,((void*)0),0);
            if(minus) {
                _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 494, "struct sNode");
                _inf_obj_value16=come_increment_ref_count(((struct sUIntNode*)(right_value194=sUIntNode_initialize((struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(right_value193=(struct sUIntNode*)come_calloc(1, sizeof(struct sUIntNode)*(1), "05number.c", 494, "sUIntNode")))),-value_96,info))));
                _inf_value16->_protocol_obj=_inf_obj_value16;
                _inf_value16->finalize=(void*)sUIntNode_finalize;
                _inf_value16->clone=(void*)sUIntNode_clone;
                _inf_value16->compile=(void*)sUIntNode_compile;
                _inf_value16->sline=(void*)sNodeBase_sline;
                _inf_value16->sname=(void*)sNodeBase_sname;
                _inf_value16->terminated=(void*)sUIntNode_terminated;
                _inf_value16->kind=(void*)sUIntNode_kind;
                __result125__ = __result_obj__ = ((struct sNode*)(right_value197=_inf_value16));
                come_call_finalizer3(right_value193,sUIntNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value194,sUIntNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value197) { right_value197 = come_decrement_ref_count2(right_value197, ((struct sNode*)right_value197)->finalize, ((struct sNode*)right_value197)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result125__;
            }
            else {
                _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 497, "struct sNode");
                _inf_obj_value17=come_increment_ref_count(((struct sUIntNode*)(right_value199=sUIntNode_initialize((struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(right_value198=(struct sUIntNode*)come_calloc(1, sizeof(struct sUIntNode)*(1), "05number.c", 497, "sUIntNode")))),value_96,info))));
                _inf_value17->_protocol_obj=_inf_obj_value17;
                _inf_value17->finalize=(void*)sUIntNode_finalize;
                _inf_value17->clone=(void*)sUIntNode_clone;
                _inf_value17->compile=(void*)sUIntNode_compile;
                _inf_value17->sline=(void*)sNodeBase_sline;
                _inf_value17->sname=(void*)sNodeBase_sname;
                _inf_value17->terminated=(void*)sUIntNode_terminated;
                _inf_value17->kind=(void*)sUIntNode_kind;
                __result128__ = __result_obj__ = ((struct sNode*)(right_value202=_inf_value17));
                come_call_finalizer3(right_value198,sUIntNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value199,sUIntNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value202) { right_value202 = come_decrement_ref_count2(right_value202, ((struct sNode*)right_value202)->finalize, ((struct sNode*)right_value202)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result128__;
            }
        }
    }
    else {
        if(_if_conditional164=*info->p==76||*info->p==108,        _if_conditional164) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional165=*info->p==76||*info->p==108,            _if_conditional165) {
                info->p++;
                skip_spaces_and_lf(info);
                value_99=strtoull(buf_88,((void*)0),0);
                if(minus) {
                    _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 512, "struct sNode");
                    _inf_obj_value18=come_increment_ref_count(((struct sLongNode*)(right_value204=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value203=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05number.c", 512, "sLongNode")))),-value_99,info))));
                    _inf_value18->_protocol_obj=_inf_obj_value18;
                    _inf_value18->finalize=(void*)sLongNode_finalize;
                    _inf_value18->clone=(void*)sLongNode_clone;
                    _inf_value18->compile=(void*)sLongNode_compile;
                    _inf_value18->sline=(void*)sNodeBase_sline;
                    _inf_value18->sname=(void*)sNodeBase_sname;
                    _inf_value18->terminated=(void*)sLongNode_terminated;
                    _inf_value18->kind=(void*)sLongNode_kind;
                    __result131__ = __result_obj__ = ((struct sNode*)(right_value207=_inf_value18));
                    come_call_finalizer3(right_value203,sLongNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value204,sLongNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value207) { right_value207 = come_decrement_ref_count2(right_value207, ((struct sNode*)right_value207)->finalize, ((struct sNode*)right_value207)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result131__;
                }
                else {
                    _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 515, "struct sNode");
                    _inf_obj_value19=come_increment_ref_count(((struct sLongNode*)(right_value209=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value208=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05number.c", 515, "sLongNode")))),value_99,info))));
                    _inf_value19->_protocol_obj=_inf_obj_value19;
                    _inf_value19->finalize=(void*)sLongNode_finalize;
                    _inf_value19->clone=(void*)sLongNode_clone;
                    _inf_value19->compile=(void*)sLongNode_compile;
                    _inf_value19->sline=(void*)sNodeBase_sline;
                    _inf_value19->sname=(void*)sNodeBase_sname;
                    _inf_value19->terminated=(void*)sLongNode_terminated;
                    _inf_value19->kind=(void*)sLongNode_kind;
                    __result134__ = __result_obj__ = ((struct sNode*)(right_value212=_inf_value19));
                    come_call_finalizer3(right_value208,sLongNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value209,sLongNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value212) { right_value212 = come_decrement_ref_count2(right_value212, ((struct sNode*)right_value212)->finalize, ((struct sNode*)right_value212)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result134__;
                }
            }
            else {
                if(_if_conditional177=*info->p==85||*info->p==117,                _if_conditional177) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    value_102=strtoull(buf_88,((void*)0),0);
                    if(minus) {
                        _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 525, "struct sNode");
                        _inf_obj_value20=come_increment_ref_count(((struct sULongNode*)(right_value214=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value213=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05number.c", 525, "sULongNode")))),-value_102,info))));
                        _inf_value20->_protocol_obj=_inf_obj_value20;
                        _inf_value20->finalize=(void*)sULongNode_finalize;
                        _inf_value20->clone=(void*)sULongNode_clone;
                        _inf_value20->compile=(void*)sULongNode_compile;
                        _inf_value20->sline=(void*)sNodeBase_sline;
                        _inf_value20->sname=(void*)sNodeBase_sname;
                        _inf_value20->terminated=(void*)sULongNode_terminated;
                        _inf_value20->kind=(void*)sULongNode_kind;
                        __result137__ = __result_obj__ = ((struct sNode*)(right_value217=_inf_value20));
                        come_call_finalizer3(right_value213,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value214,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value217) { right_value217 = come_decrement_ref_count2(right_value217, ((struct sNode*)right_value217)->finalize, ((struct sNode*)right_value217)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result137__;
                    }
                    else {
                        _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 528, "struct sNode");
                        _inf_obj_value21=come_increment_ref_count(((struct sULongNode*)(right_value219=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value218=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05number.c", 528, "sULongNode")))),value_102,info))));
                        _inf_value21->_protocol_obj=_inf_obj_value21;
                        _inf_value21->finalize=(void*)sULongNode_finalize;
                        _inf_value21->clone=(void*)sULongNode_clone;
                        _inf_value21->compile=(void*)sULongNode_compile;
                        _inf_value21->sline=(void*)sNodeBase_sline;
                        _inf_value21->sname=(void*)sNodeBase_sname;
                        _inf_value21->terminated=(void*)sULongNode_terminated;
                        _inf_value21->kind=(void*)sULongNode_kind;
                        __result140__ = __result_obj__ = ((struct sNode*)(right_value222=_inf_value21));
                        come_call_finalizer3(right_value218,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value219,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value222) { right_value222 = come_decrement_ref_count2(right_value222, ((struct sNode*)right_value222)->finalize, ((struct sNode*)right_value222)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result140__;
                    }
                }
                else {
                    value_105=strtoull(buf_88,((void*)0),0);
                    if(minus) {
                        _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 534, "struct sNode");
                        _inf_obj_value22=come_increment_ref_count(((struct sLongNode*)(right_value224=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value223=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05number.c", 534, "sLongNode")))),-value_105,info))));
                        _inf_value22->_protocol_obj=_inf_obj_value22;
                        _inf_value22->finalize=(void*)sLongNode_finalize;
                        _inf_value22->clone=(void*)sLongNode_clone;
                        _inf_value22->compile=(void*)sLongNode_compile;
                        _inf_value22->sline=(void*)sNodeBase_sline;
                        _inf_value22->sname=(void*)sNodeBase_sname;
                        _inf_value22->terminated=(void*)sLongNode_terminated;
                        _inf_value22->kind=(void*)sLongNode_kind;
                        __result143__ = __result_obj__ = ((struct sNode*)(right_value227=_inf_value22));
                        come_call_finalizer3(right_value223,sLongNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value224,sLongNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value227) { right_value227 = come_decrement_ref_count2(right_value227, ((struct sNode*)right_value227)->finalize, ((struct sNode*)right_value227)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result143__;
                    }
                    else {
                        _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 537, "struct sNode");
                        _inf_obj_value23=come_increment_ref_count(((struct sLongNode*)(right_value229=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value228=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05number.c", 537, "sLongNode")))),value_105,info))));
                        _inf_value23->_protocol_obj=_inf_obj_value23;
                        _inf_value23->finalize=(void*)sLongNode_finalize;
                        _inf_value23->clone=(void*)sLongNode_clone;
                        _inf_value23->compile=(void*)sLongNode_compile;
                        _inf_value23->sline=(void*)sNodeBase_sline;
                        _inf_value23->sname=(void*)sNodeBase_sname;
                        _inf_value23->terminated=(void*)sLongNode_terminated;
                        _inf_value23->kind=(void*)sLongNode_kind;
                        __result146__ = __result_obj__ = ((struct sNode*)(right_value232=_inf_value23));
                        come_call_finalizer3(right_value228,sLongNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value229,sLongNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value232) { right_value232 = come_decrement_ref_count2(right_value232, ((struct sNode*)right_value232)->finalize, ((struct sNode*)right_value232)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result146__;
                    }
                }
            }
        }
        else {
            value_108=strtoll(buf_88,((void*)0),0);
            if(minus) {
                _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 544, "struct sNode");
                _inf_obj_value24=come_increment_ref_count(((struct sIntNode*)(right_value234=sIntNode_initialize((struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value233=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "05number.c", 544, "sIntNode")))),-value_108,info))));
                _inf_value24->_protocol_obj=_inf_obj_value24;
                _inf_value24->finalize=(void*)sIntNode_finalize;
                _inf_value24->clone=(void*)sIntNode_clone;
                _inf_value24->compile=(void*)sIntNode_compile;
                _inf_value24->sline=(void*)sNodeBase_sline;
                _inf_value24->sname=(void*)sNodeBase_sname;
                _inf_value24->terminated=(void*)sIntNode_terminated;
                _inf_value24->kind=(void*)sIntNode_kind;
                __result149__ = __result_obj__ = ((struct sNode*)(right_value237=_inf_value24));
                come_call_finalizer3(right_value233,sIntNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value234,sIntNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value237) { right_value237 = come_decrement_ref_count2(right_value237, ((struct sNode*)right_value237)->finalize, ((struct sNode*)right_value237)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result149__;
            }
            else {
                _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 547, "struct sNode");
                _inf_obj_value25=come_increment_ref_count(((struct sIntNode*)(right_value239=sIntNode_initialize((struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value238=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "05number.c", 547, "sIntNode")))),value_108,info))));
                _inf_value25->_protocol_obj=_inf_obj_value25;
                _inf_value25->finalize=(void*)sIntNode_finalize;
                _inf_value25->clone=(void*)sIntNode_clone;
                _inf_value25->compile=(void*)sIntNode_compile;
                _inf_value25->sline=(void*)sNodeBase_sline;
                _inf_value25->sname=(void*)sNodeBase_sname;
                _inf_value25->terminated=(void*)sIntNode_terminated;
                _inf_value25->kind=(void*)sIntNode_kind;
                __result152__ = __result_obj__ = ((struct sNode*)(right_value242=_inf_value25));
                come_call_finalizer3(right_value238,sIntNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value239,sIntNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value242) { right_value242 = come_decrement_ref_count2(right_value242, ((struct sNode*)right_value242)->finalize, ((struct sNode*)right_value242)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result152__;
            }
        }
    }
    __result153__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result153__;
}

struct sNode* get_oct_number(struct sInfo* info){
void* __result_obj__;
int buf_size_111;
char* p_113;
_Bool _while_condtional14;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
unsigned long long int value_114;
void* right_value243;
void* right_value244;
struct sNode* _inf_value26;
struct sULongNode* _inf_obj_value26;
void* right_value247;
struct sNode* __result156__;
unsigned long long int value_116;
void* right_value248;
void* right_value249;
struct sNode* _inf_value27;
struct sULongNode* _inf_obj_value27;
void* right_value252;
struct sNode* __result159__;
unsigned int value_118;
void* right_value253;
void* right_value254;
struct sNode* _inf_value28;
struct sUIntNode* _inf_obj_value28;
void* right_value257;
struct sNode* __result162__;
_Bool _if_conditional231;
_Bool _if_conditional232;
unsigned long long int value_120;
void* right_value258;
void* right_value259;
struct sNode* _inf_value29;
struct sLongNode* _inf_obj_value29;
void* right_value262;
struct sNode* __result165__;
_Bool _if_conditional238;
unsigned long long int value_122;
void* right_value263;
void* right_value264;
struct sNode* _inf_value30;
struct sULongNode* _inf_obj_value30;
void* right_value267;
struct sNode* __result168__;
unsigned long long int value_124;
void* right_value268;
void* right_value269;
struct sNode* _inf_value31;
struct sLongNode* _inf_obj_value31;
void* right_value272;
struct sNode* __result171__;
unsigned long long int value_126;
void* right_value273;
void* right_value274;
struct sNode* _inf_value32;
struct sIntNode* _inf_obj_value32;
void* right_value277;
struct sNode* __result174__;
struct sNode* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&buf_size_111, 0, sizeof(int));
memset(&p_113, 0, sizeof(char*));
memset(&value_114, 0, sizeof(unsigned long long int));
right_value243 = (void*)0;
right_value244 = (void*)0;
right_value247 = (void*)0;
memset(&value_116, 0, sizeof(unsigned long long int));
right_value248 = (void*)0;
right_value249 = (void*)0;
right_value252 = (void*)0;
memset(&value_118, 0, sizeof(unsigned int));
right_value253 = (void*)0;
right_value254 = (void*)0;
right_value257 = (void*)0;
memset(&value_120, 0, sizeof(unsigned long long int));
right_value258 = (void*)0;
right_value259 = (void*)0;
right_value262 = (void*)0;
memset(&value_122, 0, sizeof(unsigned long long int));
right_value263 = (void*)0;
right_value264 = (void*)0;
right_value267 = (void*)0;
memset(&value_124, 0, sizeof(unsigned long long int));
right_value268 = (void*)0;
right_value269 = (void*)0;
right_value272 = (void*)0;
memset(&value_126, 0, sizeof(unsigned long long int));
right_value273 = (void*)0;
right_value274 = (void*)0;
right_value277 = (void*)0;
    buf_size_111=128;
    char buf_112[128+1];
    memset(&buf_112, 0, sizeof(char)    *(128+1)    );
    p_113=buf_112;
    *p_113++=48;
    while(_while_condtional14=(*info->p>=48&&*info->p<=55)||*info->p==95,    _while_condtional14) {
        if(_if_conditional211=*info->p==95,        _if_conditional211) {
            info->p++;
        }
        else {
            *p_113=*info->p;
            p_113++;
            info->p++;
        }
        if(_if_conditional212=p_113-buf_112>=buf_size_111-1,        _if_conditional212) {
            err_msg(info,"overflow node of number");
            exit(2);
        }
    }
    *p_113=0;
    skip_spaces_and_lf(info);
    if(_if_conditional213=*info->p==117||*info->p==85,    _if_conditional213) {
        info->p++;
        skip_spaces_and_lf(info);
        if(_if_conditional214=*info->p==76||*info->p==108,        _if_conditional214) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional215=*info->p==76||*info->p==108,            _if_conditional215) {
                info->p++;
                skip_spaces_and_lf(info);
                value_114=strtoull(buf_112,((void*)0),0);
                _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 598, "struct sNode");
                _inf_obj_value26=come_increment_ref_count(((struct sULongNode*)(right_value244=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value243=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05number.c", 598, "sULongNode")))),value_114,info))));
                _inf_value26->_protocol_obj=_inf_obj_value26;
                _inf_value26->finalize=(void*)sULongNode_finalize;
                _inf_value26->clone=(void*)sULongNode_clone;
                _inf_value26->compile=(void*)sULongNode_compile;
                _inf_value26->sline=(void*)sNodeBase_sline;
                _inf_value26->sname=(void*)sNodeBase_sname;
                _inf_value26->terminated=(void*)sULongNode_terminated;
                _inf_value26->kind=(void*)sULongNode_kind;
                __result156__ = __result_obj__ = ((struct sNode*)(right_value247=_inf_value26));
                come_call_finalizer3(right_value243,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value244,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value247) { right_value247 = come_decrement_ref_count2(right_value247, ((struct sNode*)right_value247)->finalize, ((struct sNode*)right_value247)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result156__;
            }
            else {
                value_116=strtoull(buf_112,((void*)0),0);
                _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 602, "struct sNode");
                _inf_obj_value27=come_increment_ref_count(((struct sULongNode*)(right_value249=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value248=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05number.c", 602, "sULongNode")))),value_116,info))));
                _inf_value27->_protocol_obj=_inf_obj_value27;
                _inf_value27->finalize=(void*)sULongNode_finalize;
                _inf_value27->clone=(void*)sULongNode_clone;
                _inf_value27->compile=(void*)sULongNode_compile;
                _inf_value27->sline=(void*)sNodeBase_sline;
                _inf_value27->sname=(void*)sNodeBase_sname;
                _inf_value27->terminated=(void*)sULongNode_terminated;
                _inf_value27->kind=(void*)sULongNode_kind;
                __result159__ = __result_obj__ = ((struct sNode*)(right_value252=_inf_value27));
                come_call_finalizer3(right_value248,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value249,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value252) { right_value252 = come_decrement_ref_count2(right_value252, ((struct sNode*)right_value252)->finalize, ((struct sNode*)right_value252)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result159__;
            }
        }
        else {
            value_118=strtoul(buf_112,((void*)0),0);
            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 607, "struct sNode");
            _inf_obj_value28=come_increment_ref_count(((struct sUIntNode*)(right_value254=sUIntNode_initialize((struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(right_value253=(struct sUIntNode*)come_calloc(1, sizeof(struct sUIntNode)*(1), "05number.c", 607, "sUIntNode")))),value_118,info))));
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sUIntNode_finalize;
            _inf_value28->clone=(void*)sUIntNode_clone;
            _inf_value28->compile=(void*)sUIntNode_compile;
            _inf_value28->sline=(void*)sNodeBase_sline;
            _inf_value28->sname=(void*)sNodeBase_sname;
            _inf_value28->terminated=(void*)sUIntNode_terminated;
            _inf_value28->kind=(void*)sUIntNode_kind;
            __result162__ = __result_obj__ = ((struct sNode*)(right_value257=_inf_value28));
            come_call_finalizer3(right_value253,sUIntNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value254,sUIntNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value257) { right_value257 = come_decrement_ref_count2(right_value257, ((struct sNode*)right_value257)->finalize, ((struct sNode*)right_value257)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result162__;
        }
    }
    else {
        if(_if_conditional231=*info->p==76||*info->p==108,        _if_conditional231) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional232=*info->p==76||*info->p==108,            _if_conditional232) {
                info->p++;
                skip_spaces_and_lf(info);
                value_120=strtoull(buf_112,((void*)0),0);
                _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 620, "struct sNode");
                _inf_obj_value29=come_increment_ref_count(((struct sLongNode*)(right_value259=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value258=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05number.c", 620, "sLongNode")))),value_120,info))));
                _inf_value29->_protocol_obj=_inf_obj_value29;
                _inf_value29->finalize=(void*)sLongNode_finalize;
                _inf_value29->clone=(void*)sLongNode_clone;
                _inf_value29->compile=(void*)sLongNode_compile;
                _inf_value29->sline=(void*)sNodeBase_sline;
                _inf_value29->sname=(void*)sNodeBase_sname;
                _inf_value29->terminated=(void*)sLongNode_terminated;
                _inf_value29->kind=(void*)sLongNode_kind;
                __result165__ = __result_obj__ = ((struct sNode*)(right_value262=_inf_value29));
                come_call_finalizer3(right_value258,sLongNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value259,sLongNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value262) { right_value262 = come_decrement_ref_count2(right_value262, ((struct sNode*)right_value262)->finalize, ((struct sNode*)right_value262)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result165__;
            }
            else {
                if(_if_conditional238=*info->p==85||*info->p==117,                _if_conditional238) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    value_122=strtoull(buf_112,((void*)0),0);
                    _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 628, "struct sNode");
                    _inf_obj_value30=come_increment_ref_count(((struct sULongNode*)(right_value264=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value263=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05number.c", 628, "sULongNode")))),value_122,info))));
                    _inf_value30->_protocol_obj=_inf_obj_value30;
                    _inf_value30->finalize=(void*)sULongNode_finalize;
                    _inf_value30->clone=(void*)sULongNode_clone;
                    _inf_value30->compile=(void*)sULongNode_compile;
                    _inf_value30->sline=(void*)sNodeBase_sline;
                    _inf_value30->sname=(void*)sNodeBase_sname;
                    _inf_value30->terminated=(void*)sULongNode_terminated;
                    _inf_value30->kind=(void*)sULongNode_kind;
                    __result168__ = __result_obj__ = ((struct sNode*)(right_value267=_inf_value30));
                    come_call_finalizer3(right_value263,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value264,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value267) { right_value267 = come_decrement_ref_count2(right_value267, ((struct sNode*)right_value267)->finalize, ((struct sNode*)right_value267)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result168__;
                }
                else {
                    value_124=strtoull(buf_112,((void*)0),0);
                    _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 632, "struct sNode");
                    _inf_obj_value31=come_increment_ref_count(((struct sLongNode*)(right_value269=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value268=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05number.c", 632, "sLongNode")))),value_124,info))));
                    _inf_value31->_protocol_obj=_inf_obj_value31;
                    _inf_value31->finalize=(void*)sLongNode_finalize;
                    _inf_value31->clone=(void*)sLongNode_clone;
                    _inf_value31->compile=(void*)sLongNode_compile;
                    _inf_value31->sline=(void*)sNodeBase_sline;
                    _inf_value31->sname=(void*)sNodeBase_sname;
                    _inf_value31->terminated=(void*)sLongNode_terminated;
                    _inf_value31->kind=(void*)sLongNode_kind;
                    __result171__ = __result_obj__ = ((struct sNode*)(right_value272=_inf_value31));
                    come_call_finalizer3(right_value268,sLongNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value269,sLongNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value272) { right_value272 = come_decrement_ref_count2(right_value272, ((struct sNode*)right_value272)->finalize, ((struct sNode*)right_value272)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result171__;
                }
            }
        }
        else {
            value_126=strtoull(buf_112,((void*)0),0);
            _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 637, "struct sNode");
            _inf_obj_value32=come_increment_ref_count(((struct sIntNode*)(right_value274=sIntNode_initialize((struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value273=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "05number.c", 637, "sIntNode")))),value_126,info))));
            _inf_value32->_protocol_obj=_inf_obj_value32;
            _inf_value32->finalize=(void*)sIntNode_finalize;
            _inf_value32->clone=(void*)sIntNode_clone;
            _inf_value32->compile=(void*)sIntNode_compile;
            _inf_value32->sline=(void*)sNodeBase_sline;
            _inf_value32->sname=(void*)sNodeBase_sname;
            _inf_value32->terminated=(void*)sIntNode_terminated;
            _inf_value32->kind=(void*)sIntNode_kind;
            __result174__ = __result_obj__ = ((struct sNode*)(right_value277=_inf_value32));
            come_call_finalizer3(right_value273,sIntNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value274,sIntNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value277) { right_value277 = come_decrement_ref_count2(right_value277, ((struct sNode*)right_value277)->finalize, ((struct sNode*)right_value277)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result174__;
        }
    }
    __result175__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result175__;
}

static void sUIntNode_finalize(struct sUIntNode* self){
void* __result_obj__;
_Bool _if_conditional226;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional226=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional226) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sUIntNode* sUIntNode_clone(struct sUIntNode* self){
void* __result_obj__;
_Bool _if_conditional227;
struct sUIntNode* __result160__;
void* right_value255;
struct sUIntNode* result_119;
_Bool _if_conditional228;
_Bool _if_conditional229;
void* right_value256;
char* __dec_obj60;
_Bool _if_conditional230;
struct sUIntNode* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
right_value255 = (void*)0;
memset(&result_119, 0, sizeof(struct sUIntNode*));
right_value256 = (void*)0;
                if(_if_conditional227=self==(void*)0,                _if_conditional227) {
                    __result160__ = __result_obj__ = (void*)0;
                    return __result160__;
                }
                result_119=(struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(right_value255=(struct sUIntNode*)come_calloc(1, sizeof(struct sUIntNode)*(1), "sUIntNode_clone", 3, "sUIntNode"))));
                come_call_finalizer3(right_value255,sUIntNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional228=self!=((void*)0),                _if_conditional228) {
                    result_119->sline=self->sline;
                }
                if(_if_conditional229=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional229) {
                    __dec_obj60=result_119->sname;
                    result_119->sname=(char*)come_increment_ref_count(((char*)(right_value256=string_clone(self->sname))));
                    __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional230=self!=((void*)0),                _if_conditional230) {
                    result_119->value=self->value;
                }
                __result161__ = __result_obj__ = result_119;
                come_call_finalizer3(result_119,sUIntNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result161__;
                come_call_finalizer3(result_119,sUIntNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sULongNode_finalize(struct sULongNode* self){
void* __result_obj__;
_Bool _if_conditional239;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional239=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional239) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sULongNode* sULongNode_clone(struct sULongNode* self){
void* __result_obj__;
_Bool _if_conditional240;
struct sULongNode* __result166__;
void* right_value265;
struct sULongNode* result_123;
_Bool _if_conditional241;
_Bool _if_conditional242;
void* right_value266;
char* __dec_obj62;
_Bool _if_conditional243;
struct sULongNode* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
right_value265 = (void*)0;
memset(&result_123, 0, sizeof(struct sULongNode*));
right_value266 = (void*)0;
                        if(_if_conditional240=self==(void*)0,                        _if_conditional240) {
                            __result166__ = __result_obj__ = (void*)0;
                            return __result166__;
                        }
                        result_123=(struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value265=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "sULongNode_clone", 3, "sULongNode"))));
                        come_call_finalizer3(right_value265,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional241=self!=((void*)0),                        _if_conditional241) {
                            result_123->sline=self->sline;
                        }
                        if(_if_conditional242=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional242) {
                            __dec_obj62=result_123->sname;
                            result_123->sname=(char*)come_increment_ref_count(((char*)(right_value266=string_clone(self->sname))));
                            __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional243=self!=((void*)0),                        _if_conditional243) {
                            result_123->value=self->value;
                        }
                        __result167__ = __result_obj__ = result_123;
                        come_call_finalizer3(result_123,sULongNode_finalize, 0, 0, 1, 0, (void*)0);
                        return __result167__;
                        come_call_finalizer3(result_123,sULongNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sLongNode_finalize(struct sLongNode* self){
void* __result_obj__;
_Bool _if_conditional244;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional244=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional244) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sLongNode* sLongNode_clone(struct sLongNode* self){
void* __result_obj__;
_Bool _if_conditional245;
struct sLongNode* __result169__;
void* right_value270;
struct sLongNode* result_125;
_Bool _if_conditional246;
_Bool _if_conditional247;
void* right_value271;
char* __dec_obj63;
_Bool _if_conditional248;
struct sLongNode* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
right_value270 = (void*)0;
memset(&result_125, 0, sizeof(struct sLongNode*));
right_value271 = (void*)0;
                        if(_if_conditional245=self==(void*)0,                        _if_conditional245) {
                            __result169__ = __result_obj__ = (void*)0;
                            return __result169__;
                        }
                        result_125=(struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value270=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "sLongNode_clone", 3, "sLongNode"))));
                        come_call_finalizer3(right_value270,sLongNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional246=self!=((void*)0),                        _if_conditional246) {
                            result_125->sline=self->sline;
                        }
                        if(_if_conditional247=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional247) {
                            __dec_obj63=result_125->sname;
                            result_125->sname=(char*)come_increment_ref_count(((char*)(right_value271=string_clone(self->sname))));
                            __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional248=self!=((void*)0),                        _if_conditional248) {
                            result_125->value=self->value;
                        }
                        __result170__ = __result_obj__ = result_125;
                        come_call_finalizer3(result_125,sLongNode_finalize, 0, 0, 1, 0, (void*)0);
                        return __result170__;
                        come_call_finalizer3(result_125,sLongNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sIntNode_finalize(struct sIntNode* self){
void* __result_obj__;
_Bool _if_conditional249;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional249=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional249) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sIntNode* sIntNode_clone(struct sIntNode* self){
void* __result_obj__;
_Bool _if_conditional250;
struct sIntNode* __result172__;
void* right_value275;
struct sIntNode* result_127;
_Bool _if_conditional251;
_Bool _if_conditional252;
void* right_value276;
char* __dec_obj64;
_Bool _if_conditional253;
struct sIntNode* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
right_value275 = (void*)0;
memset(&result_127, 0, sizeof(struct sIntNode*));
right_value276 = (void*)0;
                if(_if_conditional250=self==(void*)0,                _if_conditional250) {
                    __result172__ = __result_obj__ = (void*)0;
                    return __result172__;
                }
                result_127=(struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value275=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "sIntNode_clone", 3, "sIntNode"))));
                come_call_finalizer3(right_value275,sIntNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional251=self!=((void*)0),                _if_conditional251) {
                    result_127->sline=self->sline;
                }
                if(_if_conditional252=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional252) {
                    __dec_obj64=result_127->sname;
                    result_127->sname=(char*)come_increment_ref_count(((char*)(right_value276=string_clone(self->sname))));
                    __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional253=self!=((void*)0),                _if_conditional253) {
                    result_127->value=self->value;
                }
                __result173__ = __result_obj__ = result_127;
                come_call_finalizer3(result_127,sIntNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result173__;
                come_call_finalizer3(result_127,sIntNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* expression_node_v99(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional254;
void* right_value278;
struct sNode* node_128;
void* right_value279;
struct sNode* __dec_obj65;
struct sNode* __result176__;
_Bool _if_conditional255;
void* right_value280;
struct sNode* node_129;
void* right_value281;
struct sNode* __dec_obj66;
struct sNode* __result177__;
_Bool _if_conditional256;
void* right_value282;
struct sNode* node_130;
void* right_value283;
struct sNode* __dec_obj67;
struct sNode* __result178__;
_Bool _if_conditional257;
void* right_value284;
struct sNode* node_131;
void* right_value285;
struct sNode* __dec_obj68;
struct sNode* __result179__;
void* right_value286;
struct sNode* node_132;
void* right_value287;
struct sNode* __dec_obj69;
struct sNode* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
right_value278 = (void*)0;
memset(&node_128, 0, sizeof(struct sNode*));
right_value279 = (void*)0;
right_value280 = (void*)0;
memset(&node_129, 0, sizeof(struct sNode*));
right_value281 = (void*)0;
right_value282 = (void*)0;
memset(&node_130, 0, sizeof(struct sNode*));
right_value283 = (void*)0;
right_value284 = (void*)0;
memset(&node_131, 0, sizeof(struct sNode*));
right_value285 = (void*)0;
right_value286 = (void*)0;
memset(&node_132, 0, sizeof(struct sNode*));
right_value287 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(_if_conditional254=*info->p==48&&(*(info->p+1)==120||*(info->p+1)==88),    _if_conditional254) {
        info->p+=2;
        node_128=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value278=get_hex_number((_Bool)0,info))));
        if(right_value278) { right_value278 = come_decrement_ref_count2(right_value278, ((struct sNode*)right_value278)->finalize, ((struct sNode*)right_value278)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        __dec_obj65=node_128;
        node_128=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value279=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_128),info))));
        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); }
        if(right_value279) { right_value279 = come_decrement_ref_count2(right_value279, ((struct sNode*)right_value279)->finalize, ((struct sNode*)right_value279)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        __result176__ = __result_obj__ = node_128;
        if(node_128) { node_128 = come_decrement_ref_count2(node_128, ((struct sNode*)node_128)->finalize, ((struct sNode*)node_128)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result176__;
        if(node_128) { node_128 = come_decrement_ref_count2(node_128, ((struct sNode*)node_128)->finalize, ((struct sNode*)node_128)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else {
        if(_if_conditional255=*info->p==48&&xisdigit(*(info->p+1)),        _if_conditional255) {
            info->p++;
            node_129=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value280=get_oct_number(info))));
            if(right_value280) { right_value280 = come_decrement_ref_count2(right_value280, ((struct sNode*)right_value280)->finalize, ((struct sNode*)right_value280)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            __dec_obj66=node_129;
            node_129=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value281=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_129),info))));
            if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value281) { right_value281 = come_decrement_ref_count2(right_value281, ((struct sNode*)right_value281)->finalize, ((struct sNode*)right_value281)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            __result177__ = __result_obj__ = node_129;
            if(node_129) { node_129 = come_decrement_ref_count2(node_129, ((struct sNode*)node_129)->finalize, ((struct sNode*)node_129)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result177__;
            if(node_129) { node_129 = come_decrement_ref_count2(node_129, ((struct sNode*)node_129)->finalize, ((struct sNode*)node_129)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional256=xisdigit(*info->p),            _if_conditional256) {
                node_130=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value282=get_number((_Bool)0,info))));
                if(right_value282) { right_value282 = come_decrement_ref_count2(right_value282, ((struct sNode*)right_value282)->finalize, ((struct sNode*)right_value282)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                __dec_obj67=node_130;
                node_130=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value283=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_130),info))));
                if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count2(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value283) { right_value283 = come_decrement_ref_count2(right_value283, ((struct sNode*)right_value283)->finalize, ((struct sNode*)right_value283)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                __result178__ = __result_obj__ = node_130;
                if(node_130) { node_130 = come_decrement_ref_count2(node_130, ((struct sNode*)node_130)->finalize, ((struct sNode*)node_130)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result178__;
                if(node_130) { node_130 = come_decrement_ref_count2(node_130, ((struct sNode*)node_130)->finalize, ((struct sNode*)node_130)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(_if_conditional257=*info->p==45&&xisdigit(*(info->p+1)),                _if_conditional257) {
                    info->p++;
                    node_131=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value284=get_number((_Bool)1,info))));
                    if(right_value284) { right_value284 = come_decrement_ref_count2(right_value284, ((struct sNode*)right_value284)->finalize, ((struct sNode*)right_value284)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    __dec_obj68=node_131;
                    node_131=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value285=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_131),info))));
                    if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value285) { right_value285 = come_decrement_ref_count2(right_value285, ((struct sNode*)right_value285)->finalize, ((struct sNode*)right_value285)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    __result179__ = __result_obj__ = node_131;
                    if(node_131) { node_131 = come_decrement_ref_count2(node_131, ((struct sNode*)node_131)->finalize, ((struct sNode*)node_131)->_protocol_obj, 0, 1, 0, (void*)0); } 
                    return __result179__;
                    if(node_131) { node_131 = come_decrement_ref_count2(node_131, ((struct sNode*)node_131)->finalize, ((struct sNode*)node_131)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    node_132=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value286=expression_node_v98(info))));
                    if(right_value286) { right_value286 = come_decrement_ref_count2(right_value286, ((struct sNode*)right_value286)->finalize, ((struct sNode*)right_value286)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    __dec_obj69=node_132;
                    node_132=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value287=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_132),info))));
                    if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value287) { right_value287 = come_decrement_ref_count2(right_value287, ((struct sNode*)right_value287)->finalize, ((struct sNode*)right_value287)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    __result180__ = __result_obj__ = node_132;
                    if(node_132) { node_132 = come_decrement_ref_count2(node_132, ((struct sNode*)node_132)->finalize, ((struct sNode*)node_132)->_protocol_obj, 0, 1, 0, (void*)0); } 
                    return __result180__;
                    if(node_132) { node_132 = come_decrement_ref_count2(node_132, ((struct sNode*)node_132)->finalize, ((struct sNode*)node_132)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
            }
        }
    }
}

