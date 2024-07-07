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
struct sUnionNode
{
    int sline;
    char* sname;
    struct sType* mType;
    _Bool mOutput;
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

struct sUnionNode* sUnionNode_initialize(struct sUnionNode* self, struct sType* type, _Bool output, struct sInfo* info);

_Bool sUnionNode_terminated(struct sUnionNode* self);

char* sUnionNode_kind(struct sUnionNode* self);

_Bool sUnionNode_compile(struct sUnionNode* self, struct sInfo* info);

static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item);
static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self);
static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self);
static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
struct sNode* parse_union(char* type_name, struct sInfo* info);

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static void sClass_finalize(struct sClass* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* sClass_clone(struct sClass* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_reset(struct list$1tuple2$2charphsTypephph* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
struct sNode* top_level_v97(char* buf, char* head, int head_sline, struct sInfo* info);

static void sUnionNode_finalize(struct sUnionNode* self);
static struct sUnionNode* sUnionNode_clone(struct sUnionNode* self);
struct sNode* string_node_v15(char* buf, char* head, int head_sline, struct sInfo* info);

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










struct sUnionNode* sUnionNode_initialize(struct sUnionNode* self, struct sType* type, _Bool output, struct sInfo* info){
void* __result_obj__;
void* right_value79;
char* __dec_obj12;
void* right_value115;
struct sType* __dec_obj36;
void* right_value122;
void* right_value123;
struct sUnionNode* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value115 = (void*)0;
right_value122 = (void*)0;
right_value123 = (void*)0;
    # 11 "15union.c"
    self->sline=info->sline;
    # 12 "15union.c"
    __dec_obj12=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value79=__builtin_string(info->sname))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 14 "15union.c"
    __dec_obj36=self->mType;
    self->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value115=sType_clone(type))));
    come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value115,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 16 "15union.c"
    map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(((char*)(right_value122=__builtin_string(type->mClass->mName)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value123=sType_clone(type)))));
    right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value123,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 18 "15union.c"
    self->mOutput=output;
    # 21 "15union.c"
    __result94__ = __result_obj__ = self;
    come_call_finalizer3(self,sUnionNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result94__;
    come_call_finalizer3(self,sUnionNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sUnionNode_terminated(struct sUnionNode* self){
void* __result_obj__;
_Bool __result95__;
memset(&__result_obj__, 0, sizeof(void*));
    # 23 "15union.c"
    __result95__ = (_Bool)1;
    return __result95__;
}

char* sUnionNode_kind(struct sUnionNode* self){
void* __result_obj__;
void* right_value124;
char* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value124 = (void*)0;
    # 28 "15union.c"
    __result96__ = __result_obj__ = ((char*)(right_value124=__builtin_string("sUnionNode")));
    right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result96__;
}

_Bool sUnionNode_compile(struct sUnionNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_121;
struct sClass* klass_122;
_Bool _if_conditional159;
_Bool _if_conditional161;
void* right_value125;
void* right_value126;
struct buffer* buf_123;
void* right_value127;
struct list$1tuple2$2charphsTypephph* o2_saved_124;
struct tuple2$2charphsTypeph* it_127;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* name_130;
struct sType* type_131;
void* right_value128;
void* right_value129;
_Bool _if_conditional169;
_Bool _if_conditional170;
void* right_value130;
_Bool __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_121, 0, sizeof(struct sType*));
memset(&klass_122, 0, sizeof(struct sClass*));
right_value125 = (void*)0;
right_value126 = (void*)0;
memset(&buf_123, 0, sizeof(struct buffer*));
right_value127 = (void*)0;
memset(&o2_saved_124, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_127, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_130, 0, sizeof(char*));
memset(&type_131, 0, sizeof(struct sType*));
memset(&name_130, 0, sizeof(char*));
memset(&type_131, 0, sizeof(struct sType*));
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
    # 33 "15union.c"
    type_121=self->mType;
    # 34 "15union.c"
    klass_122=type_121->mClass;
    # 63 "15union.c"
    # 36 "15union.c"
    if(_if_conditional159=!klass_122->mOutputed,    _if_conditional159) {
        # 37 "15union.c"
        klass_122->mOutputed=(_Bool)1;
        # 61 "15union.c"
        # 39 "15union.c"
        if(_if_conditional161=list$1tuple2$2charphsTypephph_length(klass_122->mFields)>0,        _if_conditional161) {
            # 40 "15union.c"
            buf_123=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value126=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value125=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "15union.c", 40, "buffer"))))))));
            come_call_finalizer3(right_value125,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value126,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            # 42 "15union.c"
            buffer_append_str(buf_123,((char*)(right_value127=xsprintf("union %s\n{\n",type_121->mClass->mName))));
            right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 51 "15union.c"
            for(            o2_saved_124=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_122->mFields)),it_127=list$1tuple2$2charphsTypephph_begin((o2_saved_124));            !list$1tuple2$2charphsTypephph_end((o2_saved_124));            it_127=list$1tuple2$2charphsTypephph_next((o2_saved_124))            ){
                # 45 "15union.c"
                multiple_assign_var1=it_127;
                name_130=(char*)come_increment_ref_count(multiple_assign_var1->v1);
                type_131=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
                # 47 "15union.c"
                buffer_append_str(buf_123,((char*)(right_value128=make_define_var(type_131,name_130,(_Bool)0,info))));
                right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 48 "15union.c"
                buffer_append_str(buf_123,";\n");
                name_130 = come_decrement_ref_count2(name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_131,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_124,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            # 51 "15union.c"
            buffer_append_str(buf_123,((char*)(right_value129=xsprintf("};\n"))));
            right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 60 "15union.c"
            # 53 "15union.c"
            if(_if_conditional169=info->output_header_file&&string_operator_not_equals(klass_122->mDeclareSName,info->base_sname),            _if_conditional169) {
            }
            else {
                # 59 "15union.c"
                # 56 "15union.c"
                if(self->mOutput) {
                    # 57 "15union.c"
                    add_come_code_at_source_head(info,"%s",((char*)(right_value130=buffer_to_string(buf_123))));
                    right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            come_call_finalizer3(buf_123,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    # 63 "15union.c"
    __result106__ = (_Bool)1;
    return __result106__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional19;
struct sType* __result52__;
void* right_value80;
struct sType* result_47;
_Bool _if_conditional37;
_Bool _if_conditional38;
void* right_value87;
struct list$1sTypeph* __dec_obj16;
_Bool _if_conditional42;
void* right_value90;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional46;
void* right_value91;
struct tuple1$1sTypeph* __dec_obj19;
_Bool _if_conditional47;
void* right_value92;
char* __dec_obj20;
_Bool _if_conditional48;
void* right_value93;
struct list$1sTypeph* __dec_obj21;
_Bool _if_conditional49;
void* right_value101;
struct list$1sNodeph* __dec_obj25;
_Bool _if_conditional62;
_Bool _if_conditional63;
void* right_value102;
struct list$1sTypeph* __dec_obj26;
_Bool _if_conditional64;
void* right_value109;
struct list$1charph* __dec_obj30;
_Bool _if_conditional68;
void* right_value110;
struct tuple1$1sTypeph* __dec_obj31;
_Bool _if_conditional69;
_Bool _if_conditional70;
void* right_value111;
struct sNode* __dec_obj32;
_Bool _if_conditional71;
_Bool _if_conditional72;
_Bool _if_conditional73;
_Bool _if_conditional74;
_Bool _if_conditional75;
_Bool _if_conditional76;
_Bool _if_conditional77;
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool _if_conditional95;
void* right_value112;
struct sNode* __dec_obj33;
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
void* right_value113;
char* __dec_obj34;
_Bool _if_conditional99;
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
void* right_value114;
char* __dec_obj35;
_Bool _if_conditional109;
struct sType* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
memset(&result_47, 0, sizeof(struct sType*));
right_value87 = (void*)0;
right_value90 = (void*)0;
right_value91 = (void*)0;
right_value92 = (void*)0;
right_value93 = (void*)0;
right_value101 = (void*)0;
right_value102 = (void*)0;
right_value109 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
        # 3 "sType_clone"
        # 2 "sType_clone"
        if(_if_conditional19=self==(void*)0,        _if_conditional19) {
            # 2 "sType_clone"
            __result52__ = __result_obj__ = (void*)0;
            return __result52__;
        }
        # 3 "sType_clone"
        result_47=(struct sType*)come_increment_ref_count(((struct sType*)(right_value80=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer3(right_value80,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 5 "sType_clone"
        # 4 "sType_clone"
        if(_if_conditional37=self!=((void*)0),        _if_conditional37) {
            # 4 "sType_clone"
            result_47->mClass=self->mClass;
        }
        # 6 "sType_clone"
        # 5 "sType_clone"
        if(_if_conditional38=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional38) {
            # 5 "sType_clone"
            __dec_obj16=result_47->mMultipleTypes;
            result_47->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value87=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer3(__dec_obj16,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value87,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 7 "sType_clone"
        # 6 "sType_clone"
        if(_if_conditional42=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional42) {
            # 6 "sType_clone"
            __dec_obj18=result_47->mNoSolvedGenericsType;
            result_47->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value90=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer3(__dec_obj18,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value90,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 8 "sType_clone"
        # 7 "sType_clone"
        if(_if_conditional46=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional46) {
            # 7 "sType_clone"
            __dec_obj19=result_47->mOriginalLoadVarType;
            result_47->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value91=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer3(__dec_obj19,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value91,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 9 "sType_clone"
        # 8 "sType_clone"
        if(_if_conditional47=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional47) {
            # 8 "sType_clone"
            __dec_obj20=result_47->mGenericsName;
            result_47->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value92=string_clone(self->mGenericsName))));
            __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 10 "sType_clone"
        # 9 "sType_clone"
        if(_if_conditional48=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional48) {
            # 9 "sType_clone"
            __dec_obj21=result_47->mGenericsTypes;
            result_47->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value93=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer3(__dec_obj21,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value93,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 11 "sType_clone"
        # 10 "sType_clone"
        if(_if_conditional49=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional49) {
            # 10 "sType_clone"
            __dec_obj25=result_47->mArrayNum;
            result_47->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value101=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer3(__dec_obj25,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value101,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 12 "sType_clone"
        # 11 "sType_clone"
        if(_if_conditional62=self!=((void*)0),        _if_conditional62) {
            # 11 "sType_clone"
            result_47->mOmitArrayNum=self->mOmitArrayNum;
        }
        # 13 "sType_clone"
        # 12 "sType_clone"
        if(_if_conditional63=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional63) {
            # 12 "sType_clone"
            __dec_obj26=result_47->mParamTypes;
            result_47->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value102=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer3(__dec_obj26,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value102,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 14 "sType_clone"
        # 13 "sType_clone"
        if(_if_conditional64=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional64) {
            # 13 "sType_clone"
            __dec_obj30=result_47->mParamNames;
            result_47->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value109=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer3(__dec_obj30,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value109,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 15 "sType_clone"
        # 14 "sType_clone"
        if(_if_conditional68=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional68) {
            # 14 "sType_clone"
            __dec_obj31=result_47->mResultType;
            result_47->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value110=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer3(__dec_obj31,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value110,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 16 "sType_clone"
        # 15 "sType_clone"
        if(_if_conditional69=self!=((void*)0),        _if_conditional69) {
            # 15 "sType_clone"
            result_47->mVarArgs=self->mVarArgs;
        }
        # 17 "sType_clone"
        # 16 "sType_clone"
        if(_if_conditional70=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional70) {
            # 16 "sType_clone"
            __dec_obj32=result_47->mAlignas;
            result_47->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value111=sNode_clone(self->mAlignas))));
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value111) { right_value111 = come_decrement_ref_count2(right_value111, ((struct sNode*)right_value111)->finalize, ((struct sNode*)right_value111)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        # 18 "sType_clone"
        # 17 "sType_clone"
        if(_if_conditional71=self!=((void*)0),        _if_conditional71) {
            # 17 "sType_clone"
            result_47->mUnsigned=self->mUnsigned;
        }
        # 19 "sType_clone"
        # 18 "sType_clone"
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            # 18 "sType_clone"
            result_47->mShort=self->mShort;
        }
        # 20 "sType_clone"
        # 19 "sType_clone"
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            # 19 "sType_clone"
            result_47->mLong=self->mLong;
        }
        # 21 "sType_clone"
        # 20 "sType_clone"
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            # 20 "sType_clone"
            result_47->mLongLong=self->mLongLong;
        }
        # 22 "sType_clone"
        # 21 "sType_clone"
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            # 21 "sType_clone"
            result_47->mConstant=self->mConstant;
        }
        # 23 "sType_clone"
        # 22 "sType_clone"
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            # 22 "sType_clone"
            result_47->mRegister=self->mRegister;
        }
        # 24 "sType_clone"
        # 23 "sType_clone"
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            # 23 "sType_clone"
            result_47->mVolatile=self->mVolatile;
        }
        # 25 "sType_clone"
        # 24 "sType_clone"
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            # 24 "sType_clone"
            result_47->mStatic=self->mStatic;
        }
        # 26 "sType_clone"
        # 25 "sType_clone"
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            # 25 "sType_clone"
            result_47->mRecord=self->mRecord;
        }
        # 27 "sType_clone"
        # 26 "sType_clone"
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            # 26 "sType_clone"
            result_47->mExtern=self->mExtern;
        }
        # 28 "sType_clone"
        # 27 "sType_clone"
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            # 27 "sType_clone"
            result_47->mRestrict=self->mRestrict;
        }
        # 29 "sType_clone"
        # 28 "sType_clone"
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            # 28 "sType_clone"
            result_47->mImmutable=self->mImmutable;
        }
        # 30 "sType_clone"
        # 29 "sType_clone"
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            # 29 "sType_clone"
            result_47->mHeap=self->mHeap;
        }
        # 31 "sType_clone"
        # 30 "sType_clone"
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            # 30 "sType_clone"
            result_47->mDummyHeap=self->mDummyHeap;
        }
        # 32 "sType_clone"
        # 31 "sType_clone"
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            # 31 "sType_clone"
            result_47->mDelegate=self->mDelegate;
        }
        # 33 "sType_clone"
        # 32 "sType_clone"
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            # 32 "sType_clone"
            result_47->mShare=self->mShare;
        }
        # 34 "sType_clone"
        # 33 "sType_clone"
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            # 33 "sType_clone"
            result_47->mClone=self->mClone;
        }
        # 35 "sType_clone"
        # 34 "sType_clone"
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            # 34 "sType_clone"
            result_47->mNoHeap=self->mNoHeap;
        }
        # 36 "sType_clone"
        # 35 "sType_clone"
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            # 35 "sType_clone"
            result_47->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        # 37 "sType_clone"
        # 36 "sType_clone"
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            # 36 "sType_clone"
            result_47->mRefference=self->mRefference;
        }
        # 38 "sType_clone"
        # 37 "sType_clone"
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            # 37 "sType_clone"
            result_47->mException=self->mException;
        }
        # 39 "sType_clone"
        # 38 "sType_clone"
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            # 38 "sType_clone"
            result_47->mPointerNum=self->mPointerNum;
        }
        # 40 "sType_clone"
        # 39 "sType_clone"
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            # 39 "sType_clone"
            result_47->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        # 41 "sType_clone"
        # 40 "sType_clone"
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            # 40 "sType_clone"
            result_47->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        # 42 "sType_clone"
        # 41 "sType_clone"
        if(_if_conditional95=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional95) {
            # 41 "sType_clone"
            __dec_obj33=result_47->mSizeNum;
            result_47->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value112=sNode_clone(self->mSizeNum))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value112) { right_value112 = come_decrement_ref_count2(right_value112, ((struct sNode*)right_value112)->finalize, ((struct sNode*)right_value112)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        # 43 "sType_clone"
        # 42 "sType_clone"
        if(_if_conditional96=self!=((void*)0),        _if_conditional96) {
            # 42 "sType_clone"
            result_47->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        # 44 "sType_clone"
        # 43 "sType_clone"
        if(_if_conditional97=self!=((void*)0),        _if_conditional97) {
            # 43 "sType_clone"
            result_47->mTypeOfExpression=self->mTypeOfExpression;
        }
        # 45 "sType_clone"
        # 44 "sType_clone"
        if(_if_conditional98=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional98) {
            # 44 "sType_clone"
            __dec_obj34=result_47->mOriginalTypeName;
            result_47->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value113=string_clone(self->mOriginalTypeName))));
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 46 "sType_clone"
        # 45 "sType_clone"
        if(_if_conditional99=self!=((void*)0),        _if_conditional99) {
            # 45 "sType_clone"
            result_47->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        # 47 "sType_clone"
        # 46 "sType_clone"
        if(_if_conditional100=self!=((void*)0),        _if_conditional100) {
            # 46 "sType_clone"
            result_47->mFunctionParam=self->mFunctionParam;
        }
        # 48 "sType_clone"
        # 47 "sType_clone"
        if(_if_conditional101=self!=((void*)0),        _if_conditional101) {
            # 47 "sType_clone"
            result_47->mAllocaValue=self->mAllocaValue;
        }
        # 49 "sType_clone"
        # 48 "sType_clone"
        if(_if_conditional102=self!=((void*)0),        _if_conditional102) {
            # 48 "sType_clone"
            result_47->mGenericsStruct=self->mGenericsStruct;
        }
        # 50 "sType_clone"
        # 49 "sType_clone"
        if(_if_conditional103=self!=((void*)0),        _if_conditional103) {
            # 49 "sType_clone"
            result_47->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        # 51 "sType_clone"
        # 50 "sType_clone"
        if(_if_conditional104=self!=((void*)0),        _if_conditional104) {
            # 50 "sType_clone"
            result_47->mComeMemCore=self->mComeMemCore;
        }
        # 52 "sType_clone"
        # 51 "sType_clone"
        if(_if_conditional105=self!=((void*)0),        _if_conditional105) {
            # 51 "sType_clone"
            result_47->mInline=self->mInline;
        }
        # 53 "sType_clone"
        # 52 "sType_clone"
        if(_if_conditional106=self!=((void*)0),        _if_conditional106) {
            # 52 "sType_clone"
            result_47->mNullValue=self->mNullValue;
        }
        # 54 "sType_clone"
        # 53 "sType_clone"
        if(_if_conditional107=self!=((void*)0),        _if_conditional107) {
            # 53 "sType_clone"
            result_47->mGuardValue=self->mGuardValue;
        }
        # 55 "sType_clone"
        # 54 "sType_clone"
        if(_if_conditional108=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional108) {
            # 54 "sType_clone"
            __dec_obj35=result_47->mAsmName;
            result_47->mAsmName=(char*)come_increment_ref_count(((char*)(right_value114=string_clone(self->mAsmName))));
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 56 "sType_clone"
        # 55 "sType_clone"
        if(_if_conditional109=self!=((void*)0),        _if_conditional109) {
            # 55 "sType_clone"
            result_47->mArrayPointerType=self->mArrayPointerType;
        }
        # 56 "sType_clone"
        __result69__ = __result_obj__ = result_47;
        come_call_finalizer3(result_47,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result69__;
        come_call_finalizer3(result_47,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional20;
_Bool _if_conditional22;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional29;
_Bool _if_conditional30;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sType_finalize"
            # 0 "sType_finalize"
            if(_if_conditional20=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional20) {
                # 0 "sType_finalize"
                come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 2 "sType_finalize"
            # 1 "sType_finalize"
            if(_if_conditional22=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional22) {
                # 1 "sType_finalize"
                come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 3 "sType_finalize"
            # 2 "sType_finalize"
            if(_if_conditional24=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional24) {
                # 2 "sType_finalize"
                come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 4 "sType_finalize"
            # 3 "sType_finalize"
            if(_if_conditional25=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional25) {
                # 3 "sType_finalize"
                self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 5 "sType_finalize"
            # 4 "sType_finalize"
            if(_if_conditional26=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional26) {
                # 4 "sType_finalize"
                come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 6 "sType_finalize"
            # 5 "sType_finalize"
            if(_if_conditional27=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional27) {
                # 5 "sType_finalize"
                come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 7 "sType_finalize"
            # 6 "sType_finalize"
            if(_if_conditional29=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional29) {
                # 6 "sType_finalize"
                come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 8 "sType_finalize"
            # 7 "sType_finalize"
            if(_if_conditional30=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional30) {
                # 7 "sType_finalize"
                come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 9 "sType_finalize"
            # 8 "sType_finalize"
            if(_if_conditional32=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional32) {
                # 8 "sType_finalize"
                come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 10 "sType_finalize"
            # 9 "sType_finalize"
            if(_if_conditional33=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional33) {
                # 9 "sType_finalize"
                if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 11 "sType_finalize"
            # 10 "sType_finalize"
            if(_if_conditional34=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional34) {
                # 10 "sType_finalize"
                if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 12 "sType_finalize"
            # 11 "sType_finalize"
            if(_if_conditional35=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional35) {
                # 11 "sType_finalize"
                self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 13 "sType_finalize"
            # 12 "sType_finalize"
            if(_if_conditional36=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional36) {
                # 12 "sType_finalize"
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
                    # 114 "/usr/local/include/neo-c.h"
                    it_48=self->head;
                    # 120 "/usr/local/include/neo-c.h"
                    while(_while_condtional7=it_48!=((void*)0),                    _while_condtional7) {
                        # 116 "/usr/local/include/neo-c.h"
                        prev_it_49=it_48;
                        # 117 "/usr/local/include/neo-c.h"
                        it_48=it_48->next;
                        # 118 "/usr/local/include/neo-c.h"
                        come_call_finalizer3(prev_it_49,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1sTypephp_finalize"
                            # 0 "list_item$1sTypephp_finalize"
                            if(_if_conditional21=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional21) {
                                # 0 "list_item$1sTypephp_finalize"
                                come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional23;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple1$1sTypephp_finalize"
                    # 0 "tuple1$1sTypephp_finalize"
                    if(_if_conditional23=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional23) {
                        # 0 "tuple1$1sTypephp_finalize"
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
                    # 114 "/usr/local/include/neo-c.h"
                    it_50=self->head;
                    # 120 "/usr/local/include/neo-c.h"
                    while(_while_condtional8=it_50!=((void*)0),                    _while_condtional8) {
                        # 116 "/usr/local/include/neo-c.h"
                        prev_it_51=it_50;
                        # 117 "/usr/local/include/neo-c.h"
                        it_50=it_50->next;
                        # 118 "/usr/local/include/neo-c.h"
                        come_call_finalizer3(prev_it_51,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional28;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1sNodephp_finalize"
                            # 0 "list_item$1sNodephp_finalize"
                            if(_if_conditional28=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional28) {
                                # 0 "list_item$1sNodephp_finalize"
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
                    # 114 "/usr/local/include/neo-c.h"
                    it_52=self->head;
                    # 120 "/usr/local/include/neo-c.h"
                    while(_while_condtional9=it_52!=((void*)0),                    _while_condtional9) {
                        # 116 "/usr/local/include/neo-c.h"
                        prev_it_53=it_52;
                        # 117 "/usr/local/include/neo-c.h"
                        it_52=it_52->next;
                        # 118 "/usr/local/include/neo-c.h"
                        come_call_finalizer3(prev_it_53,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional31;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1charphp_finalize"
                            # 0 "list_item$1charphp_finalize"
                            if(_if_conditional31=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional31) {
                                # 0 "list_item$1charphp_finalize"
                                self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional39;
struct list$1sTypeph* __result53__;
void* right_value81;
void* right_value82;
struct list$1sTypeph* result_54;
struct list_item$1sTypeph* it_55;
_Bool _while_condtional10;
void* right_value86;
struct list$1sTypeph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
right_value82 = (void*)0;
memset(&result_54, 0, sizeof(struct list$1sTypeph*));
memset(&it_55, 0, sizeof(struct list_item$1sTypeph*));
right_value86 = (void*)0;
                # 133 "/usr/local/include/neo-c.h"
                # 130 "/usr/local/include/neo-c.h"
                if(_if_conditional39=self==((void*)0),                _if_conditional39) {
                    # 131 "/usr/local/include/neo-c.h"
                    __result53__ = __result_obj__ = ((void*)0);
                    return __result53__;
                }
                # 133 "/usr/local/include/neo-c.h"
                result_54=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value82=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value81=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/neo-c.h", 133, "list$1sTypeph"))))))));
                come_call_finalizer3(right_value81,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value82,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                # 135 "/usr/local/include/neo-c.h"
                it_55=self->head;
                # 142 "/usr/local/include/neo-c.h"
                while(_while_condtional10=it_55!=((void*)0),                _while_condtional10) {
                    # 137 "/usr/local/include/neo-c.h"
                    list$1sTypeph_add(result_54,(struct sType*)come_increment_ref_count(((struct sType*)(right_value86=sType_clone(it_55->item)))));
                    come_call_finalizer3(right_value86,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 139 "/usr/local/include/neo-c.h"
                    it_55=it_55->next;
                }
                # 142 "/usr/local/include/neo-c.h"
                __result56__ = __result_obj__ = result_54;
                come_call_finalizer3(result_54,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result56__;
                come_call_finalizer3(result_54,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 95 "/usr/local/include/neo-c.h"
                    self->head=((void*)0);
                    # 96 "/usr/local/include/neo-c.h"
                    self->tail=((void*)0);
                    # 97 "/usr/local/include/neo-c.h"
                    self->len=0;
                    # 99 "/usr/local/include/neo-c.h"
                    __result54__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result54__;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional40;
void* right_value83;
struct list_item$1sTypeph* litem_56;
struct sType* __dec_obj13;
_Bool _if_conditional41;
void* right_value84;
struct list_item$1sTypeph* litem_57;
struct sType* __dec_obj14;
void* right_value85;
struct list_item$1sTypeph* litem_58;
struct sType* __dec_obj15;
struct list$1sTypeph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value83 = (void*)0;
memset(&litem_56, 0, sizeof(struct list_item$1sTypeph*));
right_value84 = (void*)0;
memset(&litem_57, 0, sizeof(struct list_item$1sTypeph*));
right_value85 = (void*)0;
memset(&litem_58, 0, sizeof(struct list_item$1sTypeph*));
                        # 177 "/usr/local/include/neo-c.h"
                        # 146 "/usr/local/include/neo-c.h"
                        if(_if_conditional40=self->len==0,                        _if_conditional40) {
                            # 147 "/usr/local/include/neo-c.h"
                            litem_56=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value83=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/neo-c.h", 147, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value83,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 149 "/usr/local/include/neo-c.h"
                            litem_56->prev=((void*)0);
                            # 150 "/usr/local/include/neo-c.h"
                            litem_56->next=((void*)0);
                            # 151 "/usr/local/include/neo-c.h"
                            __dec_obj13=litem_56->item;
                            litem_56->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj13,sType_finalize, 0, 0, 0, 0, (void*)0);
                            # 153 "/usr/local/include/neo-c.h"
                            self->tail=litem_56;
                            # 154 "/usr/local/include/neo-c.h"
                            self->head=litem_56;
                        }
                        else {
                            # 177 "/usr/local/include/neo-c.h"
                            # 156 "/usr/local/include/neo-c.h"
                            if(_if_conditional41=self->len==1,                            _if_conditional41) {
                                # 157 "/usr/local/include/neo-c.h"
                                litem_57=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value84=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/neo-c.h", 157, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value84,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 159 "/usr/local/include/neo-c.h"
                                litem_57->prev=self->head;
                                # 160 "/usr/local/include/neo-c.h"
                                litem_57->next=((void*)0);
                                # 161 "/usr/local/include/neo-c.h"
                                __dec_obj14=litem_57->item;
                                litem_57->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
                                # 163 "/usr/local/include/neo-c.h"
                                self->tail=litem_57;
                                # 164 "/usr/local/include/neo-c.h"
                                self->head->next=litem_57;
                            }
                            else {
                                # 167 "/usr/local/include/neo-c.h"
                                litem_58=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value85=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/neo-c.h", 167, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value85,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 169 "/usr/local/include/neo-c.h"
                                litem_58->prev=self->tail;
                                # 170 "/usr/local/include/neo-c.h"
                                litem_58->next=((void*)0);
                                # 171 "/usr/local/include/neo-c.h"
                                __dec_obj15=litem_58->item;
                                litem_58->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj15,sType_finalize, 0, 0, 0, 0, (void*)0);
                                # 173 "/usr/local/include/neo-c.h"
                                self->tail->next=litem_58;
                                # 174 "/usr/local/include/neo-c.h"
                                self->tail=litem_58;
                            }
                        }
                        # 177 "/usr/local/include/neo-c.h"
                        self->len++;
                        # 179 "/usr/local/include/neo-c.h"
                        __result55__ = __result_obj__ = self;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result55__;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_59;
_Bool _while_condtional11;
struct list_item$1sTypeph* prev_it_60;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_59, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_60, 0, sizeof(struct list_item$1sTypeph*));
                # 114 "/usr/local/include/neo-c.h"
                it_59=self->head;
                # 120 "/usr/local/include/neo-c.h"
                while(_while_condtional11=it_59!=((void*)0),                _while_condtional11) {
                    # 116 "/usr/local/include/neo-c.h"
                    prev_it_60=it_59;
                    # 117 "/usr/local/include/neo-c.h"
                    it_59=it_59->next;
                    # 118 "/usr/local/include/neo-c.h"
                    come_call_finalizer3(prev_it_60,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional43;
struct tuple1$1sTypeph* __result57__;
void* right_value88;
struct tuple1$1sTypeph* result_61;
_Bool _if_conditional45;
void* right_value89;
struct sType* __dec_obj17;
struct tuple1$1sTypeph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
memset(&result_61, 0, sizeof(struct tuple1$1sTypeph*));
right_value89 = (void*)0;
                # 3 "tuple1$1sTypephp_clone"
                # 2 "tuple1$1sTypephp_clone"
                if(_if_conditional43=self==(void*)0,                _if_conditional43) {
                    # 2 "tuple1$1sTypephp_clone"
                    __result57__ = __result_obj__ = (void*)0;
                    return __result57__;
                }
                # 3 "tuple1$1sTypephp_clone"
                result_61=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value88=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer3(right_value88,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                # 5 "tuple1$1sTypephp_clone"
                # 4 "tuple1$1sTypephp_clone"
                if(_if_conditional45=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional45) {
                    # 4 "tuple1$1sTypephp_clone"
                    __dec_obj17=result_61->v1;
                    result_61->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value89=sType_clone(self->v1))));
                    come_call_finalizer3(__dec_obj17,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value89,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                # 5 "tuple1$1sTypephp_clone"
                __result58__ = __result_obj__ = result_61;
                come_call_finalizer3(result_61,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result58__;
                come_call_finalizer3(result_61,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional44;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple1$1sTypeph_finalize"
                    # 0 "tuple1$1sTypeph_finalize"
                    if(_if_conditional44=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional44) {
                        # 0 "tuple1$1sTypeph_finalize"
                        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional50;
struct list$1sNodeph* __result59__;
void* right_value94;
void* right_value95;
struct list$1sNodeph* result_62;
struct list_item$1sNodeph* it_63;
_Bool _while_condtional12;
void* right_value100;
struct list$1sNodeph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
right_value95 = (void*)0;
memset(&result_62, 0, sizeof(struct list$1sNodeph*));
memset(&it_63, 0, sizeof(struct list_item$1sNodeph*));
right_value100 = (void*)0;
                # 133 "/usr/local/include/neo-c.h"
                # 130 "/usr/local/include/neo-c.h"
                if(_if_conditional50=self==((void*)0),                _if_conditional50) {
                    # 131 "/usr/local/include/neo-c.h"
                    __result59__ = __result_obj__ = ((void*)0);
                    return __result59__;
                }
                # 133 "/usr/local/include/neo-c.h"
                result_62=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value95=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value94=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/neo-c.h", 133, "list$1sNodeph"))))))));
                come_call_finalizer3(right_value94,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value95,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                # 135 "/usr/local/include/neo-c.h"
                it_63=self->head;
                # 142 "/usr/local/include/neo-c.h"
                while(_while_condtional12=it_63!=((void*)0),                _while_condtional12) {
                    # 137 "/usr/local/include/neo-c.h"
                    list$1sNodeph_add(result_62,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value100=sNode_clone(it_63->item)))));
                    if(right_value100) { right_value100 = come_decrement_ref_count2(right_value100, ((struct sNode*)right_value100)->finalize, ((struct sNode*)right_value100)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 139 "/usr/local/include/neo-c.h"
                    it_63=it_63->next;
                }
                # 142 "/usr/local/include/neo-c.h"
                __result64__ = __result_obj__ = result_62;
                come_call_finalizer3(result_62,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result64__;
                come_call_finalizer3(result_62,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 95 "/usr/local/include/neo-c.h"
                    self->head=((void*)0);
                    # 96 "/usr/local/include/neo-c.h"
                    self->tail=((void*)0);
                    # 97 "/usr/local/include/neo-c.h"
                    self->len=0;
                    # 99 "/usr/local/include/neo-c.h"
                    __result60__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result60__;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional51;
void* right_value96;
struct list_item$1sNodeph* litem_64;
struct sNode* __dec_obj22;
_Bool _if_conditional52;
void* right_value97;
struct list_item$1sNodeph* litem_65;
struct sNode* __dec_obj23;
void* right_value98;
struct list_item$1sNodeph* litem_66;
struct sNode* __dec_obj24;
struct list$1sNodeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value96 = (void*)0;
memset(&litem_64, 0, sizeof(struct list_item$1sNodeph*));
right_value97 = (void*)0;
memset(&litem_65, 0, sizeof(struct list_item$1sNodeph*));
right_value98 = (void*)0;
memset(&litem_66, 0, sizeof(struct list_item$1sNodeph*));
                        # 177 "/usr/local/include/neo-c.h"
                        # 146 "/usr/local/include/neo-c.h"
                        if(_if_conditional51=self->len==0,                        _if_conditional51) {
                            # 147 "/usr/local/include/neo-c.h"
                            litem_64=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value96=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/neo-c.h", 147, "list_item$1sNodeph"))));
                            come_call_finalizer3(right_value96,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 149 "/usr/local/include/neo-c.h"
                            litem_64->prev=((void*)0);
                            # 150 "/usr/local/include/neo-c.h"
                            litem_64->next=((void*)0);
                            # 151 "/usr/local/include/neo-c.h"
                            __dec_obj22=litem_64->item;
                            litem_64->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                            # 153 "/usr/local/include/neo-c.h"
                            self->tail=litem_64;
                            # 154 "/usr/local/include/neo-c.h"
                            self->head=litem_64;
                        }
                        else {
                            # 177 "/usr/local/include/neo-c.h"
                            # 156 "/usr/local/include/neo-c.h"
                            if(_if_conditional52=self->len==1,                            _if_conditional52) {
                                # 157 "/usr/local/include/neo-c.h"
                                litem_65=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value97=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/neo-c.h", 157, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value97,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 159 "/usr/local/include/neo-c.h"
                                litem_65->prev=self->head;
                                # 160 "/usr/local/include/neo-c.h"
                                litem_65->next=((void*)0);
                                # 161 "/usr/local/include/neo-c.h"
                                __dec_obj23=litem_65->item;
                                litem_65->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                # 163 "/usr/local/include/neo-c.h"
                                self->tail=litem_65;
                                # 164 "/usr/local/include/neo-c.h"
                                self->head->next=litem_65;
                            }
                            else {
                                # 167 "/usr/local/include/neo-c.h"
                                litem_66=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value98=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/neo-c.h", 167, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value98,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 169 "/usr/local/include/neo-c.h"
                                litem_66->prev=self->tail;
                                # 170 "/usr/local/include/neo-c.h"
                                litem_66->next=((void*)0);
                                # 171 "/usr/local/include/neo-c.h"
                                __dec_obj24=litem_66->item;
                                litem_66->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
                                # 173 "/usr/local/include/neo-c.h"
                                self->tail->next=litem_66;
                                # 174 "/usr/local/include/neo-c.h"
                                self->tail=litem_66;
                            }
                        }
                        # 177 "/usr/local/include/neo-c.h"
                        self->len++;
                        # 179 "/usr/local/include/neo-c.h"
                        __result61__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result61__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional53;
struct sNode* __result62__;
void* right_value99;
struct sNode* result_67;
_Bool _if_conditional54;
_Bool _if_conditional55;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
struct sNode* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value99 = (void*)0;
memset(&result_67, 0, sizeof(struct sNode*));
                        # 3 "sNode_clone"
                        # 2 "sNode_clone"
                        if(_if_conditional53=self==(void*)0,                        _if_conditional53) {
                            # 2 "sNode_clone"
                            __result62__ = __result_obj__ = (void*)0;
                            return __result62__;
                        }
                        # 3 "sNode_clone"
                        result_67=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value99=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value99) { right_value99 = come_decrement_ref_count2(right_value99, ((struct sNode*)right_value99)->finalize, ((struct sNode*)right_value99)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 5 "sNode_clone"
                        # 4 "sNode_clone"
                        if(_if_conditional54=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional54) {
                            # 4 "sNode_clone"
                            result_67->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        # 6 "sNode_clone"
                        # 5 "sNode_clone"
                        if(_if_conditional55=self!=((void*)0),                        _if_conditional55) {
                            # 5 "sNode_clone"
                            result_67->finalize=self->finalize;
                        }
                        # 7 "sNode_clone"
                        # 6 "sNode_clone"
                        if(_if_conditional56=self!=((void*)0),                        _if_conditional56) {
                            # 6 "sNode_clone"
                            result_67->clone=self->clone;
                        }
                        # 8 "sNode_clone"
                        # 7 "sNode_clone"
                        if(_if_conditional57=self!=((void*)0),                        _if_conditional57) {
                            # 7 "sNode_clone"
                            result_67->compile=self->compile;
                        }
                        # 9 "sNode_clone"
                        # 8 "sNode_clone"
                        if(_if_conditional58=self!=((void*)0),                        _if_conditional58) {
                            # 8 "sNode_clone"
                            result_67->sline=self->sline;
                        }
                        # 10 "sNode_clone"
                        # 9 "sNode_clone"
                        if(_if_conditional59=self!=((void*)0),                        _if_conditional59) {
                            # 9 "sNode_clone"
                            result_67->sname=self->sname;
                        }
                        # 11 "sNode_clone"
                        # 10 "sNode_clone"
                        if(_if_conditional60=self!=((void*)0),                        _if_conditional60) {
                            # 10 "sNode_clone"
                            result_67->terminated=self->terminated;
                        }
                        # 12 "sNode_clone"
                        # 11 "sNode_clone"
                        if(_if_conditional61=self!=((void*)0),                        _if_conditional61) {
                            # 11 "sNode_clone"
                            result_67->kind=self->kind;
                        }
                        # 12 "sNode_clone"
                        __result63__ = __result_obj__ = result_67;
                        if(result_67) { result_67 = come_decrement_ref_count2(result_67, ((struct sNode*)result_67)->finalize, ((struct sNode*)result_67)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result63__;
                        if(result_67) { result_67 = come_decrement_ref_count2(result_67, ((struct sNode*)result_67)->finalize, ((struct sNode*)result_67)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_68;
_Bool _while_condtional13;
struct list_item$1sNodeph* prev_it_69;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_68, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_69, 0, sizeof(struct list_item$1sNodeph*));
                # 114 "/usr/local/include/neo-c.h"
                it_68=self->head;
                # 120 "/usr/local/include/neo-c.h"
                while(_while_condtional13=it_68!=((void*)0),                _while_condtional13) {
                    # 116 "/usr/local/include/neo-c.h"
                    prev_it_69=it_68;
                    # 117 "/usr/local/include/neo-c.h"
                    it_68=it_68->next;
                    # 118 "/usr/local/include/neo-c.h"
                    come_call_finalizer3(prev_it_69,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional65;
struct list$1charph* __result65__;
void* right_value103;
void* right_value104;
struct list$1charph* result_70;
struct list_item$1charph* it_71;
_Bool _while_condtional14;
void* right_value108;
struct list$1charph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value103 = (void*)0;
right_value104 = (void*)0;
memset(&result_70, 0, sizeof(struct list$1charph*));
memset(&it_71, 0, sizeof(struct list_item$1charph*));
right_value108 = (void*)0;
                # 133 "/usr/local/include/neo-c.h"
                # 130 "/usr/local/include/neo-c.h"
                if(_if_conditional65=self==((void*)0),                _if_conditional65) {
                    # 131 "/usr/local/include/neo-c.h"
                    __result65__ = __result_obj__ = ((void*)0);
                    return __result65__;
                }
                # 133 "/usr/local/include/neo-c.h"
                result_70=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value104=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value103=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/neo-c.h", 133, "list$1charph"))))))));
                come_call_finalizer3(right_value103,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value104,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 135 "/usr/local/include/neo-c.h"
                it_71=self->head;
                # 142 "/usr/local/include/neo-c.h"
                while(_while_condtional14=it_71!=((void*)0),                _while_condtional14) {
                    # 137 "/usr/local/include/neo-c.h"
                    list$1charph_add(result_70,(char*)come_increment_ref_count(((char*)(right_value108=string_clone(it_71->item)))));
                    right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 139 "/usr/local/include/neo-c.h"
                    it_71=it_71->next;
                }
                # 142 "/usr/local/include/neo-c.h"
                __result68__ = __result_obj__ = result_70;
                come_call_finalizer3(result_70,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result68__;
                come_call_finalizer3(result_70,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 95 "/usr/local/include/neo-c.h"
                    self->head=((void*)0);
                    # 96 "/usr/local/include/neo-c.h"
                    self->tail=((void*)0);
                    # 97 "/usr/local/include/neo-c.h"
                    self->len=0;
                    # 99 "/usr/local/include/neo-c.h"
                    __result66__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result66__;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional66;
void* right_value105;
struct list_item$1charph* litem_72;
char* __dec_obj27;
_Bool _if_conditional67;
void* right_value106;
struct list_item$1charph* litem_73;
char* __dec_obj28;
void* right_value107;
struct list_item$1charph* litem_74;
char* __dec_obj29;
struct list$1charph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value105 = (void*)0;
memset(&litem_72, 0, sizeof(struct list_item$1charph*));
right_value106 = (void*)0;
memset(&litem_73, 0, sizeof(struct list_item$1charph*));
right_value107 = (void*)0;
memset(&litem_74, 0, sizeof(struct list_item$1charph*));
                        # 177 "/usr/local/include/neo-c.h"
                        # 146 "/usr/local/include/neo-c.h"
                        if(_if_conditional66=self->len==0,                        _if_conditional66) {
                            # 147 "/usr/local/include/neo-c.h"
                            litem_72=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value105=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/neo-c.h", 147, "list_item$1charph"))));
                            come_call_finalizer3(right_value105,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 149 "/usr/local/include/neo-c.h"
                            litem_72->prev=((void*)0);
                            # 150 "/usr/local/include/neo-c.h"
                            litem_72->next=((void*)0);
                            # 151 "/usr/local/include/neo-c.h"
                            __dec_obj27=litem_72->item;
                            litem_72->item=(char*)come_increment_ref_count(item);
                            __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                            # 153 "/usr/local/include/neo-c.h"
                            self->tail=litem_72;
                            # 154 "/usr/local/include/neo-c.h"
                            self->head=litem_72;
                        }
                        else {
                            # 177 "/usr/local/include/neo-c.h"
                            # 156 "/usr/local/include/neo-c.h"
                            if(_if_conditional67=self->len==1,                            _if_conditional67) {
                                # 157 "/usr/local/include/neo-c.h"
                                litem_73=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value106=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/neo-c.h", 157, "list_item$1charph"))));
                                come_call_finalizer3(right_value106,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 159 "/usr/local/include/neo-c.h"
                                litem_73->prev=self->head;
                                # 160 "/usr/local/include/neo-c.h"
                                litem_73->next=((void*)0);
                                # 161 "/usr/local/include/neo-c.h"
                                __dec_obj28=litem_73->item;
                                litem_73->item=(char*)come_increment_ref_count(item);
                                __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 163 "/usr/local/include/neo-c.h"
                                self->tail=litem_73;
                                # 164 "/usr/local/include/neo-c.h"
                                self->head->next=litem_73;
                            }
                            else {
                                # 167 "/usr/local/include/neo-c.h"
                                litem_74=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value107=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/neo-c.h", 167, "list_item$1charph"))));
                                come_call_finalizer3(right_value107,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 169 "/usr/local/include/neo-c.h"
                                litem_74->prev=self->tail;
                                # 170 "/usr/local/include/neo-c.h"
                                litem_74->next=((void*)0);
                                # 171 "/usr/local/include/neo-c.h"
                                __dec_obj29=litem_74->item;
                                litem_74->item=(char*)come_increment_ref_count(item);
                                __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 173 "/usr/local/include/neo-c.h"
                                self->tail->next=litem_74;
                                # 174 "/usr/local/include/neo-c.h"
                                self->tail=litem_74;
                            }
                        }
                        # 177 "/usr/local/include/neo-c.h"
                        self->len++;
                        # 179 "/usr/local/include/neo-c.h"
                        __result67__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result67__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_75;
_Bool _while_condtional15;
struct list_item$1charph* prev_it_76;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_75, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_76, 0, sizeof(struct list_item$1charph*));
                # 114 "/usr/local/include/neo-c.h"
                it_75=self->head;
                # 120 "/usr/local/include/neo-c.h"
                while(_while_condtional15=it_75!=((void*)0),                _while_condtional15) {
                    # 116 "/usr/local/include/neo-c.h"
                    prev_it_76=it_75;
                    # 117 "/usr/local/include/neo-c.h"
                    it_75=it_75->next;
                    # 118 "/usr/local/include/neo-c.h"
                    come_call_finalizer3(prev_it_76,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__;
_Bool _if_conditional110;
unsigned int hash_94;
unsigned int it_95;
_Bool _while_condtional18;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool same_key_exist_112;
char* it2_115;
_Bool _if_conditional153;
_Bool _if_conditional154;
struct map$2charphsTypeph* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_94, 0, sizeof(unsigned int));
memset(&it_95, 0, sizeof(unsigned int));
memset(&same_key_exist_112, 0, sizeof(_Bool));
memset(&it2_115, 0, sizeof(char*));
        # 1368 "/usr/local/include/neo-c.h"
        # 1365 "/usr/local/include/neo-c.h"
        if(_if_conditional110=self->len*10>=self->size,        _if_conditional110) {
            # 1366 "/usr/local/include/neo-c.h"
            map$2charphsTypeph_rehash(self);
        }
        # 1368 "/usr/local/include/neo-c.h"
        hash_94=string_get_hash_key(key)%self->size;
        # 1369 "/usr/local/include/neo-c.h"
        it_95=hash_94;
        # 1427 "/usr/local/include/neo-c.h"
        while(_while_condtional18=(_Bool)1,        _while_condtional18) {
            # 1425 "/usr/local/include/neo-c.h"
            # 1372 "/usr/local/include/neo-c.h"
            if(_if_conditional122=self->item_existance[it_95],            _if_conditional122) {
                # 1395 "/usr/local/include/neo-c.h"
                # 1374 "/usr/local/include/neo-c.h"
                if(_if_conditional123=string_equals(self->keys[it_95],key),                _if_conditional123) {
                    # 1385 "/usr/local/include/neo-c.h"
                    # 1376 "/usr/local/include/neo-c.h"
                    if(_if_conditional124=1,                    _if_conditional124) {
                        # 1377 "/usr/local/include/neo-c.h"
                        list$1charp_remove(self->key_list,self->keys[it_95]);
                        # 1378 "/usr/local/include/neo-c.h"
                        self->keys[it_95] = come_decrement_ref_count2(self->keys[it_95], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        # 1379 "/usr/local/include/neo-c.h"
                        self->keys[it_95]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1382 "/usr/local/include/neo-c.h"
                        list$1charp_remove(self->key_list,self->keys[it_95]);
                        # 1383 "/usr/local/include/neo-c.h"
                        self->keys[it_95]=key;
                    }
                    # 1392 "/usr/local/include/neo-c.h"
                    # 1385 "/usr/local/include/neo-c.h"
                    if(_if_conditional144=1,                    _if_conditional144) {
                        # 1386 "/usr/local/include/neo-c.h"
                        come_call_finalizer3(self->items[it_95],sType_finalize, 0, 0, 0, 0, (void*)0);
                        # 1387 "/usr/local/include/neo-c.h"
                        self->items[it_95]=(struct sType*)come_increment_ref_count(item);
                    }
                    else {
                        # 1390 "/usr/local/include/neo-c.h"
                        self->items[it_95]=item;
                    }
                    # 1392 "/usr/local/include/neo-c.h"
                    break;
                }
                # 1395 "/usr/local/include/neo-c.h"
                it_95++;
                # 1405 "/usr/local/include/neo-c.h"
                # 1397 "/usr/local/include/neo-c.h"
                if(_if_conditional145=it_95>=self->size,                _if_conditional145) {
                    # 1398 "/usr/local/include/neo-c.h"
                    it_95=0;
                }
                else {
                    # 1405 "/usr/local/include/neo-c.h"
                    # 1400 "/usr/local/include/neo-c.h"
                    if(_if_conditional146=it_95==hash_94,                    _if_conditional146) {
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
                self->item_existance[it_95]=(_Bool)1;
                # 1414 "/usr/local/include/neo-c.h"
                # 1408 "/usr/local/include/neo-c.h"
                if(_if_conditional147=1,                _if_conditional147) {
                    # 1409 "/usr/local/include/neo-c.h"
                    self->keys[it_95]=(char*)come_increment_ref_count(key);
                }
                else {
                    # 1412 "/usr/local/include/neo-c.h"
                    self->keys[it_95]=key;
                }
                # 1421 "/usr/local/include/neo-c.h"
                # 1414 "/usr/local/include/neo-c.h"
                if(_if_conditional148=1,                _if_conditional148) {
                    # 1415 "/usr/local/include/neo-c.h"
                    self->items[it_95]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    # 1418 "/usr/local/include/neo-c.h"
                    self->items[it_95]=item;
                }
                # 1421 "/usr/local/include/neo-c.h"
                self->len++;
                # 1423 "/usr/local/include/neo-c.h"
                break;
            }
        }
        # 1427 "/usr/local/include/neo-c.h"
        same_key_exist_112=(_Bool)0;
        # 1435 "/usr/local/include/neo-c.h"
        for(        it2_115=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_115=list$1charp_next(self->key_list)        ){
            # 1433 "/usr/local/include/neo-c.h"
            # 1430 "/usr/local/include/neo-c.h"
            if(_if_conditional153=string_equals(it2_115,key),            _if_conditional153) {
                # 1431 "/usr/local/include/neo-c.h"
                same_key_exist_112=(_Bool)1;
            }
        }
        # 1439 "/usr/local/include/neo-c.h"
        # 1435 "/usr/local/include/neo-c.h"
        if(_if_conditional154=!same_key_exist_112,        _if_conditional154) {
            # 1436 "/usr/local/include/neo-c.h"
            list$1charp_push_back(self->key_list,key);
        }
        # 1439 "/usr/local/include/neo-c.h"
        __result93__ = __result_obj__ = self;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result93__;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
void* __result_obj__;
int size_77;
void* right_value116;
char** keys_78;
void* right_value117;
struct sType** items_79;
void* right_value118;
_Bool* item_existance_80;
int len_81;
char* it_84;
struct sType* default_value_87;
struct sType* it2_90;
unsigned int hash_91;
int n_92;
_Bool _while_condtional17;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
struct sType* default_value_93;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_77, 0, sizeof(int));
right_value116 = (void*)0;
memset(&keys_78, 0, sizeof(char**));
right_value117 = (void*)0;
memset(&items_79, 0, sizeof(struct sType**));
right_value118 = (void*)0;
memset(&item_existance_80, 0, sizeof(_Bool*));
memset(&len_81, 0, sizeof(int));
memset(&it_84, 0, sizeof(char*));
memset(&default_value_87, 0, sizeof(struct sType*));
memset(&it2_90, 0, sizeof(struct sType*));
memset(&hash_91, 0, sizeof(unsigned int));
memset(&n_92, 0, sizeof(int));
memset(&default_value_93, 0, sizeof(struct sType*));
                # 1312 "/usr/local/include/neo-c.h"
                size_77=self->size*10;
                # 1313 "/usr/local/include/neo-c.h"
                keys_78=(char**)come_increment_ref_count(((char**)(right_value116=(char**)come_calloc(1, sizeof(char*)*(1*(size_77)), "/usr/local/include/neo-c.h", 1313, "char*%"))));
                right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1314 "/usr/local/include/neo-c.h"
                items_79=(struct sType**)come_increment_ref_count(((struct sType**)(right_value117=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_77)), "/usr/local/include/neo-c.h", 1314, "sType*%"))));
                come_call_finalizer3(right_value117,sType_finalize, 0, 1, 0, 0, __result_obj__);
                # 1315 "/usr/local/include/neo-c.h"
                item_existance_80=(_Bool*)come_increment_ref_count(((_Bool*)(right_value118=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_77)), "/usr/local/include/neo-c.h", 1315, "bool"))));
                right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1317 "/usr/local/include/neo-c.h"
                len_81=0;
                # 1352 "/usr/local/include/neo-c.h"
                for(                it_84=map$2charphsTypeph_begin(self);                !map$2charphsTypeph_end(self);                it_84=map$2charphsTypeph_next(self)                ){
                    # 1320 "/usr/local/include/neo-c.h"
                    # 1321 "/usr/local/include/neo-c.h"
                    memset(&default_value_87,0,sizeof(struct sType*));
                    # 1322 "/usr/local/include/neo-c.h"
                    it2_90=map$2charphsTypeph_at(self,it_84,default_value_87);
                    # 1323 "/usr/local/include/neo-c.h"
                    hash_91=string_get_hash_key(it_84)%size_77;
                    # 1324 "/usr/local/include/neo-c.h"
                    n_92=hash_91;
                    # 1350 "/usr/local/include/neo-c.h"
                    while(_while_condtional17=(_Bool)1,                    _while_condtional17) {
                        # 1349 "/usr/local/include/neo-c.h"
                        # 1327 "/usr/local/include/neo-c.h"
                        if(_if_conditional119=item_existance_80[n_92],                        _if_conditional119) {
                            # 1329 "/usr/local/include/neo-c.h"
                            n_92++;
                            # 1339 "/usr/local/include/neo-c.h"
                            # 1331 "/usr/local/include/neo-c.h"
                            if(_if_conditional120=n_92>=size_77,                            _if_conditional120) {
                                # 1332 "/usr/local/include/neo-c.h"
                                n_92=0;
                            }
                            else {
                                # 1339 "/usr/local/include/neo-c.h"
                                # 1334 "/usr/local/include/neo-c.h"
                                if(_if_conditional121=n_92==hash_91,                                _if_conditional121) {
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
                            item_existance_80[n_92]=(_Bool)1;
                            # 1342 "/usr/local/include/neo-c.h"
                            keys_78[n_92]=it_84;
                            # 1343 "/usr/local/include/neo-c.h"
                            # 1344 "/usr/local/include/neo-c.h"
                            items_79[n_92]=map$2charphsTypeph_at(self,it_84,default_value_93);
                            # 1346 "/usr/local/include/neo-c.h"
                            len_81++;
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
                self->keys=keys_78;
                # 1357 "/usr/local/include/neo-c.h"
                self->items=items_79;
                # 1358 "/usr/local/include/neo-c.h"
                self->item_existance=item_existance_80;
                # 1360 "/usr/local/include/neo-c.h"
                self->size=size_77;
                # 1361 "/usr/local/include/neo-c.h"
                self->len=len_81;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional111;
char* result_82;
char* __result70__;
_Bool _if_conditional112;
char* __result71__;
char* result_83;
char* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_82, 0, sizeof(char*));
memset(&result_83, 0, sizeof(char*));
                    # 1279 "/usr/local/include/neo-c.h"
                    # 1274 "/usr/local/include/neo-c.h"
                    if(_if_conditional111=self==((void*)0),                    _if_conditional111) {
                        # 1275 "/usr/local/include/neo-c.h"
                        # 1276 "/usr/local/include/neo-c.h"
                        memset(&result_82,0,sizeof(char*));
                        # 1277 "/usr/local/include/neo-c.h"
                        __result70__ = __result_obj__ = result_82;
                        return __result70__;
                    }
                    # 1279 "/usr/local/include/neo-c.h"
                    self->key_list->it=self->key_list->head;
                    # 1285 "/usr/local/include/neo-c.h"
                    # 1281 "/usr/local/include/neo-c.h"
                    if(self->key_list->it) {
                        # 1282 "/usr/local/include/neo-c.h"
                        __result71__ = __result_obj__ = self->key_list->it->item;
                        return __result71__;
                    }
                    # 1285 "/usr/local/include/neo-c.h"
                    # 1286 "/usr/local/include/neo-c.h"
                    memset(&result_83,0,sizeof(char*));
                    # 1287 "/usr/local/include/neo-c.h"
                    __result72__ = __result_obj__ = result_83;
                    return __result72__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __result73__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1308 "/usr/local/include/neo-c.h"
                    __result73__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result73__;
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional113;
char* result_85;
char* __result74__;
_Bool _if_conditional114;
char* __result75__;
char* result_86;
char* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_85, 0, sizeof(char*));
memset(&result_86, 0, sizeof(char*));
                    # 1296 "/usr/local/include/neo-c.h"
                    # 1291 "/usr/local/include/neo-c.h"
                    if(_if_conditional113=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional113) {
                        # 1292 "/usr/local/include/neo-c.h"
                        # 1293 "/usr/local/include/neo-c.h"
                        memset(&result_85,0,sizeof(char*));
                        # 1294 "/usr/local/include/neo-c.h"
                        __result74__ = __result_obj__ = result_85;
                        return __result74__;
                    }
                    # 1296 "/usr/local/include/neo-c.h"
                    self->key_list->it=self->key_list->it->next;
                    # 1302 "/usr/local/include/neo-c.h"
                    # 1298 "/usr/local/include/neo-c.h"
                    if(self->key_list->it) {
                        # 1299 "/usr/local/include/neo-c.h"
                        __result75__ = __result_obj__ = self->key_list->it->item;
                        return __result75__;
                    }
                    # 1302 "/usr/local/include/neo-c.h"
                    # 1303 "/usr/local/include/neo-c.h"
                    memset(&result_86,0,sizeof(char*));
                    # 1304 "/usr/local/include/neo-c.h"
                    __result76__ = __result_obj__ = result_86;
                    return __result76__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__;
unsigned int hash_88;
unsigned int it_89;
_Bool _while_condtional16;
_Bool _if_conditional115;
_Bool _if_conditional116;
struct sType* __result77__;
_Bool _if_conditional117;
_Bool _if_conditional118;
struct sType* __result78__;
struct sType* __result79__;
struct sType* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_88, 0, sizeof(unsigned int));
memset(&it_89, 0, sizeof(unsigned int));
                        # 1201 "/usr/local/include/neo-c.h"
                        hash_88=string_get_hash_key(((char*)key))%self->size;
                        # 1202 "/usr/local/include/neo-c.h"
                        it_89=hash_88;
                        # 1226 "/usr/local/include/neo-c.h"
                        while(_while_condtional16=(_Bool)1,                        _while_condtional16) {
                            # 1224 "/usr/local/include/neo-c.h"
                            # 1205 "/usr/local/include/neo-c.h"
                            if(_if_conditional115=self->item_existance[it_89],                            _if_conditional115) {
                                # 1212 "/usr/local/include/neo-c.h"
                                # 1207 "/usr/local/include/neo-c.h"
                                if(_if_conditional116=string_equals(self->keys[it_89],key),                                _if_conditional116) {
                                    # 1209 "/usr/local/include/neo-c.h"
                                    __result77__ = __result_obj__ = self->items[it_89];
                                    come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result77__;
                                }
                                # 1212 "/usr/local/include/neo-c.h"
                                it_89++;
                                # 1220 "/usr/local/include/neo-c.h"
                                # 1214 "/usr/local/include/neo-c.h"
                                if(_if_conditional117=it_89>=self->size,                                _if_conditional117) {
                                    # 1215 "/usr/local/include/neo-c.h"
                                    it_89=0;
                                }
                                else {
                                    # 1220 "/usr/local/include/neo-c.h"
                                    # 1217 "/usr/local/include/neo-c.h"
                                    if(_if_conditional118=it_89==hash_88,                                    _if_conditional118) {
                                        # 1218 "/usr/local/include/neo-c.h"
                                        __result78__ = __result_obj__ = default_value;
                                        come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result78__;
                                    }
                                }
                            }
                            else {
                                # 1222 "/usr/local/include/neo-c.h"
                                __result79__ = __result_obj__ = default_value;
                                come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                                return __result79__;
                            }
                        }
                        # 1226 "/usr/local/include/neo-c.h"
                        __result80__ = __result_obj__ = default_value;
                        come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result80__;
                        come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_96;
struct list_item$1charp* it_97;
_Bool _while_condtional19;
_Bool _if_conditional125;
struct list$1charp* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_96, 0, sizeof(int));
memset(&it_97, 0, sizeof(struct list_item$1charp*));
                            # 435 "/usr/local/include/neo-c.h"
                            it2_96=0;
                            # 436 "/usr/local/include/neo-c.h"
                            it_97=self->head;
                            # 447 "/usr/local/include/neo-c.h"
                            while(_while_condtional19=it_97!=((void*)0),                            _while_condtional19) {
                                # 442 "/usr/local/include/neo-c.h"
                                # 438 "/usr/local/include/neo-c.h"
                                if(_if_conditional125=string_equals(it_97->item,item),                                _if_conditional125) {
                                    # 439 "/usr/local/include/neo-c.h"
                                    list$1charp_delete(self,it2_96,it2_96+1);
                                    # 440 "/usr/local/include/neo-c.h"
                                    break;
                                }
                                # 442 "/usr/local/include/neo-c.h"
                                it2_96++;
                                # 444 "/usr/local/include/neo-c.h"
                                it_97=it_97->next;
                            }
                            # 447 "/usr/local/include/neo-c.h"
                            __result84__ = __result_obj__ = self;
                            return __result84__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
int tmp_98;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool _if_conditional131;
struct list$1charp* __result81__;
_Bool _if_conditional132;
_Bool _if_conditional133;
struct list_item$1charp* it_101;
int i_102;
_Bool _while_condtional21;
_Bool _if_conditional134;
struct list_item$1charp* prev_it_103;
_Bool _if_conditional135;
_Bool _if_conditional136;
struct list_item$1charp* it_104;
int i_105;
_Bool _while_condtional22;
_Bool _if_conditional137;
_Bool _if_conditional138;
struct list_item$1charp* prev_it_106;
struct list_item$1charp* it_107;
struct list_item$1charp* head_prev_it_108;
struct list_item$1charp* tail_it_109;
int i_110;
_Bool _while_condtional23;
_Bool _if_conditional139;
_Bool _if_conditional140;
_Bool _if_conditional141;
struct list_item$1charp* prev_it_111;
_Bool _if_conditional142;
_Bool _if_conditional143;
struct list$1charp* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_98, 0, sizeof(int));
memset(&it_101, 0, sizeof(struct list_item$1charp*));
memset(&i_102, 0, sizeof(int));
memset(&prev_it_103, 0, sizeof(struct list_item$1charp*));
memset(&it_104, 0, sizeof(struct list_item$1charp*));
memset(&i_105, 0, sizeof(int));
memset(&prev_it_106, 0, sizeof(struct list_item$1charp*));
memset(&it_107, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_108, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_109, 0, sizeof(struct list_item$1charp*));
memset(&i_110, 0, sizeof(int));
memset(&prev_it_111, 0, sizeof(struct list_item$1charp*));
                                        # 454 "/usr/local/include/neo-c.h"
                                        # 451 "/usr/local/include/neo-c.h"
                                        if(_if_conditional126=head<0,                                        _if_conditional126) {
                                            # 452 "/usr/local/include/neo-c.h"
                                            head+=self->len;
                                        }
                                        # 458 "/usr/local/include/neo-c.h"
                                        # 454 "/usr/local/include/neo-c.h"
                                        if(_if_conditional127=tail<0,                                        _if_conditional127) {
                                            # 455 "/usr/local/include/neo-c.h"
                                            tail+=self->len+1;
                                        }
                                        # 464 "/usr/local/include/neo-c.h"
                                        # 458 "/usr/local/include/neo-c.h"
                                        if(_if_conditional128=head>tail,                                        _if_conditional128) {
                                            # 459 "/usr/local/include/neo-c.h"
                                            tmp_98=tail;
                                            # 460 "/usr/local/include/neo-c.h"
                                            tail=head;
                                            # 461 "/usr/local/include/neo-c.h"
                                            head=tmp_98;
                                        }
                                        # 468 "/usr/local/include/neo-c.h"
                                        # 464 "/usr/local/include/neo-c.h"
                                        if(_if_conditional129=head<0,                                        _if_conditional129) {
                                            # 465 "/usr/local/include/neo-c.h"
                                            head=0;
                                        }
                                        # 472 "/usr/local/include/neo-c.h"
                                        # 468 "/usr/local/include/neo-c.h"
                                        if(_if_conditional130=tail>self->len,                                        _if_conditional130) {
                                            # 469 "/usr/local/include/neo-c.h"
                                            tail=self->len;
                                        }
                                        # 476 "/usr/local/include/neo-c.h"
                                        # 472 "/usr/local/include/neo-c.h"
                                        if(_if_conditional131=head==tail,                                        _if_conditional131) {
                                            # 473 "/usr/local/include/neo-c.h"
                                            __result81__ = __result_obj__ = self;
                                            return __result81__;
                                        }
                                        # 571 "/usr/local/include/neo-c.h"
                                        # 476 "/usr/local/include/neo-c.h"
                                        if(_if_conditional132=head==0&&tail==self->len,                                        _if_conditional132) {
                                            # 478 "/usr/local/include/neo-c.h"
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            # 571 "/usr/local/include/neo-c.h"
                                            # 480 "/usr/local/include/neo-c.h"
                                            if(_if_conditional133=head==0,                                            _if_conditional133) {
                                                # 481 "/usr/local/include/neo-c.h"
                                                it_101=self->head;
                                                # 482 "/usr/local/include/neo-c.h"
                                                i_102=0;
                                                # 504 "/usr/local/include/neo-c.h"
                                                while(_while_condtional21=it_101!=((void*)0),                                                _while_condtional21) {
                                                    # 503 "/usr/local/include/neo-c.h"
                                                    # 484 "/usr/local/include/neo-c.h"
                                                    if(_if_conditional134=i_102<tail,                                                    _if_conditional134) {
                                                        # 485 "/usr/local/include/neo-c.h"
                                                        prev_it_103=it_101;
                                                        # 487 "/usr/local/include/neo-c.h"
                                                        it_101=it_101->next;
                                                        # 488 "/usr/local/include/neo-c.h"
                                                        i_102++;
                                                        # 490 "/usr/local/include/neo-c.h"
                                                        come_call_finalizer3(prev_it_103,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                        # 492 "/usr/local/include/neo-c.h"
                                                        self->len--;
                                                    }
                                                    else {
                                                        # 503 "/usr/local/include/neo-c.h"
                                                        # 494 "/usr/local/include/neo-c.h"
                                                        if(_if_conditional135=i_102==tail,                                                        _if_conditional135) {
                                                            # 495 "/usr/local/include/neo-c.h"
                                                            self->head=it_101;
                                                            # 496 "/usr/local/include/neo-c.h"
                                                            self->head->prev=((void*)0);
                                                            # 497 "/usr/local/include/neo-c.h"
                                                            break;
                                                        }
                                                        else {
                                                            # 500 "/usr/local/include/neo-c.h"
                                                            it_101=it_101->next;
                                                            # 501 "/usr/local/include/neo-c.h"
                                                            i_102++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                # 571 "/usr/local/include/neo-c.h"
                                                # 505 "/usr/local/include/neo-c.h"
                                                if(_if_conditional136=tail==self->len,                                                _if_conditional136) {
                                                    # 506 "/usr/local/include/neo-c.h"
                                                    it_104=self->head;
                                                    # 507 "/usr/local/include/neo-c.h"
                                                    i_105=0;
                                                    # 529 "/usr/local/include/neo-c.h"
                                                    while(_while_condtional22=it_104!=((void*)0),                                                    _while_condtional22) {
                                                        # 514 "/usr/local/include/neo-c.h"
                                                        # 509 "/usr/local/include/neo-c.h"
                                                        if(_if_conditional137=i_105==head,                                                        _if_conditional137) {
                                                            # 510 "/usr/local/include/neo-c.h"
                                                            self->tail=it_104->prev;
                                                            # 511 "/usr/local/include/neo-c.h"
                                                            self->tail->next=((void*)0);
                                                        }
                                                        # 528 "/usr/local/include/neo-c.h"
                                                        # 514 "/usr/local/include/neo-c.h"
                                                        if(_if_conditional138=i_105>=head,                                                        _if_conditional138) {
                                                            # 515 "/usr/local/include/neo-c.h"
                                                            prev_it_106=it_104;
                                                            # 517 "/usr/local/include/neo-c.h"
                                                            it_104=it_104->next;
                                                            # 518 "/usr/local/include/neo-c.h"
                                                            i_105++;
                                                            # 520 "/usr/local/include/neo-c.h"
                                                            come_call_finalizer3(prev_it_106,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            # 522 "/usr/local/include/neo-c.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 525 "/usr/local/include/neo-c.h"
                                                            it_104=it_104->next;
                                                            # 526 "/usr/local/include/neo-c.h"
                                                            i_105++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 531 "/usr/local/include/neo-c.h"
                                                    it_107=self->head;
                                                    # 533 "/usr/local/include/neo-c.h"
                                                    head_prev_it_108=((void*)0);
                                                    # 534 "/usr/local/include/neo-c.h"
                                                    tail_it_109=((void*)0);
                                                    # 537 "/usr/local/include/neo-c.h"
                                                    i_110=0;
                                                    # 563 "/usr/local/include/neo-c.h"
                                                    while(_while_condtional23=it_107!=((void*)0),                                                    _while_condtional23) {
                                                        # 542 "/usr/local/include/neo-c.h"
                                                        # 539 "/usr/local/include/neo-c.h"
                                                        if(_if_conditional139=i_110==head,                                                        _if_conditional139) {
                                                            # 540 "/usr/local/include/neo-c.h"
                                                            head_prev_it_108=it_107->prev;
                                                        }
                                                        # 546 "/usr/local/include/neo-c.h"
                                                        # 542 "/usr/local/include/neo-c.h"
                                                        if(_if_conditional140=i_110==tail,                                                        _if_conditional140) {
                                                            # 543 "/usr/local/include/neo-c.h"
                                                            tail_it_109=it_107;
                                                        }
                                                        # 561 "/usr/local/include/neo-c.h"
                                                        # 546 "/usr/local/include/neo-c.h"
                                                        if(_if_conditional141=i_110>=head&&i_110<tail,                                                        _if_conditional141) {
                                                            # 548 "/usr/local/include/neo-c.h"
                                                            prev_it_111=it_107;
                                                            # 550 "/usr/local/include/neo-c.h"
                                                            it_107=it_107->next;
                                                            # 551 "/usr/local/include/neo-c.h"
                                                            i_110++;
                                                            # 553 "/usr/local/include/neo-c.h"
                                                            come_call_finalizer3(prev_it_111,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            # 555 "/usr/local/include/neo-c.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 558 "/usr/local/include/neo-c.h"
                                                            it_107=it_107->next;
                                                            # 559 "/usr/local/include/neo-c.h"
                                                            i_110++;
                                                        }
                                                    }
                                                    # 566 "/usr/local/include/neo-c.h"
                                                    # 563 "/usr/local/include/neo-c.h"
                                                    if(_if_conditional142=head_prev_it_108!=((void*)0),                                                    _if_conditional142) {
                                                        # 564 "/usr/local/include/neo-c.h"
                                                        head_prev_it_108->next=tail_it_109;
                                                    }
                                                    # 569 "/usr/local/include/neo-c.h"
                                                    # 566 "/usr/local/include/neo-c.h"
                                                    if(_if_conditional143=tail_it_109!=((void*)0),                                                    _if_conditional143) {
                                                        # 567 "/usr/local/include/neo-c.h"
                                                        tail_it_109->prev=head_prev_it_108;
                                                    }
                                                }
                                            }
                                        }
                                        # 571 "/usr/local/include/neo-c.h"
                                        __result83__ = __result_obj__ = self;
                                        return __result83__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_99;
_Bool _while_condtional20;
struct list_item$1charp* prev_it_100;
struct list$1charp* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_99, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_100, 0, sizeof(struct list_item$1charp*));
                                                # 420 "/usr/local/include/neo-c.h"
                                                it_99=self->head;
                                                # 427 "/usr/local/include/neo-c.h"
                                                while(_while_condtional20=it_99!=((void*)0),                                                _while_condtional20) {
                                                    # 422 "/usr/local/include/neo-c.h"
                                                    prev_it_100=it_99;
                                                    # 423 "/usr/local/include/neo-c.h"
                                                    it_99=it_99->next;
                                                    # 424 "/usr/local/include/neo-c.h"
                                                    come_call_finalizer3(prev_it_100,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                # 427 "/usr/local/include/neo-c.h"
                                                self->head=((void*)0);
                                                # 428 "/usr/local/include/neo-c.h"
                                                self->tail=((void*)0);
                                                # 430 "/usr/local/include/neo-c.h"
                                                self->len=0;
                                                # 432 "/usr/local/include/neo-c.h"
                                                __result82__ = __result_obj__ = self;
                                                return __result82__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional149;
char* result_113;
char* __result85__;
_Bool _if_conditional150;
char* __result86__;
char* result_114;
char* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_113, 0, sizeof(char*));
memset(&result_114, 0, sizeof(char*));
            # 281 "/usr/local/include/neo-c.h"
            # 276 "/usr/local/include/neo-c.h"
            if(_if_conditional149=self==((void*)0),            _if_conditional149) {
                # 277 "/usr/local/include/neo-c.h"
                # 278 "/usr/local/include/neo-c.h"
                memset(&result_113,0,sizeof(char*));
                # 279 "/usr/local/include/neo-c.h"
                __result85__ = __result_obj__ = result_113;
                return __result85__;
            }
            # 281 "/usr/local/include/neo-c.h"
            self->it=self->head;
            # 287 "/usr/local/include/neo-c.h"
            # 283 "/usr/local/include/neo-c.h"
            if(self->it) {
                # 284 "/usr/local/include/neo-c.h"
                __result86__ = __result_obj__ = self->it->item;
                return __result86__;
            }
            # 287 "/usr/local/include/neo-c.h"
            # 288 "/usr/local/include/neo-c.h"
            memset(&result_114,0,sizeof(char*));
            # 289 "/usr/local/include/neo-c.h"
            __result87__ = __result_obj__ = result_114;
            return __result87__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result88__;
memset(&__result_obj__, 0, sizeof(void*));
            # 311 "/usr/local/include/neo-c.h"
            __result88__ = self==((void*)0)||self->it==((void*)0);
            return __result88__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional151;
char* result_116;
char* __result89__;
_Bool _if_conditional152;
char* __result90__;
char* result_117;
char* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_116, 0, sizeof(char*));
memset(&result_117, 0, sizeof(char*));
            # 299 "/usr/local/include/neo-c.h"
            # 293 "/usr/local/include/neo-c.h"
            if(_if_conditional151=self==((void*)0)||self->it==((void*)0),            _if_conditional151) {
                # 294 "/usr/local/include/neo-c.h"
                # 295 "/usr/local/include/neo-c.h"
                memset(&result_116,0,sizeof(char*));
                # 296 "/usr/local/include/neo-c.h"
                __result89__ = __result_obj__ = result_116;
                return __result89__;
            }
            # 299 "/usr/local/include/neo-c.h"
            self->it=self->it->next;
            # 305 "/usr/local/include/neo-c.h"
            # 301 "/usr/local/include/neo-c.h"
            if(self->it) {
                # 302 "/usr/local/include/neo-c.h"
                __result90__ = __result_obj__ = self->it->item;
                return __result90__;
            }
            # 305 "/usr/local/include/neo-c.h"
            # 306 "/usr/local/include/neo-c.h"
            memset(&result_117,0,sizeof(char*));
            # 307 "/usr/local/include/neo-c.h"
            __result91__ = __result_obj__ = result_117;
            return __result91__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional155;
void* right_value119;
struct list_item$1charp* litem_118;
_Bool _if_conditional156;
void* right_value120;
struct list_item$1charp* litem_119;
void* right_value121;
struct list_item$1charp* litem_120;
struct list$1charp* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value119 = (void*)0;
memset(&litem_118, 0, sizeof(struct list_item$1charp*));
right_value120 = (void*)0;
memset(&litem_119, 0, sizeof(struct list_item$1charp*));
right_value121 = (void*)0;
memset(&litem_120, 0, sizeof(struct list_item$1charp*));
                # 247 "/usr/local/include/neo-c.h"
                # 216 "/usr/local/include/neo-c.h"
                if(_if_conditional155=self->len==0,                _if_conditional155) {
                    # 217 "/usr/local/include/neo-c.h"
                    litem_118=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value119=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/neo-c.h", 217, "list_item$1charp"))));
                    come_call_finalizer3(right_value119,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "/usr/local/include/neo-c.h"
                    litem_118->prev=((void*)0);
                    # 220 "/usr/local/include/neo-c.h"
                    litem_118->next=((void*)0);
                    # 221 "/usr/local/include/neo-c.h"
                    litem_118->item=item;
                    # 223 "/usr/local/include/neo-c.h"
                    self->tail=litem_118;
                    # 224 "/usr/local/include/neo-c.h"
                    self->head=litem_118;
                }
                else {
                    # 247 "/usr/local/include/neo-c.h"
                    # 226 "/usr/local/include/neo-c.h"
                    if(_if_conditional156=self->len==1,                    _if_conditional156) {
                        # 227 "/usr/local/include/neo-c.h"
                        litem_119=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value120=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/neo-c.h", 227, "list_item$1charp"))));
                        come_call_finalizer3(right_value120,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "/usr/local/include/neo-c.h"
                        litem_119->prev=self->head;
                        # 230 "/usr/local/include/neo-c.h"
                        litem_119->next=((void*)0);
                        # 231 "/usr/local/include/neo-c.h"
                        litem_119->item=item;
                        # 233 "/usr/local/include/neo-c.h"
                        self->tail=litem_119;
                        # 234 "/usr/local/include/neo-c.h"
                        self->head->next=litem_119;
                    }
                    else {
                        # 237 "/usr/local/include/neo-c.h"
                        litem_120=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value121=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/neo-c.h", 237, "list_item$1charp"))));
                        come_call_finalizer3(right_value121,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "/usr/local/include/neo-c.h"
                        litem_120->prev=self->tail;
                        # 240 "/usr/local/include/neo-c.h"
                        litem_120->next=((void*)0);
                        # 241 "/usr/local/include/neo-c.h"
                        litem_120->item=item;
                        # 243 "/usr/local/include/neo-c.h"
                        self->tail->next=litem_120;
                        # 244 "/usr/local/include/neo-c.h"
                        self->tail=litem_120;
                    }
                }
                # 247 "/usr/local/include/neo-c.h"
                self->len++;
                # 249 "/usr/local/include/neo-c.h"
                __result92__ = __result_obj__ = self;
                return __result92__;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional160;
int __result97__;
int __result98__;
memset(&__result_obj__, 0, sizeof(void*));
            # 354 "/usr/local/include/neo-c.h"
            # 351 "/usr/local/include/neo-c.h"
            if(_if_conditional160=self==((void*)0),            _if_conditional160) {
                # 352 "/usr/local/include/neo-c.h"
                __result97__ = 0;
                return __result97__;
            }
            # 354 "/usr/local/include/neo-c.h"
            __result98__ = self->len;
            return __result98__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional162;
struct tuple2$2charphsTypeph* result_125;
struct tuple2$2charphsTypeph* __result99__;
_Bool _if_conditional163;
struct tuple2$2charphsTypeph* __result100__;
struct tuple2$2charphsTypeph* result_126;
struct tuple2$2charphsTypeph* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_125, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_126, 0, sizeof(struct tuple2$2charphsTypeph*));
                # 281 "/usr/local/include/neo-c.h"
                # 276 "/usr/local/include/neo-c.h"
                if(_if_conditional162=self==((void*)0),                _if_conditional162) {
                    # 277 "/usr/local/include/neo-c.h"
                    # 278 "/usr/local/include/neo-c.h"
                    memset(&result_125,0,sizeof(struct tuple2$2charphsTypeph*));
                    # 279 "/usr/local/include/neo-c.h"
                    __result99__ = __result_obj__ = result_125;
                    return __result99__;
                }
                # 281 "/usr/local/include/neo-c.h"
                self->it=self->head;
                # 287 "/usr/local/include/neo-c.h"
                # 283 "/usr/local/include/neo-c.h"
                if(self->it) {
                    # 284 "/usr/local/include/neo-c.h"
                    __result100__ = __result_obj__ = self->it->item;
                    return __result100__;
                }
                # 287 "/usr/local/include/neo-c.h"
                # 288 "/usr/local/include/neo-c.h"
                memset(&result_126,0,sizeof(struct tuple2$2charphsTypeph*));
                # 289 "/usr/local/include/neo-c.h"
                __result101__ = __result_obj__ = result_126;
                return __result101__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result102__;
memset(&__result_obj__, 0, sizeof(void*));
                # 311 "/usr/local/include/neo-c.h"
                __result102__ = self==((void*)0)||self->it==((void*)0);
                return __result102__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional164;
struct tuple2$2charphsTypeph* result_128;
struct tuple2$2charphsTypeph* __result103__;
_Bool _if_conditional165;
struct tuple2$2charphsTypeph* __result104__;
struct tuple2$2charphsTypeph* result_129;
struct tuple2$2charphsTypeph* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_128, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_129, 0, sizeof(struct tuple2$2charphsTypeph*));
                # 299 "/usr/local/include/neo-c.h"
                # 293 "/usr/local/include/neo-c.h"
                if(_if_conditional164=self==((void*)0)||self->it==((void*)0),                _if_conditional164) {
                    # 294 "/usr/local/include/neo-c.h"
                    # 295 "/usr/local/include/neo-c.h"
                    memset(&result_128,0,sizeof(struct tuple2$2charphsTypeph*));
                    # 296 "/usr/local/include/neo-c.h"
                    __result103__ = __result_obj__ = result_128;
                    return __result103__;
                }
                # 299 "/usr/local/include/neo-c.h"
                self->it=self->it->next;
                # 305 "/usr/local/include/neo-c.h"
                # 301 "/usr/local/include/neo-c.h"
                if(self->it) {
                    # 302 "/usr/local/include/neo-c.h"
                    __result104__ = __result_obj__ = self->it->item;
                    return __result104__;
                }
                # 305 "/usr/local/include/neo-c.h"
                # 306 "/usr/local/include/neo-c.h"
                memset(&result_129,0,sizeof(struct tuple2$2charphsTypeph*));
                # 307 "/usr/local/include/neo-c.h"
                __result105__ = __result_obj__ = result_129;
                return __result105__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_132;
_Bool _while_condtional24;
struct list_item$1tuple2$2charphsTypephph* prev_it_133;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_132, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_133, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                # 114 "/usr/local/include/neo-c.h"
                it_132=self->head;
                # 120 "/usr/local/include/neo-c.h"
                while(_while_condtional24=it_132!=((void*)0),                _while_condtional24) {
                    # 116 "/usr/local/include/neo-c.h"
                    prev_it_133=it_132;
                    # 117 "/usr/local/include/neo-c.h"
                    it_132=it_132->next;
                    # 118 "/usr/local/include/neo-c.h"
                    come_call_finalizer3(prev_it_133,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional166;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                        # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                        if(_if_conditional166=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional166) {
                            # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

struct sNode* parse_union(char* type_name, struct sInfo* info){
void* __result_obj__;
struct sClass* klass_134;
_Bool output_135;
_Bool _if_conditional179;
void* right_value131;
void* right_value132;
void* right_value133;
struct sClass* __dec_obj37;
void* right_value137;
void* right_value152;
void* right_value153;
struct sClass* __dec_obj47;
void* right_value154;
void* right_value155;
struct sType* type_166;
int __exception_result_var_b1;
_Bool _while_condtional31;
void* right_value156;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* type2_169;
char* name_170;
_Bool err_171;
_Bool _if_conditional232;
int __exception_result_var_b2;
_Bool _if_conditional233;
void* right_value160;
void* right_value161;
_Bool _if_conditional236;
void* right_value162;
void* right_value163;
struct sNode* _inf_value1;
struct sUnionNode* _inf_obj_value1;
void* right_value167;
struct sNode* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&klass_134, 0, sizeof(struct sClass*));
memset(&output_135, 0, sizeof(_Bool));
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
right_value137 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
right_value155 = (void*)0;
memset(&type_166, 0, sizeof(struct sType*));
right_value156 = (void*)0;
memset(&type2_169, 0, sizeof(struct sType*));
memset(&name_170, 0, sizeof(char*));
memset(&err_171, 0, sizeof(_Bool));
memset(&type2_169, 0, sizeof(struct sType*));
memset(&name_170, 0, sizeof(char*));
memset(&err_171, 0, sizeof(_Bool));
right_value160 = (void*)0;
right_value161 = (void*)0;
right_value162 = (void*)0;
right_value163 = (void*)0;
right_value167 = (void*)0;
    # 69 "15union.c"
    # 70 "15union.c"
    # 81 "15union.c"
    # 71 "15union.c"
    if(_if_conditional179=map$2charphsClassph_at(info->classes,type_name,((void*)0))==((void*)0),    _if_conditional179) {
        # 72 "15union.c"
        output_135=(_Bool)1;
        # 73 "15union.c"
        __dec_obj37=klass_134;
        klass_134=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value133=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value131=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "15union.c", 73, "sClass")))),((char*)(right_value132=__builtin_string(type_name))),(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info))));
        come_call_finalizer3(__dec_obj37,sClass_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value131,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value133,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        # 74 "15union.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value137=__builtin_string(type_name)))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value152=sClass_clone(klass_134)))));
        right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value152,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    }
    else {
        # 77 "15union.c"
        output_135=(_Bool)0;
        # 78 "15union.c"
        __dec_obj47=klass_134;
        klass_134=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value153=sClass_clone(map$2charphsClassph_at(info->classes,type_name,((void*)0))))));
        come_call_finalizer3(__dec_obj47,sClass_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value153,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    }
    # 81 "15union.c"
    type_166=(struct sType*)come_increment_ref_count(((struct sType*)(right_value155=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value154=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "15union.c", 81, "sType")))),type_name,(_Bool)0,info))));
    come_call_finalizer3(right_value154,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value155,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 83 "15union.c"
    (come_push_stackframe("15union.c", 83, 0),__exception_result_var_b1=expected_next_character(123,info), come_pop_stackframe(), __exception_result_var_b1);
    # 85 "15union.c"
    list$1tuple2$2charphsTypephph_reset(type_166->mClass->mFields);
    # 107 "15union.c"
    while(_while_condtional31=(_Bool)1,    _while_condtional31) {
        # 88 "15union.c"
        multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(right_value156=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
        type2_169=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
        name_170=(char*)come_increment_ref_count(multiple_assign_var2->v2);
        err_171=multiple_assign_var2->v3;
        come_call_finalizer3(right_value156,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        # 94 "15union.c"
        # 90 "15union.c"
        if(_if_conditional232=!err_171,        _if_conditional232) {
            # 91 "15union.c"
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            # 92 "15union.c"
            exit(2);
        }
        # 94 "15union.c"
        (come_push_stackframe("15union.c", 94, 1),__exception_result_var_b2=expected_next_character(59,info), come_pop_stackframe(), __exception_result_var_b2);
        # 100 "15union.c"
        # 96 "15union.c"
        if(_if_conditional233=!info->no_output_err,        _if_conditional233) {
            # 97 "15union.c"
            list$1tuple2$2charphsTypephph_push_back(type_166->mClass->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value161=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value160=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "15union.c", 97, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_170),(struct sType*)come_increment_ref_count(type2_169))))));
            come_call_finalizer3(right_value160,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value161,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 105 "15union.c"
        # 100 "15union.c"
        if(_if_conditional236=*info->p==125,        _if_conditional236) {
            # 101 "15union.c"
            info->p++;
            # 102 "15union.c"
            skip_spaces_and_lf(info);
            # 103 "15union.c"
            come_call_finalizer3(type2_169,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_170 = come_decrement_ref_count2(name_170, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        come_call_finalizer3(type2_169,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_170 = come_decrement_ref_count2(name_170, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 107 "15union.c"
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "15union.c", 107, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sUnionNode*)(right_value163=sUnionNode_initialize((struct sUnionNode*)come_increment_ref_count(((struct sUnionNode*)(right_value162=(struct sUnionNode*)come_calloc(1, sizeof(struct sUnionNode)*(1), "15union.c", 107, "sUnionNode")))),(struct sType*)come_increment_ref_count(type_166),output_135,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sUnionNode_finalize;
    _inf_value1->clone=(void*)sUnionNode_clone;
    _inf_value1->compile=(void*)sUnionNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sUnionNode_terminated;
    _inf_value1->kind=(void*)sUnionNode_kind;
    __result132__ = __result_obj__ = ((struct sNode*)(right_value167=_inf_value1));
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(klass_134,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_166,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value162,sUnionNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value163,sUnionNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value167) { right_value167 = come_decrement_ref_count2(right_value167, ((struct sNode*)right_value167)->finalize, ((struct sNode*)right_value167)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result132__;
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(klass_134,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_166,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_136;
unsigned int it_137;
_Bool _while_condtional25;
_Bool _if_conditional171;
_Bool _if_conditional172;
struct sClass* __result107__;
_Bool _if_conditional177;
_Bool _if_conditional178;
struct sClass* __result108__;
struct sClass* __result109__;
struct sClass* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_136, 0, sizeof(unsigned int));
memset(&it_137, 0, sizeof(unsigned int));
        # 1201 "/usr/local/include/neo-c.h"
        hash_136=string_get_hash_key(((char*)key))%self->size;
        # 1202 "/usr/local/include/neo-c.h"
        it_137=hash_136;
        # 1226 "/usr/local/include/neo-c.h"
        while(_while_condtional25=(_Bool)1,        _while_condtional25) {
            # 1224 "/usr/local/include/neo-c.h"
            # 1205 "/usr/local/include/neo-c.h"
            if(_if_conditional171=self->item_existance[it_137],            _if_conditional171) {
                # 1212 "/usr/local/include/neo-c.h"
                # 1207 "/usr/local/include/neo-c.h"
                if(_if_conditional172=string_equals(self->keys[it_137],key),                _if_conditional172) {
                    # 1209 "/usr/local/include/neo-c.h"
                    __result107__ = __result_obj__ = self->items[it_137];
                    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                    return __result107__;
                }
                # 1212 "/usr/local/include/neo-c.h"
                it_137++;
                # 1220 "/usr/local/include/neo-c.h"
                # 1214 "/usr/local/include/neo-c.h"
                if(_if_conditional177=it_137>=self->size,                _if_conditional177) {
                    # 1215 "/usr/local/include/neo-c.h"
                    it_137=0;
                }
                else {
                    # 1220 "/usr/local/include/neo-c.h"
                    # 1217 "/usr/local/include/neo-c.h"
                    if(_if_conditional178=it_137==hash_136,                    _if_conditional178) {
                        # 1218 "/usr/local/include/neo-c.h"
                        __result108__ = __result_obj__ = default_value;
                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                        return __result108__;
                    }
                }
            }
            else {
                # 1222 "/usr/local/include/neo-c.h"
                __result109__ = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result109__;
            }
        }
        # 1226 "/usr/local/include/neo-c.h"
        __result110__ = __result_obj__ = default_value;
        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
        return __result110__;
        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional173;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool _if_conditional176;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sClass_finalize"
                        # 0 "sClass_finalize"
                        if(_if_conditional173=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional173) {
                            # 0 "sClass_finalize"
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "sClass_finalize"
                        # 1 "sClass_finalize"
                        if(_if_conditional174=self!=((void*)0)&&self->mFields!=((void*)0),                        _if_conditional174) {
                            # 1 "sClass_finalize"
                            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        # 3 "sClass_finalize"
                        # 2 "sClass_finalize"
                        if(_if_conditional175=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                        _if_conditional175) {
                            # 2 "sClass_finalize"
                            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 4 "sClass_finalize"
                        # 3 "sClass_finalize"
                        if(_if_conditional176=self!=((void*)0)&&self->mParentClassName!=((void*)0),                        _if_conditional176) {
                            # 3 "sClass_finalize"
                            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional180;
unsigned int hash_153;
unsigned int it_154;
_Bool _while_condtional27;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool same_key_exist_155;
char* it2_156;
_Bool _if_conditional196;
_Bool _if_conditional197;
struct map$2charphsClassph* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_153, 0, sizeof(unsigned int));
memset(&it_154, 0, sizeof(unsigned int));
memset(&same_key_exist_155, 0, sizeof(_Bool));
memset(&it2_156, 0, sizeof(char*));
            # 1368 "/usr/local/include/neo-c.h"
            # 1365 "/usr/local/include/neo-c.h"
            if(_if_conditional180=self->len*10>=self->size,            _if_conditional180) {
                # 1366 "/usr/local/include/neo-c.h"
                map$2charphsClassph_rehash(self);
            }
            # 1368 "/usr/local/include/neo-c.h"
            hash_153=string_get_hash_key(key)%self->size;
            # 1369 "/usr/local/include/neo-c.h"
            it_154=hash_153;
            # 1427 "/usr/local/include/neo-c.h"
            while(_while_condtional27=(_Bool)1,            _while_condtional27) {
                # 1425 "/usr/local/include/neo-c.h"
                # 1372 "/usr/local/include/neo-c.h"
                if(_if_conditional188=self->item_existance[it_154],                _if_conditional188) {
                    # 1395 "/usr/local/include/neo-c.h"
                    # 1374 "/usr/local/include/neo-c.h"
                    if(_if_conditional189=string_equals(self->keys[it_154],key),                    _if_conditional189) {
                        # 1385 "/usr/local/include/neo-c.h"
                        # 1376 "/usr/local/include/neo-c.h"
                        if(_if_conditional190=1,                        _if_conditional190) {
                            # 1377 "/usr/local/include/neo-c.h"
                            list$1charp_remove(self->key_list,self->keys[it_154]);
                            # 1378 "/usr/local/include/neo-c.h"
                            self->keys[it_154] = come_decrement_ref_count2(self->keys[it_154], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            # 1379 "/usr/local/include/neo-c.h"
                            self->keys[it_154]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            # 1382 "/usr/local/include/neo-c.h"
                            list$1charp_remove(self->key_list,self->keys[it_154]);
                            # 1383 "/usr/local/include/neo-c.h"
                            self->keys[it_154]=key;
                        }
                        # 1392 "/usr/local/include/neo-c.h"
                        # 1385 "/usr/local/include/neo-c.h"
                        if(_if_conditional191=1,                        _if_conditional191) {
                            # 1386 "/usr/local/include/neo-c.h"
                            come_call_finalizer3(self->items[it_154],sClass_finalize, 0, 0, 0, 0, (void*)0);
                            # 1387 "/usr/local/include/neo-c.h"
                            self->items[it_154]=(struct sClass*)come_increment_ref_count(item);
                        }
                        else {
                            # 1390 "/usr/local/include/neo-c.h"
                            self->items[it_154]=item;
                        }
                        # 1392 "/usr/local/include/neo-c.h"
                        break;
                    }
                    # 1395 "/usr/local/include/neo-c.h"
                    it_154++;
                    # 1405 "/usr/local/include/neo-c.h"
                    # 1397 "/usr/local/include/neo-c.h"
                    if(_if_conditional192=it_154>=self->size,                    _if_conditional192) {
                        # 1398 "/usr/local/include/neo-c.h"
                        it_154=0;
                    }
                    else {
                        # 1405 "/usr/local/include/neo-c.h"
                        # 1400 "/usr/local/include/neo-c.h"
                        if(_if_conditional193=it_154==hash_153,                        _if_conditional193) {
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
                    self->item_existance[it_154]=(_Bool)1;
                    # 1414 "/usr/local/include/neo-c.h"
                    # 1408 "/usr/local/include/neo-c.h"
                    if(_if_conditional194=1,                    _if_conditional194) {
                        # 1409 "/usr/local/include/neo-c.h"
                        self->keys[it_154]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1412 "/usr/local/include/neo-c.h"
                        self->keys[it_154]=key;
                    }
                    # 1421 "/usr/local/include/neo-c.h"
                    # 1414 "/usr/local/include/neo-c.h"
                    if(_if_conditional195=1,                    _if_conditional195) {
                        # 1415 "/usr/local/include/neo-c.h"
                        self->items[it_154]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        # 1418 "/usr/local/include/neo-c.h"
                        self->items[it_154]=item;
                    }
                    # 1421 "/usr/local/include/neo-c.h"
                    self->len++;
                    # 1423 "/usr/local/include/neo-c.h"
                    break;
                }
            }
            # 1427 "/usr/local/include/neo-c.h"
            same_key_exist_155=(_Bool)0;
            # 1435 "/usr/local/include/neo-c.h"
            for(            it2_156=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_156=list$1charp_next(self->key_list)            ){
                # 1433 "/usr/local/include/neo-c.h"
                # 1430 "/usr/local/include/neo-c.h"
                if(_if_conditional196=string_equals(it2_156,key),                _if_conditional196) {
                    # 1431 "/usr/local/include/neo-c.h"
                    same_key_exist_155=(_Bool)1;
                }
            }
            # 1439 "/usr/local/include/neo-c.h"
            # 1435 "/usr/local/include/neo-c.h"
            if(_if_conditional197=!same_key_exist_155,            _if_conditional197) {
                # 1436 "/usr/local/include/neo-c.h"
                list$1charp_push_back(self->key_list,key);
            }
            # 1439 "/usr/local/include/neo-c.h"
            __result118__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result118__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_138;
void* right_value134;
char** keys_139;
void* right_value135;
struct sClass** items_140;
void* right_value136;
_Bool* item_existance_141;
int len_142;
char* it_145;
struct sClass* default_value_148;
struct sClass* it2_149;
unsigned int hash_150;
int n_151;
_Bool _while_condtional26;
_Bool _if_conditional185;
_Bool _if_conditional186;
_Bool _if_conditional187;
struct sClass* default_value_152;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_138, 0, sizeof(int));
right_value134 = (void*)0;
memset(&keys_139, 0, sizeof(char**));
right_value135 = (void*)0;
memset(&items_140, 0, sizeof(struct sClass**));
right_value136 = (void*)0;
memset(&item_existance_141, 0, sizeof(_Bool*));
memset(&len_142, 0, sizeof(int));
memset(&it_145, 0, sizeof(char*));
memset(&default_value_148, 0, sizeof(struct sClass*));
memset(&it2_149, 0, sizeof(struct sClass*));
memset(&hash_150, 0, sizeof(unsigned int));
memset(&n_151, 0, sizeof(int));
memset(&default_value_152, 0, sizeof(struct sClass*));
                    # 1312 "/usr/local/include/neo-c.h"
                    size_138=self->size*10;
                    # 1313 "/usr/local/include/neo-c.h"
                    keys_139=(char**)come_increment_ref_count(((char**)(right_value134=(char**)come_calloc(1, sizeof(char*)*(1*(size_138)), "/usr/local/include/neo-c.h", 1313, "char*%"))));
                    right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1314 "/usr/local/include/neo-c.h"
                    items_140=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value135=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_138)), "/usr/local/include/neo-c.h", 1314, "sClass*%"))));
                    come_call_finalizer3(right_value135,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                    # 1315 "/usr/local/include/neo-c.h"
                    item_existance_141=(_Bool*)come_increment_ref_count(((_Bool*)(right_value136=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_138)), "/usr/local/include/neo-c.h", 1315, "bool"))));
                    right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1317 "/usr/local/include/neo-c.h"
                    len_142=0;
                    # 1352 "/usr/local/include/neo-c.h"
                    for(                    it_145=map$2charphsClassph_begin(self);                    !map$2charphsClassph_end(self);                    it_145=map$2charphsClassph_next(self)                    ){
                        # 1320 "/usr/local/include/neo-c.h"
                        # 1321 "/usr/local/include/neo-c.h"
                        memset(&default_value_148,0,sizeof(struct sClass*));
                        # 1322 "/usr/local/include/neo-c.h"
                        it2_149=map$2charphsClassph_at(self,it_145,default_value_148);
                        # 1323 "/usr/local/include/neo-c.h"
                        hash_150=string_get_hash_key(it_145)%size_138;
                        # 1324 "/usr/local/include/neo-c.h"
                        n_151=hash_150;
                        # 1350 "/usr/local/include/neo-c.h"
                        while(_while_condtional26=(_Bool)1,                        _while_condtional26) {
                            # 1349 "/usr/local/include/neo-c.h"
                            # 1327 "/usr/local/include/neo-c.h"
                            if(_if_conditional185=item_existance_141[n_151],                            _if_conditional185) {
                                # 1329 "/usr/local/include/neo-c.h"
                                n_151++;
                                # 1339 "/usr/local/include/neo-c.h"
                                # 1331 "/usr/local/include/neo-c.h"
                                if(_if_conditional186=n_151>=size_138,                                _if_conditional186) {
                                    # 1332 "/usr/local/include/neo-c.h"
                                    n_151=0;
                                }
                                else {
                                    # 1339 "/usr/local/include/neo-c.h"
                                    # 1334 "/usr/local/include/neo-c.h"
                                    if(_if_conditional187=n_151==hash_150,                                    _if_conditional187) {
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
                                item_existance_141[n_151]=(_Bool)1;
                                # 1342 "/usr/local/include/neo-c.h"
                                keys_139[n_151]=it_145;
                                # 1343 "/usr/local/include/neo-c.h"
                                # 1344 "/usr/local/include/neo-c.h"
                                items_140[n_151]=map$2charphsClassph_at(self,it_145,default_value_152);
                                # 1346 "/usr/local/include/neo-c.h"
                                len_142++;
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
                    self->keys=keys_139;
                    # 1357 "/usr/local/include/neo-c.h"
                    self->items=items_140;
                    # 1358 "/usr/local/include/neo-c.h"
                    self->item_existance=item_existance_141;
                    # 1360 "/usr/local/include/neo-c.h"
                    self->size=size_138;
                    # 1361 "/usr/local/include/neo-c.h"
                    self->len=len_142;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional181;
char* result_143;
char* __result111__;
_Bool _if_conditional182;
char* __result112__;
char* result_144;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_143, 0, sizeof(char*));
memset(&result_144, 0, sizeof(char*));
                        # 1279 "/usr/local/include/neo-c.h"
                        # 1274 "/usr/local/include/neo-c.h"
                        if(_if_conditional181=self==((void*)0),                        _if_conditional181) {
                            # 1275 "/usr/local/include/neo-c.h"
                            # 1276 "/usr/local/include/neo-c.h"
                            memset(&result_143,0,sizeof(char*));
                            # 1277 "/usr/local/include/neo-c.h"
                            __result111__ = __result_obj__ = result_143;
                            return __result111__;
                        }
                        # 1279 "/usr/local/include/neo-c.h"
                        self->key_list->it=self->key_list->head;
                        # 1285 "/usr/local/include/neo-c.h"
                        # 1281 "/usr/local/include/neo-c.h"
                        if(self->key_list->it) {
                            # 1282 "/usr/local/include/neo-c.h"
                            __result112__ = __result_obj__ = self->key_list->it->item;
                            return __result112__;
                        }
                        # 1285 "/usr/local/include/neo-c.h"
                        # 1286 "/usr/local/include/neo-c.h"
                        memset(&result_144,0,sizeof(char*));
                        # 1287 "/usr/local/include/neo-c.h"
                        __result113__ = __result_obj__ = result_144;
                        return __result113__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result114__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1308 "/usr/local/include/neo-c.h"
                        __result114__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result114__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional183;
char* result_146;
char* __result115__;
_Bool _if_conditional184;
char* __result116__;
char* result_147;
char* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_146, 0, sizeof(char*));
memset(&result_147, 0, sizeof(char*));
                        # 1296 "/usr/local/include/neo-c.h"
                        # 1291 "/usr/local/include/neo-c.h"
                        if(_if_conditional183=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional183) {
                            # 1292 "/usr/local/include/neo-c.h"
                            # 1293 "/usr/local/include/neo-c.h"
                            memset(&result_146,0,sizeof(char*));
                            # 1294 "/usr/local/include/neo-c.h"
                            __result115__ = __result_obj__ = result_146;
                            return __result115__;
                        }
                        # 1296 "/usr/local/include/neo-c.h"
                        self->key_list->it=self->key_list->it->next;
                        # 1302 "/usr/local/include/neo-c.h"
                        # 1298 "/usr/local/include/neo-c.h"
                        if(self->key_list->it) {
                            # 1299 "/usr/local/include/neo-c.h"
                            __result116__ = __result_obj__ = self->key_list->it->item;
                            return __result116__;
                        }
                        # 1302 "/usr/local/include/neo-c.h"
                        # 1303 "/usr/local/include/neo-c.h"
                        memset(&result_147,0,sizeof(char*));
                        # 1304 "/usr/local/include/neo-c.h"
                        __result117__ = __result_obj__ = result_147;
                        return __result117__;
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional198;
struct sClass* __result119__;
void* right_value138;
struct sClass* result_157;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool _if_conditional201;
_Bool _if_conditional202;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool _if_conditional205;
_Bool _if_conditional206;
_Bool _if_conditional207;
void* right_value139;
char* __dec_obj38;
_Bool _if_conditional208;
_Bool _if_conditional209;
_Bool _if_conditional210;
void* right_value149;
struct list$1tuple2$2charphsTypephph* __dec_obj44;
_Bool _if_conditional225;
_Bool _if_conditional226;
_Bool _if_conditional227;
void* right_value150;
char* __dec_obj45;
_Bool _if_conditional228;
_Bool _if_conditional229;
void* right_value151;
char* __dec_obj46;
struct sClass* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value138 = (void*)0;
memset(&result_157, 0, sizeof(struct sClass*));
right_value139 = (void*)0;
right_value149 = (void*)0;
right_value150 = (void*)0;
right_value151 = (void*)0;
            # 3 "sClass_clone"
            # 2 "sClass_clone"
            if(_if_conditional198=self==(void*)0,            _if_conditional198) {
                # 2 "sClass_clone"
                __result119__ = __result_obj__ = (void*)0;
                return __result119__;
            }
            # 3 "sClass_clone"
            result_157=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value138=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "sClass"))));
            come_call_finalizer3(right_value138,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            # 5 "sClass_clone"
            # 4 "sClass_clone"
            if(_if_conditional199=self!=((void*)0),            _if_conditional199) {
                # 4 "sClass_clone"
                result_157->mStruct=self->mStruct;
            }
            # 6 "sClass_clone"
            # 5 "sClass_clone"
            if(_if_conditional200=self!=((void*)0),            _if_conditional200) {
                # 5 "sClass_clone"
                result_157->mFloat=self->mFloat;
            }
            # 7 "sClass_clone"
            # 6 "sClass_clone"
            if(_if_conditional201=self!=((void*)0),            _if_conditional201) {
                # 6 "sClass_clone"
                result_157->mUnion=self->mUnion;
            }
            # 8 "sClass_clone"
            # 7 "sClass_clone"
            if(_if_conditional202=self!=((void*)0),            _if_conditional202) {
                # 7 "sClass_clone"
                result_157->mGenerics=self->mGenerics;
            }
            # 9 "sClass_clone"
            # 8 "sClass_clone"
            if(_if_conditional203=self!=((void*)0),            _if_conditional203) {
                # 8 "sClass_clone"
                result_157->mMethodGenerics=self->mMethodGenerics;
            }
            # 10 "sClass_clone"
            # 9 "sClass_clone"
            if(_if_conditional204=self!=((void*)0),            _if_conditional204) {
                # 9 "sClass_clone"
                result_157->mEnum=self->mEnum;
            }
            # 11 "sClass_clone"
            # 10 "sClass_clone"
            if(_if_conditional205=self!=((void*)0),            _if_conditional205) {
                # 10 "sClass_clone"
                result_157->mProtocol=self->mProtocol;
            }
            # 12 "sClass_clone"
            # 11 "sClass_clone"
            if(_if_conditional206=self!=((void*)0),            _if_conditional206) {
                # 11 "sClass_clone"
                result_157->mNumber=self->mNumber;
            }
            # 13 "sClass_clone"
            # 12 "sClass_clone"
            if(_if_conditional207=self!=((void*)0)&&self->mName!=((void*)0),            _if_conditional207) {
                # 12 "sClass_clone"
                __dec_obj38=result_157->mName;
                result_157->mName=(char*)come_increment_ref_count(((char*)(right_value139=string_clone(self->mName))));
                __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 14 "sClass_clone"
            # 13 "sClass_clone"
            if(_if_conditional208=self!=((void*)0),            _if_conditional208) {
                # 13 "sClass_clone"
                result_157->mGenericsNum=self->mGenericsNum;
            }
            # 15 "sClass_clone"
            # 14 "sClass_clone"
            if(_if_conditional209=self!=((void*)0),            _if_conditional209) {
                # 14 "sClass_clone"
                result_157->mMethodGenericsNum=self->mMethodGenericsNum;
            }
            # 16 "sClass_clone"
            # 15 "sClass_clone"
            if(_if_conditional210=self!=((void*)0)&&self->mFields!=((void*)0),            _if_conditional210) {
                # 15 "sClass_clone"
                __dec_obj44=result_157->mFields;
                result_157->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value149=list$1tuple2$2charphsTypephphp_clone(self->mFields))));
                come_call_finalizer3(__dec_obj44,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value149,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 17 "sClass_clone"
            # 16 "sClass_clone"
            if(_if_conditional225=self!=((void*)0),            _if_conditional225) {
                # 16 "sClass_clone"
                result_157->mOutputed=self->mOutputed;
            }
            # 18 "sClass_clone"
            # 17 "sClass_clone"
            if(_if_conditional226=self!=((void*)0),            _if_conditional226) {
                # 17 "sClass_clone"
                result_157->mOutputed2=self->mOutputed2;
            }
            # 19 "sClass_clone"
            # 18 "sClass_clone"
            if(_if_conditional227=self!=((void*)0)&&self->mDeclareSName!=((void*)0),            _if_conditional227) {
                # 18 "sClass_clone"
                __dec_obj45=result_157->mDeclareSName;
                result_157->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value150=string_clone(self->mDeclareSName))));
                __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 20 "sClass_clone"
            # 19 "sClass_clone"
            if(_if_conditional228=self!=((void*)0),            _if_conditional228) {
                # 19 "sClass_clone"
                result_157->mNobodyStruct=self->mNobodyStruct;
            }
            # 21 "sClass_clone"
            # 20 "sClass_clone"
            if(_if_conditional229=self!=((void*)0)&&self->mParentClassName!=((void*)0),            _if_conditional229) {
                # 20 "sClass_clone"
                __dec_obj46=result_157->mParentClassName;
                result_157->mParentClassName=(char*)come_increment_ref_count(((char*)(right_value151=string_clone(self->mParentClassName))));
                __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 21 "sClass_clone"
            __result126__ = __result_obj__ = result_157;
            come_call_finalizer3(result_157,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result126__;
            come_call_finalizer3(result_157,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional211;
struct list$1tuple2$2charphsTypephph* __result120__;
void* right_value140;
void* right_value141;
struct list$1tuple2$2charphsTypephph* result_158;
struct list_item$1tuple2$2charphsTypephph* it_159;
_Bool _while_condtional28;
void* right_value148;
struct list$1tuple2$2charphsTypephph* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
right_value140 = (void*)0;
right_value141 = (void*)0;
memset(&result_158, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_159, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value148 = (void*)0;
                    # 133 "/usr/local/include/neo-c.h"
                    # 130 "/usr/local/include/neo-c.h"
                    if(_if_conditional211=self==((void*)0),                    _if_conditional211) {
                        # 131 "/usr/local/include/neo-c.h"
                        __result120__ = __result_obj__ = ((void*)0);
                        return __result120__;
                    }
                    # 133 "/usr/local/include/neo-c.h"
                    result_158=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value141=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value140=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "/usr/local/include/neo-c.h", 133, "list$1tuple2$2charphsTypephph"))))))));
                    come_call_finalizer3(right_value140,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value141,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 135 "/usr/local/include/neo-c.h"
                    it_159=self->head;
                    # 142 "/usr/local/include/neo-c.h"
                    while(_while_condtional28=it_159!=((void*)0),                    _while_condtional28) {
                        # 137 "/usr/local/include/neo-c.h"
                        list$1tuple2$2charphsTypephph_add(result_158,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value148=tuple2$2charphsTypephp_clone(it_159->item)))));
                        come_call_finalizer3(right_value148,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 139 "/usr/local/include/neo-c.h"
                        it_159=it_159->next;
                    }
                    # 142 "/usr/local/include/neo-c.h"
                    __result125__ = __result_obj__ = result_158;
                    come_call_finalizer3(result_158,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result125__;
                    come_call_finalizer3(result_158,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsTypephph* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 95 "/usr/local/include/neo-c.h"
                        self->head=((void*)0);
                        # 96 "/usr/local/include/neo-c.h"
                        self->tail=((void*)0);
                        # 97 "/usr/local/include/neo-c.h"
                        self->len=0;
                        # 99 "/usr/local/include/neo-c.h"
                        __result121__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result121__;
                        come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional212;
void* right_value142;
struct list_item$1tuple2$2charphsTypephph* litem_160;
struct tuple2$2charphsTypeph* __dec_obj39;
_Bool _if_conditional215;
void* right_value143;
struct list_item$1tuple2$2charphsTypephph* litem_161;
struct tuple2$2charphsTypeph* __dec_obj40;
void* right_value144;
struct list_item$1tuple2$2charphsTypephph* litem_162;
struct tuple2$2charphsTypeph* __dec_obj41;
struct list$1tuple2$2charphsTypephph* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
right_value142 = (void*)0;
memset(&litem_160, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value143 = (void*)0;
memset(&litem_161, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value144 = (void*)0;
memset(&litem_162, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                            # 177 "/usr/local/include/neo-c.h"
                            # 146 "/usr/local/include/neo-c.h"
                            if(_if_conditional212=self->len==0,                            _if_conditional212) {
                                # 147 "/usr/local/include/neo-c.h"
                                litem_160=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value142=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/neo-c.h", 147, "list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer3(right_value142,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 149 "/usr/local/include/neo-c.h"
                                litem_160->prev=((void*)0);
                                # 150 "/usr/local/include/neo-c.h"
                                litem_160->next=((void*)0);
                                # 151 "/usr/local/include/neo-c.h"
                                __dec_obj39=litem_160->item;
                                litem_160->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj39,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                # 153 "/usr/local/include/neo-c.h"
                                self->tail=litem_160;
                                # 154 "/usr/local/include/neo-c.h"
                                self->head=litem_160;
                            }
                            else {
                                # 177 "/usr/local/include/neo-c.h"
                                # 156 "/usr/local/include/neo-c.h"
                                if(_if_conditional215=self->len==1,                                _if_conditional215) {
                                    # 157 "/usr/local/include/neo-c.h"
                                    litem_161=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value143=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/neo-c.h", 157, "list_item$1tuple2$2charphsTypephph"))));
                                    come_call_finalizer3(right_value143,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 159 "/usr/local/include/neo-c.h"
                                    litem_161->prev=self->head;
                                    # 160 "/usr/local/include/neo-c.h"
                                    litem_161->next=((void*)0);
                                    # 161 "/usr/local/include/neo-c.h"
                                    __dec_obj40=litem_161->item;
                                    litem_161->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj40,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    # 163 "/usr/local/include/neo-c.h"
                                    self->tail=litem_161;
                                    # 164 "/usr/local/include/neo-c.h"
                                    self->head->next=litem_161;
                                }
                                else {
                                    # 167 "/usr/local/include/neo-c.h"
                                    litem_162=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value144=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/neo-c.h", 167, "list_item$1tuple2$2charphsTypephph"))));
                                    come_call_finalizer3(right_value144,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 169 "/usr/local/include/neo-c.h"
                                    litem_162->prev=self->tail;
                                    # 170 "/usr/local/include/neo-c.h"
                                    litem_162->next=((void*)0);
                                    # 171 "/usr/local/include/neo-c.h"
                                    __dec_obj41=litem_162->item;
                                    litem_162->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj41,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    # 173 "/usr/local/include/neo-c.h"
                                    self->tail->next=litem_162;
                                    # 174 "/usr/local/include/neo-c.h"
                                    self->tail=litem_162;
                                }
                            }
                            # 177 "/usr/local/include/neo-c.h"
                            self->len++;
                            # 179 "/usr/local/include/neo-c.h"
                            __result122__ = __result_obj__ = self;
                            come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                            return __result122__;
                            come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional218;
_Bool _if_conditional219;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "tuple2$2charphsTypephp_finalize"
                                        # 0 "tuple2$2charphsTypephp_finalize"
                                        if(_if_conditional218=self!=((void*)0)&&self->v1!=((void*)0),                                        _if_conditional218) {
                                            # 0 "tuple2$2charphsTypephp_finalize"
                                            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        # 2 "tuple2$2charphsTypephp_finalize"
                                        # 1 "tuple2$2charphsTypephp_finalize"
                                        if(_if_conditional219=self!=((void*)0)&&self->v2!=((void*)0),                                        _if_conditional219) {
                                            # 1 "tuple2$2charphsTypephp_finalize"
                                            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional220;
struct tuple2$2charphsTypeph* __result123__;
void* right_value145;
struct tuple2$2charphsTypeph* result_163;
_Bool _if_conditional223;
void* right_value146;
char* __dec_obj42;
_Bool _if_conditional224;
void* right_value147;
struct sType* __dec_obj43;
struct tuple2$2charphsTypeph* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
right_value145 = (void*)0;
memset(&result_163, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value146 = (void*)0;
right_value147 = (void*)0;
                            # 3 "tuple2$2charphsTypephp_clone"
                            # 2 "tuple2$2charphsTypephp_clone"
                            if(_if_conditional220=self==(void*)0,                            _if_conditional220) {
                                # 2 "tuple2$2charphsTypephp_clone"
                                __result123__ = __result_obj__ = (void*)0;
                                return __result123__;
                            }
                            # 3 "tuple2$2charphsTypephp_clone"
                            result_163=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value145=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"))));
                            come_call_finalizer3(right_value145,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                            # 5 "tuple2$2charphsTypephp_clone"
                            # 4 "tuple2$2charphsTypephp_clone"
                            if(_if_conditional223=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional223) {
                                # 4 "tuple2$2charphsTypephp_clone"
                                __dec_obj42=result_163->v1;
                                result_163->v1=(char*)come_increment_ref_count(((char*)(right_value146=string_clone(self->v1))));
                                __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 6 "tuple2$2charphsTypephp_clone"
                            # 5 "tuple2$2charphsTypephp_clone"
                            if(_if_conditional224=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional224) {
                                # 5 "tuple2$2charphsTypephp_clone"
                                __dec_obj43=result_163->v2;
                                result_163->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value147=sType_clone(self->v2))));
                                come_call_finalizer3(__dec_obj43,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value147,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            }
                            # 6 "tuple2$2charphsTypephp_clone"
                            __result124__ = __result_obj__ = result_163;
                            come_call_finalizer3(result_163,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
                            return __result124__;
                            come_call_finalizer3(result_163,tuple2$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional221;
_Bool _if_conditional222;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "tuple2$2charphsTypeph_finalize"
                                # 0 "tuple2$2charphsTypeph_finalize"
                                if(_if_conditional221=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional221) {
                                    # 0 "tuple2$2charphsTypeph_finalize"
                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "tuple2$2charphsTypeph_finalize"
                                # 1 "tuple2$2charphsTypeph_finalize"
                                if(_if_conditional222=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional222) {
                                    # 1 "tuple2$2charphsTypeph_finalize"
                                    come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_164;
_Bool _while_condtional29;
struct list_item$1tuple2$2charphsTypephph* prev_it_165;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_164, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_165, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                    # 114 "/usr/local/include/neo-c.h"
                    it_164=self->head;
                    # 120 "/usr/local/include/neo-c.h"
                    while(_while_condtional29=it_164!=((void*)0),                    _while_condtional29) {
                        # 116 "/usr/local/include/neo-c.h"
                        prev_it_165=it_164;
                        # 117 "/usr/local/include/neo-c.h"
                        it_164=it_164->next;
                        # 118 "/usr/local/include/neo-c.h"
                        come_call_finalizer3(prev_it_165,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_reset(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_167;
_Bool _while_condtional30;
struct list_item$1tuple2$2charphsTypephph* prev_it_168;
struct list$1tuple2$2charphsTypephph* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_167, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_168, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
        # 420 "/usr/local/include/neo-c.h"
        it_167=self->head;
        # 427 "/usr/local/include/neo-c.h"
        while(_while_condtional30=it_167!=((void*)0),        _while_condtional30) {
            # 422 "/usr/local/include/neo-c.h"
            prev_it_168=it_167;
            # 423 "/usr/local/include/neo-c.h"
            it_167=it_167->next;
            # 424 "/usr/local/include/neo-c.h"
            come_call_finalizer3(prev_it_168,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 427 "/usr/local/include/neo-c.h"
        self->head=((void*)0);
        # 428 "/usr/local/include/neo-c.h"
        self->tail=((void*)0);
        # 430 "/usr/local/include/neo-c.h"
        self->len=0;
        # 432 "/usr/local/include/neo-c.h"
        __result127__ = __result_obj__ = self;
        return __result127__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional230;
_Bool _if_conditional231;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "tuple3$3sTypephcharphboolp_finalize"
            # 0 "tuple3$3sTypephcharphboolp_finalize"
            if(_if_conditional230=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional230) {
                # 0 "tuple3$3sTypephcharphboolp_finalize"
                come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 2 "tuple3$3sTypephcharphboolp_finalize"
            # 1 "tuple3$3sTypephcharphboolp_finalize"
            if(_if_conditional231=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional231) {
                # 1 "tuple3$3sTypephcharphboolp_finalize"
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional234;
void* right_value157;
struct list_item$1tuple2$2charphsTypephph* litem_172;
struct tuple2$2charphsTypeph* __dec_obj48;
_Bool _if_conditional235;
void* right_value158;
struct list_item$1tuple2$2charphsTypephph* litem_173;
struct tuple2$2charphsTypeph* __dec_obj49;
void* right_value159;
struct list_item$1tuple2$2charphsTypephph* litem_174;
struct tuple2$2charphsTypeph* __dec_obj50;
struct list$1tuple2$2charphsTypephph* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
right_value157 = (void*)0;
memset(&litem_172, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value158 = (void*)0;
memset(&litem_173, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value159 = (void*)0;
memset(&litem_174, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                # 247 "/usr/local/include/neo-c.h"
                # 216 "/usr/local/include/neo-c.h"
                if(_if_conditional234=self->len==0,                _if_conditional234) {
                    # 217 "/usr/local/include/neo-c.h"
                    litem_172=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value157=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/neo-c.h", 217, "list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer3(right_value157,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "/usr/local/include/neo-c.h"
                    litem_172->prev=((void*)0);
                    # 220 "/usr/local/include/neo-c.h"
                    litem_172->next=((void*)0);
                    # 221 "/usr/local/include/neo-c.h"
                    __dec_obj48=litem_172->item;
                    litem_172->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj48,tuple2$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
                    # 223 "/usr/local/include/neo-c.h"
                    self->tail=litem_172;
                    # 224 "/usr/local/include/neo-c.h"
                    self->head=litem_172;
                }
                else {
                    # 247 "/usr/local/include/neo-c.h"
                    # 226 "/usr/local/include/neo-c.h"
                    if(_if_conditional235=self->len==1,                    _if_conditional235) {
                        # 227 "/usr/local/include/neo-c.h"
                        litem_173=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value158=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/neo-c.h", 227, "list_item$1tuple2$2charphsTypephph"))));
                        come_call_finalizer3(right_value158,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "/usr/local/include/neo-c.h"
                        litem_173->prev=self->head;
                        # 230 "/usr/local/include/neo-c.h"
                        litem_173->next=((void*)0);
                        # 231 "/usr/local/include/neo-c.h"
                        __dec_obj49=litem_173->item;
                        litem_173->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj49,tuple2$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
                        # 233 "/usr/local/include/neo-c.h"
                        self->tail=litem_173;
                        # 234 "/usr/local/include/neo-c.h"
                        self->head->next=litem_173;
                    }
                    else {
                        # 237 "/usr/local/include/neo-c.h"
                        litem_174=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value159=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/neo-c.h", 237, "list_item$1tuple2$2charphsTypephph"))));
                        come_call_finalizer3(right_value159,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "/usr/local/include/neo-c.h"
                        litem_174->prev=self->tail;
                        # 240 "/usr/local/include/neo-c.h"
                        litem_174->next=((void*)0);
                        # 241 "/usr/local/include/neo-c.h"
                        __dec_obj50=litem_174->item;
                        litem_174->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj50,tuple2$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
                        # 243 "/usr/local/include/neo-c.h"
                        self->tail->next=litem_174;
                        # 244 "/usr/local/include/neo-c.h"
                        self->tail=litem_174;
                    }
                }
                # 247 "/usr/local/include/neo-c.h"
                self->len++;
                # 249 "/usr/local/include/neo-c.h"
                __result128__ = __result_obj__ = self;
                come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result128__;
                come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
char* __dec_obj51;
struct sType* __dec_obj52;
struct tuple2$2charphsTypeph* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
                # 1738 "/usr/local/include/neo-c.h"
                __dec_obj51=self->v1;
                self->v1=(char*)come_increment_ref_count(v1);
                __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
                # 1739 "/usr/local/include/neo-c.h"
                __dec_obj52=self->v2;
                self->v2=(struct sType*)come_increment_ref_count(v2);
                come_call_finalizer3(__dec_obj52,sType_finalize, 0, 0, 0, 0, (void*)0);
                # 1741 "/usr/local/include/neo-c.h"
                __result129__ = __result_obj__ = self;
                come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer3(v2,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result129__;
                come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer3(v2,sType_finalize, 0, 0, 1, 0, (void*)0);
}

struct sNode* top_level_v97(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional244;
char* source_head_176;
void* right_value168;
char* type_name_177;
_Bool output_178;
_Bool _if_conditional245;
void* right_value169;
void* right_value170;
void* right_value171;
void* right_value172;
void* right_value173;
void* right_value174;
void* right_value175;
void* right_value176;
void* right_value177;
void* right_value178;
void* right_value179;
struct sType* type_179;
int __exception_result_var_b3;
_Bool _while_condtional32;
void* right_value180;
struct tuple3$3sTypephcharphbool* multiple_assign_var3;
struct sType* type2_180;
char* name_181;
_Bool err_182;
_Bool _if_conditional246;
int __exception_result_var_b4;
void* right_value181;
void* right_value182;
_Bool _if_conditional247;
char* source_tail_183;
void* right_value183;
void* right_value184;
struct buffer* header_184;
void* right_value185;
void* right_value186;
void* right_value187;
struct sNode* _inf_value2;
struct sUnionNode* _inf_obj_value2;
void* right_value191;
struct sNode* __result135__;
void* right_value192;
struct sNode* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&source_head_176, 0, sizeof(char*));
right_value168 = (void*)0;
memset(&type_name_177, 0, sizeof(char*));
memset(&output_178, 0, sizeof(_Bool));
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value171 = (void*)0;
right_value172 = (void*)0;
right_value173 = (void*)0;
right_value174 = (void*)0;
right_value175 = (void*)0;
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
memset(&type_179, 0, sizeof(struct sType*));
right_value180 = (void*)0;
memset(&type2_180, 0, sizeof(struct sType*));
memset(&name_181, 0, sizeof(char*));
memset(&err_182, 0, sizeof(_Bool));
memset(&type2_180, 0, sizeof(struct sType*));
memset(&name_181, 0, sizeof(char*));
memset(&err_182, 0, sizeof(_Bool));
right_value181 = (void*)0;
right_value182 = (void*)0;
memset(&source_tail_183, 0, sizeof(char*));
right_value183 = (void*)0;
right_value184 = (void*)0;
memset(&header_184, 0, sizeof(struct buffer*));
right_value185 = (void*)0;
right_value186 = (void*)0;
right_value187 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
    # 162 "15union.c"
    # 112 "15union.c"
    if(_if_conditional244=charp_operator_equals(buf,"union"),    _if_conditional244) {
        # 113 "15union.c"
        source_head_176=info->p;
        # 115 "15union.c"
        type_name_177=(char*)come_increment_ref_count(((char*)(right_value168=parse_word(info))));
        right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 116 "15union.c"
        output_178=(_Bool)1;
        # 126 "15union.c"
        # 118 "15union.c"
        if(_if_conditional245=map$2charphsClassph_at(info->classes,type_name_177,((void*)0))==((void*)0),        _if_conditional245) {
            # 119 "15union.c"
            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_177),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value171=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value169=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "15union.c", 119, "sClass")))),((char*)(right_value170=__builtin_string(type_name_177))),(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
            come_call_finalizer3(right_value169,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value171,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        }
        else {
            # 122 "15union.c"
            output_178=(_Bool)0;
            # 123 "15union.c"
            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_177),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value174=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value172=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "15union.c", 123, "sClass")))),((char*)(right_value173=__builtin_string(type_name_177))),(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
            come_call_finalizer3(right_value172,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value174,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 126 "15union.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_177),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value177=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value175=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "15union.c", 126, "sClass")))),((char*)(right_value176=__builtin_string(type_name_177))),(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
        come_call_finalizer3(right_value175,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value177,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        # 128 "15union.c"
        type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value179=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value178=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "15union.c", 128, "sType")))),type_name_177,(_Bool)0,info))));
        come_call_finalizer3(right_value178,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value179,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 130 "15union.c"
        (come_push_stackframe("15union.c", 130, 2),__exception_result_var_b3=expected_next_character(123,info), come_pop_stackframe(), __exception_result_var_b3);
        # 132 "15union.c"
        list$1tuple2$2charphsTypephph_reset(type_179->mClass->mFields);
        # 151 "15union.c"
        while(_while_condtional32=(_Bool)1,        _while_condtional32) {
            # 135 "15union.c"
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(right_value180=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type2_180=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            name_181=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_182=multiple_assign_var3->v3;
            come_call_finalizer3(right_value180,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            # 140 "15union.c"
            # 136 "15union.c"
            if(_if_conditional246=!err_182,            _if_conditional246) {
                # 137 "15union.c"
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                # 138 "15union.c"
                exit(2);
            }
            # 140 "15union.c"
            (come_push_stackframe("15union.c", 140, 3),__exception_result_var_b4=expected_next_character(59,info), come_pop_stackframe(), __exception_result_var_b4);
            # 142 "15union.c"
            list$1tuple2$2charphsTypephph_push_back(type_179->mClass->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value182=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value181=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "15union.c", 142, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_181),(struct sType*)come_increment_ref_count(type2_180))))));
            come_call_finalizer3(right_value181,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value182,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            # 149 "15union.c"
            # 144 "15union.c"
            if(_if_conditional247=*info->p==125,            _if_conditional247) {
                # 145 "15union.c"
                info->p++;
                # 146 "15union.c"
                skip_spaces_and_lf(info);
                # 147 "15union.c"
                come_call_finalizer3(type2_180,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_181 = come_decrement_ref_count2(name_181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            come_call_finalizer3(type2_180,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_181 = come_decrement_ref_count2(name_181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 151 "15union.c"
        source_tail_183=info->p;
        # 153 "15union.c"
        header_184=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value184=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value183=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "15union.c", 153, "buffer"))))))));
        come_call_finalizer3(right_value183,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value184,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 154 "15union.c"
        buffer_append_str(header_184,"union ");
        # 155 "15union.c"
        buffer_append(header_184,source_head_176,source_tail_183-source_head_176);
        # 157 "15union.c"
        add_come_code_at_come_header(info,"%s;\n",((char*)(right_value185=buffer_to_string(header_184))));
        right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 159 "15union.c"
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "15union.c", 159, "struct sNode");
        _inf_obj_value2=come_increment_ref_count(((struct sUnionNode*)(right_value187=sUnionNode_initialize((struct sUnionNode*)come_increment_ref_count(((struct sUnionNode*)(right_value186=(struct sUnionNode*)come_calloc(1, sizeof(struct sUnionNode)*(1), "15union.c", 159, "sUnionNode")))),(struct sType*)come_increment_ref_count(type_179),output_178,info))));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=(void*)sUnionNode_finalize;
        _inf_value2->clone=(void*)sUnionNode_clone;
        _inf_value2->compile=(void*)sUnionNode_compile;
        _inf_value2->sline=(void*)sNodeBase_sline;
        _inf_value2->sname=(void*)sNodeBase_sname;
        _inf_value2->terminated=(void*)sUnionNode_terminated;
        _inf_value2->kind=(void*)sUnionNode_kind;
        __result135__ = __result_obj__ = ((struct sNode*)(right_value191=_inf_value2));
        type_name_177 = come_decrement_ref_count2(type_name_177, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_179,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_184,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value186,sUnionNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value187,sUnionNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value191) { right_value191 = come_decrement_ref_count2(right_value191, ((struct sNode*)right_value191)->finalize, ((struct sNode*)right_value191)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result135__;
        type_name_177 = come_decrement_ref_count2(type_name_177, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_179,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_184,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 162 "15union.c"
    __result136__ = __result_obj__ = ((struct sNode*)(right_value192=top_level_v96(buf,head,head_sline,info)));
    if(right_value192) { right_value192 = come_decrement_ref_count2(right_value192, ((struct sNode*)right_value192)->finalize, ((struct sNode*)right_value192)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result136__;
}

static void sUnionNode_finalize(struct sUnionNode* self){
void* __result_obj__;
_Bool _if_conditional248;
_Bool _if_conditional249;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sUnionNode_finalize"
            # 0 "sUnionNode_finalize"
            if(_if_conditional248=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional248) {
                # 0 "sUnionNode_finalize"
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 2 "sUnionNode_finalize"
            # 1 "sUnionNode_finalize"
            if(_if_conditional249=self!=((void*)0)&&self->mType!=((void*)0),            _if_conditional249) {
                # 1 "sUnionNode_finalize"
                come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct sUnionNode* sUnionNode_clone(struct sUnionNode* self){
void* __result_obj__;
_Bool _if_conditional250;
struct sUnionNode* __result133__;
void* right_value188;
struct sUnionNode* result_185;
_Bool _if_conditional251;
_Bool _if_conditional252;
void* right_value189;
char* __dec_obj55;
_Bool _if_conditional253;
void* right_value190;
struct sType* __dec_obj56;
_Bool _if_conditional254;
struct sUnionNode* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
right_value188 = (void*)0;
memset(&result_185, 0, sizeof(struct sUnionNode*));
right_value189 = (void*)0;
right_value190 = (void*)0;
            # 3 "sUnionNode_clone"
            # 2 "sUnionNode_clone"
            if(_if_conditional250=self==(void*)0,            _if_conditional250) {
                # 2 "sUnionNode_clone"
                __result133__ = __result_obj__ = (void*)0;
                return __result133__;
            }
            # 3 "sUnionNode_clone"
            result_185=(struct sUnionNode*)come_increment_ref_count(((struct sUnionNode*)(right_value188=(struct sUnionNode*)come_calloc(1, sizeof(struct sUnionNode)*(1), "sUnionNode_clone", 3, "sUnionNode"))));
            come_call_finalizer3(right_value188,sUnionNode_finalize, 0, 1, 0, 0, __result_obj__);
            # 5 "sUnionNode_clone"
            # 4 "sUnionNode_clone"
            if(_if_conditional251=self!=((void*)0),            _if_conditional251) {
                # 4 "sUnionNode_clone"
                result_185->sline=self->sline;
            }
            # 6 "sUnionNode_clone"
            # 5 "sUnionNode_clone"
            if(_if_conditional252=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional252) {
                # 5 "sUnionNode_clone"
                __dec_obj55=result_185->sname;
                result_185->sname=(char*)come_increment_ref_count(((char*)(right_value189=string_clone(self->sname))));
                __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 7 "sUnionNode_clone"
            # 6 "sUnionNode_clone"
            if(_if_conditional253=self!=((void*)0)&&self->mType!=((void*)0),            _if_conditional253) {
                # 6 "sUnionNode_clone"
                __dec_obj56=result_185->mType;
                result_185->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value190=sType_clone(self->mType))));
                come_call_finalizer3(__dec_obj56,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value190,sType_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 8 "sUnionNode_clone"
            # 7 "sUnionNode_clone"
            if(_if_conditional254=self!=((void*)0),            _if_conditional254) {
                # 7 "sUnionNode_clone"
                result_185->mOutput=self->mOutput;
            }
            # 8 "sUnionNode_clone"
            __result134__ = __result_obj__ = result_185;
            come_call_finalizer3(result_185,sUnionNode_finalize, 0, 0, 1, 0, (void*)0);
            return __result134__;
            come_call_finalizer3(result_185,sUnionNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v15(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool define_struct_186;
char* p_187;
int sline_188;
_Bool _if_conditional255;
void* right_value193;
char* type_name_189;
_Bool _if_conditional256;
void* right_value194;
_Bool _if_conditional257;
_Bool _if_conditional258;
void* right_value195;
char* type_name_190;
void* right_value196;
struct sNode* __result137__;
void* right_value197;
struct sNode* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&define_struct_186, 0, sizeof(_Bool));
memset(&p_187, 0, sizeof(char*));
memset(&sline_188, 0, sizeof(int));
right_value193 = (void*)0;
memset(&type_name_189, 0, sizeof(char*));
right_value194 = (void*)0;
right_value195 = (void*)0;
memset(&type_name_190, 0, sizeof(char*));
right_value196 = (void*)0;
right_value197 = (void*)0;
    # 168 "15union.c"
    define_struct_186=(_Bool)0;
    # 189 "15union.c"
    {
        # 170 "15union.c"
        p_187=info->p;
        # 171 "15union.c"
        sline_188=info->sline;
        # 185 "15union.c"
        # 173 "15union.c"
        if(_if_conditional255=charp_operator_equals(buf,"union"),        _if_conditional255) {
            # 174 "15union.c"
            type_name_189=(char*)come_increment_ref_count(((char*)(right_value193=parse_word(info))));
            right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 183 "15union.c"
            # 176 "15union.c"
            if(_if_conditional256=*info->p==123,            _if_conditional256) {
                # 177 "15union.c"
                ((char*)(right_value194=skip_block(info)));
                right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 182 "15union.c"
                # 179 "15union.c"
                if(_if_conditional257=*info->p==59,                _if_conditional257) {
                    # 180 "15union.c"
                    define_struct_186=(_Bool)1;
                }
            }
            type_name_189 = come_decrement_ref_count2(type_name_189, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 185 "15union.c"
        info->p=p_187;
        # 186 "15union.c"
        info->sline=sline_188;
    }
    # 195 "15union.c"
    # 189 "15union.c"
    if(define_struct_186) {
        # 190 "15union.c"
        type_name_190=(char*)come_increment_ref_count(((char*)(right_value195=parse_word(info))));
        right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 192 "15union.c"
        __result137__ = __result_obj__ = ((struct sNode*)(right_value196=parse_union((char*)come_increment_ref_count(type_name_190),info)));
        type_name_190 = come_decrement_ref_count2(type_name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(right_value196) { right_value196 = come_decrement_ref_count2(right_value196, ((struct sNode*)right_value196)->finalize, ((struct sNode*)right_value196)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result137__;
        type_name_190 = come_decrement_ref_count2(type_name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 195 "15union.c"
    __result138__ = __result_obj__ = ((struct sNode*)(right_value197=string_node_v14(buf,head,head_sline,info)));
    if(right_value197) { right_value197 = come_decrement_ref_count2(right_value197, ((struct sNode*)right_value197)->finalize, ((struct sNode*)right_value197)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result138__;
}

