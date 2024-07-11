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
struct sStoreFieldNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    char* mName;
};
struct sNullCheckNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    _Bool mOnlyNullCecker;
};
struct sNullableNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    _Bool mOnlyNullCecker;
};
struct sRangeCheckNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mBegin;
    struct sNode* mEnd;
};
struct sLoadFieldNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    char* mName;
};
struct sStoreArrayNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
};
struct sLoadArrayNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
    _Bool mBreakGuard;
};
struct sLoadRangeArrayNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
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

struct sNode* string_node_v15(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* parse_union(char* type_name, struct sInfo* info);

struct sNode* top_level_v97(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* parse_enum(char* type_name, struct sInfo* info);

struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v95(char* buf, char* head, int head_sline, struct sInfo* info);

_Bool compiletime_get_exception_value(struct sInfo* info);

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);

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

_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info);

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
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

_Bool sStoreFieldNode_terminated(struct sStoreFieldNode* self);

char* sStoreFieldNode_kind(struct sStoreFieldNode* self);

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info);

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info);

_Bool sNullCheckNode_terminated(struct sNullCheckNode* self);

char* sNullCheckNode_kind(struct sNullCheckNode* self);

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info);

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
struct sNullableNode* sNullableNode_initialize(struct sNullableNode* self, struct sNode* left, struct sInfo* info);

_Bool sNullableNode_terminated(struct sNullableNode* self);

char* sNullableNode_kind(struct sNullableNode* self);

_Bool sNullableNode_compile(struct sNullableNode* self, struct sInfo* info);

static struct CVALUE* CVALUE_clone(struct CVALUE* self);
struct sRangeCheckNode* sRangeCheckNode_initialize(struct sRangeCheckNode* self, struct sNode* left, struct sNode* begin, struct sNode* end, struct sInfo* info);

_Bool sRangeCheckNode_terminated(struct sRangeCheckNode* self);

char* sRangeCheckNode_kind(struct sRangeCheckNode* self);

_Bool sRangeCheckNode_compile(struct sRangeCheckNode* self, struct sInfo* info);

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info);

_Bool sLoadFieldNode_terminated(struct sLoadFieldNode* self);

char* sLoadFieldNode_kind(struct sLoadFieldNode* self);

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info);

static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);

_Bool sStoreArrayNode_terminated(struct sStoreArrayNode* self);

char* sStoreArrayNode_kind(struct sStoreArrayNode* self);

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, _Bool break_guard, struct sInfo* info);

_Bool sLoadArrayNode_terminated(struct sLoadArrayNode* self);

char* sLoadArrayNode_kind(struct sLoadArrayNode* self);

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info);

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);

_Bool sLoadRangeArrayNode_terminated(struct sLoadRangeArrayNode* self);

char* sLoadRangeArrayNode_kind(struct sLoadRangeArrayNode* self);

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info);

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);

struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self);
static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self);
static void sStoreArrayNode_finalize(struct sStoreArrayNode* self);
static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self);
static void sLoadArrayNode_finalize(struct sLoadArrayNode* self);
static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self);
static void sRangeCheckNode_finalize(struct sRangeCheckNode* self);
static struct sRangeCheckNode* sRangeCheckNode_clone(struct sRangeCheckNode* self);
static void sNullableNode_finalize(struct sNullableNode* self);
static struct sNullableNode* sNullableNode_clone(struct sNullableNode* self);
static void sNullCheckNode_finalize(struct sNullCheckNode* self);
static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self);
static void sStoreFieldNode_finalize(struct sStoreFieldNode* self);
static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self);
static void sLoadFieldNode_finalize(struct sLoadFieldNode* self);
static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self);
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










_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info){
void* __result_obj__;
void* right_value114;
struct sType* generics_type_77;
_Bool _if_conditional110;
struct sType* __dec_obj35;
struct sClass* klass_78;
char* class_name_79;
char* fun_name2_80;
struct sFun* operator_fun_81;
_Bool _if_conditional111;
_Bool _if_conditional113;
void* right_value115;
char* none_generics_name_82;
void* right_value116;
struct sType* obj_type_83;
void* right_value117;
char* __dec_obj36;
void* right_value118;
char* fun_name3_84;
struct sGenericsFun* generics_fun_87;
_Bool _if_conditional128;
void* right_value119;
_Bool _if_conditional129;
_Bool __result76__;
void* right_value120;
char* __dec_obj37;
int i_91;
void* right_value121;
char* new_fun_name_92;
_Bool _if_conditional149;
void* right_value122;
char* __dec_obj38;
_Bool _if_conditional150;
_Bool result_93;
_Bool _if_conditional151;
void* right_value123;
struct CVALUE* come_value_94;
char* left_value2_95;
void* right_value124;
void* right_value125;
_Bool _if_conditional156;
void* right_value126;
char* __dec_obj39;
void* right_value127;
char* __dec_obj40;
char* middle_value2_99;
void* right_value128;
void* right_value129;
_Bool _if_conditional157;
void* right_value130;
char* __dec_obj41;
void* right_value131;
char* __dec_obj42;
char* right_value2_100;
void* right_value132;
void* right_value133;
_Bool _if_conditional158;
void* right_value134;
char* __dec_obj43;
void* right_value135;
char* __dec_obj44;
void* right_value136;
void* right_value137;
void* right_value138;
void* right_value139;
void* right_value140;
char* __dec_obj45;
void* right_value141;
struct sType* result_type1_101;
void* right_value142;
struct sType* result_type2_102;
void* right_value143;
struct sType* __dec_obj46;
_Bool _if_conditional159;
void* right_value144;
char* __dec_obj47;
_Bool _if_conditional160;
void* right_value145;
void* right_value146;
char* __dec_obj48;
void* right_value147;
char* __dec_obj49;
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value114 = (void*)0;
memset(&generics_type_77, 0, sizeof(struct sType*));
memset(&klass_78, 0, sizeof(struct sClass*));
memset(&class_name_79, 0, sizeof(char*));
memset(&fun_name2_80, 0, sizeof(char*));
memset(&operator_fun_81, 0, sizeof(struct sFun*));
right_value115 = (void*)0;
memset(&none_generics_name_82, 0, sizeof(char*));
right_value116 = (void*)0;
memset(&obj_type_83, 0, sizeof(struct sType*));
right_value117 = (void*)0;
right_value118 = (void*)0;
memset(&fun_name3_84, 0, sizeof(char*));
memset(&generics_fun_87, 0, sizeof(struct sGenericsFun*));
right_value119 = (void*)0;
right_value120 = (void*)0;
memset(&i_91, 0, sizeof(int));
right_value121 = (void*)0;
memset(&new_fun_name_92, 0, sizeof(char*));
right_value122 = (void*)0;
memset(&result_93, 0, sizeof(_Bool));
right_value123 = (void*)0;
memset(&come_value_94, 0, sizeof(struct CVALUE*));
memset(&left_value2_95, 0, sizeof(char*));
right_value124 = (void*)0;
right_value125 = (void*)0;
right_value126 = (void*)0;
right_value127 = (void*)0;
memset(&middle_value2_99, 0, sizeof(char*));
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
memset(&right_value2_100, 0, sizeof(char*));
right_value132 = (void*)0;
right_value133 = (void*)0;
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value136 = (void*)0;
right_value137 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
right_value140 = (void*)0;
right_value141 = (void*)0;
memset(&result_type1_101, 0, sizeof(struct sType*));
right_value142 = (void*)0;
memset(&result_type2_102, 0, sizeof(struct sType*));
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
right_value146 = (void*)0;
right_value147 = (void*)0;
    generics_type_77=(struct sType*)come_increment_ref_count(((struct sType*)(right_value114=sType_clone(type))));
    come_call_finalizer3(right_value114,sType_finalize, 0, 1, 0, 0, __result_obj__);
    if(generics_type_77->mNoSolvedGenericsType->v1) {
        __dec_obj35=generics_type_77;
        generics_type_77=(struct sType*)come_increment_ref_count(generics_type_77->mNoSolvedGenericsType->v1);
        come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    klass_78=type->mClass;
    class_name_79=klass_78->mName;
    operator_fun_81=((void*)0);
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    if(_if_conditional113=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional113) {
        none_generics_name_82=(char*)come_increment_ref_count(((char*)(right_value115=get_none_generics_name(type->mClass->mName))));
        right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        obj_type_83=(struct sType*)come_increment_ref_count(((struct sType*)(right_value116=solve_generics(type,info->generics_type,info))));
        come_call_finalizer3(right_value116,sType_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj36=fun_name2_80;
        fun_name2_80=(char*)come_increment_ref_count(((char*)(right_value117=create_method_name(obj_type_83,(_Bool)0,fun_name,info,(_Bool)1))));
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_name3_84=(char*)come_increment_ref_count(((char*)(right_value118=xsprintf("%s_%s",none_generics_name_82,fun_name))));
        right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        generics_fun_87=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_84,((void*)0));
        if(generics_fun_87) {
            if(_if_conditional129=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value119=__builtin_string(fun_name2_80)))),generics_fun_87,obj_type_83,info),            right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional129) {
                __result76__ = (_Bool)0;
                none_generics_name_82 = come_decrement_ref_count2(none_generics_name_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_83,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_84 = come_decrement_ref_count2(fun_name3_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(generics_type_77,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_80 = come_decrement_ref_count2(fun_name2_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result76__;
            }
        }
        operator_fun_81=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_80);
        none_generics_name_82 = come_decrement_ref_count2(none_generics_name_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_83,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_84 = come_decrement_ref_count2(fun_name3_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj37=fun_name2_80;
        fun_name2_80=(char*)come_increment_ref_count(((char*)(right_value120=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        for(        i_91=128-1;        i_91>=1;        i_91--        ){
            new_fun_name_92=(char*)come_increment_ref_count(((char*)(right_value121=xsprintf("%s_v%d",fun_name2_80,i_91))));
            right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            operator_fun_81=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_92);
            if(operator_fun_81) {
                __dec_obj38=fun_name2_80;
                fun_name2_80=(char*)come_increment_ref_count(((char*)(right_value122=__builtin_string(new_fun_name_92))));
                __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                new_fun_name_92 = come_decrement_ref_count2(new_fun_name_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_92 = come_decrement_ref_count2(new_fun_name_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional150=operator_fun_81==((void*)0),        _if_conditional150) {
            operator_fun_81=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_80);
        }
    }
    result_93=(_Bool)0;
    if(operator_fun_81) {
        come_value_94=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value123=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 61, "CVALUE"))));
        come_call_finalizer3(right_value123,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        check_assign_type(((char*)(right_value125=xsprintf("\%s is assigned to",((char*)(right_value124=string_to_string(fun_name2_80)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,0), "18field.c", 63, 0)),left_value->type,left_value,(_Bool)0,(_Bool)1,info);
        right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional156=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,0), "18field.c", 64, 1))->mHeap&&left_value->type->mHeap,        _if_conditional156) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,0), "18field.c", 65, 2)),left_value->type,left_value,info);
            __dec_obj39=left_value2_95;
            left_value2_95=(char*)come_increment_ref_count(((char*)(right_value126=xsprintf("%s",left_value->c_value))));
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj40=left_value2_95;
            left_value2_95=(char*)come_increment_ref_count(((char*)(right_value127=string_clone(left_value->c_value))));
            __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        check_assign_type(((char*)(right_value129=xsprintf("\%s is assigned to",((char*)(right_value128=string_to_string(fun_name2_80)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,1), "18field.c", 72, 3)),middle_value->type,middle_value,(_Bool)0,(_Bool)1,info);
        right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional157=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,1), "18field.c", 73, 4))->mHeap&&middle_value->type->mHeap,        _if_conditional157) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,1), "18field.c", 74, 5)),middle_value->type,middle_value,info);
            __dec_obj41=middle_value2_99;
            middle_value2_99=(char*)come_increment_ref_count(((char*)(right_value130=xsprintf("%s",middle_value->c_value))));
            __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj42=middle_value2_99;
            middle_value2_99=(char*)come_increment_ref_count(((char*)(right_value131=string_clone(middle_value->c_value))));
            __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        check_assign_type(((char*)(right_value133=xsprintf("\%s is assigned to",((char*)(right_value132=string_to_string(fun_name2_80)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,2), "18field.c", 81, 6)),right_value->type,right_value,(_Bool)0,(_Bool)1,info);
        right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional158=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,2), "18field.c", 82, 7))->mHeap&&right_value->type->mHeap,        _if_conditional158) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,2), "18field.c", 83, 8)),right_value->type,right_value,info);
            __dec_obj43=right_value2_100;
            right_value2_100=(char*)come_increment_ref_count(((char*)(right_value134=xsprintf("%s",right_value->c_value))));
            __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj44=right_value2_100;
            right_value2_100=(char*)come_increment_ref_count(((char*)(right_value135=string_clone(right_value->c_value))));
            __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __dec_obj45=come_value_94->c_value;
        come_value_94->c_value=(char*)come_increment_ref_count(((char*)(right_value140=xsprintf("\%s(\%s,\%s,\%s)",((char*)(right_value136=string_to_string(fun_name2_80))),((char*)(right_value137=string_to_string(left_value2_95))),((char*)(right_value138=string_to_string(middle_value2_99))),((char*)(right_value139=string_to_string(right_value2_100)))))));
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type1_101=(struct sType*)come_increment_ref_count(((struct sType*)(right_value141=sType_clone(operator_fun_81->mResultType))));
        come_call_finalizer3(right_value141,sType_finalize, 0, 1, 0, 0, __result_obj__);
        result_type2_102=(struct sType*)come_increment_ref_count(((struct sType*)(right_value142=solve_generics(result_type1_101,generics_type_77,info))));
        come_call_finalizer3(right_value142,sType_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj46=come_value_94->type;
        come_value_94->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value143=sType_clone(result_type2_102))));
        come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value143,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_94->var=((void*)0);
        if(result_type2_102->mHeap) {
            __dec_obj47=come_value_94->c_value;
            come_value_94->c_value=(char*)come_increment_ref_count(((char*)(right_value144=append_object_to_right_values(come_value_94->c_value,(struct sType*)come_increment_ref_count(result_type2_102),info))));
            __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional160=result_type2_102->mGuardValue&&result_type2_102->mPointerNum>0,        _if_conditional160) {
            __dec_obj48=come_value_94->c_value;
            come_value_94->c_value=(char*)come_increment_ref_count(((char*)(right_value146=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value145=make_type_name_string(result_type2_102,(_Bool)0,(_Bool)0,(_Bool)0,info))),come_value_94->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
            __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __dec_obj49=come_value_94->c_value;
        come_value_94->c_value=(char*)come_increment_ref_count(((char*)(right_value147=append_stackframe(come_value_94->c_value,come_value_94->type,info))));
        __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        add_come_last_code(info,"%s;\n",come_value_94->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_94));
        result_93=(_Bool)1;
        come_call_finalizer3(come_value_94,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        left_value2_95 = come_decrement_ref_count2(left_value2_95, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        middle_value2_99 = come_decrement_ref_count2(middle_value2_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value2_100 = come_decrement_ref_count2(right_value2_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type1_101,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_102,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result84__ = result_93;
    come_call_finalizer3(generics_type_77,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_80 = come_decrement_ref_count2(fun_name2_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result84__;
    come_call_finalizer3(generics_type_77,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_80 = come_decrement_ref_count2(fun_name2_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional19;
struct sType* __result52__;
void* right_value79;
struct sType* result_47;
_Bool _if_conditional37;
_Bool _if_conditional38;
void* right_value86;
struct list$1sTypeph* __dec_obj15;
_Bool _if_conditional42;
void* right_value89;
struct tuple1$1sTypeph* __dec_obj17;
_Bool _if_conditional46;
void* right_value90;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional47;
void* right_value91;
char* __dec_obj19;
_Bool _if_conditional48;
void* right_value92;
struct list$1sTypeph* __dec_obj20;
_Bool _if_conditional49;
void* right_value100;
struct list$1sNodeph* __dec_obj24;
_Bool _if_conditional62;
_Bool _if_conditional63;
void* right_value101;
struct list$1sTypeph* __dec_obj25;
_Bool _if_conditional64;
void* right_value108;
struct list$1charph* __dec_obj29;
_Bool _if_conditional68;
void* right_value109;
struct tuple1$1sTypeph* __dec_obj30;
_Bool _if_conditional69;
_Bool _if_conditional70;
void* right_value110;
struct sNode* __dec_obj31;
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
void* right_value111;
struct sNode* __dec_obj32;
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
void* right_value112;
char* __dec_obj33;
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
void* right_value113;
char* __dec_obj34;
_Bool _if_conditional109;
struct sType* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
memset(&result_47, 0, sizeof(struct sType*));
right_value86 = (void*)0;
right_value89 = (void*)0;
right_value90 = (void*)0;
right_value91 = (void*)0;
right_value92 = (void*)0;
right_value100 = (void*)0;
right_value101 = (void*)0;
right_value108 = (void*)0;
right_value109 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
        if(_if_conditional19=self==(void*)0,        _if_conditional19) {
            __result52__ = __result_obj__ = (void*)0;
            return __result52__;
        }
        result_47=(struct sType*)come_increment_ref_count(((struct sType*)(right_value79=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer3(right_value79,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional37=self!=((void*)0),        _if_conditional37) {
            result_47->mClass=self->mClass;
        }
        if(_if_conditional38=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional38) {
            __dec_obj15=result_47->mMultipleTypes;
            result_47->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value86=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer3(__dec_obj15,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value86,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional42=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional42) {
            __dec_obj17=result_47->mNoSolvedGenericsType;
            result_47->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value89=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer3(__dec_obj17,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value89,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional46=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional46) {
            __dec_obj18=result_47->mOriginalLoadVarType;
            result_47->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value90=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer3(__dec_obj18,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value90,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional47=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional47) {
            __dec_obj19=result_47->mGenericsName;
            result_47->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value91=string_clone(self->mGenericsName))));
            __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional48=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional48) {
            __dec_obj20=result_47->mGenericsTypes;
            result_47->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value92=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer3(__dec_obj20,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value92,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional49=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional49) {
            __dec_obj24=result_47->mArrayNum;
            result_47->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value100=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer3(__dec_obj24,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value100,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional62=self!=((void*)0),        _if_conditional62) {
            result_47->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(_if_conditional63=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional63) {
            __dec_obj25=result_47->mParamTypes;
            result_47->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value101=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer3(__dec_obj25,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value101,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional64=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional64) {
            __dec_obj29=result_47->mParamNames;
            result_47->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value108=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer3(__dec_obj29,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value108,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional68=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional68) {
            __dec_obj30=result_47->mResultType;
            result_47->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value109=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer3(__dec_obj30,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value109,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional69=self!=((void*)0),        _if_conditional69) {
            result_47->mVarArgs=self->mVarArgs;
        }
        if(_if_conditional70=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional70) {
            __dec_obj31=result_47->mAlignas;
            result_47->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value110=sNode_clone(self->mAlignas))));
            if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value110) { right_value110 = come_decrement_ref_count2(right_value110, ((struct sNode*)right_value110)->finalize, ((struct sNode*)right_value110)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional71=self!=((void*)0),        _if_conditional71) {
            result_47->mUnsigned=self->mUnsigned;
        }
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            result_47->mShort=self->mShort;
        }
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            result_47->mLong=self->mLong;
        }
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            result_47->mLongLong=self->mLongLong;
        }
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            result_47->mConstant=self->mConstant;
        }
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            result_47->mRegister=self->mRegister;
        }
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            result_47->mVolatile=self->mVolatile;
        }
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            result_47->mStatic=self->mStatic;
        }
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            result_47->mRecord=self->mRecord;
        }
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            result_47->mExtern=self->mExtern;
        }
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            result_47->mRestrict=self->mRestrict;
        }
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            result_47->mImmutable=self->mImmutable;
        }
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            result_47->mHeap=self->mHeap;
        }
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            result_47->mDummyHeap=self->mDummyHeap;
        }
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            result_47->mDelegate=self->mDelegate;
        }
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            result_47->mShare=self->mShare;
        }
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            result_47->mClone=self->mClone;
        }
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            result_47->mNoHeap=self->mNoHeap;
        }
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            result_47->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            result_47->mRefference=self->mRefference;
        }
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            result_47->mException=self->mException;
        }
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            result_47->mPointerNum=self->mPointerNum;
        }
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            result_47->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            result_47->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(_if_conditional95=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional95) {
            __dec_obj32=result_47->mSizeNum;
            result_47->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value111=sNode_clone(self->mSizeNum))));
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value111) { right_value111 = come_decrement_ref_count2(right_value111, ((struct sNode*)right_value111)->finalize, ((struct sNode*)right_value111)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional96=self!=((void*)0),        _if_conditional96) {
            result_47->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(_if_conditional97=self!=((void*)0),        _if_conditional97) {
            result_47->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(_if_conditional98=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional98) {
            __dec_obj33=result_47->mOriginalTypeName;
            result_47->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value112=string_clone(self->mOriginalTypeName))));
            __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional99=self!=((void*)0),        _if_conditional99) {
            result_47->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(_if_conditional100=self!=((void*)0),        _if_conditional100) {
            result_47->mFunctionParam=self->mFunctionParam;
        }
        if(_if_conditional101=self!=((void*)0),        _if_conditional101) {
            result_47->mAllocaValue=self->mAllocaValue;
        }
        if(_if_conditional102=self!=((void*)0),        _if_conditional102) {
            result_47->mGenericsStruct=self->mGenericsStruct;
        }
        if(_if_conditional103=self!=((void*)0),        _if_conditional103) {
            result_47->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(_if_conditional104=self!=((void*)0),        _if_conditional104) {
            result_47->mComeMemCore=self->mComeMemCore;
        }
        if(_if_conditional105=self!=((void*)0),        _if_conditional105) {
            result_47->mInline=self->mInline;
        }
        if(_if_conditional106=self!=((void*)0),        _if_conditional106) {
            result_47->mNullValue=self->mNullValue;
        }
        if(_if_conditional107=self!=((void*)0),        _if_conditional107) {
            result_47->mGuardValue=self->mGuardValue;
        }
        if(_if_conditional108=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional108) {
            __dec_obj34=result_47->mAsmName;
            result_47->mAsmName=(char*)come_increment_ref_count(((char*)(right_value113=string_clone(self->mAsmName))));
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional109=self!=((void*)0),        _if_conditional109) {
            result_47->mArrayPointerType=self->mArrayPointerType;
        }
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
            if(_if_conditional20=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional20) {
                come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional22=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional22) {
                come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional24=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional24) {
                come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional25=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional25) {
                self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional26=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional26) {
                come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional27=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional27) {
                come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional29=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional29) {
                come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional30=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional30) {
                come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional32=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional32) {
                come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional33=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional33) {
                if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional34=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional34) {
                if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional35=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional35) {
                self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional36=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional36) {
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
                    while(_while_condtional7=it_48!=((void*)0),                    _while_condtional7) {
                        prev_it_49=it_48;
                        it_48=it_48->next;
                        come_call_finalizer3(prev_it_49,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional21=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional21) {
                                come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional23;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional23=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional23) {
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
                    while(_while_condtional8=it_50!=((void*)0),                    _while_condtional8) {
                        prev_it_51=it_50;
                        it_50=it_50->next;
                        come_call_finalizer3(prev_it_51,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional28;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional28=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional28) {
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
                    while(_while_condtional9=it_52!=((void*)0),                    _while_condtional9) {
                        prev_it_53=it_52;
                        it_52=it_52->next;
                        come_call_finalizer3(prev_it_53,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional31;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional31=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional31) {
                                self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional39;
struct list$1sTypeph* __result53__;
void* right_value80;
void* right_value81;
struct list$1sTypeph* result_54;
struct list_item$1sTypeph* it_55;
_Bool _while_condtional10;
void* right_value85;
struct list$1sTypeph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
right_value81 = (void*)0;
memset(&result_54, 0, sizeof(struct list$1sTypeph*));
memset(&it_55, 0, sizeof(struct list_item$1sTypeph*));
right_value85 = (void*)0;
                if(_if_conditional39=self==((void*)0),                _if_conditional39) {
                    __result53__ = __result_obj__ = ((void*)0);
                    return __result53__;
                }
                result_54=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value81=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value80=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/neo-c.h", 133, "list$1sTypeph"))))))));
                come_call_finalizer3(right_value80,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value81,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_55=self->head;
                while(_while_condtional10=it_55!=((void*)0),                _while_condtional10) {
                    list$1sTypeph_add(result_54,(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=sType_clone(it_55->item)))));
                    come_call_finalizer3(right_value85,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    it_55=it_55->next;
                }
                __result56__ = __result_obj__ = result_54;
                come_call_finalizer3(result_54,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result56__;
                come_call_finalizer3(result_54,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result54__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result54__;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional40;
void* right_value82;
struct list_item$1sTypeph* litem_56;
struct sType* __dec_obj12;
_Bool _if_conditional41;
void* right_value83;
struct list_item$1sTypeph* litem_57;
struct sType* __dec_obj13;
void* right_value84;
struct list_item$1sTypeph* litem_58;
struct sType* __dec_obj14;
struct list$1sTypeph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
memset(&litem_56, 0, sizeof(struct list_item$1sTypeph*));
right_value83 = (void*)0;
memset(&litem_57, 0, sizeof(struct list_item$1sTypeph*));
right_value84 = (void*)0;
memset(&litem_58, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional40=self->len==0,                        _if_conditional40) {
                            litem_56=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value82=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/neo-c.h", 147, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value82,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_56->prev=((void*)0);
                            litem_56->next=((void*)0);
                            __dec_obj12=litem_56->item;
                            litem_56->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj12,sType_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_56;
                            self->head=litem_56;
                        }
                        else {
                            if(_if_conditional41=self->len==1,                            _if_conditional41) {
                                litem_57=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value83=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/neo-c.h", 157, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value83,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_57->prev=self->head;
                                litem_57->next=((void*)0);
                                __dec_obj13=litem_57->item;
                                litem_57->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj13,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_57;
                                self->head->next=litem_57;
                            }
                            else {
                                litem_58=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value84=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/neo-c.h", 167, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value84,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_58->prev=self->tail;
                                litem_58->next=((void*)0);
                                __dec_obj14=litem_58->item;
                                litem_58->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail->next=litem_58;
                                self->tail=litem_58;
                            }
                        }
                        self->len++;
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
                it_59=self->head;
                while(_while_condtional11=it_59!=((void*)0),                _while_condtional11) {
                    prev_it_60=it_59;
                    it_59=it_59->next;
                    come_call_finalizer3(prev_it_60,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional43;
struct tuple1$1sTypeph* __result57__;
void* right_value87;
struct tuple1$1sTypeph* result_61;
_Bool _if_conditional45;
void* right_value88;
struct sType* __dec_obj16;
struct tuple1$1sTypeph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value87 = (void*)0;
memset(&result_61, 0, sizeof(struct tuple1$1sTypeph*));
right_value88 = (void*)0;
                if(_if_conditional43=self==(void*)0,                _if_conditional43) {
                    __result57__ = __result_obj__ = (void*)0;
                    return __result57__;
                }
                result_61=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value87=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer3(right_value87,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional45=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional45) {
                    __dec_obj16=result_61->v1;
                    result_61->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value88=sType_clone(self->v1))));
                    come_call_finalizer3(__dec_obj16,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value88,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                __result58__ = __result_obj__ = result_61;
                come_call_finalizer3(result_61,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result58__;
                come_call_finalizer3(result_61,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional44;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional44=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional44) {
                        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional50;
struct list$1sNodeph* __result59__;
void* right_value93;
void* right_value94;
struct list$1sNodeph* result_62;
struct list_item$1sNodeph* it_63;
_Bool _while_condtional12;
void* right_value99;
struct list$1sNodeph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
right_value94 = (void*)0;
memset(&result_62, 0, sizeof(struct list$1sNodeph*));
memset(&it_63, 0, sizeof(struct list_item$1sNodeph*));
right_value99 = (void*)0;
                if(_if_conditional50=self==((void*)0),                _if_conditional50) {
                    __result59__ = __result_obj__ = ((void*)0);
                    return __result59__;
                }
                result_62=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value94=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value93=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/neo-c.h", 133, "list$1sNodeph"))))))));
                come_call_finalizer3(right_value93,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value94,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_63=self->head;
                while(_while_condtional12=it_63!=((void*)0),                _while_condtional12) {
                    list$1sNodeph_add(result_62,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value99=sNode_clone(it_63->item)))));
                    if(right_value99) { right_value99 = come_decrement_ref_count2(right_value99, ((struct sNode*)right_value99)->finalize, ((struct sNode*)right_value99)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    it_63=it_63->next;
                }
                __result64__ = __result_obj__ = result_62;
                come_call_finalizer3(result_62,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result64__;
                come_call_finalizer3(result_62,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result60__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result60__;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional51;
void* right_value95;
struct list_item$1sNodeph* litem_64;
struct sNode* __dec_obj21;
_Bool _if_conditional52;
void* right_value96;
struct list_item$1sNodeph* litem_65;
struct sNode* __dec_obj22;
void* right_value97;
struct list_item$1sNodeph* litem_66;
struct sNode* __dec_obj23;
struct list$1sNodeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value95 = (void*)0;
memset(&litem_64, 0, sizeof(struct list_item$1sNodeph*));
right_value96 = (void*)0;
memset(&litem_65, 0, sizeof(struct list_item$1sNodeph*));
right_value97 = (void*)0;
memset(&litem_66, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional51=self->len==0,                        _if_conditional51) {
                            litem_64=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value95=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/neo-c.h", 147, "list_item$1sNodeph"))));
                            come_call_finalizer3(right_value95,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_64->prev=((void*)0);
                            litem_64->next=((void*)0);
                            __dec_obj21=litem_64->item;
                            litem_64->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail=litem_64;
                            self->head=litem_64;
                        }
                        else {
                            if(_if_conditional52=self->len==1,                            _if_conditional52) {
                                litem_65=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value96=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/neo-c.h", 157, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value96,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_65->prev=self->head;
                                litem_65->next=((void*)0);
                                __dec_obj22=litem_65->item;
                                litem_65->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_65;
                                self->head->next=litem_65;
                            }
                            else {
                                litem_66=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value97=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/neo-c.h", 167, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value97,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_66->prev=self->tail;
                                litem_66->next=((void*)0);
                                __dec_obj23=litem_66->item;
                                litem_66->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail->next=litem_66;
                                self->tail=litem_66;
                            }
                        }
                        self->len++;
                        __result61__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result61__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional53;
struct sNode* __result62__;
void* right_value98;
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
right_value98 = (void*)0;
memset(&result_67, 0, sizeof(struct sNode*));
                        if(_if_conditional53=self==(void*)0,                        _if_conditional53) {
                            __result62__ = __result_obj__ = (void*)0;
                            return __result62__;
                        }
                        result_67=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value98=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value98) { right_value98 = come_decrement_ref_count2(right_value98, ((struct sNode*)right_value98)->finalize, ((struct sNode*)right_value98)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        if(_if_conditional54=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional54) {
                            result_67->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(_if_conditional55=self!=((void*)0),                        _if_conditional55) {
                            result_67->finalize=self->finalize;
                        }
                        if(_if_conditional56=self!=((void*)0),                        _if_conditional56) {
                            result_67->clone=self->clone;
                        }
                        if(_if_conditional57=self!=((void*)0),                        _if_conditional57) {
                            result_67->compile=self->compile;
                        }
                        if(_if_conditional58=self!=((void*)0),                        _if_conditional58) {
                            result_67->sline=self->sline;
                        }
                        if(_if_conditional59=self!=((void*)0),                        _if_conditional59) {
                            result_67->sname=self->sname;
                        }
                        if(_if_conditional60=self!=((void*)0),                        _if_conditional60) {
                            result_67->terminated=self->terminated;
                        }
                        if(_if_conditional61=self!=((void*)0),                        _if_conditional61) {
                            result_67->kind=self->kind;
                        }
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
                it_68=self->head;
                while(_while_condtional13=it_68!=((void*)0),                _while_condtional13) {
                    prev_it_69=it_68;
                    it_68=it_68->next;
                    come_call_finalizer3(prev_it_69,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional65;
struct list$1charph* __result65__;
void* right_value102;
void* right_value103;
struct list$1charph* result_70;
struct list_item$1charph* it_71;
_Bool _while_condtional14;
void* right_value107;
struct list$1charph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value102 = (void*)0;
right_value103 = (void*)0;
memset(&result_70, 0, sizeof(struct list$1charph*));
memset(&it_71, 0, sizeof(struct list_item$1charph*));
right_value107 = (void*)0;
                if(_if_conditional65=self==((void*)0),                _if_conditional65) {
                    __result65__ = __result_obj__ = ((void*)0);
                    return __result65__;
                }
                result_70=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value103=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value102=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/neo-c.h", 133, "list$1charph"))))))));
                come_call_finalizer3(right_value102,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value103,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                it_71=self->head;
                while(_while_condtional14=it_71!=((void*)0),                _while_condtional14) {
                    list$1charph_add(result_70,(char*)come_increment_ref_count(((char*)(right_value107=string_clone(it_71->item)))));
                    right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    it_71=it_71->next;
                }
                __result68__ = __result_obj__ = result_70;
                come_call_finalizer3(result_70,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result68__;
                come_call_finalizer3(result_70,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result66__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result66__;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional66;
void* right_value104;
struct list_item$1charph* litem_72;
char* __dec_obj26;
_Bool _if_conditional67;
void* right_value105;
struct list_item$1charph* litem_73;
char* __dec_obj27;
void* right_value106;
struct list_item$1charph* litem_74;
char* __dec_obj28;
struct list$1charph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value104 = (void*)0;
memset(&litem_72, 0, sizeof(struct list_item$1charph*));
right_value105 = (void*)0;
memset(&litem_73, 0, sizeof(struct list_item$1charph*));
right_value106 = (void*)0;
memset(&litem_74, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional66=self->len==0,                        _if_conditional66) {
                            litem_72=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value104=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/neo-c.h", 147, "list_item$1charph"))));
                            come_call_finalizer3(right_value104,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_72->prev=((void*)0);
                            litem_72->next=((void*)0);
                            __dec_obj26=litem_72->item;
                            litem_72->item=(char*)come_increment_ref_count(item);
                            __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_72;
                            self->head=litem_72;
                        }
                        else {
                            if(_if_conditional67=self->len==1,                            _if_conditional67) {
                                litem_73=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value105=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/neo-c.h", 157, "list_item$1charph"))));
                                come_call_finalizer3(right_value105,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_73->prev=self->head;
                                litem_73->next=((void*)0);
                                __dec_obj27=litem_73->item;
                                litem_73->item=(char*)come_increment_ref_count(item);
                                __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_73;
                                self->head->next=litem_73;
                            }
                            else {
                                litem_74=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value106=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/neo-c.h", 167, "list_item$1charph"))));
                                come_call_finalizer3(right_value106,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_74->prev=self->tail;
                                litem_74->next=((void*)0);
                                __dec_obj28=litem_74->item;
                                litem_74->item=(char*)come_increment_ref_count(item);
                                __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail->next=litem_74;
                                self->tail=litem_74;
                            }
                        }
                        self->len++;
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
                it_75=self->head;
                while(_while_condtional15=it_75!=((void*)0),                _while_condtional15) {
                    prev_it_76=it_75;
                    it_75=it_75->next;
                    come_call_finalizer3(prev_it_76,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional112;
int __result70__;
int __result71__;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional112=self==((void*)0),        _if_conditional112) {
            __result70__ = 0;
            return __result70__;
        }
        __result71__ = self->len;
        return __result71__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_85;
unsigned int it_86;
_Bool _while_condtional16;
_Bool _if_conditional114;
_Bool _if_conditional115;
struct sGenericsFun* __result72__;
_Bool _if_conditional126;
_Bool _if_conditional127;
struct sGenericsFun* __result73__;
struct sGenericsFun* __result74__;
struct sGenericsFun* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_85, 0, sizeof(unsigned int));
memset(&it_86, 0, sizeof(unsigned int));
            hash_85=string_get_hash_key(((char*)key))%self->size;
            it_86=hash_85;
            while(_while_condtional16=(_Bool)1,            _while_condtional16) {
                if(_if_conditional114=self->item_existance[it_86],                _if_conditional114) {
                    if(_if_conditional115=string_equals(self->keys[it_86],key),                    _if_conditional115) {
                        __result72__ = __result_obj__ = self->items[it_86];
                        come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result72__;
                    }
                    it_86++;
                    if(_if_conditional126=it_86>=self->size,                    _if_conditional126) {
                        it_86=0;
                    }
                    else {
                        if(_if_conditional127=it_86==hash_85,                        _if_conditional127) {
                            __result73__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result73__;
                        }
                    }
                }
                else {
                    __result74__ = __result_obj__ = default_value;
                    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result74__;
                }
            }
            __result75__ = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result75__;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional116=self!=((void*)0)&&self->mImplType!=((void*)0),                            _if_conditional116) {
                                come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional117=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                            _if_conditional117) {
                                come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional118=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),                            _if_conditional118) {
                                come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional119=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional119) {
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional120=self!=((void*)0)&&self->mResultType!=((void*)0),                            _if_conditional120) {
                                come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional121=self!=((void*)0)&&self->mParamTypes!=((void*)0),                            _if_conditional121) {
                                come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional122=self!=((void*)0)&&self->mParamNames!=((void*)0),                            _if_conditional122) {
                                come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional123=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                            _if_conditional123) {
                                come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional124=self!=((void*)0)&&self->mBlock!=((void*)0),                            _if_conditional124) {
                                self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional125=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                            _if_conditional125) {
                                self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_88;
unsigned int hash_89;
unsigned int it_90;
_Bool _while_condtional17;
_Bool _if_conditional130;
_Bool _if_conditional131;
struct sFun* __result77__;
_Bool _if_conditional147;
_Bool _if_conditional148;
struct sFun* __result78__;
struct sFun* __result79__;
struct sFun* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_88, 0, sizeof(struct sFun*));
memset(&hash_89, 0, sizeof(unsigned int));
memset(&it_90, 0, sizeof(unsigned int));
            memset(&default_value_88,0,sizeof(struct sFun*));
            hash_89=string_get_hash_key(((char*)key))%self->size;
            it_90=hash_89;
            while(_while_condtional17=(_Bool)1,            _while_condtional17) {
                if(_if_conditional130=self->item_existance[it_90],                _if_conditional130) {
                    if(_if_conditional131=string_equals(self->keys[it_90],key),                    _if_conditional131) {
                        __result77__ = __result_obj__ = self->items[it_90];
                        come_call_finalizer3(default_value_88,sFun_finalize, 0, 0, 0, 0, (void*)0);
                        return __result77__;
                    }
                    it_90++;
                    if(_if_conditional147=it_90>=self->size,                    _if_conditional147) {
                        it_90=0;
                    }
                    else {
                        if(_if_conditional148=it_90==hash_89,                        _if_conditional148) {
                            __result78__ = __result_obj__ = default_value_88;
                            come_call_finalizer3(default_value_88,sFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result78__;
                        }
                    }
                }
                else {
                    __result79__ = __result_obj__ = default_value_88;
                    come_call_finalizer3(default_value_88,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result79__;
                }
            }
            __result80__ = __result_obj__ = default_value_88;
            come_call_finalizer3(default_value_88,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result80__;
            come_call_finalizer3(default_value_88,sFun_finalize, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional141;
_Bool _if_conditional142;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional132=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional132) {
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional133=self!=((void*)0)&&self->mResultType!=((void*)0),                            _if_conditional133) {
                                come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional134=self!=((void*)0)&&self->mParamTypes!=((void*)0),                            _if_conditional134) {
                                come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional135=self!=((void*)0)&&self->mParamNames!=((void*)0),                            _if_conditional135) {
                                come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional136=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                            _if_conditional136) {
                                come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional137=self!=((void*)0)&&self->mLambdaType!=((void*)0),                            _if_conditional137) {
                                come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional138=self!=((void*)0)&&self->mBlock!=((void*)0),                            _if_conditional138) {
                                come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional141=self!=((void*)0)&&self->mSource!=((void*)0),                            _if_conditional141) {
                                come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional142=self!=((void*)0)&&self->mSourceHead!=((void*)0),                            _if_conditional142) {
                                come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional143=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                            _if_conditional143) {
                                come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional144=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                            _if_conditional144) {
                                come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional145=self!=((void*)0)&&self->mComeHeader!=((void*)0),                            _if_conditional145) {
                                self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional146=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                            _if_conditional146) {
                                self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional139;
_Bool _if_conditional140;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional139=self!=((void*)0)&&self->mNodes!=((void*)0),                                    _if_conditional139) {
                                        come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional140=self!=((void*)0)&&self->mVarTable!=((void*)0),                                    _if_conditional140) {
                                        come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                    }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional152;
_Bool _if_conditional153;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional152=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional152) {
                self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional153=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional153) {
                come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional154;
struct list_item$1sTypeph* it_96;
int i_97;
_Bool _while_condtional18;
_Bool _if_conditional155;
struct sType* __result81__;
struct sType* default_value_98;
struct sType* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_96, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_97, 0, sizeof(int));
memset(&default_value_98, 0, sizeof(struct sType*));
            if(_if_conditional154=position<0,            _if_conditional154) {
                position+=self->len;
            }
            it_96=self->head;
            i_97=0;
            while(_while_condtional18=it_96!=((void*)0),            _while_condtional18) {
                if(_if_conditional155=position==i_97,                _if_conditional155) {
                    __result81__ = __result_obj__ = it_96->item;
                    return __result81__;
                }
                it_96=it_96->next;
                i_97++;
            }
            memset(&default_value_98,0,sizeof(struct sType*));
            __result82__ = __result_obj__ = default_value_98;
            come_call_finalizer3(default_value_98,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result82__;
            come_call_finalizer3(default_value_98,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional161;
void* right_value148;
struct list_item$1CVALUEph* litem_103;
struct CVALUE* __dec_obj50;
_Bool _if_conditional163;
void* right_value149;
struct list_item$1CVALUEph* litem_104;
struct CVALUE* __dec_obj51;
void* right_value150;
struct list_item$1CVALUEph* litem_105;
struct CVALUE* __dec_obj52;
struct list$1CVALUEph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value148 = (void*)0;
memset(&litem_103, 0, sizeof(struct list_item$1CVALUEph*));
right_value149 = (void*)0;
memset(&litem_104, 0, sizeof(struct list_item$1CVALUEph*));
right_value150 = (void*)0;
memset(&litem_105, 0, sizeof(struct list_item$1CVALUEph*));
            if(_if_conditional161=self->len==0,            _if_conditional161) {
                litem_103=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value148=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/neo-c.h", 217, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value148,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_103->prev=((void*)0);
                litem_103->next=((void*)0);
                __dec_obj50=litem_103->item;
                litem_103->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj50,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                self->tail=litem_103;
                self->head=litem_103;
            }
            else {
                if(_if_conditional163=self->len==1,                _if_conditional163) {
                    litem_104=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value149=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/neo-c.h", 227, "list_item$1CVALUEph"))));
                    come_call_finalizer3(right_value149,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_104->prev=self->head;
                    litem_104->next=((void*)0);
                    __dec_obj51=litem_104->item;
                    litem_104->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj51,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_104;
                    self->head->next=litem_104;
                }
                else {
                    litem_105=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value150=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/neo-c.h", 237, "list_item$1CVALUEph"))));
                    come_call_finalizer3(right_value150,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_105->prev=self->tail;
                    litem_105->next=((void*)0);
                    __dec_obj52=litem_105->item;
                    litem_105->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj52,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_105;
                    self->tail=litem_105;
                }
            }
            self->len++;
            __result83__ = __result_obj__ = self;
            come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
            return __result83__;
            come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional162;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional162=self!=((void*)0)&&self->item!=((void*)0),                    _if_conditional162) {
                        come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value151;
char* __dec_obj53;
void* right_value152;
struct sNode* __dec_obj54;
void* right_value153;
struct sNode* __dec_obj55;
void* right_value154;
char* __dec_obj56;
struct sStoreFieldNode* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value151 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
    self->sline=info->sline;
    __dec_obj53=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value151=__builtin_string(info->sname))));
    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj54=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value152=sNode_clone(left))));
    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count2(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value152) { right_value152 = come_decrement_ref_count2(right_value152, ((struct sNode*)right_value152)->finalize, ((struct sNode*)right_value152)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj55=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value153=sNode_clone(right))));
    if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count2(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value153) { right_value153 = come_decrement_ref_count2(right_value153, ((struct sNode*)right_value153)->finalize, ((struct sNode*)right_value153)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj56=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value154=__builtin_string(name))));
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result85__ = __result_obj__ = self;
    come_call_finalizer3(self,sStoreFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result85__;
    come_call_finalizer3(self,sStoreFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sStoreFieldNode_terminated(struct sStoreFieldNode* self){
void* __result_obj__;
_Bool __result86__;
memset(&__result_obj__, 0, sizeof(void*));
    __result86__ = (_Bool)0;
    return __result86__;
}

char* sStoreFieldNode_kind(struct sStoreFieldNode* self){
void* __result_obj__;
void* right_value155;
char* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value155 = (void*)0;
    __result87__ = __result_obj__ = ((char*)(right_value155=__builtin_string("sStoreFieldNode")));
    right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result87__;
}

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_106;
struct sNode* right_107;
void* right_value156;
char* name_108;
_Bool _if_conditional168;
_Bool __result88__;
void* right_value157;
struct CVALUE* left_value_109;
_Bool _if_conditional169;
void* right_value158;
void* right_value159;
char* __dec_obj57;
_Bool _if_conditional170;
_Bool __result89__;
void* right_value160;
struct CVALUE* right_value_110;
struct sType* right_type_111;
struct sType* left_type_112;
void* right_value161;
struct sType* left_type2_113;
struct sClass* klass_114;
struct sType* field_type_120;
int index_121;
char* child_field_name_122;
_Bool _if_conditional182;
_Bool __result94__;
struct list$1tuple2$2charphsTypephph* o2_saved_123;
struct tuple2$2charphsTypeph* field_126;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* field_name_129;
struct sType* field_type2_130;
_Bool _if_conditional187;
void* right_value162;
struct sType* __dec_obj58;
_Bool _if_conditional189;
struct list$1tuple2$2charphsTypephph* o2_saved_131;
struct tuple2$2charphsTypeph* field_132;
struct tuple2$2charphsTypeph* multiple_assign_var2;
char* field_name_133;
struct sType* field_type2_134;
struct sClass* klass2_135;
struct list$1tuple2$2charphsTypephph* o2_saved_136;
struct tuple2$2charphsTypeph* field2_137;
struct tuple2$2charphsTypeph* multiple_assign_var3;
char* field_name2_138;
struct sType* field_type3_139;
_Bool _if_conditional190;
void* right_value163;
char* __dec_obj59;
void* right_value164;
struct sType* __dec_obj60;
_Bool _if_conditional191;
_Bool _if_conditional192;
void* right_value165;
struct sType* __dec_obj61;
_Bool _if_conditional193;
_Bool __result104__;
void* right_value166;
struct CVALUE* come_value_140;
void* right_value167;
void* right_value168;
void* right_value169;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool __result105__;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
void* right_value170;
char* c_value_141;
void* right_value171;
char* __dec_obj62;
void* right_value172;
char* c_value_142;
void* right_value173;
char* __dec_obj63;
_Bool _if_conditional200;
_Bool _if_conditional201;
void* right_value174;
char* c_value_143;
void* right_value175;
char* __dec_obj64;
void* right_value176;
char* c_value_144;
void* right_value177;
char* __dec_obj65;
void* right_value178;
char* __dec_obj66;
_Bool __result106__;
int right_value_id_145;
_Bool _if_conditional202;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool _if_conditional205;
void* right_value179;
char* c_value_146;
void* right_value180;
char* __dec_obj67;
void* right_value181;
char* c_value_147;
void* right_value182;
char* __dec_obj68;
_Bool _if_conditional206;
_Bool _if_conditional207;
void* right_value183;
char* c_value_148;
void* right_value184;
char* __dec_obj69;
void* right_value185;
char* c_value_149;
void* right_value186;
char* __dec_obj70;
_Bool __result107__;
_Bool _if_conditional208;
_Bool _if_conditional209;
void* right_value187;
char* __dec_obj71;
void* right_value188;
char* __dec_obj72;
_Bool _if_conditional210;
_Bool _if_conditional211;
void* right_value189;
char* __dec_obj73;
void* right_value190;
char* __dec_obj74;
_Bool __result108__;
void* right_value191;
struct sType* __dec_obj75;
_Bool __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_106, 0, sizeof(struct sNode*));
memset(&right_107, 0, sizeof(struct sNode*));
right_value156 = (void*)0;
memset(&name_108, 0, sizeof(char*));
right_value157 = (void*)0;
memset(&left_value_109, 0, sizeof(struct CVALUE*));
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
memset(&right_value_110, 0, sizeof(struct CVALUE*));
memset(&right_type_111, 0, sizeof(struct sType*));
memset(&left_type_112, 0, sizeof(struct sType*));
right_value161 = (void*)0;
memset(&left_type2_113, 0, sizeof(struct sType*));
memset(&klass_114, 0, sizeof(struct sClass*));
memset(&field_type_120, 0, sizeof(struct sType*));
memset(&index_121, 0, sizeof(int));
memset(&child_field_name_122, 0, sizeof(char*));
memset(&o2_saved_123, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_126, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_129, 0, sizeof(char*));
memset(&field_type2_130, 0, sizeof(struct sType*));
memset(&field_name_129, 0, sizeof(char*));
memset(&field_type2_130, 0, sizeof(struct sType*));
right_value162 = (void*)0;
memset(&o2_saved_131, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_132, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_133, 0, sizeof(char*));
memset(&field_type2_134, 0, sizeof(struct sType*));
memset(&field_name_133, 0, sizeof(char*));
memset(&field_type2_134, 0, sizeof(struct sType*));
memset(&klass2_135, 0, sizeof(struct sClass*));
memset(&o2_saved_136, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field2_137, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name2_138, 0, sizeof(char*));
memset(&field_type3_139, 0, sizeof(struct sType*));
memset(&field_name2_138, 0, sizeof(char*));
memset(&field_type3_139, 0, sizeof(struct sType*));
right_value163 = (void*)0;
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
memset(&come_value_140, 0, sizeof(struct CVALUE*));
right_value167 = (void*)0;
right_value168 = (void*)0;
right_value169 = (void*)0;
right_value170 = (void*)0;
memset(&c_value_141, 0, sizeof(char*));
right_value171 = (void*)0;
right_value172 = (void*)0;
memset(&c_value_142, 0, sizeof(char*));
right_value173 = (void*)0;
right_value174 = (void*)0;
memset(&c_value_143, 0, sizeof(char*));
right_value175 = (void*)0;
right_value176 = (void*)0;
memset(&c_value_144, 0, sizeof(char*));
right_value177 = (void*)0;
right_value178 = (void*)0;
memset(&right_value_id_145, 0, sizeof(int));
right_value179 = (void*)0;
memset(&c_value_146, 0, sizeof(char*));
right_value180 = (void*)0;
right_value181 = (void*)0;
memset(&c_value_147, 0, sizeof(char*));
right_value182 = (void*)0;
right_value183 = (void*)0;
memset(&c_value_148, 0, sizeof(char*));
right_value184 = (void*)0;
right_value185 = (void*)0;
memset(&c_value_149, 0, sizeof(char*));
right_value186 = (void*)0;
right_value187 = (void*)0;
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
    left_106=self->mLeft;
    right_107=self->mRight;
    name_108=(char*)come_increment_ref_count(((char*)(right_value156=__builtin_string(self->mName))));
    right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional168=!node_compile(left_106,info),    _if_conditional168) {
        __result88__ = (_Bool)0;
        name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result88__;
    }
    left_value_109=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value157=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value157,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    if(_if_conditional169=gComeDebug&&left_value_109->type->mPointerNum>0,    _if_conditional169) {
        __dec_obj57=left_value_109->c_value;
        left_value_109->c_value=(char*)come_increment_ref_count(((char*)(right_value159=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value158=make_type_name_string(left_value_109->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_109->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    if(_if_conditional170=!node_compile(right_107,info),    _if_conditional170) {
        __result89__ = (_Bool)0;
        name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result89__;
    }
    right_value_110=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value160=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value160,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    right_type_111=right_value_110->type;
    dec_stack_ptr(1,info);
    left_type_112=left_value_109->type;
    left_type2_113=(struct sType*)come_increment_ref_count(((struct sType*)(right_value161=solve_generics(left_type_112,left_type_112,info))));
    come_call_finalizer3(right_value161,sType_finalize, 0, 1, 0, 0, __result_obj__);
    klass_114=left_type2_113->mClass;
    klass_114=map$2charphsClassphp_operator_load_element(info->classes,klass_114->mName);
    field_type_120=((void*)0);
    index_121=0;
    child_field_name_122=((void*)0);
    klass_114=map$2charphsClassphp_operator_load_element(info->classes,klass_114->mName);
    if(_if_conditional182=klass_114->mFields==((void*)0),    _if_conditional182) {
        err_msg(info,"%s fields are null",klass_114->mName);
        __result94__ = (_Bool)0;
        name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_113,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
        child_field_name_122 = come_decrement_ref_count2(child_field_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result94__;
    }
    for(    o2_saved_123=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_114->mFields)),field_126=list$1tuple2$2charphsTypephph_begin((o2_saved_123));    !list$1tuple2$2charphsTypephph_end((o2_saved_123));    field_126=list$1tuple2$2charphsTypephph_next((o2_saved_123))    ){
        multiple_assign_var1=field_126;
        field_name_129=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        field_type2_130=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        if(_if_conditional187=string_operator_equals(field_name_129,name_108),        _if_conditional187) {
            __dec_obj58=field_type_120;
            field_type_120=(struct sType*)come_increment_ref_count(((struct sType*)(right_value162=sType_clone(field_type2_130))));
            come_call_finalizer3(__dec_obj58,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value162,sType_finalize, 0, 1, 0, 0, __result_obj__);
            field_name_129 = come_decrement_ref_count2(field_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_130,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        index_121++;
        field_name_129 = come_decrement_ref_count2(field_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type2_130,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_123,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(_if_conditional189=index_121==list$1tuple2$2charphsTypephph_length(klass_114->mFields),    _if_conditional189) {
        index_121=0;
        for(        o2_saved_131=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_114->mFields)),field_132=list$1tuple2$2charphsTypephph_begin((o2_saved_131));        !list$1tuple2$2charphsTypephph_end((o2_saved_131));        field_132=list$1tuple2$2charphsTypephph_next((o2_saved_131))        ){
            multiple_assign_var2=field_132;
            field_name_133=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            field_type2_134=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
            klass2_135=field_type2_134->mClass;
            for(            o2_saved_136=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_135->mFields)),field2_137=list$1tuple2$2charphsTypephph_begin((o2_saved_136));            !list$1tuple2$2charphsTypephph_end((o2_saved_136));            field2_137=list$1tuple2$2charphsTypephph_next((o2_saved_136))            ){
                multiple_assign_var3=field2_137;
                field_name2_138=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                field_type3_139=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
                if(_if_conditional190=string_operator_equals(field_name2_138,name_108),                _if_conditional190) {
                    __dec_obj59=child_field_name_122;
                    child_field_name_122=(char*)come_increment_ref_count(((char*)(right_value163=__builtin_string(field_name_133))));
                    __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    __dec_obj60=field_type_120;
                    field_type_120=(struct sType*)come_increment_ref_count(((struct sType*)(right_value164=sType_clone(field_type3_139))));
                    come_call_finalizer3(__dec_obj60,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value164,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    field_name2_138 = come_decrement_ref_count2(field_name2_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type3_139,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
                field_name2_138 = come_decrement_ref_count2(field_name2_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type3_139,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_136,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(child_field_name_122) {
                field_name_133 = come_decrement_ref_count2(field_name_133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_134,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            if(_if_conditional192=string_operator_equals(field_name_133,name_108),            _if_conditional192) {
                __dec_obj61=field_type_120;
                field_type_120=(struct sType*)come_increment_ref_count(((struct sType*)(right_value165=sType_clone(field_type2_134))));
                come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value165,sType_finalize, 0, 1, 0, 0, __result_obj__);
                field_name_133 = come_decrement_ref_count2(field_name_133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_134,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            index_121++;
            field_name_133 = come_decrement_ref_count2(field_name_133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_134,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_131,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(_if_conditional193=index_121==list$1tuple2$2charphsTypephph_length(klass_114->mFields),        _if_conditional193) {
            err_msg(info,"field not found(%s) in %s(1)",name_108,klass_114->mName);
            __result104__ = (_Bool)0;
            name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_113,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
            child_field_name_122 = come_decrement_ref_count2(child_field_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result104__;
        }
    }
    come_value_140=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value166=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 234, "CVALUE"))));
    come_call_finalizer3(right_value166,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    check_assign_type(((char*)(right_value168=xsprintf("\%s is assigned to",((char*)(right_value167=string_to_string(name_108)))))),field_type_120,right_type_111,right_value_110,(_Bool)0,(_Bool)1,info);
    right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_type_111=((struct sType*)(right_value169=sType_clone(right_value_110->type)));
    come_call_finalizer3(right_value169,sType_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional194=field_type_120->mHeap&&!right_value_110->type->mHeap,    _if_conditional194) {
        if(_if_conditional195=string_operator_equals(right_value_110->type->mClass->mName,"void")&&right_value_110->type->mPointerNum==1,        _if_conditional195) {
        }
        else {
            if(_if_conditional196=!right_value_110->type->mDelegate&&!right_value_110->type->mShare&&!gComeGC,            _if_conditional196) {
                err_msg(info,"require right value as heap object(%s)(1)",name_108);
                printf("right type is %s pointer num %d heap %d\n",right_value_110->type->mClass->mName,right_value_110->type->mPointerNum,right_value_110->type->mHeap);
                __result105__ = (_Bool)0;
                name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type2_113,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                child_field_name_122 = come_decrement_ref_count2(child_field_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_140,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result105__;
            }
        }
    }
    if(_if_conditional197=field_type_120->mHeap&&right_type_111->mHeap&&field_type_120->mPointerNum>0&&right_type_111->mPointerNum>0,    _if_conditional197) {
        if(_if_conditional198=left_value_109->type->mPointerNum==1,        _if_conditional198) {
            if(child_field_name_122) {
                c_value_141=(char*)come_increment_ref_count(((char*)(right_value170=xsprintf("%s->%s.%s",left_value_109->c_value,child_field_name_122,name_108))));
                right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                decrement_ref_count_object(field_type_120,c_value_141,info,(_Bool)0);
                std_move(field_type_120,right_type_111,right_value_110,info);
                __dec_obj62=come_value_140->c_value;
                come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value171=xsprintf("%s->%s.%s=%s",left_value_109->c_value,child_field_name_122,name_108,right_value_110->c_value))));
                __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                c_value_141 = come_decrement_ref_count2(c_value_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                c_value_142=(char*)come_increment_ref_count(((char*)(right_value172=xsprintf("%s->%s",left_value_109->c_value,name_108))));
                right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                decrement_ref_count_object(field_type_120,c_value_142,info,(_Bool)0);
                std_move(field_type_120,right_type_111,right_value_110,info);
                __dec_obj63=come_value_140->c_value;
                come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value173=xsprintf("%s->%s=%s",left_value_109->c_value,name_108,right_value_110->c_value))));
                __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                c_value_142 = come_decrement_ref_count2(c_value_142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            if(_if_conditional200=left_value_109->type->mPointerNum==0,            _if_conditional200) {
                if(child_field_name_122) {
                    c_value_143=(char*)come_increment_ref_count(((char*)(right_value174=xsprintf("%s.%s.%s",left_value_109->c_value,child_field_name_122,name_108))));
                    right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    decrement_ref_count_object(field_type_120,c_value_143,info,(_Bool)0);
                    std_move(field_type_120,right_type_111,right_value_110,info);
                    __dec_obj64=come_value_140->c_value;
                    come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value175=xsprintf("%s.%s.%s=%s",left_value_109->c_value,child_field_name_122,name_108,right_value_110->c_value))));
                    __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    c_value_143 = come_decrement_ref_count2(c_value_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    c_value_144=(char*)come_increment_ref_count(((char*)(right_value176=xsprintf("%s.%s",left_value_109->c_value,name_108))));
                    right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    decrement_ref_count_object(field_type_120,c_value_144,info,(_Bool)0);
                    __dec_obj65=right_value_110->c_value;
                    right_value_110->c_value=(char*)come_increment_ref_count(((char*)(right_value177=increment_ref_count_object(right_value_110->type,right_value_110->c_value,info))));
                    __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    __dec_obj66=come_value_140->c_value;
                    come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value178=xsprintf("%s.%s=%s",left_value_109->c_value,name_108,right_value_110->c_value))));
                    __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    c_value_144 = come_decrement_ref_count2(c_value_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_108,left_value_109->type->mPointerNum);
                __result106__ = (_Bool)0;
                name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type2_113,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                child_field_name_122 = come_decrement_ref_count2(child_field_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_140,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result106__;
            }
        }
        right_value_id_145=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_110->c_value));
        if(_if_conditional202=right_value_id_145!=-1,        _if_conditional202) {
            remove_object_from_right_values(right_value_id_145,info);
        }
    }
    else {
        if(_if_conditional203=field_type_120->mHeap&&field_type_120->mPointerNum>0&&right_type_111->mPointerNum>0&&string_operator_equals(right_type_111->mClass->mName,"void"),        _if_conditional203) {
            if(_if_conditional204=left_value_109->type->mPointerNum==1,            _if_conditional204) {
                if(child_field_name_122) {
                    c_value_146=(char*)come_increment_ref_count(((char*)(right_value179=xsprintf("%s->%s.%s",left_value_109->c_value,child_field_name_122,name_108))));
                    right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    decrement_ref_count_object(field_type_120,c_value_146,info,(_Bool)0);
                    __dec_obj67=come_value_140->c_value;
                    come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value180=xsprintf("%s->%s.%s=%s",left_value_109->c_value,child_field_name_122,name_108,right_value_110->c_value))));
                    __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    c_value_146 = come_decrement_ref_count2(c_value_146, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    c_value_147=(char*)come_increment_ref_count(((char*)(right_value181=xsprintf("%s->%s",left_value_109->c_value,name_108))));
                    right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    decrement_ref_count_object(field_type_120,c_value_147,info,(_Bool)0);
                    __dec_obj68=come_value_140->c_value;
                    come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value182=xsprintf("%s->%s=%s",left_value_109->c_value,name_108,right_value_110->c_value))));
                    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    c_value_147 = come_decrement_ref_count2(c_value_147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                if(_if_conditional206=left_value_109->type->mPointerNum==0,                _if_conditional206) {
                    if(child_field_name_122) {
                        c_value_148=(char*)come_increment_ref_count(((char*)(right_value183=xsprintf("%s.%s.%s",left_value_109->c_value,child_field_name_122,name_108))));
                        right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        decrement_ref_count_object(field_type_120,c_value_148,info,(_Bool)0);
                        __dec_obj69=come_value_140->c_value;
                        come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value184=xsprintf("%s.%s.%s=%s",left_value_109->c_value,child_field_name_122,name_108,right_value_110->c_value))));
                        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        c_value_148 = come_decrement_ref_count2(c_value_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        c_value_149=(char*)come_increment_ref_count(((char*)(right_value185=xsprintf("%s.%s",left_value_109->c_value,name_108))));
                        right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        decrement_ref_count_object(field_type_120,c_value_149,info,(_Bool)0);
                        __dec_obj70=come_value_140->c_value;
                        come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value186=xsprintf("%s.%s=%s",left_value_109->c_value,name_108,right_value_110->c_value))));
                        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        c_value_149 = come_decrement_ref_count2(c_value_149, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_108,left_value_109->type->mPointerNum);
                    __result107__ = (_Bool)0;
                    name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_type2_113,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                    child_field_name_122 = come_decrement_ref_count2(child_field_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_140,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    return __result107__;
                }
            }
        }
        else {
            if(_if_conditional208=left_value_109->type->mPointerNum==1,            _if_conditional208) {
                if(child_field_name_122) {
                    __dec_obj71=come_value_140->c_value;
                    come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value187=xsprintf("%s->%s.%s=%s",left_value_109->c_value,child_field_name_122,name_108,right_value_110->c_value))));
                    __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    __dec_obj72=come_value_140->c_value;
                    come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value188=xsprintf("%s->%s=%s",left_value_109->c_value,name_108,right_value_110->c_value))));
                    __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            else {
                if(_if_conditional210=left_value_109->type->mPointerNum==0,                _if_conditional210) {
                    if(child_field_name_122) {
                        __dec_obj73=come_value_140->c_value;
                        come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value189=xsprintf("%s.%s.%s=%s",left_value_109->c_value,child_field_name_122,name_108,right_value_110->c_value))));
                        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        __dec_obj74=come_value_140->c_value;
                        come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value190=xsprintf("%s.%s=%s",left_value_109->c_value,name_108,right_value_110->c_value))));
                        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                }
                else {
                    err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_108,left_value_109->type->mPointerNum);
                    __result108__ = (_Bool)0;
                    name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_type2_113,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                    child_field_name_122 = come_decrement_ref_count2(child_field_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_140,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    return __result108__;
                }
            }
        }
    }
    __dec_obj75=come_value_140->type;
    come_value_140->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value191=sType_clone(field_type_120))));
    come_call_finalizer3(__dec_obj75,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value191,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_140->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_140));
    add_come_last_code(info,"%s;\n",come_value_140->c_value);
    __result109__ = (_Bool)1;
    name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type2_113,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(field_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
    child_field_name_122 = come_decrement_ref_count2(child_field_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_140,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result109__;
    name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type2_113,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(field_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
    child_field_name_122 = come_decrement_ref_count2(child_field_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_140,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_115;
unsigned int hash_116;
unsigned int it_117;
_Bool _while_condtional19;
_Bool _if_conditional171;
_Bool _if_conditional172;
struct sClass* __result90__;
_Bool _if_conditional180;
_Bool _if_conditional181;
struct sClass* __result91__;
struct sClass* __result92__;
struct sClass* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_115, 0, sizeof(struct sClass*));
memset(&hash_116, 0, sizeof(unsigned int));
memset(&it_117, 0, sizeof(unsigned int));
        memset(&default_value_115,0,sizeof(struct sClass*));
        hash_116=string_get_hash_key(((char*)key))%self->size;
        it_117=hash_116;
        while(_while_condtional19=(_Bool)1,        _while_condtional19) {
            if(_if_conditional171=self->item_existance[it_117],            _if_conditional171) {
                if(_if_conditional172=string_equals(self->keys[it_117],key),                _if_conditional172) {
                    __result90__ = __result_obj__ = self->items[it_117];
                    come_call_finalizer3(default_value_115,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    return __result90__;
                }
                it_117++;
                if(_if_conditional180=it_117>=self->size,                _if_conditional180) {
                    it_117=0;
                }
                else {
                    if(_if_conditional181=it_117==hash_116,                    _if_conditional181) {
                        __result91__ = __result_obj__ = default_value_115;
                        come_call_finalizer3(default_value_115,sClass_finalize, 0, 0, 1, 0, (void*)0);
                        return __result91__;
                    }
                }
            }
            else {
                __result92__ = __result_obj__ = default_value_115;
                come_call_finalizer3(default_value_115,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result92__;
            }
        }
        __result93__ = __result_obj__ = default_value_115;
        come_call_finalizer3(default_value_115,sClass_finalize, 0, 0, 1, 0, (void*)0);
        return __result93__;
        come_call_finalizer3(default_value_115,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional173;
_Bool _if_conditional174;
_Bool _if_conditional178;
_Bool _if_conditional179;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional173=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional173) {
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional174=self!=((void*)0)&&self->mFields!=((void*)0),                        _if_conditional174) {
                            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional178=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                        _if_conditional178) {
                            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional179=self!=((void*)0)&&self->mParentClassName!=((void*)0),                        _if_conditional179) {
                            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_118;
_Bool _while_condtional20;
struct list_item$1tuple2$2charphsTypephph* prev_it_119;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_118, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_119, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                it_118=self->head;
                                while(_while_condtional20=it_118!=((void*)0),                                _while_condtional20) {
                                    prev_it_119=it_118;
                                    it_118=it_118->next;
                                    come_call_finalizer3(prev_it_119,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional175;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional175=self!=((void*)0)&&self->item!=((void*)0),                                        _if_conditional175) {
                                            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional176;
_Bool _if_conditional177;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional176=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional176) {
                                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional177=self!=((void*)0)&&self->v2!=((void*)0),                                                _if_conditional177) {
                                                    come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional183;
struct tuple2$2charphsTypeph* result_124;
struct tuple2$2charphsTypeph* __result95__;
_Bool _if_conditional184;
struct tuple2$2charphsTypeph* __result96__;
struct tuple2$2charphsTypeph* result_125;
struct tuple2$2charphsTypeph* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_124, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_125, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional183=self==((void*)0),        _if_conditional183) {
            memset(&result_124,0,sizeof(struct tuple2$2charphsTypeph*));
            __result95__ = __result_obj__ = result_124;
            return __result95__;
        }
        self->it=self->head;
        if(self->it) {
            __result96__ = __result_obj__ = self->it->item;
            return __result96__;
        }
        memset(&result_125,0,sizeof(struct tuple2$2charphsTypeph*));
        __result97__ = __result_obj__ = result_125;
        return __result97__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result98__;
memset(&__result_obj__, 0, sizeof(void*));
        __result98__ = self==((void*)0)||self->it==((void*)0);
        return __result98__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional185;
struct tuple2$2charphsTypeph* result_127;
struct tuple2$2charphsTypeph* __result99__;
_Bool _if_conditional186;
struct tuple2$2charphsTypeph* __result100__;
struct tuple2$2charphsTypeph* result_128;
struct tuple2$2charphsTypeph* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_127, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_128, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional185=self==((void*)0)||self->it==((void*)0),        _if_conditional185) {
            memset(&result_127,0,sizeof(struct tuple2$2charphsTypeph*));
            __result99__ = __result_obj__ = result_127;
            return __result99__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result100__ = __result_obj__ = self->it->item;
            return __result100__;
        }
        memset(&result_128,0,sizeof(struct tuple2$2charphsTypeph*));
        __result101__ = __result_obj__ = result_128;
        return __result101__;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional188;
int __result102__;
int __result103__;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional188=self==((void*)0),        _if_conditional188) {
            __result102__ = 0;
            return __result102__;
        }
        __result103__ = self->len;
        return __result103__;
}

struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info){
void* __result_obj__;
void* right_value192;
char* __dec_obj76;
void* right_value193;
struct sNode* __dec_obj77;
struct sNullCheckNode* __result110__;
struct sNullCheckNode* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value192 = (void*)0;
right_value193 = (void*)0;
    self->sline=info->sline;
    __dec_obj76=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value192=__builtin_string(info->sname))));
    __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj77=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value193=sNode_clone(left))));
    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value193) { right_value193 = come_decrement_ref_count2(right_value193, ((struct sNode*)right_value193)->finalize, ((struct sNode*)right_value193)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->mOnlyNullCecker=only_null_checker;
    __result110__ = __result_obj__ = self;
    come_call_finalizer3(self,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result110__;
    __result111__ = __result_obj__ = self;
    come_call_finalizer3(self,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result111__;
    come_call_finalizer3(self,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sNullCheckNode_terminated(struct sNullCheckNode* self){
void* __result_obj__;
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
    __result112__ = (_Bool)0;
    return __result112__;
}

char* sNullCheckNode_kind(struct sNullCheckNode* self){
void* __result_obj__;
void* right_value194;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
right_value194 = (void*)0;
    __result113__ = __result_obj__ = ((char*)(right_value194=__builtin_string("sNullCheckNode")));
    right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result113__;
}

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_150;
_Bool _if_conditional214;
_Bool __result114__;
void* right_value195;
struct CVALUE* left_value_151;
_Bool _if_conditional215;
void* right_value196;
char* method_name_152;
_Bool _if_conditional220;
struct sType* obj_type_155;
_Bool _if_conditional221;
struct sType* obj_type2_156;
void* right_value197;
void* right_value198;
char* __dec_obj78;
struct sFun* fun_157;
_Bool _if_conditional222;
_Bool __result119__;
void* right_value199;
struct sType* type_158;
void* right_value200;
struct CVALUE* come_value_159;
void* right_value201;
char* __dec_obj79;
void* right_value202;
struct sType* __dec_obj80;
_Bool _if_conditional223;
_Bool _if_conditional224;
void* right_value203;
struct CVALUE* come_value_160;
void* right_value204;
void* right_value205;
char* __dec_obj81;
void* right_value206;
struct sType* __dec_obj82;
_Bool __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_150, 0, sizeof(struct sNode*));
right_value195 = (void*)0;
memset(&left_value_151, 0, sizeof(struct CVALUE*));
right_value196 = (void*)0;
memset(&method_name_152, 0, sizeof(char*));
memset(&obj_type_155, 0, sizeof(struct sType*));
memset(&obj_type2_156, 0, sizeof(struct sType*));
right_value197 = (void*)0;
right_value198 = (void*)0;
memset(&fun_157, 0, sizeof(struct sFun*));
right_value199 = (void*)0;
memset(&type_158, 0, sizeof(struct sType*));
right_value200 = (void*)0;
memset(&come_value_159, 0, sizeof(struct CVALUE*));
right_value201 = (void*)0;
right_value202 = (void*)0;
right_value203 = (void*)0;
memset(&come_value_160, 0, sizeof(struct CVALUE*));
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
    left_150=self->mLeft;
    if(_if_conditional214=!node_compile(left_150,info),    _if_conditional214) {
        __result114__ = (_Bool)0;
        return __result114__;
    }
    left_value_151=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value195=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value195,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    if(_if_conditional215=!self->mOnlyNullCecker&&left_value_151->type->mNoSolvedGenericsType&&left_value_151->type->mNoSolvedGenericsType->v1&&left_value_151->type->mNoSolvedGenericsType->v1->mClass&&string_operator_equals(left_value_151->type->mNoSolvedGenericsType->v1->mClass->mName,"optional"),    _if_conditional215) {
        method_name_152=(char*)come_increment_ref_count(((char*)(right_value196=create_method_name(left_value_151->type,(_Bool)0,"expect",info,(_Bool)1))));
        right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional220=map$2charphsFunph_at(info->funcs,method_name_152,((void*)0))==((void*)0),        _if_conditional220) {
            obj_type_155=left_value_151->type->mNoSolvedGenericsType->v1;
            if(_if_conditional221=list$1sTypeph_length(obj_type_155->mGenericsTypes)>0,            _if_conditional221) {
                obj_type2_156=left_value_151->type;
                __dec_obj78=method_name_152;
                method_name_152=(char*)come_increment_ref_count(((char*)(right_value198=make_generics_function(obj_type2_156,(char*)come_increment_ref_count(((char*)(right_value197=__builtin_string("expect")))),info,(_Bool)1))));
                __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                err_msg(info,"require expect implementation(%s)",left_value_151->type->mClass->mName);
                exit(1);
            }
        }
        fun_157=map$2charphsFunphp_operator_load_element(info->funcs,method_name_152);
        if(_if_conditional222=fun_157==((void*)0),        _if_conditional222) {
            err_msg(info,"function not found(%s)",method_name_152);
            __result119__ = (_Bool)1;
            method_name_152 = come_decrement_ref_count2(method_name_152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_151,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result119__;
        }
        type_158=(struct sType*)come_increment_ref_count(((struct sType*)(right_value199=solve_generics(fun_157->mResultType,left_value_151->type,info))));
        come_call_finalizer3(right_value199,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_159=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value200=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 419, "CVALUE"))));
        come_call_finalizer3(right_value200,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj79=come_value_159->c_value;
        come_value_159->c_value=(char*)come_increment_ref_count(((char*)(right_value201=xsprintf("%s(%s)",method_name_152,left_value_151->c_value))));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj80=come_value_159->type;
        come_value_159->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value202=sType_clone(type_158))));
        come_call_finalizer3(__dec_obj80,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value202,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_159->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_159));
        add_come_last_code(info,"%s;\n",come_value_159->c_value);
        method_name_152 = come_decrement_ref_count2(method_name_152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_158,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_159,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional223=!gComeDebug,        _if_conditional223) {
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_151));
        }
        else {
            if(_if_conditional224=left_value_151->type->mPointerNum>0,            _if_conditional224) {
                come_value_160=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value203=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 433, "CVALUE"))));
                come_call_finalizer3(right_value203,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                __dec_obj81=come_value_160->c_value;
                come_value_160->c_value=(char*)come_increment_ref_count(((char*)(right_value205=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value204=make_type_name_string(left_value_151->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_151->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
                __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __dec_obj82=come_value_160->type;
                come_value_160->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value206=sType_clone(left_value_151->type))));
                come_call_finalizer3(__dec_obj82,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value206,sType_finalize, 0, 1, 0, 0, __result_obj__);
                come_value_160->var=((void*)0);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_160));
                add_come_last_code(info,"%s;\n",come_value_160->c_value);
                come_call_finalizer3(come_value_160,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_151));
            }
        }
    }
    __result120__ = (_Bool)1;
    come_call_finalizer3(left_value_151,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result120__;
    come_call_finalizer3(left_value_151,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_153;
unsigned int it_154;
_Bool _while_condtional21;
_Bool _if_conditional216;
_Bool _if_conditional217;
struct sFun* __result115__;
_Bool _if_conditional218;
_Bool _if_conditional219;
struct sFun* __result116__;
struct sFun* __result117__;
struct sFun* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_153, 0, sizeof(unsigned int));
memset(&it_154, 0, sizeof(unsigned int));
            hash_153=string_get_hash_key(((char*)key))%self->size;
            it_154=hash_153;
            while(_while_condtional21=(_Bool)1,            _while_condtional21) {
                if(_if_conditional216=self->item_existance[it_154],                _if_conditional216) {
                    if(_if_conditional217=string_equals(self->keys[it_154],key),                    _if_conditional217) {
                        __result115__ = __result_obj__ = self->items[it_154];
                        come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result115__;
                    }
                    it_154++;
                    if(_if_conditional218=it_154>=self->size,                    _if_conditional218) {
                        it_154=0;
                    }
                    else {
                        if(_if_conditional219=it_154==hash_153,                        _if_conditional219) {
                            __result116__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result116__;
                        }
                    }
                }
                else {
                    __result117__ = __result_obj__ = default_value;
                    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result117__;
                }
            }
            __result118__ = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result118__;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
}

struct sNullableNode* sNullableNode_initialize(struct sNullableNode* self, struct sNode* left, struct sInfo* info){
void* __result_obj__;
void* right_value207;
char* __dec_obj83;
void* right_value208;
struct sNode* __dec_obj84;
struct sNullableNode* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
right_value207 = (void*)0;
right_value208 = (void*)0;
    self->sline=info->sline;
    __dec_obj83=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value207=__builtin_string(info->sname))));
    __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj84=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value208=sNode_clone(left))));
    if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count2(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value208) { right_value208 = come_decrement_ref_count2(right_value208, ((struct sNode*)right_value208)->finalize, ((struct sNode*)right_value208)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result121__ = __result_obj__ = self;
    come_call_finalizer3(self,sNullableNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result121__;
    come_call_finalizer3(self,sNullableNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sNullableNode_terminated(struct sNullableNode* self){
void* __result_obj__;
_Bool __result122__;
memset(&__result_obj__, 0, sizeof(void*));
    __result122__ = (_Bool)0;
    return __result122__;
}

char* sNullableNode_kind(struct sNullableNode* self){
void* __result_obj__;
void* right_value209;
char* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value209 = (void*)0;
    __result123__ = __result_obj__ = ((char*)(right_value209=__builtin_string("sNullableNode")));
    right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result123__;
}

_Bool sNullableNode_compile(struct sNullableNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_161;
_Bool _if_conditional227;
_Bool __result124__;
void* right_value210;
struct CVALUE* left_value_162;
_Bool _if_conditional228;
void* right_value214;
struct CVALUE* come_value_164;
_Bool __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_161, 0, sizeof(struct sNode*));
right_value210 = (void*)0;
memset(&left_value_162, 0, sizeof(struct CVALUE*));
right_value214 = (void*)0;
memset(&come_value_164, 0, sizeof(struct CVALUE*));
    left_161=self->mLeft;
    if(_if_conditional227=!node_compile(left_161,info),    _if_conditional227) {
        __result124__ = (_Bool)0;
        return __result124__;
    }
    left_value_162=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value210=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value210,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    if(_if_conditional228=left_value_162->type->mPointerNum>0&&left_value_162->type->mNullValue,    _if_conditional228) {
        come_value_164=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value214=CVALUE_clone(left_value_162))));
        come_call_finalizer3(right_value214,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_164->type->mNullValue=(_Bool)0;
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_164));
        add_come_last_code(info,"%s;\n",come_value_164->c_value);
        come_call_finalizer3(come_value_164,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_162));
    }
    __result127__ = (_Bool)1;
    come_call_finalizer3(left_value_162,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result127__;
    come_call_finalizer3(left_value_162,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional229;
struct CVALUE* __result125__;
void* right_value211;
struct CVALUE* result_163;
_Bool _if_conditional230;
void* right_value212;
char* __dec_obj85;
_Bool _if_conditional231;
void* right_value213;
struct sType* __dec_obj86;
_Bool _if_conditional232;
struct CVALUE* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value211 = (void*)0;
memset(&result_163, 0, sizeof(struct CVALUE*));
right_value212 = (void*)0;
right_value213 = (void*)0;
            if(_if_conditional229=self==(void*)0,            _if_conditional229) {
                __result125__ = __result_obj__ = (void*)0;
                return __result125__;
            }
            result_163=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value211=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"))));
            come_call_finalizer3(right_value211,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional230=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional230) {
                __dec_obj85=result_163->c_value;
                result_163->c_value=(char*)come_increment_ref_count(((char*)(right_value212=string_clone(self->c_value))));
                __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional231=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional231) {
                __dec_obj86=result_163->type;
                result_163->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value213=sType_clone(self->type))));
                come_call_finalizer3(__dec_obj86,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value213,sType_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional232=self!=((void*)0),            _if_conditional232) {
                result_163->var=self->var;
            }
            __result126__ = __result_obj__ = result_163;
            come_call_finalizer3(result_163,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
            return __result126__;
            come_call_finalizer3(result_163,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sRangeCheckNode* sRangeCheckNode_initialize(struct sRangeCheckNode* self, struct sNode* left, struct sNode* begin, struct sNode* end, struct sInfo* info){
void* __result_obj__;
void* right_value215;
char* __dec_obj87;
void* right_value216;
struct sNode* __dec_obj88;
void* right_value217;
struct sNode* __dec_obj89;
void* right_value218;
struct sNode* __dec_obj90;
struct sRangeCheckNode* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
    self->sline=info->sline;
    __dec_obj87=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value215=__builtin_string(info->sname))));
    __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj88=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value216=sNode_clone(left))));
    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count2(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value216) { right_value216 = come_decrement_ref_count2(right_value216, ((struct sNode*)right_value216)->finalize, ((struct sNode*)right_value216)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj89=self->mBegin;
    self->mBegin=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value217=sNode_clone(begin))));
    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count2(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value217) { right_value217 = come_decrement_ref_count2(right_value217, ((struct sNode*)right_value217)->finalize, ((struct sNode*)right_value217)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj90=self->mEnd;
    self->mEnd=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value218=sNode_clone(end))));
    if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count2(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value218) { right_value218 = come_decrement_ref_count2(right_value218, ((struct sNode*)right_value218)->finalize, ((struct sNode*)right_value218)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result128__ = __result_obj__ = self;
    come_call_finalizer3(self,sRangeCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result128__;
    come_call_finalizer3(self,sRangeCheckNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sRangeCheckNode_terminated(struct sRangeCheckNode* self){
void* __result_obj__;
_Bool __result129__;
memset(&__result_obj__, 0, sizeof(void*));
    __result129__ = (_Bool)0;
    return __result129__;
}

char* sRangeCheckNode_kind(struct sRangeCheckNode* self){
void* __result_obj__;
void* right_value219;
char* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value219 = (void*)0;
    __result130__ = __result_obj__ = ((char*)(right_value219=__builtin_string("sRangeCheckNode")));
    right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result130__;
}

_Bool sRangeCheckNode_compile(struct sRangeCheckNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_165;
_Bool _if_conditional237;
_Bool __result131__;
void* right_value220;
struct CVALUE* left_value_166;
struct sNode* begin_167;
_Bool _if_conditional238;
_Bool __result132__;
void* right_value221;
struct CVALUE* begin_value_168;
struct sNode* end_169;
_Bool _if_conditional239;
_Bool __result133__;
void* right_value222;
struct CVALUE* end_value_170;
_Bool _if_conditional240;
_Bool _if_conditional241;
void* right_value223;
struct CVALUE* come_value_171;
void* right_value224;
void* right_value225;
char* __dec_obj91;
void* right_value226;
struct sType* __dec_obj92;
void* right_value227;
struct CVALUE* come_value_172;
void* right_value228;
void* right_value229;
char* __dec_obj93;
void* right_value230;
struct sType* __dec_obj94;
_Bool __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_165, 0, sizeof(struct sNode*));
right_value220 = (void*)0;
memset(&left_value_166, 0, sizeof(struct CVALUE*));
memset(&begin_167, 0, sizeof(struct sNode*));
right_value221 = (void*)0;
memset(&begin_value_168, 0, sizeof(struct CVALUE*));
memset(&end_169, 0, sizeof(struct sNode*));
right_value222 = (void*)0;
memset(&end_value_170, 0, sizeof(struct CVALUE*));
right_value223 = (void*)0;
memset(&come_value_171, 0, sizeof(struct CVALUE*));
right_value224 = (void*)0;
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
memset(&come_value_172, 0, sizeof(struct CVALUE*));
right_value228 = (void*)0;
right_value229 = (void*)0;
right_value230 = (void*)0;
    left_165=self->mLeft;
    if(_if_conditional237=!node_compile(left_165,info),    _if_conditional237) {
        __result131__ = (_Bool)0;
        return __result131__;
    }
    left_value_166=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value220=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value220,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    begin_167=self->mBegin;
    if(_if_conditional238=!node_compile(begin_167,info),    _if_conditional238) {
        __result132__ = (_Bool)0;
        come_call_finalizer3(left_value_166,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result132__;
    }
    begin_value_168=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value221=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value221,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    end_169=self->mEnd;
    if(_if_conditional239=!node_compile(end_169,info),    _if_conditional239) {
        __result133__ = (_Bool)0;
        come_call_finalizer3(left_value_166,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(begin_value_168,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result133__;
    }
    end_value_170=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value222=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value222,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    if(_if_conditional240=left_value_166->type->mPointerNum>0,    _if_conditional240) {
        if(_if_conditional241=!gComeDebug,        _if_conditional241) {
            come_value_171=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value223=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 560, "CVALUE"))));
            come_call_finalizer3(right_value223,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            __dec_obj91=come_value_171->c_value;
            come_value_171->c_value=(char*)come_increment_ref_count(((char*)(right_value225=xsprintf("(*((%s)%s))",((char*)(right_value224=make_type_name_string(left_value_166->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_166->c_value))));
            __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            left_value_166->type->mPointerNum--;
            __dec_obj92=come_value_171->type;
            come_value_171->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value226=sType_clone(left_value_166->type))));
            come_call_finalizer3(__dec_obj92,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value226,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_value_171->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_171));
            add_come_last_code(info,"%s;\n",come_value_171->c_value);
            come_call_finalizer3(come_value_171,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            come_value_172=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value227=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 573, "CVALUE"))));
            come_call_finalizer3(right_value227,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            __dec_obj93=come_value_172->c_value;
            come_value_172->c_value=(char*)come_increment_ref_count(((char*)(right_value229=xsprintf("(*((%s)come_range_check(%s, %s, %s, \"%s\", %d)))",((char*)(right_value228=make_type_name_string(left_value_166->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_166->c_value,begin_value_168->c_value,end_value_170->c_value,info->sname,info->sline))));
            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            left_value_166->type->mPointerNum--;
            __dec_obj94=come_value_172->type;
            come_value_172->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value230=sType_clone(left_value_166->type))));
            come_call_finalizer3(__dec_obj94,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value230,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_value_172->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_172));
            add_come_last_code(info,"%s;\n",come_value_172->c_value);
            come_call_finalizer3(come_value_172,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_166));
    }
    __result134__ = (_Bool)1;
    come_call_finalizer3(left_value_166,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(begin_value_168,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(end_value_170,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result134__;
    come_call_finalizer3(left_value_166,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(begin_value_168,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(end_value_170,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value231;
char* __dec_obj95;
void* right_value232;
struct sNode* __dec_obj96;
void* right_value233;
char* __dec_obj97;
struct sLoadFieldNode* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
right_value231 = (void*)0;
right_value232 = (void*)0;
right_value233 = (void*)0;
    self->sline=info->sline;
    __dec_obj95=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value231=__builtin_string(info->sname))));
    __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj96=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value232=sNode_clone(left))));
    if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count2(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value232) { right_value232 = come_decrement_ref_count2(right_value232, ((struct sNode*)right_value232)->finalize, ((struct sNode*)right_value232)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj97=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value233=__builtin_string(name))));
    __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result135__ = __result_obj__ = self;
    come_call_finalizer3(self,sLoadFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result135__;
    come_call_finalizer3(self,sLoadFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sLoadFieldNode_terminated(struct sLoadFieldNode* self){
void* __result_obj__;
_Bool __result136__;
memset(&__result_obj__, 0, sizeof(void*));
    __result136__ = (_Bool)0;
    return __result136__;
}

char* sLoadFieldNode_kind(struct sLoadFieldNode* self){
void* __result_obj__;
void* right_value234;
char* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
right_value234 = (void*)0;
    __result137__ = __result_obj__ = ((char*)(right_value234=__builtin_string("sLoadFieldNode")));
    right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result137__;
}

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_173;
void* right_value235;
char* name_174;
_Bool _if_conditional245;
_Bool __result138__;
void* right_value236;
struct CVALUE* left_value_175;
_Bool _if_conditional246;
void* right_value237;
void* right_value238;
char* __dec_obj98;
struct sType* left_type_176;
void* right_value239;
struct sType* left_type2_177;
struct sClass* klass_178;
struct sType* field_type_179;
int index_180;
char* child_field_name_181;
_Bool _if_conditional247;
_Bool __result139__;
struct list$1tuple2$2charphsTypephph* o2_saved_182;
struct tuple2$2charphsTypeph* field_183;
struct tuple2$2charphsTypeph* multiple_assign_var4;
char* field_name_184;
struct sType* field_type2_185;
_Bool _if_conditional248;
void* right_value240;
struct sType* __dec_obj99;
_Bool _if_conditional249;
struct list$1tuple2$2charphsTypephph* o2_saved_186;
struct tuple2$2charphsTypeph* field_187;
struct tuple2$2charphsTypeph* multiple_assign_var5;
char* field_name_188;
struct sType* field_type2_189;
struct sClass* klass2_190;
struct list$1tuple2$2charphsTypephph* o2_saved_191;
struct tuple2$2charphsTypeph* field2_192;
struct tuple2$2charphsTypeph* multiple_assign_var6;
char* field_name2_193;
struct sType* field_type3_194;
_Bool _if_conditional250;
void* right_value241;
char* __dec_obj100;
void* right_value242;
struct sType* __dec_obj101;
_Bool _if_conditional251;
_Bool _if_conditional252;
void* right_value243;
struct sType* __dec_obj102;
_Bool _if_conditional253;
_Bool __result140__;
void* right_value244;
struct CVALUE* come_value_195;
_Bool _if_conditional254;
_Bool _if_conditional255;
void* right_value245;
char* __dec_obj103;
void* right_value246;
char* __dec_obj104;
_Bool _if_conditional256;
void* right_value247;
char* __dec_obj105;
void* right_value248;
char* __dec_obj106;
void* right_value249;
struct sType* __dec_obj107;
_Bool _if_conditional257;
_Bool __result141__;
_Bool _if_conditional259;
void* right_value250;
struct sType* __dec_obj108;
_Bool __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_173, 0, sizeof(struct sNode*));
right_value235 = (void*)0;
memset(&name_174, 0, sizeof(char*));
right_value236 = (void*)0;
memset(&left_value_175, 0, sizeof(struct CVALUE*));
right_value237 = (void*)0;
right_value238 = (void*)0;
memset(&left_type_176, 0, sizeof(struct sType*));
right_value239 = (void*)0;
memset(&left_type2_177, 0, sizeof(struct sType*));
memset(&klass_178, 0, sizeof(struct sClass*));
memset(&field_type_179, 0, sizeof(struct sType*));
memset(&index_180, 0, sizeof(int));
memset(&child_field_name_181, 0, sizeof(char*));
memset(&o2_saved_182, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_183, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_184, 0, sizeof(char*));
memset(&field_type2_185, 0, sizeof(struct sType*));
memset(&field_name_184, 0, sizeof(char*));
memset(&field_type2_185, 0, sizeof(struct sType*));
right_value240 = (void*)0;
memset(&o2_saved_186, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_187, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_188, 0, sizeof(char*));
memset(&field_type2_189, 0, sizeof(struct sType*));
memset(&field_name_188, 0, sizeof(char*));
memset(&field_type2_189, 0, sizeof(struct sType*));
memset(&klass2_190, 0, sizeof(struct sClass*));
memset(&o2_saved_191, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field2_192, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name2_193, 0, sizeof(char*));
memset(&field_type3_194, 0, sizeof(struct sType*));
memset(&field_name2_193, 0, sizeof(char*));
memset(&field_type3_194, 0, sizeof(struct sType*));
right_value241 = (void*)0;
right_value242 = (void*)0;
right_value243 = (void*)0;
right_value244 = (void*)0;
memset(&come_value_195, 0, sizeof(struct CVALUE*));
right_value245 = (void*)0;
right_value246 = (void*)0;
right_value247 = (void*)0;
right_value248 = (void*)0;
right_value249 = (void*)0;
right_value250 = (void*)0;
    left_173=self->mLeft;
    name_174=(char*)come_increment_ref_count(((char*)(right_value235=__builtin_string(self->mName))));
    right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional245=!node_compile(left_173,info),    _if_conditional245) {
        __result138__ = (_Bool)0;
        name_174 = come_decrement_ref_count2(name_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result138__;
    }
    left_value_175=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value236=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value236,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    if(_if_conditional246=gComeDebug&&left_value_175->type->mPointerNum>0,    _if_conditional246) {
        __dec_obj98=left_value_175->c_value;
        left_value_175->c_value=(char*)come_increment_ref_count(((char*)(right_value238=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value237=make_type_name_string(left_value_175->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_175->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    left_type_176=left_value_175->type;
    left_type2_177=(struct sType*)come_increment_ref_count(((struct sType*)(right_value239=solve_generics(left_type_176,left_type_176,info))));
    come_call_finalizer3(right_value239,sType_finalize, 0, 1, 0, 0, __result_obj__);
    klass_178=left_type2_177->mClass;
    klass_178=map$2charphsClassphp_operator_load_element(info->classes,klass_178->mName);
    field_type_179=((void*)0);
    index_180=0;
    child_field_name_181=((void*)0);
    klass_178=map$2charphsClassphp_operator_load_element(info->classes,klass_178->mName);
    if(_if_conditional247=klass_178==((void*)0)||klass_178->mFields==((void*)0),    _if_conditional247) {
        err_msg(info,"invalid class %s",klass_178->mName);
        __result139__ = (_Bool)0;
        name_174 = come_decrement_ref_count2(name_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_177,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_179,sType_finalize, 0, 0, 0, 0, (void*)0);
        child_field_name_181 = come_decrement_ref_count2(child_field_name_181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result139__;
    }
    for(    o2_saved_182=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_178->mFields)),field_183=list$1tuple2$2charphsTypephph_begin((o2_saved_182));    !list$1tuple2$2charphsTypephph_end((o2_saved_182));    field_183=list$1tuple2$2charphsTypephph_next((o2_saved_182))    ){
        multiple_assign_var4=field_183;
        field_name_184=(char*)come_increment_ref_count(multiple_assign_var4->v1);
        field_type2_185=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
        if(_if_conditional248=string_operator_equals(field_name_184,name_174),        _if_conditional248) {
            __dec_obj99=field_type_179;
            field_type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value240=sType_clone(field_type2_185))));
            come_call_finalizer3(__dec_obj99,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value240,sType_finalize, 0, 1, 0, 0, __result_obj__);
            field_name_184 = come_decrement_ref_count2(field_name_184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_185,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        index_180++;
        field_name_184 = come_decrement_ref_count2(field_name_184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type2_185,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_182,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(_if_conditional249=index_180==list$1tuple2$2charphsTypephph_length(klass_178->mFields),    _if_conditional249) {
        index_180=0;
        for(        o2_saved_186=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_178->mFields)),field_187=list$1tuple2$2charphsTypephph_begin((o2_saved_186));        !list$1tuple2$2charphsTypephph_end((o2_saved_186));        field_187=list$1tuple2$2charphsTypephph_next((o2_saved_186))        ){
            multiple_assign_var5=field_187;
            field_name_188=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            field_type2_189=(struct sType*)come_increment_ref_count(multiple_assign_var5->v2);
            klass2_190=field_type2_189->mClass;
            for(            o2_saved_191=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_190->mFields)),field2_192=list$1tuple2$2charphsTypephph_begin((o2_saved_191));            !list$1tuple2$2charphsTypephph_end((o2_saved_191));            field2_192=list$1tuple2$2charphsTypephph_next((o2_saved_191))            ){
                multiple_assign_var6=field2_192;
                field_name2_193=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                field_type3_194=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
                if(_if_conditional250=string_operator_equals(field_name2_193,name_174),                _if_conditional250) {
                    __dec_obj100=child_field_name_181;
                    child_field_name_181=(char*)come_increment_ref_count(((char*)(right_value241=__builtin_string(field_name_188))));
                    __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    __dec_obj101=field_type_179;
                    field_type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value242=sType_clone(field_type3_194))));
                    come_call_finalizer3(__dec_obj101,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value242,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    field_name2_193 = come_decrement_ref_count2(field_name2_193, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type3_194,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
                field_name2_193 = come_decrement_ref_count2(field_name2_193, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type3_194,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_191,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(child_field_name_181) {
                field_name_188 = come_decrement_ref_count2(field_name_188, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_189,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            if(_if_conditional252=string_operator_equals(field_name_188,name_174),            _if_conditional252) {
                __dec_obj102=field_type_179;
                field_type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value243=sType_clone(field_type2_189))));
                come_call_finalizer3(__dec_obj102,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value243,sType_finalize, 0, 1, 0, 0, __result_obj__);
                field_name_188 = come_decrement_ref_count2(field_name_188, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_189,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            index_180++;
            field_name_188 = come_decrement_ref_count2(field_name_188, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_189,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_186,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(_if_conditional253=index_180==list$1tuple2$2charphsTypephph_length(klass_178->mFields),        _if_conditional253) {
            err_msg(info,"field not found(%s) in %s(2)",name_174,klass_178->mName);
            __result140__ = (_Bool)0;
            name_174 = come_decrement_ref_count2(name_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_177,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_179,sType_finalize, 0, 0, 0, 0, (void*)0);
            child_field_name_181 = come_decrement_ref_count2(child_field_name_181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result140__;
        }
    }
    come_value_195=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value244=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 694, "CVALUE"))));
    come_call_finalizer3(right_value244,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional254=left_value_175->type->mPointerNum>0,    _if_conditional254) {
        if(child_field_name_181) {
            __dec_obj103=come_value_195->c_value;
            come_value_195->c_value=(char*)come_increment_ref_count(((char*)(right_value245=xsprintf("%s->%s.%s",left_value_175->c_value,child_field_name_181,name_174))));
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj104=come_value_195->c_value;
            come_value_195->c_value=(char*)come_increment_ref_count(((char*)(right_value246=xsprintf("%s->%s",left_value_175->c_value,name_174))));
            __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    else {
        if(child_field_name_181) {
            __dec_obj105=come_value_195->c_value;
            come_value_195->c_value=(char*)come_increment_ref_count(((char*)(right_value247=xsprintf("%s.%s.%s",left_value_175->c_value,child_field_name_181,name_174))));
            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj106=come_value_195->c_value;
            come_value_195->c_value=(char*)come_increment_ref_count(((char*)(right_value248=xsprintf("%s.%s",left_value_175->c_value,name_174))));
            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    __dec_obj107=come_value_195->type;
    come_value_195->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value249=sType_clone(field_type_179))));
    come_call_finalizer3(__dec_obj107,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value249,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_195->var=((void*)0);
    if(_if_conditional257=field_type_179==((void*)0),    _if_conditional257) {
        err_msg(info,"no field(%s)\n",name_174);
        __result141__ = (_Bool)0;
        name_174 = come_decrement_ref_count2(name_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_177,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_179,sType_finalize, 0, 0, 0, 0, (void*)0);
        child_field_name_181 = come_decrement_ref_count2(child_field_name_181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_195,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result141__;
    }
    if(_if_conditional259=list$1sNodeph_length(come_value_195->type->mArrayNum)==1,    _if_conditional259) {
        __dec_obj108=come_value_195->type->mOriginalLoadVarType->v1;
        come_value_195->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value250=sType_clone(come_value_195->type))));
        come_call_finalizer3(__dec_obj108,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value250,sType_finalize, 0, 1, 0, 0, __result_obj__);
        list$1sNodeph_reset(come_value_195->type->mArrayNum);
        come_value_195->type->mPointerNum++;
        come_value_195->type->mOriginalTypeNamePointerNum=come_value_195->type->mPointerNum;
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_195));
    __result145__ = (_Bool)1;
    name_174 = come_decrement_ref_count2(name_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type2_177,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(field_type_179,sType_finalize, 0, 0, 0, 0, (void*)0);
    child_field_name_181 = come_decrement_ref_count2(child_field_name_181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_195,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result145__;
    name_174 = come_decrement_ref_count2(name_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type2_177,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(field_type_179,sType_finalize, 0, 0, 0, 0, (void*)0);
    child_field_name_181 = come_decrement_ref_count2(child_field_name_181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_195,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional258;
int __result142__;
int __result143__;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional258=self==((void*)0),        _if_conditional258) {
            __result142__ = 0;
            return __result142__;
        }
        __result143__ = self->len;
        return __result143__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_196;
_Bool _while_condtional22;
struct list_item$1sNodeph* prev_it_197;
struct list$1sNodeph* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_196, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_197, 0, sizeof(struct list_item$1sNodeph*));
            it_196=self->head;
            while(_while_condtional22=it_196!=((void*)0),            _while_condtional22) {
                prev_it_197=it_196;
                it_196=it_196->next;
                come_call_finalizer3(prev_it_197,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result144__ = __result_obj__ = self;
            return __result144__;
}

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value251;
char* __dec_obj109;
void* right_value252;
struct sNode* __dec_obj110;
void* right_value253;
struct sNode* __dec_obj111;
void* right_value254;
struct list$1sNodeph* __dec_obj112;
struct sStoreArrayNode* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
right_value251 = (void*)0;
right_value252 = (void*)0;
right_value253 = (void*)0;
right_value254 = (void*)0;
    self->sline=info->sline;
    __dec_obj109=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value251=__builtin_string(info->sname))));
    __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj110=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value252=sNode_clone(left))));
    if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count2(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value252) { right_value252 = come_decrement_ref_count2(right_value252, ((struct sNode*)right_value252)->finalize, ((struct sNode*)right_value252)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj111=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value253=sNode_clone(right))));
    if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count2(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value253) { right_value253 = come_decrement_ref_count2(right_value253, ((struct sNode*)right_value253)->finalize, ((struct sNode*)right_value253)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj112=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value254=list$1sNodephp_clone(array_num))));
    come_call_finalizer3(__dec_obj112,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value254,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __result146__ = __result_obj__ = self;
    come_call_finalizer3(self,sStoreArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result146__;
    come_call_finalizer3(self,sStoreArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sStoreArrayNode_terminated(struct sStoreArrayNode* self){
void* __result_obj__;
_Bool __result147__;
memset(&__result_obj__, 0, sizeof(void*));
    __result147__ = (_Bool)0;
    return __result147__;
}

char* sStoreArrayNode_kind(struct sStoreArrayNode* self){
void* __result_obj__;
void* right_value255;
char* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
right_value255 = (void*)0;
    __result148__ = __result_obj__ = ((char*)(right_value255=__builtin_string("sStoreArrayNode")));
    right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result148__;
}

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_198;
struct sNode* right_199;
struct list$1sNodeph* array_num_nodes_200;
_Bool _if_conditional264;
_Bool __result149__;
void* right_value256;
struct CVALUE* left_value_201;
_Bool _if_conditional265;
void* right_value257;
void* right_value258;
char* __dec_obj113;
struct sType* left_type_202;
void* right_value259;
void* right_value260;
struct list$1CVALUEph* array_num_205;
struct list$1sNodeph* o2_saved_206;
struct sNode* it_209;
_Bool _if_conditional270;
_Bool __result158__;
void* right_value261;
struct CVALUE* c_value_212;
_Bool _if_conditional271;
_Bool __result159__;
void* right_value262;
struct CVALUE* right_value_213;
struct sType* right_type_214;
struct sClass* klass_215;
void* right_value263;
struct sType* type_216;
char* fun_name_217;
_Bool calling_fun_218;
_Bool _if_conditional272;
_Bool _if_conditional275;
char* check_code_222;
_Bool _if_conditional276;
struct sType* var_type_223;
void* right_value264;
struct sType* result_type_224;
_Bool _if_conditional277;
struct sType* __dec_obj114;
_Bool _if_conditional278;
int n_225;
_Bool _if_conditional280;
void* right_value265;
struct sType* __dec_obj115;
_Bool _if_conditional281;
void* right_value266;
struct sType* __dec_obj116;
_Bool _if_conditional282;
int i_226;
_Bool _if_conditional301;
_Bool _if_conditional302;
_Bool _if_conditional303;
_Bool _if_conditional304;
void* right_value267;
struct CVALUE* come_value_239;
void* right_value268;
void* right_value269;
struct buffer* buf_240;
void* right_value270;
struct sType* result_type2_241;
void* right_value271;
struct list$1CVALUEph* o2_saved_242;
struct CVALUE* it_245;
void* right_value272;
void* right_value273;
int i_248;
struct list$1sNodeph* o2_saved_249;
struct sNode* it_250;
_Bool _if_conditional309;
void* right_value274;
struct CVALUE* come_value_251;
void* right_value275;
_Bool _if_conditional310;
void* right_value276;
void* right_value277;
char* __dec_obj117;
void* right_value278;
struct CVALUE* come_value_252;
_Bool _if_conditional311;
int i_253;
_Bool _if_conditional312;
_Bool _if_conditional313;
void* right_value279;
void* right_value280;
struct buffer* buf_254;
struct list$1CVALUEph* o2_saved_255;
struct CVALUE* it_256;
void* right_value281;
void* right_value282;
char* left_value_code_257;
void* right_value283;
_Bool _if_conditional314;
_Bool _if_conditional315;
void* right_value284;
char* __dec_obj118;
_Bool _if_conditional316;
void* right_value285;
char* __dec_obj119;
_Bool __result173__;
int right_value_id_258;
_Bool _if_conditional317;
_Bool _if_conditional318;
void* right_value286;
char* __dec_obj120;
_Bool _if_conditional319;
void* right_value287;
char* __dec_obj121;
_Bool __result174__;
void* right_value288;
struct sType* result_type_259;
void* right_value289;
void* right_value290;
struct list$1sNodeph* __dec_obj122;
struct sType* __dec_obj123;
_Bool _if_conditional320;
void* right_value291;
char* __dec_obj124;
_Bool __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_198, 0, sizeof(struct sNode*));
memset(&right_199, 0, sizeof(struct sNode*));
memset(&array_num_nodes_200, 0, sizeof(struct list$1sNodeph*));
right_value256 = (void*)0;
memset(&left_value_201, 0, sizeof(struct CVALUE*));
right_value257 = (void*)0;
right_value258 = (void*)0;
memset(&left_type_202, 0, sizeof(struct sType*));
right_value259 = (void*)0;
right_value260 = (void*)0;
memset(&array_num_205, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_206, 0, sizeof(struct list$1sNodeph*));
memset(&it_209, 0, sizeof(struct sNode*));
right_value261 = (void*)0;
memset(&c_value_212, 0, sizeof(struct CVALUE*));
right_value262 = (void*)0;
memset(&right_value_213, 0, sizeof(struct CVALUE*));
memset(&right_type_214, 0, sizeof(struct sType*));
memset(&klass_215, 0, sizeof(struct sClass*));
right_value263 = (void*)0;
memset(&type_216, 0, sizeof(struct sType*));
memset(&fun_name_217, 0, sizeof(char*));
memset(&calling_fun_218, 0, sizeof(_Bool));
memset(&check_code_222, 0, sizeof(char*));
memset(&var_type_223, 0, sizeof(struct sType*));
right_value264 = (void*)0;
memset(&result_type_224, 0, sizeof(struct sType*));
memset(&n_225, 0, sizeof(int));
right_value265 = (void*)0;
right_value266 = (void*)0;
memset(&i_226, 0, sizeof(int));
right_value267 = (void*)0;
memset(&come_value_239, 0, sizeof(struct CVALUE*));
right_value268 = (void*)0;
right_value269 = (void*)0;
memset(&buf_240, 0, sizeof(struct buffer*));
right_value270 = (void*)0;
memset(&result_type2_241, 0, sizeof(struct sType*));
right_value271 = (void*)0;
memset(&o2_saved_242, 0, sizeof(struct list$1CVALUEph*));
memset(&it_245, 0, sizeof(struct CVALUE*));
right_value272 = (void*)0;
right_value273 = (void*)0;
memset(&i_248, 0, sizeof(int));
memset(&o2_saved_249, 0, sizeof(struct list$1sNodeph*));
memset(&it_250, 0, sizeof(struct sNode*));
right_value274 = (void*)0;
memset(&come_value_251, 0, sizeof(struct CVALUE*));
right_value275 = (void*)0;
right_value276 = (void*)0;
right_value277 = (void*)0;
right_value278 = (void*)0;
memset(&come_value_252, 0, sizeof(struct CVALUE*));
memset(&i_253, 0, sizeof(int));
right_value279 = (void*)0;
right_value280 = (void*)0;
memset(&buf_254, 0, sizeof(struct buffer*));
memset(&o2_saved_255, 0, sizeof(struct list$1CVALUEph*));
memset(&it_256, 0, sizeof(struct CVALUE*));
right_value281 = (void*)0;
right_value282 = (void*)0;
memset(&left_value_code_257, 0, sizeof(char*));
right_value283 = (void*)0;
right_value284 = (void*)0;
right_value285 = (void*)0;
memset(&right_value_id_258, 0, sizeof(int));
right_value286 = (void*)0;
right_value287 = (void*)0;
right_value288 = (void*)0;
memset(&result_type_259, 0, sizeof(struct sType*));
right_value289 = (void*)0;
right_value290 = (void*)0;
right_value291 = (void*)0;
    left_198=self->mLeft;
    right_199=self->mRight;
    array_num_nodes_200=self->mArrayNum;
    if(_if_conditional264=!node_compile(left_198,info),    _if_conditional264) {
        __result149__ = (_Bool)0;
        return __result149__;
    }
    left_value_201=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value256=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value256,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    if(_if_conditional265=gComeDebug&&left_value_201->type->mPointerNum>0,    _if_conditional265) {
        __dec_obj113=left_value_201->c_value;
        left_value_201->c_value=(char*)come_increment_ref_count(((char*)(right_value258=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value257=make_type_name_string(left_value_201->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_201->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    left_type_202=left_value_201->type;
    array_num_205=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value260=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value259=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 781, "list$1CVALUEph"))))))));
    come_call_finalizer3(right_value259,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value260,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_206=(array_num_nodes_200),it_209=list$1sNodeph_begin((o2_saved_206));    !list$1sNodeph_end((o2_saved_206));    it_209=list$1sNodeph_next((o2_saved_206))    ){
        if(_if_conditional270=!node_compile(it_209,info),        _if_conditional270) {
            __result158__ = (_Bool)0;
            come_call_finalizer3(left_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_205,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result158__;
        }
        c_value_212=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value261=get_value_from_stack(-1,info))));
        come_call_finalizer3(right_value261,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_205,(struct CVALUE*)come_increment_ref_count(c_value_212));
        come_call_finalizer3(c_value_212,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(_if_conditional271=!node_compile(right_199,info),    _if_conditional271) {
        __result159__ = (_Bool)0;
        come_call_finalizer3(left_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(array_num_205,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        return __result159__;
    }
    right_value_213=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value262=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value262,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_type_214=right_value_213->type;
    klass_215=left_value_201->type->mClass;
    type_216=(struct sType*)come_increment_ref_count(((struct sType*)(right_value263=sType_clone(left_value_201->type))));
    come_call_finalizer3(right_value263,sType_finalize, 0, 1, 0, 0, __result_obj__);
    fun_name_217="operator_store_element";
    if(self->mQuote) {
        calling_fun_218=(_Bool)0;
    }
    else {
        calling_fun_218=operator_overload_fun2(type_216,fun_name_217,left_value_201,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_205,0), "18field.c", 813, 9)),right_value_213,info);
    }
    if(_if_conditional275=!calling_fun_218,    _if_conditional275) {
        check_code_222=((void*)0);
        if(_if_conditional276=left_value_201->var&&left_value_201->var->mType&&list$1sNodeph_length(left_value_201->var->mType->mArrayNum)>0,        _if_conditional276) {
            var_type_223=left_value_201->var->mType;
            result_type_224=(struct sType*)come_increment_ref_count(((struct sType*)(right_value264=sType_clone(left_type_202))));
            come_call_finalizer3(right_value264,sType_finalize, 0, 1, 0, 0, __result_obj__);
            if(result_type_224->mOriginalLoadVarType->v1) {
                __dec_obj114=result_type_224;
                result_type_224=(struct sType*)come_increment_ref_count(result_type_224->mOriginalLoadVarType->v1);
                come_call_finalizer3(__dec_obj114,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional278=list$1sNodeph_length(result_type_224->mArrayNum)>0,            _if_conditional278) {
                n_225=list$1sNodeph_length(result_type_224->mArrayNum)-list$1CVALUEph_length(array_num_205);
                if(_if_conditional280=n_225==0,                _if_conditional280) {
                    __dec_obj115=result_type_224;
                    result_type_224=(struct sType*)come_increment_ref_count(((struct sType*)(right_value265=sType_clone(left_type_202))));
                    come_call_finalizer3(__dec_obj115,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value265,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    if(left_type_202->mOriginalLoadVarType->v1) {
                        __dec_obj116=result_type_224;
                        result_type_224=(struct sType*)come_increment_ref_count(((struct sType*)(right_value266=sType_clone(left_type_202->mOriginalLoadVarType->v1))));
                        come_call_finalizer3(__dec_obj116,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value266,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    list$1sNodeph_reset(result_type_224->mArrayNum);
                }
                else {
                    if(_if_conditional282=n_225>0,                    _if_conditional282) {
                        for(                        i_226=0;                        i_226<n_225;                        i_226++                        ){
                            list$1sNodeph_delete(result_type_224->mArrayNum,-1,-1);
                        }
                    }
                    else {
                        if(_if_conditional301=n_225<0,                        _if_conditional301) {
                            list$1sNodeph_reset(result_type_224->mArrayNum);
                            result_type_224->mPointerNum+=n_225;
                            if(_if_conditional302=result_type_224->mPointerNum<0,                            _if_conditional302) {
                                result_type_224->mPointerNum=0;
                            }
                        }
                    }
                }
            }
            else {
                if(_if_conditional303=result_type_224->mPointerNum>0,                _if_conditional303) {
                    result_type_224->mPointerNum-=list$1CVALUEph_length(array_num_205);
                    if(_if_conditional304=result_type_224->mPointerNum<0,                    _if_conditional304) {
                        result_type_224->mPointerNum=0;
                    }
                }
            }
            come_value_239=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value267=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 861, "CVALUE"))));
            come_call_finalizer3(right_value267,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            buf_240=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value269=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value268=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 863, "buffer"))))))));
            come_call_finalizer3(right_value268,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value269,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            result_type2_241=(struct sType*)come_increment_ref_count(((struct sType*)(right_value270=sType_clone(result_type_224))));
            come_call_finalizer3(right_value270,sType_finalize, 0, 1, 0, 0, __result_obj__);
            result_type2_241->mPointerNum++;
            buffer_append_str(buf_240,((char*)(right_value271=xsprintf("come_range_check(&%s",left_value_201->c_value))));
            right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            o2_saved_242=(struct list$1CVALUEph*)come_increment_ref_count((array_num_205)),it_245=list$1CVALUEph_begin((o2_saved_242));            !list$1CVALUEph_end((o2_saved_242));            it_245=list$1CVALUEph_next((o2_saved_242))            ){
                buffer_append_str(buf_240,((char*)(right_value272=xsprintf("[%s]",it_245->c_value))));
                right_value272 = come_decrement_ref_count2(right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer3(o2_saved_242,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_240,((char*)(right_value273=xsprintf(",%s,%s+(",left_value_201->c_value,left_value_201->c_value))));
            right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            i_248=0;
            for(            o2_saved_249=(struct list$1sNodeph*)come_increment_ref_count((var_type_223->mArrayNum)),it_250=list$1sNodeph_begin((o2_saved_249));            !list$1sNodeph_end((o2_saved_249));            it_250=list$1sNodeph_next((o2_saved_249))            ){
                if(_if_conditional309=!node_compile(it_250,info),                _if_conditional309) {
                    err_msg(info,"invalid array num");
                    exit(1);
                }
                come_value_251=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value274=get_value_from_stack(-1,info))));
                come_call_finalizer3(right_value274,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                dec_stack_ptr(1,info);
                buffer_append_str(buf_240,((char*)(right_value275=xsprintf("%s",come_value_251->c_value))));
                right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional310=i_248!=list$1sNodeph_length(var_type_223->mArrayNum)-1,                _if_conditional310) {
                    buffer_append_str(buf_240,"*");
                }
                i_248++;
                come_call_finalizer3(come_value_251,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_249,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_240,((char*)(right_value276=xsprintf("), \"%s\", %d)",info->sname,info->sline))));
            right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj117=check_code_222;
            check_code_222=(char*)come_increment_ref_count(((char*)(right_value277=buffer_to_string(buf_240))));
            __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(result_type_224,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_239,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_240,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_241,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_value_252=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value278=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 895, "CVALUE"))));
        come_call_finalizer3(right_value278,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional311=list$1sNodeph_length(left_type_202->mArrayNum)>0,        _if_conditional311) {
            for(            i_253=0;            i_253<list$1CVALUEph_length(array_num_205);            i_253++            ){
                list$1sNodeph_delete(left_type_202->mArrayNum,-1,-1);
            }
        }
        else {
            if(_if_conditional312=left_type_202->mPointerNum>0,            _if_conditional312) {
                left_type_202->mPointerNum-=list$1CVALUEph_length(array_num_205);
                if(_if_conditional313=left_type_202->mPointerNum<0,                _if_conditional313) {
                    left_type_202->mPointerNum=0;
                }
            }
        }
        buf_254=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value280=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value279=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 916, "buffer"))))))));
        come_call_finalizer3(right_value279,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value280,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_254,left_value_201->c_value);
        for(        o2_saved_255=(struct list$1CVALUEph*)come_increment_ref_count((array_num_205)),it_256=list$1CVALUEph_begin((o2_saved_255));        !list$1CVALUEph_end((o2_saved_255));        it_256=list$1CVALUEph_next((o2_saved_255))        ){
            buffer_append_str(buf_254,((char*)(right_value281=xsprintf("[%s]",it_256->c_value))));
            right_value281 = come_decrement_ref_count2(right_value281, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        come_call_finalizer3(o2_saved_255,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_257=(char*)come_increment_ref_count(((char*)(right_value282=buffer_to_string(buf_254))));
        right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        check_assign_type(((char*)(right_value283=xsprintf("array is assinged to"))),left_type_202,right_type_214,right_value_213,(_Bool)0,(_Bool)1,info);
        right_value283 = come_decrement_ref_count2(right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional314=left_type_202->mHeap&&right_type_214->mHeap&&left_type_202->mPointerNum>0&&right_type_214->mPointerNum>0,        _if_conditional314) {
            if(_if_conditional315=left_value_201->type->mPointerNum>=1,            _if_conditional315) {
                decrement_ref_count_object(left_type_202,left_value_code_257,info,(_Bool)0);
                std_move(left_type_202,right_type_214,right_value_213,info);
                __dec_obj118=come_value_252->c_value;
                come_value_252->c_value=(char*)come_increment_ref_count(((char*)(right_value284=xsprintf("%s=%s",left_value_code_257,right_value_213->c_value))));
                __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                if(_if_conditional316=left_value_201->type->mPointerNum==0,                _if_conditional316) {
                    decrement_ref_count_object(left_type_202,left_value_code_257,info,(_Bool)0);
                    std_move(left_type_202,right_type_214,right_value_213,info);
                    __dec_obj119=come_value_252->c_value;
                    come_value_252->c_value=(char*)come_increment_ref_count(((char*)(right_value285=xsprintf("%s=%s",left_value_code_257,right_value_213->c_value))));
                    __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(1)",left_value_code_257,left_value_201->type->mPointerNum);
                    __result173__ = (_Bool)0;
                    check_code_222 = come_decrement_ref_count2(check_code_222, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_252,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(buf_254,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    left_value_code_257 = come_decrement_ref_count2(left_value_code_257, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(array_num_205,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value_213,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_216,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result173__;
                }
            }
            right_value_id_258=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_213->c_value));
            if(_if_conditional317=right_value_id_258!=-1,            _if_conditional317) {
                remove_object_from_right_values(right_value_id_258,info);
            }
        }
        else {
            if(_if_conditional318=left_value_201->type->mPointerNum>=1,            _if_conditional318) {
                __dec_obj120=come_value_252->c_value;
                come_value_252->c_value=(char*)come_increment_ref_count(((char*)(right_value286=xsprintf("%s=%s",left_value_code_257,right_value_213->c_value))));
                __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                if(_if_conditional319=left_value_201->type->mPointerNum==0,                _if_conditional319) {
                    __dec_obj121=come_value_252->c_value;
                    come_value_252->c_value=(char*)come_increment_ref_count(((char*)(right_value287=xsprintf("%s=%s",left_value_code_257,right_value_213->c_value))));
                    __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(2)",left_value_code_257,left_value_201->type->mPointerNum);
                    __result174__ = (_Bool)0;
                    check_code_222 = come_decrement_ref_count2(check_code_222, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_252,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(buf_254,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    left_value_code_257 = come_decrement_ref_count2(left_value_code_257, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(array_num_205,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value_213,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_216,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result174__;
                }
            }
        }
        result_type_259=(struct sType*)come_increment_ref_count(((struct sType*)(right_value288=sType_clone(left_type_202))));
        come_call_finalizer3(right_value288,sType_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj122=result_type_259->mArrayNum;
        result_type_259->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value290=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value289=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 962, "list$1sNodeph"))))))));
        come_call_finalizer3(__dec_obj122,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value289,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value290,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj123=come_value_252->type;
        come_value_252->type=(struct sType*)come_increment_ref_count(result_type_259);
        come_call_finalizer3(__dec_obj123,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_252->var=((void*)0);
        if(_if_conditional320=check_code_222&&gComeDebug,        _if_conditional320) {
            __dec_obj124=come_value_252->c_value;
            come_value_252->c_value=(char*)come_increment_ref_count(((char*)(right_value291=xsprintf("(%s, %s)",check_code_222,come_value_252->c_value))));
            __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_252));
        add_come_last_code(info,"%s;\n",come_value_252->c_value);
        check_code_222 = come_decrement_ref_count2(check_code_222, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_252,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_254,buffer_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_257 = come_decrement_ref_count2(left_value_code_257, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_259,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result175__ = (_Bool)1;
    come_call_finalizer3(left_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_205,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_213,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_216,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result175__;
    come_call_finalizer3(left_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_205,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_213,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_216,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result150__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result150__;
        come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_203;
_Bool _while_condtional23;
struct list_item$1CVALUEph* prev_it_204;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_203, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_204, 0, sizeof(struct list_item$1CVALUEph*));
            it_203=self->head;
            while(_while_condtional23=it_203!=((void*)0),            _while_condtional23) {
                prev_it_204=it_203;
                it_203=it_203->next;
                come_call_finalizer3(prev_it_204,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional266;
struct sNode* result_207;
struct sNode* __result151__;
_Bool _if_conditional267;
struct sNode* __result152__;
struct sNode* result_208;
struct sNode* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_207, 0, sizeof(struct sNode*));
memset(&result_208, 0, sizeof(struct sNode*));
        if(_if_conditional266=self==((void*)0),        _if_conditional266) {
            memset(&result_207,0,sizeof(struct sNode*));
            __result151__ = __result_obj__ = result_207;
            return __result151__;
        }
        self->it=self->head;
        if(self->it) {
            __result152__ = __result_obj__ = self->it->item;
            return __result152__;
        }
        memset(&result_208,0,sizeof(struct sNode*));
        __result153__ = __result_obj__ = result_208;
        return __result153__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result154__;
memset(&__result_obj__, 0, sizeof(void*));
        __result154__ = self==((void*)0)||self->it==((void*)0);
        return __result154__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional268;
struct sNode* result_210;
struct sNode* __result155__;
_Bool _if_conditional269;
struct sNode* __result156__;
struct sNode* result_211;
struct sNode* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_210, 0, sizeof(struct sNode*));
memset(&result_211, 0, sizeof(struct sNode*));
        if(_if_conditional268=self==((void*)0)||self->it==((void*)0),        _if_conditional268) {
            memset(&result_210,0,sizeof(struct sNode*));
            __result155__ = __result_obj__ = result_210;
            return __result155__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result156__ = __result_obj__ = self->it->item;
            return __result156__;
        }
        memset(&result_211,0,sizeof(struct sNode*));
        __result157__ = __result_obj__ = result_211;
        return __result157__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool _if_conditional273;
struct list_item$1CVALUEph* it_219;
int i_220;
_Bool _while_condtional24;
_Bool _if_conditional274;
struct CVALUE* __result160__;
struct CVALUE* default_value_221;
struct CVALUE* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_219, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_220, 0, sizeof(int));
memset(&default_value_221, 0, sizeof(struct CVALUE*));
            if(_if_conditional273=position<0,            _if_conditional273) {
                position+=self->len;
            }
            it_219=self->head;
            i_220=0;
            while(_while_condtional24=it_219!=((void*)0),            _while_condtional24) {
                if(_if_conditional274=position==i_220,                _if_conditional274) {
                    __result160__ = __result_obj__ = it_219->item;
                    return __result160__;
                }
                it_219=it_219->next;
                i_220++;
            }
            memset(&default_value_221,0,sizeof(struct CVALUE*));
            __result161__ = __result_obj__ = default_value_221;
            come_call_finalizer3(default_value_221,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
            return __result161__;
            come_call_finalizer3(default_value_221,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional279;
int __result162__;
int __result163__;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional279=self==((void*)0),                    _if_conditional279) {
                        __result162__ = 0;
                        return __result162__;
                    }
                    __result163__ = self->len;
                    return __result163__;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional283;
_Bool _if_conditional284;
_Bool _if_conditional285;
int tmp_227;
_Bool _if_conditional286;
_Bool _if_conditional287;
_Bool _if_conditional288;
struct list$1sNodeph* __result164__;
_Bool _if_conditional289;
_Bool _if_conditional290;
struct list_item$1sNodeph* it_228;
int i_229;
_Bool _while_condtional25;
_Bool _if_conditional291;
struct list_item$1sNodeph* prev_it_230;
_Bool _if_conditional292;
_Bool _if_conditional293;
struct list_item$1sNodeph* it_231;
int i_232;
_Bool _while_condtional26;
_Bool _if_conditional294;
_Bool _if_conditional295;
struct list_item$1sNodeph* prev_it_233;
struct list_item$1sNodeph* it_234;
struct list_item$1sNodeph* head_prev_it_235;
struct list_item$1sNodeph* tail_it_236;
int i_237;
_Bool _while_condtional27;
_Bool _if_conditional296;
_Bool _if_conditional297;
_Bool _if_conditional298;
struct list_item$1sNodeph* prev_it_238;
_Bool _if_conditional299;
_Bool _if_conditional300;
struct list$1sNodeph* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_227, 0, sizeof(int));
memset(&it_228, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_229, 0, sizeof(int));
memset(&prev_it_230, 0, sizeof(struct list_item$1sNodeph*));
memset(&it_231, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_232, 0, sizeof(int));
memset(&prev_it_233, 0, sizeof(struct list_item$1sNodeph*));
memset(&it_234, 0, sizeof(struct list_item$1sNodeph*));
memset(&head_prev_it_235, 0, sizeof(struct list_item$1sNodeph*));
memset(&tail_it_236, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_237, 0, sizeof(int));
memset(&prev_it_238, 0, sizeof(struct list_item$1sNodeph*));
                                if(_if_conditional283=head<0,                                _if_conditional283) {
                                    head+=self->len;
                                }
                                if(_if_conditional284=tail<0,                                _if_conditional284) {
                                    tail+=self->len+1;
                                }
                                if(_if_conditional285=head>tail,                                _if_conditional285) {
                                    tmp_227=tail;
                                    tail=head;
                                    head=tmp_227;
                                }
                                if(_if_conditional286=head<0,                                _if_conditional286) {
                                    head=0;
                                }
                                if(_if_conditional287=tail>self->len,                                _if_conditional287) {
                                    tail=self->len;
                                }
                                if(_if_conditional288=head==tail,                                _if_conditional288) {
                                    __result164__ = __result_obj__ = self;
                                    return __result164__;
                                }
                                if(_if_conditional289=head==0&&tail==self->len,                                _if_conditional289) {
                                    list$1sNodeph_reset(self);
                                }
                                else {
                                    if(_if_conditional290=head==0,                                    _if_conditional290) {
                                        it_228=self->head;
                                        i_229=0;
                                        while(_while_condtional25=it_228!=((void*)0),                                        _while_condtional25) {
                                            if(_if_conditional291=i_229<tail,                                            _if_conditional291) {
                                                prev_it_230=it_228;
                                                it_228=it_228->next;
                                                i_229++;
                                                come_call_finalizer3(prev_it_230,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                self->len--;
                                            }
                                            else {
                                                if(_if_conditional292=i_229==tail,                                                _if_conditional292) {
                                                    self->head=it_228;
                                                    self->head->prev=((void*)0);
                                                    break;
                                                }
                                                else {
                                                    it_228=it_228->next;
                                                    i_229++;
                                                }
                                            }
                                        }
                                    }
                                    else {
                                        if(_if_conditional293=tail==self->len,                                        _if_conditional293) {
                                            it_231=self->head;
                                            i_232=0;
                                            while(_while_condtional26=it_231!=((void*)0),                                            _while_condtional26) {
                                                if(_if_conditional294=i_232==head,                                                _if_conditional294) {
                                                    self->tail=it_231->prev;
                                                    self->tail->next=((void*)0);
                                                }
                                                if(_if_conditional295=i_232>=head,                                                _if_conditional295) {
                                                    prev_it_233=it_231;
                                                    it_231=it_231->next;
                                                    i_232++;
                                                    come_call_finalizer3(prev_it_233,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    self->len--;
                                                }
                                                else {
                                                    it_231=it_231->next;
                                                    i_232++;
                                                }
                                            }
                                        }
                                        else {
                                            it_234=self->head;
                                            head_prev_it_235=((void*)0);
                                            tail_it_236=((void*)0);
                                            i_237=0;
                                            while(_while_condtional27=it_234!=((void*)0),                                            _while_condtional27) {
                                                if(_if_conditional296=i_237==head,                                                _if_conditional296) {
                                                    head_prev_it_235=it_234->prev;
                                                }
                                                if(_if_conditional297=i_237==tail,                                                _if_conditional297) {
                                                    tail_it_236=it_234;
                                                }
                                                if(_if_conditional298=i_237>=head&&i_237<tail,                                                _if_conditional298) {
                                                    prev_it_238=it_234;
                                                    it_234=it_234->next;
                                                    i_237++;
                                                    come_call_finalizer3(prev_it_238,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    self->len--;
                                                }
                                                else {
                                                    it_234=it_234->next;
                                                    i_237++;
                                                }
                                            }
                                            if(_if_conditional299=head_prev_it_235!=((void*)0),                                            _if_conditional299) {
                                                head_prev_it_235->next=tail_it_236;
                                            }
                                            if(_if_conditional300=tail_it_236!=((void*)0),                                            _if_conditional300) {
                                                tail_it_236->prev=head_prev_it_235;
                                            }
                                        }
                                    }
                                }
                                __result165__ = __result_obj__ = self;
                                return __result165__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional305;
struct CVALUE* result_243;
struct CVALUE* __result166__;
_Bool _if_conditional306;
struct CVALUE* __result167__;
struct CVALUE* result_244;
struct CVALUE* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_243, 0, sizeof(struct CVALUE*));
memset(&result_244, 0, sizeof(struct CVALUE*));
                if(_if_conditional305=self==((void*)0),                _if_conditional305) {
                    memset(&result_243,0,sizeof(struct CVALUE*));
                    __result166__ = __result_obj__ = result_243;
                    return __result166__;
                }
                self->it=self->head;
                if(self->it) {
                    __result167__ = __result_obj__ = self->it->item;
                    return __result167__;
                }
                memset(&result_244,0,sizeof(struct CVALUE*));
                __result168__ = __result_obj__ = result_244;
                return __result168__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __result169__;
memset(&__result_obj__, 0, sizeof(void*));
                __result169__ = self==((void*)0)||self->it==((void*)0);
                return __result169__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional307;
struct CVALUE* result_246;
struct CVALUE* __result170__;
_Bool _if_conditional308;
struct CVALUE* __result171__;
struct CVALUE* result_247;
struct CVALUE* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_246, 0, sizeof(struct CVALUE*));
memset(&result_247, 0, sizeof(struct CVALUE*));
                if(_if_conditional307=self==((void*)0)||self->it==((void*)0),                _if_conditional307) {
                    memset(&result_246,0,sizeof(struct CVALUE*));
                    __result170__ = __result_obj__ = result_246;
                    return __result170__;
                }
                self->it=self->it->next;
                if(self->it) {
                    __result171__ = __result_obj__ = self->it->item;
                    return __result171__;
                }
                memset(&result_247,0,sizeof(struct CVALUE*));
                __result172__ = __result_obj__ = result_247;
                return __result172__;
}

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, _Bool break_guard, struct sInfo* info){
void* __result_obj__;
void* right_value292;
char* __dec_obj125;
void* right_value293;
struct list$1sNodeph* __dec_obj126;
void* right_value294;
struct sNode* __dec_obj127;
struct sLoadArrayNode* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
right_value292 = (void*)0;
right_value293 = (void*)0;
right_value294 = (void*)0;
    self->sline=info->sline;
    __dec_obj125=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value292=__builtin_string(info->sname))));
    __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value292 = come_decrement_ref_count2(right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj126=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value293=list$1sNodephp_clone(array_num))));
    come_call_finalizer3(__dec_obj126,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value293,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    self->mBreakGuard=break_guard;
    __dec_obj127=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value294=sNode_clone(left))));
    if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count2(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value294) { right_value294 = come_decrement_ref_count2(right_value294, ((struct sNode*)right_value294)->finalize, ((struct sNode*)right_value294)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->mQuote=quote;
    __result176__ = __result_obj__ = self;
    come_call_finalizer3(self,sLoadArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result176__;
    come_call_finalizer3(self,sLoadArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sLoadArrayNode_terminated(struct sLoadArrayNode* self){
void* __result_obj__;
_Bool __result177__;
memset(&__result_obj__, 0, sizeof(void*));
    __result177__ = (_Bool)0;
    return __result177__;
}

char* sLoadArrayNode_kind(struct sLoadArrayNode* self){
void* __result_obj__;
void* right_value295;
char* __result178__;
memset(&__result_obj__, 0, sizeof(void*));
right_value295 = (void*)0;
    __result178__ = __result_obj__ = ((char*)(right_value295=__builtin_string("sLoadArrayNode")));
    right_value295 = come_decrement_ref_count2(right_value295, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result178__;
}

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_260;
struct list$1sNodeph* array_num_nodes_261;
_Bool _if_conditional324;
_Bool __result179__;
void* right_value296;
struct CVALUE* left_value_262;
_Bool _if_conditional325;
void* right_value297;
void* right_value298;
char* __dec_obj128;
void* right_value299;
struct sType* left_type_263;
void* right_value300;
void* right_value301;
struct list$1CVALUEph* array_num_264;
struct list$1sNodeph* o2_saved_265;
struct sNode* it_266;
_Bool _if_conditional326;
_Bool __result180__;
void* right_value302;
struct CVALUE* c_value_267;
void* right_value303;
struct sType* type_268;
char* fun_name_269;
_Bool calling_fun_270;
_Bool _if_conditional327;
_Bool _if_conditional328;
_Bool _if_conditional329;
struct sType* var_type_271;
void* right_value304;
struct sType* result_type_272;
_Bool _if_conditional330;
struct sType* __dec_obj129;
_Bool _if_conditional331;
int n_273;
_Bool _if_conditional332;
void* right_value305;
struct sType* __dec_obj130;
_Bool _if_conditional333;
void* right_value306;
struct sType* __dec_obj131;
_Bool _if_conditional334;
int i_274;
_Bool _if_conditional335;
_Bool _if_conditional336;
_Bool _if_conditional337;
_Bool _if_conditional338;
void* right_value307;
struct CVALUE* come_value_275;
void* right_value308;
void* right_value309;
struct buffer* buf_276;
void* right_value310;
struct sType* result_type2_277;
void* right_value311;
void* right_value312;
struct list$1CVALUEph* o2_saved_278;
struct CVALUE* it_279;
void* right_value313;
void* right_value314;
int i_280;
struct list$1sNodeph* o2_saved_281;
struct sNode* it_282;
_Bool _if_conditional339;
void* right_value315;
struct CVALUE* come_value_283;
void* right_value316;
_Bool _if_conditional340;
void* right_value317;
void* right_value318;
char* left_value_code_284;
void* right_value319;
char* __dec_obj132;
void* right_value320;
struct sType* __dec_obj133;
void* right_value321;
struct CVALUE* come_value_285;
void* right_value322;
void* right_value323;
struct buffer* buf_286;
struct list$1CVALUEph* o2_saved_287;
struct CVALUE* it_288;
void* right_value324;
void* right_value325;
char* left_value_code_289;
void* right_value326;
char* __dec_obj134;
void* right_value327;
struct sType* result_type_290;
_Bool _if_conditional341;
struct sType* __dec_obj135;
_Bool _if_conditional342;
int n_291;
_Bool _if_conditional343;
void* right_value328;
struct sType* __dec_obj136;
_Bool _if_conditional344;
void* right_value329;
struct sType* __dec_obj137;
_Bool _if_conditional345;
int i_292;
_Bool _if_conditional346;
_Bool _if_conditional347;
_Bool _if_conditional348;
_Bool _if_conditional349;
void* right_value330;
struct sType* __dec_obj138;
_Bool __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_260, 0, sizeof(struct sNode*));
memset(&array_num_nodes_261, 0, sizeof(struct list$1sNodeph*));
right_value296 = (void*)0;
memset(&left_value_262, 0, sizeof(struct CVALUE*));
right_value297 = (void*)0;
right_value298 = (void*)0;
right_value299 = (void*)0;
memset(&left_type_263, 0, sizeof(struct sType*));
right_value300 = (void*)0;
right_value301 = (void*)0;
memset(&array_num_264, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_265, 0, sizeof(struct list$1sNodeph*));
memset(&it_266, 0, sizeof(struct sNode*));
right_value302 = (void*)0;
memset(&c_value_267, 0, sizeof(struct CVALUE*));
right_value303 = (void*)0;
memset(&type_268, 0, sizeof(struct sType*));
memset(&fun_name_269, 0, sizeof(char*));
memset(&calling_fun_270, 0, sizeof(_Bool));
memset(&var_type_271, 0, sizeof(struct sType*));
right_value304 = (void*)0;
memset(&result_type_272, 0, sizeof(struct sType*));
memset(&n_273, 0, sizeof(int));
right_value305 = (void*)0;
right_value306 = (void*)0;
memset(&i_274, 0, sizeof(int));
right_value307 = (void*)0;
memset(&come_value_275, 0, sizeof(struct CVALUE*));
right_value308 = (void*)0;
right_value309 = (void*)0;
memset(&buf_276, 0, sizeof(struct buffer*));
right_value310 = (void*)0;
memset(&result_type2_277, 0, sizeof(struct sType*));
right_value311 = (void*)0;
right_value312 = (void*)0;
memset(&o2_saved_278, 0, sizeof(struct list$1CVALUEph*));
memset(&it_279, 0, sizeof(struct CVALUE*));
right_value313 = (void*)0;
right_value314 = (void*)0;
memset(&i_280, 0, sizeof(int));
memset(&o2_saved_281, 0, sizeof(struct list$1sNodeph*));
memset(&it_282, 0, sizeof(struct sNode*));
right_value315 = (void*)0;
memset(&come_value_283, 0, sizeof(struct CVALUE*));
right_value316 = (void*)0;
right_value317 = (void*)0;
right_value318 = (void*)0;
memset(&left_value_code_284, 0, sizeof(char*));
right_value319 = (void*)0;
right_value320 = (void*)0;
right_value321 = (void*)0;
memset(&come_value_285, 0, sizeof(struct CVALUE*));
right_value322 = (void*)0;
right_value323 = (void*)0;
memset(&buf_286, 0, sizeof(struct buffer*));
memset(&o2_saved_287, 0, sizeof(struct list$1CVALUEph*));
memset(&it_288, 0, sizeof(struct CVALUE*));
right_value324 = (void*)0;
right_value325 = (void*)0;
memset(&left_value_code_289, 0, sizeof(char*));
right_value326 = (void*)0;
right_value327 = (void*)0;
memset(&result_type_290, 0, sizeof(struct sType*));
memset(&n_291, 0, sizeof(int));
right_value328 = (void*)0;
right_value329 = (void*)0;
memset(&i_292, 0, sizeof(int));
right_value330 = (void*)0;
    left_260=self->mLeft;
    array_num_nodes_261=self->mArrayNum;
    if(_if_conditional324=!node_compile(left_260,info),    _if_conditional324) {
        __result179__ = (_Bool)0;
        return __result179__;
    }
    left_value_262=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value296=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value296,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    if(_if_conditional325=gComeDebug&&left_value_262->type->mPointerNum>0,    _if_conditional325) {
        __dec_obj128=left_value_262->c_value;
        left_value_262->c_value=(char*)come_increment_ref_count(((char*)(right_value298=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value297=make_type_name_string(left_value_262->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_262->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value297 = come_decrement_ref_count2(right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    left_type_263=(struct sType*)come_increment_ref_count(((struct sType*)(right_value299=sType_clone(left_value_262->type))));
    come_call_finalizer3(right_value299,sType_finalize, 0, 1, 0, 0, __result_obj__);
    array_num_264=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value301=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value300=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1026, "list$1CVALUEph"))))))));
    come_call_finalizer3(right_value300,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value301,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_265=(array_num_nodes_261),it_266=list$1sNodeph_begin((o2_saved_265));    !list$1sNodeph_end((o2_saved_265));    it_266=list$1sNodeph_next((o2_saved_265))    ){
        if(_if_conditional326=!node_compile(it_266,info),        _if_conditional326) {
            __result180__ = (_Bool)0;
            come_call_finalizer3(left_value_262,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_263,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_264,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result180__;
        }
        c_value_267=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value302=get_value_from_stack(-1,info))));
        come_call_finalizer3(right_value302,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_264,(struct CVALUE*)come_increment_ref_count(c_value_267));
        come_call_finalizer3(c_value_267,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_268=(struct sType*)come_increment_ref_count(((struct sType*)(right_value303=sType_clone(left_value_262->type))));
    come_call_finalizer3(right_value303,sType_finalize, 0, 1, 0, 0, __result_obj__);
    fun_name_269="operator_load_element";
    if(self->mQuote) {
        calling_fun_270=(_Bool)0;
    }
    else {
        calling_fun_270=operator_overload_fun(type_268,fun_name_269,left_value_262,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_264,0), "18field.c", 1047, 10)),self->mBreakGuard,info);
    }
    if(_if_conditional328=!calling_fun_270,    _if_conditional328) {
        if(_if_conditional329=gComeDebug&&left_value_262->var&&left_value_262->var->mType&&list$1sNodeph_length(left_value_262->var->mType->mArrayNum)>0,        _if_conditional329) {
            var_type_271=left_value_262->var->mType;
            result_type_272=(struct sType*)come_increment_ref_count(((struct sType*)(right_value304=sType_clone(left_type_263))));
            come_call_finalizer3(right_value304,sType_finalize, 0, 1, 0, 0, __result_obj__);
            if(result_type_272->mOriginalLoadVarType->v1) {
                __dec_obj129=result_type_272;
                result_type_272=(struct sType*)come_increment_ref_count(result_type_272->mOriginalLoadVarType->v1);
                come_call_finalizer3(__dec_obj129,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional331=list$1sNodeph_length(result_type_272->mArrayNum)>0,            _if_conditional331) {
                n_273=list$1sNodeph_length(result_type_272->mArrayNum)-list$1CVALUEph_length(array_num_264);
                if(_if_conditional332=n_273==0,                _if_conditional332) {
                    __dec_obj130=result_type_272;
                    result_type_272=(struct sType*)come_increment_ref_count(((struct sType*)(right_value305=sType_clone(left_type_263))));
                    come_call_finalizer3(__dec_obj130,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value305,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    if(left_type_263->mOriginalLoadVarType->v1) {
                        __dec_obj131=result_type_272;
                        result_type_272=(struct sType*)come_increment_ref_count(((struct sType*)(right_value306=sType_clone(left_type_263->mOriginalLoadVarType->v1))));
                        come_call_finalizer3(__dec_obj131,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value306,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    list$1sNodeph_reset(result_type_272->mArrayNum);
                }
                else {
                    if(_if_conditional334=n_273>0,                    _if_conditional334) {
                        for(                        i_274=0;                        i_274<n_273;                        i_274++                        ){
                            list$1sNodeph_delete(result_type_272->mArrayNum,-1,-1);
                        }
                    }
                    else {
                        if(_if_conditional335=n_273<0,                        _if_conditional335) {
                            list$1sNodeph_reset(result_type_272->mArrayNum);
                            result_type_272->mPointerNum+=n_273;
                            if(_if_conditional336=result_type_272->mPointerNum<0,                            _if_conditional336) {
                                result_type_272->mPointerNum=0;
                            }
                        }
                    }
                }
            }
            else {
                if(_if_conditional337=result_type_272->mPointerNum>0,                _if_conditional337) {
                    result_type_272->mPointerNum-=list$1CVALUEph_length(array_num_264);
                    if(_if_conditional338=result_type_272->mPointerNum<0,                    _if_conditional338) {
                        result_type_272->mPointerNum=0;
                    }
                }
            }
            come_value_275=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value307=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1094, "CVALUE"))));
            come_call_finalizer3(right_value307,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            buf_276=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value309=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value308=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1096, "buffer"))))))));
            come_call_finalizer3(right_value308,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value309,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            result_type2_277=(struct sType*)come_increment_ref_count(((struct sType*)(right_value310=sType_clone(result_type_272))));
            come_call_finalizer3(right_value310,sType_finalize, 0, 1, 0, 0, __result_obj__);
            result_type2_277->mPointerNum++;
            buffer_append_str(buf_276,((char*)(right_value312=xsprintf("*(%s)come_range_check(&%s",((char*)(right_value311=make_type_name_string(result_type2_277,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_262->c_value))));
            right_value311 = come_decrement_ref_count2(right_value311, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value312 = come_decrement_ref_count2(right_value312, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            o2_saved_278=(struct list$1CVALUEph*)come_increment_ref_count((array_num_264)),it_279=list$1CVALUEph_begin((o2_saved_278));            !list$1CVALUEph_end((o2_saved_278));            it_279=list$1CVALUEph_next((o2_saved_278))            ){
                buffer_append_str(buf_276,((char*)(right_value313=xsprintf("[%s]",it_279->c_value))));
                right_value313 = come_decrement_ref_count2(right_value313, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer3(o2_saved_278,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_276,((char*)(right_value314=xsprintf(",%s,%s+(",left_value_262->c_value,left_value_262->c_value))));
            right_value314 = come_decrement_ref_count2(right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            i_280=0;
            for(            o2_saved_281=(struct list$1sNodeph*)come_increment_ref_count((var_type_271->mArrayNum)),it_282=list$1sNodeph_begin((o2_saved_281));            !list$1sNodeph_end((o2_saved_281));            it_282=list$1sNodeph_next((o2_saved_281))            ){
                if(_if_conditional339=!node_compile(it_282,info),                _if_conditional339) {
                    err_msg(info,"invalid array num");
                    exit(1);
                }
                come_value_283=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value315=get_value_from_stack(-1,info))));
                come_call_finalizer3(right_value315,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                dec_stack_ptr(1,info);
                buffer_append_str(buf_276,((char*)(right_value316=xsprintf("%s",come_value_283->c_value))));
                right_value316 = come_decrement_ref_count2(right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional340=i_280!=list$1sNodeph_length(var_type_271->mArrayNum)-1,                _if_conditional340) {
                    buffer_append_str(buf_276,"*");
                }
                i_280++;
                come_call_finalizer3(come_value_283,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_281,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_276,((char*)(right_value317=xsprintf("), \"%s\", %d)",info->sname,info->sline))));
            right_value317 = come_decrement_ref_count2(right_value317, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            left_value_code_284=(char*)come_increment_ref_count(((char*)(right_value318=buffer_to_string(buf_276))));
            right_value318 = come_decrement_ref_count2(right_value318, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj132=come_value_275->c_value;
            come_value_275->c_value=(char*)come_increment_ref_count(((char*)(right_value319=xsprintf("%s",left_value_code_284))));
            __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value319 = come_decrement_ref_count2(right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj133=come_value_275->type;
            come_value_275->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value320=sType_clone(result_type_272))));
            come_call_finalizer3(__dec_obj133,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value320,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_value_275->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_275));
            add_come_last_code(info,"%s;\n",come_value_275->c_value);
            come_call_finalizer3(result_type_272,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_275,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_276,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_277,sType_finalize, 0, 0, 0, 0, (void*)0);
            left_value_code_284 = come_decrement_ref_count2(left_value_code_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            come_value_285=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value321=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1140, "CVALUE"))));
            come_call_finalizer3(right_value321,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            buf_286=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value323=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value322=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1142, "buffer"))))))));
            come_call_finalizer3(right_value322,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value323,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            buffer_append_str(buf_286,left_value_262->c_value);
            for(            o2_saved_287=(struct list$1CVALUEph*)come_increment_ref_count((array_num_264)),it_288=list$1CVALUEph_begin((o2_saved_287));            !list$1CVALUEph_end((o2_saved_287));            it_288=list$1CVALUEph_next((o2_saved_287))            ){
                buffer_append_str(buf_286,((char*)(right_value324=xsprintf("[%s]",it_288->c_value))));
                right_value324 = come_decrement_ref_count2(right_value324, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer3(o2_saved_287,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            left_value_code_289=(char*)come_increment_ref_count(((char*)(right_value325=buffer_to_string(buf_286))));
            right_value325 = come_decrement_ref_count2(right_value325, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj134=come_value_285->c_value;
            come_value_285->c_value=(char*)come_increment_ref_count(((char*)(right_value326=xsprintf("%s",left_value_code_289))));
            __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value326 = come_decrement_ref_count2(right_value326, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            result_type_290=(struct sType*)come_increment_ref_count(((struct sType*)(right_value327=sType_clone(left_type_263))));
            come_call_finalizer3(right_value327,sType_finalize, 0, 1, 0, 0, __result_obj__);
            if(result_type_290->mOriginalLoadVarType->v1) {
                __dec_obj135=result_type_290;
                result_type_290=(struct sType*)come_increment_ref_count(result_type_290->mOriginalLoadVarType->v1);
                come_call_finalizer3(__dec_obj135,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional342=list$1sNodeph_length(result_type_290->mArrayNum)>0,            _if_conditional342) {
                n_291=list$1sNodeph_length(result_type_290->mArrayNum)-list$1CVALUEph_length(array_num_264);
                if(_if_conditional343=n_291==0,                _if_conditional343) {
                    __dec_obj136=result_type_290;
                    result_type_290=(struct sType*)come_increment_ref_count(((struct sType*)(right_value328=sType_clone(left_type_263))));
                    come_call_finalizer3(__dec_obj136,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value328,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    if(left_type_263->mOriginalLoadVarType->v1) {
                        __dec_obj137=result_type_290;
                        result_type_290=(struct sType*)come_increment_ref_count(((struct sType*)(right_value329=sType_clone(left_type_263->mOriginalLoadVarType->v1))));
                        come_call_finalizer3(__dec_obj137,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value329,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    list$1sNodeph_reset(result_type_290->mArrayNum);
                }
                else {
                    if(_if_conditional345=n_291>0,                    _if_conditional345) {
                        for(                        i_292=0;                        i_292<n_291;                        i_292++                        ){
                            list$1sNodeph_delete(result_type_290->mArrayNum,-1,-1);
                        }
                    }
                    else {
                        if(_if_conditional346=n_291<0,                        _if_conditional346) {
                            list$1sNodeph_reset(result_type_290->mArrayNum);
                            result_type_290->mPointerNum+=n_291;
                            if(_if_conditional347=result_type_290->mPointerNum<0,                            _if_conditional347) {
                                result_type_290->mPointerNum=0;
                            }
                        }
                    }
                }
            }
            else {
                if(_if_conditional348=result_type_290->mPointerNum>0,                _if_conditional348) {
                    result_type_290->mPointerNum-=list$1CVALUEph_length(array_num_264);
                    if(_if_conditional349=result_type_290->mPointerNum<0,                    _if_conditional349) {
                        result_type_290->mPointerNum=0;
                    }
                }
            }
            __dec_obj138=come_value_285->type;
            come_value_285->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value330=sType_clone(result_type_290))));
            come_call_finalizer3(__dec_obj138,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value330,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_value_285->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_285));
            add_come_last_code(info,"%s;\n",come_value_285->c_value);
            come_call_finalizer3(come_value_285,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_286,buffer_finalize, 0, 0, 0, 0, (void*)0);
            left_value_code_289 = come_decrement_ref_count2(left_value_code_289, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_290,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    __result181__ = (_Bool)1;
    come_call_finalizer3(left_value_262,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_263,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_264,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_268,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result181__;
    come_call_finalizer3(left_value_262,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_263,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_264,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_268,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value331;
char* __dec_obj139;
void* right_value332;
struct list$1sNodeph* __dec_obj140;
void* right_value333;
struct sNode* __dec_obj141;
struct sLoadRangeArrayNode* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
right_value331 = (void*)0;
right_value332 = (void*)0;
right_value333 = (void*)0;
    self->sline=info->sline;
    __dec_obj139=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value331=__builtin_string(info->sname))));
    __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value331 = come_decrement_ref_count2(right_value331, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj140=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value332=list$1sNodephp_clone(array_num))));
    come_call_finalizer3(__dec_obj140,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value332,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj141=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value333=sNode_clone(left))));
    if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count2(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value333) { right_value333 = come_decrement_ref_count2(right_value333, ((struct sNode*)right_value333)->finalize, ((struct sNode*)right_value333)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->mQuote=quote;
    __result182__ = __result_obj__ = self;
    come_call_finalizer3(self,sLoadRangeArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result182__;
    come_call_finalizer3(self,sLoadRangeArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sLoadRangeArrayNode_terminated(struct sLoadRangeArrayNode* self){
void* __result_obj__;
_Bool __result183__;
memset(&__result_obj__, 0, sizeof(void*));
    __result183__ = (_Bool)0;
    return __result183__;
}

char* sLoadRangeArrayNode_kind(struct sLoadRangeArrayNode* self){
void* __result_obj__;
void* right_value334;
char* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
right_value334 = (void*)0;
    __result184__ = __result_obj__ = ((char*)(right_value334=__builtin_string("sLoadRangeArrayNode")));
    right_value334 = come_decrement_ref_count2(right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result184__;
}

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_293;
struct list$1sNodeph* array_num_nodes_294;
_Bool _if_conditional353;
_Bool __result185__;
void* right_value335;
struct CVALUE* left_value_295;
void* right_value336;
struct sType* left_type_296;
void* right_value337;
void* right_value338;
struct list$1CVALUEph* array_num_297;
struct list$1sNodeph* o2_saved_298;
struct sNode* it_299;
_Bool _if_conditional354;
_Bool __result186__;
void* right_value339;
struct CVALUE* c_value_300;
void* right_value340;
struct sType* type_301;
char* fun_name_302;
_Bool calling_fun_303;
_Bool _if_conditional355;
_Bool _if_conditional356;
void* right_value341;
struct CVALUE* come_value_304;
void* right_value342;
void* right_value343;
struct buffer* buf_305;
struct list$1CVALUEph* o2_saved_306;
struct CVALUE* it_307;
void* right_value344;
void* right_value345;
char* left_value_code_308;
void* right_value346;
char* __dec_obj142;
void* right_value347;
struct sType* result_type_309;
_Bool _if_conditional357;
struct sType* __dec_obj143;
_Bool _if_conditional358;
int n_310;
_Bool _if_conditional359;
void* right_value348;
struct sType* __dec_obj144;
_Bool _if_conditional360;
void* right_value349;
struct sType* __dec_obj145;
_Bool _if_conditional361;
int i_311;
_Bool _if_conditional362;
_Bool _if_conditional363;
_Bool _if_conditional364;
_Bool _if_conditional365;
void* right_value350;
struct sType* __dec_obj146;
_Bool __result187__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_293, 0, sizeof(struct sNode*));
memset(&array_num_nodes_294, 0, sizeof(struct list$1sNodeph*));
right_value335 = (void*)0;
memset(&left_value_295, 0, sizeof(struct CVALUE*));
right_value336 = (void*)0;
memset(&left_type_296, 0, sizeof(struct sType*));
right_value337 = (void*)0;
right_value338 = (void*)0;
memset(&array_num_297, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_298, 0, sizeof(struct list$1sNodeph*));
memset(&it_299, 0, sizeof(struct sNode*));
right_value339 = (void*)0;
memset(&c_value_300, 0, sizeof(struct CVALUE*));
right_value340 = (void*)0;
memset(&type_301, 0, sizeof(struct sType*));
memset(&fun_name_302, 0, sizeof(char*));
memset(&calling_fun_303, 0, sizeof(_Bool));
right_value341 = (void*)0;
memset(&come_value_304, 0, sizeof(struct CVALUE*));
right_value342 = (void*)0;
right_value343 = (void*)0;
memset(&buf_305, 0, sizeof(struct buffer*));
memset(&o2_saved_306, 0, sizeof(struct list$1CVALUEph*));
memset(&it_307, 0, sizeof(struct CVALUE*));
right_value344 = (void*)0;
right_value345 = (void*)0;
memset(&left_value_code_308, 0, sizeof(char*));
right_value346 = (void*)0;
right_value347 = (void*)0;
memset(&result_type_309, 0, sizeof(struct sType*));
memset(&n_310, 0, sizeof(int));
right_value348 = (void*)0;
right_value349 = (void*)0;
memset(&i_311, 0, sizeof(int));
right_value350 = (void*)0;
    left_293=self->mLeft;
    array_num_nodes_294=self->mArrayNum;
    if(_if_conditional353=!node_compile(left_293,info),    _if_conditional353) {
        __result185__ = (_Bool)0;
        return __result185__;
    }
    left_value_295=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value335=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value335,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    left_type_296=(struct sType*)come_increment_ref_count(((struct sType*)(right_value336=sType_clone(left_value_295->type))));
    come_call_finalizer3(right_value336,sType_finalize, 0, 1, 0, 0, __result_obj__);
    array_num_297=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value338=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value337=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1248, "list$1CVALUEph"))))))));
    come_call_finalizer3(right_value337,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value338,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_298=(array_num_nodes_294),it_299=list$1sNodeph_begin((o2_saved_298));    !list$1sNodeph_end((o2_saved_298));    it_299=list$1sNodeph_next((o2_saved_298))    ){
        if(_if_conditional354=!node_compile(it_299,info),        _if_conditional354) {
            __result186__ = (_Bool)0;
            come_call_finalizer3(left_value_295,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_296,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_297,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result186__;
        }
        c_value_300=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value339=get_value_from_stack(-1,info))));
        come_call_finalizer3(right_value339,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_297,(struct CVALUE*)come_increment_ref_count(c_value_300));
        come_call_finalizer3(c_value_300,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_301=(struct sType*)come_increment_ref_count(((struct sType*)(right_value340=sType_clone(left_value_295->type))));
    come_call_finalizer3(right_value340,sType_finalize, 0, 1, 0, 0, __result_obj__);
    fun_name_302="operator_load_range_element";
    if(self->mQuote) {
        calling_fun_303=(_Bool)0;
    }
    else {
        calling_fun_303=operator_overload_fun2(type_301,fun_name_302,left_value_295,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_297,0), "18field.c", 1269, 11)),((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_297,1), "18field.c", 1269, 12)),info);
    }
    if(_if_conditional356=!calling_fun_303,    _if_conditional356) {
        come_value_304=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value341=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1273, "CVALUE"))));
        come_call_finalizer3(right_value341,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        buf_305=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value343=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value342=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1275, "buffer"))))))));
        come_call_finalizer3(right_value342,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value343,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_305,left_value_295->c_value);
        for(        o2_saved_306=(struct list$1CVALUEph*)come_increment_ref_count((array_num_297)),it_307=list$1CVALUEph_begin((o2_saved_306));        !list$1CVALUEph_end((o2_saved_306));        it_307=list$1CVALUEph_next((o2_saved_306))        ){
            buffer_append_str(buf_305,((char*)(right_value344=xsprintf("[%s]",it_307->c_value))));
            right_value344 = come_decrement_ref_count2(right_value344, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        come_call_finalizer3(o2_saved_306,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_308=(char*)come_increment_ref_count(((char*)(right_value345=buffer_to_string(buf_305))));
        right_value345 = come_decrement_ref_count2(right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj142=come_value_304->c_value;
        come_value_304->c_value=(char*)come_increment_ref_count(((char*)(right_value346=xsprintf("%s",left_value_code_308))));
        __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value346 = come_decrement_ref_count2(right_value346, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_309=(struct sType*)come_increment_ref_count(((struct sType*)(right_value347=sType_clone(left_type_296))));
        come_call_finalizer3(right_value347,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(result_type_309->mOriginalLoadVarType->v1) {
            __dec_obj143=result_type_309;
            result_type_309=(struct sType*)come_increment_ref_count(result_type_309->mOriginalLoadVarType->v1);
            come_call_finalizer3(__dec_obj143,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional358=list$1sNodeph_length(result_type_309->mArrayNum)>0,        _if_conditional358) {
            n_310=list$1sNodeph_length(result_type_309->mArrayNum)-list$1CVALUEph_length(array_num_297);
            if(_if_conditional359=n_310==0,            _if_conditional359) {
                __dec_obj144=result_type_309;
                result_type_309=(struct sType*)come_increment_ref_count(((struct sType*)(right_value348=sType_clone(left_type_296))));
                come_call_finalizer3(__dec_obj144,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value348,sType_finalize, 0, 1, 0, 0, __result_obj__);
                if(left_type_296->mOriginalLoadVarType->v1) {
                    __dec_obj145=result_type_309;
                    result_type_309=(struct sType*)come_increment_ref_count(((struct sType*)(right_value349=sType_clone(left_type_296->mOriginalLoadVarType->v1))));
                    come_call_finalizer3(__dec_obj145,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value349,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                list$1sNodeph_reset(result_type_309->mArrayNum);
            }
            else {
                if(_if_conditional361=n_310>0,                _if_conditional361) {
                    for(                    i_311=0;                    i_311<n_310;                    i_311++                    ){
                        list$1sNodeph_delete(result_type_309->mArrayNum,-1,-1);
                    }
                }
                else {
                    if(_if_conditional362=n_310<0,                    _if_conditional362) {
                        list$1sNodeph_reset(result_type_309->mArrayNum);
                        result_type_309->mPointerNum+=n_310;
                        if(_if_conditional363=result_type_309->mPointerNum<0,                        _if_conditional363) {
                            result_type_309->mPointerNum=0;
                        }
                    }
                }
            }
        }
        else {
            if(_if_conditional364=result_type_309->mPointerNum>0,            _if_conditional364) {
                result_type_309->mPointerNum-=list$1CVALUEph_length(array_num_297);
                if(_if_conditional365=result_type_309->mPointerNum<0,                _if_conditional365) {
                    result_type_309->mPointerNum=0;
                }
            }
        }
        __dec_obj146=come_value_304->type;
        come_value_304->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value350=sType_clone(result_type_309))));
        come_call_finalizer3(__dec_obj146,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value350,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_304->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_304));
        add_come_last_code(info,"%s;\n",come_value_304->c_value);
        come_call_finalizer3(come_value_304,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_305,buffer_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_308 = come_decrement_ref_count2(left_value_code_308, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_309,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result187__ = (_Bool)1;
    come_call_finalizer3(left_value_295,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_296,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_297,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_301,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result187__;
    come_call_finalizer3(left_value_295,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_296,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_297,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_301,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__;
struct sNode* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
    err_msg(info,"parse_method_call is failed");
    exit(2);
    __result188__ = __result_obj__ = (struct sNode*)((void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result188__;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool _while_condtional28;
_Bool range_array_312;
char* p_313;
int sline_314;
_Bool _if_conditional366;
_Bool no_comma_315;
_Bool no_output_err_316;
_Bool no_output_come_code_317;
void* right_value351;
struct sNode* exp_318;
_Bool _if_conditional367;
_Bool _if_conditional368;
_Bool quote_319;
_Bool _if_conditional369;
void* right_value352;
void* right_value353;
struct list$1sNodeph* array_num_320;
void* right_value354;
struct sNode* node2_321;
_Bool _if_conditional372;
void* right_value358;
struct sNode* node3_325;
int __exception_result_var_b1;
void* right_value359;
void* right_value360;
struct sNode* _inf_value1;
struct sLoadRangeArrayNode* _inf_obj_value1;
void* right_value365;
struct sNode* __dec_obj153;
_Bool _if_conditional382;
_Bool quote_327;
_Bool _if_conditional383;
_Bool range_328;
void* right_value366;
void* right_value367;
struct list$1sNodeph* array_num_329;
_Bool _while_condtional29;
_Bool range_array2_330;
char* p_331;
int sline_332;
_Bool _if_conditional384;
_Bool no_comma_333;
_Bool no_output_err_334;
_Bool no_output_come_code_335;
void* right_value368;
struct sNode* exp_336;
_Bool _if_conditional385;
_Bool _if_conditional386;
_Bool _if_conditional387;
void* right_value369;
struct sNode* node2_337;
_Bool _if_conditional388;
_Bool break_guard_338;
_Bool _if_conditional389;
_Bool _if_conditional390;
void* right_value370;
struct sNode* right_node_339;
void* right_value371;
void* right_value372;
struct sNode* _inf_value2;
struct sStoreArrayNode* _inf_obj_value2;
void* right_value378;
struct sNode* __dec_obj158;
void* right_value379;
void* right_value380;
struct sNode* _inf_value3;
struct sLoadArrayNode* _inf_obj_value3;
void* right_value385;
struct sNode* __dec_obj162;
_Bool _if_conditional412;
_Bool no_comma_342;
void* right_value386;
struct sNode* begin_343;
int __exception_result_var_b2;
void* right_value387;
struct sNode* end_344;
int __exception_result_var_b3;
void* right_value388;
void* right_value389;
struct sNode* _inf_value4;
struct sRangeCheckNode* _inf_obj_value4;
void* right_value395;
struct sNode* __dec_obj167;
_Bool _if_conditional423;
void* right_value396;
void* right_value397;
struct sNode* _inf_value5;
struct sNullCheckNode* _inf_obj_value5;
void* right_value401;
struct sNode* __dec_obj170;
_Bool _if_conditional431;
void* right_value402;
void* right_value403;
struct sNode* _inf_value6;
struct sNullableNode* _inf_obj_value6;
void* right_value407;
struct sNode* __dec_obj173;
_Bool _if_conditional439;
_Bool _if_conditional440;
void* right_value408;
void* right_value409;
void* right_value410;
struct sNode* _inf_value7;
struct sNullCheckNode* _inf_obj_value7;
void* right_value414;
struct sNode* __dec_obj176;
void* right_value415;
char* field_name_349;
_Bool parse_method_generics_type_350;
char* p_351;
int sline_352;
_Bool _if_conditional448;
_Bool _if_conditional449;
void* right_value416;
char* word_353;
_Bool _if_conditional450;
_Bool _if_conditional451;
void* right_value417;
struct sNode* right_node_354;
void* right_value418;
void* right_value419;
struct sNode* _inf_value8;
struct sStoreFieldNode* _inf_obj_value8;
void* right_value425;
struct sNode* __dec_obj181;
_Bool _if_conditional462;
_Bool _if_conditional463;
void* right_value426;
void* right_value427;
struct sNode* __dec_obj182;
_Bool _if_conditional464;
void* right_value428;
void* right_value429;
struct sNode* __dec_obj183;
void* right_value430;
void* right_value431;
struct sNode* __dec_obj184;
void* right_value432;
void* right_value433;
struct sNode* _inf_value9;
struct sLoadFieldNode* _inf_obj_value9;
void* right_value438;
struct sNode* __dec_obj188;
void* right_value439;
struct sNode* node2_357;
_Bool _if_conditional473;
struct sNode* __dec_obj189;
struct sNode* __result208__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&range_array_312, 0, sizeof(_Bool));
memset(&p_313, 0, sizeof(char*));
memset(&sline_314, 0, sizeof(int));
memset(&no_comma_315, 0, sizeof(_Bool));
memset(&no_output_err_316, 0, sizeof(_Bool));
memset(&no_output_come_code_317, 0, sizeof(_Bool));
right_value351 = (void*)0;
memset(&exp_318, 0, sizeof(struct sNode*));
memset(&quote_319, 0, sizeof(_Bool));
right_value352 = (void*)0;
right_value353 = (void*)0;
memset(&array_num_320, 0, sizeof(struct list$1sNodeph*));
right_value354 = (void*)0;
memset(&node2_321, 0, sizeof(struct sNode*));
right_value358 = (void*)0;
memset(&node3_325, 0, sizeof(struct sNode*));
right_value359 = (void*)0;
right_value360 = (void*)0;
right_value365 = (void*)0;
memset(&quote_327, 0, sizeof(_Bool));
memset(&range_328, 0, sizeof(_Bool));
right_value366 = (void*)0;
right_value367 = (void*)0;
memset(&array_num_329, 0, sizeof(struct list$1sNodeph*));
memset(&range_array2_330, 0, sizeof(_Bool));
memset(&p_331, 0, sizeof(char*));
memset(&sline_332, 0, sizeof(int));
memset(&no_comma_333, 0, sizeof(_Bool));
memset(&no_output_err_334, 0, sizeof(_Bool));
memset(&no_output_come_code_335, 0, sizeof(_Bool));
right_value368 = (void*)0;
memset(&exp_336, 0, sizeof(struct sNode*));
right_value369 = (void*)0;
memset(&node2_337, 0, sizeof(struct sNode*));
memset(&break_guard_338, 0, sizeof(_Bool));
right_value370 = (void*)0;
memset(&right_node_339, 0, sizeof(struct sNode*));
right_value371 = (void*)0;
right_value372 = (void*)0;
right_value378 = (void*)0;
right_value379 = (void*)0;
right_value380 = (void*)0;
right_value385 = (void*)0;
memset(&no_comma_342, 0, sizeof(_Bool));
right_value386 = (void*)0;
memset(&begin_343, 0, sizeof(struct sNode*));
right_value387 = (void*)0;
memset(&end_344, 0, sizeof(struct sNode*));
right_value388 = (void*)0;
right_value389 = (void*)0;
right_value395 = (void*)0;
right_value396 = (void*)0;
right_value397 = (void*)0;
right_value401 = (void*)0;
right_value402 = (void*)0;
right_value403 = (void*)0;
right_value407 = (void*)0;
right_value408 = (void*)0;
right_value409 = (void*)0;
right_value410 = (void*)0;
right_value414 = (void*)0;
right_value415 = (void*)0;
memset(&field_name_349, 0, sizeof(char*));
memset(&parse_method_generics_type_350, 0, sizeof(_Bool));
memset(&p_351, 0, sizeof(char*));
memset(&sline_352, 0, sizeof(int));
right_value416 = (void*)0;
memset(&word_353, 0, sizeof(char*));
right_value417 = (void*)0;
memset(&right_node_354, 0, sizeof(struct sNode*));
right_value418 = (void*)0;
right_value419 = (void*)0;
right_value425 = (void*)0;
right_value426 = (void*)0;
right_value427 = (void*)0;
right_value428 = (void*)0;
right_value429 = (void*)0;
right_value430 = (void*)0;
right_value431 = (void*)0;
right_value432 = (void*)0;
right_value433 = (void*)0;
right_value438 = (void*)0;
right_value439 = (void*)0;
memset(&node2_357, 0, sizeof(struct sNode*));
    while(_while_condtional28=(_Bool)1,    _while_condtional28) {
        range_array_312=(_Bool)0;
        {
            p_313=info->p;
            sline_314=info->sline;
            if(_if_conditional366=*info->p==91,            _if_conditional366) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_315=info->no_comma;
                no_output_err_316=info->no_output_err;
                no_output_come_code_317=info->no_output_come_code;
                info->no_output_err=(_Bool)1;
                info->no_comma=(_Bool)1;
                info->no_output_come_code=(_Bool)1;
                exp_318=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value351=expression_v13(info))));
                if(right_value351) { right_value351 = come_decrement_ref_count2(right_value351, ((struct sNode*)right_value351)->finalize, ((struct sNode*)right_value351)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                info->no_comma=no_comma_315;
                info->no_output_err=no_output_err_316;
                info->no_output_come_code=no_output_come_code_317;
                if(_if_conditional367=*info->p==46&&*(info->p+1)==46,                _if_conditional367) {
                    range_array_312=(_Bool)1;
                }
                if(exp_318) { exp_318 = come_decrement_ref_count2(exp_318, ((struct sNode*)exp_318)->finalize, ((struct sNode*)exp_318)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            info->p=p_313;
            info->sline=sline_314;
        }
        if(_if_conditional368=range_array_312&&(*info->p==92&&*(info->p+1)==91||*info->p==91),        _if_conditional368) {
            quote_319=*info->p==92;
            if(quote_319) {
                info->p++;
            }
            info->p++;
            skip_spaces_and_lf(info);
            array_num_320=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value353=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value352=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1388, "list$1sNodeph"))))))));
            come_call_finalizer3(right_value352,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value353,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            skip_pointer_attribute(info);
            node2_321=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value354=expression_v13(info))));
            if(right_value354) { right_value354 = come_decrement_ref_count2(right_value354, ((struct sNode*)right_value354)->finalize, ((struct sNode*)right_value354)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            list$1sNodeph_push_back(array_num_320,(struct sNode*)come_increment_ref_count(node2_321));
            if(_if_conditional372=*info->p==46&&*(info->p+1)==46,            _if_conditional372) {
                info->p+=2;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                node3_325=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value358=expression_v13(info))));
                if(right_value358) { right_value358 = come_decrement_ref_count2(right_value358, ((struct sNode*)right_value358)->finalize, ((struct sNode*)right_value358)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                list$1sNodeph_push_back(array_num_320,(struct sNode*)come_increment_ref_count(node3_325));
                (come_push_stackframe("18field.c", 1406, 13),__exception_result_var_b1=expected_next_character(93,info), come_pop_stackframe(), __exception_result_var_b1);
                if(node3_325) { node3_325 = come_decrement_ref_count2(node3_325, ((struct sNode*)node3_325)->finalize, ((struct sNode*)node3_325)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1409, "struct sNode");
            _inf_obj_value1=come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value360=sLoadRangeArrayNode_initialize((struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value359=(struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "18field.c", 1409, "sLoadRangeArrayNode")))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_320),quote_319,info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sLoadRangeArrayNode_finalize;
            _inf_value1->clone=(void*)sLoadRangeArrayNode_clone;
            _inf_value1->compile=(void*)sLoadRangeArrayNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sLoadRangeArrayNode_terminated;
            _inf_value1->kind=(void*)sLoadRangeArrayNode_kind;
            __dec_obj153=node;
            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value365=_inf_value1)));
            if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); }
            come_call_finalizer3(right_value359,sLoadRangeArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value360,sLoadRangeArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value365) { right_value365 = come_decrement_ref_count2(right_value365, ((struct sNode*)right_value365)->finalize, ((struct sNode*)right_value365)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            come_call_finalizer3(array_num_320,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            if(node2_321) { node2_321 = come_decrement_ref_count2(node2_321, ((struct sNode*)node2_321)->finalize, ((struct sNode*)node2_321)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional382=!range_array_312&&(*info->p==92&&*(info->p+1)==91||*info->p==91),            _if_conditional382) {
                quote_327=*info->p==92;
                if(quote_327) {
                    info->p++;
                }
                range_328=(_Bool)0;
                array_num_329=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value367=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value366=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1418, "list$1sNodeph"))))))));
                come_call_finalizer3(right_value366,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value367,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                while(_while_condtional29=1,                _while_condtional29) {
                    range_array2_330=(_Bool)0;
                    {
                        p_331=info->p;
                        sline_332=info->sline;
                        if(_if_conditional384=*info->p==91,                        _if_conditional384) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_333=info->no_comma;
                            no_output_err_334=info->no_output_err;
                            no_output_come_code_335=info->no_output_come_code;
                            info->no_output_err=(_Bool)1;
                            info->no_comma=(_Bool)1;
                            info->no_output_come_code=(_Bool)1;
                            exp_336=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value368=expression_v13(info))));
                            if(right_value368) { right_value368 = come_decrement_ref_count2(right_value368, ((struct sNode*)right_value368)->finalize, ((struct sNode*)right_value368)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            info->no_comma=no_comma_333;
                            info->no_output_err=no_output_err_334;
                            info->no_output_come_code=no_output_come_code_335;
                            if(_if_conditional385=*info->p==46&&*(info->p+1)==46,                            _if_conditional385) {
                                range_array2_330=(_Bool)1;
                            }
                            if(exp_336) { exp_336 = come_decrement_ref_count2(exp_336, ((struct sNode*)exp_336)->finalize, ((struct sNode*)exp_336)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        info->p=p_331;
                        info->sline=sline_332;
                    }
                    if(range_array2_330) {
                        break;
                    }
                    else {
                        if(_if_conditional387=*info->p==91,                        _if_conditional387) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            skip_pointer_attribute(info);
                            node2_337=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value369=expression_v13(info))));
                            if(right_value369) { right_value369 = come_decrement_ref_count2(right_value369, ((struct sNode*)right_value369)->finalize, ((struct sNode*)right_value369)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            list$1sNodeph_push_back(array_num_329,(struct sNode*)come_increment_ref_count(node2_337));
                            if(_if_conditional388=*info->p==93,                            _if_conditional388) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            else {
                                err_msg(info,"require ] character");
                                exit(2);
                            }
                            if(node2_337) { node2_337 = come_decrement_ref_count2(node2_337, ((struct sNode*)node2_337)->finalize, ((struct sNode*)node2_337)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            break;
                        }
                    }
                }
                break_guard_338=(_Bool)0;
                if(_if_conditional389=*info->p==63&&*(info->p+1)==63,                _if_conditional389) {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    break_guard_338=(_Bool)1;
                }
                if(_if_conditional390=*info->p==61&&*(info->p+1)!=61,                _if_conditional390) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    right_node_339=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value370=expression_v13(info))));
                    if(right_value370) { right_value370 = come_decrement_ref_count2(right_value370, ((struct sNode*)right_value370)->finalize, ((struct sNode*)right_value370)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    parse_sharp_v5(info);
                    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1493, "struct sNode");
                    _inf_obj_value2=come_increment_ref_count(((struct sStoreArrayNode*)(right_value372=sStoreArrayNode_initialize((struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value371=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "18field.c", 1493, "sStoreArrayNode")))),node,(struct sNode*)come_increment_ref_count(right_node_339),(struct list$1sNodeph*)come_increment_ref_count(array_num_329),quote_327,info))));
                    _inf_value2->_protocol_obj=_inf_obj_value2;
                    _inf_value2->finalize=(void*)sStoreArrayNode_finalize;
                    _inf_value2->clone=(void*)sStoreArrayNode_clone;
                    _inf_value2->compile=(void*)sStoreArrayNode_compile;
                    _inf_value2->sline=(void*)sNodeBase_sline;
                    _inf_value2->sname=(void*)sNodeBase_sname;
                    _inf_value2->terminated=(void*)sStoreArrayNode_terminated;
                    _inf_value2->kind=(void*)sStoreArrayNode_kind;
                    __dec_obj158=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value378=_inf_value2)));
                    if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count2(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0, (void*)0); }
                    come_call_finalizer3(right_value371,sStoreArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value372,sStoreArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value378) { right_value378 = come_decrement_ref_count2(right_value378, ((struct sNode*)right_value378)->finalize, ((struct sNode*)right_value378)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    if(right_node_339) { right_node_339 = come_decrement_ref_count2(right_node_339, ((struct sNode*)right_node_339)->finalize, ((struct sNode*)right_node_339)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1496, "struct sNode");
                    _inf_obj_value3=come_increment_ref_count(((struct sLoadArrayNode*)(right_value380=sLoadArrayNode_initialize((struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value379=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "18field.c", 1496, "sLoadArrayNode")))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_329),quote_327,break_guard_338,info))));
                    _inf_value3->_protocol_obj=_inf_obj_value3;
                    _inf_value3->finalize=(void*)sLoadArrayNode_finalize;
                    _inf_value3->clone=(void*)sLoadArrayNode_clone;
                    _inf_value3->compile=(void*)sLoadArrayNode_compile;
                    _inf_value3->sline=(void*)sNodeBase_sline;
                    _inf_value3->sname=(void*)sNodeBase_sname;
                    _inf_value3->terminated=(void*)sLoadArrayNode_terminated;
                    _inf_value3->kind=(void*)sLoadArrayNode_kind;
                    __dec_obj162=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value385=_inf_value3)));
                    if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count2(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0,0, (void*)0); }
                    come_call_finalizer3(right_value379,sLoadArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value380,sLoadArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value385) { right_value385 = come_decrement_ref_count2(right_value385, ((struct sNode*)right_value385)->finalize, ((struct sNode*)right_value385)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                come_call_finalizer3(array_num_329,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional412=*info->p==33&&*(info->p+1)==123,                _if_conditional412) {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    no_comma_342=info->no_comma;
                    info->no_comma=(_Bool)1;
                    begin_343=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value386=expression_v13(info))));
                    if(right_value386) { right_value386 = come_decrement_ref_count2(right_value386, ((struct sNode*)right_value386)->finalize, ((struct sNode*)right_value386)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    info->no_comma=no_comma_342;
                    (come_push_stackframe("18field.c", 1508, 14),__exception_result_var_b2=expected_next_character(44,info), come_pop_stackframe(), __exception_result_var_b2);
                    end_344=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value387=expression_v13(info))));
                    if(right_value387) { right_value387 = come_decrement_ref_count2(right_value387, ((struct sNode*)right_value387)->finalize, ((struct sNode*)right_value387)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    (come_push_stackframe("18field.c", 1512, 15),__exception_result_var_b3=expected_next_character(125,info), come_pop_stackframe(), __exception_result_var_b3);
                    parse_sharp_v5(info);
                    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1516, "struct sNode");
                    _inf_obj_value4=come_increment_ref_count(((struct sRangeCheckNode*)(right_value389=sRangeCheckNode_initialize((struct sRangeCheckNode*)come_increment_ref_count(((struct sRangeCheckNode*)(right_value388=(struct sRangeCheckNode*)come_calloc(1, sizeof(struct sRangeCheckNode)*(1), "18field.c", 1516, "sRangeCheckNode")))),node,begin_343,end_344,info))));
                    _inf_value4->_protocol_obj=_inf_obj_value4;
                    _inf_value4->finalize=(void*)sRangeCheckNode_finalize;
                    _inf_value4->clone=(void*)sRangeCheckNode_clone;
                    _inf_value4->compile=(void*)sRangeCheckNode_compile;
                    _inf_value4->sline=(void*)sNodeBase_sline;
                    _inf_value4->sname=(void*)sNodeBase_sname;
                    _inf_value4->terminated=(void*)sRangeCheckNode_terminated;
                    _inf_value4->kind=(void*)sRangeCheckNode_kind;
                    __dec_obj167=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value395=_inf_value4)));
                    if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count2(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0,0, (void*)0); }
                    come_call_finalizer3(right_value388,sRangeCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value389,sRangeCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value395) { right_value395 = come_decrement_ref_count2(right_value395, ((struct sNode*)right_value395)->finalize, ((struct sNode*)right_value395)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    if(begin_343) { begin_343 = come_decrement_ref_count2(begin_343, ((struct sNode*)begin_343)->finalize, ((struct sNode*)begin_343)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(end_344) { end_344 = come_decrement_ref_count2(end_344, ((struct sNode*)end_344)->finalize, ((struct sNode*)end_344)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional423=*info->p==33&&*(info->p+1)!=61,                    _if_conditional423) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        parse_sharp_v5(info);
                        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1524, "struct sNode");
                        _inf_obj_value5=come_increment_ref_count(((struct sNullCheckNode*)(right_value397=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value396=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1524, "sNullCheckNode")))),node,(_Bool)0,info))));
                        _inf_value5->_protocol_obj=_inf_obj_value5;
                        _inf_value5->finalize=(void*)sNullCheckNode_finalize;
                        _inf_value5->clone=(void*)sNullCheckNode_clone;
                        _inf_value5->compile=(void*)sNullCheckNode_compile;
                        _inf_value5->sline=(void*)sNodeBase_sline;
                        _inf_value5->sname=(void*)sNodeBase_sname;
                        _inf_value5->terminated=(void*)sNullCheckNode_terminated;
                        _inf_value5->kind=(void*)sNullCheckNode_kind;
                        __dec_obj170=node;
                        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value401=_inf_value5)));
                        if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count2(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0,0, (void*)0); }
                        come_call_finalizer3(right_value396,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value397,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value401) { right_value401 = come_decrement_ref_count2(right_value401, ((struct sNode*)right_value401)->finalize, ((struct sNode*)right_value401)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    else {
                        if(_if_conditional431=*info->p==63&&*(info->p+1)==63,                        _if_conditional431) {
                            info->p+=2;
                            skip_spaces_and_lf(info);
                            parse_sharp_v5(info);
                            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1532, "struct sNode");
                            _inf_obj_value6=come_increment_ref_count(((struct sNullableNode*)(right_value403=sNullableNode_initialize((struct sNullableNode*)come_increment_ref_count(((struct sNullableNode*)(right_value402=(struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "18field.c", 1532, "sNullableNode")))),node,info))));
                            _inf_value6->_protocol_obj=_inf_obj_value6;
                            _inf_value6->finalize=(void*)sNullableNode_finalize;
                            _inf_value6->clone=(void*)sNullableNode_clone;
                            _inf_value6->compile=(void*)sNullableNode_compile;
                            _inf_value6->sline=(void*)sNodeBase_sline;
                            _inf_value6->sname=(void*)sNodeBase_sname;
                            _inf_value6->terminated=(void*)sNullableNode_terminated;
                            _inf_value6->kind=(void*)sNullableNode_kind;
                            __dec_obj173=node;
                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value407=_inf_value6)));
                            if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count2(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0,0,0, (void*)0); }
                            come_call_finalizer3(right_value402,sNullableNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value403,sNullableNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value407) { right_value407 = come_decrement_ref_count2(right_value407, ((struct sNode*)right_value407)->finalize, ((struct sNode*)right_value407)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        else {
                            if(_if_conditional439=(*info->p==46&&*(info->p+1)!=46)||(*info->p==45&&*(info->p+1)==62),                            _if_conditional439) {
                                if(_if_conditional440=*info->p==46,                                _if_conditional440) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                }
                                else {
                                    info->p+=2;
                                    skip_spaces_and_lf(info);
                                }
                                _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1544, "struct sNode");
                                _inf_obj_value7=come_increment_ref_count(((struct sNullCheckNode*)(right_value410=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value408=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1544, "sNullCheckNode")))),((struct sNode*)(right_value409=sNode_clone(node))),(_Bool)1,info))));
                                _inf_value7->_protocol_obj=_inf_obj_value7;
                                _inf_value7->finalize=(void*)sNullCheckNode_finalize;
                                _inf_value7->clone=(void*)sNullCheckNode_clone;
                                _inf_value7->compile=(void*)sNullCheckNode_compile;
                                _inf_value7->sline=(void*)sNodeBase_sline;
                                _inf_value7->sname=(void*)sNodeBase_sname;
                                _inf_value7->terminated=(void*)sNullCheckNode_terminated;
                                _inf_value7->kind=(void*)sNullCheckNode_kind;
                                __dec_obj176=node;
                                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value414=_inf_value7)));
                                if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count2(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0,0, (void*)0); }
                                come_call_finalizer3(right_value408,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value409) { right_value409 = come_decrement_ref_count2(right_value409, ((struct sNode*)right_value409)->finalize, ((struct sNode*)right_value409)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                come_call_finalizer3(right_value410,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value414) { right_value414 = come_decrement_ref_count2(right_value414, ((struct sNode*)right_value414)->finalize, ((struct sNode*)right_value414)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                parse_sharp_v5(info);
                                field_name_349=(char*)come_increment_ref_count(((char*)(right_value415=parse_word(info))));
                                right_value415 = come_decrement_ref_count2(right_value415, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                parse_sharp_v5(info);
                                parse_method_generics_type_350=(_Bool)0;
                                {
                                    p_351=info->p;
                                    sline_352=info->sline;
                                    if(_if_conditional448=*info->p==60,                                    _if_conditional448) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                        if(_if_conditional449=xisalpha(*info->p)||*info->p==95,                                        _if_conditional449) {
                                            word_353=(char*)come_increment_ref_count(((char*)(right_value416=parse_word(info))));
                                            right_value416 = come_decrement_ref_count2(right_value416, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            if(_if_conditional450=is_type_name(word_353,info),                                            _if_conditional450) {
                                                parse_method_generics_type_350=(_Bool)1;
                                            }
                                            word_353 = come_decrement_ref_count2(word_353, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                    info->p=p_351;
                                    info->sline=sline_352;
                                }
                                if(_if_conditional451=*info->p==61&&*(info->p+1)!=61,                                _if_conditional451) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                    parse_sharp_v5(info);
                                    right_node_354=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value417=expression_v13(info))));
                                    if(right_value417) { right_value417 = come_decrement_ref_count2(right_value417, ((struct sNode*)right_value417)->finalize, ((struct sNode*)right_value417)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1582, "struct sNode");
                                    _inf_obj_value8=come_increment_ref_count(((struct sStoreFieldNode*)(right_value419=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value418=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1582, "sStoreFieldNode")))),node,(struct sNode*)come_increment_ref_count(right_node_354),(char*)come_increment_ref_count(field_name_349),info))));
                                    _inf_value8->_protocol_obj=_inf_obj_value8;
                                    _inf_value8->finalize=(void*)sStoreFieldNode_finalize;
                                    _inf_value8->clone=(void*)sStoreFieldNode_clone;
                                    _inf_value8->compile=(void*)sStoreFieldNode_compile;
                                    _inf_value8->sline=(void*)sNodeBase_sline;
                                    _inf_value8->sname=(void*)sNodeBase_sname;
                                    _inf_value8->terminated=(void*)sStoreFieldNode_terminated;
                                    _inf_value8->kind=(void*)sStoreFieldNode_kind;
                                    __dec_obj181=node;
                                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value425=_inf_value8)));
                                    if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count2(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0,0, (void*)0); }
                                    come_call_finalizer3(right_value418,sStoreFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value419,sStoreFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(right_value425) { right_value425 = come_decrement_ref_count2(right_value425, ((struct sNode*)right_value425)->finalize, ((struct sNode*)right_value425)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    if(right_node_354) { right_node_354 = come_decrement_ref_count2(right_node_354, ((struct sNode*)right_node_354)->finalize, ((struct sNode*)right_node_354)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    if(_if_conditional462=*info->p==40||*info->p==123||parse_method_generics_type_350||(*info->p==45&&*(info->p+1)==62&&*(info->p+2)==40),                                    _if_conditional462) {
                                        if(_if_conditional463=string_operator_equals(field_name_349,"if"),                                        _if_conditional463) {
                                            __dec_obj182=node;
                                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value427=parse_if_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value426=sNode_clone(node)))),info))));
                                            if(__dec_obj182) { __dec_obj182 = come_decrement_ref_count2(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value426) { right_value426 = come_decrement_ref_count2(right_value426, ((struct sNode*)right_value426)->finalize, ((struct sNode*)right_value426)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            if(right_value427) { right_value427 = come_decrement_ref_count2(right_value427, ((struct sNode*)right_value427)->finalize, ((struct sNode*)right_value427)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        else {
                                            if(_if_conditional464=string_operator_equals(field_name_349,"elif"),                                            _if_conditional464) {
                                                __dec_obj183=node;
                                                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value429=parse_elif_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value428=sNode_clone(node)))),info))));
                                                if(__dec_obj183) { __dec_obj183 = come_decrement_ref_count2(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value428) { right_value428 = come_decrement_ref_count2(right_value428, ((struct sNode*)right_value428)->finalize, ((struct sNode*)right_value428)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                if(right_value429) { right_value429 = come_decrement_ref_count2(right_value429, ((struct sNode*)right_value429)->finalize, ((struct sNode*)right_value429)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            else {
                                                __dec_obj184=node;
                                                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value431=parse_method_call_v20((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value430=sNode_clone(node)))),(char*)come_increment_ref_count(field_name_349),info))));
                                                if(__dec_obj184) { __dec_obj184 = come_decrement_ref_count2(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value430) { right_value430 = come_decrement_ref_count2(right_value430, ((struct sNode*)right_value430)->finalize, ((struct sNode*)right_value430)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                if(right_value431) { right_value431 = come_decrement_ref_count2(right_value431, ((struct sNode*)right_value431)->finalize, ((struct sNode*)right_value431)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                        }
                                    }
                                    else {
                                        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1596, "struct sNode");
                                        _inf_obj_value9=come_increment_ref_count(((struct sLoadFieldNode*)(right_value433=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value432=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 1596, "sLoadFieldNode")))),node,(char*)come_increment_ref_count(field_name_349),info))));
                                        _inf_value9->_protocol_obj=_inf_obj_value9;
                                        _inf_value9->finalize=(void*)sLoadFieldNode_finalize;
                                        _inf_value9->clone=(void*)sLoadFieldNode_clone;
                                        _inf_value9->compile=(void*)sLoadFieldNode_compile;
                                        _inf_value9->sline=(void*)sNodeBase_sline;
                                        _inf_value9->sname=(void*)sNodeBase_sname;
                                        _inf_value9->terminated=(void*)sLoadFieldNode_terminated;
                                        _inf_value9->kind=(void*)sLoadFieldNode_kind;
                                        __dec_obj188=node;
                                        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value438=_inf_value9)));
                                        if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count2(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0,0, (void*)0); }
                                        come_call_finalizer3(right_value432,sLoadFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value433,sLoadFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(right_value438) { right_value438 = come_decrement_ref_count2(right_value438, ((struct sNode*)right_value438)->finalize, ((struct sNode*)right_value438)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                }
                                field_name_349 = come_decrement_ref_count2(field_name_349, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                node2_357=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value439=post_position_operator_v21((struct sNode*)come_increment_ref_count(node),info))));
                                if(right_value439) { right_value439 = come_decrement_ref_count2(right_value439, ((struct sNode*)right_value439)->finalize, ((struct sNode*)right_value439)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                if(_if_conditional473=node2_357==((void*)0),                                _if_conditional473) {
                                    if(node2_357) { node2_357 = come_decrement_ref_count2(node2_357, ((struct sNode*)node2_357)->finalize, ((struct sNode*)node2_357)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    break;
                                }
                                __dec_obj189=node;
                                node=(struct sNode*)come_increment_ref_count(node2_357);
                                if(__dec_obj189) { __dec_obj189 = come_decrement_ref_count2(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0,0,0, (void*)0); }
                                if(node2_357) { node2_357 = come_decrement_ref_count2(node2_357, ((struct sNode*)node2_357)->finalize, ((struct sNode*)node2_357)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                        }
                    }
                }
            }
        }
    }
    __result208__ = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result208__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional370;
void* right_value355;
struct list_item$1sNodeph* litem_322;
struct sNode* __dec_obj147;
_Bool _if_conditional371;
void* right_value356;
struct list_item$1sNodeph* litem_323;
struct sNode* __dec_obj148;
void* right_value357;
struct list_item$1sNodeph* litem_324;
struct sNode* __dec_obj149;
struct list$1sNodeph* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
right_value355 = (void*)0;
memset(&litem_322, 0, sizeof(struct list_item$1sNodeph*));
right_value356 = (void*)0;
memset(&litem_323, 0, sizeof(struct list_item$1sNodeph*));
right_value357 = (void*)0;
memset(&litem_324, 0, sizeof(struct list_item$1sNodeph*));
                if(_if_conditional370=self->len==0,                _if_conditional370) {
                    litem_322=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value355=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/neo-c.h", 217, "list_item$1sNodeph"))));
                    come_call_finalizer3(right_value355,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_322->prev=((void*)0);
                    litem_322->next=((void*)0);
                    __dec_obj147=litem_322->item;
                    litem_322->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count2(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0,0, (void*)0); }
                    self->tail=litem_322;
                    self->head=litem_322;
                }
                else {
                    if(_if_conditional371=self->len==1,                    _if_conditional371) {
                        litem_323=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value356=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/neo-c.h", 227, "list_item$1sNodeph"))));
                        come_call_finalizer3(right_value356,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_323->prev=self->head;
                        litem_323->next=((void*)0);
                        __dec_obj148=litem_323->item;
                        litem_323->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count2(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0,0, (void*)0); }
                        self->tail=litem_323;
                        self->head->next=litem_323;
                    }
                    else {
                        litem_324=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value357=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/neo-c.h", 237, "list_item$1sNodeph"))));
                        come_call_finalizer3(right_value357,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_324->prev=self->tail;
                        litem_324->next=((void*)0);
                        __dec_obj149=litem_324->item;
                        litem_324->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count2(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0, (void*)0); }
                        self->tail->next=litem_324;
                        self->tail=litem_324;
                    }
                }
                self->len++;
                __result189__ = __result_obj__ = self;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result189__;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self){
void* __result_obj__;
_Bool _if_conditional373;
_Bool _if_conditional374;
_Bool _if_conditional375;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional373=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional373) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional374=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional374) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional375=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional375) {
                    come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self){
void* __result_obj__;
_Bool _if_conditional376;
struct sLoadRangeArrayNode* __result190__;
void* right_value361;
struct sLoadRangeArrayNode* result_326;
_Bool _if_conditional377;
_Bool _if_conditional378;
void* right_value362;
char* __dec_obj150;
_Bool _if_conditional379;
void* right_value363;
struct sNode* __dec_obj151;
_Bool _if_conditional380;
void* right_value364;
struct list$1sNodeph* __dec_obj152;
_Bool _if_conditional381;
struct sLoadRangeArrayNode* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
right_value361 = (void*)0;
memset(&result_326, 0, sizeof(struct sLoadRangeArrayNode*));
right_value362 = (void*)0;
right_value363 = (void*)0;
right_value364 = (void*)0;
                if(_if_conditional376=self==(void*)0,                _if_conditional376) {
                    __result190__ = __result_obj__ = (void*)0;
                    return __result190__;
                }
                result_326=(struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value361=(struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "sLoadRangeArrayNode_clone", 3, "sLoadRangeArrayNode"))));
                come_call_finalizer3(right_value361,sLoadRangeArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional377=self!=((void*)0),                _if_conditional377) {
                    result_326->sline=self->sline;
                }
                if(_if_conditional378=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional378) {
                    __dec_obj150=result_326->sname;
                    result_326->sname=(char*)come_increment_ref_count(((char*)(right_value362=string_clone(self->sname))));
                    __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value362 = come_decrement_ref_count2(right_value362, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional379=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional379) {
                    __dec_obj151=result_326->mLeft;
                    result_326->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value363=sNode_clone(self->mLeft))));
                    if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count2(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value363) { right_value363 = come_decrement_ref_count2(right_value363, ((struct sNode*)right_value363)->finalize, ((struct sNode*)right_value363)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional380=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional380) {
                    __dec_obj152=result_326->mArrayNum;
                    result_326->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value364=list$1sNodephp_clone(self->mArrayNum))));
                    come_call_finalizer3(__dec_obj152,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value364,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional381=self!=((void*)0),                _if_conditional381) {
                    result_326->mQuote=self->mQuote;
                }
                __result191__ = __result_obj__ = result_326;
                come_call_finalizer3(result_326,sLoadRangeArrayNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result191__;
                come_call_finalizer3(result_326,sLoadRangeArrayNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sStoreArrayNode_finalize(struct sStoreArrayNode* self){
void* __result_obj__;
_Bool _if_conditional391;
_Bool _if_conditional392;
_Bool _if_conditional393;
_Bool _if_conditional394;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional391=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional391) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional392=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional392) {
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional393=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional393) {
                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional394=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional394) {
                            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self){
void* __result_obj__;
_Bool _if_conditional395;
struct sStoreArrayNode* __result192__;
void* right_value373;
struct sStoreArrayNode* result_340;
_Bool _if_conditional396;
_Bool _if_conditional397;
void* right_value374;
char* __dec_obj154;
_Bool _if_conditional398;
void* right_value375;
struct sNode* __dec_obj155;
_Bool _if_conditional399;
void* right_value376;
struct sNode* __dec_obj156;
_Bool _if_conditional400;
void* right_value377;
struct list$1sNodeph* __dec_obj157;
_Bool _if_conditional401;
struct sStoreArrayNode* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
right_value373 = (void*)0;
memset(&result_340, 0, sizeof(struct sStoreArrayNode*));
right_value374 = (void*)0;
right_value375 = (void*)0;
right_value376 = (void*)0;
right_value377 = (void*)0;
                        if(_if_conditional395=self==(void*)0,                        _if_conditional395) {
                            __result192__ = __result_obj__ = (void*)0;
                            return __result192__;
                        }
                        result_340=(struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value373=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "sStoreArrayNode_clone", 3, "sStoreArrayNode"))));
                        come_call_finalizer3(right_value373,sStoreArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional396=self!=((void*)0),                        _if_conditional396) {
                            result_340->sline=self->sline;
                        }
                        if(_if_conditional397=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional397) {
                            __dec_obj154=result_340->sname;
                            result_340->sname=(char*)come_increment_ref_count(((char*)(right_value374=string_clone(self->sname))));
                            __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value374 = come_decrement_ref_count2(right_value374, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional398=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional398) {
                            __dec_obj155=result_340->mLeft;
                            result_340->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value375=sNode_clone(self->mLeft))));
                            if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count2(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value375) { right_value375 = come_decrement_ref_count2(right_value375, ((struct sNode*)right_value375)->finalize, ((struct sNode*)right_value375)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional399=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional399) {
                            __dec_obj156=result_340->mRight;
                            result_340->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value376=sNode_clone(self->mRight))));
                            if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value376) { right_value376 = come_decrement_ref_count2(right_value376, ((struct sNode*)right_value376)->finalize, ((struct sNode*)right_value376)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional400=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional400) {
                            __dec_obj157=result_340->mArrayNum;
                            result_340->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value377=list$1sNodephp_clone(self->mArrayNum))));
                            come_call_finalizer3(__dec_obj157,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value377,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional401=self!=((void*)0),                        _if_conditional401) {
                            result_340->mQuote=self->mQuote;
                        }
                        __result193__ = __result_obj__ = result_340;
                        come_call_finalizer3(result_340,sStoreArrayNode_finalize, 0, 0, 1, 0, (void*)0);
                        return __result193__;
                        come_call_finalizer3(result_340,sStoreArrayNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sLoadArrayNode_finalize(struct sLoadArrayNode* self){
void* __result_obj__;
_Bool _if_conditional402;
_Bool _if_conditional403;
_Bool _if_conditional404;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional402=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional402) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional403=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional403) {
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional404=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional404) {
                            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self){
void* __result_obj__;
_Bool _if_conditional405;
struct sLoadArrayNode* __result194__;
void* right_value381;
struct sLoadArrayNode* result_341;
_Bool _if_conditional406;
_Bool _if_conditional407;
void* right_value382;
char* __dec_obj159;
_Bool _if_conditional408;
void* right_value383;
struct sNode* __dec_obj160;
_Bool _if_conditional409;
void* right_value384;
struct list$1sNodeph* __dec_obj161;
_Bool _if_conditional410;
_Bool _if_conditional411;
struct sLoadArrayNode* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
right_value381 = (void*)0;
memset(&result_341, 0, sizeof(struct sLoadArrayNode*));
right_value382 = (void*)0;
right_value383 = (void*)0;
right_value384 = (void*)0;
                        if(_if_conditional405=self==(void*)0,                        _if_conditional405) {
                            __result194__ = __result_obj__ = (void*)0;
                            return __result194__;
                        }
                        result_341=(struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value381=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "sLoadArrayNode_clone", 3, "sLoadArrayNode"))));
                        come_call_finalizer3(right_value381,sLoadArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional406=self!=((void*)0),                        _if_conditional406) {
                            result_341->sline=self->sline;
                        }
                        if(_if_conditional407=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional407) {
                            __dec_obj159=result_341->sname;
                            result_341->sname=(char*)come_increment_ref_count(((char*)(right_value382=string_clone(self->sname))));
                            __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value382 = come_decrement_ref_count2(right_value382, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional408=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional408) {
                            __dec_obj160=result_341->mLeft;
                            result_341->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value383=sNode_clone(self->mLeft))));
                            if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count2(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value383) { right_value383 = come_decrement_ref_count2(right_value383, ((struct sNode*)right_value383)->finalize, ((struct sNode*)right_value383)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional409=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional409) {
                            __dec_obj161=result_341->mArrayNum;
                            result_341->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value384=list$1sNodephp_clone(self->mArrayNum))));
                            come_call_finalizer3(__dec_obj161,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value384,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional410=self!=((void*)0),                        _if_conditional410) {
                            result_341->mQuote=self->mQuote;
                        }
                        if(_if_conditional411=self!=((void*)0),                        _if_conditional411) {
                            result_341->mBreakGuard=self->mBreakGuard;
                        }
                        __result195__ = __result_obj__ = result_341;
                        come_call_finalizer3(result_341,sLoadArrayNode_finalize, 0, 0, 1, 0, (void*)0);
                        return __result195__;
                        come_call_finalizer3(result_341,sLoadArrayNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sRangeCheckNode_finalize(struct sRangeCheckNode* self){
void* __result_obj__;
_Bool _if_conditional413;
_Bool _if_conditional414;
_Bool _if_conditional415;
_Bool _if_conditional416;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional413=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional413) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional414=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional414) {
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional415=self!=((void*)0)&&self->mBegin!=((void*)0),                        _if_conditional415) {
                            if(self->mBegin) { self->mBegin = come_decrement_ref_count2(self->mBegin, ((struct sNode*)self->mBegin)->finalize, ((struct sNode*)self->mBegin)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional416=self!=((void*)0)&&self->mEnd!=((void*)0),                        _if_conditional416) {
                            if(self->mEnd) { self->mEnd = come_decrement_ref_count2(self->mEnd, ((struct sNode*)self->mEnd)->finalize, ((struct sNode*)self->mEnd)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static struct sRangeCheckNode* sRangeCheckNode_clone(struct sRangeCheckNode* self){
void* __result_obj__;
_Bool _if_conditional417;
struct sRangeCheckNode* __result196__;
void* right_value390;
struct sRangeCheckNode* result_345;
_Bool _if_conditional418;
_Bool _if_conditional419;
void* right_value391;
char* __dec_obj163;
_Bool _if_conditional420;
void* right_value392;
struct sNode* __dec_obj164;
_Bool _if_conditional421;
void* right_value393;
struct sNode* __dec_obj165;
_Bool _if_conditional422;
void* right_value394;
struct sNode* __dec_obj166;
struct sRangeCheckNode* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
right_value390 = (void*)0;
memset(&result_345, 0, sizeof(struct sRangeCheckNode*));
right_value391 = (void*)0;
right_value392 = (void*)0;
right_value393 = (void*)0;
right_value394 = (void*)0;
                        if(_if_conditional417=self==(void*)0,                        _if_conditional417) {
                            __result196__ = __result_obj__ = (void*)0;
                            return __result196__;
                        }
                        result_345=(struct sRangeCheckNode*)come_increment_ref_count(((struct sRangeCheckNode*)(right_value390=(struct sRangeCheckNode*)come_calloc(1, sizeof(struct sRangeCheckNode)*(1), "sRangeCheckNode_clone", 3, "sRangeCheckNode"))));
                        come_call_finalizer3(right_value390,sRangeCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional418=self!=((void*)0),                        _if_conditional418) {
                            result_345->sline=self->sline;
                        }
                        if(_if_conditional419=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional419) {
                            __dec_obj163=result_345->sname;
                            result_345->sname=(char*)come_increment_ref_count(((char*)(right_value391=string_clone(self->sname))));
                            __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value391 = come_decrement_ref_count2(right_value391, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional420=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional420) {
                            __dec_obj164=result_345->mLeft;
                            result_345->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value392=sNode_clone(self->mLeft))));
                            if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count2(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value392) { right_value392 = come_decrement_ref_count2(right_value392, ((struct sNode*)right_value392)->finalize, ((struct sNode*)right_value392)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional421=self!=((void*)0)&&self->mBegin!=((void*)0),                        _if_conditional421) {
                            __dec_obj165=result_345->mBegin;
                            result_345->mBegin=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value393=sNode_clone(self->mBegin))));
                            if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count2(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value393) { right_value393 = come_decrement_ref_count2(right_value393, ((struct sNode*)right_value393)->finalize, ((struct sNode*)right_value393)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional422=self!=((void*)0)&&self->mEnd!=((void*)0),                        _if_conditional422) {
                            __dec_obj166=result_345->mEnd;
                            result_345->mEnd=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value394=sNode_clone(self->mEnd))));
                            if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count2(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value394) { right_value394 = come_decrement_ref_count2(right_value394, ((struct sNode*)right_value394)->finalize, ((struct sNode*)right_value394)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        __result197__ = __result_obj__ = result_345;
                        come_call_finalizer3(result_345,sRangeCheckNode_finalize, 0, 0, 1, 0, (void*)0);
                        return __result197__;
                        come_call_finalizer3(result_345,sRangeCheckNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sNullableNode_finalize(struct sNullableNode* self){
void* __result_obj__;
_Bool _if_conditional432;
_Bool _if_conditional433;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional432=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional432) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional433=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional433) {
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static struct sNullableNode* sNullableNode_clone(struct sNullableNode* self){
void* __result_obj__;
_Bool _if_conditional434;
struct sNullableNode* __result200__;
void* right_value404;
struct sNullableNode* result_347;
_Bool _if_conditional435;
_Bool _if_conditional436;
void* right_value405;
char* __dec_obj171;
_Bool _if_conditional437;
void* right_value406;
struct sNode* __dec_obj172;
_Bool _if_conditional438;
struct sNullableNode* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
right_value404 = (void*)0;
memset(&result_347, 0, sizeof(struct sNullableNode*));
right_value405 = (void*)0;
right_value406 = (void*)0;
                                if(_if_conditional434=self==(void*)0,                                _if_conditional434) {
                                    __result200__ = __result_obj__ = (void*)0;
                                    return __result200__;
                                }
                                result_347=(struct sNullableNode*)come_increment_ref_count(((struct sNullableNode*)(right_value404=(struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "sNullableNode_clone", 3, "sNullableNode"))));
                                come_call_finalizer3(right_value404,sNullableNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional435=self!=((void*)0),                                _if_conditional435) {
                                    result_347->sline=self->sline;
                                }
                                if(_if_conditional436=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional436) {
                                    __dec_obj171=result_347->sname;
                                    result_347->sname=(char*)come_increment_ref_count(((char*)(right_value405=string_clone(self->sname))));
                                    __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value405 = come_decrement_ref_count2(right_value405, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional437=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional437) {
                                    __dec_obj172=result_347->mLeft;
                                    result_347->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value406=sNode_clone(self->mLeft))));
                                    if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count2(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value406) { right_value406 = come_decrement_ref_count2(right_value406, ((struct sNode*)right_value406)->finalize, ((struct sNode*)right_value406)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional438=self!=((void*)0),                                _if_conditional438) {
                                    result_347->mOnlyNullCecker=self->mOnlyNullCecker;
                                }
                                __result201__ = __result_obj__ = result_347;
                                come_call_finalizer3(result_347,sNullableNode_finalize, 0, 0, 1, 0, (void*)0);
                                return __result201__;
                                come_call_finalizer3(result_347,sNullableNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sNullCheckNode_finalize(struct sNullCheckNode* self){
void* __result_obj__;
_Bool _if_conditional441;
_Bool _if_conditional442;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional441=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional441) {
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional442=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional442) {
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self){
void* __result_obj__;
_Bool _if_conditional443;
struct sNullCheckNode* __result202__;
void* right_value411;
struct sNullCheckNode* result_348;
_Bool _if_conditional444;
_Bool _if_conditional445;
void* right_value412;
char* __dec_obj174;
_Bool _if_conditional446;
void* right_value413;
struct sNode* __dec_obj175;
_Bool _if_conditional447;
struct sNullCheckNode* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
right_value411 = (void*)0;
memset(&result_348, 0, sizeof(struct sNullCheckNode*));
right_value412 = (void*)0;
right_value413 = (void*)0;
                                    if(_if_conditional443=self==(void*)0,                                    _if_conditional443) {
                                        __result202__ = __result_obj__ = (void*)0;
                                        return __result202__;
                                    }
                                    result_348=(struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value411=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "sNullCheckNode_clone", 3, "sNullCheckNode"))));
                                    come_call_finalizer3(right_value411,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional444=self!=((void*)0),                                    _if_conditional444) {
                                        result_348->sline=self->sline;
                                    }
                                    if(_if_conditional445=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional445) {
                                        __dec_obj174=result_348->sname;
                                        result_348->sname=(char*)come_increment_ref_count(((char*)(right_value412=string_clone(self->sname))));
                                        __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value412 = come_decrement_ref_count2(right_value412, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional446=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional446) {
                                        __dec_obj175=result_348->mLeft;
                                        result_348->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value413=sNode_clone(self->mLeft))));
                                        if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count2(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value413) { right_value413 = come_decrement_ref_count2(right_value413, ((struct sNode*)right_value413)->finalize, ((struct sNode*)right_value413)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional447=self!=((void*)0),                                    _if_conditional447) {
                                        result_348->mOnlyNullCecker=self->mOnlyNullCecker;
                                    }
                                    __result203__ = __result_obj__ = result_348;
                                    come_call_finalizer3(result_348,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result203__;
                                    come_call_finalizer3(result_348,sNullCheckNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sStoreFieldNode_finalize(struct sStoreFieldNode* self){
void* __result_obj__;
_Bool _if_conditional452;
_Bool _if_conditional453;
_Bool _if_conditional454;
_Bool _if_conditional455;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional452=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional452) {
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional453=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional453) {
                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional454=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional454) {
                                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional455=self!=((void*)0)&&self->mName!=((void*)0),                                        _if_conditional455) {
                                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
}

static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self){
void* __result_obj__;
_Bool _if_conditional456;
struct sStoreFieldNode* __result204__;
void* right_value420;
struct sStoreFieldNode* result_355;
_Bool _if_conditional457;
_Bool _if_conditional458;
void* right_value421;
char* __dec_obj177;
_Bool _if_conditional459;
void* right_value422;
struct sNode* __dec_obj178;
_Bool _if_conditional460;
void* right_value423;
struct sNode* __dec_obj179;
_Bool _if_conditional461;
void* right_value424;
char* __dec_obj180;
struct sStoreFieldNode* __result205__;
memset(&__result_obj__, 0, sizeof(void*));
right_value420 = (void*)0;
memset(&result_355, 0, sizeof(struct sStoreFieldNode*));
right_value421 = (void*)0;
right_value422 = (void*)0;
right_value423 = (void*)0;
right_value424 = (void*)0;
                                        if(_if_conditional456=self==(void*)0,                                        _if_conditional456) {
                                            __result204__ = __result_obj__ = (void*)0;
                                            return __result204__;
                                        }
                                        result_355=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value420=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "sStoreFieldNode_clone", 3, "sStoreFieldNode"))));
                                        come_call_finalizer3(right_value420,sStoreFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional457=self!=((void*)0),                                        _if_conditional457) {
                                            result_355->sline=self->sline;
                                        }
                                        if(_if_conditional458=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional458) {
                                            __dec_obj177=result_355->sname;
                                            result_355->sname=(char*)come_increment_ref_count(((char*)(right_value421=string_clone(self->sname))));
                                            __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value421 = come_decrement_ref_count2(right_value421, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional459=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional459) {
                                            __dec_obj178=result_355->mLeft;
                                            result_355->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value422=sNode_clone(self->mLeft))));
                                            if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count2(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value422) { right_value422 = come_decrement_ref_count2(right_value422, ((struct sNode*)right_value422)->finalize, ((struct sNode*)right_value422)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(_if_conditional460=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional460) {
                                            __dec_obj179=result_355->mRight;
                                            result_355->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value423=sNode_clone(self->mRight))));
                                            if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count2(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value423) { right_value423 = come_decrement_ref_count2(right_value423, ((struct sNode*)right_value423)->finalize, ((struct sNode*)right_value423)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(_if_conditional461=self!=((void*)0)&&self->mName!=((void*)0),                                        _if_conditional461) {
                                            __dec_obj180=result_355->mName;
                                            result_355->mName=(char*)come_increment_ref_count(((char*)(right_value424=string_clone(self->mName))));
                                            __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value424 = come_decrement_ref_count2(right_value424, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        __result205__ = __result_obj__ = result_355;
                                        come_call_finalizer3(result_355,sStoreFieldNode_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result205__;
                                        come_call_finalizer3(result_355,sStoreFieldNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sLoadFieldNode_finalize(struct sLoadFieldNode* self){
void* __result_obj__;
_Bool _if_conditional465;
_Bool _if_conditional466;
_Bool _if_conditional467;
memset(&__result_obj__, 0, sizeof(void*));
                                            if(_if_conditional465=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional465) {
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            if(_if_conditional466=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional466) {
                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            if(_if_conditional467=self!=((void*)0)&&self->mName!=((void*)0),                                            _if_conditional467) {
                                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
}

static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self){
void* __result_obj__;
_Bool _if_conditional468;
struct sLoadFieldNode* __result206__;
void* right_value434;
struct sLoadFieldNode* result_356;
_Bool _if_conditional469;
_Bool _if_conditional470;
void* right_value435;
char* __dec_obj185;
_Bool _if_conditional471;
void* right_value436;
struct sNode* __dec_obj186;
_Bool _if_conditional472;
void* right_value437;
char* __dec_obj187;
struct sLoadFieldNode* __result207__;
memset(&__result_obj__, 0, sizeof(void*));
right_value434 = (void*)0;
memset(&result_356, 0, sizeof(struct sLoadFieldNode*));
right_value435 = (void*)0;
right_value436 = (void*)0;
right_value437 = (void*)0;
                                            if(_if_conditional468=self==(void*)0,                                            _if_conditional468) {
                                                __result206__ = __result_obj__ = (void*)0;
                                                return __result206__;
                                            }
                                            result_356=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value434=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "sLoadFieldNode_clone", 3, "sLoadFieldNode"))));
                                            come_call_finalizer3(right_value434,sLoadFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(_if_conditional469=self!=((void*)0),                                            _if_conditional469) {
                                                result_356->sline=self->sline;
                                            }
                                            if(_if_conditional470=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional470) {
                                                __dec_obj185=result_356->sname;
                                                result_356->sname=(char*)come_increment_ref_count(((char*)(right_value435=string_clone(self->sname))));
                                                __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value435 = come_decrement_ref_count2(right_value435, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            if(_if_conditional471=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional471) {
                                                __dec_obj186=result_356->mLeft;
                                                result_356->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value436=sNode_clone(self->mLeft))));
                                                if(__dec_obj186) { __dec_obj186 = come_decrement_ref_count2(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value436) { right_value436 = come_decrement_ref_count2(right_value436, ((struct sNode*)right_value436)->finalize, ((struct sNode*)right_value436)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            if(_if_conditional472=self!=((void*)0)&&self->mName!=((void*)0),                                            _if_conditional472) {
                                                __dec_obj187=result_356->mName;
                                                result_356->mName=(char*)come_increment_ref_count(((char*)(right_value437=string_clone(self->mName))));
                                                __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value437 = come_decrement_ref_count2(right_value437, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            __result207__ = __result_obj__ = result_356;
                                            come_call_finalizer3(result_356,sLoadFieldNode_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result207__;
                                            come_call_finalizer3(result_356,sLoadFieldNode_finalize, 0, 0, 0, 0, (void*)0);
}

