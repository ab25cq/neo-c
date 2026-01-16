#line 1 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/aio.h"
































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/aio.h"





































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/signal.h"





































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"
























































































































































































































































































































































































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"































































































































































































#line 795 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"



































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_posix_availability.h"


































#line 861 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"







































































#line 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/ptrcheck.h"

















































#line 973 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"


























#line 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/signal.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/appleapiopts.h"





































#line 74 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/signal.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 
 







































































































 
 















#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h"






















 






























#line 197 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"






























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h"






















 

#line 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"



































 



#line 198 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternalLegacy.h"































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"































#line 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternalLegacy.h"




#line 199 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"
























































































#line 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/signal.h"



#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/signal.h"




























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/signal.h"










#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 15 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/signal.h"

typedef int sig_atomic_t;

#line 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/signal.h"
#line 83 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/signal.h"








#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"





























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_types.h"




























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"












typedef signed char           __int8_t;
typedef unsigned char           __uint8_t;
typedef short                   __int16_t;
typedef unsigned short          __uint16_t;
typedef int                     __int32_t;
typedef unsigned int            __uint32_t;
typedef long long               __int64_t;
typedef unsigned long long      __uint64_t;

typedef long                    __darwin_intptr_t;
typedef unsigned int            __darwin_natural_t;



















typedef int                     __darwin_ct_rune_t;     





typedef union {
	char            __mbstate8[128];
	long long       _mbstateL;                      
} __mbstate_t;

typedef __mbstate_t             __darwin_mbstate_t;     

typedef long        __darwin_ptrdiff_t;     

typedef unsigned long           __darwin_size_t;        

typedef __builtin_va_list       __darwin_va_list;       

typedef int          __darwin_wchar_t;       

typedef __darwin_wchar_t        __darwin_rune_t;        

typedef unsigned int           __darwin_wint_t;        

typedef unsigned long           __darwin_clock_t;       
typedef __uint32_t              __darwin_socklen_t;     
typedef long                    __darwin_ssize_t;       
typedef long                    __darwin_time_t;        


#line 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_types.h"
#line 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"










typedef __int64_t       __darwin_blkcnt_t;      
typedef __int32_t       __darwin_blksize_t;     
typedef __int32_t       __darwin_dev_t;         
typedef unsigned int    __darwin_fsblkcnt_t;    
typedef unsigned int    __darwin_fsfilcnt_t;    
typedef __uint32_t      __darwin_gid_t;         
typedef __uint32_t      __darwin_id_t;          
typedef __uint64_t      __darwin_ino64_t;       
typedef __darwin_ino64_t __darwin_ino_t;        
typedef __darwin_natural_t __darwin_mach_port_name_t; 
typedef __darwin_mach_port_name_t __darwin_mach_port_t; 
typedef __uint16_t      __darwin_mode_t;        
typedef __int64_t       __darwin_off_t;         
typedef __int32_t       __darwin_pid_t;         
typedef __uint32_t      __darwin_sigset_t;      
typedef __int32_t       __darwin_suseconds_t;   
typedef __uint32_t      __darwin_uid_t;         
typedef __uint32_t      __darwin_useconds_t;    
typedef unsigned char   __darwin_uuid_t[16];
typedef char    __darwin_uuid_string_t[37];


#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h"





























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h"



struct __darwin_pthread_handler_rec {
	void (*__routine)(void *);	
	void *__arg;			
	struct __darwin_pthread_handler_rec *__next;
};

struct _opaque_pthread_attr_t {
	long __sig;
	char __opaque[56];
};

struct _opaque_pthread_cond_t {
	long __sig;
	char __opaque[40];
};

struct _opaque_pthread_condattr_t {
	long __sig;
	char __opaque[8];
};

struct _opaque_pthread_mutex_t {
	long __sig;
	char __opaque[56];
};

struct _opaque_pthread_mutexattr_t {
	long __sig;
	char __opaque[8];
};

struct _opaque_pthread_once_t {
	long __sig;
	char __opaque[8];
};

struct _opaque_pthread_rwlock_t {
	long __sig;
	char __opaque[192];
};

struct _opaque_pthread_rwlockattr_t {
	long __sig;
	char __opaque[16];
};

struct _opaque_pthread_t {
	long __sig;
	struct __darwin_pthread_handler_rec  *__cleanup_stack;
	char __opaque[8176];
};

typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t *__darwin_pthread_t;
#line 95 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"


#line 145 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/signal.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_mcontext.h"




























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_mcontext.h"






























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_mcontext.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/appleapiopts.h"



























#line 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_mcontext.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/machine/_structs.h"





























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/arm/_structs.h"
































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/arm/_structs.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"











































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"


#line 50 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 51 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"




#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int8_t.h"



























typedef signed char           int8_t;
#line 56 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int16_t.h"



























typedef short                   int16_t;
#line 57 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int32_t.h"



























typedef int                     int32_t;
#line 58 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int64_t.h"



























typedef long long               int64_t;
#line 59 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int8_t.h"



























typedef unsigned char           u_int8_t;
#line 61 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int16_t.h"



























typedef unsigned short                  u_int16_t;
#line 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int32_t.h"



























typedef unsigned int            u_int32_t;
#line 63 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int64_t.h"



























typedef unsigned long long      u_int64_t;
#line 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"

typedef int64_t                 register_t;

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_intptr_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_types.h"


























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_intptr_t.h"

typedef __darwin_intptr_t       intptr_t;
#line 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_uintptr_t.h"




























typedef unsigned long           uintptr_t;
#line 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"


typedef u_int64_t               user_addr_t;
typedef u_int64_t               user_size_t;
typedef int64_t                 user_ssize_t;
typedef int64_t                 user_long_t;
typedef u_int64_t               user_ulong_t;
typedef int64_t                 user_time_t;
typedef int64_t                 user_off_t;






typedef u_int64_t               syscall_arg_t;
#line 38 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"
#line 38 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/arm/_structs.h"

struct __darwin_arm_exception_state
{
	__uint32_t __exception; 
	__uint32_t __fsr;       
	__uint32_t __far;       
};

struct __darwin_arm_exception_state64
{
	__uint64_t __far;       
	__uint32_t __esr;       
	__uint32_t __exception; 
};
struct __darwin_arm_exception_state64_v2
{
	__uint64_t __far;       
	__uint64_t __esr;       
};

struct __darwin_arm_thread_state
{
	__uint32_t __r[13]; 
	__uint32_t __sp;    
	__uint32_t __lr;    
	__uint32_t __pc;    
	__uint32_t __cpsr;  
};












struct __darwin_arm_thread_state64
{
	__uint64_t __x[29]; 
	__uint64_t __fp;    
	__uint64_t __lr;    
	__uint64_t __sp;    
	__uint64_t __pc;    
	__uint32_t __cpsr;  
	__uint32_t __pad;   
};






















struct __darwin_arm_vfp_state
{
	__uint32_t __r[64];
	__uint32_t __fpscr;
};


struct __darwin_arm_neon_state64
{
	__uint128_t __v[32];
	__uint32_t  __fpsr;
	__uint32_t  __fpcr;
};

struct __darwin_arm_neon_state
{
	__uint128_t __v[16];
	__uint32_t  __fpsr;
	__uint32_t  __fpcr;
};



struct __arm_pagein_state
{
	int __pagein_error;
};

struct __darwin_arm_sme_state
{
	__uint64_t      __svcr;
	__uint64_t      __tpidr2_el0;
	__uint16_t      __svl_b;
};

struct __darwin_arm_sve_z_state
{
	char            __z[16][256];
} __attribute__((aligned(4)));

struct __darwin_arm_sve_p_state
{
	char            __p[16][256 / 8];
} __attribute__((aligned(4)));

struct __darwin_arm_sme_za_state
{
	char            __za[4096];
} __attribute__((aligned(4)));

struct __darwin_arm_sme2_state
{
	char            __zt0[64];
} __attribute__((aligned(4)));







struct __arm_legacy_debug_state
{
	__uint32_t __bvr[16];
	__uint32_t __bcr[16];
	__uint32_t __wvr[16];
	__uint32_t __wcr[16];
};

struct __darwin_arm_debug_state32
{
	__uint32_t __bvr[16];
	__uint32_t __bcr[16];
	__uint32_t __wvr[16];
	__uint32_t __wcr[16];
	__uint64_t __mdscr_el1; 
};

struct __darwin_arm_debug_state64
{
	__uint64_t __bvr[16];
	__uint64_t __bcr[16];
	__uint64_t __wvr[16];
	__uint64_t __wcr[16];
	__uint64_t __mdscr_el1; 
};

struct __darwin_arm_cpmu_state64
{
	__uint64_t __ctrs[16];
};

#line 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/machine/_structs.h"
#line 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_mcontext.h"

struct __darwin_mcontext32
{
	struct __darwin_arm_exception_state     __es;
	struct __darwin_arm_thread_state        __ss;
	struct __darwin_arm_vfp_state           __fs;
};



struct __darwin_mcontext64
{
	struct __darwin_arm_exception_state64   __es;
	struct __darwin_arm_thread_state64      __ss;
	struct __darwin_arm_neon_state64        __ns;
};


typedef struct __darwin_mcontext64      *mcontext_t;

#line 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_mcontext.h"
#line 147 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/signal.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_attr_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_attr_t.h"
typedef __darwin_pthread_attr_t pthread_attr_t;
#line 149 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/signal.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_sigaltstack.h"






























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_sigaltstack.h"


#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"





























#line 41 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_sigaltstack.h"

struct __darwin_sigaltstack
{
	void            *ss_sp;         
	__darwin_size_t ss_size;        
	int             ss_flags;       
};
typedef struct __darwin_sigaltstack     stack_t; 
#line 151 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/signal.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ucontext.h"




























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ucontext.h"


#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"





























#line 39 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ucontext.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_mcontext.h"


























#line 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ucontext.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 41 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ucontext.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_sigaltstack.h"




























#line 42 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ucontext.h"

struct __darwin_ucontext
{
	int                     uc_onstack;
	__darwin_sigset_t       uc_sigmask;     
	struct __darwin_sigaltstack     uc_stack;       
	struct __darwin_ucontext        *uc_link;       
	__darwin_size_t         uc_mcsize;      
	struct __darwin_mcontext64        *uc_mcontext;   
};


typedef struct __darwin_ucontext        ucontext_t;     
#line 152 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/signal.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_pid_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_pid_t.h"
typedef __darwin_pid_t        pid_t;
#line 154 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/signal.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_sigset_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_sigset_t.h"
typedef __darwin_sigset_t               sigset_t;
#line 155 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/signal.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"





























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_types.h"


























#line 50 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"
typedef __darwin_size_t        size_t;


#line 156 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/signal.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_uid_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_uid_t.h"
typedef __darwin_uid_t        uid_t;
#line 157 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/signal.h"

union sigval {
	
	int     sival_int;
	void    *sival_ptr;
};


struct sigevent {
	int                             sigev_notify;                           
	int                             sigev_signo;                            
	union sigval    sigev_value;                            
	void                    (*sigev_notify_function)(union sigval);   
	pthread_attr_t  *sigev_notify_attributes;       
};


typedef struct __siginfo {
	int     si_signo;               
	int     si_errno;               
	int     si_code;                
	pid_t   si_pid;                 
	uid_t   si_uid;                 
	int     si_status;              
	void    *si_addr;               
	union sigval si_value;          
	long    si_band;                
	unsigned long   __pad[7];       
} siginfo_t;






























union __sigaction_u {
	void    (*__sa_handler)(int);
	void    (*__sa_sigaction)(int, struct __siginfo *,
	    void *);
};


struct  __sigaction {
	union __sigaction_u __sigaction_u;  
	void    (*sa_tramp)(void *, int, int, siginfo_t *, void *);
	sigset_t sa_mask;               
	int     sa_flags;               
};




struct  sigaction {
	union __sigaction_u __sigaction_u;  
	sigset_t sa_mask;               
	int     sa_flags;               
};

















typedef void (*sig_t)(int);     










struct  sigvec {
	void    (*sv_handler)(int);     
	int     sv_mask;                
	int     sv_flags;               
};






struct  sigstack {
	char    *ss_sp;                 
	int     ss_onstack;             
};














void(*signal(int, void (*)(int)))(int);
#line 41 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/aio.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 42 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/aio.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/aio.h"







#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_timespec.h"




























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"





























#line 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_timespec.h"

struct timespec
{
	__darwin_time_t tv_sec;
	long            tv_nsec;
};
#line 51 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/aio.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_off_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_off_t.h"
typedef __darwin_off_t          off_t;
#line 53 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/aio.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ssize_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"





























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ssize_t.h"
typedef __darwin_ssize_t        ssize_t;
#line 54 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/aio.h"








#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_o_sync.h"


























#line 63 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/aio.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_o_dsync.h"


























#line 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/aio.h"

struct aiocb {
	int             aio_fildes;             
	off_t           aio_offset;             
	volatile void   *aio_buf;               
	size_t          aio_nbytes;             
	int             aio_reqprio;            
	struct sigevent aio_sigevent;           
	int             aio_lio_opcode;         
};


























































int             aio_cancel( int fd,
    struct aiocb * aiocbp );








int             aio_error( const struct aiocb * aiocbp );
















int             aio_fsync( int op,
    struct aiocb * aiocbp );















int             aio_read( struct aiocb * aiocbp );














ssize_t aio_return( struct aiocb * aiocbp );















int             aio_suspend( const struct aiocb *const aiocblist[],
    int nent,
    const struct timespec * timeoutp ) __asm("_" "aio_suspend"  );









int             aio_write( struct aiocb * aiocbp );













int             lio_listio( int mode,
    struct aiocb *const aiocblist[],
    int nent,
    struct sigevent *sigp );

#line 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/aio.h"
#line 3 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/alloca.h"
























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/alloca.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"
























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"





#line 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/alloca.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"
























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_types.h"


























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"




typedef	int		__darwin_nl_item;
typedef	int		__darwin_wctrans_t;
typedef	__uint32_t	__darwin_wctype_t;



#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/alloca.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"































#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/alloca.h"




void	* alloca(size_t __size);		



#line 5 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/ar.h"












































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 48 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/ar.h"







struct ar_hdr {
	char ar_name[16];		
	char ar_date[12];		
	char ar_uid[6];			
	char ar_gid[6];			
	char ar_mode[8];		
	char ar_size[10];		
	char ar_fmag[2];		
};
#line 6 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/assert.h"









































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/assert.h"








#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_assert.h"










































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 46 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_assert.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 47 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_assert.h"





void __assert_rtn(const char *, const char *, int, const char *) __attribute__((__noreturn__))  ;




#line 56 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/assert.h"





#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_static_assert.h"
























#line 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/assert.h"
#line 9 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/complex.h"































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/complex.h"



















extern _Complex float cacosf(_Complex float);
extern _Complex double cacos(_Complex double);
extern _Complex long double cacosl(_Complex long double);

extern _Complex float casinf(_Complex float);
extern _Complex double casin(_Complex double);
extern _Complex long double casinl(_Complex long double);

extern _Complex float catanf(_Complex float);
extern _Complex double catan(_Complex double);
extern _Complex long double catanl(_Complex long double);

extern _Complex float ccosf(_Complex float);
extern _Complex double ccos(_Complex double);
extern _Complex long double ccosl(_Complex long double);

extern _Complex float csinf(_Complex float);
extern _Complex double csin(_Complex double);
extern _Complex long double csinl(_Complex long double);

extern _Complex float ctanf(_Complex float);
extern _Complex double ctan(_Complex double);
extern _Complex long double ctanl(_Complex long double);

extern _Complex float cacoshf(_Complex float);
extern _Complex double cacosh(_Complex double);
extern _Complex long double cacoshl(_Complex long double);

extern _Complex float casinhf(_Complex float);
extern _Complex double casinh(_Complex double);
extern _Complex long double casinhl(_Complex long double);

extern _Complex float catanhf(_Complex float);
extern _Complex double catanh(_Complex double);
extern _Complex long double catanhl(_Complex long double);

extern _Complex float ccoshf(_Complex float);
extern _Complex double ccosh(_Complex double);
extern _Complex long double ccoshl(_Complex long double);

extern _Complex float csinhf(_Complex float);
extern _Complex double csinh(_Complex double);
extern _Complex long double csinhl(_Complex long double);

extern _Complex float ctanhf(_Complex float);
extern _Complex double ctanh(_Complex double);
extern _Complex long double ctanhl(_Complex long double);

extern _Complex float cexpf(_Complex float);
extern _Complex double cexp(_Complex double);
extern _Complex long double cexpl(_Complex long double);

extern _Complex float clogf(_Complex float);
extern _Complex double clog(_Complex double);
extern _Complex long double clogl(_Complex long double);

extern float cabsf(_Complex float);
extern double cabs(_Complex double);
extern long double cabsl(_Complex long double);

extern _Complex float cpowf(_Complex float, _Complex float);
extern _Complex double cpow(_Complex double, _Complex double);
extern _Complex long double cpowl(_Complex long double, _Complex long double);

extern _Complex float csqrtf(_Complex float);
extern _Complex double csqrt(_Complex double);
extern _Complex long double csqrtl(_Complex long double);

extern float cargf(_Complex float);
extern double carg(_Complex double);
extern long double cargl(_Complex long double);

extern float cimagf(_Complex float);
extern double cimag(_Complex double);
extern long double cimagl(_Complex long double);

extern _Complex float conjf(_Complex float);
extern _Complex double conj(_Complex double);
extern _Complex long double conjl(_Complex long double);

extern _Complex float cprojf(_Complex float);
extern _Complex double cproj(_Complex double);
extern _Complex long double cprojl(_Complex long double);

extern float crealf(_Complex float);
extern double creal(_Complex double);
extern long double creall(_Complex long double);

#line 11 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/cpio.h"






























#line 12 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/ctype.h"

































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctype.h"


































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctype.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctype.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/runetype.h"







































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/runetype.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 44 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/runetype.h"




#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"































#line 50 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/runetype.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ct_rune_t.h"




























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_types.h"


























#line 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ct_rune_t.h"
typedef __darwin_ct_rune_t ct_rune_t;
#line 51 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/runetype.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_rune_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_types.h"


























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_rune_t.h"
typedef __darwin_rune_t rune_t;
#line 52 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/runetype.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_wchar_t.h"































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_types.h"


























#line 53 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_wchar_t.h"
typedef __darwin_wchar_t wchar_t;

#line 53 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/runetype.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_wint_t.h"




























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_types.h"


























#line 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_wint_t.h"
typedef __darwin_wint_t wint_t;
#line 54 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/runetype.h"






typedef struct {
	__darwin_rune_t	__min;		
	__darwin_rune_t	__max;		
	__darwin_rune_t	__map;		
	__uint32_t *	__types;	
} _RuneEntry;

typedef struct {
	int		__nranges;	
	_RuneEntry *	__ranges;	
} _RuneRange;

typedef struct {
	char		__name[14];	
	__uint32_t	__mask;		
} _RuneCharClass;

typedef struct {
	char		__magic[8];	
	char		__encoding[32];	

	__darwin_rune_t	(*__sgetrune)(const char * __string, __darwin_size_t __n, char const *  *);
	int		(*__sputrune)(__darwin_rune_t, char * __string, __darwin_size_t __n, char *  *);
	__darwin_rune_t	__invalid_rune;	

	__uint32_t	__runetype[(1 <<8 )];
	__darwin_rune_t	__maplower[(1 <<8 )];
	__darwin_rune_t	__mapupper[(1 <<8 )];

	




	_RuneRange	__runetype_ext;
	_RuneRange	__maplower_ext;
	_RuneRange	__mapupper_ext;

	void *	__variable;	
	int		__variable_len;	

	


	int		__ncharclasses;
	_RuneCharClass *	__charclasses;
} _RuneLocale;



extern _RuneLocale _DefaultRuneLocale;
extern _RuneLocale *_CurrentRuneLocale;

#line 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctype.h"














unsigned long		___runetype(__darwin_ct_rune_t);
__darwin_ct_rune_t	___tolower(__darwin_ct_rune_t);
__darwin_ct_rune_t	___toupper(__darwin_ct_rune_t);


inline int
isascii(int _c)
{
	return ((_c & ~0x7F) == 0);
}


int             	__maskrune(__darwin_ct_rune_t, unsigned long);


inline int
__istype(__darwin_ct_rune_t _c, unsigned long _f)
{
	return (isascii(_c) ? !!(_DefaultRuneLocale.__runetype[_c] & _f)
		: !!__maskrune(_c, _f));
}

inline __darwin_ct_rune_t
__isctype(__darwin_ct_rune_t _c, unsigned long _f)
{
	return (_c < 0 || _c >= (1 <<8 )) ? 0 :
		!!(_DefaultRuneLocale.__runetype[_c] & _f);
}


__darwin_ct_rune_t	__toupper(__darwin_ct_rune_t);
__darwin_ct_rune_t	__tolower(__darwin_ct_rune_t);


inline int
__wcwidth(__darwin_ct_rune_t _c)
{
	unsigned int _x;

	if (_c == 0)
		return (0);
	_x = (unsigned int)__maskrune(_c, 0xe0000000L|0x00040000L);
	if ((_x & 0xe0000000L) != 0)
		return ((_x & 0xe0000000L) >> 30);
	return ((_x & 0x00040000L) != 0 ? 1 : -1);
}



inline int
isalnum(int _c)
{
	return (__istype(_c, 0x00000100L|0x00000400L));
}

inline int
isalpha(int _c)
{
	return (__istype(_c, 0x00000100L));
}

inline int
isblank(int _c)
{
	return (__istype(_c, 0x00020000L));
}

inline int
iscntrl(int _c)
{
	return (__istype(_c, 0x00000200L));
}


inline int
isdigit(int _c)
{
	return (__isctype(_c, 0x00000400L));
}

inline int
isgraph(int _c)
{
	return (__istype(_c, 0x00000800L));
}

inline int
islower(int _c)
{
	return (__istype(_c, 0x00001000L));
}

inline int
isprint(int _c)
{
	return (__istype(_c, 0x00040000L));
}

inline int
ispunct(int _c)
{
	return (__istype(_c, 0x00002000L));
}

inline int
isspace(int _c)
{
	return (__istype(_c, 0x00004000L));
}

inline int
isupper(int _c)
{
	return (__istype(_c, 0x00008000L));
}


inline int
isxdigit(int _c)
{
	return (__isctype(_c, 0x00010000L));
}

inline int
toascii(int _c)
{
	return (_c & 0x7F);
}

inline int
tolower(int _c)
{
        return (__tolower(_c));
}

inline int
toupper(int _c)
{
        return (__toupper(_c));
}

inline int
digittoint(int _c)
{
	return (__maskrune(_c, 0x0F));
}

inline int
ishexnumber(int _c)
{
	return (__istype(_c, 0x00010000L));
}

inline int
isideogram(int _c)
{
	return (__istype(_c, 0x00080000L));
}

inline int
isnumber(int _c)
{
	return (__istype(_c, 0x00000400L));
}

inline int
isphonogram(int _c)
{
	return (__istype(_c, 0x00200000L));
}

inline int
isrune(int _c)
{
	return (__istype(_c, 0xFFFFFFF0L));
}

inline int
isspecial(int _c)
{
	return (__istype(_c, 0x00100000L));
}

#line 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/ctype.h"
#line 14 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/curses.h"

















































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/ncurses_dll.h"















































#line 61 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/curses.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h"










#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int8_t.h"


























#line 19 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int16_t.h"


























#line 20 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int32_t.h"


























#line 21 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int64_t.h"


























#line 22 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_uint8_t.h"




























typedef unsigned char uint8_t;
#line 24 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_uint16_t.h"




























typedef unsigned short uint16_t;
#line 25 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_uint32_t.h"




























typedef unsigned int uint32_t;
#line 26 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_uint64_t.h"




























typedef unsigned long long uint64_t;
#line 27 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h"


typedef int8_t           int_least8_t;
typedef int16_t         int_least16_t;
typedef int32_t         int_least32_t;
typedef int64_t         int_least64_t;
typedef uint8_t         uint_least8_t;
typedef uint16_t       uint_least16_t;
typedef uint32_t       uint_least32_t;
typedef uint64_t       uint_least64_t;



typedef int8_t            int_fast8_t;
typedef int16_t          int_fast16_t;
typedef int32_t          int_fast32_t;
typedef int64_t          int_fast64_t;
typedef uint8_t          uint_fast8_t;
typedef uint16_t        uint_fast16_t;
typedef uint32_t        uint_fast32_t;
typedef uint64_t        uint_fast64_t;




#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 53 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_intptr_t.h"


























#line 54 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_uintptr_t.h"


























#line 55 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h"



#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_intmax_t.h"




























typedef long int intmax_t;
#line 59 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_uintmax_t.h"




























typedef unsigned long int uintmax_t;
#line 60 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h"

















   
































#line 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/curses.h"


























































typedef unsigned int chtype;
typedef unsigned long mmask_t;




#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h"




























































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"

































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 74 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"



#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_va_list.h"






























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"





























#line 44 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_va_list.h"
typedef __darwin_va_list va_list;

#line 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"































#line 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h"





























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 49 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h"

#line 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stdio.h"





























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stdio.h"


#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 45 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stdio.h"



int     renameat(int, const char *, int, const char *) ;


int renamex_np(const char *, const char *, unsigned int)    ;
int renameatx_np(int, const char *, int, const char *, unsigned int)    ;




#line 82 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_printf.h"
























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_printf.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_printf.h"





int	 printf(const char * restrict, ...) __attribute__((__format__ (__printf__, 1, 2)));


#line 83 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"



typedef __darwin_off_t		fpos_t;









struct __sbuf {
	unsigned char *	_base;
	int		_size;
};


struct __sFILEX;



























typedef	struct __sFILE {
	unsigned char *	_p;	
	int	_r;		
	int	_w;		
	short	_flags;		
	short	_file;		
	struct	__sbuf _bf;	
	int	_lbfsize;	

	
	void	*_cookie;	
	int	(*  _close)(void *);
	int	(*  _read) (void *, char *, int __n);
	fpos_t	(*  _seek) (void *, fpos_t, int);
	int	(*  _write)(void *, const char *, int __n);

	
	struct	__sbuf _ub;	
	struct __sFILEX *_extra; 
	int	_ur;		

	
	unsigned char _ubuf[3];	
	unsigned char _nbuf[1];	

	
	struct	__sbuf _lb;	

	
	int	_blksize;	
	fpos_t	_offset;	
} FILE;

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_seek_set.h"





























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_seek_set.h"




#line 165 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"


extern FILE *__stdinp ;
extern FILE *__stdoutp ;
extern FILE *__stderrp ;


	












				








void	 clearerr(FILE *);
int	 fclose(FILE *);
int	 feof(FILE *);
int	 ferror(FILE *);
int	 fflush(FILE *);
int	 fgetc(FILE *);
int	 fgetpos(FILE * restrict, fpos_t *);
char *	fgets(char * restrict , int __size, FILE *);
FILE	*fopen(const char * restrict __filename, const char * restrict __mode) __asm("_" "fopen" "$DARWIN_EXTSN");
int	 fprintf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
int	 fputc(int, FILE *);
int	 fputs(const char * restrict, FILE * restrict) __asm("_" "fputs" );
size_t	 fread(void * restrict  __ptr, size_t __size, size_t __nitems, FILE * restrict __stream);
FILE	*freopen(const char * restrict, const char * restrict,
				 FILE * restrict) __asm("_" "freopen" );
int	 fscanf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
int	 fseek(FILE *, long, int);
int	 fsetpos(FILE *, const fpos_t *);
long	 ftell(FILE *);
size_t	 fwrite(const void * restrict  __ptr, size_t __size, size_t __nitems, FILE * restrict __stream) __asm("_" "fwrite" );
int	 getc(FILE *);
int	 getchar(void);

char *	gets(char *) ;

void	 perror(const char *) ;
int	 putc(int, FILE *);
int	 putchar(int);
int	 puts(const char *);
int	 remove(const char *);
int	 rename (const char *__old, const char *__new);
void	 rewind(FILE *);
int	 scanf(const char * restrict, ...) __attribute__((__format__ (__scanf__, 1, 2)));
void	 setbuf(FILE * restrict, char * restrict );
int	 setvbuf(FILE * restrict, char * restrict , int, size_t __size);



int	 sprintf(char * restrict , const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3))) ;

int	 sscanf(const char * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
FILE	*tmpfile(void);


char *	tmpnam(char *);

int	 ungetc(int, FILE *);
int	 vfprintf(FILE * restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
int	 vprintf(const char * restrict, va_list) __attribute__((__format__ (__printf__, 1, 0)));



int	 vsprintf(char * restrict , const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0))) ;










#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctermid.h"
























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctermid.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctermid.h"






char *	ctermid(char *);


#line 316 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"



FILE	*fdopen(int, const char *) __asm("_" "fdopen" "$DARWIN_EXTSN");
int	 fileno(FILE *);








int	 pclose(FILE *) ;
FILE	*popen(const char *, const char *) __asm("_" "popen" "$DARWIN_EXTSN") ;











int	__srget(FILE *);
int	__svfscanf(FILE *, const char *, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int	__swbuf(int, FILE *);






inline __attribute__ ((__always_inline__)) int __sputc(int _c, FILE *_p) {
	if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
		return (*_p->_p++ = _c);
	else
		return (__swbuf(_c, _p));
}



void	 flockfile(FILE *);
int	 ftrylockfile(FILE *);
void	 funlockfile(FILE *);
int	 getc_unlocked(FILE *);
int	 getchar_unlocked(void);
int	 putc_unlocked(int, FILE *);
int	 putchar_unlocked(int);




char *	tempnam(const char *__dir, const char *__prefix) __asm("_" "tempnam" );











#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_off_t.h"


























#line 423 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"


int	 fseeko(FILE * __stream, off_t __offset, int __whence);
off_t	 ftello(FILE * __stream);



int	 snprintf(char * restrict  __str, size_t __size, const char * restrict __format, ...) __attribute__((__format__ (__printf__, 3, 4)));
int	 vfscanf(FILE * restrict __stream, const char * restrict __format, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int	 vscanf(const char * restrict __format, va_list) __attribute__((__format__ (__scanf__, 1, 0)));
int	 vsnprintf(char * restrict  __str, size_t __size, const char * restrict __format, va_list) __attribute__((__format__ (__printf__, 3, 0)));
int	 vsscanf(const char * restrict __str, const char * restrict __format, va_list) __attribute__((__format__ (__scanf__, 2, 0)));








#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ssize_t.h"


























#line 448 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"


int	dprintf(int, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3))) ;
int	vdprintf(int, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0))) ;
ssize_t getdelim(char * *restrict __linep, size_t * restrict __linecapp, int __delimiter, FILE * restrict __stream) ;
ssize_t getline(char * *restrict __linep, size_t * restrict __linecapp, FILE * restrict __stream) ;
FILE *fmemopen(void * restrict __buf , size_t __size, const char * restrict __mode) ;
FILE *open_memstream(char * *__bufp, size_t *__sizep) ;







extern const int sys_nerr;		
extern const char *const sys_errlist[];

int	 asprintf(char * *restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
char *	ctermid_r(char *);
char *	fgetln(FILE *, size_t *__len);
const char *fmtcheck(const char *, const char *) __attribute__((format_arg(2)));
int	 fpurge(FILE *);
void	 setbuffer(FILE *, char *, int __size);
int	 setlinebuf(FILE *);
int	 vasprintf(char * *restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));





FILE	*funopen(const void *,
				 int (* )(void *, char *, int __n),
				 int (* )(void *, const char *, int __n),
				 fpos_t (* )(void *, fpos_t, int),
				 int (* )(void *));






#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"

























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_common.h"
























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_common.h"


#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"




extern int __snprintf_chk (char * restrict , size_t __maxlen, int, size_t,
			  const char * restrict, ...);
extern int __vsnprintf_chk (char * restrict , size_t __maxlen, int, size_t,
			  const char * restrict, va_list);

extern int __sprintf_chk (char * restrict , int, size_t,
			  const char * restrict, ...);
extern int __vsprintf_chk (char * restrict , int, size_t,
			  const char * restrict, va_list);


















#line 501 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
#line 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h"
#line 165 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/curses.h"









#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityMacros.h"






















































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h"






















 

#line 90 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityMacros.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/TargetConditionals.h"






















 
























































































 








































        














































#line 91 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityMacros.h"

































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































#line 183 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/curses.h"






















#line 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdarg.h"
























#line 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stdarg_header_macro.h"








#line 44 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdarg.h"

#line 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stdarg___gnuc_va_list.h"









typedef __builtin_va_list __gnuc_va_list;
#line 48 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdarg.h"

#line 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stdarg_va_list.h"









typedef __builtin_va_list va_list;
#line 53 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdarg.h"

#line 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stdarg_va_arg.h"











#line 58 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdarg.h"

#line 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stdarg___va_copy.h"








#line 63 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdarg.h"

#line 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stdarg_va_copy.h"








#line 68 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdarg.h"
#line 235 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/curses.h"















typedef unsigned char NCURSES_BOOL;


#line 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdbool.h"












#line 268 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/curses.h"














extern  chtype acs_map[];































typedef struct screen  SCREEN;
typedef struct _win_st WINDOW;

typedef	chtype	attr_t;		































typedef int (*NCURSES_OUTC)(int);








extern  int  addch (const chtype);			
extern  int  addchnstr (const chtype *, int);		
extern  int  addchstr (const chtype *);			
extern  int  addnstr (const char *, int);			
extern  int  addstr (const char *);			
extern  int  attroff (int);			
extern  int  attron (int);			
extern  int  attrset (int);			
extern  int  attr_get (attr_t *, short *, void *);	
extern  int  attr_off (attr_t, void *);			
extern  int  attr_on (attr_t, void *);			
extern  int  attr_set (attr_t, short, void *);		
extern  int  baudrate (void);				
extern  int  beep  (void);				
extern  int  bkgd (chtype);				
extern  void  bkgdset (chtype);				
extern  int  border (chtype,chtype,chtype,chtype,chtype,chtype,chtype,chtype);	
extern  int  box (WINDOW *, chtype, chtype);		
extern  _Bool  can_change_color (void);			
extern  int  cbreak (void);				
extern  int  chgat (int, attr_t, short, const void *);	
extern  int  clear (void);				
extern  int  clearok (WINDOW *,_Bool);			
extern  int  clrtobot (void);				
extern  int  clrtoeol (void);				
extern  int  color_content (short,short*,short*,short*);	
extern  int  color_set (short,void*);			
extern  int  COLOR_PAIR (int);				
extern  int  copywin (const WINDOW*,WINDOW*,int,int,int,int,int,int,int);	
extern  int  curs_set (int);				
extern  int  def_prog_mode (void);			
extern  int  def_shell_mode (void);			
extern  int  delay_output (int);				
extern  int  delch (void);				
extern  void  delscreen (SCREEN *);			
extern  int  delwin (WINDOW *);				
extern  int  deleteln (void);				
extern  WINDOW *  derwin (WINDOW *,int,int,int,int);	
extern  int  doupdate (void);				
extern  WINDOW *  dupwin (WINDOW *);			
extern  int  echo (void);					
extern  int  echochar (const chtype);			
extern  int  erase (void);				
extern  int  endwin (void);				
extern  char  erasechar (void);				
extern  void  filter (void);				
extern  int  flash (void);				
extern  int  flushinp (void);				
extern  chtype  getbkgd (WINDOW *);			
extern  int  getch (void);				
extern  int  getnstr (char *, int);			
extern  int  getstr (char *);				
extern  WINDOW *  getwin (FILE *);			
extern  int  halfdelay (int);				
extern  _Bool  has_colors (void);				
extern  _Bool  has_ic (void);				
extern  _Bool  has_il (void);				
extern  int  hline (chtype, int);				
extern  void  idcok (WINDOW *, _Bool);			
extern  int  idlok (WINDOW *, _Bool);			
extern  void  immedok (WINDOW *, _Bool);			
extern  chtype  inch (void);				
extern  int  inchnstr (chtype *, int);			
extern  int  inchstr (chtype *);				
extern  WINDOW *  initscr (void);				
extern  int  init_color (short,short,short,short);	
extern  int  init_pair (short,short,short);		
extern  int  innstr (char *, int);			
extern  int  insch (chtype);				
extern  int  insdelln (int);				
extern  int  insertln (void);				
extern  int  insnstr (const char *, int);			
extern  int  insstr (const char *);			
extern  int  instr (char *);				
extern  int  intrflush (WINDOW *,_Bool);			
extern  _Bool  isendwin (void);				
extern  _Bool  is_linetouched (WINDOW *,int);		
extern  _Bool  is_wintouched (WINDOW *);			
extern   char *  keyname (int);		
extern  int  keypad (WINDOW *,_Bool);			
extern  char  killchar (void);				
extern  int  leaveok (WINDOW *,_Bool);			
extern  char *  longname (void);				
extern  int  meta (WINDOW *,_Bool);			
extern  int  move (int, int);				
extern  int  mvaddch (int, int, const chtype);		
extern  int  mvaddchnstr (int, int, const chtype *, int);	
extern  int  mvaddchstr (int, int, const chtype *);	
extern  int  mvaddnstr (int, int, const char *, int);	
extern  int  mvaddstr (int, int, const char *);		
extern  int  mvchgat (int, int, int, attr_t, short, const void *);	
extern  int  mvcur (int,int,int,int);			
extern  int  mvdelch (int, int);				
extern  int  mvderwin (WINDOW *, int, int);		
extern  int  mvgetch (int, int);				
extern  int  mvgetnstr (int, int, char *, int);		
extern  int  mvgetstr (int, int, char *);			
extern  int  mvhline (int, int, chtype, int);		
extern  chtype  mvinch (int, int);			
extern  int  mvinchnstr (int, int, chtype *, int);	
extern  int  mvinchstr (int, int, chtype *);		
extern  int  mvinnstr (int, int, char *, int);		
extern  int  mvinsch (int, int, chtype);			
extern  int  mvinsnstr (int, int, const char *, int);	
extern  int  mvinsstr (int, int, const char *);		
extern  int  mvinstr (int, int, char *);			
extern  int  mvprintw (int,int, const char *,...)		
		;
extern  int  mvscanw (int,int,  char *,...)	
		;
extern  int  mvvline (int, int, chtype, int);		
extern  int  mvwaddch (WINDOW *, int, int, const chtype);	
extern  int  mvwaddchnstr (WINDOW *, int, int, const chtype *, int);
extern  int  mvwaddchstr (WINDOW *, int, int, const chtype *);	
extern  int  mvwaddnstr (WINDOW *, int, int, const char *, int);	
extern  int  mvwaddstr (WINDOW *, int, int, const char *);	
extern  int  mvwchgat (WINDOW *, int, int, int, attr_t, short, const void *);
extern  int  mvwdelch (WINDOW *, int, int);		
extern  int  mvwgetch (WINDOW *, int, int);		
extern  int  mvwgetnstr (WINDOW *, int, int, char *, int);	
extern  int  mvwgetstr (WINDOW *, int, int, char *);	
extern  int  mvwhline (WINDOW *, int, int, chtype, int);	
extern  int  mvwin (WINDOW *,int,int);			
extern  chtype  mvwinch (WINDOW *, int, int);			
extern  int  mvwinchnstr (WINDOW *, int, int, chtype *, int);	
extern  int  mvwinchstr (WINDOW *, int, int, chtype *);		
extern  int  mvwinnstr (WINDOW *, int, int, char *, int);		
extern  int  mvwinsch (WINDOW *, int, int, chtype);		
extern  int  mvwinsnstr (WINDOW *, int, int, const char *, int);	
extern  int  mvwinsstr (WINDOW *, int, int, const char *);	
extern  int  mvwinstr (WINDOW *, int, int, char *);		
extern  int  mvwprintw (WINDOW*,int,int, const char *,...)	
		;
extern  int  mvwscanw (WINDOW *,int,int,  char *,...)	
		;
extern  int  mvwvline (WINDOW *,int, int, chtype, int);	
extern  int  napms (int);					
extern  WINDOW *  newpad (int,int);		       	
extern  SCREEN *  newterm ( char *,FILE *,FILE *);	
extern  WINDOW *  newwin (int,int,int,int);	       	
extern  int  nl (void);					
extern  int  nocbreak (void);				
extern  int  nodelay (WINDOW *,_Bool);			
extern  int  noecho (void);				
extern  int  nonl (void);					
extern  void  noqiflush (void);				
extern  int  noraw (void);				
extern  int  notimeout (WINDOW *,_Bool);			
extern  int  overlay (const WINDOW*,WINDOW *);		
extern  int  overwrite (const WINDOW*,WINDOW *);		
extern  int  pair_content (short,short*,short*);		
extern  int  PAIR_NUMBER (int);				
extern  int  pechochar (WINDOW *, const chtype);		
extern  int  pnoutrefresh (WINDOW*,int,int,int,int,int,int);
extern  int  prefresh (WINDOW *,int,int,int,int,int,int);	
extern  int  printw (const char *,...)			
		;
extern  int  putwin (WINDOW *, FILE *);			
extern  void  qiflush (void);				
extern  int  raw (void);					
extern  int  redrawwin (WINDOW *);			
extern  int  refresh (void);				
extern  int  resetty (void);				
extern  int  reset_prog_mode (void);			
extern  int  reset_shell_mode (void);			
extern  int  ripoffline (int, int (*)(WINDOW *, int));	
extern  int  savetty (void);				
extern  int  scanw ( char *,...)		
		;
extern  int  scr_dump (const char *);			
extern  int  scr_init (const char *);			
extern  int  scrl (int);					
extern  int  scroll (WINDOW *);				
extern  int  scrollok (WINDOW *,_Bool);			
extern  int  scr_restore (const char *);			
extern  int  scr_set (const char *);			
extern  int  setscrreg (int,int);				
extern  SCREEN *  set_term (SCREEN *);			
extern  int  slk_attroff (const chtype);			
extern  int  slk_attr_off (const attr_t, void *);		
extern  int  slk_attron (const chtype);			
extern  int  slk_attr_on (attr_t,void*);			
extern  int  slk_attrset (const chtype);			
extern  attr_t  slk_attr (void);				
extern  int  slk_attr_set (const attr_t,short,void*);	
extern  int  slk_clear (void);				
extern  int  slk_color (short);				
extern  int  slk_init (int);				
extern  char *  slk_label (int);				
extern  int  slk_noutrefresh (void);			
extern  int  slk_refresh (void);				
extern  int  slk_restore (void);				
extern  int  slk_set (int,const char *,int);		
extern  int  slk_touch (void);	      	       		
extern  int  standout (void);				
extern  int  standend (void);				
extern  int  start_color (void);				
extern  WINDOW *  subpad (WINDOW *, int, int, int, int);	
extern  WINDOW *  subwin (WINDOW *, int, int, int, int);	
extern  int  syncok (WINDOW *, _Bool);			
extern  chtype  termattrs (void);				
extern  char *  termname (void);				
extern  void  timeout (int);				
extern  int  touchline (WINDOW *, int, int);		
extern  int  touchwin (WINDOW *);				
extern  int  typeahead (int);				
extern  int  ungetch (int);				
extern  int  untouchwin (WINDOW *);			
extern  void  use_env (_Bool);				
extern  void  use_tioctl (_Bool);				
extern  int  vidattr (chtype);				
extern  int  vidputs (chtype, NCURSES_OUTC);		
extern  int  vline (chtype, int);				
extern  int  vwprintw (WINDOW *, const char *,va_list);	
extern  int  vw_printw (WINDOW *, const char *,va_list);	





extern  int  vwscanw (WINDOW *,  char *,va_list)	
		;
extern  int  vw_scanw (WINDOW *,  char *,va_list)	
		;
extern  int  waddch (WINDOW *, const chtype);		
extern  int  waddchnstr (WINDOW *,const chtype *,int);	
extern  int  waddchstr (WINDOW *,const chtype *);		
extern  int  waddnstr (WINDOW *,const char *,int);	
extern  int  waddstr (WINDOW *,const char *);		
extern  int  wattron (WINDOW *, int);			
extern  int  wattroff (WINDOW *, int);			
extern  int  wattrset (WINDOW *, int);			
extern  int  wattr_get (WINDOW *, attr_t *, short *, void *);	
extern  int  wattr_on (WINDOW *, attr_t, void *);		
extern  int  wattr_off (WINDOW *, attr_t, void *);	
extern  int  wattr_set (WINDOW *, attr_t, short, void *);	
extern  int  wbkgd (WINDOW *, chtype);			
extern  void  wbkgdset (WINDOW *,chtype);			
extern  int  wborder (WINDOW *,chtype,chtype,chtype,chtype,chtype,chtype,chtype,chtype);	
extern  int  wchgat (WINDOW *, int, attr_t, short, const void *);
extern  int  wclear (WINDOW *);				
extern  int  wclrtobot (WINDOW *);			
extern  int  wclrtoeol (WINDOW *);			
extern  int  wcolor_set (WINDOW*,short,void*);		
extern  void  wcursyncup (WINDOW *);			
extern  int  wdelch (WINDOW *);				
extern  int  wdeleteln (WINDOW *);			
extern  int  wechochar (WINDOW *, const chtype);		
extern  int  werase (WINDOW *);				
extern  int  wgetch (WINDOW *);				
extern  int  wgetnstr (WINDOW *,char *,int);		
extern  int  wgetstr (WINDOW *, char *);			
extern  int  whline (WINDOW *, chtype, int);		
extern  chtype  winch (WINDOW *);				
extern  int  winchnstr (WINDOW *, chtype *, int);		
extern  int  winchstr (WINDOW *, chtype *);		
extern  int  winnstr (WINDOW *, char *, int);		
extern  int  winsch (WINDOW *, chtype);			
extern  int  winsdelln (WINDOW *,int);			
extern  int  winsertln (WINDOW *);			
extern  int  winsnstr (WINDOW *, const char *,int);	
extern  int  winsstr (WINDOW *, const char *);		
extern  int  winstr (WINDOW *, char *);			
extern  int  wmove (WINDOW *,int,int);			
extern  int  wnoutrefresh (WINDOW *);			
extern  int  wprintw (WINDOW *, const char *,...)		
		;
extern  int  wredrawln (WINDOW *,int,int);		
extern  int  wrefresh (WINDOW *);				
extern  int  wscanw (WINDOW *,  char *,...)	
		;
extern  int  wscrl (WINDOW *,int);			
extern  int  wsetscrreg (WINDOW *,int,int);		
extern  int  wstandout (WINDOW *);			
extern  int  wstandend (WINDOW *);			
extern  void  wsyncdown (WINDOW *);			
extern  void  wsyncup (WINDOW *);				
extern  void  wtimeout (WINDOW *,int);			
extern  int  wtouchln (WINDOW *,int,int,int);		
extern  int  wvline (WINDOW *,chtype,int);		




extern  char *  _nc_tiparm(int, const char *, ...);




extern  int  tigetflag ( char *);		
extern  int  tigetnum ( char *);		
extern  char *  tigetstr ( char *);		
extern  int  putp (const char *);				

extern  char *  tparm ( char *, ...);	

  

extern  char *  tiparm (const char *, ...);		

extern  char *  tiparm_s(int, int, const char *, ...); 




extern  int  getattrs (const WINDOW *);			
extern  int  getcurx (const WINDOW *);			
extern  int  getcury (const WINDOW *);			
extern  int  getbegx (const WINDOW *);			
extern  int  getbegy (const WINDOW *);			
extern  int  getmaxx (const WINDOW *);			
extern  int  getmaxy (const WINDOW *);			
extern  int  getparx (const WINDOW *);			
extern  int  getpary (const WINDOW *);			








typedef int (*NCURSES_WINDOW_CB)(WINDOW *, void *);
typedef int (*NCURSES_SCREEN_CB)(SCREEN *, void *);
extern  _Bool  is_term_resized (int, int);
extern  char *  keybound (int, int);
extern  const char *  curses_version (void);
extern  int  assume_default_colors (int, int);
extern  int  define_key (const char *, int);
  

extern  int  get_escdelay (void);
extern  int  key_defined (const char *);
extern  int  keyok (int, _Bool);
extern  int  resize_term (int, int);
extern  int  resizeterm (int, int);
extern  int  set_escdelay (int);
extern  int  set_tabsize (int);
extern  int  use_default_colors (void);
extern  int  use_extended_names (_Bool);
extern  int  use_legacy_coding (int);
extern  int  use_screen (SCREEN *, NCURSES_SCREEN_CB, void *);
extern  int  use_window (WINDOW *, NCURSES_WINDOW_CB, void *);
extern  int  wresize (WINDOW *, int, int);
extern  void  nofilter(void);





extern  WINDOW *  wgetparent (const WINDOW *);	
extern  _Bool  is_cleared (const WINDOW *);	
extern  _Bool  is_idcok (const WINDOW *);		
extern  _Bool  is_idlok (const WINDOW *);		
extern  _Bool  is_immedok (const WINDOW *);	
extern  _Bool  is_keypad (const WINDOW *);		
extern  _Bool  is_leaveok (const WINDOW *);	
extern  _Bool  is_nodelay (const WINDOW *);	
extern  _Bool  is_notimeout (const WINDOW *);	
  

extern  _Bool  is_pad (const WINDOW *);		
extern  _Bool  is_scrollok (const WINDOW *);	
  

extern  _Bool  is_subwin (const WINDOW *);		
extern  _Bool  is_syncok (const WINDOW *);		
  

extern  int  wgetdelay (const WINDOW *);		
extern  int  wgetscrreg (const WINDOW *, int *, int *); 


























extern  int  addch (const chtype)
		 ;
;
extern  int  addchnstr (const chtype *, int)
		 ;
;
extern  int  addchstr (const chtype *)
		 ;
;
extern  int  addnstr (const char *, int)
		 ;
;
extern  int  addstr (const char *)
		 ;
;
extern  int  attroff (int)
		 ;
;
extern  int  attron (int)
		 ;
;
extern  int  attrset (int)
		 ;
;
extern  int  attr_get (attr_t *, short *, void *)
		 ;
;
extern  int  attr_off (attr_t, void *)
		 ;
;
extern  int  attr_on (attr_t, void *)
		 ;
;
extern  int  attr_set (attr_t, short, void *)
		 ;
;
extern  int  bkgd (chtype)
		 ;
;
extern  void  bkgdset (chtype)
		 ;
;
extern  int  border (chtype,chtype,chtype,chtype,chtype,chtype,chtype,chtype)
		 ;
;
extern  int  box (WINDOW *, chtype, chtype)
		 ;
;
extern  int  chgat (int, attr_t, short, const void *)
		 ;
;
extern  int  color_content (short,short*,short*,short*) ;
;
extern  int  color_set (short,void*)
		 ;
;
extern  int  copywin (const WINDOW*,WINDOW*,int,int,int,int,int,int,int) ;
;
extern  int  delay_output (int) ;
;
extern  int  deleteln (void)
		 ;
;
extern  WINDOW *  derwin (WINDOW *,int,int,int,int) ;
;
extern  int  doupdate (void) ;
;
extern  WINDOW *  dupwin (WINDOW *) ;
;
extern  int  echochar (const chtype)
		 ;
;
extern  int  endwin (void) ;
;
extern  int  flushinp (void) ;
;
extern  chtype  getbkgd (WINDOW *)
		 ;
;
extern  int  getch (void)
		 ;
;
extern  int  getnstr (char *, int)
		 ;
;
extern  int  getstr (char *)
		 ;
;
extern  WINDOW *  getwin (FILE *) ;
;
extern  int  hline (chtype, int)
		 ;
;
extern  chtype  inch (void)
		 ;
;
extern  int  inchnstr (chtype *, int)
		 ;
;
extern  int  inchstr (chtype *)
		 ;
;
extern  WINDOW *  initscr (void) ;
;
extern  int  init_color (short,short,short,short) ;
;
extern  int  init_pair (short,short,short) ;
;
extern  int  innstr (char *, int)
		 ;
;
extern  int  insch (chtype)
		 ;
;
extern  int  insdelln (int)
		 ;
;
extern  int  insertln (void)
		 ;
;
extern  int  insnstr (const char *, int)
		 ;
;
extern  int  insstr (const char *)
		 ;
;
extern  int  instr (char *)
		 ;
;
extern  int  intrflush (WINDOW *,_Bool) ;
;
extern  int  keypad (WINDOW *,_Bool) ;
;
extern  int  mvaddch (int, int, const chtype)
		 ;
;
extern  int  mvaddchnstr (int, int, const chtype *, int)
		 ;
;
extern  int  mvaddchstr (int, int, const chtype *)
		 ;
;
extern  int  mvaddnstr (int, int, const char *, int)
		 ;
;
extern  int  mvaddstr (int, int, const char *)
		 ;
;
extern  int  mvchgat (int, int, int, attr_t, short, const void *)
		 ;
;
extern  int  mvcur (int,int,int,int) ;
;
extern  int  mvderwin (WINDOW *, int, int) ;
;
extern  int  mvgetch (int, int)
		 ;
;
extern  int  mvgetnstr (int, int, char *, int)
		 ;
;
extern  int  mvgetstr (int, int, char *)
		 ;
;
extern  int  mvhline (int, int, chtype, int)
		 ;
;
extern  chtype  mvinch (int, int)
		 ;
;
extern  int  mvinchnstr (int, int, chtype *, int)
		 ;
;
extern  int  mvinchstr (int, int, chtype *)
		 ;
;
extern  int  mvinnstr (int, int, char *, int)
		 ;
;
extern  int  mvinsch (int, int, chtype)
		 ;
;
extern  int  mvinsnstr (int, int, const char *, int)
		 ;
;
extern  int  mvinsstr (int, int, const char *)
		 ;
;
extern  int  mvinstr (int, int, char *)
		 ;
;
extern  int  mvprintw (int,int, const char *,...)
		 ;
;
extern  int  mvscanw (int,int,  char *,...)
		 ;
;
extern  int  mvvline (int, int, chtype, int)
		 ;
;
extern  int  mvwaddch (WINDOW *, int, int, const chtype)
		 ;
;
extern  int  mvwaddchnstr (WINDOW *, int, int, const chtype *, int)
		 ;
;
extern  int  mvwaddchstr (WINDOW *, int, int, const chtype *)
		 ;
;
extern  int  mvwaddnstr (WINDOW *, int, int, const char *, int)
		 ;
;
extern  int  mvwaddstr (WINDOW *, int, int, const char *)
		 ;
;
extern  int  mvwchgat (WINDOW *, int, int, int, attr_t, short, const void *)
		 ;
;
extern  int  mvwgetch (WINDOW *, int, int)
		 ;
;
extern  int  mvwgetnstr (WINDOW *, int, int, char *, int)
		 ;
;
extern  int  mvwgetstr (WINDOW *, int, int, char *)
		 ;
;
extern  int  mvwhline (WINDOW *, int, int, chtype, int)
		 ;
;
extern  int  mvwin (WINDOW *,int,int) ;
;
extern  chtype  mvwinch (WINDOW *, int, int)
		 ;
;
extern  int  mvwinchnstr (WINDOW *, int, int, chtype *, int)
		 ;
;
extern  int  mvwinchstr (WINDOW *, int, int, chtype *)
		 ;
;
extern  int  mvwinnstr (WINDOW *, int, int, char *, int)
		 ;
;
extern  int  mvwinsch (WINDOW *, int, int, chtype)
		 ;
;
extern  int  mvwinsnstr (WINDOW *, int, int, const char *, int)
		 ;
;
extern  int  mvwinsstr (WINDOW *, int, int, const char *)
		 ;
;
extern  int  mvwinstr (WINDOW *, int, int, char *)
		 ;
;
extern  int  mvwprintw (WINDOW*,int,int, const char *,...)
		 ;
;
extern  int  mvwscanw (WINDOW *,int,int,  char *,...)
		 ;
;
extern  int  mvwvline (WINDOW *,int, int, chtype, int)
		 ;
;
extern  WINDOW *  newpad (int,int) ;
;
extern  SCREEN *  newterm ( char *,FILE *,FILE *) ;
;
extern  WINDOW *  newwin (int,int,int,int) ;
;
extern  int  overlay (const WINDOW*,WINDOW *) ;
;
extern  int  overwrite (const WINDOW*,WINDOW *) ;
;
extern  int  pair_content (short,short*,short*) ;
;
extern  int  pechochar (WINDOW *, const chtype) ;
;
extern  int  pnoutrefresh (WINDOW*,int,int,int,int,int,int) ;
;
extern  int  prefresh (WINDOW *,int,int,int,int,int,int) ;
;
extern  int  printw (const char *,...)
		 ;
;
extern  int  putwin (WINDOW *, FILE *) ;
;
extern  int  redrawwin (WINDOW *)
		 ;
;
extern  int  refresh (void)
		 ;
;
extern  int  scanw ( char *,...)
		 ;
;
extern  int  scr_dump (const char *) ;
;
extern  int  scr_init (const char *) ;
;
extern  int  scrl (int)
		 ;
;
extern  int  scroll (WINDOW *)
		 ;
;
extern  int  scrollok (WINDOW *,_Bool) ;
;
extern  int  scr_restore (const char *) ;
;
extern  int  scr_set (const char *) ;
;
extern  SCREEN *  set_term (SCREEN *) ;
;
extern  int  slk_attroff (const chtype) ;
;
extern  int  slk_attr_off (const attr_t, void *)
		 ;
;
extern  int  slk_attron (const chtype) ;
;
extern  int  slk_attr_on (attr_t,void*)
		 ;
;
extern  int  slk_attrset (const chtype) ;
;
extern  attr_t  slk_attr (void) ;
;
extern  int  slk_attr_set (const attr_t,short,void*) ;
;
extern  int  slk_clear (void) ;
;
extern  int  slk_color (short) ;
;
extern  int  slk_init (int) ;
;
extern  char *  slk_label (int) ;
;
extern  int  slk_noutrefresh (void) ;
;
extern  int  slk_refresh (void) ;
;
extern  int  slk_restore (void) ;
;
extern  int  slk_set (int,const char *,int) ;
;
extern  int  slk_touch (void) ;
;
extern  int  standout (void)
		 ;
;
extern  int  standend (void)
		 ;
;
extern  int  start_color (void) ;
;
extern  WINDOW *  subpad (WINDOW *, int, int, int, int) ;
;
extern  WINDOW *  subwin (WINDOW *, int, int, int, int) ;
;
extern  int  ungetch (int) ;
;
extern  int  vidattr (chtype) ;
;
extern  int  vidputs (chtype, NCURSES_OUTC) ;
;
extern  int  vline (chtype, int)
		 ;
;
extern  int  vwprintw (WINDOW *, const char *,va_list) ;
;
extern  int  vw_printw (WINDOW *, const char *,va_list)
		 ;
;
extern  int  vwscanw (WINDOW *,  char *,va_list)
		 ;
;
extern  int  vw_scanw (WINDOW *,  char *,va_list)
		 ;
;
extern  int  waddch (WINDOW *, const chtype) ;
;
extern  int  waddchnstr (WINDOW *,const chtype *,int) ;
;
extern  int  waddchstr (WINDOW *,const chtype *)
		 ;
;
extern  int  waddnstr (WINDOW *,const char *,int) ;
;
extern  int  waddstr (WINDOW *,const char *)
		 ;
;
extern  int  wattron (WINDOW *, int)
		 ;
;
extern  int  wattroff (WINDOW *, int)
		 ;
;
extern  int  wattrset (WINDOW *, int)
		 ;
;
extern  int  wattr_get (WINDOW *, attr_t *, short *, void *)
		 ;
;
extern  int  wattr_on (WINDOW *, attr_t, void *) ;
;
extern  int  wattr_off (WINDOW *, attr_t, void *) ;
;
extern  int  wattr_set (WINDOW *, attr_t, short, void *)
		 ;
;
extern  int  wbkgd (WINDOW *, chtype) ;
;
extern  void  wbkgdset (WINDOW *,chtype) ;
;
extern  int  wborder (WINDOW *,chtype,chtype,chtype,chtype,chtype,chtype,chtype,chtype) ;
;
extern  int  wchgat (WINDOW *, int, attr_t, short, const void *) ;
;
extern  int  wclear (WINDOW *) ;
;
extern  int  wcolor_set (WINDOW*,short,void*) ;
;
extern  int  wdeleteln (WINDOW *)
		 ;
;
extern  int  wechochar (WINDOW *, const chtype) ;
;
extern  int  wgetch (WINDOW *) ;
;
extern  int  wgetnstr (WINDOW *,char *,int) ;
;
extern  int  wgetstr (WINDOW *, char *)
		 ;
;
extern  int  whline (WINDOW *, chtype, int) ;
;
extern  chtype  winch (WINDOW *) ;
;
extern  int  winchnstr (WINDOW *, chtype *, int) ;
;
extern  int  winchstr (WINDOW *, chtype *)
		 ;
;
extern  int  winnstr (WINDOW *, char *, int) ;
;
extern  int  winsch (WINDOW *, chtype) ;
;
extern  int  winsdelln (WINDOW *,int) ;
;
extern  int  winsertln (WINDOW *)
		 ;
;
extern  int  winsnstr (WINDOW *, const char *,int) ;
;
extern  int  winsstr (WINDOW *, const char *)
		 ;
;
extern  int  winstr (WINDOW *, char *)
		 ;
;
extern  int  wnoutrefresh (WINDOW *) ;
;
extern  int  wprintw (WINDOW *, const char *,...)
		 ;
;
extern  int  wredrawln (WINDOW *,int,int) ;
;
extern  int  wrefresh (WINDOW *) ;
;
extern  int  wscanw (WINDOW *,  char *,...)
		 ;
;
extern  int  wscrl (WINDOW *,int) ;
;
extern  int  wstandout (WINDOW *)
		 ;
;
extern  int  wstandend (WINDOW *)
		 ;
;
extern  int  wvline (WINDOW *,chtype,int) ;
;
extern  int  putp (const char *) ;
;
extern  _Bool  is_term_resized (int, int) ;
;
extern  int  assume_default_colors (int, int) ;
;
extern  int  resize_term (int, int) ;
;
extern  int  resizeterm (int, int) ;
;
extern  int  use_default_colors (void) ;
;
extern  int  use_screen (SCREEN *, NCURSES_SCREEN_CB, void *) ;
;
extern  int  use_window (WINDOW *, NCURSES_WINDOW_CB, void *) ;
;
extern  int  wresize (WINDOW *, int, int) ;
;
extern  WINDOW *  wgetparent (const WINDOW *) ;
;
extern  _Bool  is_cleared (const WINDOW *) ;
;
extern  _Bool  is_idcok (const WINDOW *) ;
;
extern  _Bool  is_idlok (const WINDOW *) ;
;
extern  _Bool  is_immedok (const WINDOW *) ;
;
extern  _Bool  is_keypad (const WINDOW *) ;
;
extern  _Bool  is_leaveok (const WINDOW *) ;
;
extern  _Bool  is_nodelay (const WINDOW *) ;
;
extern  _Bool  is_notimeout (const WINDOW *) ;
;
extern  _Bool  is_pad (const WINDOW *) ;
;
extern  _Bool  is_scrollok (const WINDOW *) ;
;
extern  _Bool  is_subwin (const WINDOW *) ;
;
extern  _Bool  is_syncok (const WINDOW *) ;
;
extern  int  wgetdelay (const WINDOW *) ;
;
extern  int  wgetscrreg (const WINDOW *, int *, int *) ;
;



































































extern  WINDOW * curscr;
extern  WINDOW * newscr;
extern  WINDOW * stdscr;
extern  char ttytype[];
extern  int COLORS;
extern  int COLOR_PAIRS;
extern  int COLS;
extern  int ESCDELAY;
extern  int LINES;
extern  int TABSIZE;




















































typedef struct
{
    short id;		
    int x, y, z;	
    mmask_t bstate;	
}
MEVENT;

extern  _Bool     has_mouse(void);
extern  int      getmouse (MEVENT *);
extern  int      ungetmouse (MEVENT *);
extern  mmask_t  mousemask (mmask_t, mmask_t *);
extern  _Bool     wenclose (const WINDOW *, int, int);
extern  int      mouseinterval (int);
extern  _Bool     wmouse_trafo (const WINDOW*, int*, int*, _Bool);
extern  _Bool     mouse_trafo (int*, int*, _Bool);              





extern  int  mcprint (char *, int);	
extern  int  has_key (int);		









#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/unctrl.h"















































  char *  unctrl (chtype);


#line 2882 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/curses.h"

#line 15 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/dirent.h"





























































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/dirent.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/dirent.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/dirent.h"











































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/dirent.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/dirent.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ino_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ino_t.h"
typedef __darwin_ino_t          ino_t;          
#line 82 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/dirent.h"



#pragma pack(4)


#pragma pack()



struct dirent { 	__uint64_t  d_ino;       	__uint64_t  d_seekoff;   	__uint16_t  d_reclen;    	__uint16_t  d_namlen;    	__uint8_t   d_type;      	char      d_name[1024];  };











#line 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/dirent.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 68 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/dirent.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/dirent.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h"



























#line 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/dirent.h"



struct _telldir;		


typedef struct {
	int	__dd_fd;	
	long	__dd_loc;	
	long	__dd_size;	
	char *	__dd_buf; 
	int	__dd_len;	
	long	__dd_seek;	
	__attribute__((__unused__)) long	__padding; 
	int	__dd_flags;	
	__darwin_pthread_mutex_t __dd_lock; 
	struct _telldir *__dd_td; 
} DIR;










int closedir(DIR *) __asm("_" "closedir" );

DIR *opendir(const char *) __asm("_" "opendir"  );

struct dirent *readdir(DIR *) __asm("_" "readdir" );
int readdir_r(DIR *, struct dirent *, struct dirent **) __asm("_" "readdir_r" );

void rewinddir(DIR *) __asm("_" "rewinddir"  );

void seekdir(DIR *, long) __asm("_" "seekdir"  );

long telldir(DIR *) __asm("_" "telldir"  );











DIR *fdopendir(int) __asm("_" "fdopendir"  );

int alphasort(const struct dirent **, const struct dirent **) __asm("_" "alphasort" );

int dirfd(DIR *dirp) ;

int scandir(const char *, struct dirent ***,
    int (*)(const struct dirent *), int (*)(const struct dirent **, const struct dirent **)) __asm("_" "scandir" );






int getdirentries(int, char *, int __nbytes, long *)





						__asm("_getdirentries_is_not_available_when_64_bit_inodes_are_in_effect")
;

DIR *__opendir2(const char *, int) __asm("_" "__opendir2"  );



#line 16 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/dlfcn.h"






























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/dlfcn.h"

#line 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdbool.h"








#line 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/dlfcn.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 38 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/dlfcn.h"








typedef struct dl_info {
        const char      *dli_fname;     
        void            *dli_fbase;     
        const char      *dli_sname;     
        void            *dli_saddr;     
} Dl_info;

extern int dladdr(const void *, Dl_info *);




extern int dlclose(void * __handle) ;
extern char * dlerror(void) ;
extern void * dlopen(const char * __path, int __mode) ;
extern void * dlsym(void * __handle, const char * __symbol) ;

extern _Bool dlopen_preflight(const char* __path)  ;








#line 17 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/err.h"

































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/err.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/err.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/err.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/err.h"




void	err(int, const char *, ...)  __attribute__((__noreturn__)) __attribute__((__format__ (__printf__, 2, 3)));
void	verr(int, const char *, __darwin_va_list)  __attribute__((__noreturn__)) __attribute__((__format__ (__printf__, 2, 0)));
void	errc(int, int, const char *, ...)  __attribute__((__noreturn__)) __attribute__((__format__ (__printf__, 3, 4)));
void	verrc(int, int, const char *, __darwin_va_list)  __attribute__((__noreturn__)) __attribute__((__format__ (__printf__, 3, 0)));
void	errx(int, const char *, ...)  __attribute__((__noreturn__)) __attribute__((__format__ (__printf__, 2, 3)));
void	verrx(int, const char *, __darwin_va_list)  __attribute__((__noreturn__)) __attribute__((__format__ (__printf__, 2, 0)));
void	warn(const char *, ...)  __attribute__((__format__ (__printf__, 1, 2)));
void	vwarn(const char *, __darwin_va_list)  __attribute__((__format__ (__printf__, 1, 0)));
void	warnc(int, const char *, ...)  __attribute__((__format__ (__printf__, 2, 3)));
void	vwarnc(int, const char *, __darwin_va_list)  __attribute__((__format__ (__printf__, 2, 0)));
void	warnx(const char *, ...)  __attribute__((__format__ (__printf__, 1, 2)));
void	vwarnx(const char *, __darwin_va_list)  __attribute__((__format__ (__printf__, 1, 0)));
void	err_set_file(void *);
void	err_set_exit(void (* )(int));


#line 21 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/errno.h"






















#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/errno.h"





































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/errno.h"


#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_errno_t.h"



























typedef int                    errno_t;
#line 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/errno.h"


extern int * __error(void);






                                        

































#line 24 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/errno.h"
#line 22 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/eti.h"



































#line 24 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/execinfo.h"























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 27 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/execinfo.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/execinfo.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/execinfo.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/os/base.h"





















#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 25 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/os/base.h"




















































typedef void (*os_function_t)(void *);





#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/execinfo.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/os/availability.h"



















 












 












#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"































#line 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/os/availability.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternalLegacy.h"





























#line 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/os/availability.h"





































#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/execinfo.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stddef.h"





























































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stddef.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stddef.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h"






























#line 68 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stddef.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_offsetof.h"






























#line 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stddef.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ptrdiff_t.h"






























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"





























#line 51 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ptrdiff_t.h"
typedef __darwin_ptrdiff_t ptrdiff_t;

#line 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stddef.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_rsize_t.h"





























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"





























#line 50 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_rsize_t.h"
typedef __darwin_size_t        rsize_t;

#line 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stddef.h"



#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"































#line 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stddef.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_wchar_t.h"
































#line 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stddef.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_wint_t.h"



























#line 83 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stddef.h"

typedef long double max_align_t;
#line 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/execinfo.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h"




#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/execinfo.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/uuid/uuid.h"



































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 39 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/uuid/uuid.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_uuid_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_uuid_t.h"
typedef __darwin_uuid_t uuid_t;
#line 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/uuid/uuid.h"

typedef __darwin_uuid_string_t  uuid_string_t;


static const uuid_t UUID_NULL __attribute__ ((unused)) = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};


void uuid_clear(uuid_t uu);

int uuid_compare(const uuid_t uu1, const uuid_t uu2);

void uuid_copy(uuid_t dst, const uuid_t src);

void uuid_generate(uuid_t out);
void uuid_generate_random(uuid_t out);
void uuid_generate_time(uuid_t out);


int uuid_is_null(const uuid_t uu);

int uuid_parse(const uuid_string_t in, uuid_t uu);

void uuid_unparse(const uuid_t uu, uuid_string_t out);
void uuid_unparse_lower(const uuid_t uu, uuid_string_t out);
void uuid_unparse_upper(const uuid_t uu, uuid_string_t out);

#line 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/execinfo.h"





int backtrace(void **, int __size) ;


extern __attribute__((__visibility__("default")))
int backtrace_from_fp(void *startfp, void ** array, int size);

char * * backtrace_symbols(void* const* , int __size) ;
void backtrace_symbols_fd(void* const* ,int __size,int) ;

struct image_offset {
	


	uuid_t uuid;

	


	uint32_t offset;
};


extern __attribute__((__visibility__("default")))
void backtrace_image_offsets(void* const*  array,
		struct image_offset *image_offsets, int size);

































size_t backtrace_async(void**  array, size_t length, uint32_t *task_id);


#line 25 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/fcntl.h"






















#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/fcntl.h"











































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/fcntl.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/fcntl.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/fcntl.h"


#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"































#line 84 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/fcntl.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_mode_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_mode_t.h"
typedef __darwin_mode_t         mode_t;
#line 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/fcntl.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_off_t.h"


























#line 86 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/fcntl.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_pid_t.h"


























#line 87 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/fcntl.h"



















#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_o_sync.h"


























#line 117 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/fcntl.h"










#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_o_dsync.h"


























#line 150 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/fcntl.h"












































                                        










                                        






























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_seek_set.h"



























#line 365 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/fcntl.h"





#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_s_ifmt.h"







































#line 371 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/fcntl.h"






                                        





struct flock {
	off_t   l_start;        
	off_t   l_len;          
	pid_t   l_pid;          
	short   l_type;         
	short   l_whence;       
};

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_timespec.h"


























#line 399 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/fcntl.h"





struct flocktimeout {
	struct flock    fl;             
	struct timespec timeout;        
};








struct radvisory {
	off_t   ra_offset;
	int     ra_count;
};








typedef struct fsignatures {
	off_t           fs_file_start;
	void            *fs_blob_start;
	size_t          fs_blob_size;

	
	
	size_t          fs_fsignatures_size;
	char            fs_cdhash[20];     
	int             fs_hash_type;
} fsignatures_t;

typedef struct fsupplement {
	off_t           fs_file_start;   
	off_t           fs_blob_start;   
	size_t          fs_blob_size;    
	int             fs_orig_fd;      
} fsupplement_t;













typedef struct fchecklv {
	off_t           lv_file_start;
	size_t          lv_error_message_size;
	void            *lv_error_message;
} fchecklv_t;








typedef struct fgetsigsinfo {
	off_t fg_file_start; 
	int   fg_info_request; 
	int   fg_sig_is_platform; 
} fgetsigsinfo_t;






typedef struct fstore {
	unsigned int fst_flags; 
	int     fst_posmode;    
	off_t   fst_offset;     
	off_t   fst_length;     
	off_t   fst_bytesalloc; 
} fstore_t;


typedef struct fpunchhole {
	unsigned int fp_flags; 
	unsigned int reserved; 
	off_t fp_offset; 
	off_t fp_length; 
} fpunchhole_t;


typedef struct ftrimactivefile {
	off_t fta_offset;  
	off_t fta_length; 
} ftrimactivefile_t;


typedef struct fspecread {
	unsigned int fsr_flags;  
	unsigned int reserved;   
	off_t fsr_offset;        
	off_t fsr_length;        
} fspecread_t;


typedef struct fattributiontag {
	unsigned int ft_flags;  
	unsigned long long ft_hash; 
	char ft_attribution_name[255]; 
} fattributiontag_t;
























#pragma pack(4)

struct log2phys {
	unsigned int    l2p_flags;       
	off_t           l2p_contigbytes; 
	                                 
	                                 
	off_t           l2p_devoffset;   
	                                 
	                                 
};

#pragma pack()





#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_filesec_t.h"



























struct _filesec;
typedef struct _filesec *filesec_t;
#line 579 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/fcntl.h"

typedef enum {
	FILESEC_OWNER = 1,
	FILESEC_GROUP = 2,
	FILESEC_UUID = 3,
	FILESEC_MODE = 4,
	FILESEC_ACL = 5,
	FILESEC_GRPUUID = 6,


	FILESEC_ACL_RAW = 100,
	FILESEC_ACL_ALLOCSIZE = 101
} filesec_property_t;




int     open(const char *, int, ...) __asm("_" "open"  );
int     openat(int, const char *, int, ...) __asm("_" "openat" ) ;
int     creat(const char *, mode_t) __asm("_" "creat"  );
int     fcntl(int, int, ...) __asm("_" "fcntl"  );

int     openx_np(const char *, int, filesec_t);




int open_dprotected_np( const char *, int, int, int, ...);
int openat_dprotected_np( int, const char *, int, int, int, ...);
int openat_authenticated_np(int, const char *, int, int);
int     flock(int, int);
filesec_t filesec_init(void);
filesec_t filesec_dup(filesec_t);
void    filesec_free(filesec_t);
int     filesec_get_property(filesec_t, filesec_property_t, void *);
int     filesec_query_property(filesec_t, filesec_property_t, int *);
int     filesec_set_property(filesec_t, filesec_property_t, const void *);
int     filesec_unset_property(filesec_t, filesec_property_t) ;


#line 24 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/fcntl.h"
#line 26 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/fenv.h"





















 



















    


























    



     
    
typedef struct {
    unsigned long long      __fpsr;
    unsigned long long      __fpcr;
} fenv_t;
    
typedef unsigned short fexcept_t;
    



    
    


enum {
    __fpcr_trap_invalid   = 0x00000100,
    __fpcr_trap_divbyzero = 0x00000200,
    __fpcr_trap_overflow  = 0x00000400,
    __fpcr_trap_underflow = 0x00000800,
    __fpcr_trap_inexact   = 0x00001000,
    __fpcr_trap_denormal  = 0x00008000,
    __fpcr_flush_to_zero  = 0x01000000,
};


enum { __fpsr_saturation  = 0x08000000 };
    
extern const fenv_t _FE_DFL_ENV;















extern const fenv_t _FE_DFL_DISABLE_DENORMS_ENV;
    



    


































extern int feclearexcept(int );
extern int fegetexceptflag(fexcept_t * , int );
extern int feraiseexcept(int );
extern int fesetexceptflag(const fexcept_t * , int );
extern int fetestexcept(int );















    
extern int fegetround(void);
extern int fesetround(int );






























    
extern int fegetenv(fenv_t * );
extern int feholdexcept(fenv_t * );
extern int fesetenv(const fenv_t * );
extern int feupdateenv(const fenv_t * );


#line 29 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/fmtmsg.h"





























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/fmtmsg.h"
















int	fmtmsg(long, const char *, int, const char *, const char *,
	    const char *);
#line 30 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/fnmatch.h"


























































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/fnmatch.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 63 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/fnmatch.h"








int	 fnmatch(const char *, const char *, int) __asm("_" "fnmatch" );

#line 31 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/form.h"




































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/curses.h"



































#line 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/form.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/eti.h"

































#line 41 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/form.h"


typedef void *FIELD_CELL;


typedef int Form_Options;
typedef int Field_Options;

	



typedef struct {
  short pmin;		
  short pmax;		
  short smin;		
  short smax;		
} _PAGE;

	



typedef struct fieldnode {
  unsigned short	status;		
  short			rows;		
  short			cols;		
  short			frow;		
  short			fcol;		
  int			drows;		
  int			dcols;		
  int			maxgrow;	
  int			nrow;		
  short			nbuf;		
  short			just;		
  short			page;		
  short			index;		
  int			pad;		
  chtype		fore;		
  chtype		back;		
  Field_Options		opts;		
  struct fieldnode *	snext;		
  struct fieldnode *	sprev;		
  struct fieldnode *	link;		
  struct formnode *	form;		
  struct typenode *	type;		
  void *		arg;		
  FIELD_CELL *		buf;		
  void *		usrptr;		
  







  
} FIELD;


	



typedef struct formnode {
  unsigned short	status;	  	
  short			rows;		
  short			cols;		
  int			currow;		
  int			curcol;		
  int			toprow;		
  int			begincol;	
  short			maxfield;	
  short			maxpage;	
  short			curpage;	
  Form_Options		opts;		
  WINDOW *		win;		
  WINDOW *		sub;		
  WINDOW *		w;		
  FIELD **		field;		
  FIELD *		current;	
  _PAGE *		page;		
  void *		usrptr;		

  void			(*forminit)(struct formnode *);
  void			(*formterm)(struct formnode *);
  void			(*fieldinit)(struct formnode *);
  void			(*fieldterm)(struct formnode *);

} FORM;


	



typedef struct typenode {
  unsigned short	status;			
  long			ref;			
  struct typenode *	left;			
  struct typenode *	right;			

  void* (*makearg)(va_list *);			
  void* (*copyarg)(const void *);		
  void	(*freearg)(void *);			

  _Bool	(*fcheck)(FIELD *,const void *);	
  _Bool	(*ccheck)(int,const void *);		

  _Bool	(*next)(FIELD *,const void *);		
  _Bool	(*prev)(FIELD *,const void *);		
} FIELDTYPE;

typedef void (*Form_Hook)(FORM *);

	

















	


extern  FIELDTYPE * TYPE_ALPHA;
extern  FIELDTYPE * TYPE_ALNUM;
extern  FIELDTYPE * TYPE_ENUM;
extern  FIELDTYPE * TYPE_INTEGER;
extern  FIELDTYPE * TYPE_NUMERIC;
extern  FIELDTYPE * TYPE_REGEXP;

	



extern  FIELDTYPE * TYPE_IPV4;      

	


extern  FIELDTYPE *  new_fieldtype (
		    _Bool (* const field_check)(FIELD *,const void *),
		    _Bool (* const char_check)(int,const void *));
extern  FIELDTYPE *  link_fieldtype(
		    FIELDTYPE *, FIELDTYPE *);

extern  int 	free_fieldtype (FIELDTYPE *);
extern  int 	set_fieldtype_arg (FIELDTYPE *,
		    void * (* const make_arg)(va_list *),
		    void * (* const copy_arg)(const void *),
		    void (* const free_arg)(void *));
extern  int 	 set_fieldtype_choice (FIELDTYPE *,
		    _Bool (* const next_choice)(FIELD *,const void *),
	      	    _Bool (* const prev_choice)(FIELD *,const void *));

	


extern  FIELD * 	new_field (int,int,int,int,int,int);
extern  FIELD * 	dup_field (FIELD *,int,int);
extern  FIELD * 	link_field (FIELD *,int,int);

extern  int 	free_field (FIELD *);
extern  int 	field_info (const FIELD *,int *,int *,int *,int *,int *,int *);
extern  int 	dynamic_field_info (const FIELD *,int *,int *,int *);
extern  int 	set_max_field ( FIELD *,int);
extern  int 	move_field (FIELD *,int,int);
extern  int 	set_field_type (FIELD *,FIELDTYPE *,...);
extern  int 	set_new_page (FIELD *,_Bool);
extern  int 	set_field_just (FIELD *,int);
extern  int 	field_just (const FIELD *);
extern  int 	set_field_fore (FIELD *,chtype);
extern  int 	set_field_back (FIELD *,chtype);
extern  int 	set_field_pad (FIELD *,int);
extern  int 	field_pad (const FIELD *);
extern  int 	set_field_buffer (FIELD *,int,const char *);
extern  int 	set_field_status (FIELD *,_Bool);
extern  int 	set_field_userptr (FIELD *, void *);
extern  int 	set_field_opts (FIELD *,Field_Options);
extern  int 	field_opts_on (FIELD *,Field_Options);
extern  int 	field_opts_off (FIELD *,Field_Options);

extern  chtype 	field_fore (const FIELD *);
extern  chtype 	field_back (const FIELD *);

extern  _Bool 	new_page (const FIELD *);
extern  _Bool 	field_status (const FIELD *);

extern  void * 	field_arg (const FIELD *);

extern  void * 	field_userptr (const FIELD *);

extern  FIELDTYPE * 	field_type (const FIELD *);

extern  char * 	field_buffer (const FIELD *,int);

extern  Field_Options 	field_opts (const FIELD *);

	



extern  FORM * 	new_form (FIELD **);

extern  FIELD ** 	form_fields (const FORM *);
extern  FIELD * 	current_field (const FORM *);

extern  WINDOW * 	form_win (const FORM *);
extern  WINDOW * 	form_sub (const FORM *);

extern  Form_Hook 	form_init (const FORM *);
extern  Form_Hook 	form_term (const FORM *);
extern  Form_Hook 	field_init (const FORM *);
extern  Form_Hook 	field_term (const FORM *);

extern  int 	free_form (FORM *);
extern  int 	set_form_fields (FORM *,FIELD **);
extern  int 	field_count (const FORM *);
extern  int 	set_form_win (FORM *,WINDOW *);
extern  int 	set_form_sub (FORM *,WINDOW *);
extern  int 	set_current_field (FORM *,FIELD *);
extern  int 	field_index (const FIELD *);
extern  int 	set_form_page (FORM *,int);
extern  int 	form_page (const FORM *);
extern  int 	scale_form (const FORM *,int *,int *);
extern  int 	set_form_init (FORM *,Form_Hook);
extern  int 	set_form_term (FORM *,Form_Hook);
extern  int 	set_field_init (FORM *,Form_Hook);
extern  int 	set_field_term (FORM *,Form_Hook);
extern  int 	post_form (FORM *);
extern  int 	unpost_form (FORM *);
extern  int 	pos_form_cursor (FORM *);
extern  int 	form_driver (FORM *,int);
extern  int 	set_form_userptr (FORM *,void *);
extern  int 	set_form_opts (FORM *,Form_Options);
extern  int 	form_opts_on (FORM *,Form_Options);
extern  int 	form_opts_off (FORM *,Form_Options);
extern  int 	form_request_by_name (const char *);

extern  const char * 	form_request_name (int);

extern  void * 	form_userptr (const FORM *);

extern  Form_Options 	form_opts (const FORM *);

extern  _Bool 	data_ahead (const FORM *);
extern  _Bool 	data_behind (const FORM *);



#line 32 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/fts.h"


























































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/fts.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_dev_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_dev_t.h"
typedef __darwin_dev_t        dev_t;    
#line 63 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/fts.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ino_t.h"


























#line 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/fts.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_nlink_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"





























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_nlink_t.h"
typedef __uint16_t        nlink_t;      
#line 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/fts.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/fts.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 68 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/fts.h"



#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wstrict-prototypes"

typedef struct {
	struct _ftsent *fts_cur;	
	struct _ftsent *fts_child;	
	struct _ftsent **	fts_array; 
	dev_t fts_dev;			
	char *fts_path;			
	int fts_rfd;			
	int fts_pathlen;		
	int fts_nitems;			
	    int (*fts_compar)();	


	int fts_options;		
} FTS;

typedef struct _ftsent {
	struct _ftsent *fts_cycle;	
	struct _ftsent *fts_parent;	
	struct _ftsent *fts_link;	
	long fts_number;	        
	void *fts_pointer;	        
	char * fts_accpath;	
	char * fts_path;	
	int fts_errno;			
	int fts_symfd;			
	unsigned short fts_pathlen;	
	unsigned short fts_namelen;	

	ino_t fts_ino;			
	dev_t fts_dev;			
	nlink_t fts_nlink;		

	short fts_level;		

	unsigned short fts_info;	

	unsigned short fts_flags;	

	unsigned short fts_instr;	

	struct stat *fts_statp;		
	char fts_name[1];		
} FTSENT;

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 172 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/fts.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 173 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/fts.h"


FTSENT	*fts_children(FTS *, int) __asm("_" "fts_children" );
int	 fts_close(FTS *) __asm("_" "fts_close" );
FTS	*fts_open(char * const *, int,
	    int (*)(const FTSENT **, const FTSENT **)) __asm("_" "fts_open" );
FTSENT	*fts_read(FTS *) __asm("_" "fts_read" );
int	 fts_set(FTS *, FTSENT *, int) __asm("_" "fts_set" );


#pragma clang diagnostic pop
#line 34 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/ftw.h"























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stat.h"






































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 74 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stat.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stat.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stat.h"


#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_timespec.h"


























#line 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stat.h"






#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_blkcnt_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_blkcnt_t.h"
typedef __darwin_blkcnt_t        blkcnt_t;
#line 86 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stat.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_blksize_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_blksize_t.h"
typedef __darwin_blksize_t        blksize_t;
#line 87 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stat.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_dev_t.h"


























#line 88 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stat.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ino_t.h"


























#line 89 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stat.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ino64_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ino64_t.h"
typedef __darwin_ino64_t        ino64_t;        
#line 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stat.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_mode_t.h"


























#line 95 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stat.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_nlink_t.h"


























#line 96 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stat.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_uid_t.h"


























#line 97 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stat.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_gid_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_gid_t.h"
typedef __darwin_gid_t  gid_t;
#line 98 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stat.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_off_t.h"


























#line 99 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stat.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_time_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"





























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_time_t.h"
typedef __darwin_time_t         time_t;
#line 100 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stat.h"









struct ostat {
	__uint16_t      st_dev;         
	ino_t           st_ino;         
	mode_t          st_mode;        
	nlink_t         st_nlink;       
	__uint16_t      st_uid;         
	__uint16_t      st_gid;         
	__uint16_t      st_rdev;        
	__int32_t       st_size;        
	struct  timespec st_atimespec;  
	struct  timespec st_mtimespec;  
	struct  timespec st_ctimespec;  
	__int32_t       st_blksize;     
	__int32_t       st_blocks;      
	__uint32_t      st_flags;       
	__uint32_t      st_gen;         
};



















struct stat { 	dev_t		st_dev;                  	mode_t		st_mode;                 	nlink_t		st_nlink;                	__darwin_ino64_t st_ino;                 	uid_t		st_uid;                  	gid_t		st_gid;                  	dev_t		st_rdev;                 	struct timespec st_atimespec;            	struct timespec st_mtimespec;            	struct timespec st_ctimespec;            	struct timespec st_birthtimespec; 	off_t		st_size;                 	blkcnt_t	st_blocks;               	blksize_t	st_blksize;              	__uint32_t	st_flags;                	__uint32_t	st_gen;                  	__int32_t	st_lspare;               	__int64_t	st_qspare[2];            };













#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_s_ifmt.h"































#line 214 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stat.h"








































                                                        












	




                                        


                                        








	




















int     chmod(const char *, mode_t) __asm("_" "chmod" );
int     fchmod(int, mode_t) __asm("_" "fchmod" );
int     fstat(int, struct stat *) __asm("_" "fstat" );
int     lstat(const char *, struct stat *) __asm("_" "lstat" );
int     mkdir(const char *, mode_t);
int     mkfifo(const char *, mode_t);
int     stat(const char *, struct stat *) __asm("_" "stat" );
int     mknod(const char *, mode_t, dev_t);
mode_t  umask(mode_t);

int     fchmodat(int, const char *, mode_t, int) ;
int     fstatat(int, const char *, struct stat *, int) __asm("_" "fstatat" ) ;
int     mkdirat(int, const char *, mode_t) ;
int     mkfifoat(int, const char *, mode_t) ;
int     mknodat(int, const char *, mode_t, dev_t) ;


int     futimens(int __fd, const struct timespec __times[2]) ;
int     utimensat(int __fd, const char *__path, const struct timespec __times[2],
    int __flag) ;



#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_filesec_t.h"


























#line 382 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stat.h"


int     chflags(const char *, __uint32_t);
int     chmodx_np(const char *, filesec_t);
int     fchflags(int, __uint32_t);
int     fchmodx_np(int, filesec_t);
int     fstatx_np(int, struct stat *, filesec_t) __asm("_" "fstatx_np" );
int     lchflags(const char *, __uint32_t) ;
int     lchmod(const char *, mode_t) ;
int     lstatx_np(const char *, struct stat *, filesec_t) __asm("_" "lstatx_np" );
int     mkdirx_np(const char *, filesec_t);
int     mkfifox_np(const char *, filesec_t);
int     statx_np(const char *, struct stat *, filesec_t) __asm("_" "statx_np" );
int     umaskx_np(filesec_t) ;



#line 27 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/ftw.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/ftw.h"












struct FTW {
	int base;
	int level;
};


int	ftw(const char *, int (*)(const char *, const struct stat *, int), int) 
	__asm("_" "ftw"  );
int	nftw(const char *, int (*)(const char *, const struct stat *, int,
	    struct FTW *), int, int) __asm("_" "nftw"  );

#line 35 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/getopt.h"








































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 44 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/getopt.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 45 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/getopt.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/unistd.h"




































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/unistd.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/unistd.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/unistd.h"
































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 68 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/unistd.h"











#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_posix_vdisable.h"


























#line 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/unistd.h"












#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_seek_set.h"



























#line 119 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/unistd.h"



struct accessx_descriptor {
	unsigned int ad_name_offset;
	int ad_flags;
	int ad_pad[2];
};








#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_types.h"


























#line 176 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/unistd.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"































#line 177 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/unistd.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ssize_t.h"


























#line 178 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/unistd.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_uint64_t.h"



























#line 179 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/unistd.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_uint32_t.h"



























#line 180 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/unistd.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 181 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/unistd.h"



int     getattrlistbulk(int, void *, void *, size_t, uint64_t) ;
int     getattrlistat(int, const char *, void *, void *, size_t, unsigned long) ;
int     setattrlistat(int, const char *, void *, void *, size_t, uint32_t)    ;
ssize_t freadlink(int, char * restrict, size_t) ;





#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_types.h"


























#line 196 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/unistd.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"































#line 197 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/unistd.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ssize_t.h"


























#line 198 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/unistd.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 199 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/unistd.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_uid_t.h"


























#line 200 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/unistd.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_gid_t.h"


























#line 201 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/unistd.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 202 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/unistd.h"



int     faccessat(int, const char *, int, int) ;
int     fchownat(int, const char *, uid_t, gid_t, int)  ;
int     linkat(int, const char *, int, const char *, int)       ;
ssize_t readlinkat(int, const char *, char *, size_t)   ;
int     symlinkat(const char *, int, const char *) ;
int     unlinkat(int, const char *, int) ;



#line 74 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/unistd.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/unistd.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_gid_t.h"


























#line 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/unistd.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_intptr_t.h"


























#line 86 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/unistd.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_off_t.h"


























#line 87 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/unistd.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_pid_t.h"


























#line 88 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/unistd.h"


#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"































#line 91 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/unistd.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ssize_t.h"


























#line 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/unistd.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_uid_t.h"


























#line 93 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/unistd.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_useconds_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_useconds_t.h"
typedef __darwin_useconds_t     useconds_t;
#line 94 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/unistd.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h"






























#line 95 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/unistd.h"











































void	 _exit(int) __attribute__((__noreturn__));
int	 access(const char *, int);
unsigned int
	 alarm(unsigned int);
int	 chdir(const char *);
int	 chown(const char *, uid_t, gid_t);

int	 close(int) __asm("_" "close"  );

int	 dup(int);
int	 dup2(int, int);
int	 execl(const char * __path, const char * __arg0, ...)  ;
int	 execle(const char * __path, const char * __arg0, ...)  ;
int	 execlp(const char * __file, const char * __arg0, ...)  ;
int	 execv(const char * __path, char * const * __argv)  ;
int	 execve(const char * __file, char * const * __argv, char * const * __envp)  ;
int	 execvp(const char * __file, char * const * __argv)  ;
pid_t	 fork(void)  ;
long	 fpathconf(int, int);
char *	getcwd(char *, size_t __size);
gid_t	 getegid(void);
uid_t	 geteuid(void);
gid_t	 getgid(void);
int	 getgroups(int __gidsetsize, gid_t []) __asm("_" "getgroups" "$DARWIN_EXTSN");
char *	getlogin(void);
pid_t	 getpgrp(void);
pid_t	 getpid(void);
pid_t	 getppid(void);
uid_t	 getuid(void);
int	 isatty(int);
int	 link(const char *, const char *);
off_t	 lseek(int, off_t, int);
long	 pathconf(const char *, int);

int	 pause(void) __asm("_" "pause"  );

int	 pipe(int [2]);

ssize_t	 read(int, void *, size_t __nbyte) __asm("_" "read"  );

int	 rmdir(const char *);
int	 setgid(gid_t);
int	 setpgid(pid_t, pid_t);
pid_t	 setsid(void);
int	 setuid(uid_t);

unsigned int
	 sleep(unsigned int) __asm("_" "sleep"  );

long	 sysconf(int);
pid_t	 tcgetpgrp(int);
int	 tcsetpgrp(int, pid_t);
char *	ttyname(int);

int	 ttyname_r(int, char *, size_t __len) __asm("_" "ttyname_r" );

int	 unlink(const char *);

ssize_t	 write(int __fd, const void * __buf, size_t __nbyte) __asm("_" "write"  );









size_t	 confstr(int, char *, size_t __len) __asm("_" "confstr" );

int	 getopt(int __argc, char * const [], const char *) __asm("_" "getopt" );

extern char *optarg;			
extern int optind, opterr, optopt;








                               

 






char *	crypt(const char *, const char *);
void	 encrypt(char *, int) __asm("_" "encrypt" );
int	 fchdir(int);
long	 gethostid(void);
pid_t	 getpgid(pid_t);
pid_t	 getsid(pid_t);





int	 lchown(const char *, uid_t, gid_t) __asm("_" "lchown" );

int	 lockf(int, int, off_t) __asm("_" "lockf"  );

int	 nice(int) __asm("_" "nice" );

ssize_t	 pread(int __fd, void * __buf, size_t __nbyte, off_t __offset) __asm("_" "pread"  );

ssize_t	 pwrite(int __fd, const void * __buf, size_t __nbyte, off_t __offset) __asm("_" "pwrite"  );



pid_t	 setpgrp(void) __asm("_" "setpgrp" );

int	 setregid(gid_t, gid_t) __asm("_" "setregid" );

int	 setreuid(uid_t, uid_t) __asm("_" "setreuid" );

void     swab(const void * restrict , void * restrict , ssize_t __nbytes);
void	 sync(void);
int	 truncate(const char *, off_t);
useconds_t	 ualarm(useconds_t, useconds_t);
int	 usleep(useconds_t) __asm("_" "usleep"  );

pid_t	 vfork(void)  ;


int	 fsync(int) __asm("_" "fsync"  );

int	 ftruncate(int, off_t);
int	 getlogin_r(char *, size_t __namelen);










int	 fchown(int, uid_t, gid_t);
int	 gethostname(char *, size_t __namelen);
ssize_t  readlink(const char * restrict, char * restrict, size_t __bufsize);
int	 setegid(gid_t);
int	 seteuid(uid_t);
int	 symlink(const char *, const char *);






#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/select.h"































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/appleapiopts.h"



























#line 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/select.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 68 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/select.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/select.h"






#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"




























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"





























#line 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"









typedef struct fd_set {
	__int32_t       fds_bits[((((1024) % (32)) == 0) ? ((1024) / (32)) : (((1024) / (32)) + 1))];
} fd_set;

int __darwin_check_fd_set_overflow(int, const void *, int) ;


inline __attribute__ ((__always_inline__)) int
__darwin_check_fd_set(int _a, const void *_b)
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunguarded-availability-new"
	if ((uintptr_t)&__darwin_check_fd_set_overflow != (uintptr_t) 0) {
		return __darwin_check_fd_set_overflow(_a, _b, 1);
	} else {
		return 1;
	}
#pragma clang diagnostic pop
}


inline __attribute__ ((__always_inline__)) int
__darwin_fd_isset(int _fd, const struct fd_set *_p)
{
	if (__darwin_check_fd_set(_fd, (const void *) _p)) {
		return _p->fds_bits[(unsigned long)_fd / 32] & ((__int32_t)(((unsigned long)1) << ((unsigned long)_fd % 32)));
	}

	return 0;
}

inline __attribute__ ((__always_inline__)) void
__darwin_fd_set(int _fd, struct fd_set *const _p)
{
	if (__darwin_check_fd_set(_fd, (const void *) _p)) {
		(_p->fds_bits[(unsigned long)_fd / 32] |= ((__int32_t)(((unsigned long)1) << ((unsigned long)_fd % 32))));
	}
}

inline __attribute__ ((__always_inline__)) void
__darwin_fd_clr(int _fd, struct fd_set *const _p)
{
	if (__darwin_check_fd_set(_fd, (const void *) _p)) {
		(_p->fds_bits[(unsigned long)_fd / 32] &= ~((__int32_t)(((unsigned long)1) << ((unsigned long)_fd % 32))));
	}
}



#line 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/select.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_timespec.h"


























#line 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/select.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_timeval.h"




























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"





























#line 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_timeval.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_timeval.h"

struct timeval
{
	__darwin_time_t         tv_sec;         
	__darwin_suseconds_t    tv_usec;        
};
#line 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/select.h"






#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_time_t.h"


























#line 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/select.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_suseconds_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_suseconds_t.h"
typedef __darwin_suseconds_t    suseconds_t;
#line 86 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/select.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_sigset_t.h"


























#line 87 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/select.h"













#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_setsize.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"


























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_setsize.h"
#line 101 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/select.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_set.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"


























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_set.h"
#line 102 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/select.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_clr.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"


























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_clr.h"
#line 103 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/select.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_isset.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"


























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_isset.h"
#line 104 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/select.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_zero.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"


























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_zero.h"
#line 105 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/select.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_copy.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"


























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_copy.h"
#line 108 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/select.h"




int      pselect(int, fd_set * restrict, fd_set * restrict,
    fd_set * restrict, const struct timespec * restrict,
    const sigset_t * restrict)
__asm("_" "pselect" "$DARWIN_EXTSN" )
;



#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_select.h"




































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_select.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"


























#line 41 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_select.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_timeval.h"


























#line 42 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_select.h"

int      select(int, fd_set * restrict, fd_set * restrict,
    fd_set * restrict, struct timeval * restrict)

__asm("_" "select" "$DARWIN_EXTSN" )
;
#line 132 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/select.h"

#line 654 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/unistd.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_dev_t.h"


























#line 656 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/unistd.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_mode_t.h"


























#line 657 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/unistd.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_uuid_t.h"


























#line 658 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/unistd.h"


void	 _Exit(int) __attribute__((__noreturn__));
int	 accessx_np(const struct accessx_descriptor *, size_t __sz, int *, uid_t);
int	 acct(const char *);
int	 add_profil(char *, size_t __bufsiz, unsigned long, unsigned int)  ;
void	 endusershell(void);
int	 execvP(const char * __file, const char * __searchpath, char * const * __argv)   ;
char *	fflagstostr(unsigned long);
int	 getdomainname(char *, int __namelen);
int	 getgrouplist(const char *, int, int *, int *__ngroups);

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/gethostuuid.h"





























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_timespec.h"


























#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/gethostuuid.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_uuid_t.h"


























#line 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/gethostuuid.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/gethostuuid.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/gethostuuid.h"


int gethostuuid(uuid_t, const struct timespec *)  ;

#line 671 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/unistd.h"

mode_t	 getmode(const void *, mode_t);
int	 getpeereid(int, uid_t *, gid_t *);
int	 getsgroups_np(int *, uuid_t);
char *	getusershell(void);
int	 getwgroups_np(int *, uuid_t);
int	 initgroups(const char *, int);
int	 issetugid(void);
char *	mkdtemp(char *);
int	 mknod(const char *, mode_t, dev_t);
int	 mkpath_np(const char *path, mode_t omode) ; 
int	 mkpathat_np(int dfd, const char *path, mode_t omode) 
		 
		 ;
int	 mkstemp(char *);
int	 mkstemps(char *, int);
char *	mktemp(char *);
int	 mkostemp(char * path, int oflags)
		 
		 ;
int	 mkostemps(char * path, int slen, int oflags)
		 
		 ;

int	 mkstemp_dprotected_np(char * path, int dpclass, int dpflags)
		 
		 ;
char *	mkdtempat_np(int dfd, char * path)
		 
		 ;
int     mkstempsat_np(int dfd, char * path, int slen)
		 
		 ;
int     mkostempsat_np(int dfd, char * path, int slen, int oflags)
		 
		 ;
int	 nfssvc(int, void *);
int	 profil(char *, size_t __bufsiz, unsigned long, unsigned int);

__attribute__((__deprecated__))
int	 pthread_setugid_np(uid_t, gid_t);
int	 pthread_getugid_np(uid_t *, gid_t *);

int	 reboot(int);
int	 revoke(const char *);

__attribute__((__deprecated__)) int	 rcmd(char * *, int, const char *, const char *, const char *, int *);
__attribute__((__deprecated__)) int	 rcmd_af(char * *, int, const char *, const char *, const char *, int *,
		int);
__attribute__((__deprecated__)) int	 rresvport(int *);
__attribute__((__deprecated__)) int	 rresvport_af(int *, int);
__attribute__((__deprecated__)) int	 iruserok(unsigned long, int, const char *, const char *);
__attribute__((__deprecated__)) int	 iruserok_sa(const void *, int, int, const char *, const char *);
__attribute__((__deprecated__)) int	 ruserok(const char *, int, const char *, const char *);

int	 setdomainname(const char *, int __namelen);
int	 setgroups(int, const gid_t *);
void	 sethostid(long);
int	 sethostname(const char *, int __namelen);
void	 setkey(const char *) __asm("_" "setkey" );
int	 setlogin(const char *);
void	*setmode(const char *) __asm("_" "setmode" );
int	 setrgid(gid_t);
int	 setruid(uid_t);
int	 setsgroups_np(int, const uuid_t);
void	 setusershell(void);
int	 setwgroups_np(int, const uuid_t);
int	 strtofflags(char * *, unsigned long *, unsigned long *);
int	 swapon(const char *);
int	 ttyslot(void);
int	 undelete(const char *);
int	 unwhiteout(const char *);
void * valloc(size_t __size); 

 


int	 syscall(int, ...);

extern char *suboptarg;			
int	 getsubopt(char * *, char * const *, char * *);


int    fgetattrlist(int,void*,void *,size_t __attrBufSize,unsigned int) ;
int    fsetattrlist(int,void*,void *,size_t __attrBufSize,unsigned int) ;
int    getattrlist(const char*,void*,void *,size_t __attrBufSize,unsigned int) __asm("_" "getattrlist" );
int    setattrlist(const char*,void*,void *,size_t __attrBufSize,unsigned int) __asm("_" "setattrlist" );
int exchangedata(const char*,const char*,unsigned int)  ;
int    getdirentriesattr(int,void*,void *,size_t __attrBufSize,unsigned int*,unsigned int*,unsigned int*,unsigned int)  ;


struct fssearchblock;
struct searchstate;

int	 searchfs(const char *, struct fssearchblock *, unsigned long *, unsigned int, unsigned int, struct searchstate *)  ;
int	 fsctl(const char *,unsigned long,void *,unsigned int);
int	 ffsctl(int,unsigned long,void *,unsigned int) ;


int	fsync_volume_np(int, int) ;
int	sync_volume_np(const char *, int) ;

extern int optreset;


#line 46 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/getopt.h"








struct option {
	
	const char *name;
	



	int has_arg;
	
	int *flag;
	
	int val;
};


int	getopt_long(int __argc, char * const *, const char *,
	const struct option *, int *);
int	getopt_long_only(int __argc, char * const *, const char *,
	const struct option *, int *);
int	 getopt(int __argc, char * const [], const char *) __asm("_" "getopt" );

extern char * optarg;			
extern int optind, opterr, optopt;
extern int optreset;			

 
#line 37 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/glob.h"




































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/glob.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 41 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/glob.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 42 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/glob.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/glob.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"































#line 44 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/glob.h"



struct dirent;
struct stat;
typedef struct {
	size_t gl_pathc;	
	int gl_matchc;		
	size_t gl_offs;		
	int gl_flags;		
	char * *	gl_pathv; 
				
		int (*gl_errfunc)(const char *, int);

	




	void (*gl_closedir)(void *);
	struct dirent *(*gl_readdir)(void *);
	void *(*gl_opendir)(const char *);
	int (*gl_lstat)(const char *, struct stat *);
	int (*gl_stat)(const char *, struct stat *);
} glob_t;









int	glob(const char * restrict, int, int (*)(const char *, int), 
	     glob_t * restrict) __asm("_" "glob" );
void	globfree(glob_t *);

#line 38 "all.c"
#line 1 "/opt/homebrew/include/gnumake.h"




















typedef struct
  {
    const char *filenm;
    unsigned long lineno;
  } gmk_floc;

typedef char *(*gmk_func_ptr)(const char *nm, unsigned int argc, char **argv);



 void gmk_free (char *str);


 char *gmk_alloc (unsigned int len);


 void gmk_eval (const char *buffer, const gmk_floc *floc);



 char *gmk_expand (const char *str);



















 void gmk_add_function (const char *name, gmk_func_ptr func,
                                  unsigned int min_args, unsigned int max_args,
                                  unsigned int flags);

#line 40 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/grp.h"







































 


#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 46 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/grp.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_gid_t.h"


























#line 47 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/grp.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"































#line 48 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/grp.h"


struct group {
	char	*gr_name;		
	char	*gr_passwd;		
	gid_t	gr_gid;			
	char	**gr_mem;		
};

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 61 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/grp.h"



struct group *getgrgid(gid_t);
struct group *getgrnam(const char *);

int getgrgid_r(gid_t, struct group *, char *, size_t, struct group **);
int getgrnam_r(const char *, struct group *, char *, size_t, struct group **);

struct group *getgrent(void);
void setgrent(void);
void endgrent(void);


#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/uuid/uuid.h"

































#line 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/grp.h"

char *group_from_gid(gid_t, int);
struct group *getgruuid(uuid_t);
int getgruuid_r(uuid_t, struct group *, char *, size_t, struct group **);



void setgrfile(const char *);
int setgroupent(int);

#line 41 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/iconv.h"


































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 38 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/iconv.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"





































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/appleapiopts.h"



























#line 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"


#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"





























#line 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/endian.h"































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/endian.h"











































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 48 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/endian.h"










#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_endian.h"


























































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 94 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_endian.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_endian.h"































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_endian.h"



























































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/__endian.h"
































































































#line 96 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_endian.h"



#line 38 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_endian.h"
#line 95 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_endian.h"






#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/libkern/_OSByteOrder.h"





























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/libkern/_OSByteOrder.h"







#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/libkern/arm/_OSByteOrder.h"






























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/libkern/arm/_OSByteOrder.h"




static inline
__uint16_t
_OSSwapInt16(
	__uint16_t        _data
	)
{
	
	return (__uint16_t)(_data << 8 | _data >> 8);
}

static inline
__uint32_t
_OSSwapInt32(
	__uint32_t        _data
	)
{
	
	_data = (((_data ^ (_data >> 16 | (_data << 16))) & 0xFF00FFFF) >> 8) ^ (_data >> 8 | _data << 24);

	return _data;
}

static inline
__uint64_t
_OSSwapInt64(
	__uint64_t        _data
	)
{
	union {
		__uint64_t _ull;
		__uint32_t _ul[2];
	} _u;

	
	_u._ul[0] = (__uint32_t)(_data >> 32);
	_u._ul[1] = (__uint32_t)(_data & 0xffffffff);
	_u._ul[0] = _OSSwapInt32(_u._ul[0]);
	_u._ul[1] = _OSSwapInt32(_u._ul[1]);
	return _u._ull;
}

#line 49 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/libkern/_OSByteOrder.h"





#line 132 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_endian.h"




#line 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/endian.h"
#line 38 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/endian.h"
#line 82 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_char.h"



























typedef unsigned char   u_char;
#line 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_short.h"



























typedef unsigned short  u_short;
#line 86 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int.h"



























typedef unsigned int    u_int;
#line 87 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"
typedef unsigned long           u_long;
typedef unsigned short          ushort;         
typedef unsigned int            uint;           

typedef u_int64_t               u_quad_t;       
typedef int64_t                 quad_t;
typedef quad_t *                qaddr_t;

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_caddr_t.h"



























typedef char *          caddr_t;
#line 103 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"

typedef int32_t                 daddr_t;        

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_dev_t.h"


























#line 107 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"

typedef u_int32_t               fixpt_t;        

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_blkcnt_t.h"


























#line 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_blksize_t.h"


























#line 112 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_gid_t.h"


























#line 113 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_in_addr_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"





























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_in_addr_t.h"
typedef __uint32_t      in_addr_t;      
#line 114 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_in_port_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"





























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_in_port_t.h"
typedef __uint16_t              in_port_t;
#line 115 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ino_t.h"


























#line 116 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ino64_t.h"


























#line 119 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_key_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"





























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_key_t.h"
typedef __int32_t        key_t;         
#line 122 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_mode_t.h"


























#line 123 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_nlink_t.h"


























#line 124 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_id_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_id_t.h"
typedef __darwin_id_t   id_t;           
#line 125 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_pid_t.h"


























#line 126 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_off_t.h"


























#line 127 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"

typedef int32_t                 segsz_t;        
typedef int32_t                 swblk_t;        

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_uid_t.h"


























#line 132 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"





#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_clock_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"





























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_clock_t.h"
typedef __darwin_clock_t        clock_t;
#line 169 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"































#line 170 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ssize_t.h"


























#line 171 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_time_t.h"


























#line 172 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_useconds_t.h"


























#line 174 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_suseconds_t.h"


























#line 175 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_rsize_t.h"






























#line 178 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_errno_t.h"


























#line 179 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"






#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"


























#line 188 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"

typedef __int32_t       fd_mask;







#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_setsize.h"


























#line 201 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_set.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"


























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_set.h"
#line 202 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_clr.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"


























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_clr.h"
#line 203 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_zero.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"


























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_zero.h"
#line 204 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_isset.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"


























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_isset.h"
#line 205 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_copy.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"


























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_copy.h"
#line 208 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"






#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_attr_t.h"


























#line 219 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_cond_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_cond_t.h"
typedef __darwin_pthread_cond_t pthread_cond_t;
#line 220 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_condattr_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_condattr_t.h"
typedef __darwin_pthread_condattr_t pthread_condattr_t;
#line 221 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_mutex_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_mutex_t.h"
typedef __darwin_pthread_mutex_t pthread_mutex_t;
#line 222 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_mutexattr_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_mutexattr_t.h"
typedef __darwin_pthread_mutexattr_t pthread_mutexattr_t;
#line 223 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_once_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_once_t.h"
typedef __darwin_pthread_once_t pthread_once_t;
#line 224 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_rwlock_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_rwlock_t.h"
typedef __darwin_pthread_rwlock_t pthread_rwlock_t;
#line 225 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_rwlockattr_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_rwlockattr_t.h"
typedef __darwin_pthread_rwlockattr_t pthread_rwlockattr_t;
#line 226 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_t.h"
typedef __darwin_pthread_t pthread_t;
#line 227 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"


#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_key_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_key_t.h"
typedef __darwin_pthread_key_t pthread_key_t;
#line 231 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"




#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fsblkcnt_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fsblkcnt_t.h"
typedef __darwin_fsblkcnt_t             fsblkcnt_t;
#line 236 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fsfilcnt_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fsfilcnt_t.h"
typedef __darwin_fsfilcnt_t             fsfilcnt_t;
#line 237 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"
#line 39 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/iconv.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/wchar.h"


































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"



































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 74 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h"






























#line 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"































#line 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_mbstate_t.h"




























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"





























#line 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_mbstate_t.h"
typedef __darwin_mbstate_t mbstate_t;
#line 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ct_rune_t.h"



























#line 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_rune_t.h"


























#line 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_wchar_t.h"
































#line 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"



#line 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdarg.h"
























#line 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stdarg_header_macro.h"








#line 44 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdarg.h"

#line 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stdarg___gnuc_va_list.h"








#line 48 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdarg.h"

#line 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stdarg_va_list.h"








#line 53 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdarg.h"

#line 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stdarg_va_arg.h"











#line 58 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdarg.h"

#line 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stdarg___va_copy.h"








#line 63 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdarg.h"

#line 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/__stdarg_va_copy.h"








#line 68 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/stdarg.h"
#line 91 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h"




























































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"































































#line 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h"
#line 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/time.h"






























































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 68 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_clock_t.h"


























#line 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h"






























#line 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"































#line 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_time_t.h"


























#line 74 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_timespec.h"


























#line 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"



struct tm {
	int	tm_sec;		
	int	tm_min;		
	int	tm_hour;	
	int	tm_mday;	
	int	tm_mon;		
	int	tm_year;	
	int	tm_wday;	
	int	tm_yday;	
	int	tm_isdst;	
	long	tm_gmtoff;	
	char	*	tm_zone;	
};


extern char *	tzname[];

extern int getdate_err;
extern long timezone __asm("_" "timezone" );
extern int daylight;


char *	asctime(const struct tm *);
clock_t clock(void) __asm("_" "clock" );
char *	ctime(const time_t *);
double difftime(time_t, time_t);
struct tm *getdate(const char *);
struct tm *gmtime(const time_t *);
struct tm *localtime(const time_t *);
time_t mktime(struct tm *) __asm("_" "mktime" );
size_t strftime(char * restrict, size_t __maxsize, const char * restrict, const struct tm * restrict) __asm("_" "strftime" );
char *	strptime(const char * restrict, const char * restrict, struct tm * restrict) __asm("_" "strptime" );
time_t time(time_t *);

void tzset(void);


char * asctime_r(const struct tm * restrict, char * restrict );
char * ctime_r(const time_t *, char *);
struct tm *gmtime_r(const time_t * restrict, struct tm * restrict);
struct tm *localtime_r(const time_t * restrict, struct tm * restrict);

time_t posix2time(time_t);
void tzsetwall(void);
time_t time2posix(time_t);
time_t timelocal(struct tm * const);
time_t timegm(struct tm * const);

int nanosleep(const struct timespec *__rqtp, struct timespec *__rmtp) __asm("_" "nanosleep"  );


typedef enum {
_CLOCK_REALTIME  = 0,
_CLOCK_MONOTONIC  = 6,
_CLOCK_MONOTONIC_RAW  = 4,
_CLOCK_MONOTONIC_RAW_APPROX  = 5,
_CLOCK_UPTIME_RAW  = 8,
_CLOCK_UPTIME_RAW_APPROX  = 9,
_CLOCK_PROCESS_CPUTIME_ID  = 12,
_CLOCK_THREAD_CPUTIME_ID  = 16
} clockid_t;


int clock_getres(clockid_t __clock_id, struct timespec *__res);


int clock_gettime(clockid_t __clock_id, struct timespec *__tp);


__uint64_t clock_gettime_nsec_np(clockid_t __clock_id);

 
 
int clock_settime(clockid_t __clock_id, const struct timespec *__tp);




int timespec_get(struct timespec *ts, int base);


#line 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/time.h"
#line 93 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/__wctype.h"






































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/___wctype.h"






















































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 59 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/___wctype.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 60 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/___wctype.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 61 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/___wctype.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_wint_t.h"



























#line 63 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/___wctype.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_wctype_t.h"




























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_wctype_t.h"
typedef __darwin_wctype_t wctype_t;
#line 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/___wctype.h"





#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/ctype.h"

































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctype.h"
































































#line 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/ctype.h"
#line 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/___wctype.h"





inline int
iswalnum(wint_t _wc)
{
	return (__istype(_wc, 0x00000100L|0x00000400L));
}

inline int
iswalpha(wint_t _wc)
{
	return (__istype(_wc, 0x00000100L));
}

inline int
iswcntrl(wint_t _wc)
{
	return (__istype(_wc, 0x00000200L));
}

inline int
iswctype(wint_t _wc, wctype_t _charclass)
{
	return (__istype(_wc, _charclass));
}

inline int
iswdigit(wint_t _wc)
{
	return (__isctype(_wc, 0x00000400L));
}

inline int
iswgraph(wint_t _wc)
{
	return (__istype(_wc, 0x00000800L));
}

inline int
iswlower(wint_t _wc)
{
	return (__istype(_wc, 0x00001000L));
}

inline int
iswprint(wint_t _wc)
{
	return (__istype(_wc, 0x00040000L));
}

inline int
iswpunct(wint_t _wc)
{
	return (__istype(_wc, 0x00002000L));
}

inline int
iswspace(wint_t _wc)
{
	return (__istype(_wc, 0x00004000L));
}

inline int
iswupper(wint_t _wc)
{
	return (__istype(_wc, 0x00008000L));
}

inline int
iswxdigit(wint_t _wc)
{
	return (__isctype(_wc, 0x00010000L));
}

inline wint_t
towlower(wint_t _wc)
{
		return (__tolower(_wc));
}

inline wint_t
towupper(wint_t _wc)
{
		return (__toupper(_wc));
}



wctype_t
	wctype(const char *);

#line 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/__wctype.h"
#line 94 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"





wint_t	btowc(int);
wint_t	fgetwc(FILE *);
wchar_t	*
	fgetws(wchar_t * restrict , int __n,
		FILE * restrict);
wint_t	fputwc(wchar_t, FILE *);
int	fputws(const wchar_t * restrict, FILE * restrict);
int	fwide(FILE *, int);
int	fwprintf(FILE * restrict, const wchar_t * restrict, ...);
int	fwscanf(FILE * restrict, const wchar_t * restrict, ...);
wint_t	getwc(FILE *);
wint_t	getwchar(void);
size_t	mbrlen(const char * restrict , size_t __n,
		mbstate_t * restrict);
size_t	mbrtowc(wchar_t * restrict, const char * restrict ,
	    size_t __n, mbstate_t * restrict);
int	mbsinit(const mbstate_t *);
size_t	mbsrtowcs(wchar_t * restrict ,
		const char ** restrict, size_t __len, mbstate_t * restrict);
wint_t	putwc(wchar_t, FILE *);
wint_t	putwchar(wchar_t);
int	swprintf(wchar_t * restrict , size_t __maxlen,
		const wchar_t * restrict, ...);
int	swscanf(const wchar_t * restrict, const wchar_t * restrict, ...);
wint_t	ungetwc(wint_t, FILE *);
int	vfwprintf(FILE * restrict, const wchar_t * restrict,
	    __darwin_va_list);
int	vswprintf(wchar_t * restrict , size_t __maxlen,
		const wchar_t * restrict, __darwin_va_list);
int	vwprintf(const wchar_t * restrict, __darwin_va_list);
size_t	wcrtomb(char * restrict, wchar_t, mbstate_t * restrict);
wchar_t	*wcscat(wchar_t * restrict, const wchar_t * restrict);
wchar_t	*wcschr(const wchar_t *, wchar_t);
int	wcscmp(const wchar_t *, const wchar_t *);
int	wcscoll(const wchar_t *, const wchar_t *);
wchar_t	*wcscpy(wchar_t * restrict ,
		const wchar_t * restrict) ;
size_t	wcscspn(const wchar_t *, const wchar_t *);
size_t	wcsftime(wchar_t * restrict , size_t __maxlen,
		const wchar_t * restrict, const struct tm * restrict)
		__asm("_" "wcsftime" );
size_t	wcslen(const wchar_t *);
wchar_t	*
		wcsncat(wchar_t * restrict ,
		const wchar_t * restrict , size_t __n)
		;
int	wcsncmp(const wchar_t *,
		const wchar_t *, size_t);
wchar_t	*
		wcsncpy(wchar_t * restrict ,
		const wchar_t * restrict , size_t __n)
		;
wchar_t	*wcspbrk(const wchar_t *, const wchar_t *);
wchar_t	*wcsrchr(const wchar_t *, wchar_t);
size_t	wcsrtombs(char * restrict ,
		const wchar_t ** restrict, size_t __len, mbstate_t * restrict);
size_t	wcsspn(const wchar_t *, const wchar_t *);
wchar_t	*wcsstr(const wchar_t * restrict, const wchar_t * restrict);
size_t	wcsxfrm(wchar_t * restrict ,
		const wchar_t * restrict, size_t __n);
int	wctob(wint_t);
double	wcstod(const wchar_t * restrict, wchar_t ** restrict);
wchar_t	*
		wcstok(wchar_t * restrict , const wchar_t * restrict,
	    wchar_t * * restrict);
long	 wcstol(const wchar_t * restrict, wchar_t * * restrict,
		int);
unsigned long
	 wcstoul(const wchar_t * restrict, wchar_t * * restrict, int);
wchar_t	* 
		wmemchr(const wchar_t * , wchar_t, size_t __n);
int	wmemcmp(const wchar_t *, const wchar_t *,
		size_t __n);
wchar_t	*
		wmemcpy(wchar_t * restrict ,
		const wchar_t * restrict , size_t __n);
wchar_t	*
		wmemmove(wchar_t *, const wchar_t *,
		size_t __n);
wchar_t	*
		wmemset(wchar_t *, wchar_t, size_t __n);
int	wprintf(const wchar_t * restrict, ...);
int	wscanf(const wchar_t * restrict, ...);
int	wcswidth(const wchar_t *, size_t __n);
int	wcwidth(wchar_t);










int	vfwscanf(FILE * restrict, const wchar_t * restrict,
	    __darwin_va_list);
int	vswscanf(const wchar_t * restrict, const wchar_t * restrict,
	    __darwin_va_list);
int	vwscanf(const wchar_t * restrict, __darwin_va_list);
float	wcstof(const wchar_t * restrict, wchar_t * * restrict);
long double
	wcstold(const wchar_t * restrict, wchar_t * * restrict);
long long
	wcstoll(const wchar_t * restrict, wchar_t * * restrict, int);
unsigned long long
	wcstoull(const wchar_t * restrict, wchar_t * * restrict, int);









size_t  mbsnrtowcs(wchar_t * restrict ,
		const char ** restrict, size_t, size_t __len,
		mbstate_t * restrict);
wchar_t *	wcpcpy(
		wchar_t * restrict ,
		const wchar_t * restrict) 
		
		;
wchar_t *	wcpncpy(
		wchar_t * restrict ,
		const wchar_t * restrict , size_t __n)
		
		;
wchar_t * wcsdup(const wchar_t *)
		;
int     wcscasecmp(const wchar_t *, const wchar_t *) ;
int     wcsncasecmp(const wchar_t *, const wchar_t *, size_t n) ;
size_t  wcsnlen(const wchar_t *, size_t __n)  ;
size_t  wcsnrtombs(char * restrict , const wchar_t ** restrict, size_t,
            size_t __len, mbstate_t * restrict);
FILE *open_wmemstream(wchar_t * * __bufp, size_t * __sizep) ;







wchar_t *
		fgetwln(FILE * restrict, size_t *__len) ;
size_t	wcslcat(wchar_t *, const wchar_t *, size_t __len);
size_t	wcslcpy(wchar_t *, const wchar_t *, size_t __len);




#line 68 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/wchar.h"
#line 42 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/iconv.h"


typedef	_Bool	__iconv_bool;

struct __tag_iconv_t;
typedef	struct __tag_iconv_t	*iconv_t;



extern int _libiconv_version;

iconv_t	iconv_open(const char *, const char *);
size_t	iconv(iconv_t, char ** restrict,
	      size_t * restrict, char ** restrict,
	      size_t * restrict);
int	iconv_close(iconv_t);




int	__iconv_get_list(char ***, size_t *, __iconv_bool);
void	__iconv_free_list(char **, size_t);
size_t	__iconv(iconv_t, char **, size_t *, char **,
		     size_t *, __uint32_t, size_t *);




typedef struct {
	void	*spaceholder[64];
} iconv_allocation_t;

int	 iconv_open_into(const char *, const char *, iconv_allocation_t *);
void	 libiconv_set_relocation_prefix(const char *, const char *);





typedef void (*iconv_unicode_char_hook) (unsigned int mbr, void *data);
typedef void (*iconv_wide_char_hook) (wchar_t wc, void *data);

struct iconv_hooks {
	iconv_unicode_char_hook		 uc_hook;
	iconv_wide_char_hook		 wc_hook;
	void				*data;
};

typedef void (*iconv_unicode_mb_to_uc_fallback) (const char*,
		size_t, void (*write_replacement) (const unsigned int *,
		size_t, void*),	void*, void*);
typedef void (*iconv_unicode_uc_to_mb_fallback) (unsigned int,
		void (*write_replacement) (const char *, size_t, void*),
		void*, void*);
typedef void (*iconv_wchar_mb_to_wc_fallback) (const char*, size_t,
		void (*write_replacement) (const wchar_t *, size_t, void*),
		void*, void*);
typedef void (*iconv_wchar_wc_to_mb_fallback) (wchar_t,
		void (*write_replacement) (const char *, size_t, void*),
		void*, void*);

struct iconv_fallbacks {
	iconv_unicode_mb_to_uc_fallback	 mb_to_uc_fallback;
	iconv_unicode_uc_to_mb_fallback  uc_to_mb_fallback;
	iconv_wchar_mb_to_wc_fallback	 mb_to_wc_fallback;
	iconv_wchar_wc_to_mb_fallback	 wc_to_mb_fallback;
	void				*data;
};


void		 iconvlist(int (*do_one) (unsigned int, const char * const *,
		    void *), void *);
const char	*iconv_canonicalize(const char *);
int		 iconvctl(iconv_t, int, void *);

#line 43 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/ifaddrs.h"































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/os/availability.h"



















 

#line 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/ifaddrs.h"

struct ifaddrs {
	struct ifaddrs  *ifa_next;
	char		*ifa_name;
	unsigned int	 ifa_flags;
	struct sockaddr	*ifa_addr;
	struct sockaddr	*ifa_netmask;
	struct sockaddr	*ifa_dstaddr;
	void		*ifa_data;
};






struct ifmaddrs {
	struct ifmaddrs	*ifma_next;
	struct sockaddr	*ifma_name;
	struct sockaddr	*ifma_addr;
	struct sockaddr	*ifma_lladdr;
};

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/ifaddrs.h"


extern int getifaddrs(struct ifaddrs **);
extern void freeifaddrs(struct ifaddrs *);
extern int getifmaddrs(struct ifmaddrs **) ;
extern void freeifmaddrs(struct ifmaddrs *) ;

#line 45 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/inttypes.h"






























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_inttypes.h"





























































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 224 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_inttypes.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 225 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_inttypes.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 226 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_inttypes.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 228 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_inttypes.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_wchar_t.h"
































#line 229 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_inttypes.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h"




#line 231 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_inttypes.h"







extern intmax_t
imaxabs(intmax_t j);


typedef struct {
	intmax_t quot;
	intmax_t rem;
} imaxdiv_t;


extern imaxdiv_t
imaxdiv(intmax_t __numer, intmax_t __denom);



extern intmax_t
strtoimax(const char * restrict __nptr,
	  char * * restrict __endptr,
	  int __base);


extern uintmax_t
strtoumax(const char * restrict __nptr,
	  char * * restrict __endptr,
	  int __base);



extern intmax_t
wcstoimax(const wchar_t * restrict __nptr,
	  wchar_t * * restrict __endptr,
	  int __base);


extern uintmax_t
wcstoumax(const wchar_t * restrict __nptr,
	  wchar_t * * restrict __endptr,
	  int __base);
















#line 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/inttypes.h"
#line 46 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/langinfo.h"




























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_langinfo.h"





























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_langinfo.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_langinfo.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_nl_item.h"




























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_nl_item.h"
typedef __darwin_nl_item nl_item;
#line 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_langinfo.h"



















char	*   nl_langinfo(nl_item);

#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/langinfo.h"
#line 47 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/libgen.h"































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/libgen.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/libgen.h"






char *	basename(char *);
char *	dirname(char *);




#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 57 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/libgen.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/limits.h"




























































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/limits.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/limits.h"





#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/limits.h"








































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 45 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/limits.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_limits.h"






#line 46 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/limits.h"




























#line 12 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/limits.h"
#line 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/limits.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/syslimits.h"

































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/syslimits.h"

















                                        
                                        
                                        


#line 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/limits.h"


















#line 58 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/libgen.h"



char *	basename_r(const char *, char *)
		 
		 ;

char *	dirname_r(const char *, char *)
		 
		 ;



#line 49 "all.c"
#line 1 "/opt/homebrew/include/libintl.h"

















#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/locale.h"





































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 41 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/locale.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_locale.h"





































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 41 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_locale.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 42 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_locale.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_locale.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_locale_posix2008.h"
























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_locale_posix2008.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_locale_posix2008.h"











#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_locale_t.h"





























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_locale_t.h"



struct _xlocale; 
typedef struct _xlocale *		locale_t;
#line 52 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_locale_posix2008.h"


locale_t	duplocale(locale_t);
int		freelocale(locale_t);
locale_t	newlocale(int, const char *, locale_t);
locale_t	uselocale(locale_t);

#line 46 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_locale.h"



struct lconv {
	char	* decimal_point;
	char	* thousands_sep;
	char	* grouping;
	char	* int_curr_symbol;
	char	* currency_symbol;
	char	* mon_decimal_point;
	char	* mon_thousands_sep;
	char	* mon_grouping;
	char	* positive_sign;
	char	* negative_sign;
	char	int_frac_digits;
	char	frac_digits;
	char	p_cs_precedes;
	char	p_sep_by_space;
	char	n_cs_precedes;
	char	n_sep_by_space;
	char	p_sign_posn;
	char	n_sign_posn;
	char	int_p_cs_precedes;
	char	int_n_cs_precedes;
	char	int_p_sep_by_space;
	char	int_n_sep_by_space;
	char	int_p_sign_posn;
	char	int_n_sign_posn;
};

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h"






























#line 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_locale.h"


struct lconv	*localeconv(void);

#line 42 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/locale.h"






char *	setlocale(int, const char *);

#line 21 "/opt/homebrew/include/libintl.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale.h"























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_xlocale.h"
























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_xlocale.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_xlocale.h"


#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_locale.h"



































#line 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_xlocale.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_locale_posix2008.h"






















#line 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_xlocale.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/__xlocale.h"
























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/__xlocale.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/__xlocale.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_mb_cur_max.h"
























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_mb_cur_max.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_mb_cur_max.h"




int		___mb_cur_max(void);


#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/__xlocale.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_locale_t.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/__xlocale.h"




int		___mb_cur_max_l(locale_t);


#line 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_xlocale.h"




extern const locale_t _c_locale;

struct lconv *	localeconv_l(locale_t);
const char *	querylocale(int, locale_t);

#line 25 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_ctype.h"
























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_ctype.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctype.h"
































































#line 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_ctype.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/__xlocale.h"






















#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_ctype.h"









unsigned long		___runetype_l(__darwin_ct_rune_t, locale_t);
__darwin_ct_rune_t	___tolower_l(__darwin_ct_rune_t, locale_t);
__darwin_ct_rune_t	___toupper_l(__darwin_ct_rune_t, locale_t);



int             	__maskrune_l(__darwin_ct_rune_t, unsigned long, locale_t);


inline int
__istype_l(__darwin_ct_rune_t _c, unsigned long _f, locale_t _l)
{
	return !!(isascii(_c) ? (_DefaultRuneLocale.__runetype[_c] & _f)
		: __maskrune_l(_c, _f, _l));
}

inline __darwin_ct_rune_t
__toupper_l(__darwin_ct_rune_t _c, locale_t _l)
{
	return isascii(_c) ? _DefaultRuneLocale.__mapupper[_c]
		: ___toupper_l(_c, _l);
}

inline __darwin_ct_rune_t
__tolower_l(__darwin_ct_rune_t _c, locale_t _l)
{
	return isascii(_c) ? _DefaultRuneLocale.__maplower[_c]
		: ___tolower_l(_c, _l);
}

inline int
__wcwidth_l(__darwin_ct_rune_t _c, locale_t _l)
{
	unsigned int _x;

	if (_c == 0)
		return (0);
	_x = (unsigned int)__maskrune_l(_c, 0xe0000000L|0x00040000L, _l);
	if ((_x & 0xe0000000L) != 0)
		return ((_x & 0xe0000000L) >> 30);
	return ((_x & 0x00040000L) != 0 ? 1 : -1);
}


inline int
digittoint_l(int c, locale_t l)
{
	return (__maskrune_l(c, 0x0F, l));
}

inline int
isalnum_l(int c, locale_t l)
{
	return (__istype_l(c, 0x00000100L|0x00000400L, l));
}

inline int
isalpha_l(int c, locale_t l)
{
	return (__istype_l(c, 0x00000100L, l));
}

inline int
isblank_l(int c, locale_t l)
{
	return (__istype_l(c, 0x00020000L, l));
}

inline int
iscntrl_l(int c, locale_t l)
{
	return (__istype_l(c, 0x00000200L, l));
}

inline int
isdigit_l(int c, locale_t l)
{
	return (__istype_l(c, 0x00000400L, l));
}

inline int
isgraph_l(int c, locale_t l)
{
	return (__istype_l(c, 0x00000800L, l));
}

inline int
ishexnumber_l(int c, locale_t l)
{
	return (__istype_l(c, 0x00010000L, l));
}

inline int
isideogram_l(int c, locale_t l)
{
	return (__istype_l(c, 0x00080000L, l));
}

inline int
islower_l(int c, locale_t l)
{
	return (__istype_l(c, 0x00001000L, l));
}

inline int
isnumber_l(int c, locale_t l)
{
	return (__istype_l(c, 0x00000400L, l));
}

inline int
isphonogram_l(int c, locale_t l)
{
	return (__istype_l(c, 0x00200000L, l));
}

inline int
isprint_l(int c, locale_t l)
{
	return (__istype_l(c, 0x00040000L, l));
}

inline int
ispunct_l(int c, locale_t l)
{
	return (__istype_l(c, 0x00002000L, l));
}

inline int
isrune_l(int c, locale_t l)
{
	return (__istype_l(c, 0xFFFFFFF0L, l));
}

inline int
isspace_l(int c, locale_t l)
{
	return (__istype_l(c, 0x00004000L, l));
}

inline int
isspecial_l(int c, locale_t l)
{
	return (__istype_l(c, 0x00100000L, l));
}

inline int
isupper_l(int c, locale_t l)
{
	return (__istype_l(c, 0x00008000L, l));
}

inline int
isxdigit_l(int c, locale_t l)
{
	return (__istype_l(c, 0x00010000L, l));
}

inline int
tolower_l(int c, locale_t l)
{
        return (__tolower_l(c, l));
}

inline int
toupper_l(int c, locale_t l)
{
        return (__toupper_l(c, l));
}

#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/___wctype.h"
























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/___wctype.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/___wctype.h"




















































#line 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/___wctype.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_ctype.h"






















#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/___wctype.h"




inline int
iswalnum_l(wint_t _wc, locale_t _l)
{
	return (__istype_l(_wc, 0x00000100L|0x00000400L, _l));
}

inline int
iswalpha_l(wint_t _wc, locale_t _l)
{
	return (__istype_l(_wc, 0x00000100L, _l));
}

inline int
iswcntrl_l(wint_t _wc, locale_t _l)
{
	return (__istype_l(_wc, 0x00000200L, _l));
}

inline int
iswctype_l(wint_t _wc, wctype_t _charclass, locale_t _l)
{
	return (__istype_l(_wc, _charclass, _l));
}

inline int
iswdigit_l(wint_t _wc, locale_t _l)
{
	return (__istype_l(_wc, 0x00000400L, _l));
}

inline int
iswgraph_l(wint_t _wc, locale_t _l)
{
	return (__istype_l(_wc, 0x00000800L, _l));
}

inline int
iswlower_l(wint_t _wc, locale_t _l)
{
	return (__istype_l(_wc, 0x00001000L, _l));
}

inline int
iswprint_l(wint_t _wc, locale_t _l)
{
	return (__istype_l(_wc, 0x00040000L, _l));
}

inline int
iswpunct_l(wint_t _wc, locale_t _l)
{
	return (__istype_l(_wc, 0x00002000L, _l));
}

inline int
iswspace_l(wint_t _wc, locale_t _l)
{
	return (__istype_l(_wc, 0x00004000L, _l));
}

inline int
iswupper_l(wint_t _wc, locale_t _l)
{
	return (__istype_l(_wc, 0x00008000L, _l));
}

inline int
iswxdigit_l(wint_t _wc, locale_t _l)
{
	return (__istype_l(_wc, 0x00010000L, _l));
}

inline wint_t
towlower_l(wint_t _wc, locale_t _l)
{
        return (__tolower_l(_wc, _l));
}

inline wint_t
towupper_l(wint_t _wc, locale_t _l)
{
        return (__toupper_l(_wc, _l));
}



wctype_t
	wctype_l(const char *, locale_t);

#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_inttypes.h"
























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_inttypes.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_inttypes.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h"




#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_inttypes.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stddef.h"



























































#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_inttypes.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/__xlocale.h"






















#line 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_inttypes.h"




intmax_t  strtoimax_l(const char * restrict nptr,
		char * * restrict endptr, int base, locale_t);
uintmax_t strtoumax_l(const char * restrict nptr,
		char * * restrict endptr, int base, locale_t);
intmax_t  wcstoimax_l(const wchar_t * restrict nptr,
		wchar_t * * restrict endptr, int base, locale_t);
uintmax_t wcstoumax_l(const wchar_t * restrict nptr,
		wchar_t * * restrict endptr, int base, locale_t);



#line 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_langinfo.h"
























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_langinfo.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_langinfo.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_nl_item.h"



























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_langinfo.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/__xlocale.h"






















#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_langinfo.h"




char *    nl_langinfo_l(nl_item, locale_t);

#line 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_stdio.h"
























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_stdio.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"































































#line 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_stdio.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/__xlocale.h"






















#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_stdio.h"





int	 fprintf_l(FILE * restrict, locale_t restrict, const char * restrict, ...)
        __attribute__((__format__ (__printf__, 3, 4)));
int	 fscanf_l(FILE * restrict, locale_t restrict, const char * restrict, ...)
        __attribute__((__format__ (__scanf__, 3, 4)));
int	 printf_l(locale_t restrict, const char * restrict, ...)
        __attribute__((__format__ (__printf__, 2, 3)));
int	 scanf_l(locale_t restrict, const char * restrict, ...)
        __attribute__((__format__ (__scanf__, 2, 3)));
int	 sprintf_l(char * restrict , locale_t restrict, const char * restrict, ...)
        __attribute__((__format__ (__printf__, 3, 4)))  ;
int	 sscanf_l(const char * restrict, locale_t restrict, const char * restrict, ...) 
        __attribute__((__format__ (__scanf__, 3, 4)));
int	 vfprintf_l(FILE * restrict, locale_t restrict, const char * restrict, va_list)
        __attribute__((__format__ (__printf__, 3, 0)));
int	 vprintf_l(locale_t restrict, const char * restrict, va_list)
        __attribute__((__format__ (__printf__, 2, 0)));
int	 vsprintf_l(char * restrict , locale_t restrict, const char * restrict, va_list)
        __attribute__((__format__ (__printf__, 3, 0)))  ;

int	 snprintf_l(char * restrict , size_t __maxlen, locale_t restrict, const char * restrict, ...)
        __attribute__((__format__ (__printf__, 4, 5)));
int	 vfscanf_l(FILE * restrict, locale_t restrict, const char * restrict, va_list)
        __attribute__((__format__ (__scanf__, 3, 0)));
int	 vscanf_l(locale_t restrict, const char * restrict, va_list)
        __attribute__((__format__ (__scanf__, 2, 0)));
int	 vsnprintf_l(char * restrict , size_t __maxlen, locale_t restrict, const char * restrict, va_list)
        __attribute__((__format__ (__printf__, 4, 0)));
int	 vsscanf_l(const char * restrict, locale_t restrict, const char * restrict, va_list)
        __attribute__((__format__ (__scanf__, 3, 0)));

int	 dprintf_l(int, locale_t restrict, const char * restrict, ...)
        __attribute__((__format__ (__printf__, 3, 4))) ;
int	 vdprintf_l(int, locale_t restrict, const char * restrict, va_list)
        __attribute__((__format__ (__printf__, 3, 0))) ;


int	 asprintf_l(char * * restrict, locale_t restrict, const char * restrict, ...)
        __attribute__((__format__ (__printf__, 3, 4)));
int	 vasprintf_l(char * * restrict, locale_t restrict, const char * restrict, va_list)
        __attribute__((__format__ (__printf__, 3, 0)));



#line 46 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_time.h"
























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_time.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_time.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"































#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_time.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_time.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/__xlocale.h"






















#line 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_time.h"




size_t	 strftime_l(char * restrict , size_t __n,
		const char * restrict, const struct tm * restrict, locale_t)
		__asm("_" "strftime_l" ) __attribute__((__format__ (__strftime__, 3, 0)));
char	*strptime_l(const char * restrict, const char * restrict,
		struct tm * restrict, locale_t) 
		__asm("_" "strptime_l" ) __attribute__((__format__ (__strftime__, 2, 0)));

#line 55 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_wchar.h"
























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_wchar.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"































































#line 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_wchar.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/__xlocale.h"






















#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_wchar.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_mbstate_t.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_wchar.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_wint_t.h"



























#line 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_wchar.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stddef.h"



























































#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_wchar.h"





wint_t	btowc_l(int, locale_t);
wint_t	fgetwc_l(FILE *, locale_t);
wchar_t	*	fgetws_l(wchar_t * restrict , int __n,
		FILE * restrict, locale_t);
wint_t	fputwc_l(wchar_t, FILE *, locale_t);
int	fputws_l(const wchar_t * restrict, FILE * restrict, locale_t);
int	fwprintf_l(FILE * restrict, locale_t, const wchar_t * restrict, ...);
int	fwscanf_l(FILE * restrict, locale_t, const wchar_t * restrict, ...);
wint_t	getwc_l(FILE *, locale_t);
wint_t	getwchar_l(locale_t);
size_t	mbrlen_l(const char * restrict , size_t __n,
	    mbstate_t * restrict, locale_t);
size_t	mbrtowc_l(wchar_t * restrict ,
	    const char * restrict , size_t __n,
		mbstate_t * restrict, locale_t);
int	mbsinit_l(const mbstate_t *, locale_t);
size_t	mbsrtowcs_l(wchar_t * restrict ,
	    const char ** restrict, size_t __len, mbstate_t * restrict,
		locale_t);
wint_t	putwc_l(wchar_t, FILE *, locale_t);
wint_t	putwchar_l(wchar_t, locale_t);
int	swprintf_l(wchar_t * restrict , size_t n, locale_t,
		const wchar_t * restrict, ...);
int	swscanf_l(const wchar_t * restrict, locale_t,
		const wchar_t * restrict, ...);
wint_t	ungetwc_l(wint_t, FILE *, locale_t);
int	vfwprintf_l(FILE * restrict, locale_t, const wchar_t * restrict,
		__darwin_va_list);
int	vswprintf_l(wchar_t * restrict , size_t n, locale_t,
		const wchar_t * restrict, __darwin_va_list);
int	vwprintf_l(locale_t, const wchar_t * restrict, __darwin_va_list);
size_t	wcrtomb_l(
		char * restrict  ,
		wchar_t, mbstate_t * restrict, locale_t);
int	wcscoll_l(const wchar_t *, const wchar_t *, locale_t);
size_t	wcsftime_l(wchar_t * restrict , size_t __n,
		const wchar_t * restrict, const struct tm * restrict, locale_t)
		__asm("_" "wcsftime_l" );
size_t	wcsrtombs_l(char * restrict ,
	    const wchar_t ** restrict, size_t __len, mbstate_t * restrict,
		locale_t);
double	wcstod_l(const wchar_t * restrict, wchar_t * * restrict,
		locale_t);
long	wcstol_l(const wchar_t * restrict, wchar_t * * restrict,
	    int, locale_t);
unsigned long
	wcstoul_l(const wchar_t * restrict, wchar_t * * restrict, int,
	    locale_t);
int	wcswidth_l(const wchar_t *, size_t __n, locale_t);
size_t	wcsxfrm_l(wchar_t * restrict ,
		const wchar_t * restrict, size_t __n, locale_t);
int	wctob_l(wint_t, locale_t);
int	wcwidth_l(wchar_t, locale_t);
int	wprintf_l(locale_t, const wchar_t * restrict, ...);
int	wscanf_l(locale_t, const wchar_t * restrict, ...);

 
 
 





int	vfwscanf_l(FILE * restrict, locale_t, const wchar_t * restrict,
		__darwin_va_list);
int	vswscanf_l(const wchar_t * restrict, locale_t,
		const wchar_t * restrict, __darwin_va_list);
int	vwscanf_l(locale_t, const wchar_t * restrict, __darwin_va_list);
float	wcstof_l(const wchar_t * restrict, wchar_t * * restrict,
		locale_t);
long double
	wcstold_l(const wchar_t * restrict, wchar_t * * restrict,
		locale_t);
long long
	wcstoll_l(const wchar_t * restrict, wchar_t * * restrict, int,
	    locale_t);
unsigned long long
	wcstoull_l(const wchar_t * restrict, wchar_t * * restrict,
	    int, locale_t);









size_t	mbsnrtowcs_l(wchar_t * restrict ,
		const char ** restrict, size_t, size_t __len, mbstate_t * restrict,
		locale_t);
int     wcscasecmp_l(const wchar_t *, const wchar_t *, locale_t) ;
int     wcsncasecmp_l(const wchar_t *,
		const wchar_t *, size_t n, locale_t) ;
size_t	wcsnrtombs_l(char * restrict, const wchar_t ** restrict, size_t,
	    size_t, mbstate_t * restrict, locale_t);







wchar_t	*fgetwln_l(FILE * restrict, size_t *, locale_t) ;





#line 58 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale.h"
#line 23 "/opt/homebrew/include/libintl.h"





















extern int libintl_version;






























































































extern char *gettext (const char *__msgid)
       __asm__ ("__USER_LABEL_PREFIX__" "libintl_gettext")
       __attribute__ ((__format_arg__ (1)));



extern char *dgettext (const char *__domainname, const char *__msgid)
       __asm__ ("__USER_LABEL_PREFIX__" "libintl_dgettext")
       __attribute__ ((__format_arg__ (2)));



extern char *dcgettext (const char *__domainname, const char *__msgid,
                        int __category)
       __asm__ ("__USER_LABEL_PREFIX__" "libintl_dcgettext")
       __attribute__ ((__format_arg__ (2)));




extern char *ngettext (const char *__msgid1, const char *__msgid2,
                       unsigned long int __n)
       __asm__ ("__USER_LABEL_PREFIX__" "libintl_ngettext")
       __attribute__ ((__format_arg__ (1))) __attribute__ ((__format_arg__ (2)));



extern char *dngettext (const char *__domainname,
                        const char *__msgid1, const char *__msgid2,
                        unsigned long int __n)
       __asm__ ("__USER_LABEL_PREFIX__" "libintl_dngettext")
       __attribute__ ((__format_arg__ (2))) __attribute__ ((__format_arg__ (3)));



extern char *dcngettext (const char *__domainname,
                         const char *__msgid1, const char *__msgid2,
                         unsigned long int __n, int __category)
       __asm__ ("__USER_LABEL_PREFIX__" "libintl_dcngettext")
       __attribute__ ((__format_arg__ (2))) __attribute__ ((__format_arg__ (3)));





extern char *textdomain (const char *__domainname)
       __asm__ ("__USER_LABEL_PREFIX__" "libintl_textdomain");



extern char *bindtextdomain (const char *__domainname, const char *__dirname)
       __asm__ ("__USER_LABEL_PREFIX__" "libintl_bindtextdomain");




extern char *bind_textdomain_codeset (const char *__domainname,
                                      const char *__codeset)
       __asm__ ("__USER_LABEL_PREFIX__" "libintl_bind_textdomain_codeset");




























extern char *setlocale (int, const char *)
       __asm__ ("__USER_LABEL_PREFIX__" "libintl_setlocale");



extern locale_t newlocale (int, const char *, locale_t)
       __asm__ ("__USER_LABEL_PREFIX__" "libintl_newlocale");











extern void
       libintl_set_relocation_prefix (const char *orig_prefix,
                                      const char *curr_prefix);


#line 50 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/limits.h"


























































#line 51 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/locale.h"



































#line 52 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"

























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"












    typedef float float_t;
    typedef double double_t;















extern int __math_errhandling(void);





















extern int __fpclassifyf(float);
extern int __fpclassifyd(double);
extern int __fpclassifyl(long double);













    





inline __attribute__ ((__always_inline__)) int __inline_isfinitef(float);
inline __attribute__ ((__always_inline__)) int __inline_isfinited(double);
inline __attribute__ ((__always_inline__)) int __inline_isfinitel(long double);
inline __attribute__ ((__always_inline__)) int __inline_isinff(float);
inline __attribute__ ((__always_inline__)) int __inline_isinfd(double);
inline __attribute__ ((__always_inline__)) int __inline_isinfl(long double);
inline __attribute__ ((__always_inline__)) int __inline_isnanf(float);
inline __attribute__ ((__always_inline__)) int __inline_isnand(double);
inline __attribute__ ((__always_inline__)) int __inline_isnanl(long double);
inline __attribute__ ((__always_inline__)) int __inline_isnormalf(float);
inline __attribute__ ((__always_inline__)) int __inline_isnormald(double);
inline __attribute__ ((__always_inline__)) int __inline_isnormall(long double);
inline __attribute__ ((__always_inline__)) int __inline_signbitf(float);
inline __attribute__ ((__always_inline__)) int __inline_signbitd(double);
inline __attribute__ ((__always_inline__)) int __inline_signbitl(long double);
    
inline __attribute__ ((__always_inline__)) int __inline_isfinitef(float __x) {
    return __x == __x && __builtin_fabsf(__x) != __builtin_inff();
}
inline __attribute__ ((__always_inline__)) int __inline_isfinited(double __x) {
    return __x == __x && __builtin_fabs(__x) != __builtin_inf();
}
inline __attribute__ ((__always_inline__)) int __inline_isfinitel(long double __x) {
    return __x == __x && __builtin_fabsl(__x) != __builtin_infl();
}
inline __attribute__ ((__always_inline__)) int __inline_isinff(float __x) {
    return __builtin_fabsf(__x) == __builtin_inff();
}
inline __attribute__ ((__always_inline__)) int __inline_isinfd(double __x) {
    return __builtin_fabs(__x) == __builtin_inf();
}
inline __attribute__ ((__always_inline__)) int __inline_isinfl(long double __x) {
    return __builtin_fabsl(__x) == __builtin_infl();
}
inline __attribute__ ((__always_inline__)) int __inline_isnanf(float __x) {
    return __x != __x;
}
inline __attribute__ ((__always_inline__)) int __inline_isnand(double __x) {
    return __x != __x;
}
inline __attribute__ ((__always_inline__)) int __inline_isnanl(long double __x) {
    return __x != __x;
}
inline __attribute__ ((__always_inline__)) int __inline_signbitf(float __x) {
    union { float __f; unsigned int __u; } __u;
    __u.__f = __x;
    return (int)(__u.__u >> 31);
}
inline __attribute__ ((__always_inline__)) int __inline_signbitd(double __x) {
    union { double __f; unsigned long long __u; } __u;
    __u.__f = __x;
    return (int)(__u.__u >> 63);
}
inline __attribute__ ((__always_inline__)) int __inline_signbitl(long double __x) {
    union { long double __f; unsigned long long __u;} __u;
    __u.__f = __x;
    return (int)(__u.__u >> 63);
}
inline __attribute__ ((__always_inline__)) int __inline_isnormalf(float __x) {
    return __inline_isfinitef(__x) && __builtin_fabsf(__x) >= 1.17549435e-38F;
}
inline __attribute__ ((__always_inline__)) int __inline_isnormald(double __x) {
    return __inline_isfinited(__x) && __builtin_fabs(__x) >= 2.2250738585072014e-308;
}
inline __attribute__ ((__always_inline__)) int __inline_isnormall(long double __x) {
    return __inline_isfinitel(__x) && __builtin_fabsl(__x) >= 3.36210314311209350626e-4932L;
}
    






    
extern float acosf(float);
extern double acos(double);
extern long double acosl(long double);
    
extern float asinf(float);
extern double asin(double);
extern long double asinl(long double);
    
extern float atanf(float);
extern double atan(double);
extern long double atanl(long double);
    
extern float atan2f(float, float);
extern double atan2(double, double);
extern long double atan2l(long double, long double);
    
extern float cosf(float);
extern double cos(double);
extern long double cosl(long double);
    
extern float sinf(float);
extern double sin(double);
extern long double sinl(long double);
    
extern float tanf(float);
extern double tan(double);
extern long double tanl(long double);
    
extern float acoshf(float);
extern double acosh(double);
extern long double acoshl(long double);
    
extern float asinhf(float);
extern double asinh(double);
extern long double asinhl(long double);
    
extern float atanhf(float);
extern double atanh(double);
extern long double atanhl(long double);
    
extern float coshf(float);
extern double cosh(double);
extern long double coshl(long double);
    
extern float sinhf(float);
extern double sinh(double);
extern long double sinhl(long double);
    
extern float tanhf(float);
extern double tanh(double);
extern long double tanhl(long double);
    
extern float expf(float);
extern double exp(double);
extern long double expl(long double);

extern float exp2f(float);
extern double exp2(double); 
extern long double exp2l(long double); 

extern float expm1f(float);
extern double expm1(double); 
extern long double expm1l(long double); 

extern float logf(float);
extern double log(double);
extern long double logl(long double);

extern float log10f(float);
extern double log10(double);
extern long double log10l(long double);

extern float log2f(float);
extern double log2(double);
extern long double log2l(long double);

extern float log1pf(float);
extern double log1p(double);
extern long double log1pl(long double);

extern float logbf(float);
extern double logb(double);
extern long double logbl(long double);

extern float modff(float, float *);
extern double modf(double, double *);
extern long double modfl(long double, long double *);

extern float ldexpf(float, int);
extern double ldexp(double, int);
extern long double ldexpl(long double, int);

extern float frexpf(float, int *);
extern double frexp(double, int *);
extern long double frexpl(long double, int *);

extern int ilogbf(float);
extern int ilogb(double);
extern int ilogbl(long double);

extern float scalbnf(float, int);
extern double scalbn(double, int);
extern long double scalbnl(long double, int);

extern float scalblnf(float, long int);
extern double scalbln(double, long int);
extern long double scalblnl(long double, long int);

extern float fabsf(float);
extern double fabs(double);
extern long double fabsl(long double);

extern float cbrtf(float);
extern double cbrt(double);
extern long double cbrtl(long double);

extern float hypotf(float, float);
extern double hypot(double, double);
extern long double hypotl(long double, long double);

extern float powf(float, float);
extern double pow(double, double);
extern long double powl(long double, long double);

extern float sqrtf(float);
extern double sqrt(double);
extern long double sqrtl(long double);

extern float erff(float);
extern double erf(double);
extern long double erfl(long double);

extern float erfcf(float);
extern double erfc(double);
extern long double erfcl(long double);




extern float lgammaf(float);
extern double lgamma(double);
extern long double lgammal(long double);

extern float tgammaf(float);
extern double tgamma(double);
extern long double tgammal(long double);

extern float ceilf(float);
extern double ceil(double);
extern long double ceill(long double);

extern float floorf(float);
extern double floor(double);
extern long double floorl(long double);

extern float nearbyintf(float);
extern double nearbyint(double);
extern long double nearbyintl(long double);

extern float rintf(float);
extern double rint(double);
extern long double rintl(long double);

extern long int lrintf(float);
extern long int lrint(double);
extern long int lrintl(long double);

extern float roundf(float);
extern double round(double);
extern long double roundl(long double);

extern long int lroundf(float);
extern long int lround(double);
extern long int lroundl(long double);
    


extern long long int llrintf(float);
extern long long int llrint(double);
extern long long int llrintl(long double);

extern long long int llroundf(float);
extern long long int llround(double);
extern long long int llroundl(long double);

extern float truncf(float);
extern double trunc(double);
extern long double truncl(long double);

extern float fmodf(float, float);
extern double fmod(double, double);
extern long double fmodl(long double, long double);

extern float remainderf(float, float);
extern double remainder(double, double);
extern long double remainderl(long double, long double);

extern float remquof(float, float, int *);
extern double remquo(double, double, int *);
extern long double remquol(long double, long double, int *);

extern float copysignf(float, float);
extern double copysign(double, double);
extern long double copysignl(long double, long double);

extern float nanf(const char *);
extern double nan(const char *);
extern long double nanl(const char *);

extern float nextafterf(float, float);
extern double nextafter(double, double);
extern long double nextafterl(long double, long double);

extern double nexttoward(double, long double);
extern float nexttowardf(float, long double);
extern long double nexttowardl(long double, long double);

extern float fdimf(float, float);
extern double fdim(double, double);
extern long double fdiml(long double, long double);

extern float fmaxf(float, float);
extern double fmax(double, double);
extern long double fmaxl(long double, long double);

extern float fminf(float, float);
extern double fmin(double, double);
extern long double fminl(long double, long double);

extern float fmaf(float, float, float);
extern double fma(double, double, double);
extern long double fmal(long double, long double, long double);





























extern float __exp10f(float) ;
extern double __exp10(double) ;





inline __attribute__ ((__always_inline__)) void __sincosf(float __x, float *__sinp, float *__cosp);
inline __attribute__ ((__always_inline__)) void __sincos(double __x, double *__sinp, double *__cosp);








extern float __cospif(float) ;
extern double __cospi(double) ;
extern float __sinpif(float) ;
extern double __sinpi(double) ;
extern float __tanpif(float) ;
extern double __tanpi(double) ;


extern _Float16 __fabsf16(_Float16) ;
extern _Float16 __hypotf16(_Float16, _Float16) ;
extern _Float16 __sqrtf16(_Float16) ;
extern _Float16 __ceilf16(_Float16) ;
extern _Float16 __floorf16(_Float16) ;
extern _Float16 __rintf16(_Float16) ;
extern _Float16 __roundf16(_Float16) ;
extern _Float16 __truncf16(_Float16) ;
extern _Float16 __copysignf16(_Float16, _Float16) ;
extern _Float16 __nextafterf16(_Float16, _Float16) ;
extern _Float16 __fmaxf16(_Float16, _Float16) ;
extern _Float16 __fminf16(_Float16, _Float16) ;
extern _Float16 __fmaf16(_Float16, _Float16, _Float16) ;










inline __attribute__ ((__always_inline__)) void __sincospif(float __x, float *__sinp, float *__cosp);
inline __attribute__ ((__always_inline__)) void __sincospi(double __x, double *__sinp, double *__cosp);






struct __float2 { float __sinval; float __cosval; };
struct __double2 { double __sinval; double __cosval; };

extern struct __float2 __sincosf_stret(float);
extern struct __double2 __sincos_stret(double);
extern struct __float2 __sincospif_stret(float);
extern struct __double2 __sincospi_stret(double);

inline __attribute__ ((__always_inline__)) void __sincosf(float __x, float *__sinp, float *__cosp) {
    const struct __float2 __stret = __sincosf_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

inline __attribute__ ((__always_inline__)) void __sincos(double __x, double *__sinp, double *__cosp) {
    const struct __double2 __stret = __sincos_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

inline __attribute__ ((__always_inline__)) void __sincospif(float __x, float *__sinp, float *__cosp) {
    const struct __float2 __stret = __sincospif_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

inline __attribute__ ((__always_inline__)) void __sincospi(double __x, double *__sinp, double *__cosp) {
    const struct __double2 __stret = __sincospi_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}





extern double j0(double) ;
extern double j1(double) ;
extern double jn(int, double) ;
extern double y0(double) ;
extern double y1(double) ;
extern double yn(int, double) ;
extern double scalb(double, double); 
extern int signgam;















struct exception {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
};





#line 54 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/memory.h"



































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h"

























































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_string.h"


























































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_string.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 63 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_string.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_string.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_string.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"































#line 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_string.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h"






























#line 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_string.h"






void *
		memchr(const void * __s, int __c, size_t __n);
int	 memcmp(const void * __s1, const void * __s2,
		size_t __n);
void *
		memcpy(void * __dst, const void * __src,
		size_t __n);
void *
		memmove(void * __dst,
		const void * __src, size_t __len);
void *
		memset(void * __b, int __c, size_t __len);
char *
		strcat(char * __s1, const char *__s2)
		;
char * strchr(const char *__s, int __c);
int	 strcmp(const char *__s1, const char *__s2);
int	 strcoll(const char *__s1, const char *__s2);
char *
		strcpy(char * __dst, const char *__src)
		;
size_t	 strcspn(const char *__s, const char *__charset);
char *	strerror(int __errnum) __asm("_" "strerror" );
size_t	 strlen(const char *__s);
char *
		strncat(char * __s1,
		const char * __s2, size_t __n)
		;
int	 strncmp(const char * __s1,
		const char * __s2, size_t __n);
char *
		strncpy(char * __dst,
        const char * __src, size_t __n)
        ;
char *    strpbrk(const char *__s, const char *__charset);
char *    strrchr(const char *__s, int __c);
size_t	 strspn(const char *__s, const char *__charset);
char *    strstr(const char *__big, const char *__little);
char *    strtok(char * __str, const char *__sep);
size_t	 strxfrm(char * __s1, const char *__s2, size_t __n);











char *
        strtok_r(char * __str, const char *__sep,
        char * *__lasts);









int	 strerror_r(int __errnum, char * __strerrbuf,
        size_t __buflen);
char *    strdup(const char *__s1);
void * 
        memccpy(void * __dst, const void * __src,
        int __c, size_t __n);









char *
        stpcpy(char * __dst, const char *__src) ;
char *
        stpncpy(char * __dst,
        const char * __src, size_t __n)
        
        ;
char *    strndup(const char * __s1, size_t __n) ;
size_t   strnlen(const char * __s1, size_t __n) ;
char *    strsignal(int __sig);




#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_rsize_t.h"






























#line 173 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_string.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_errno_t.h"


























#line 174 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_string.h"


errno_t	memset_s(void * __s, rsize_t __smax, int __c, rsize_t __n) ;




#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ssize_t.h"


























#line 184 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_string.h"


void *
        memmem(const void * __big, size_t __big_len,
        const void * __little, size_t __little_len) ;
void	 memset_pattern4(void * __b, const void * __pattern4, size_t __len) ;
void	 memset_pattern8(void * __b, const void * __pattern8, size_t __len) ;
void	 memset_pattern16(void * __b, const void * __pattern16, size_t __len) ;

char *
        strcasestr(const char *__big, const char *__little);
 
 
char *
        strchrnul(const char *__s, int __c);
char *
        strnstr(const char * __big, const char *__little, size_t __len);
size_t	 strlcat(char * __dst, const char *__source, size_t __size);
size_t	 strlcpy(char * __dst, const char *__source, size_t __size);
void	 strmode(int __mode, char * __bp);
char *
        strsep(char * *__stringp, const char *__delim);


void	 swab(const void * restrict, void * restrict, ssize_t __len);

 
 
int	timingsafe_bcmp(const void * __b1, const void * __b2, size_t __len);

 
 
int 	 strsignal_r(int __sig, char * __strsignalbuf, size_t __buflen);





#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_strings.h"


























































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_strings.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 63 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_strings.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_strings.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_strings.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"































#line 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_strings.h"






int	 ffs(int);
int	 strcasecmp(const char *, const char *);
int	 strncasecmp(const char *, const char *, size_t);




int	 ffsl(long) ;
int	 ffsll(long long) ;
int	 fls(int) ;
int	 flsl(long) ;
int	 flsll(long long) ;



#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_strings.h"

























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_strings.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_strings.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_common.h"






















#line 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_strings.h"





#line 99 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_strings.h"
#line 223 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_string.h"



#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_string.h"

























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_string.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_string.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_common.h"






















#line 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_string.h"










































































#line 229 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_string.h"
#line 59 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_string.h"
























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_string.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_string.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"































#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_string.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/__xlocale.h"






















#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_string.h"




int	 strcoll_l(const char *, const char *, locale_t);
size_t	 strxfrm_l(char *, const char *, size_t __n, locale_t);
int	 strcasecmp_l(const char *, const char *, locale_t);
char    *strcasestr_l(const char *, const char *, locale_t);
int	 strncasecmp_l(const char *,
        const char *, size_t, locale_t);

#line 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h"
#line 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/memory.h"
#line 56 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/menu.h"




































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/curses.h"



































#line 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/menu.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/eti.h"

































#line 44 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/menu.h"


typedef int Menu_Options;
typedef int Item_Options;





typedef struct
{
  const char* str;
  unsigned short length;
} TEXT;

typedef struct tagITEM 
{
  TEXT           name;        
  TEXT           description;  
  struct tagMENU *imenu;      
  void           *userptr;     
  Item_Options   opt;          
  short          index;       
  short          y;           
  short          x;
  _Bool           value;       
                             
  struct tagITEM *left;       
  struct tagITEM *right;
  struct tagITEM *up;
  struct tagITEM *down;

} ITEM;

typedef void (*Menu_Hook)(struct tagMENU *);

typedef struct tagMENU 
{
  short          height;                
  short          width;                 
  short          rows;                  
  short          cols;                  
  short          frows;                 
  short          fcols;                 
  short          arows;                 
  short          namelen;               
  short          desclen;               
  short          marklen;               
  short          itemlen;               
  short          spc_desc;              
  short          spc_cols;              
  short          spc_rows;               
  char          *pattern;               
  short          pindex;                
  WINDOW        *win;                   
  WINDOW        *sub;                   
  WINDOW        *userwin;               
  WINDOW        *usersub;               
  ITEM          **items;                 
  short          nitems;                
  ITEM          *curitem;               
  short          toprow;                
  chtype         fore;                  
  chtype         back;                  
  chtype         grey;                  
  unsigned char  pad;                   

  Menu_Hook      menuinit;              
  Menu_Hook      menuterm;
  Menu_Hook      iteminit;
  Menu_Hook      itemterm;

  void          *userptr;               
  char          *mark;                  

  Menu_Options   opt;                   
  unsigned short status;                

} MENU;














extern  ITEM ** 	menu_items (const MENU *);
extern  ITEM * 	current_item (const MENU *);
extern  ITEM * 	new_item (const char *,const char *);

extern  MENU * 	new_menu (ITEM **);

extern  Item_Options 	item_opts (const ITEM *);
extern  Menu_Options 	menu_opts (const MENU *);

extern  Menu_Hook 	item_init (const MENU *);
extern  Menu_Hook 	item_term (const MENU *);
extern  Menu_Hook 	menu_init (const MENU *);
extern  Menu_Hook 	menu_term (const MENU *);

extern  WINDOW * 	menu_sub (const MENU *);
extern  WINDOW * 	menu_win (const MENU *);

extern  const char * 	item_description (const ITEM *);
extern  const char * 	item_name (const ITEM *);
extern  const char * 	menu_mark (const MENU *);
extern  const char * 	menu_request_name (int);

extern  char * 	menu_pattern (const MENU *);

extern  void * 	menu_userptr (const MENU *);
extern  void * 	item_userptr (const ITEM *);

extern  chtype 	menu_back (const MENU *);
extern  chtype 	menu_fore (const MENU *);
extern  chtype 	menu_grey (const MENU *);

extern  int 	free_item (ITEM *);
extern  int 	free_menu (MENU *);
extern  int 	item_count (const MENU *);
extern  int 	item_index (const ITEM *);
extern  int 	item_opts_off (ITEM *,Item_Options);
extern  int 	item_opts_on (ITEM *,Item_Options);
extern  int 	menu_driver (MENU *,int);
extern  int 	menu_opts_off (MENU *,Menu_Options);
extern  int 	menu_opts_on (MENU *,Menu_Options);
extern  int 	menu_pad (const MENU *);
extern  int 	pos_menu_cursor (const MENU *);
extern  int 	post_menu (MENU *);
extern  int 	scale_menu (const MENU *,int *,int *);
extern  int 	set_current_item (MENU *menu,ITEM *item);
extern  int 	set_item_init (MENU *, Menu_Hook);
extern  int 	set_item_opts (ITEM *,Item_Options);
extern  int 	set_item_term (MENU *, Menu_Hook);
extern  int 	set_item_userptr (ITEM *, void *);
extern  int 	set_item_value (ITEM *,_Bool);
extern  int 	set_menu_back (MENU *,chtype);
extern  int 	set_menu_fore (MENU *,chtype);
extern  int 	set_menu_format (MENU *,int,int);
extern  int 	set_menu_grey (MENU *,chtype);
extern  int 	set_menu_init (MENU *, Menu_Hook);
extern  int 	set_menu_items (MENU *,ITEM **);
extern  int 	set_menu_mark (MENU *, const char *);
extern  int 	set_menu_opts (MENU *,Menu_Options);
extern  int 	set_menu_pad (MENU *,int);
extern  int 	set_menu_pattern (MENU *,const char *);
extern  int 	set_menu_sub (MENU *,WINDOW *);
extern  int 	set_menu_term (MENU *, Menu_Hook);
extern  int 	set_menu_userptr (MENU *,void *);
extern  int 	set_menu_win (MENU *,WINDOW *);
extern  int 	set_top_row (MENU *,int);
extern  int 	top_row (const MENU *);
extern  int 	unpost_menu (MENU *);
extern  int 	menu_request_by_name (const char *);
extern  int 	set_menu_spacing (MENU *,int,int,int);
extern  int 	menu_spacing (const MENU *,int *,int *,int *);


extern  _Bool 	item_value (const ITEM *);
extern  _Bool 	item_visible (const ITEM *);

extern  void 	menu_format (const MENU *,int *,int *);


#line 57 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/monetary.h"




























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_monetary.h"





























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_monetary.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_monetary.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_monetary.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"































#line 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_monetary.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ssize_t.h"


























#line 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_monetary.h"




ssize_t	strfmon(char *, size_t __maxsize, const char *, ...);

#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/monetary.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_monetary.h"
























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_monetary.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_monetary.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"































#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_monetary.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ssize_t.h"


























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_monetary.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/__xlocale.h"






















#line 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_monetary.h"




ssize_t	strfmon_l(char *, size_t __maxsize, locale_t, const char *, ...)
		__attribute__((__format__ (__strfmon__, 4, 5)));

#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/monetary.h"
#line 59 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/ncurses.h"



































#line 61 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/ncurses_dll.h"




























#line 62 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/netdb.h"



















































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 87 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/netdb.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"































#line 88 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/netdb.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_socklen_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"





























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_socklen_t.h"
typedef __darwin_socklen_t      socklen_t;
#line 89 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/netdb.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h"




#line 91 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/netdb.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/netinet/in.h"
































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/appleapiopts.h"



























#line 68 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/netinet/in.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h"




#line 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/netinet/in.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/netinet/in.h"


#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_in_addr_t.h"


























#line 74 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/netinet/in.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_in_port_t.h"


























#line 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/netinet/in.h"






#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/socket.h"








































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"



































































#line 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/socket.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/socket.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/constrained_ctypes.h"





























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/constrained_ctypes.h"














































































































































































































































































































































































































































































































#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wextra-semi"
#pragma clang diagnostic pop





#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wextra-semi"
#pragma clang diagnostic pop
#line 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/socket.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_param.h"




























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_param.h"






#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"


#line 11 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_param.h"








#line 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_param.h"
#line 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/socket.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/net/net_kev.h"









































#line 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/socket.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 82 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/socket.h"









#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_gid_t.h"


























#line 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/socket.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_off_t.h"


























#line 93 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/socket.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_pid_t.h"


























#line 94 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/socket.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_sa_family_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"





























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_sa_family_t.h"
typedef __uint8_t               sa_family_t;
#line 95 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/socket.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_socklen_t.h"


























#line 96 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/socket.h"


#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"































#line 99 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/socket.h"


#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ssize_t.h"


























#line 102 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/socket.h"




#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_iovec_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"































#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_iovec_t.h"
struct iovec {
	void *   iov_base;      
	size_t   iov_len;       
};
#line 107 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/socket.h"








                                        







































































































typedef __uint32_t sae_associd_t;

typedef __uint32_t sae_connid_t;




typedef struct sa_endpoints {
	unsigned int            sae_srcif;      
	const struct sockaddr   *sae_srcaddr;   
	socklen_t               sae_srcaddrlen; 
	const struct sockaddr   *sae_dstaddr;   
	socklen_t               sae_dstaddrlen; 
} sa_endpoints_t;




struct  linger {
	int     l_onoff;                
	int     l_linger;               
};






struct so_np_extensions {
	u_int32_t       npx_flags;
	u_int32_t       npx_mask;
};
















struct sockaddr {
	__uint8_t       sa_len;         
	sa_family_t     sa_family;      
	char            sa_data[14];    
};
;






struct __sockaddr_header {
	__uint8_t           sa_len;
	sa_family_t         sa_family;
};






struct sockproto {
	__uint16_t      sp_family;              
	__uint16_t      sp_protocol;            
};








struct sockaddr_storage {
	__uint8_t       ss_len;         
	sa_family_t     ss_family;      
	char                    __ss_pad1[((sizeof(__int64_t)) - sizeof(__uint8_t) - sizeof(sa_family_t))];
	__int64_t       __ss_align;     
	char                    __ss_pad2[(128 - sizeof(__uint8_t) - sizeof(sa_family_t) - 	                        ((sizeof(__int64_t)) - sizeof(__uint8_t) - sizeof(sa_family_t)) - (sizeof(__int64_t)))];
};
;







































struct msghdr {
	void            * msg_name; 
	socklen_t       msg_namelen;    
	struct          iovec *msg_iov; 
	int             msg_iovlen;     
	void            * msg_control; 
	socklen_t       msg_controllen; 
	int             msg_flags;      
};










struct cmsghdr {
	socklen_t       cmsg_len;       
	int             cmsg_level;     
	int             cmsg_type;      

};




























struct sf_hdtr {
	struct iovec *headers;  
	int hdr_cnt;            
	struct iovec *trailers; 
	int trl_cnt;            
};





int     accept(int, struct sockaddr * restrict, socklen_t * restrict)
__asm("_" "accept"  );
int     bind(int, const struct sockaddr *, socklen_t) __asm("_" "bind" );
int     connect(int, const struct sockaddr *, socklen_t) __asm("_" "connect"  );
int     getpeername(int, struct sockaddr * restrict, socklen_t * restrict)
__asm("_" "getpeername" );
int     getsockname(int, struct sockaddr * restrict, socklen_t * restrict)
__asm("_" "getsockname" );
int     getsockopt(int, int, int, void * restrict, socklen_t * restrict);
int     listen(int, int) __asm("_" "listen" );
ssize_t recv(int, void *, size_t, int) __asm("_" "recv"  );
ssize_t recvfrom(int, void *, size_t, int, struct sockaddr * restrict,
    socklen_t * restrict) __asm("_" "recvfrom"  );
ssize_t recvmsg(int, struct msghdr *, int) __asm("_" "recvmsg"  );
ssize_t send(int, const void *, size_t, int) __asm("_" "send"  );
ssize_t sendmsg(int, const struct msghdr *, int) __asm("_" "sendmsg"  );
ssize_t sendto(int, const void *, size_t,
    int, const struct sockaddr *, socklen_t) __asm("_" "sendto"  );
int     setsockopt(int, int, int, const void *, socklen_t);
int     shutdown(int, int);
int     sockatmark(int) ;
int     socket(int, int, int);
int     socketpair(int, int, int, int *) __asm("_" "socketpair" );


void    pfctlinput(int, struct sockaddr *);


int connectx(int, const sa_endpoints_t *, sae_associd_t, unsigned int,
    const struct iovec *, unsigned int, size_t *, sae_connid_t *);


int disconnectx(int, sae_associd_t, sae_connid_t);



#line 82 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/netinet/in.h"




#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/endian.h"





























#line 87 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/netinet/in.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_endian.h"
























































































#line 88 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/netinet/in.h"




















































































struct in_addr {
	in_addr_t s_addr;
};























struct sockaddr_in {
	__uint8_t       sin_len;
	sa_family_t     sin_family;
	in_port_t       sin_port;
	struct  in_addr sin_addr;
	char            sin_zero[8];
};










struct ip_opts {
	struct  in_addr ip_dst;         
	char    ip_opts[40];            
};





































struct ip_mreq {
	struct  in_addr imr_multiaddr;  
	struct  in_addr imr_interface;  
};






struct ip_mreqn {
	struct  in_addr imr_multiaddr;  
	struct  in_addr imr_address;    
	int             imr_ifindex;    
};

#pragma pack(4)



struct ip_mreq_source {
	struct  in_addr imr_multiaddr;  
	struct  in_addr imr_sourceaddr; 
	struct  in_addr imr_interface;  
};





struct group_req {
	uint32_t                gr_interface;   
	struct sockaddr_storage gr_group;       
};

struct group_source_req {
	uint32_t                gsr_interface;  
	struct sockaddr_storage gsr_group;      
	struct sockaddr_storage gsr_source;     
};






struct __msfilterreq {
	uint32_t                 msfr_ifindex;  
	uint32_t                 msfr_fmode;    
	uint32_t                 msfr_nsrcs;    
	uint32_t                __msfr_align;
	struct sockaddr_storage  msfr_group;    
	struct sockaddr_storage *msfr_srcs;
};


#pragma pack()
struct sockaddr;






int     setipv4sourcefilter(int, struct in_addr, struct in_addr, uint32_t,
    uint32_t, struct in_addr *) ;
int     getipv4sourcefilter(int, struct in_addr, struct in_addr, uint32_t *,
    uint32_t *, struct in_addr *) ;
int     setsourcefilter(int, uint32_t, struct sockaddr *, socklen_t,
    uint32_t, uint32_t, struct sockaddr_storage *) ;
int     getsourcefilter(int, uint32_t, struct sockaddr *, socklen_t,
    uint32_t *, uint32_t *, struct sockaddr_storage *) ;






























struct in_pktinfo {
	unsigned int    ipi_ifindex;    
	struct in_addr  ipi_spec_dst;   
	struct in_addr  ipi_addr;       
};














#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/netinet6/in6.h"





























































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/appleapiopts.h"



























#line 100 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/netinet6/in6.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 102 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/netinet6/in6.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_sa_family_t.h"


























#line 103 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/netinet6/in6.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_in_port_t.h"


























#line 104 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/netinet6/in6.h"







































typedef struct in6_addr {
	union {
		__uint8_t   __u6_addr8[16];
		__uint16_t  __u6_addr16[8];
		__uint32_t  __u6_addr32[4];
	} __u6_addr;                    
} in6_addr_t;






struct sockaddr_in6 {
	__uint8_t       sin6_len;       
	sa_family_t     sin6_family;    
	in_port_t       sin6_port;      
	__uint32_t      sin6_flowinfo;  
	struct in6_addr sin6_addr;      
	__uint32_t      sin6_scope_id;  
};








extern const struct in6_addr in6addr_any;
extern const struct in6_addr in6addr_loopback;
extern const struct in6_addr in6addr_nodelocal_allnodes;
extern const struct in6_addr in6addr_linklocal_allnodes;
extern const struct in6_addr in6addr_linklocal_allrouters;
extern const struct in6_addr in6addr_linklocal_allv2routers;


























































































































struct ipv6_mreq {
	struct in6_addr ipv6mr_multiaddr;
	unsigned int    ipv6mr_interface;
};




struct in6_pktinfo {
	struct in6_addr ipi6_addr;      
	unsigned int    ipi6_ifindex;   
};




struct ip6_mtuinfo {
	struct sockaddr_in6 ip6m_addr;  
	uint32_t ip6m_mtu;
};

























struct cmsghdr;

extern int inet6_option_space(int);
extern int inet6_option_init(void *, struct cmsghdr **, int);
extern int inet6_option_append(struct cmsghdr *, const __uint8_t *, int, int);
extern __uint8_t *inet6_option_alloc(struct cmsghdr *, int, int, int);
extern int inet6_option_next(const struct cmsghdr *, __uint8_t **);
extern int inet6_option_find(const struct cmsghdr *, __uint8_t **, int);

extern size_t inet6_rthdr_space(int, int);
extern struct cmsghdr *inet6_rthdr_init(void *, int);
extern int inet6_rthdr_add(struct cmsghdr *, const struct in6_addr *,
    unsigned int);
extern int inet6_rthdr_lasthop(struct cmsghdr *, unsigned int);
extern int inet6_rthdr_segments(const struct cmsghdr *);
extern struct in6_addr *inet6_rthdr_getaddr(struct cmsghdr *, int);
extern int inet6_rthdr_getflags(const struct cmsghdr *, int);

extern int inet6_opt_init(void *, socklen_t);
extern int inet6_opt_append(void *, socklen_t, int, __uint8_t, socklen_t,
    __uint8_t, void **);
extern int inet6_opt_finish(void *, socklen_t, int);
extern int inet6_opt_set_val(void *, int, void *, socklen_t);

extern int inet6_opt_next(void *, socklen_t, int, __uint8_t *, socklen_t *,
    void **);
extern int inet6_opt_find(void *, socklen_t, int, __uint8_t, socklen_t *,
    void **);
extern int inet6_opt_get_val(void *, int, void *, socklen_t);
extern socklen_t inet6_rth_space(int, int);
extern void *inet6_rth_init(void *, socklen_t, int, int);
extern int inet6_rth_add(void *, const struct in6_addr *);
extern int inet6_rth_reverse(const void *, void *);
extern int inet6_rth_segments(const void *);
extern struct in6_addr *inet6_rth_getaddr(const void *, int);

#line 654 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/netinet/in.h"



int        bindresvport(int, struct sockaddr_in *);
struct sockaddr;
int        bindresvport_sa(int, struct sockaddr *);


#line 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/netdb.h"


extern int h_errno;







struct hostent {
	char	*h_name;	
	char	**h_aliases;	
	int	h_addrtype;	
	int	h_length;	
	char	**h_addr_list;	
};





struct netent {
	char		*n_name;	
	char		**n_aliases;	
	int		n_addrtype;	
	uint32_t	n_net;		
};

struct servent {
	char	*s_name;	
	char	**s_aliases;	
	int	s_port;		
	char	*s_proto;	
};

struct protoent {
	char	*p_name;	
	char	**p_aliases;	
	int	p_proto;	
};

struct addrinfo {
	int	ai_flags;	
	int	ai_family;	
	int	ai_socktype;	
	int	ai_protocol;	
	socklen_t ai_addrlen;	
	char	*ai_canonname;	
	struct	sockaddr *ai_addr;	
	struct	addrinfo *ai_next;	
};

struct rpcent {
        char    *r_name;        
        char    **r_aliases;    
        int     r_number;       
};
































void		endhostent(void);
void		endnetent(void);
void		endprotoent(void);
void		endservent(void);

void		freeaddrinfo(struct addrinfo *);
const char	*gai_strerror(int);
int		getaddrinfo(const char * restrict, const char * restrict,
			    const struct addrinfo * restrict,
			    struct addrinfo ** restrict);
struct hostent	*gethostbyaddr(const void *, socklen_t, int);
struct hostent	*gethostbyname(const char *);
struct hostent	*gethostent(void);
int             getnameinfo(const struct sockaddr * restrict, socklen_t,
			      char * restrict, socklen_t, char * restrict,
			      socklen_t, int);
struct netent	*getnetbyaddr(uint32_t, int);
struct netent	*getnetbyname(const char *);
struct netent	*getnetent(void);
struct protoent	*getprotobyname(const char *);
struct protoent	*getprotobynumber(int);
struct protoent	*getprotoent(void);
struct servent	*getservbyname(const char *, const char *);
struct servent	*getservbyport(int, const char *);
struct servent	*getservent(void);
void		sethostent(int);

void		setnetent(int);
void		setprotoent(int);
void		setservent(int);

void		freehostent(struct hostent *);
struct hostent	*gethostbyname2(const char *, int);
struct hostent	*getipnodebyaddr(const void *, size_t, int, int *);
struct hostent	*getipnodebyname(const char *, int, int, int *);
struct rpcent	*getrpcbyname(const char *name);
struct rpcent	*getrpcbynumber(int number);
struct rpcent	*getrpcent(void);
void		setrpcent(int stayopen);
void		endrpcent(void);
void		herror(const char *);
const char	*hstrerror(int);
int			innetgr(const char *, const char *, const char *, const char *);
int			getnetgrent(char **, char **, char **);
void		endnetgrent(void);
void		setnetgrent(const char *);


#line 63 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/nl_types.h"









































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 45 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/nl_types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"



































































#line 46 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/nl_types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 47 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/nl_types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 48 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/nl_types.h"





typedef struct __nl_cat_d {
	void *	__data;
	int	__size;
} *nl_catd;

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_nl_item.h"



























#line 98 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/nl_types.h"


nl_catd  catopen(const char *, int);
char *	catgets(nl_catd, int, int, const char *)
	__attribute__((__format_arg__(4)));
int	 catclose(nl_catd);

#line 64 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/panel.h"







































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/curses.h"



































#line 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/panel.h"

typedef struct panel
{
  WINDOW *win;
  struct panel *below;
  struct panel *above;
   void *user;
} PANEL;


extern  WINDOW*  panel_window (const PANEL *);
extern  void     update_panels (void);
extern  int      hide_panel (PANEL *);
extern  int      show_panel (PANEL *);
extern  int      del_panel (PANEL *);
extern  int      top_panel (PANEL *);
extern  int      bottom_panel (PANEL *);
extern  PANEL*   new_panel (WINDOW *);
extern  PANEL*   panel_above (const PANEL *);
extern  PANEL*   panel_below (const PANEL *);
extern  int      set_panel_userptr (PANEL *,  void *);
extern   void*  panel_userptr (const PANEL *);
extern  int      move_panel (PANEL *, int, int);
extern  int      replace_panel (PANEL *,WINDOW *);
extern  int      panel_hidden (const PANEL *);




#line 67 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/paths.h"



































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/paths.h"






























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/appleapiopts.h"



























#line 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/paths.h"






#line 100 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/paths.h"
#line 68 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/poll.h"






















#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/poll.h"













































































struct pollfd {
	int     fd;
	short   events;
	short   revents;
};

typedef unsigned int nfds_t;


#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 105 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/poll.h"







extern int poll(struct pollfd *, nfds_t, int) __asm("_" "poll"  );



#line 24 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/poll.h"


#line 69 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/printf.h"













































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h"




























































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"































































#line 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_stdio.h"






















#line 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h"
#line 49 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/printf.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/wchar.h"


































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"

































































#line 68 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/wchar.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_wchar.h"






















#line 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/wchar.h"
#line 50 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/printf.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale.h"























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_xlocale.h"






















#line 25 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_ctype.h"






















#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/___wctype.h"






















#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_inttypes.h"






















#line 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_langinfo.h"






















#line 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_monetary.h"






















#line 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_stdio.h"






















#line 46 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_string.h"






















#line 52 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_time.h"






















#line 55 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_wchar.h"






















#line 58 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale.h"
#line 51 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/printf.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 52 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/printf.h"









struct printf_info {
	
	void		*context;		
	locale_t	loc;			
	wchar_t		vsep;			
						

	
	int		prec;			
	int		width;			
	wchar_t		spec;			
	wchar_t		pad;			
						

	
	wchar_t		signchar;		

	
	unsigned	is_long_double	:1;	
	unsigned	is_char		:1;	
	unsigned	is_short	:1;	
	unsigned	is_long		:1;	
	unsigned	alt		:1;	
	unsigned	space		:1;	
	unsigned	left		:1;	
	unsigned	showsign	:1;	
	unsigned	group		:1;	
	unsigned	extra		:1;	
	unsigned	wide		:1;	

	
	unsigned	is_quad		:1;	
	unsigned	is_intmax	:1;	
	unsigned	is_ptrdiff	:1;	
	unsigned	is_size		:1;	

	
	unsigned	is_vec		:1;	

	
	int		sofar;
	unsigned	get_width;
	unsigned	get_prec;
	const char	*begin;
	const char	*end;
	void 		*arg[2];
};

enum {
	PA_INT		= (1 << 0),	
	PA_CHAR		= (1 << 1),	
	PA_WCHAR	= (1 << 2),	
	PA_STRING	= (1 << 3),	
	PA_WSTRING	= (1 << 4),	
	PA_POINTER	= (1 << 5),	
	PA_FLOAT	= (1 << 6),	
	PA_DOUBLE	= (1 << 7), 	
	PA_VECTOR	= (1 << 8), 	
};




typedef int printf_arginfo_function(const struct printf_info *__info,
	     size_t __n, int *__argtypes);
typedef int printf_function(FILE *__stream,
	     const struct printf_info *__info, const void *const *__args);









struct _printf_domain; 
typedef struct _printf_domain *printf_domain_t;



printf_domain_t	copy_printf_domain(printf_domain_t __domain)
		 __attribute__((__nonnull__(1)))
		 ;
void		free_printf_domain(printf_domain_t __domain)
		 ;
printf_domain_t	new_printf_domain(void)
		 __attribute__((__malloc__))
		 ;
int	register_printf_domain_function(printf_domain_t __domain,
	 int __spec, printf_function *__render,
	 printf_arginfo_function *__arginfo, void *__context)
	 __attribute__((__nonnull__(1)))
	 ;
int	register_printf_domain_render_std(printf_domain_t __domain,
	 const char *__specs)
	 __attribute__((__nonnull__(1)))
	 ;


int	asxprintf(char ** restrict __ret,
	 printf_domain_t restrict __domain, locale_t restrict __loc,
	 const char * restrict __format, ...)
	 __attribute__((__nonnull__(1, 2, 4)))
	 ;
int	dxprintf(int __fd, printf_domain_t restrict __domain,
	 locale_t restrict __loc, const char * restrict __format, ...)
	 __attribute__((__nonnull__(2, 4)))
	 ;
int	fxprintf(FILE * restrict __stream,
	 printf_domain_t restrict __domain, locale_t restrict __loc,
	 const char * restrict __format, ...)
	 __attribute__((__nonnull__(1, 2, 4)))
	 ;
int	sxprintf(char * restrict __str, size_t __size,
	 printf_domain_t restrict __domain, locale_t restrict __loc,
	 const char * restrict __format, ...)
	 __attribute__((__nonnull__(1, 3, 5)))
	 ;
int	xprintf(printf_domain_t restrict __domain,
	 locale_t restrict __loc, const char * restrict __format, ...)
	 __attribute__((__nonnull__(1, 3)))
	 ;

int	vasxprintf(char ** restrict __ret,
	 printf_domain_t restrict __domain, locale_t restrict __loc,
	 const char * restrict __format, va_list __ap)
	 __attribute__((__nonnull__(1, 2, 4)))
	 ;
int	vdxprintf(int __fd, printf_domain_t restrict __domain,
	 locale_t restrict __loc, const char * restrict __format,
	 va_list __ap)
	 __attribute__((__nonnull__(2, 4)))
	 ;
int	vfxprintf(FILE * restrict __stream,
	 printf_domain_t restrict __domain, locale_t restrict __loc,
	 const char * restrict __format, va_list __ap)
	 __attribute__((__nonnull__(1, 2, 4)))
	 ;
int	vsxprintf(char * restrict __str, size_t __size,
	 printf_domain_t restrict __domain, locale_t restrict __loc,
	 const char * restrict __format, va_list __ap)
	 __attribute__((__nonnull__(1, 3, 5)))
	 ;
int	vxprintf(printf_domain_t restrict __domain,
	 locale_t restrict __loc, const char * restrict __format,
	 va_list __ap)
	 __attribute__((__nonnull__(1, 3)))
	 ;




struct _printf_compiled; 
typedef struct _printf_compiled *printf_comp_t;



void		free_printf_comp(printf_comp_t __pc)
		 ;
printf_comp_t	new_printf_comp(printf_domain_t restrict __domain,
		 locale_t restrict __loc, const char * restrict __fmt)
		 __attribute__((__nonnull__(1, 3)))
		 ;


int	asxprintf_exec(char ** restrict __ret,
	 printf_comp_t restrict __pc, ...)
	 __attribute__((__nonnull__(1, 2)))
	 ;
int	dxprintf_exec(int __fd, printf_comp_t restrict __pc, ...)
	 __attribute__((__nonnull__(2)))
	 ;
int	fxprintf_exec(FILE * restrict __stream,
	 printf_comp_t restrict __pc, ...)
	 __attribute__((__nonnull__(1, 2)))
	 ;
int	sxprintf_exec(char * restrict __str, size_t __size,
	 printf_comp_t restrict __pc, ...)
	 __attribute__((__nonnull__(1, 3)))
	 ;
int	xprintf_exec(printf_comp_t restrict __pc, ...)
	 __attribute__((__nonnull__(1)))
	 ;

int	vasxprintf_exec(char ** restrict __ret,
	 printf_comp_t restrict __pc, va_list __ap)
	 __attribute__((__nonnull__(1, 2)))
	 ;
int	vdxprintf_exec(int __fd, printf_comp_t restrict __pc,
	 va_list __ap)
	 __attribute__((__nonnull__(2)))
	 ;
int	vfxprintf_exec(FILE * restrict __stream,
	 printf_comp_t restrict __pc, va_list __ap)
	 __attribute__((__nonnull__(1, 2)))
	 ;
int	vsxprintf_exec(char * restrict __str, size_t __size,
	 printf_comp_t restrict __pc, va_list __ap)
	 __attribute__((__nonnull__(1, 3)))
	 ;
int	vxprintf_exec(printf_comp_t restrict __pc, va_list __ap)
	 __attribute__((__nonnull__(1)))
	 ;


#line 70 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"




















































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 56 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread/sched.h"
























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread/sched.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread/pthread_impl.h"











































#line 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread/sched.h"





struct sched_param { int sched_priority;  char __opaque[4]; };

extern int sched_yield(void);
extern int sched_get_priority_min(int);
extern int sched_get_priority_max(int);


#line 57 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/time.h"






























































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"





























































#line 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/time.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_time.h"






















#line 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/time.h"
#line 58 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h"



























#line 59 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_attr_t.h"


























#line 60 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_cond_t.h"


























#line 61 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_condattr_t.h"


























#line 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_key_t.h"


























#line 63 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_mutex_t.h"


























#line 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_mutexattr_t.h"


























#line 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_once_t.h"


























#line 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_rwlock_t.h"


























#line 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_rwlockattr_t.h"


























#line 68 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_t.h"


























#line 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread/qos.h"
























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread/qos.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_attr_t.h"


























#line 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread/qos.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_t.h"


























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread/qos.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread/qos.h"


#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/qos.h"
























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/qos.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/qos.h"























































































enum { QOS_CLASS_USER_INTERACTIVE
			 = 0x21, QOS_CLASS_USER_INITIATED
			 = 0x19, QOS_CLASS_DEFAULT
			 = 0x15, QOS_CLASS_UTILITY
			 = 0x11, QOS_CLASS_BACKGROUND
			 = 0x09, QOS_CLASS_UNSPECIFIED
			 = 0x00,  }; typedef unsigned int qos_class_t;
























qos_class_t
qos_class_self(void);




















qos_class_t
qos_class_main(void);



#line 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread/qos.h"











































int
pthread_attr_set_qos_class_np(pthread_attr_t *__attr,
		qos_class_t __qos_class, int __relative_priority);




























int
pthread_attr_get_qos_class_np(pthread_attr_t * restrict __attr,
		qos_class_t *  restrict __qos_class,
		int *  restrict __relative_priority);





































int
pthread_set_qos_class_self_np(qos_class_t __qos_class,
		int __relative_priority);




























int
pthread_get_qos_class_np(pthread_t __pthread,
		qos_class_t *  restrict __qos_class,
		int *  restrict __relative_priority);






















typedef struct pthread_override_s* pthread_override_t;




















































pthread_override_t
pthread_override_qos_class_start_np(pthread_t __pthread,
		qos_class_t __qos_class, int __relative_priority);

























int
pthread_override_qos_class_end_np(pthread_override_t __override);




#line 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"


#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_mach_port_t.h"














































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 50 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_mach_port_t.h"
typedef __darwin_mach_port_t mach_port_t;
#line 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_sigset_t.h"


























#line 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"






















#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 100 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 101 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"





































































int pthread_atfork(void (* )(void), void (* )(void),
		void (* )(void));


int pthread_attr_destroy(pthread_attr_t *);


int pthread_attr_getdetachstate(const pthread_attr_t *, int *);


int pthread_attr_getguardsize(const pthread_attr_t * restrict, size_t * restrict);


int pthread_attr_getinheritsched(const pthread_attr_t * restrict, int * restrict);


int pthread_attr_getschedparam(const pthread_attr_t * restrict,
		struct sched_param * restrict);


int pthread_attr_getschedpolicy(const pthread_attr_t * restrict, int * restrict);


int pthread_attr_getscope(const pthread_attr_t * restrict, int * restrict);


int pthread_attr_getstack(const pthread_attr_t * restrict,
		void *  *  restrict, size_t * restrict);


int pthread_attr_getstackaddr(const pthread_attr_t * restrict,
		void *  *  restrict);


int pthread_attr_getstacksize(const pthread_attr_t * restrict, size_t * restrict);


int pthread_attr_init(pthread_attr_t *);


int pthread_attr_setdetachstate(pthread_attr_t *, int);


int pthread_attr_setguardsize(pthread_attr_t *, size_t);


int pthread_attr_setinheritsched(pthread_attr_t *, int);


int pthread_attr_setschedparam(pthread_attr_t * restrict,
		const struct sched_param * restrict);


int pthread_attr_setschedpolicy(pthread_attr_t *, int);


int pthread_attr_setscope(pthread_attr_t *, int);


int pthread_attr_setstack(pthread_attr_t *, void *, size_t);


int pthread_attr_setstackaddr(pthread_attr_t *, void *);


int pthread_attr_setstacksize(pthread_attr_t *, size_t);


int pthread_cancel(pthread_t) __asm("_" "pthread_cancel" );


int pthread_cond_broadcast(pthread_cond_t *);


int pthread_cond_destroy(pthread_cond_t *);


int pthread_cond_init(
		pthread_cond_t * restrict,
		const pthread_condattr_t *  restrict)
		__asm("_" "pthread_cond_init" );


int pthread_cond_signal(pthread_cond_t *);



int pthread_cond_timedwait(
		pthread_cond_t * restrict, pthread_mutex_t * restrict,
		const struct timespec *  restrict)
		__asm("_" "pthread_cond_timedwait"  );



int pthread_cond_wait(pthread_cond_t * restrict,
		pthread_mutex_t * restrict) __asm("_" "pthread_cond_wait"  );


int pthread_condattr_destroy(pthread_condattr_t *);


int pthread_condattr_init(pthread_condattr_t *);


int pthread_condattr_getpshared(const pthread_condattr_t * restrict,
		int * restrict);


int pthread_condattr_setpshared(pthread_condattr_t *, int);


int pthread_create(pthread_t  *  restrict,
		const pthread_attr_t *  restrict,
		void *  (* )(void * ),
		void *  restrict);


int pthread_detach(pthread_t);


int pthread_equal(pthread_t , pthread_t );



void pthread_exit(void * ) __attribute__((__noreturn__));


int pthread_getconcurrency(void);


int pthread_getschedparam(pthread_t , int *  restrict,
		struct sched_param *  restrict);



void*  pthread_getspecific(pthread_key_t);



int pthread_join(pthread_t , void *  * )
		__asm("_" "pthread_join"  );


int pthread_key_create(pthread_key_t *, void (* )(void *));


int pthread_key_delete(pthread_key_t);


int pthread_mutex_destroy(pthread_mutex_t *);


int pthread_mutex_getprioceiling(const pthread_mutex_t * restrict,
		int * restrict);


int pthread_mutex_init(pthread_mutex_t * restrict,
		const pthread_mutexattr_t *  restrict);



int pthread_mutex_lock(pthread_mutex_t *);


int pthread_mutex_setprioceiling(pthread_mutex_t * restrict, int,
		int * restrict);



int pthread_mutex_trylock(pthread_mutex_t *);



int pthread_mutex_unlock(pthread_mutex_t *);


int pthread_mutexattr_destroy(pthread_mutexattr_t *) __asm("_" "pthread_mutexattr_destroy" );


int pthread_mutexattr_getprioceiling(const pthread_mutexattr_t * restrict,
		int * restrict);


int pthread_mutexattr_getprotocol(const pthread_mutexattr_t * restrict,
		int * restrict);


int pthread_mutexattr_getpshared(const pthread_mutexattr_t * restrict,
		int * restrict);


int pthread_mutexattr_gettype(const pthread_mutexattr_t * restrict,
		int * restrict);


int pthread_mutexattr_getpolicy_np(const pthread_mutexattr_t * restrict,
		int * restrict);


int pthread_mutexattr_init(pthread_mutexattr_t *);


int pthread_mutexattr_setprioceiling(pthread_mutexattr_t *, int);


int pthread_mutexattr_setprotocol(pthread_mutexattr_t *, int);


int pthread_mutexattr_setpshared(pthread_mutexattr_t *, int);


int pthread_mutexattr_settype(pthread_mutexattr_t *, int);


int pthread_mutexattr_setpolicy_np(pthread_mutexattr_t *, int);



int pthread_once(pthread_once_t *, void (* )(void));


int pthread_rwlock_destroy(pthread_rwlock_t * ) __asm("_" "pthread_rwlock_destroy" );


int pthread_rwlock_init(pthread_rwlock_t * restrict,
		const pthread_rwlockattr_t *  restrict)
		__asm("_" "pthread_rwlock_init" );



int pthread_rwlock_rdlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_rdlock" );



int pthread_rwlock_tryrdlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_tryrdlock" );



int pthread_rwlock_trywrlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_trywrlock" );



int pthread_rwlock_wrlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_wrlock" );



int pthread_rwlock_unlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_unlock" );


int pthread_rwlockattr_destroy(pthread_rwlockattr_t *);


int pthread_rwlockattr_getpshared(const pthread_rwlockattr_t * restrict,
		int * restrict);


int pthread_rwlockattr_init(pthread_rwlockattr_t *);


int pthread_rwlockattr_setpshared(pthread_rwlockattr_t *, int);


pthread_t pthread_self(void);



int pthread_setcancelstate(int , int * )
		__asm("_" "pthread_setcancelstate" );



int pthread_setcanceltype(int , int * )
		__asm("_" "pthread_setcanceltype" );


int pthread_setconcurrency(int);


int pthread_setschedparam(pthread_t, int, const struct sched_param *);



int pthread_setspecific(pthread_key_t , const void * );



void pthread_testcancel(void) __asm("_" "pthread_testcancel" );




int pthread_is_threaded_np(void);


int pthread_threadid_np(pthread_t ,__uint64_t* );



int	pthread_getname_np(pthread_t,char*,size_t);



int	pthread_setname_np(const char*);



int	pthread_main_np(void);



mach_port_t pthread_mach_thread_np(pthread_t);


size_t pthread_get_stacksize_np(pthread_t);


void* pthread_get_stackaddr_np(pthread_t);



int pthread_cond_signal_thread_np(pthread_cond_t *, pthread_t );




int pthread_cond_timedwait_relative_np(pthread_cond_t *, pthread_mutex_t *,
		const struct timespec * );



int pthread_create_suspended_np(
		pthread_t  * , const pthread_attr_t * ,
		void *  (* )(void * ), void * );


int pthread_kill(pthread_t, int);


 pthread_t pthread_from_mach_thread_np(mach_port_t);


int pthread_sigmask(int, const sigset_t * , sigset_t * )
		__asm("_" "pthread_sigmask" );



void pthread_yield_np(void);



void pthread_jit_write_protect_np(int enabled);



int pthread_jit_write_protect_supported_np(void);















typedef int (*pthread_jit_write_callback_t)(void *  ctx);

















































































int pthread_jit_write_with_callback_np(
		pthread_jit_write_callback_t  callback, void *  ctx);




























void pthread_jit_write_freeze_callbacks_np(void);

















int
pthread_cpu_number_np(size_t *cpu_number_out);


#line 72 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pwd.h"











































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 47 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pwd.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_gid_t.h"


























#line 48 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pwd.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"































#line 49 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pwd.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_uid_t.h"


























#line 50 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pwd.h"









struct passwd {
	char	*pw_name;		
	char	*pw_passwd;		
	uid_t	pw_uid;			
	gid_t	pw_gid;			
	__darwin_time_t pw_change;		
	char	*pw_class;		
	char	*pw_gecos;		
	char	*pw_dir;		
	char	*pw_shell;		
	__darwin_time_t pw_expire;		
};

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 98 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pwd.h"


struct passwd	*getpwuid(uid_t);
struct passwd	*getpwnam(const char *);
int		 getpwuid_r(uid_t, struct passwd *, char *, size_t, struct passwd **);
int		 getpwnam_r(const char *, struct passwd *, char *, size_t, struct passwd **);
struct passwd	*getpwent(void);
void		 setpwent(void);
void		 endpwent(void);


#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/uuid/uuid.h"

































#line 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pwd.h"

int		 setpassent(int);
char 		*user_from_uid(uid_t, int);
struct passwd	*getpwuuid(uuid_t);
int		 getpwuuid_r(uuid_t, struct passwd *, char *, size_t, struct passwd **);

#line 74 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/regex.h"
























































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_regex.h"





























































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 98 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_regex.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 99 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_regex.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 100 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_regex.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"































#line 101 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_regex.h"






#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_wchar_t.h"
































#line 109 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_regex.h"

typedef __darwin_off_t regoff_t;

typedef struct {
	int re_magic;
	size_t re_nsub;		
	const char *	re_endp;	
	struct re_guts *re_g;	
} regex_t;

typedef struct {
	regoff_t rm_so;		
	regoff_t rm_eo;		
} regmatch_t;

























int	regcomp(regex_t * restrict, const char * restrict, int) __asm("_" "regcomp" );
size_t	regerror(int, const regex_t * restrict, char * restrict, size_t __errbuf_size) ;




int	regexec(const regex_t * restrict, const char * restrict, size_t __nmatch,
		regmatch_t __pmatch[ restrict ], int);
void	regfree(regex_t *);



int	regncomp(regex_t * restrict, const char * restrict, size_t __len, int)
		;
int	regnexec(const regex_t * restrict, const char * restrict, size_t __len,
		size_t __nmatch, regmatch_t __pmatch[ restrict ], int)
		;
int	regwcomp(regex_t * restrict, const wchar_t * restrict, int)
		;
int	regwexec(const regex_t * restrict, const wchar_t * restrict, size_t __nmatch,
		regmatch_t __pmatch[ restrict ], int)
		;
int	regwncomp(regex_t * restrict, const wchar_t *  restrict, size_t __len, int)
		;
int	regwnexec(const regex_t * restrict, const wchar_t *  restrict,
		size_t __len, size_t __nmatch, regmatch_t __pmatch[ restrict ], int)
		;


#line 90 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/regex.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_regex.h"

























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_regex.h"




int	regcomp_l(regex_t * restrict, const char * restrict, int,
	    locale_t restrict)
	    ;


int	regncomp_l(regex_t * restrict, const char * restrict ,
	    size_t __len, int, locale_t restrict)
	    ;
int	regwcomp_l(regex_t * restrict, const wchar_t * restrict,
	    int, locale_t restrict)
	    ;
int	regwnexec_l(const regex_t * restrict, const wchar_t * restrict ,
	    size_t __len, size_t __nmatch, regmatch_t __pmatch[ restrict ], int,
	    locale_t restrict)
	    ;



#line 93 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/regex.h"
#line 76 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/resolv.h"



































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/param.h"







































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/param.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h"






























#line 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/param.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"



































































#line 84 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/param.h"








#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/syslimits.h"































































#line 94 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/param.h"



#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/param.h"































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/param.h"

















































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_param.h"



#line 54 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/param.h"












































#line 38 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/param.h"
#line 108 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/param.h"


#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/limits.h"


























































#line 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/param.h"


#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/signal.h"



































































#line 114 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/param.h"
















                                









































#line 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/resolv.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"



































































#line 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/resolv.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/resolv.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/netinet/in.h"






























































#line 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/resolv.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/socket.h"






































































#line 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/resolv.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h"




























































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"































































#line 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_stdio.h"






















#line 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h"
#line 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/resolv.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arpa/nameser.h"

























































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/param.h"



































































#line 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arpa/nameser.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"



































































#line 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arpa/nameser.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arpa/nameser.h"
















typedef enum __ns_sect {
	ns_s_qd = 0,		
	ns_s_zn = 0,		
	ns_s_an = 1,		
	ns_s_pr = 1,		
	ns_s_ns = 2,		
	ns_s_ud = 2,		
	ns_s_ar = 3,		
	ns_s_max = 4
} res_9_ns_sect;





typedef u_char ns_nname[256];
typedef const u_char *ns_nname_ct;
typedef u_char *ns_nname_t;

struct ns_namemap { ns_nname_ct base; int len; };
typedef struct ns_namemap *ns_namemap_t;
typedef const struct ns_namemap *ns_namemap_ct;






typedef struct __ns_msg {
	const u_char	*_msg, *_eom;
	u_int16_t	_id, _flags, _counts[ns_s_max];
	const u_char	*_sections[ns_s_max];
	res_9_ns_sect		_sect;
	int		_rrnum;
	const u_char	*_msg_ptr;
} res_9_ns_msg;



struct _res_9_ns_flagdata {  int mask, shift;  };
extern struct _res_9_ns_flagdata _res_9_ns_flagdata[];







typedef	struct __ns_rr {
	char		name[1025];
	u_int16_t	type;
	u_int16_t	rr_class;
	u_int32_t	ttl;
	u_int16_t	rdlength;
	const u_char *	rdata;
} res_9_ns_rr;




typedef	struct __ns_rr2 {
	ns_nname	nname;
	size_t		nnamel;
	int		type;
	int		rr_class;
	u_int		ttl;
	int		rdlength;
	const u_char *	rdata;
} ns_rr2;








typedef enum __ns_flag {
	ns_f_qr,		
	ns_f_opcode,		
	ns_f_aa,		
	ns_f_tc,		
	ns_f_rd,		
	ns_f_ra,		
	ns_f_z,			
	ns_f_ad,		
	ns_f_cd,		
	ns_f_rcode,		
	ns_f_max
} res_9_ns_flag;




typedef enum __ns_opcode {
	ns_o_query = 0,		
	ns_o_iquery = 1,	
	ns_o_status = 2,	
				
	ns_o_notify = 4,	
	ns_o_update = 5,	
	ns_o_max = 6
} res_9_ns_opcode;




typedef	enum __ns_rcode {
	ns_r_noerror = 0,	
	ns_r_formerr = 1,	
	ns_r_servfail = 2,	
	ns_r_nxdomain = 3,	
	ns_r_notimpl = 4,	
	ns_r_refused = 5,	
	
	ns_r_yxdomain = 6,	
	ns_r_yxrrset = 7,	
	ns_r_nxrrset = 8,	
	ns_r_notauth = 9,	
	ns_r_notzone = 10,	
	ns_r_max = 11,
	
	ns_r_badvers = 16,
	
	ns_r_badsig = 16,
	ns_r_badkey = 17,
	ns_r_badtime = 18
} res_9_ns_rcode;


typedef enum __ns_update_operation {
	ns_uop_delete = 0,
	ns_uop_add = 1,
	ns_uop_max = 2
} res_9_ns_update_operation;




struct res_9_ns_tsig_key {
	char name[1025], alg[1025];
	unsigned char *data;
	int len;
};
typedef struct res_9_ns_tsig_key res_9_ns_tsig_key;




struct res_9_ns_tcp_tsig_state {
	int counter;
	struct dst_key *key;
	void *ctx;
	unsigned char sig[512];
	int siglen;
};
typedef struct res_9_ns_tcp_tsig_state res_9_ns_tcp_tsig_state;






typedef enum __ns_type {
	ns_t_invalid = 0,	
	ns_t_a = 1,		
	ns_t_ns = 2,		
	ns_t_md = 3,		
	ns_t_mf = 4,		
	ns_t_cname = 5,		
	ns_t_soa = 6,		
	ns_t_mb = 7,		
	ns_t_mg = 8,		
	ns_t_mr = 9,		
	ns_t_null = 10,		
	ns_t_wks = 11,		
	ns_t_ptr = 12,		
	ns_t_hinfo = 13,	
	ns_t_minfo = 14,	
	ns_t_mx = 15,		
	ns_t_txt = 16,		
	ns_t_rp = 17,		
	ns_t_afsdb = 18,	
	ns_t_x25 = 19,		
	ns_t_isdn = 20,		
	ns_t_rt = 21,		
	ns_t_nsap = 22,		
	ns_t_nsap_ptr = 23,	
	ns_t_sig = 24,		
	ns_t_key = 25,		
	ns_t_px = 26,		
	ns_t_gpos = 27,		
	ns_t_aaaa = 28,		
	ns_t_loc = 29,		
	ns_t_nxt = 30,		
	ns_t_eid = 31,		
	ns_t_nimloc = 32,	
	ns_t_srv = 33,		
	ns_t_atma = 34,		
	ns_t_naptr = 35,	
	ns_t_kx = 36,		
	ns_t_cert = 37,		
	ns_t_a6 = 38,		
	ns_t_dname = 39,	
	ns_t_sink = 40,		
	ns_t_opt = 41,		
	ns_t_apl = 42,		
	ns_t_ds = 43,		
	ns_t_sshfp = 44,	
	ns_t_ipseckey = 45,	
	ns_t_rrsig = 46,	
	ns_t_nsec = 47,		
	ns_t_dnskey = 48,	
	ns_t_dhcid = 49,	
	ns_t_nsec3 = 50,	
	ns_t_nsec3param = 51,	
	ns_t_hip = 55,		
	ns_t_spf = 99,		
	ns_t_tkey = 249,	
	ns_t_tsig = 250,	
	ns_t_ixfr = 251,	
	ns_t_axfr = 252,	
	ns_t_mailb = 253,	
	ns_t_maila = 254,	
	ns_t_any = 255,		
	ns_t_zxfr = 256,	
	ns_t_dlv = 32769,	
	ns_t_max = 65536
} ns_type;








typedef enum __ns_class {
	ns_c_invalid = 0,	
	ns_c_in = 1,		
	ns_c_2 = 2,		
	ns_c_chaos = 3,		
	ns_c_hs = 4,		
	
	ns_c_none = 254,	
	ns_c_any = 255,		
	ns_c_max = 65536
} res_9_ns_class;



typedef enum __ns_key_types {
	ns_kt_rsa = 1,		
	ns_kt_dh  = 2,		
	ns_kt_dsa = 3,		
	ns_kt_private = 254	
} res_9_ns_key_types;

typedef enum __ns_cert_types {
	cert_t_pkix = 1,	
	cert_t_spki = 2,	
	cert_t_pgp  = 3,	
	cert_t_url  = 253,	
	cert_t_oid  = 254	
} res_9_ns_cert_types;








	
	






















int		res_9_ns_msg_getflag(res_9_ns_msg, int);
u_int		res_9_ns_get16(const u_char *);
u_long		res_9_ns_get32(const u_char *);
void		res_9_ns_put16(u_int, u_char *);
void		res_9_ns_put32(u_long, u_char *);
int		res_9_ns_initparse(const u_char *, int, res_9_ns_msg *);
int		res_9_ns_skiprr(const u_char *, const u_char *, res_9_ns_sect, int);
int		res_9_ns_parserr(res_9_ns_msg *, res_9_ns_sect, int, res_9_ns_rr *);
int		res_9_ns_parserr2(res_9_ns_msg *, res_9_ns_sect, int, ns_rr2 *);
int		res_9_ns_sprintrr(const res_9_ns_msg *, const res_9_ns_rr *,
			    const char *, const char *, char *, size_t);
int		res_9_ns_sprintrrf(const u_char *, size_t, const char *,
			     res_9_ns_class, ns_type, u_long, const u_char *,
			     size_t, const char *, const char *,
			     char *, size_t);
int		res_9_ns_format_ttl(u_long, char *, size_t);
int		res_9_ns_parse_ttl(const char *, u_long *);
u_int32_t	res_9_ns_datetosecs(const char *cp, int *errp);
int		res_9_ns_name_ntol(const u_char *, u_char *, size_t);
int		res_9_ns_name_ntop(const u_char *, char *, size_t);
int		res_9_ns_name_pton(const char *, u_char *, size_t);
int		res_9_ns_name_pton2(const char *, u_char *, size_t, size_t *);
int		res_9_ns_name_unpack(const u_char *, const u_char *,
			       const u_char *, u_char *, size_t);
int		res_9_ns_name_unpack2(const u_char *, const u_char *,
				const u_char *, u_char *, size_t,
				size_t *);
int		res_9_ns_name_pack(const u_char *, u_char *, int,
			     const u_char **, const u_char **);
int		res_9_ns_name_uncompress(const u_char *, const u_char *,
				   const u_char *, char *, size_t);
int		res_9_ns_name_compress(const char *, u_char *, size_t,
				 const u_char **, const u_char **);
int		res_9_ns_name_skip(const u_char **, const u_char *);
void		res_9_ns_name_rollback(const u_char *, const u_char **,
				 const u_char **);
int		res_9_ns_sign(u_char *, int *, int, int, void *,
			const u_char *, int, u_char *, int *, time_t);
int		res_9_ns_sign2(u_char *, int *, int, int, void *,
			 const u_char *, int, u_char *, int *, time_t,
			 u_char **, u_char **);
int		res_9_ns_sign_tcp(u_char *, int *, int, int,
			    res_9_ns_tcp_tsig_state *, int);
int		res_9_ns_sign_tcp2(u_char *, int *, int, int,
			     res_9_ns_tcp_tsig_state *, int,
			     u_char **, u_char **);
int		res_9_ns_sign_tcp_init(void *, const u_char *, int,
				 res_9_ns_tcp_tsig_state *);
u_char		*res_9_ns_find_tsig(u_char *, u_char *);
int		res_9_ns_verify(u_char *, int *, void *,
			  const u_char *, int, u_char *, int *,
			  time_t *, int);
int		res_9_ns_verify_tcp(u_char *, int *, res_9_ns_tcp_tsig_state *, int);
int		res_9_ns_verify_tcp_init(void *, const u_char *, int,
				   res_9_ns_tcp_tsig_state *);
int		res_9_ns_samedomain(const char *, const char *);
int		res_9_ns_subdomain(const char *, const char *);
int		res_9_ns_makecanon(const char *, char *, size_t);
int		res_9_ns_samename(const char *, const char *);



#line 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/resolv.h"





























struct __res_9_state; 

void _res_9_h_errno_set(struct __res_9_state *, int);















typedef enum { res_9_goahead, res_9_nextns, res_9_modified, res_9_done, res_9_error }
	res_9_sendhookact;

typedef res_9_sendhookact (*res_send_qhook)(struct sockaddr * const *,
					  const u_char **, int *,
					  u_char *, int, int *);

typedef res_9_sendhookact (*res_send_rhook)(const struct sockaddr *,
					  const u_char *, int, u_char *,
					  int, int *);

struct res_9_sym {
	int		number;	   
	const char *	name;	   
	const char *	humanname; 
};




struct __res_9_state_ext;

struct __res_9_state {
	int	retrans;	 	
	int	retry;			
	





	u_long	options;		
	int	nscount;		
	struct sockaddr_in
		nsaddr_list[3];	
	u_short	id;			
	char	*dnsrch[6+1];	
	char	defdname[256];		
	u_long	pfcode;			
	unsigned ndots:4;		
	unsigned nsort:4;		
	char	unused[3];
	struct {
		struct in_addr	addr;
		u_int32_t	mask;
	} sort_list[10];
	res_send_qhook qhook;		
	res_send_rhook rhook;		
	int	res_h_errno;		
	int	_vcsock;		
	u_int	_flags;			
	u_int	_pad;			
	union {
		
		char	pad[72 - 4*sizeof (int) - 3*sizeof (void *)];
		struct {
			u_int16_t		nscount;
			u_int16_t		nstimes[3];	
			int			nssocks[3];
			struct __res_9_state_ext *ext;	
		} _ext;
	} _u;
	u_char	*_rnd;			
};

typedef struct __res_9_state *res_9_state;

union res_9_sockaddr_union {
	struct sockaddr_in	sin;
	struct sockaddr_in6	sin6;
	int32_t			__align32;	
	char			__space[128];   
};











	










extern struct __res_9_state *__res_9_state(void);

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/TargetConditionals.h"






















 










#line 342 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/resolv.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 343 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/resolv.h"





void		res_9_fp_nquery(const u_char *, int, FILE *);
void		res_9_fp_query(const u_char *, FILE *);
const char *	res_9_hostalias_1(const char *);
void		res_9_p_query(const u_char *);
void		res_9_close(void);
int		res_9_init(void);
int		res_9_isourserver(const struct sockaddr_in *);
int		res_9_mkquery(int, const char *, int, int, const u_char *,
				 int, const u_char *, u_char *, int);
int		res_9_query(const char *, int, int, u_char *, int);
int		res_9_querydomain(const char *, const char *, int, int,
				     u_char *, int);
int		res_9_search(const char *, int, int, u_char *, int);
int		res_9_send(const u_char *, int, u_char *, int);
int		res_9_sendsigned(const u_char *, int, res_9_ns_tsig_key *,
				    u_char *, int);









extern const struct res_9_sym __res_9_p_key_syms[];
extern const struct res_9_sym __res_9_p_cert_syms[];
extern const struct res_9_sym __res_9_p_class_syms[];
extern const struct res_9_sym __res_9_p_type_syms[];
extern const struct res_9_sym __res_9_p_rcode_syms[];






int		res_9_hnok(const char *);
int		res_9_ownok(const char *);
int		res_9_mailok(const char *);
int		res_9_dnok(const char *);
int		res_9_sym_ston(const struct res_9_sym *, const char *, int *);
const char *	res_9_sym_ntos(const struct res_9_sym *, int, int *);
const char *	res_9_sym_ntop(const struct res_9_sym *, int, int *);
int		res_9_b64_ntop(u_char const *, size_t, char *, size_t);
int		res_9_b64_pton(char const *, u_char *, size_t);
int		res_9_loc_aton(const char *, u_char *);
const char *	res_9_loc_ntoa(const u_char *, char *);
int		res_9_dn_skipname(const u_char *, const u_char *);
void		res_9_putlong(u_int32_t, u_char *);
void		res_9_putshort(u_int16_t, u_char *);
u_int16_t	res_9_getshort(const u_char *);
u_int32_t	res_9_getlong(const u_char *);
const char *	res_9_p_class(int);
const char *	res_9_p_time(u_int32_t);
const char *	res_9_p_type(int);
const char *	res_9_p_rcode(int);
const u_char *	res_9_p_cdnname(const u_char *, const u_char *, int, FILE *);
const u_char *	res_9_p_cdname(const u_char *, const u_char *, FILE *);
const u_char *	res_9_p_fqnname(const u_char *, const u_char *, int, char *, int);
const u_char *	res_9_p_fqname(const u_char *, const u_char *, FILE *);
const char *	res_9_p_option(u_long);
char *		res_9_p_secstodate(u_long);
int		res_9_dn_count_labels(const char *);
int		res_9_dn_comp(const char *, u_char *, int, u_char **, u_char **);
int		res_9_dn_expand(const u_char *, const u_char *, const u_char *,
			  char *, int);
u_int		res_9_randomid(void);
u_int		res_9_nrandomid(res_9_state);
int		res_9_nameinquery(const char *, int, int, const u_char *,
				const u_char *);
int		res_9_queriesmatch(const u_char *, const u_char *,
				 const u_char *, const u_char *);
const char *	res_9_p_section(int, int);

int		res_9_ninit(res_9_state);
int		res_9_nisourserver(const res_9_state, const struct sockaddr_in *);
void		res_9_fp_resstat(const res_9_state, FILE *);
void		res_9_pquery(const res_9_state, const u_char *, int, FILE *);
const char *	res_9_hostalias_2(const res_9_state, const char *, char *, size_t);
int		res_9_nquery(res_9_state, const char *, int, int, u_char *, int);
int		res_9_nsearch(res_9_state, const char *, int, int, u_char *, int);
int		res_9_nquerydomain(res_9_state, const char *, const char *,
				 int, int, u_char *, int);
int		res_9_nmkquery(res_9_state, int, const char *, int, int,
			     const u_char *, int, const u_char *,
			     u_char *, int);
int		res_9_nsend(res_9_state, const u_char *, int, u_char *, int);
int		res_9_nsendsigned(res_9_state, const u_char *, int,
				res_9_ns_tsig_key *, u_char *, int);
int		res_9_findzonecut(res_9_state, const char *, res_9_ns_class, int,
				char *, size_t, struct in_addr *, int);
int		res_9_findzonecut2(res_9_state, const char *, res_9_ns_class, int,
				 char *, size_t,
				 union res_9_sockaddr_union *, int);
void		res_9_nclose(res_9_state);
int		res_9_nopt(res_9_state, int, u_char *, int, int);
int		res_9_nopt_rdata(res_9_state, int, u_char *, int, u_char *,
			       u_short, u_short, u_char *);
int		res_9_vinit(res_9_state, int);
void		res_destroyservicelist(void);
const char *	res_servicename(u_int16_t, const char *);
const char *	res_protocolname(int);
void		res_destroyprotolist(void);
void		res_buildprotolist(void);
const char *	res_get_nibblesuffix(res_9_state);
const char *	res_get_nibblesuffix2(res_9_state);
const char *	res_get_bitstringsuffix (res_9_state);
void		res_9_ndestroy(res_9_state);
u_int16_t	res_9_nametoclass(const char *, int *);
u_int16_t	res_9_nametotype(const char *, int *);
void		res_9_setservers(res_9_state, const union res_9_sockaddr_union *,
			       int);
int		res_9_getservers(res_9_state, union res_9_sockaddr_union *, int);


#line 78 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sched.h"























#line 79 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/search.h"









#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 13 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/search.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 14 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/search.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 15 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/search.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"































#line 16 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/search.h"



typedef	struct entry {
	char *	key;
	void	*data;
} ENTRY;

typedef	enum {
	FIND, ENTER
} ACTION;

typedef	enum {
	preorder,
	postorder,
	endorder,
	leaf
} VISIT;



int	 hcreate(size_t);
void	 hdestroy(void);
ENTRY	*hsearch(ENTRY, ACTION);
void	 insque(void *, void *);
void	*lfind(const void *, const void *, size_t *, size_t,
	    int (*)(const void *, const void *));
void	*lsearch(const void *, void *, size_t *, size_t,
	    int (*)(const void *, const void *));
void	 remque(void *);
void	*tdelete(const void * restrict, void ** restrict,
	    int (*)(const void *, const void *));
void	*tfind(const void *, void * const *,
	    int (*)(const void *, const void *));
void	*tsearch(const void *, void **, int (*)(const void *, const void *));
void	 twalk(const void *, void (*)(const void *, VISIT, int));

#line 80 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/semaphore.h"























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"



































































#line 27 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/semaphore.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/fcntl.h"




































































#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/semaphore.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/semaphore.h"








































typedef int sem_t;



#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 50 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/semaphore.h"


int sem_close(sem_t *);
int sem_destroy(sem_t *) __attribute__((__deprecated__));
int sem_getvalue(sem_t * restrict, int * restrict) __attribute__((__deprecated__));
int sem_init(sem_t *, int, unsigned int) __attribute__((__deprecated__));
sem_t * sem_open(const char *, int, ...);
int sem_post(sem_t *);
int sem_trywait(sem_t *);
int sem_unlink(const char *);
int sem_wait(sem_t *) __asm("_" "sem_wait"  );


#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/semaphore.h"
#line 81 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/setjmp.h"























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 27 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/setjmp.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/setjmp.h"









typedef int jmp_buf[((14 + 8 + 2) * 2)];
typedef int sigjmp_buf[((14 + 8 + 2) * 2) + 1];



extern int	setjmp(jmp_buf);
extern void longjmp(jmp_buf, int) __attribute__((__noreturn__));

int	_setjmp(jmp_buf);
void	_longjmp(jmp_buf, int) __attribute__((__noreturn__));
int	sigsetjmp(sigjmp_buf, int);
void	siglongjmp(sigjmp_buf, int) __attribute__((__noreturn__));

void	longjmperror(void);

#line 82 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sgtty.h"




































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sgtty.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/ioctl.h"





































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/ttycom.h"





































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/ioccom.h"
































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 68 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/ioccom.h"














#line 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/ttycom.h"









struct winsize {
	unsigned short  ws_row;         
	unsigned short  ws_col;         
	unsigned short  ws_xpixel;      
	unsigned short  ws_ypixel;      
};

                                                
                                                
                                                
                                                
                                                
                                                

#line 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/ioctl.h"






struct ttysize {
	unsigned short  ts_lines;
	unsigned short  ts_cols;
	unsigned short  ts_xxx;
	unsigned short  ts_yyy;
};

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/ioccom.h"






























































#line 89 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/ioctl.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/filio.h"





































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/ioccom.h"






























































#line 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/filio.h"



#line 91 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/ioctl.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/sockio.h"
































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/appleapiopts.h"



























#line 68 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/sockio.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/net/if.h"
































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/net/if.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/appleapiopts.h"



























#line 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/net/if.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/net/if_var.h"
































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/appleapiopts.h"



























#line 68 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/net/if_var.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h"




#line 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/net/if_var.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"



































































#line 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/net/if_var.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/time.h"
































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 68 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/time.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/time.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/time.h"






#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"


























#line 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/time.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_timespec.h"


























#line 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/time.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_timeval.h"


























#line 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/time.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_timeval64.h"





























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"





























#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_timeval64.h"

struct timeval64 {
	__int64_t               tv_sec;         
	__int64_t               tv_usec;        
};
#line 82 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/time.h"


#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_time_t.h"


























#line 86 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/time.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_suseconds_t.h"


























#line 87 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/time.h"





struct  itimerval {
	struct  timeval it_interval;    
	struct  timeval it_value;       
};












#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_setsize.h"


























#line 112 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/time.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_set.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"


























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_set.h"
#line 113 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/time.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_clr.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"


























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_clr.h"
#line 114 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/time.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_isset.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"


























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_isset.h"
#line 115 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/time.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_zero.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"


























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_zero.h"
#line 116 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/time.h"


#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_copy.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_def.h"


























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_fd_copy.h"
#line 120 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/time.h"


struct timezone {
	int     tz_minuteswest; 
	int     tz_dsttime;     
};







struct clockinfo {
	int     hz;             
	int     tick;           
	int     tickadj;        
	int     stathz;         
	int     profhz;         
};



#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/time.h"






























































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"





























































#line 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/time.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_time.h"






















#line 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/time.h"
#line 161 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/time.h"



int     adjtime(const struct timeval *, struct timeval *);
int     futimes(int, const struct timeval *);
int     lutimes(const char *, const struct timeval *) ;
int     settimeofday(const struct timeval *, const struct timezone *);

int     getitimer(int, struct itimerval *);
int     gettimeofday(struct timeval * restrict, void * restrict);



#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_select.h"


































#line 178 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/time.h"



int     setitimer(int, const struct itimerval * restrict,
    struct itimerval * restrict);
int     utimes(const char *, const struct timeval *);




#line 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/net/if_var.h"






































struct net_event_data {
	u_int32_t       if_family;
	u_int32_t       if_unit;
	char            if_name[16];
};

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_timeval32.h"




























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"





























#line 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_timeval32.h"

struct timeval32
{
	__int32_t               tv_sec;         
	__int32_t               tv_usec;        
};
#line 140 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/net/if_var.h"

#pragma pack(4)





struct if_data {
	
	u_char          ifi_type;       
	u_char          ifi_typelen;    
	u_char          ifi_physical;   
	u_char          ifi_addrlen;    
	u_char          ifi_hdrlen;     
	u_char          ifi_recvquota;  
	u_char          ifi_xmitquota;  
	u_char          ifi_unused1;    
	u_int32_t       ifi_mtu;        
	u_int32_t       ifi_metric;     
	u_int32_t       ifi_baudrate;   
	
	u_int32_t       ifi_ipackets;   
	u_int32_t       ifi_ierrors;    
	u_int32_t       ifi_opackets;   
	u_int32_t       ifi_oerrors;    
	u_int32_t       ifi_collisions; 
	u_int32_t       ifi_ibytes;     
	u_int32_t       ifi_obytes;     
	u_int32_t       ifi_imcasts;    
	u_int32_t       ifi_omcasts;    
	u_int32_t       ifi_iqdrops;    
	u_int32_t       ifi_noproto;    
	u_int32_t       ifi_recvtiming; 
	u_int32_t       ifi_xmittiming; 
	struct timeval32 ifi_lastchange;  
	u_int32_t       ifi_unused2;    
	u_int32_t       ifi_hwassist;   
	u_int32_t       ifi_reserved1;  
	u_int32_t       ifi_reserved2;  
};





struct if_data64 {
	
	u_char          ifi_type;               
	u_char          ifi_typelen;            
	u_char          ifi_physical;           
	u_char          ifi_addrlen;            
	u_char          ifi_hdrlen;             
	u_char          ifi_recvquota;          
	u_char          ifi_xmitquota;          
	u_char          ifi_unused1;            
	u_int32_t       ifi_mtu;                
	u_int32_t       ifi_metric;             
	u_int64_t       ifi_baudrate;           
	
	u_int64_t       ifi_ipackets;           
	u_int64_t       ifi_ierrors;            
	u_int64_t       ifi_opackets;           
	u_int64_t       ifi_oerrors;            
	u_int64_t       ifi_collisions;         
	u_int64_t       ifi_ibytes;             
	u_int64_t       ifi_obytes;             
	u_int64_t       ifi_imcasts;            
	u_int64_t       ifi_omcasts;            
	u_int64_t       ifi_iqdrops;            
	u_int64_t       ifi_noproto;            
	u_int32_t       ifi_recvtiming;         
	u_int32_t       ifi_xmittiming;         
	struct timeval32 ifi_lastchange;  
};


#pragma pack()

struct ifnet_interface_advisory;





struct  ifqueue {
	void    *ifq_head;
	void    *ifq_tail;
	int     ifq_len;
	int     ifq_maxlen;
	int     ifq_drops;
};


#line 74 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/net/if.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/net/net_kev.h"



























#line 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/net/if.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"



































































#line 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/net/if.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/socket.h"






































































#line 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/net/if.h"



struct if_clonereq {
	int     ifcr_total;             
	int     ifcr_count;             
	char    *ifcr_buffer;           
};




























struct if_msghdr {
	unsigned short  ifm_msglen;     
	unsigned char   ifm_version;    
	unsigned char   ifm_type;       
	int             ifm_addrs;      
	int             ifm_flags;      
	unsigned short  ifm_index;      
	struct  if_data ifm_data;       
};





struct ifa_msghdr {
	unsigned short  ifam_msglen;    
	unsigned char   ifam_version;   
	unsigned char   ifam_type;      
	int             ifam_addrs;     
	int             ifam_flags;     
	unsigned short  ifam_index;     
	int             ifam_metric;    
};





struct ifma_msghdr {
	unsigned short  ifmam_msglen;   
	unsigned char   ifmam_version;  
	unsigned char   ifmam_type;     
	int             ifmam_addrs;    
	int             ifmam_flags;    
	unsigned short  ifmam_index;    
};





struct if_msghdr2 {
	u_short ifm_msglen;     
	u_char  ifm_version;    
	u_char  ifm_type;       
	int     ifm_addrs;      
	int     ifm_flags;      
	u_short ifm_index;      
	int     ifm_snd_len;    
	int     ifm_snd_maxlen; 
	int     ifm_snd_drops;  
	int     ifm_timer;      
	struct if_data64        ifm_data;       
};





struct ifma_msghdr2 {
	u_short ifmam_msglen;   
	u_char  ifmam_version;  
	u_char  ifmam_type;     
	int     ifmam_addrs;    
	int     ifmam_flags;    
	u_short ifmam_index;    
	int32_t ifmam_refcount;
};






struct ifdevmtu {
	int     ifdm_current;
	int     ifdm_min;
	int     ifdm_max;
};

#pragma pack(4)


























struct ifkpi {
	unsigned int    ifk_module_id;
	unsigned int    ifk_type;
	union {
		void            *ifk_ptr;
		int             ifk_value;
	} ifk_data;
};




#pragma pack()








struct  ifreq {
	char    ifr_name[16];             
	union {
		struct  sockaddr ifru_addr;
		struct  sockaddr ifru_dstaddr;
		struct  sockaddr ifru_broadaddr;
		short   ifru_flags;
		int     ifru_metric;
		int     ifru_mtu;
		int     ifru_phys;
		int     ifru_media;
		int     ifru_intval;
		caddr_t ifru_data;
		struct  ifdevmtu ifru_devmtu;
		struct  ifkpi   ifru_kpi;
		u_int32_t ifru_wake_flags;
		u_int32_t ifru_route_refcnt;
		int     ifru_cap[2];
		u_int32_t ifru_functional_type;
		u_int32_t ifru_peer_egress_functional_type;
		u_int8_t ifru_is_directlink;
		u_int8_t ifru_is_vpn;
		u_int8_t ifru_is_companionlink;
	} ifr_ifru;
};


struct ifaliasreq {
	char    ifra_name[16];            
	struct  sockaddr ifra_addr;
	struct  sockaddr ifra_broadaddr;
	struct  sockaddr ifra_mask;
};

struct rslvmulti_req {
	struct sockaddr *sa;
	struct sockaddr **llsa;
};

#pragma pack(4)

struct ifmediareq {
	char    ifm_name[16];     
	int     ifm_current;            
	int     ifm_mask;               
	int     ifm_status;             
	int     ifm_active;             
	int     ifm_count;              
	int     *ifm_ulist;             
};

#pragma pack()


#pragma pack(4)
struct  ifdrv {
	char            ifd_name[16];     
	unsigned long   ifd_cmd;
	size_t          ifd_len;                
	void            *ifd_data;
};
#pragma pack()









struct ifstat {
	char    ifs_name[16];     
	char    ascii[800 + 1];
};







#pragma pack(4)
struct  ifconf {
	int     ifc_len;                
	union {
		caddr_t ifcu_buf;
		struct  ifreq *ifcu_req;
	} ifc_ifcu;
};
#pragma pack()




struct kev_dl_proto_data {
	struct net_event_data           link_data;
	u_int32_t                       proto_family;
	u_int32_t                       proto_remaining_count;
};


struct if_nameindex {
	unsigned int     if_index;      
	char            *if_name;       
};


unsigned int     if_nametoindex(const char *);
char            *if_indextoname(unsigned int, char *);
struct           if_nameindex *if_nameindex(void);
void             if_freenameindex(struct if_nameindex *);



#line 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/sockio.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/ioccom.h"






























































#line 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/sockio.h"


































#line 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/ioctl.h"


#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 95 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/ioctl.h"


int     ioctl(int, unsigned long, ...);









#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/ioctl_compat.h"





































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/ttychars.h"
































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/appleapiopts.h"



























#line 68 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/ttychars.h"







struct ttychars {
	char    tc_erase;       
	char    tc_kill;        
	char    tc_intrc;       
	char    tc_quitc;       
	char    tc_startc;      
	char    tc_stopc;       
	char    tc_eofc;        
	char    tc_brkc;        
	char    tc_suspc;       
	char    tc_dsuspc;      
	char    tc_rprntc;      
	char    tc_flushc;      
	char    tc_werasc;      
	char    tc_lnextc;      
};
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/ttydefaults.h"





















































































#line 94 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/ttychars.h"

#line 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/ioctl_compat.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/ttydev.h"


































































#line 74 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/ioctl_compat.h"

struct tchars {
	char    t_intrc;        
	char    t_quitc;        
	char    t_startc;       
	char    t_stopc;        
	char    t_eofc;         
	char    t_brkc;         
};

struct ltchars {
	char    t_suspc;        
	char    t_dsuspc;       
	char    t_rprntc;       
	char    t_flushc;       
	char    t_werasc;       
	char    t_lnextc;       
};




struct sgttyb {
	char    sg_ispeed;              
	char    sg_ospeed;              
	char    sg_erase;               
	char    sg_kill;                
	short   sg_flags;               
};







#line 110 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/ioctl.h"
#line 45 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sgtty.h"


int	gtty(int, struct sgttyb *);
int	stty(int, struct sgttyb *);


#line 83 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/signal.h"


























































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/signal.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 63 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/signal.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/signal.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/signal.h"



































































#line 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/signal.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h"



























#line 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/signal.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_t.h"


























#line 68 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/signal.h"



extern const char *const sys_signame[32];
extern const char *const sys_siglist[32];


int	raise(int);



void	(*  bsd_signal(int, void (* )(int)))(int);
int	kill(pid_t, int) __asm("_" "kill" );
int	killpg(pid_t, int) __asm("_" "killpg" );
int	pthread_kill(pthread_t, int);
int	pthread_sigmask(int, const sigset_t *, sigset_t *) __asm("_" "pthread_sigmask" );
int	sigaction(int, const struct sigaction * restrict,
	    struct sigaction * restrict);
int	sigaddset(sigset_t *, int);
int	sigaltstack(const stack_t * restrict, stack_t * restrict)  __asm("_" "sigaltstack" )  ;
int	sigdelset(sigset_t *, int);
int	sigemptyset(sigset_t *);
int	sigfillset(sigset_t *);
int	sighold(int);
int	sigignore(int);
int	siginterrupt(int, int);
int	sigismember(const sigset_t *, int);
int	sigpause(int) __asm("_" "sigpause"  );
int	sigpending(sigset_t *);
int	sigprocmask(int, const sigset_t * restrict, sigset_t * restrict);
int	sigrelse(int);
void    (*  sigset(int, void (* )(int)))(int);
int	sigsuspend(const sigset_t *) __asm("_" "sigsuspend"  );
int	sigwait(const sigset_t * restrict, int * restrict) __asm("_" "sigwait"  );
void	psignal(int, const char *);
int	sigblock(int);
int	sigsetmask(int);
int	sigvec(int, struct sigvec *, struct sigvec *);



inline __attribute__ ((__always_inline__)) int
__sigbits(int __signo)
{
    return __signo > 32 ? 0 : (1 << (__signo - 1));
}

#line 85 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/spawn.h"





























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/spawn.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/spawn.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/spawn.h"

























































#line 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/spawn.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/spawn.h"





#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_pid_t.h"


























#line 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/spawn.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_sigset_t.h"


























#line 44 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/spawn.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_mode_t.h"


























#line 45 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/spawn.h"






typedef  void *posix_spawnattr_t;
typedef  void *posix_spawn_file_actions_t;







int     posix_spawn(pid_t * restrict, const char * restrict,
    const posix_spawn_file_actions_t *,
    const posix_spawnattr_t * restrict,
    char *const __argv[restrict],
    char *const __envp[restrict])  ;

int     posix_spawnp(pid_t * restrict, const char * restrict,
    const posix_spawn_file_actions_t *,
    const posix_spawnattr_t * restrict,
    char *const __argv[restrict],
    char *const __envp[restrict]) ;

int     posix_spawn_file_actions_addchdir(posix_spawn_file_actions_t *,
    const char * restrict)  ;

int     posix_spawn_file_actions_addfchdir(posix_spawn_file_actions_t *,
    int)  ;

int     posix_spawn_file_actions_addclose(posix_spawn_file_actions_t *, int)  ;

int     posix_spawn_file_actions_adddup2(posix_spawn_file_actions_t *, int,
    int)  ;

int     posix_spawn_file_actions_addopen(
	posix_spawn_file_actions_t * restrict, int,
	const char * restrict, int, mode_t)  ;

int     posix_spawn_file_actions_destroy(posix_spawn_file_actions_t *)  ;

int     posix_spawn_file_actions_init(posix_spawn_file_actions_t *)  ;

int     posix_spawnattr_destroy(posix_spawnattr_t *)  ;

int     posix_spawnattr_getsigdefault(const posix_spawnattr_t * restrict,
    sigset_t * restrict)  ;

int     posix_spawnattr_getflags(const posix_spawnattr_t * restrict,
    short * restrict)  ;

int     posix_spawnattr_getpgroup(const posix_spawnattr_t * restrict,
    pid_t * restrict)  ;

int     posix_spawnattr_getsigmask(const posix_spawnattr_t * restrict,
    sigset_t * restrict)  ;

int     posix_spawnattr_init(posix_spawnattr_t *)  ;

int     posix_spawnattr_setsigdefault(posix_spawnattr_t * restrict,
    const sigset_t * restrict)  ;

int     posix_spawnattr_setflags(posix_spawnattr_t *, short)  ;

int     posix_spawnattr_setpgroup(posix_spawnattr_t *, pid_t)  ;

int     posix_spawnattr_setsigmask(posix_spawnattr_t * restrict,
    const sigset_t * restrict)  ;







#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/exception_types.h"



























































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/machine/exception.h"





























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/arm/exception.h"




























































#line 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/machine/exception.h"
#line 63 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/exception_types.h"













































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/port.h"






















































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 90 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/port.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h"




#line 91 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/port.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/boolean.h"





































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/machine/boolean.h"





























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/arm/boolean.h"


































































typedef int             boolean_t;

#line 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/machine/boolean.h"
#line 74 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/boolean.h"






#line 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/port.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/machine/vm_types.h"





























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/arm/vm_types.h"





































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"


#line 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/arm/vm_types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h"




#line 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/arm/vm_types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/arm/vm_types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/arm/vm_types.h"


















typedef __darwin_natural_t      natural_t;
typedef int                     integer_t;





typedef uintptr_t               vm_offset_t ;
typedef uintptr_t               vm_size_t;

typedef uint64_t                mach_vm_address_t ;
typedef uint64_t                mach_vm_offset_t ;
typedef uint64_t                mach_vm_size_t;

typedef uint64_t                vm_map_offset_t ;
typedef uint64_t                vm_map_address_t ;
typedef uint64_t                vm_map_size_t;


typedef uint32_t                vm32_offset_t;
typedef uint32_t                vm32_address_t;
typedef uint32_t                vm32_size_t;

typedef vm_offset_t             mach_port_context_t;







#line 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/machine/vm_types.h"
#line 93 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/port.h"













typedef natural_t mach_port_name_t;
typedef mach_port_name_t *mach_port_name_array_t;


















#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 127 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/port.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_mach_port_t.h"













































#line 128 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/port.h"


typedef mach_port_t                     *mach_port_array_t;

































typedef natural_t mach_port_right_t;



typedef natural_t mach_port_type_t;
typedef mach_port_type_t *mach_port_type_array_t;








typedef natural_t mach_port_urefs_t;
typedef integer_t mach_port_delta_t;                    



typedef natural_t mach_port_seqno_t;            
typedef natural_t mach_port_mscount_t;          
typedef natural_t mach_port_msgcount_t;         
typedef natural_t mach_port_rights_t;           




typedef unsigned int mach_port_srights_t;       

typedef struct mach_port_status {
	mach_port_rights_t      mps_pset;       
	mach_port_seqno_t       mps_seqno;      
	mach_port_mscount_t     mps_mscount;    
	mach_port_msgcount_t    mps_qlimit;     
	mach_port_msgcount_t    mps_msgcount;   
	mach_port_rights_t      mps_sorights;   
	boolean_t               mps_srights;    
	boolean_t               mps_pdrequest;  
	boolean_t               mps_nsrequest;  
	natural_t               mps_flags;              
} mach_port_status_t;



typedef struct mach_port_limits {
	mach_port_msgcount_t    mpl_qlimit;     
} mach_port_limits_t;



typedef struct mach_port_info_ext {
	mach_port_status_t      mpie_status;
	mach_port_msgcount_t    mpie_boost_cnt;
	uint32_t                reserved[6];
} mach_port_info_ext_t;

typedef struct mach_port_guard_info {
	uint64_t    mpgi_guard;     
} mach_port_guard_info_t;

typedef integer_t *mach_port_info_t;            


typedef int     mach_port_flavor_t;






typedef struct mach_port_qos {
	unsigned int            name:1;         
	unsigned int            prealloc:1;     
	boolean_t               pad1:30;
	natural_t               len;
} mach_port_qos_t;





typedef struct mach_service_port_info {
	char                    mspi_string_name[255]; 
	uint8_t                 mspi_domain_type;          
} mach_service_port_info_data_t;


typedef struct mach_service_port_info * mach_service_port_info_t;




























typedef uint32_t mpo_flags_t; enum {
	
	MPO_PORT                            = (((0 & 0x7) << 14) | ((0 & 0x7) << 10)),  
	
	MPO_SERVICE_PORT                    = (((0 & 0x7) << 14) | ((1 & 0x7) << 10)),  
	
	MPO_CONNECTION_PORT                 = (((0 & 0x7) << 14) | ((2 & 0x7) << 10)),  
	
	MPO_REPLY_PORT                      = (((0 & 0x7) << 14) | ((4 & 0x7) << 10)),  
	
	MPO_PROVISIONAL_REPLY_PORT          = (((1 & 0x7) << 14) | ((0 & 0x7) << 10)),  
	
	MPO_EXCEPTION_PORT                  = (((2 & 0x7) << 14) | ((0 & 0x7) << 10)),  
	
	MPO_CONNECTION_PORT_WITH_PORT_ARRAY = (((4 & 0x7) << 14) | ((0 & 0x7) << 10)),  
}  ;







typedef struct mach_port_options {
	uint32_t                flags;
	mach_port_limits_t      mpl;            
	union {
		uint64_t                   reserved[2];           
		mach_port_name_t           work_interval_port;    
		mach_service_port_info_t   service_port_info;     
		mach_port_name_t           service_port_name;     
	};
}mach_port_options_t;

typedef mach_port_options_t *mach_port_options_ptr_t;



















enum mach_port_guard_exception_codes {
	kGUARD_EXC_NONE                         = 0,        
	kGUARD_EXC_DESTROY                      = 1,
	kGUARD_EXC_MOD_REFS                     = 2,
	kGUARD_EXC_INVALID_OPTIONS              = 3,
	kGUARD_EXC_SET_CONTEXT                  = 4,
	kGUARD_EXC_THREAD_SET_STATE             = 5,
	kGUARD_EXC_EXCEPTION_BEHAVIOR_ENFORCE   = 6,
	kGUARD_EXC_SERVICE_PORT_VIOLATION_FATAL = 7,        
	kGUARD_EXC_UNGUARDED                    = 8,
	kGUARD_EXC_KOBJECT_REPLY_PORT_SEMANTICS = 9,
	kGUARD_EXC_REQUIRE_REPLY_PORT_SEMANTICS = 10,
	kGUARD_EXC_INCORRECT_GUARD              = 16,
	kGUARD_EXC_IMMOVABLE                    = 32,
	kGUARD_EXC_STRICT_REPLY                 = 64,
	kGUARD_EXC_INVALID_NOTIFICATION_REQ     = 65,
	kGUARD_EXC_INVALID_MPO_ENTITLEMENT      = 66,
	kGUARD_EXC_DESCRIPTOR_VIOLATION         = 67,
	kGUARD_EXC_MSG_FILTERED                 = 128,
	
	kGUARD_EXC_INVALID_RIGHT                = 256,
	kGUARD_EXC_INVALID_NAME                 = 512,
	kGUARD_EXC_INVALID_VALUE                = 1u << 10,
	kGUARD_EXC_INVALID_ARGUMENT             = 1u << 11, 
	kGUARD_EXC_RIGHT_EXISTS                 = 1u << 12, 
	kGUARD_EXC_KERN_NO_SPACE                = 1u << 13, 
	kGUARD_EXC_KERN_FAILURE                 = 1u << 14, 
	kGUARD_EXC_KERN_RESOURCE                = 1u << 15, 
	kGUARD_EXC_SEND_INVALID_REPLY           = 1u << 16,
	kGUARD_EXC_SEND_INVALID_VOUCHER         = 1u << 17,
	kGUARD_EXC_SEND_INVALID_RIGHT           = 1u << 18,
	kGUARD_EXC_RCV_INVALID_NAME             = 1u << 19,
	
	kGUARD_EXC_RCV_GUARDED_DESC             = 0x00100000,     
	kGUARD_EXC_SERVICE_PORT_VIOLATION_NON_FATAL = 0x00100001, 
	kGUARD_EXC_PROVISIONAL_REPLY_PORT       = 0x00100002,
	kGUARD_EXC_OOL_PORT_ARRAY_CREATION      = 0x00100003, 
	kGUARD_EXC_MOVE_PROVISIONAL_REPLY_PORT  = 0x00100004,
	kGUARD_EXC_REPLY_PORT_SINGLE_SO_RIGHT   = 0x00100005,
	kGUARD_EXC_MOD_REFS_NON_FATAL           = 1u << 21,
	kGUARD_EXC_IMMOVABLE_NON_FATAL          = 1u << 22, 
};








































#line 182 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/exception_types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/thread_status.h"








































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/machine/vm_types.h"



























#line 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/thread_status.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/machine/thread_status.h"





























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/arm/thread_status.h"


































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/machine/_structs.h"



























#line 39 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/arm/thread_status.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/machine/thread_state.h"





























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/arm/thread_state.h"



































#line 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/machine/thread_state.h"



#line 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/arm/thread_status.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/message.h"







































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stddef.h"



























































#line 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/message.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h"




#line 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/message.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/limits.h"



#line 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/message.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"





























#line 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/message.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/port.h"




















































































#line 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/message.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/boolean.h"































































#line 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/message.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/kern_return.h"



































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/machine/kern_return.h"





























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/arm/kern_return.h"




































































typedef int             kern_return_t;

#line 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/machine/kern_return.h"
#line 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/kern_return.h"
























































































































































































































#line 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/message.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/machine/vm_types.h"



























#line 82 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/message.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 84 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/message.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/appleapiopts.h"



























#line 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/message.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 86 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/message.h"








typedef natural_t mach_msg_timeout_t;

















































































typedef unsigned int mach_msg_bits_t;
typedef natural_t mach_msg_size_t;
typedef integer_t mach_msg_id_t;


typedef unsigned int mach_msg_priority_t;



typedef unsigned int mach_msg_type_name_t;


typedef unsigned int mach_msg_copy_options_t;


typedef unsigned int mach_msg_guard_flags_t;













typedef unsigned int mach_msg_descriptor_type_t;




#pragma pack(push, 4)

typedef struct {
	natural_t                     pad1;
	mach_msg_size_t               pad2;
	unsigned int                  pad3 : 24;
	mach_msg_descriptor_type_t    type : 8;
} mach_msg_type_descriptor_t;

typedef struct {
	mach_port_t                   name;
	mach_msg_size_t               pad1;
	unsigned int                  pad2 : 16;
	mach_msg_type_name_t          disposition : 8;
	mach_msg_descriptor_type_t    type : 8;
} mach_msg_port_descriptor_t;


typedef struct {
	uint32_t                      address;
	mach_msg_size_t               size;
	boolean_t                     deallocate: 8;
	mach_msg_copy_options_t       copy: 8;
	unsigned int                  pad1: 8;
	mach_msg_descriptor_type_t    type: 8;
} mach_msg_ool_descriptor32_t;

typedef struct {
	uint64_t                      address;
	boolean_t                     deallocate: 8;
	mach_msg_copy_options_t       copy: 8;
	unsigned int                  pad1: 8;
	mach_msg_descriptor_type_t    type: 8;
	mach_msg_size_t               size;
} mach_msg_ool_descriptor64_t;

typedef struct {
	void                         *address;
	boolean_t                     deallocate: 8;
	mach_msg_copy_options_t       copy: 8;
	unsigned int                  pad1: 8;
	mach_msg_descriptor_type_t    type: 8;
	mach_msg_size_t               size;
} mach_msg_ool_descriptor_t;

typedef struct {
	uint32_t                      address;
	mach_msg_size_t               count;
	boolean_t                     deallocate: 8;
	mach_msg_copy_options_t       copy: 8;
	mach_msg_type_name_t          disposition : 8;
	mach_msg_descriptor_type_t    type : 8;
} mach_msg_ool_ports_descriptor32_t;

typedef struct {
	uint64_t                      address;
	boolean_t                     deallocate: 8;
	mach_msg_copy_options_t       copy: 8;
	mach_msg_type_name_t          disposition : 8;
	mach_msg_descriptor_type_t    type : 8;
	mach_msg_size_t               count;
} mach_msg_ool_ports_descriptor64_t;

typedef struct {
	void                         *address;
	boolean_t                     deallocate: 8;
	mach_msg_copy_options_t       copy: 8;
	mach_msg_type_name_t          disposition : 8;
	mach_msg_descriptor_type_t    type : 8;
	mach_msg_size_t               count;
} mach_msg_ool_ports_descriptor_t;

typedef struct {
	uint32_t                      context;
	mach_port_name_t              name;
	mach_msg_guard_flags_t        flags : 16;
	mach_msg_type_name_t          disposition : 8;
	mach_msg_descriptor_type_t    type : 8;
} mach_msg_guarded_port_descriptor32_t;

typedef struct {
	uint64_t                      context;
	mach_msg_guard_flags_t        flags : 16;
	mach_msg_type_name_t          disposition : 8;
	mach_msg_descriptor_type_t    type : 8;
	mach_port_name_t              name;
} mach_msg_guarded_port_descriptor64_t;

typedef struct {
	mach_port_context_t           context;
	mach_msg_guard_flags_t        flags : 16;
	mach_msg_type_name_t          disposition : 8;
	mach_msg_descriptor_type_t    type : 8;
	mach_port_name_t              name;
} mach_msg_guarded_port_descriptor_t;






typedef union {
	mach_msg_port_descriptor_t            port;
	mach_msg_ool_descriptor_t             out_of_line;
	mach_msg_ool_ports_descriptor_t       ool_ports;
	mach_msg_type_descriptor_t            type;
	mach_msg_guarded_port_descriptor_t    guarded_port;
} mach_msg_descriptor_t;

typedef struct {
	mach_msg_size_t msgh_descriptor_count;
} mach_msg_body_t;


typedef struct {
	mach_msg_bits_t               msgh_bits;
	mach_msg_size_t               msgh_size;
	mach_port_t                   msgh_remote_port;
	mach_port_t                   msgh_local_port;
	mach_port_name_t              msgh_voucher_port;
	mach_msg_id_t                 msgh_id;
} mach_msg_header_t;



typedef struct {
	mach_msg_header_t             header;
	mach_msg_body_t               body;
} mach_msg_base_t;


typedef unsigned int mach_msg_trailer_type_t;


typedef unsigned int mach_msg_trailer_size_t;
typedef char *mach_msg_trailer_info_t;

typedef struct {
	mach_msg_trailer_type_t       msgh_trailer_type;
	mach_msg_trailer_size_t       msgh_trailer_size;
} mach_msg_trailer_t;










typedef struct {
	mach_msg_trailer_type_t       msgh_trailer_type;
	mach_msg_trailer_size_t       msgh_trailer_size;
	mach_port_seqno_t             msgh_seqno;
} mach_msg_seqno_trailer_t;

typedef struct {
	unsigned int                  val[2];
} security_token_t;

typedef struct {
	mach_msg_trailer_type_t       msgh_trailer_type;
	mach_msg_trailer_size_t       msgh_trailer_size;
	mach_port_seqno_t             msgh_seqno;
	security_token_t              msgh_sender;
} mach_msg_security_trailer_t;










typedef struct {
	unsigned int                  val[8];
} audit_token_t;














typedef struct {
	mach_msg_trailer_type_t       msgh_trailer_type;
	mach_msg_trailer_size_t       msgh_trailer_size;
	mach_port_seqno_t             msgh_seqno;
	security_token_t              msgh_sender;
	audit_token_t                 msgh_audit;
} mach_msg_audit_trailer_t;

typedef struct {
	mach_msg_trailer_type_t       msgh_trailer_type;
	mach_msg_trailer_size_t       msgh_trailer_size;
	mach_port_seqno_t             msgh_seqno;
	security_token_t              msgh_sender;
	audit_token_t                 msgh_audit;
	mach_port_context_t           msgh_context;
} mach_msg_context_trailer_t;



typedef struct {
	mach_port_name_t sender;
} msg_labels_t;

typedef int mach_msg_filter_id;






typedef struct {
	mach_msg_trailer_type_t       msgh_trailer_type;
	mach_msg_trailer_size_t       msgh_trailer_size;
	mach_port_seqno_t             msgh_seqno;
	security_token_t              msgh_sender;
	audit_token_t                 msgh_audit;
	mach_port_context_t           msgh_context;
	mach_msg_filter_id            msgh_ad;
	msg_labels_t                  msgh_labels;
} mach_msg_mac_trailer_t;













typedef mach_msg_mac_trailer_t mach_msg_max_trailer_t;








typedef mach_msg_security_trailer_t mach_msg_format_0_trailer_t;





extern const security_token_t KERNEL_SECURITY_TOKEN;

extern const audit_token_t KERNEL_AUDIT_TOKEN;

typedef integer_t mach_msg_options_t;


typedef struct {
	mach_msg_header_t     header;
} mach_msg_empty_send_t;

typedef struct {
	mach_msg_header_t     header;
	mach_msg_trailer_t    trailer;
} mach_msg_empty_rcv_t;

typedef union{
	mach_msg_empty_send_t send;
	mach_msg_empty_rcv_t  rcv;
} mach_msg_empty_t;

#pragma pack(pop)





















typedef natural_t mach_msg_type_size_t;
typedef natural_t mach_msg_type_number_t;



























typedef integer_t mach_msg_option_t;












































typedef kern_return_t mach_msg_return_t;







































































 
extern mach_msg_return_t        mach_msg_overwrite(
	mach_msg_header_t *msg,
	mach_msg_option_t option,
	mach_msg_size_t send_size,
	mach_msg_size_t rcv_size,
	mach_port_name_t rcv_name,
	mach_msg_timeout_t timeout,
	mach_port_name_t notify,
	mach_msg_header_t *rcv_msg,
	mach_msg_size_t rcv_limit);










 
extern mach_msg_return_t        mach_msg(
	mach_msg_header_t *msg,
	mach_msg_option_t option,
	mach_msg_size_t send_size,
	mach_msg_size_t rcv_size,
	mach_port_name_t rcv_name,
	mach_msg_timeout_t timeout,
	mach_port_name_t notify);








 
extern kern_return_t            mach_voucher_deallocate(
	mach_port_name_t voucher);



#line 41 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/arm/thread_status.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/vm_types.h"
































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/port.h"




















































































#line 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/vm_types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/machine/vm_types.h"



























#line 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/vm_types.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h"




#line 39 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/vm_types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/vm_types.h"



typedef vm_offset_t             pointer_t ;
typedef vm_offset_t             vm_address_t ;







typedef uint64_t addr64_t;              











typedef uint32_t        reg64_t;






typedef uint32_t ppnum_t ; 







typedef mach_port_t             vm_map_t, vm_map_read_t, vm_map_inspect_t;
typedef mach_port_t             upl_t;
typedef mach_port_t             vm_named_entry_t;


typedef mach_vm_offset_t                *mach_vm_offset_list_t;






typedef uint64_t                vm_object_offset_t;
typedef uint64_t                vm_object_size_t;










typedef struct mach_vm_range {
	mach_vm_offset_t        min_address;
	mach_vm_offset_t        max_address;
} *mach_vm_range_t;










typedef uint32_t mach_vm_range_flavor_t; enum {
	MACH_VM_RANGE_FLAVOR_INVALID,
	MACH_VM_RANGE_FLAVOR_V1,
} ;








typedef uint64_t mach_vm_range_flags_t; enum {
	MACH_VM_RANGE_NONE      = 0x000000000000,
}  ;

























typedef uint16_t mach_vm_range_tag_t; enum {
	MACH_VM_RANGE_DEFAULT,
	MACH_VM_RANGE_DATA,
	MACH_VM_RANGE_FIXED,
} ;

#pragma pack(1)

typedef struct {
	mach_vm_range_flags_t   flags: 48;
	mach_vm_range_tag_t     range_tag  : 8;
	uint8_t                 vm_tag : 8;
	struct mach_vm_range    range;
} mach_vm_range_recipe_v1_t;

#pragma pack()

typedef mach_vm_range_recipe_v1_t    mach_vm_range_recipe_t;

typedef uint8_t                *mach_vm_range_recipes_raw_t;



#line 42 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/arm/thread_status.h"





























struct arm_state_hdr {
	uint32_t flavor;
	uint32_t count;
};
typedef struct arm_state_hdr arm_state_hdr_t;

typedef struct __darwin_arm_thread_state   arm_thread_state_t;
typedef struct __darwin_arm_thread_state   arm_thread_state32_t;
typedef struct __darwin_arm_thread_state64 arm_thread_state64_t;























struct arm_unified_thread_state {
	arm_state_hdr_t ash;
	union {
		arm_thread_state32_t ts_32;
		arm_thread_state64_t ts_64;
	} uts;
};
typedef struct arm_unified_thread_state arm_unified_thread_state_t;



typedef struct __darwin_arm_vfp_state         arm_vfp_state_t;
typedef struct __darwin_arm_neon_state        arm_neon_state_t;
typedef struct __darwin_arm_neon_state        arm_neon_state32_t;
typedef struct __darwin_arm_neon_state64      arm_neon_state64_t;


typedef struct __darwin_arm_exception_state   arm_exception_state_t;
typedef struct __darwin_arm_exception_state   arm_exception_state32_t;
typedef struct __darwin_arm_exception_state64 arm_exception_state64_t;
typedef struct __darwin_arm_exception_state64_v2 arm_exception_state64_v2_t;

typedef struct __darwin_arm_debug_state32     arm_debug_state32_t;
typedef struct __darwin_arm_debug_state64     arm_debug_state64_t;

typedef struct __arm_pagein_state      arm_pagein_state_t;

typedef struct __darwin_arm_sme_state         arm_sme_state_t;
typedef struct __darwin_arm_sve_z_state       arm_sve_z_state_t;
typedef struct __darwin_arm_sve_p_state       arm_sve_p_state_t;
typedef struct __darwin_arm_sme_za_state      arm_sme_za_state_t;
typedef struct __darwin_arm_sme2_state        arm_sme2_state_t;





typedef struct __arm_legacy_debug_state arm_debug_state_t;























#line 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/machine/thread_status.h"
#line 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/thread_status.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/machine/thread_state.h"



























#line 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/thread_status.h"





typedef natural_t       *thread_state_t;        


typedef natural_t       thread_state_data_t[1296];


typedef int                     thread_state_flavor_t;
typedef thread_state_flavor_t   *thread_state_flavor_array_t;

#line 183 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/exception_types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/machine/vm_types.h"



























#line 184 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/exception_types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach_debug/ipc_info.h"


































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/boolean.h"































































#line 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach_debug/ipc_info.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/port.h"




















































































#line 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach_debug/ipc_info.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/machine/vm_types.h"



























#line 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach_debug/ipc_info.h"
















typedef natural_t ipc_info_object_type_t; enum {
	IPC_OTYPE_NONE                  = 0,
	IPC_OTYPE_THREAD_CONTROL        = 1,
	IPC_OTYPE_TASK_CONTROL          = 2,
	IPC_OTYPE_HOST                  = 3,
	IPC_OTYPE_HOST_PRIV             = 4,
	IPC_OTYPE_PROCESSOR             = 5,
	IPC_OTYPE_PROCESSOR_SET         = 6,
	IPC_OTYPE_PROCESSOR_SET_NAME    = 7,
	IPC_OTYPE_TIMER                 = 8,
	IPC_OTYPE_PORT_SUBST_ONCE       = 9,  
	IPC_OTYPE_MIG                   = 10, 
	IPC_OTYPE_MEMORY_OBJECT         = 11, 
	IPC_OTYPE_XMM_PAGER             = 12, 
	IPC_OTYPE_XMM_KERNEL            = 13, 
	IPC_OTYPE_XMM_REPLY             = 14, 
	IPC_OTYPE_UND_REPLY             = 15,
	IPC_OTYPE_HOST_NOTIFY           = 16, 
	IPC_OTYPE_HOST_SECURITY         = 17, 
	IPC_OTYPE_LEDGER                = 18, 
	IPC_OTYPE_MAIN_DEVICE           = 19,
	IPC_OTYPE_TASK_NAME             = 20,
	IPC_OTYPE_SUBSYSTEM             = 21, 
	IPC_OTYPE_IO_DONE_QUEUE         = 22, 
	IPC_OTYPE_SEMAPHORE             = 23,
	IPC_OTYPE_LOCK_SET              = 24, 
	IPC_OTYPE_CLOCK                 = 25,
	IPC_OTYPE_CLOCK_CTRL            = 26, 
	IPC_OTYPE_IOKIT_IDENT           = 27,
	IPC_OTYPE_NAMED_ENTRY           = 28,
	IPC_OTYPE_IOKIT_CONNECT         = 29,
	IPC_OTYPE_IOKIT_OBJECT          = 30,
	IPC_OTYPE_UPL                   = 31, 
	IPC_OTYPE_MEM_OBJ_CONTROL       = 32, 
	IPC_OTYPE_AU_SESSIONPORT        = 33,
	IPC_OTYPE_FILEPORT              = 34,
	IPC_OTYPE_LABELH                = 35, 
	IPC_OTYPE_TASK_RESUME           = 36,
	IPC_OTYPE_VOUCHER               = 37,
	IPC_OTYPE_VOUCHER_ATTR_CONTROL  = 38, 
	IPC_OTYPE_WORK_INTERVAL         = 39,
	IPC_OTYPE_UX_HANDLER            = 40,
	IPC_OTYPE_UEXT_OBJECT           = 41,
	IPC_OTYPE_ARCADE_REG            = 42,
	IPC_OTYPE_EVENTLINK             = 43,
	IPC_OTYPE_TASK_INSPECT          = 44,
	IPC_OTYPE_TASK_READ             = 45,
	IPC_OTYPE_THREAD_INSPECT        = 46,
	IPC_OTYPE_THREAD_READ           = 47,
	IPC_OTYPE_SUID_CRED             = 48, 
	IPC_OTYPE_HYPERVISOR            = 49,
	IPC_OTYPE_TASK_ID_TOKEN         = 50,
	IPC_OTYPE_TASK_FATAL            = 51,
	IPC_OTYPE_KCDATA                = 52,
	IPC_OTYPE_EXCLAVES_RESOURCE     = 53,

	
	IPC_OTYPE_UNKNOWN               = ~0u,
} ;






typedef struct ipc_info_space {
	natural_t iis_genno_mask;       
	natural_t iis_table_size;       
	natural_t iis_table_next;       
	natural_t iis_tree_size;        
	natural_t iis_tree_small;       
	natural_t iis_tree_hash;        
} ipc_info_space_t;

typedef struct ipc_info_space_basic {
	natural_t iisb_genno_mask;      
	natural_t iisb_table_size;      
	natural_t iisb_table_next;      
	natural_t iisb_table_inuse;     
	natural_t iisb_reserved[2];     
} ipc_info_space_basic_t;

typedef struct ipc_info_name {
	mach_port_name_t iin_name;              
 integer_t iin_collision;   
	mach_port_type_t iin_type;      
	mach_port_urefs_t iin_urefs;    
	natural_t iin_object;           
	natural_t iin_next;             
	natural_t iin_hash;             
} ipc_info_name_t;

typedef ipc_info_name_t *ipc_info_name_array_t;


typedef struct ipc_info_tree_name {
	ipc_info_name_t iitn_name;
	mach_port_name_t iitn_lchild;   
	mach_port_name_t iitn_rchild;   
} ipc_info_tree_name_t;

typedef ipc_info_tree_name_t *ipc_info_tree_name_array_t;

typedef struct ipc_info_port {
	natural_t iip_port_object;      
	natural_t iip_receiver_object;  
} ipc_info_port_t;

typedef ipc_info_port_t *exception_handler_info_array_t;
#line 185 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/exception_types.h"




typedef int                             exception_type_t;
typedef integer_t                       exception_data_type_t;
typedef int64_t                         mach_exception_data_type_t;
typedef int                             exception_behavior_t;
typedef exception_data_type_t           *exception_data_t;
typedef mach_exception_data_type_t      *mach_exception_data_t;
typedef unsigned int                    exception_mask_t;
typedef exception_mask_t                *exception_mask_array_t;
typedef exception_behavior_t            *exception_behavior_array_t;
typedef thread_state_flavor_t           *exception_flavor_array_t;
typedef mach_port_t                     *exception_port_array_t;
typedef ipc_info_port_t                 *exception_port_info_array_t;
typedef mach_exception_data_type_t      mach_exception_code_t;
typedef mach_exception_data_type_t      mach_exception_subcode_t;

#line 134 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/spawn.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/machine.h"






























































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h"




#line 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/machine.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/machine/vm_types.h"



























#line 68 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/machine.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/boolean.h"































































#line 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/machine.h"

typedef integer_t       cpu_type_t;
typedef integer_t       cpu_subtype_t;
typedef integer_t       cpu_threadtype_t;





































































































































































#line 135 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/spawn.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/mach/port.h"




















































































#line 136 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/spawn.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"































#line 138 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/spawn.h"



int     posix_spawnattr_getbinpref_np(const posix_spawnattr_t * restrict,
    size_t, cpu_type_t *restrict, size_t *restrict)  ;

int     posix_spawnattr_getarchpref_np(const posix_spawnattr_t * restrict,
    size_t, cpu_type_t *restrict, cpu_subtype_t *restrict, size_t *restrict)  ;

int     posix_spawnattr_setauditsessionport_np(posix_spawnattr_t * restrict,
    mach_port_t) ;

int     posix_spawnattr_setbinpref_np(posix_spawnattr_t * restrict,
    size_t, cpu_type_t *restrict, size_t *restrict)  ;

int     posix_spawnattr_setarchpref_np(posix_spawnattr_t * restrict,
    size_t, cpu_type_t *restrict, cpu_subtype_t *restrict, size_t *restrict)  ;

int     posix_spawnattr_setexceptionports_np(posix_spawnattr_t * restrict,
    exception_mask_t, mach_port_t,
    exception_behavior_t, thread_state_flavor_t)  ;

int     posix_spawnattr_setspecialport_np(posix_spawnattr_t * restrict,
    mach_port_t, int)  ;

int     posix_spawnattr_setnosmt_np(const posix_spawnattr_t * restrict attr) ;





int     posix_spawnattr_set_csm_np(const posix_spawnattr_t * restrict attr, uint32_t flags) ;






int     posix_spawn_file_actions_addinherit_np(posix_spawn_file_actions_t *,
    int)  ;

int     posix_spawn_file_actions_addchdir_np(posix_spawn_file_actions_t *,
    const char * restrict)  ;

int     posix_spawn_file_actions_addfchdir_np(posix_spawn_file_actions_t *,
    int)  ;


#line 86 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stab.h"








































#line 87 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h"




#line 90 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h"




























































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"































































#line 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_stdio.h"






















#line 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h"
#line 91 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdlib.h"

























































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdlib.h"



























































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdlib.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdlib.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 68 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdlib.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdlib.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/wait.h"
































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 68 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/wait.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/wait.h"










typedef enum {
	P_ALL,
	P_PID,
	P_PGID
} idtype_t;





#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_pid_t.h"


























#line 90 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/wait.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_id_t.h"


























#line 91 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/wait.h"


















#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/signal.h"



































































#line 110 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/wait.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/resource.h"
































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/appleapiopts.h"



























#line 68 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/resource.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/resource.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/resource.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h"




#line 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/resource.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/resource.h"




#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_timeval.h"


























#line 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/resource.h"


#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_id_t.h"


























#line 84 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/resource.h"





typedef __uint64_t      rlim_t;

















































struct  rusage {
	struct timeval ru_utime;        
	struct timeval ru_stime;        
	




	long    ru_maxrss;              
	long    ru_ixrss;               
	long    ru_idrss;               
	long    ru_isrss;               
	long    ru_minflt;              
	long    ru_majflt;              
	long    ru_nswap;               
	long    ru_inblock;             
	long    ru_oublock;             
	long    ru_msgsnd;              
	long    ru_msgrcv;              
	long    ru_nsignals;            
	long    ru_nvcsw;               
	long    ru_nivcsw;              
};









typedef void *rusage_info_t;

struct rusage_info_v0 {
	uint8_t  ri_uuid[16];
	uint64_t ri_user_time;
	uint64_t ri_system_time;
	uint64_t ri_pkg_idle_wkups;
	uint64_t ri_interrupt_wkups;
	uint64_t ri_pageins;
	uint64_t ri_wired_size;
	uint64_t ri_resident_size;
	uint64_t ri_phys_footprint;
	uint64_t ri_proc_start_abstime;
	uint64_t ri_proc_exit_abstime;
};

struct rusage_info_v1 {
	uint8_t  ri_uuid[16];
	uint64_t ri_user_time;
	uint64_t ri_system_time;
	uint64_t ri_pkg_idle_wkups;
	uint64_t ri_interrupt_wkups;
	uint64_t ri_pageins;
	uint64_t ri_wired_size;
	uint64_t ri_resident_size;
	uint64_t ri_phys_footprint;
	uint64_t ri_proc_start_abstime;
	uint64_t ri_proc_exit_abstime;
	uint64_t ri_child_user_time;
	uint64_t ri_child_system_time;
	uint64_t ri_child_pkg_idle_wkups;
	uint64_t ri_child_interrupt_wkups;
	uint64_t ri_child_pageins;
	uint64_t ri_child_elapsed_abstime;
};

struct rusage_info_v2 {
	uint8_t  ri_uuid[16];
	uint64_t ri_user_time;
	uint64_t ri_system_time;
	uint64_t ri_pkg_idle_wkups;
	uint64_t ri_interrupt_wkups;
	uint64_t ri_pageins;
	uint64_t ri_wired_size;
	uint64_t ri_resident_size;
	uint64_t ri_phys_footprint;
	uint64_t ri_proc_start_abstime;
	uint64_t ri_proc_exit_abstime;
	uint64_t ri_child_user_time;
	uint64_t ri_child_system_time;
	uint64_t ri_child_pkg_idle_wkups;
	uint64_t ri_child_interrupt_wkups;
	uint64_t ri_child_pageins;
	uint64_t ri_child_elapsed_abstime;
	uint64_t ri_diskio_bytesread;
	uint64_t ri_diskio_byteswritten;
};

struct rusage_info_v3 {
	uint8_t  ri_uuid[16];
	uint64_t ri_user_time;
	uint64_t ri_system_time;
	uint64_t ri_pkg_idle_wkups;
	uint64_t ri_interrupt_wkups;
	uint64_t ri_pageins;
	uint64_t ri_wired_size;
	uint64_t ri_resident_size;
	uint64_t ri_phys_footprint;
	uint64_t ri_proc_start_abstime;
	uint64_t ri_proc_exit_abstime;
	uint64_t ri_child_user_time;
	uint64_t ri_child_system_time;
	uint64_t ri_child_pkg_idle_wkups;
	uint64_t ri_child_interrupt_wkups;
	uint64_t ri_child_pageins;
	uint64_t ri_child_elapsed_abstime;
	uint64_t ri_diskio_bytesread;
	uint64_t ri_diskio_byteswritten;
	uint64_t ri_cpu_time_qos_default;
	uint64_t ri_cpu_time_qos_maintenance;
	uint64_t ri_cpu_time_qos_background;
	uint64_t ri_cpu_time_qos_utility;
	uint64_t ri_cpu_time_qos_legacy;
	uint64_t ri_cpu_time_qos_user_initiated;
	uint64_t ri_cpu_time_qos_user_interactive;
	uint64_t ri_billed_system_time;
	uint64_t ri_serviced_system_time;
};

struct rusage_info_v4 {
	uint8_t  ri_uuid[16];
	uint64_t ri_user_time;
	uint64_t ri_system_time;
	uint64_t ri_pkg_idle_wkups;
	uint64_t ri_interrupt_wkups;
	uint64_t ri_pageins;
	uint64_t ri_wired_size;
	uint64_t ri_resident_size;
	uint64_t ri_phys_footprint;
	uint64_t ri_proc_start_abstime;
	uint64_t ri_proc_exit_abstime;
	uint64_t ri_child_user_time;
	uint64_t ri_child_system_time;
	uint64_t ri_child_pkg_idle_wkups;
	uint64_t ri_child_interrupt_wkups;
	uint64_t ri_child_pageins;
	uint64_t ri_child_elapsed_abstime;
	uint64_t ri_diskio_bytesread;
	uint64_t ri_diskio_byteswritten;
	uint64_t ri_cpu_time_qos_default;
	uint64_t ri_cpu_time_qos_maintenance;
	uint64_t ri_cpu_time_qos_background;
	uint64_t ri_cpu_time_qos_utility;
	uint64_t ri_cpu_time_qos_legacy;
	uint64_t ri_cpu_time_qos_user_initiated;
	uint64_t ri_cpu_time_qos_user_interactive;
	uint64_t ri_billed_system_time;
	uint64_t ri_serviced_system_time;
	uint64_t ri_logical_writes;
	uint64_t ri_lifetime_max_phys_footprint;
	uint64_t ri_instructions;
	uint64_t ri_cycles;
	uint64_t ri_billed_energy;
	uint64_t ri_serviced_energy;
	uint64_t ri_interval_max_phys_footprint;
	uint64_t ri_runnable_time;
};

struct rusage_info_v5 {
	uint8_t  ri_uuid[16];
	uint64_t ri_user_time;
	uint64_t ri_system_time;
	uint64_t ri_pkg_idle_wkups;
	uint64_t ri_interrupt_wkups;
	uint64_t ri_pageins;
	uint64_t ri_wired_size;
	uint64_t ri_resident_size;
	uint64_t ri_phys_footprint;
	uint64_t ri_proc_start_abstime;
	uint64_t ri_proc_exit_abstime;
	uint64_t ri_child_user_time;
	uint64_t ri_child_system_time;
	uint64_t ri_child_pkg_idle_wkups;
	uint64_t ri_child_interrupt_wkups;
	uint64_t ri_child_pageins;
	uint64_t ri_child_elapsed_abstime;
	uint64_t ri_diskio_bytesread;
	uint64_t ri_diskio_byteswritten;
	uint64_t ri_cpu_time_qos_default;
	uint64_t ri_cpu_time_qos_maintenance;
	uint64_t ri_cpu_time_qos_background;
	uint64_t ri_cpu_time_qos_utility;
	uint64_t ri_cpu_time_qos_legacy;
	uint64_t ri_cpu_time_qos_user_initiated;
	uint64_t ri_cpu_time_qos_user_interactive;
	uint64_t ri_billed_system_time;
	uint64_t ri_serviced_system_time;
	uint64_t ri_logical_writes;
	uint64_t ri_lifetime_max_phys_footprint;
	uint64_t ri_instructions;
	uint64_t ri_cycles;
	uint64_t ri_billed_energy;
	uint64_t ri_serviced_energy;
	uint64_t ri_interval_max_phys_footprint;
	uint64_t ri_runnable_time;
	uint64_t ri_flags;
};

struct rusage_info_v6 {
	uint8_t  ri_uuid[16];
	uint64_t ri_user_time;
	uint64_t ri_system_time;
	uint64_t ri_pkg_idle_wkups;
	uint64_t ri_interrupt_wkups;
	uint64_t ri_pageins;
	uint64_t ri_wired_size;
	uint64_t ri_resident_size;
	uint64_t ri_phys_footprint;
	uint64_t ri_proc_start_abstime;
	uint64_t ri_proc_exit_abstime;
	uint64_t ri_child_user_time;
	uint64_t ri_child_system_time;
	uint64_t ri_child_pkg_idle_wkups;
	uint64_t ri_child_interrupt_wkups;
	uint64_t ri_child_pageins;
	uint64_t ri_child_elapsed_abstime;
	uint64_t ri_diskio_bytesread;
	uint64_t ri_diskio_byteswritten;
	uint64_t ri_cpu_time_qos_default;
	uint64_t ri_cpu_time_qos_maintenance;
	uint64_t ri_cpu_time_qos_background;
	uint64_t ri_cpu_time_qos_utility;
	uint64_t ri_cpu_time_qos_legacy;
	uint64_t ri_cpu_time_qos_user_initiated;
	uint64_t ri_cpu_time_qos_user_interactive;
	uint64_t ri_billed_system_time;
	uint64_t ri_serviced_system_time;
	uint64_t ri_logical_writes;
	uint64_t ri_lifetime_max_phys_footprint;
	uint64_t ri_instructions;
	uint64_t ri_cycles;
	uint64_t ri_billed_energy;
	uint64_t ri_serviced_energy;
	uint64_t ri_interval_max_phys_footprint;
	uint64_t ri_runnable_time;
	uint64_t ri_flags;
	uint64_t ri_user_ptime;
	uint64_t ri_system_ptime;
	uint64_t ri_pinstructions;
	uint64_t ri_pcycles;
	uint64_t ri_energy_nj;
	uint64_t ri_penergy_nj;
	uint64_t ri_secure_time_in_system;
	uint64_t ri_secure_ptime_in_system;
	uint64_t ri_neural_footprint;
	uint64_t ri_lifetime_max_neural_footprint;
	uint64_t ri_interval_max_neural_footprint;
	uint64_t ri_reserved[9];
};

typedef struct rusage_info_v6 rusage_info_current;























struct rlimit {
	rlim_t  rlim_cur;               
	rlim_t  rlim_max;               
};



















struct proc_rlimit_control_wakeupmon {
	uint32_t wm_flags;
	int32_t wm_rate;
};


























int     getpriority(int, id_t);
int     getiopolicy_np(int, int) ;
int     getrlimit(int, struct rlimit *) __asm("_" "getrlimit" );
int     getrusage(int, struct rusage *);
int     setpriority(int, id_t, int);
int     setiopolicy_np(int, int, int) ;
int     setrlimit(int, const struct rlimit *) __asm("_" "setrlimit" );



#line 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/wait.h"








































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/endian.h"





























#line 187 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/wait.h"







union wait {
	int     w_status;               
	


	struct {
		unsigned int    w_Termsig:7,    
		    w_Coredump:1,               
		    w_Retcode:8,                
		    w_Filler:16;                
	} w_T;
	




	struct {
		unsigned int    w_Stopval:8,    
		    w_Stopsig:8,                
		    w_Filler:16;                
	} w_S;
};




pid_t   wait(int *) __asm("_" "wait"  );
pid_t   waitpid(pid_t, int *, int) __asm("_" "waitpid"  );
int     waitid(idtype_t, id_t, siginfo_t *, int) __asm("_" "waitid"  );
pid_t   wait3(int *, int, struct rusage *);
pid_t   wait4(pid_t, int *, int, struct rusage *);
#line 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdlib.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/alloca.h"






















#line 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdlib.h"



#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"































#line 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdlib.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ct_rune_t.h"



























#line 95 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdlib.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_rune_t.h"


























#line 96 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdlib.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_wchar_t.h"
































#line 99 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdlib.h"



typedef struct {
	int quot;		
	int rem;		
} div_t;

typedef struct {
	long quot;		
	long rem;		
} ldiv_t;

typedef struct {
	long long quot;
	long long rem;
} lldiv_t;

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h"






























#line 120 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdlib.h"




#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/malloc/_malloc.h"






























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/malloc/_malloc.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/malloc/_malloc.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"































#line 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/malloc/_malloc.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/malloc/_malloc_type.h"
























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/malloc/_ptrcheck.h"
























#line 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/ptrcheck.h"








#line 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/malloc/_ptrcheck.h"
#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/malloc/_malloc_type.h"


typedef unsigned long long malloc_type_id_t;



#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/malloc/_malloc_type.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"































#line 38 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/malloc/_malloc_type.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 44 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/malloc/_malloc_type.h"














void *  malloc_type_malloc(size_t size, malloc_type_id_t type_id)  ;

void *  malloc_type_calloc(size_t count, size_t size, malloc_type_id_t type_id)  ;

void  malloc_type_free(void *  ptr, malloc_type_id_t type_id);

void *  malloc_type_realloc(void *  ptr, size_t size, malloc_type_id_t type_id)  ;

void *  malloc_type_valloc(size_t size, malloc_type_id_t type_id)  ;

void *  malloc_type_aligned_alloc(size_t alignment, size_t size, malloc_type_id_t type_id)   ;


int   malloc_type_posix_memalign(void *  *memptr, size_t alignment, size_t size, malloc_type_id_t type_id) ;



typedef struct _malloc_zone_t malloc_zone_t;


void *  malloc_type_zone_malloc(malloc_zone_t *zone, size_t size, malloc_type_id_t type_id)  ;

void *  malloc_type_zone_calloc(malloc_zone_t *zone, size_t count, size_t size, malloc_type_id_t type_id)  ;

void  malloc_type_zone_free(malloc_zone_t *zone, void *  ptr, malloc_type_id_t type_id);

void *  malloc_type_zone_realloc(malloc_zone_t *zone, void *  ptr, size_t size, malloc_type_id_t type_id)  ;

void * malloc_type_zone_valloc(malloc_zone_t *zone, size_t size, malloc_type_id_t type_id)  ;

void * malloc_type_zone_memalign(malloc_zone_t *zone, size_t alignment, size_t size, malloc_type_id_t type_id)   ;








#line 45 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/malloc/_malloc.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/malloc/_ptrcheck.h"






















#line 50 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/malloc/_malloc.h"




void *  malloc(size_t __size)   ;
void *  calloc(size_t __count, size_t __size)   ;
void  free(void * );
void *  realloc(void *  __ptr, size_t __size)   ;
void *  reallocf(void *  __ptr, size_t __size)  ;
void *  valloc(size_t __size)   ;
void *  aligned_alloc(size_t __alignment, size_t __size)        ;

int   posix_memalign(void *  *__memptr, size_t __alignment, size_t __size)   ;


#line 145 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdlib.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_abort.h"
























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_abort.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_abort.h"




void	 abort(void)  __attribute__((__noreturn__));

#line 146 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdlib.h"


int	 abs(int) __attribute__((__const__));
int	 atexit(void (* )(void));
int	at_quick_exit(void (*)(void));
double	 atof(const char *);
int	 atoi(const char *);
long	 atol(const char *);
long long
	 atoll(const char *);
void	*bsearch(const void * __key, const void * __base, size_t __nel,
	    size_t __width, int (*  __compar)(const void *, const void *));

div_t	 div(int, int) __attribute__((__const__));
void	 exit(int) __attribute__((__noreturn__));

char *	getenv(const char *);
long	 labs(long) __attribute__((__const__));
ldiv_t	 ldiv(long, long) __attribute__((__const__));
long long
	 llabs(long long);
lldiv_t	 lldiv(long long, long long);

int	 mblen(const char * __s, size_t __n);
size_t	 mbstowcs(wchar_t * restrict , const char * restrict, size_t __n);
int	 mbtowc(wchar_t * restrict, const char * restrict , size_t __n);

void	 qsort(void * __base, size_t __nel, size_t __width,
	    int (*  __compar)(const void *, const void *));
void	quick_exit(int) __attribute__((__noreturn__));
int	 rand(void) ;

void	 srand(unsigned) ;
double	 strtod(const char *, char * *) __asm("_" "strtod" );
float	 strtof(const char *, char * *) __asm("_" "strtof" );
long	 strtol(const char *__str, char * *__endptr, int __base);
long double
	 strtold(const char *, char * *);
long long 
	 strtoll(const char *__str, char * *__endptr, int __base);
unsigned long
	 strtoul(const char *__str, char * *__endptr, int __base);
unsigned long long
	 strtoull(const char *__str, char * *__endptr, int __base);


 
 
int	 system(const char *) __asm("_" "system"  );


size_t	 wcstombs(char * restrict , const wchar_t * restrict, size_t __n);
int	 wctomb(char *, wchar_t);

void	_Exit(int) __attribute__((__noreturn__));
long	 a64l(const char *);
double	 drand48(void);
char *	ecvt(double, int, int *restrict, int *restrict); 
double	 erand48(unsigned short[3]);
char *	fcvt(double, int, int *restrict, int *restrict); 
char *	gcvt(double, int, char *) ; 
int	 getsubopt(char * *, char * const *, char * *);
int	 grantpt(int);
char *
		initstate(unsigned, char *, size_t __size); 
long	 jrand48(unsigned short[3]) ;
char	*l64a(long);
void	 lcong48(unsigned short[7]);
long	 lrand48(void) ;
char *	mktemp(char *);
int	 mkstemp(char *);
long	 mrand48(void) ;
long	 nrand48(unsigned short[3]) ;
int	 posix_openpt(int);
char *	ptsname(int);

int ptsname_r(int fildes, char * buffer, size_t buflen) ;

int	 putenv(char *) __asm("_" "putenv" );
long	 random(void) ;
int	 rand_r(unsigned *) ;
char *	realpath(const char * restrict, char * restrict ) __asm("_" "realpath" "$DARWIN_EXTSN");
unsigned short * seed48(unsigned short[3]);
int	 setenv(const char * __name, const char * __value, int __overwrite) __asm("_" "setenv" );
void	 setkey(const char *) __asm("_" "setkey" );
char *	setstate(const char *);
void	 srand48(long);
void	 srandom(unsigned);
int	 unlockpt(int);
int	 unsetenv(const char *) __asm("_" "unsetenv" );


#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"





























#line 280 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdlib.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_dev_t.h"


























#line 281 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdlib.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_mode_t.h"


























#line 282 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdlib.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_uint32_t.h"



























#line 283 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdlib.h"


uint32_t arc4random(void);
void	 arc4random_addrandom(unsigned char * , int __datlen)
    
    
    
    ;
void	 arc4random_buf(void * __buf, size_t __nbytes) ;
void	 arc4random_stir(void);
uint32_t
	 arc4random_uniform(uint32_t __upper_bound) ;

	 
char *	cgetcap(char *, const char *, int);
int	 cgetclose(void);
int	 cgetent(char * *, char * *, const char *);
int	 cgetfirst(char * *, char * *);
int	 cgetmatch(const char *, const char *);
int	 cgetnext(char * *, char * *);
int	 cgetnum(char *, const char *, long *);
int	 cgetset(const char *);
int	 cgetstr(char *, const char *, char * *);
int	 cgetustr(char *, const char *, char * *);

int	 daemon(int, int) __asm("_" "daemon" )   ;
char *	devname(dev_t, mode_t);
char *	devname_r(dev_t, mode_t, char * buf, int len);
char *	getbsize(int *, long *);
int	 getloadavg(double [], int __nelem);
const char
	*getprogname(void);
void	 setprogname(const char *);


int	 heapsort(void * __base, size_t __nel, size_t __width,
	    int (*  __compar)(const void *, const void *));
int	 mergesort(void * __base, size_t __nel, size_t __width,
	    int (*  __compar)(const void *, const void *));
void	 psort(void * __base, size_t __nel, size_t __width,
	    int (*  __compar)(const void *, const void *))
	    ;
void	 psort_r(void * __base, size_t __nel, size_t __width, void *,
	    int (*  __compar)(void *, const void *, const void *))
	    ;
void	 qsort_r(void * __base, size_t __nel, size_t __width, void *,
	    int (*  __compar)(void *, const void *, const void *));
int	 radixsort(const unsigned char * * __base, int __nel, const unsigned char * __table,
	    unsigned __endbyte);
int	rpmatch(const char *)
	;
int	 sradixsort(const unsigned char * * __base, int __nel, const unsigned char * __table,
	    unsigned __endbyte);
void	 sranddev(void);
void	 srandomdev(void);

long long
	strtonum(const char *__numstr, long long __minval, long long __maxval, const char * *__errstrp)
	;
long long
	 strtoq(const char *__str, char * *__endptr, int __base);
unsigned long long
	 strtouq(const char *__str, char * *__endptr, int __base);
extern char * suboptarg;		






#line 59 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdlib.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_stdlib.h"
























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_stdlib.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_stdlib.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"































#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_stdlib.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_wchar_t.h"
































#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_stdlib.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/__xlocale.h"






















#line 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_stdlib.h"




double	 atof_l(const char *, locale_t);
int	 atoi_l(const char *, locale_t);
long	 atol_l(const char *, locale_t);
long long
	 atoll_l(const char *, locale_t);
int	 mblen_l(const char *, size_t __n, locale_t);
size_t	 mbstowcs_l(wchar_t * restrict ,
	    const char * restrict, size_t __n, locale_t);
int	 mbtowc_l(wchar_t * restrict ,
	    const char * restrict , size_t __n, locale_t);
double	 strtod_l(const char *, char * *, locale_t) __asm("_" "strtod_l" );
float	 strtof_l(const char *, char * *, locale_t) __asm("_" "strtof_l" );
long	 strtol_l(const char *, char * *, int, locale_t);
long double
	 strtold_l(const char *, char * *, locale_t);
long long
	 strtoll_l(const char *, char * *, int, locale_t);
long long
	 strtoq_l(const char *, char * *, int, locale_t);
unsigned long
	 strtoul_l(const char *, char * *, int, locale_t);
unsigned long long
	 strtoull_l(const char *, char * *, int, locale_t);
unsigned long long
	 strtouq_l(const char *, char * *, int, locale_t);
size_t	 wcstombs_l(char * __restric ,
	    const wchar_t * restrict, size_t __n, locale_t);
int	 wctomb_l(char *, wchar_t, locale_t);



#line 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdlib.h"
#line 93 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h"

























































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_string.h"
























































#line 59 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_string.h"






















#line 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h"
#line 94 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/strings.h"


























































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_strings.h"
























































#line 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/strings.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h"

























































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_string.h"
























































#line 59 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_string.h"






















#line 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h"
#line 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/strings.h"

#line 95 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sysexits.h"
































































































#line 97 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/syslog.h"






















#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/syslog.h"





























































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/appleapiopts.h"



























#line 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/syslog.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/syslog.h"

















































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 221 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/syslog.h"


void    closelog(void);
void    openlog(const char *, int, int);
int     setlogmask(int);
void    syslog(int, const char *, ...) __attribute__((__format__ (__printf__, 2, 3))) ;
void    vsyslog(int, const char *, __darwin_va_list) __attribute__((__format__ (__printf__, 2, 0))) ;

#line 24 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/syslog.h"
#line 98 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/tar.h"











































				
#line 99 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/term.h"










































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityMacros.h"






















































































#line 48 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/term.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/ncurses_dll.h"




























#line 49 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/term.h"



















#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/termios.h"























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 27 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/termios.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/termios.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/termios.h"
































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 68 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/termios.h"











#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_posix_vdisable.h"


























#line 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/termios.h"












































typedef unsigned long   tcflag_t;
typedef unsigned char   cc_t;
typedef unsigned long   speed_t;

struct termios {
	tcflag_t        c_iflag;        
	tcflag_t        c_oflag;        
	tcflag_t        c_cflag;        
	tcflag_t        c_lflag;        
	cc_t            c_cc[20];     
	speed_t         c_ispeed;       
	speed_t         c_ospeed;       
};












#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 329 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/termios.h"


speed_t cfgetispeed(const struct termios *);
speed_t cfgetospeed(const struct termios *);
int     cfsetispeed(struct termios *, speed_t);
int     cfsetospeed(struct termios *, speed_t);
int     tcgetattr(int, struct termios *);
int     tcsetattr(int, int, const struct termios *);
int     tcdrain(int) __asm("_" "tcdrain"  );
int     tcflow(int, int);
int     tcflush(int, int);
int     tcsendbreak(int, int);

void    cfmakeraw(struct termios *);
int     cfsetspeed(struct termios *, speed_t);









#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/ttycom.h"



































































#line 357 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/termios.h"





#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/ttydefaults.h"










































































#line 366 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/termios.h"
#line 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/termios.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/termios.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_pid_t.h"


























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/termios.h"




pid_t	tcgetsid(int);

#line 88 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/term.h"

















typedef struct termtype {	
    char  *term_names;		
    char  *str_table;		
    char  *Booleans;	
    short *Numbers;		
    char  **Strings;		

    char  *ext_str_table;	
    char  **ext_Names;		

    unsigned short num_Booleans;
    unsigned short num_Numbers;	
    unsigned short num_Strings;	

    unsigned short ext_Booleans;
    unsigned short ext_Numbers;	
    unsigned short ext_Strings;	

} TERMTYPE;

typedef struct term {		
    TERMTYPE	type;		
    short	Filedes;	
    struct termios		Ottyb,		
		Nttyb;		
    int		_baudrate;	
    char *      _termname;      
} TERMINAL;

extern  TERMINAL * cur_term;


extern   char * const boolnames[];
extern   char * const boolcodes[];
extern   char * const boolfnames[];
extern   char * const numnames[];
extern   char * const numcodes[];
extern   char * const numfnames[];
extern   char * const strnames[];
extern   char * const strcodes[];
extern   char * const strfnames[];



extern  int  _nc_set_tty_mode (struct termios *buf);
extern  int  _nc_get_tty_mode (struct termios *buf);
extern  int  _nc_read_entry (const char * const, char * const, TERMTYPE *const);
extern  int  _nc_read_file_entry (const char *const, TERMTYPE *);
  

extern  void  _nc_init_termtype (TERMTYPE *const);
extern  int  _nc_read_termtype (TERMTYPE *, char *, int);
extern  char *  _nc_first_name (const char *const);
extern  int  _nc_name_match (const char *const, const char *const, const char *const);
extern  const TERMTYPE *  _nc_fallback (const char *);


extern  TERMINAL *  set_curterm (TERMINAL *);
extern  int  del_curterm (TERMINAL *);


extern  int  restartterm ( char *, int, int *);
extern  int  setupterm ( char *,int,int *);




extern  char *  tgetstr ( char *, char **);
extern  char *  tgoto (const char *, int, int);
extern  int  tgetent (char *, const char *);
extern  int  tgetflag ( char *);
extern  int  tgetnum ( char *);
extern  int  tputs (const char *, int, int (*)(int));





#line 100 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/term_entry.h"










































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/term.h"







































#line 49 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/term_entry.h"

    



    typedef enum {
	dbdTIC = 0,		
	dbdEnvOnce,		
	dbdHome,		
	dbdEnvList,		
	dbdCfgList,		
	dbdCfgOnce,		
	dbdEnvOnce2,		
	dbdEnvList2,		
	dbdCfgList2,		
	dbdLAST
    } DBDIRS;


    typedef struct entry {
	TERMTYPE tterm;
	unsigned nuses;
	struct {
	    char *name;
	    struct entry *link;
	    long line;
	} uses[32];
	int ncrosslinks;
	struct entry *crosslinks[16];
	long cstart, cend;
	long startline;
	struct entry *next;
	struct entry *last;
    } ENTRY;






extern  ENTRY * _nc_head;
extern  ENTRY * _nc_tail;











extern  ENTRY *  _nc_copy_entry (ENTRY *oldp);
extern  char *  _nc_save_str (const char *const);
extern  void  _nc_init_entry (TERMTYPE *const);
extern  void  _nc_merge_entry (TERMTYPE *const, TERMTYPE *const);
extern  void  _nc_wrap_entry (ENTRY *const, _Bool);


extern  void  _nc_align_termtype (TERMTYPE *, TERMTYPE *);
extern  void  _nc_copy_termtype (TERMTYPE *, const TERMTYPE *);


extern  void  _nc_free_termtype (TERMTYPE *);


extern  void  _nc_init_acs (void);	


extern  char *  _nc_trim_sgr0 (TERMTYPE *);


extern  _Bool _nc_user_definable;
extern  _Bool _nc_disable_period;
extern  int  _nc_parse_entry (ENTRY *, int, _Bool);
extern  int  _nc_capcmp (const char *, const char *);


extern  void  _nc_set_writedir (const char *);
extern  void  _nc_write_entry (TERMTYPE *const);


extern  void  _nc_read_entry_source (FILE*, char*, int, _Bool, _Bool (*)(ENTRY*));
extern  _Bool  _nc_entry_match (char *, char *);
extern  int  _nc_resolve_uses (_Bool); 
extern  int  _nc_resolve_uses2 (_Bool, _Bool);
extern  void  _nc_free_entries (ENTRY *);
extern  void  (*_nc_check_termtype)(TERMTYPE *); 
extern  void  (*_nc_check_termtype2)(TERMTYPE *, _Bool);


#line 101 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/termcap.h"





































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/ncurses_dll.h"




























#line 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/termcap.h"


#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/types.h"



































































#line 50 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/termcap.h"



extern  char PC;
extern  char * UP;
extern  char * BC;
extern  short ospeed; 


#line 102 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/termios.h"





















#line 103 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/tgmath.h"
























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"























#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/tgmath.h"


#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/complex.h"





























#line 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/tgmath.h"





typedef void _Argument_type_is_not_arithmetic;
static _Argument_type_is_not_arithmetic __tg_promote(...)
  __attribute__((__unavailable__,__overloadable__));
static double               __attribute__((__overloadable__)) __tg_promote(int);
static double               __attribute__((__overloadable__)) __tg_promote(unsigned int);
static double               __attribute__((__overloadable__)) __tg_promote(long);
static double               __attribute__((__overloadable__)) __tg_promote(unsigned long);
static double               __attribute__((__overloadable__)) __tg_promote(long long);
static double               __attribute__((__overloadable__)) __tg_promote(unsigned long long);
static _Float16             __attribute__((__overloadable__)) __tg_promote(_Float16);
static float                __attribute__((__overloadable__)) __tg_promote(float);
static double               __attribute__((__overloadable__)) __tg_promote(double);
static long double          __attribute__((__overloadable__)) __tg_promote(long double);
static _Complex float       __attribute__((__overloadable__)) __tg_promote(_Complex float);
static _Complex double      __attribute__((__overloadable__)) __tg_promote(_Complex double);
static _Complex long double __attribute__((__overloadable__)) __tg_promote(_Complex long double);




static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_acos(float __x) {return acosf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_acos(double __x) {return acos(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_acos(long double __x) {return acosl(__x);}

static _Complex float
    __attribute__((__overloadable__, __always_inline__))
    __tg_acos(_Complex float __x) {return cacosf(__x);}

static _Complex double
    __attribute__((__overloadable__, __always_inline__))
    __tg_acos(_Complex double __x) {return cacos(__x);}

static _Complex long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_acos(_Complex long double __x) {return cacosl(__x);}




static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_asin(float __x) {return asinf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_asin(double __x) {return asin(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_asin(long double __x) {return asinl(__x);}

static _Complex float
    __attribute__((__overloadable__, __always_inline__))
    __tg_asin(_Complex float __x) {return casinf(__x);}

static _Complex double
    __attribute__((__overloadable__, __always_inline__))
    __tg_asin(_Complex double __x) {return casin(__x);}

static _Complex long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_asin(_Complex long double __x) {return casinl(__x);}




static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_atan(float __x) {return atanf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_atan(double __x) {return atan(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_atan(long double __x) {return atanl(__x);}

static _Complex float
    __attribute__((__overloadable__, __always_inline__))
    __tg_atan(_Complex float __x) {return catanf(__x);}

static _Complex double
    __attribute__((__overloadable__, __always_inline__))
    __tg_atan(_Complex double __x) {return catan(__x);}

static _Complex long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_atan(_Complex long double __x) {return catanl(__x);}




static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_acosh(float __x) {return acoshf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_acosh(double __x) {return acosh(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_acosh(long double __x) {return acoshl(__x);}

static _Complex float
    __attribute__((__overloadable__, __always_inline__))
    __tg_acosh(_Complex float __x) {return cacoshf(__x);}

static _Complex double
    __attribute__((__overloadable__, __always_inline__))
    __tg_acosh(_Complex double __x) {return cacosh(__x);}

static _Complex long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_acosh(_Complex long double __x) {return cacoshl(__x);}




static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_asinh(float __x) {return asinhf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_asinh(double __x) {return asinh(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_asinh(long double __x) {return asinhl(__x);}

static _Complex float
    __attribute__((__overloadable__, __always_inline__))
    __tg_asinh(_Complex float __x) {return casinhf(__x);}

static _Complex double
    __attribute__((__overloadable__, __always_inline__))
    __tg_asinh(_Complex double __x) {return casinh(__x);}

static _Complex long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_asinh(_Complex long double __x) {return casinhl(__x);}




static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_atanh(float __x) {return atanhf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_atanh(double __x) {return atanh(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_atanh(long double __x) {return atanhl(__x);}

static _Complex float
    __attribute__((__overloadable__, __always_inline__))
    __tg_atanh(_Complex float __x) {return catanhf(__x);}

static _Complex double
    __attribute__((__overloadable__, __always_inline__))
    __tg_atanh(_Complex double __x) {return catanh(__x);}

static _Complex long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_atanh(_Complex long double __x) {return catanhl(__x);}




static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_cos(float __x) {return cosf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_cos(double __x) {return cos(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_cos(long double __x) {return cosl(__x);}

static _Complex float
    __attribute__((__overloadable__, __always_inline__))
    __tg_cos(_Complex float __x) {return ccosf(__x);}

static _Complex double
    __attribute__((__overloadable__, __always_inline__))
    __tg_cos(_Complex double __x) {return ccos(__x);}

static _Complex long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_cos(_Complex long double __x) {return ccosl(__x);}




static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_sin(float __x) {return sinf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_sin(double __x) {return sin(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_sin(long double __x) {return sinl(__x);}

static _Complex float
    __attribute__((__overloadable__, __always_inline__))
    __tg_sin(_Complex float __x) {return csinf(__x);}

static _Complex double
    __attribute__((__overloadable__, __always_inline__))
    __tg_sin(_Complex double __x) {return csin(__x);}

static _Complex long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_sin(_Complex long double __x) {return csinl(__x);}




static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_tan(float __x) {return tanf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_tan(double __x) {return tan(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_tan(long double __x) {return tanl(__x);}

static _Complex float
    __attribute__((__overloadable__, __always_inline__))
    __tg_tan(_Complex float __x) {return ctanf(__x);}

static _Complex double
    __attribute__((__overloadable__, __always_inline__))
    __tg_tan(_Complex double __x) {return ctan(__x);}

static _Complex long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_tan(_Complex long double __x) {return ctanl(__x);}




static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_cosh(float __x) {return coshf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_cosh(double __x) {return cosh(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_cosh(long double __x) {return coshl(__x);}

static _Complex float
    __attribute__((__overloadable__, __always_inline__))
    __tg_cosh(_Complex float __x) {return ccoshf(__x);}

static _Complex double
    __attribute__((__overloadable__, __always_inline__))
    __tg_cosh(_Complex double __x) {return ccosh(__x);}

static _Complex long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_cosh(_Complex long double __x) {return ccoshl(__x);}




static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_sinh(float __x) {return sinhf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_sinh(double __x) {return sinh(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_sinh(long double __x) {return sinhl(__x);}

static _Complex float
    __attribute__((__overloadable__, __always_inline__))
    __tg_sinh(_Complex float __x) {return csinhf(__x);}

static _Complex double
    __attribute__((__overloadable__, __always_inline__))
    __tg_sinh(_Complex double __x) {return csinh(__x);}

static _Complex long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_sinh(_Complex long double __x) {return csinhl(__x);}




static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_tanh(float __x) {return tanhf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_tanh(double __x) {return tanh(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_tanh(long double __x) {return tanhl(__x);}

static _Complex float
    __attribute__((__overloadable__, __always_inline__))
    __tg_tanh(_Complex float __x) {return ctanhf(__x);}

static _Complex double
    __attribute__((__overloadable__, __always_inline__))
    __tg_tanh(_Complex double __x) {return ctanh(__x);}

static _Complex long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_tanh(_Complex long double __x) {return ctanhl(__x);}




static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_exp(float __x) {return expf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_exp(double __x) {return exp(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_exp(long double __x) {return expl(__x);}

static _Complex float
    __attribute__((__overloadable__, __always_inline__))
    __tg_exp(_Complex float __x) {return cexpf(__x);}

static _Complex double
    __attribute__((__overloadable__, __always_inline__))
    __tg_exp(_Complex double __x) {return cexp(__x);}

static _Complex long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_exp(_Complex long double __x) {return cexpl(__x);}




static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_log(float __x) {return logf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_log(double __x) {return log(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_log(long double __x) {return logl(__x);}

static _Complex float
    __attribute__((__overloadable__, __always_inline__))
    __tg_log(_Complex float __x) {return clogf(__x);}

static _Complex double
    __attribute__((__overloadable__, __always_inline__))
    __tg_log(_Complex double __x) {return clog(__x);}

static _Complex long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_log(_Complex long double __x) {return clogl(__x);}




static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_pow(float __x, float __y) {return powf(__x, __y);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_pow(double __x, double __y) {return pow(__x, __y);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_pow(long double __x, long double __y) {return powl(__x, __y);}

static _Complex float
    __attribute__((__overloadable__, __always_inline__))
    __tg_pow(_Complex float __x, _Complex float __y) {return cpowf(__x, __y);}

static _Complex double
    __attribute__((__overloadable__, __always_inline__))
    __tg_pow(_Complex double __x, _Complex double __y) {return cpow(__x, __y);}

static _Complex long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_pow(_Complex long double __x, _Complex long double __y) 
    {return cpowl(__x, __y);}




static _Float16
    __attribute__((__overloadable__, __always_inline__))
    __tg_sqrt(_Float16 __x) {return __sqrtf16(__x);}

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_sqrt(float __x) {return sqrtf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_sqrt(double __x) {return sqrt(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_sqrt(long double __x) {return sqrtl(__x);}

static _Complex float
    __attribute__((__overloadable__, __always_inline__))
    __tg_sqrt(_Complex float __x) {return csqrtf(__x);}

static _Complex double
    __attribute__((__overloadable__, __always_inline__))
    __tg_sqrt(_Complex double __x) {return csqrt(__x);}

static _Complex long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_sqrt(_Complex long double __x) {return csqrtl(__x);}




static _Float16
    __attribute__((__overloadable__, __always_inline__))
    __tg_fabs(_Float16 __x) {return __fabsf16(__x);}

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_fabs(float __x) {return fabsf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_fabs(double __x) {return fabs(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_fabs(long double __x) {return fabsl(__x);}

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_fabs(_Complex float __x) {return cabsf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_fabs(_Complex double __x) {return cabs(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_fabs(_Complex long double __x) {return cabsl(__x);}




static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_atan2(float __x, float __y) {return atan2f(__x, __y);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_atan2(double __x, double __y) {return atan2(__x, __y);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_atan2(long double __x, long double __y) {return atan2l(__x, __y);}




static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_cbrt(float __x) {return cbrtf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_cbrt(double __x) {return cbrt(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_cbrt(long double __x) {return cbrtl(__x);}




static _Float16
    __attribute__((__overloadable__, __always_inline__))
    __tg_ceil(_Float16 __x) {return __ceilf16(__x);}

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_ceil(float __x) {return ceilf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_ceil(double __x) {return ceil(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_ceil(long double __x) {return ceill(__x);}




static _Float16
    __attribute__((__overloadable__, __always_inline__))
    __tg_copysign(_Float16 __x, _Float16 __y) {return __copysignf16(__x, __y);}

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_copysign(float __x, float __y) {return copysignf(__x, __y);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_copysign(double __x, double __y) {return copysign(__x, __y);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_copysign(long double __x, long double __y) {return copysignl(__x, __y);}




static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_erf(float __x) {return erff(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_erf(double __x) {return erf(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_erf(long double __x) {return erfl(__x);}




static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_erfc(float __x) {return erfcf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_erfc(double __x) {return erfc(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_erfc(long double __x) {return erfcl(__x);}




static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_exp2(float __x) {return exp2f(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_exp2(double __x) {return exp2(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_exp2(long double __x) {return exp2l(__x);}




static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_expm1(float __x) {return expm1f(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_expm1(double __x) {return expm1(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_expm1(long double __x) {return expm1l(__x);}




static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_fdim(float __x, float __y) {return fdimf(__x, __y);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_fdim(double __x, double __y) {return fdim(__x, __y);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_fdim(long double __x, long double __y) {return fdiml(__x, __y);}




static _Float16
    __attribute__((__overloadable__, __always_inline__))
    __tg_floor(_Float16 __x) {return __floorf16(__x);}

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_floor(float __x) {return floorf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_floor(double __x) {return floor(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_floor(long double __x) {return floorl(__x);}




static _Float16
    __attribute__((__overloadable__, __always_inline__))
    __tg_fma(_Float16 __x, _Float16 __y, _Float16 __z)
    {return __fmaf16(__x, __y, __z);}

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_fma(float __x, float __y, float __z)
    {return fmaf(__x, __y, __z);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_fma(double __x, double __y, double __z)
    {return fma(__x, __y, __z);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_fma(long double __x,long double __y, long double __z)
    {return fmal(__x, __y, __z);}




static _Float16
    __attribute__((__overloadable__, __always_inline__))
    __tg_fmax(_Float16 __x, _Float16 __y) {return __fmaxf16(__x, __y);}

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_fmax(float __x, float __y) {return fmaxf(__x, __y);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_fmax(double __x, double __y) {return fmax(__x, __y);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_fmax(long double __x, long double __y) {return fmaxl(__x, __y);}




static _Float16
    __attribute__((__overloadable__, __always_inline__))
    __tg_fmin(_Float16 __x, _Float16 __y) {return __fminf16(__x, __y);}

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_fmin(float __x, float __y) {return fminf(__x, __y);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_fmin(double __x, double __y) {return fmin(__x, __y);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_fmin(long double __x, long double __y) {return fminl(__x, __y);}




static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_fmod(float __x, float __y) {return fmodf(__x, __y);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_fmod(double __x, double __y) {return fmod(__x, __y);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_fmod(long double __x, long double __y) {return fmodl(__x, __y);}




static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_frexp(float __x, int* __y) {return frexpf(__x, __y);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_frexp(double __x, int* __y) {return frexp(__x, __y);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_frexp(long double __x, int* __y) {return frexpl(__x, __y);}




static _Float16
    __attribute__((__overloadable__, __always_inline__))
    __tg_hypot(_Float16 __x, _Float16 __y) {return __hypotf16(__x, __y);}

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_hypot(float __x, float __y) {return hypotf(__x, __y);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_hypot(double __x, double __y) {return hypot(__x, __y);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_hypot(long double __x, long double __y) {return hypotl(__x, __y);}




static int
    __attribute__((__overloadable__, __always_inline__))
    __tg_ilogb(float __x) {return ilogbf(__x);}

static int
    __attribute__((__overloadable__, __always_inline__))
    __tg_ilogb(double __x) {return ilogb(__x);}

static int
    __attribute__((__overloadable__, __always_inline__))
    __tg_ilogb(long double __x) {return ilogbl(__x);}




static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_ldexp(float __x, int __y) {return ldexpf(__x, __y);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_ldexp(double __x, int __y) {return ldexp(__x, __y);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_ldexp(long double __x, int __y) {return ldexpl(__x, __y);}




static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_lgamma(float __x) {return lgammaf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_lgamma(double __x) {return lgamma(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_lgamma(long double __x) {return lgammal(__x);}







static long long
    __attribute__((__overloadable__, __always_inline__))
    __tg_llrint(float __x) {return llrintf(__x);}

static long long
    __attribute__((__overloadable__, __always_inline__))
    __tg_llrint(double __x) {return llrint(__x);}

static long long
    __attribute__((__overloadable__, __always_inline__))
    __tg_llrint(long double __x) {return llrintl(__x);}




static long long
    __attribute__((__overloadable__, __always_inline__))
    __tg_llround(float __x) {return llroundf(__x);}

static long long
    __attribute__((__overloadable__, __always_inline__))
    __tg_llround(double __x) {return llround(__x);}

static long long
    __attribute__((__overloadable__, __always_inline__))
    __tg_llround(long double __x) {return llroundl(__x);}





static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_log10(float __x) {return log10f(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_log10(double __x) {return log10(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_log10(long double __x) {return log10l(__x);}




static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_log1p(float __x) {return log1pf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_log1p(double __x) {return log1p(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_log1p(long double __x) {return log1pl(__x);}




static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_log2(float __x) {return log2f(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_log2(double __x) {return log2(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_log2(long double __x) {return log2l(__x);}




static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_logb(float __x) {return logbf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_logb(double __x) {return logb(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_logb(long double __x) {return logbl(__x);}




static long
    __attribute__((__overloadable__, __always_inline__))
    __tg_lrint(float __x) {return lrintf(__x);}

static long
    __attribute__((__overloadable__, __always_inline__))
    __tg_lrint(double __x) {return lrint(__x);}

static long
    __attribute__((__overloadable__, __always_inline__))
    __tg_lrint(long double __x) {return lrintl(__x);}




static long
    __attribute__((__overloadable__, __always_inline__))
    __tg_lround(float __x) {return lroundf(__x);}

static long
    __attribute__((__overloadable__, __always_inline__))
    __tg_lround(double __x) {return lround(__x);}

static long
    __attribute__((__overloadable__, __always_inline__))
    __tg_lround(long double __x) {return lroundl(__x);}




static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_nearbyint(float __x) {return nearbyintf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_nearbyint(double __x) {return nearbyint(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_nearbyint(long double __x) {return nearbyintl(__x);}




static _Float16
    __attribute__((__overloadable__, __always_inline__))
    __tg_nextafter(_Float16 __x, _Float16 __y) {return __nextafterf16(__x, __y);}

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_nextafter(float __x, float __y) {return nextafterf(__x, __y);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_nextafter(double __x, double __y) {return nextafter(__x, __y);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_nextafter(long double __x, long double __y) {return nextafterl(__x, __y);}




static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_nexttoward(float __x, long double __y) {return nexttowardf(__x, __y);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_nexttoward(double __x, long double __y) {return nexttoward(__x, __y);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_nexttoward(long double __x, long double __y) {return nexttowardl(__x, __y);}




static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_remainder(float __x, float __y) {return remainderf(__x, __y);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_remainder(double __x, double __y) {return remainder(__x, __y);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_remainder(long double __x, long double __y) {return remainderl(__x, __y);}




static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_remquo(float __x, float __y, int* __z)
    {return remquof(__x, __y, __z);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_remquo(double __x, double __y, int* __z)
    {return remquo(__x, __y, __z);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_remquo(long double __x,long double __y, int* __z)
    {return remquol(__x, __y, __z);}




static _Float16
    __attribute__((__overloadable__, __always_inline__))
    __tg_rint(_Float16 __x) {return __rintf16(__x);}

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_rint(float __x) {return rintf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_rint(double __x) {return rint(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_rint(long double __x) {return rintl(__x);}




static _Float16
    __attribute__((__overloadable__, __always_inline__))
    __tg_round(_Float16 __x) {return __roundf16(__x);}

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_round(float __x) {return roundf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_round(double __x) {return round(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_round(long double __x) {return roundl(__x);}




static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_scalbn(float __x, int __y) {return scalbnf(__x, __y);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_scalbn(double __x, int __y) {return scalbn(__x, __y);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_scalbn(long double __x, int __y) {return scalbnl(__x, __y);}




static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_scalbln(float __x, long __y) {return scalblnf(__x, __y);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_scalbln(double __x, long __y) {return scalbln(__x, __y);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_scalbln(long double __x, long __y) {return scalblnl(__x, __y);}




static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_tgamma(float __x) {return tgammaf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_tgamma(double __x) {return tgamma(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_tgamma(long double __x) {return tgammal(__x);}




static _Float16
    __attribute__((__overloadable__, __always_inline__))
    __tg_trunc(_Float16 __x) {return __truncf16(__x);}

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_trunc(float __x) {return truncf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_trunc(double __x) {return trunc(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_trunc(long double __x) {return truncl(__x);}




static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_carg(float __x) {return atan2f(0.F, __x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_carg(double __x) {return __tg_atan2((__typeof__(__tg_promote((0.)) +                                                  __tg_promote((__x))))(0.),                                    (__typeof__(__tg_promote((0.)) +                                                  __tg_promote((__x))))(__x));}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_carg(long double __x) {return atan2l(0.L, __x);}

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_carg(_Complex float __x) {return cargf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_carg(_Complex double __x) {return carg(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_carg(_Complex long double __x) {return cargl(__x);}




static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_cimag(float __x) {return 0;}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_cimag(double __x) {return 0;}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_cimag(long double __x) {return 0;}

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_cimag(_Complex float __x) {return cimagf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_cimag(_Complex double __x) {return cimag(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_cimag(_Complex long double __x) {return cimagl(__x);}




static _Complex float
    __attribute__((__overloadable__, __always_inline__))
    __tg_conj(float __x) {return __x;}

static _Complex double
    __attribute__((__overloadable__, __always_inline__))
    __tg_conj(double __x) {return __x;}

static _Complex long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_conj(long double __x) {return __x;}

static _Complex float
    __attribute__((__overloadable__, __always_inline__))
    __tg_conj(_Complex float __x) {return conjf(__x);}

static _Complex double
    __attribute__((__overloadable__, __always_inline__))
    __tg_conj(_Complex double __x) {return conj(__x);}

static _Complex long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_conj(_Complex long double __x) {return conjl(__x);}




static _Complex float
    __attribute__((__overloadable__, __always_inline__))
    __tg_cproj(float __x) {return cprojf(__x);}

static _Complex double
    __attribute__((__overloadable__, __always_inline__))
    __tg_cproj(double __x) {return cproj(__x);}

static _Complex long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_cproj(long double __x) {return cprojl(__x);}

static _Complex float
    __attribute__((__overloadable__, __always_inline__))
    __tg_cproj(_Complex float __x) {return cprojf(__x);}

static _Complex double
    __attribute__((__overloadable__, __always_inline__))
    __tg_cproj(_Complex double __x) {return cproj(__x);}

static _Complex long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_cproj(_Complex long double __x) {return cprojl(__x);}




static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_creal(float __x) {return __x;}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_creal(double __x) {return __x;}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_creal(long double __x) {return __x;}

static float
    __attribute__((__overloadable__, __always_inline__))
    __tg_creal(_Complex float __x) {return crealf(__x);}

static double
    __attribute__((__overloadable__, __always_inline__))
    __tg_creal(_Complex double __x) {return creal(__x);}

static long double
    __attribute__((__overloadable__, __always_inline__))
    __tg_creal(_Complex long double __x) {return creall(__x);}



#line 104 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/time.h"






























































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"





























































#line 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/time.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_time.h"






















#line 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/time.h"
#line 107 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/ttyent.h"






































struct ttyent {
	char	*ty_name;	
	char	*ty_getty;	
	char	*ty_type;	
	int	ty_status;	
	char 	*ty_window;	
	char    *ty_onerror;    
	char    *ty_onoption;   
	char	*ty_comment;	
};

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 63 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/ttyent.h"


struct ttyent *getttyent(void);
struct ttyent *getttynam(const char *);
int setttyent(void);
int endttyent(void);

#line 108 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/ucontext.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/ucontext.h"

#line 110 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/ulimit.h"





























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/ulimit.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/ulimit.h"





long	ulimit(int, ...);

#line 111 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/unctrl.h"










































#line 112 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/unistd.h"


































































#line 113 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/utime.h"


























































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/utime.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 63 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/utime.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_time_t.h"


























#line 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/utime.h"



struct utimbuf {
	time_t actime;		
	time_t modtime;		
};

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/utime.h"


int utime(const char *, const struct utimbuf *);

#line 114 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/utmp.h"







































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/utmp.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_time_t.h"


























#line 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/utmp.h"




struct lastlog {
	time_t	ll_time;
	char	ll_line[8];
	char	ll_host[16];
}					__attribute__((__deprecated__));

struct utmp {
	char	ut_line[8];
	char	ut_name[8];
	char	ut_host[16];
	long	ut_time;
}					__attribute__((__deprecated__));
#line 115 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/utmpx.h"




























































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/utmpx.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/utmpx.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/time.h"






























































#line 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/utmpx.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/utmpx.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 68 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/utmpx.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_pid_t.h"


























#line 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/utmpx.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_uid_t.h"


























#line 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/utmpx.h"



















struct utmpx {
	char ut_user[256];	
	char ut_id[4];	
	char ut_line[32];	
	pid_t ut_pid;			
	short ut_type;			
	struct timeval ut_tv;		
	char ut_host[256];	
	__uint32_t ut_pad[16];		
};

struct lastlogx {
	struct timeval ll_tv;		
	char ll_line[32];	
	char ll_host[256];	
};



void	endutxent(void);

void	endutxent_wtmp(void) ;
struct lastlogx *
	getlastlogx(uid_t, struct lastlogx *) ;
struct lastlogx *
	getlastlogxbyname(const char*, struct lastlogx *);
struct utmp;	
void	getutmp(const struct utmpx *, struct utmp *)   ;
void	getutmpx(const struct utmp *, struct utmpx *)   ;

struct utmpx *
	getutxent(void);

struct utmpx *
	getutxent_wtmp(void) ;

struct utmpx *
	getutxid(const struct utmpx *);
struct utmpx *
	getutxline(const struct utmpx *);
struct utmpx *
	pututxline(const struct utmpx *);
void	setutxent(void);

void	setutxent_wtmp(int) ;
int	utmpxname(const char *) ;
int	wtmpxname(const char *) ;


#line 116 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/wchar.h"


































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wchar.h"

































































#line 68 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/wchar.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_wchar.h"






















#line 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/wchar.h"
#line 119 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/wctype.h"






























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wctype.h"































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wctype.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wctype.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wctype.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_wctrans_t.h"




























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_wctrans_t.h"
typedef	__darwin_wctrans_t wctrans_t;
#line 38 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wctype.h"


#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/__wctype.h"






































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/___wctype.h"




















































#line 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/__wctype.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/___wctype.h"






















#line 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/__wctype.h"
#line 42 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wctype.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/ctype.h"

































































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctype.h"
































































#line 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/ctype.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_ctype.h"






















#line 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/ctype.h"
#line 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_wctype.h"







inline int
iswblank(wint_t _wc)
{
	return (__istype(_wc, 0x00020000L));
}

inline int
iswascii(wint_t _wc)
{
	return ((_wc & ~0x7F) == 0);
}

inline int
iswhexnumber(wint_t _wc)
{
	return (__istype(_wc, 0x00010000L));
}

inline int
iswideogram(wint_t _wc)
{
	return (__istype(_wc, 0x00080000L));
}

inline int
iswnumber(wint_t _wc)
{
	return (__istype(_wc, 0x00000400L));
}

inline int
iswphonogram(wint_t _wc)
{
	return (__istype(_wc, 0x00200000L));
}

inline int
iswrune(wint_t _wc)
{
	return (__istype(_wc, 0xFFFFFFF0L));
}

inline int
iswspecial(wint_t _wc)
{
	return (__istype(_wc, 0x00100000L));
}



wint_t	nextwctype(wint_t, wctype_t);
wint_t	towctrans(wint_t, wctrans_t);
wctrans_t
	wctrans(const char *);

#line 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/wctype.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_wctype.h"
























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_wctype.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/___wctype.h"




















































#line 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_wctype.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_wctrans_t.h"



























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_wctype.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_ctype.h"






















#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/xlocale/_wctype.h"




inline int
iswblank_l(wint_t _wc, locale_t _l)
{
	return (__istype_l(_wc, 0x00020000L, _l));
}

inline int
iswhexnumber_l(wint_t _wc, locale_t _l)
{
	return (__istype_l(_wc, 0x00010000L, _l));
}

inline int
iswideogram_l(wint_t _wc, locale_t _l)
{
	return (__istype_l(_wc, 0x00080000L, _l));
}

inline int
iswnumber_l(wint_t _wc, locale_t _l)
{
	return (__istype_l(_wc, 0x00000400L, _l));
}

inline int
iswphonogram_l(wint_t _wc, locale_t _l)
{
	return (__istype_l(_wc, 0x00200000L, _l));
}

inline int
iswrune_l(wint_t _wc, locale_t _l)
{
	return (__istype_l(_wc, 0xFFFFFFF0L, _l));
}

inline int
iswspecial_l(wint_t _wc, locale_t _l)
{
	return (__istype_l(_wc, 0x00100000L, _l));
}



wint_t	nextwctype_l(wint_t, wctype_t, locale_t);
wint_t	towctrans_l(wint_t, wctrans_t, locale_t);
wctrans_t
	wctrans_l(const char *, locale_t);

#line 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/wctype.h"
#line 120 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/wordexp.h"














































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 50 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/wordexp.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 51 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/wordexp.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 52 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/wordexp.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"































#line 53 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/wordexp.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 

#line 54 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/wordexp.h"



typedef struct {
	size_t we_wordc;
	char * *	we_wordv;
	size_t we_offs;
} wordexp_t;










int wordexp(const char * restrict, wordexp_t * restrict, int) ;
void wordfree(wordexp_t *) ;

#line 121 "all.c"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/fstab.h"




































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/fstab.h"
















struct fstab {
	char *	fs_spec;	
	char *	fs_file;	
	char *	fs_vfstype;	
	char *	fs_mntops;	
	char *	fs_type;	
	int			fs_freq;	
	int			fs_passno;	
};

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 74 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/fstab.h"


struct fstab *getfsent(void);
struct fstab *getfsspec(const char *);
struct fstab *getfsfile(const char *);
int setfsent(void);
void endfsent(void);

#line 122 "all.c"

//#include <etip.h>
//#include <cursesapp.h>
//#include <cursesf.h>
//#include <cursesm.h>
//#include <cursesp.h>
//#include <cursesw.h>
//#include <cursslk.h>
