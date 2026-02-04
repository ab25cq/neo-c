/// c_include definition ///
/// typedef definition ///
typedef unsigned long size_t;

typedef unsigned char __u_char;

typedef unsigned short int __u_short;

typedef unsigned int __u_int;

typedef unsigned long  int __u_long;

typedef char __int8_t;

typedef unsigned char __uint8_t;

typedef short int __int16_t;

typedef unsigned short int __uint16_t;

typedef int __int32_t;

typedef unsigned int __uint32_t;

typedef long  int __int64_t;

typedef unsigned long  int __uint64_t;

typedef char  __int_least8_t  ;

typedef unsigned char  __uint_least8_t  ;

typedef short int  __int_least16_t  ;

typedef unsigned short int  __uint_least16_t  ;

typedef int  __int_least32_t  ;

typedef unsigned int  __uint_least32_t  ;

typedef long  int  __int_least64_t  ;

typedef unsigned long  int  __uint_least64_t  ;

typedef long  int __quad_t;

typedef unsigned long  int __u_quad_t;

typedef long  int __intmax_t;

typedef unsigned long  int __uintmax_t;

typedef unsigned long  int __dev_t;

typedef unsigned int __uid_t;

typedef unsigned int __gid_t;

typedef unsigned long  int __ino_t;

typedef unsigned long  int __ino64_t;

typedef unsigned int __mode_t;

typedef unsigned long  int __nlink_t;

typedef long  int __off_t;

typedef long  int __off64_t;

typedef int __pid_t;

typedef struct __fsid_t  __fsid_t  ;

typedef long  int __clock_t;

typedef unsigned long  int __rlim_t;

typedef unsigned long  int __rlim64_t;

typedef unsigned int __id_t;

typedef long  int __time_t;

typedef unsigned int __useconds_t;

typedef long  int __suseconds_t;

typedef long  int __suseconds64_t;

typedef int __daddr_t;

typedef int __key_t;

typedef int __clockid_t;

typedef void* __timer_t;

typedef long  int __blksize_t;

typedef long  int __blkcnt_t;

typedef long  int __blkcnt64_t;

typedef unsigned long  int __fsblkcnt_t;

typedef unsigned long  int __fsblkcnt64_t;

typedef unsigned long  int __fsfilcnt_t;

typedef unsigned long  int __fsfilcnt64_t;

typedef long  int __fsword_t;

typedef long  int __ssize_t;

typedef long  int __syscall_slong_t;

typedef unsigned long  int __syscall_ulong_t;

typedef long  int  __loff_t  ;

typedef char* __caddr_t;

typedef long  int __intptr_t;

typedef unsigned int __socklen_t;

typedef int __sig_atomic_t;

typedef struct __locale_struct*  __locale_t  ;

typedef struct __locale_struct*  locale_t  ;

typedef int error_t;

typedef char  int8_t  ;

typedef short int  int16_t  ;

typedef int  int32_t  ;

typedef long  int  int64_t  ;

typedef unsigned char  uint8_t  ;

typedef unsigned short int  uint16_t  ;

typedef unsigned int  uint32_t  ;

typedef unsigned long  int  uint64_t  ;

typedef char  int_least8_t  ;

typedef short int  int_least16_t  ;

typedef int  int_least32_t  ;

typedef long  int  int_least64_t  ;

typedef unsigned char  uint_least8_t  ;

typedef unsigned short int  uint_least16_t  ;

typedef unsigned int  uint_least32_t  ;

typedef unsigned long  int  uint_least64_t  ;

typedef char int_fast8_t;

typedef long  int int_fast16_t;

typedef long  int int_fast32_t;

typedef long  int int_fast64_t;

typedef unsigned char uint_fast8_t;

typedef unsigned long  int uint_fast16_t;

typedef unsigned long  int uint_fast32_t;

typedef unsigned long  int uint_fast64_t;

typedef long  int intptr_t;

typedef unsigned long  int uintptr_t;

typedef long  int  intmax_t  ;

typedef unsigned long  int  uintmax_t  ;

typedef struct anonymous_typeX1 imaxdiv_t;

typedef float float_t;

typedef double double_t;

typedef struct anonymous_typeX2 __sigset_t;

typedef int  sig_atomic_t  ;

typedef struct anonymous_typeX2  sigset_t  ;

typedef int  pid_t  ;

typedef unsigned int  uid_t  ;

typedef long  int  time_t  ;

typedef union sigval  __sigval_t  ;

typedef struct anonymous_typeX3 siginfo_t;

typedef union sigval  sigval_t  ;

typedef union pthread_attr_t pthread_attr_t;

typedef struct sigevent  sigevent_t  ;

typedef void (*__sighandler_t)(int);

typedef void (*sighandler_t)(int)  ;

typedef void (*sig_t)(int)  ;

typedef unsigned long  long    ;

typedef struct anonymous_typeX36 stack_t;

typedef long long int greg_t;

typedef struct _libc_fpstate*  fpregset_t  ;

typedef struct anonymous_typeX37 mcontext_t;

typedef struct ucontext_t  ucontext_t  ;

typedef long  int  ssize_t  ;

typedef unsigned int  gid_t  ;

typedef long  int  off_t  ;

typedef long  int  off64_t  ;

typedef unsigned int  useconds_t  ;

typedef unsigned int  socklen_t  ;

typedef union anonymous_typeZ38 __atomic_wide_counter;

typedef struct __pthread_internal_list  __pthread_list_t  ;

typedef struct __pthread_internal_slist  __pthread_slist_t  ;

typedef unsigned int __tss_t;

typedef unsigned long  int __thrd_t;

typedef struct anonymous_typeX40 __once_flag;

typedef unsigned long  int pthread_t;

typedef union anonymous_typeZ41 pthread_mutexattr_t;

typedef union anonymous_typeZ42 pthread_condattr_t;

typedef unsigned int pthread_key_t;

typedef int pthread_once_t;

typedef union anonymous_typeZ43 pthread_mutex_t;

typedef union anonymous_typeZ44 pthread_cond_t;

typedef union anonymous_typeZ45 pthread_rwlock_t;

typedef union anonymous_typeZ46 pthread_rwlockattr_t;

typedef int pthread_spinlock_t;

typedef union anonymous_typeZ47 pthread_barrier_t;

typedef union anonymous_typeZ48 pthread_barrierattr_t;

typedef __builtin_va_list __gnuc_va_list;

typedef long ptrdiff_t;

typedef int wchar_t;

typedef struct anonymous_typeX49 max_align_t;

typedef struct anonymous_typeX50 __mbstate_t;

typedef struct _G_fpos_t  __fpos_t  ;

typedef struct _G_fpos64_t  __fpos64_t  ;

typedef struct _IO_FILE  __FILE  ;

typedef struct _IO_FILE  FILE  ;

typedef void _IO_lock_t;

typedef long  int (*cookie_read_function_t)(void*,char*,unsigned long );

typedef long  int (*cookie_write_function_t)(void*,const char*,unsigned long );

typedef int (*cookie_seek_function_t)(void*,long  int* ,int);

typedef int (*cookie_close_function_t)(void*);

typedef struct _IO_cookie_io_functions_t  cookie_io_functions_t  ;

typedef __builtin_va_list  va_list  ;

typedef struct _G_fpos_t  fpos_t  ;

typedef struct _G_fpos64_t  fpos64_t  ;

typedef struct anonymous_typeX53 div_t;

typedef struct anonymous_typeX54 ldiv_t;

typedef struct anonymous_typeX55 lldiv_t;

typedef unsigned char  u_char  ;

typedef unsigned short int  u_short  ;

typedef unsigned int  u_int  ;

typedef unsigned long  int  u_long  ;

typedef long  int  quad_t  ;

typedef unsigned long  int  u_quad_t  ;

typedef struct __fsid_t  fsid_t  ;

typedef long  int  loff_t  ;

typedef unsigned long  int  ino_t  ;

typedef unsigned long  int  ino64_t  ;

typedef unsigned long  int  dev_t  ;

typedef unsigned int  mode_t  ;

typedef unsigned long  int  nlink_t  ;

typedef unsigned int  id_t  ;

typedef int  daddr_t  ;

typedef char*  caddr_t  ;

typedef int  key_t  ;

typedef long  int  clock_t  ;

typedef int  clockid_t  ;

typedef void*  timer_t  ;

typedef long  int  suseconds_t  ;

typedef unsigned long  int ulong;

typedef unsigned short int ushort;

typedef unsigned int uint;

typedef unsigned char  u_int8_t  ;

typedef unsigned short int  u_int16_t  ;

typedef unsigned int  u_int32_t  ;

typedef unsigned long  int  u_int64_t  ;

typedef int __attribute__ ((__mode__ (__word__))) register_t __attribute__ ((__mode__ (__word__)));

typedef long  int __fd_mask;

typedef struct anonymous_typeX56 fd_set;

typedef long  int  fd_mask  ;

typedef long  int  blksize_t  ;

typedef long  int  blkcnt_t  ;

typedef unsigned long  int  fsblkcnt_t  ;

typedef unsigned long  int  fsfilcnt_t  ;

typedef long  int  blkcnt64_t  ;

typedef unsigned long  int  fsblkcnt64_t  ;

typedef unsigned long  int  fsfilcnt64_t  ;

typedef int (*__compar_fn_t)(const void*,const void*);

typedef int (*comparison_fn_t)(const void*,const void*)  ;

typedef int (*__compar_d_fn_t)(const void*,const void*,void*);

typedef unsigned int wint_t;

typedef struct anonymous_typeX50  mbstate_t  ;

typedef unsigned long  int wctype_t;

typedef const int*  wctrans_t  ;

/// previous struct definition ///
struct _IO_FILE;

struct _IO_marker;

struct _IO_codecvt;

struct _IO_wide_data;

struct obstack;

struct sigevent;

struct tm;

/// struct definition ///
struct __fsid_t
{
    int __val[2];
};

enum { _ISupper=(((((0)<8)?(((1<<(0))<<8)):(((1<<(0))>>8))))),
_ISlower=(((((1)<8)?(((1<<(1))<<8)):(((1<<(1))>>8))))),
_ISalpha=(((((2)<8)?(((1<<(2))<<8)):(((1<<(2))>>8))))),
_ISdigit=(((((3)<8)?(((1<<(3))<<8)):(((1<<(3))>>8))))),
_ISxdigit=(((((4)<8)?(((1<<(4))<<8)):(((1<<(4))>>8))))),
_ISspace=(((((5)<8)?(((1<<(5))<<8)):(((1<<(5))>>8))))),
_ISprint=(((((6)<8)?(((1<<(6))<<8)):(((1<<(6))>>8))))),
_ISgraph=(((((7)<8)?(((1<<(7))<<8)):(((1<<(7))>>8))))),
_ISblank=(((((8)<8)?(((1<<(8))<<8)):(((1<<(8))>>8))))),
_IScntrl=(((((9)<8)?(((1<<(9))<<8)):(((1<<(9))>>8))))),
_ISpunct=(((((10)<8)?(((1<<(10))<<8)):(((1<<(10))>>8))))),
_ISalnum=(((((11)<8)?(((1<<(11))<<8)):(((1<<(11))>>8)))))
};

struct __locale_struct
{
    struct __locale_data* __locales[13];
    const unsigned short int* __ctype_b;
    const int* __ctype_tolower;
    const int* __ctype_toupper;
    const char* __names[13];
};

struct anonymous_typeX1
{
    long  int quot;
    long  int rem;
};

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
    char int_p_sep_by_space;
    char int_n_cs_precedes;
    char int_n_sep_by_space;
    char int_p_sign_posn;
    char int_n_sign_posn;
};

enum { FP_INT_UPWARD=(0),
FP_INT_DOWNWARD=(1),
FP_INT_TOWARDZERO=(2),
FP_INT_TONEARESTFROMZERO=(3),
FP_INT_TONEAREST=(4)
};

enum { FP_NAN=(0),
FP_INFINITE=(1),
FP_ZERO=(2),
FP_SUBNORMAL=(3),
FP_NORMAL=(4)
};

typedef long  int __jmp_buf[8];

struct anonymous_typeX2
{
    unsigned long  int __val[(1024/(8*sizeof(unsigned long  int)))];
};

struct __jmp_buf_tag
{
    long  int  __jmpbuf[8]  ;
    int __mask_was_saved;
    struct {
        unsigned long  int __val[(1024/(8*sizeof(unsigned long  int)))];
    } __saved_mask;
};

typedef struct __jmp_buf_tag  jmp_buf[1]  ;

typedef struct __jmp_buf_tag  sigjmp_buf[1]  ;

struct timespec
{
    long  int  tv_sec  ;
    long  int  tv_nsec  ;
};

union sigval
{
int sival_int;
void* sival_ptr;
};

struct anonymous_typeX5
{
    int  si_pid  ;
    unsigned int  si_uid  ;
};

struct anonymous_typeX6
{
    int si_tid;
    int si_overrun;
    union sigval  si_sigval  ;
};

struct anonymous_typeX7
{
    int  si_pid  ;
    unsigned int  si_uid  ;
    union sigval  si_sigval  ;
};

struct anonymous_typeX8
{
    int  si_pid  ;
    unsigned int  si_uid  ;
    int si_status;
    long  int  si_utime  ;
    long  int  si_stime  ;
};

struct anonymous_typeX11
{
    void* _lower;
    void* _upper;
};

union anonymous_typeZ10
{
    struct {
        void* _lower;
        void* _upper;
    } _addr_bnd;
unsigned int  _pkey  ;
};

struct anonymous_typeX13
{
    void* _lower;
    void* _upper;
};

union anonymous_typeZ12
{
    struct {
        void* _lower;
        void* _upper;
    } _addr_bnd;
unsigned int  _pkey  ;
};

struct anonymous_typeX9
{
    void* si_addr;
    short int si_addr_lsb;
    union {
        struct {
            void* _lower;
            void* _upper;
        } _addr_bnd;
        unsigned int  _pkey  ;
    } _bounds;
};

struct anonymous_typeX14
{
    long  int si_band;
    int si_fd;
};

struct anonymous_typeX15
{
    void* _call_addr;
    int _syscall;
    unsigned int _arch;
};

union anonymous_typeZ4
{
int _pad[((128/sizeof(int))-4)];
    struct {
        int  si_pid  ;
        unsigned int  si_uid  ;
    } _kill;
    struct {
        int si_tid;
        int si_overrun;
        union sigval  si_sigval  ;
    } _timer;
    struct {
        int  si_pid  ;
        unsigned int  si_uid  ;
        union sigval  si_sigval  ;
    } _rt;
    struct {
        int  si_pid  ;
        unsigned int  si_uid  ;
        int si_status;
        long  int  si_utime  ;
        long  int  si_stime  ;
    } _sigchld;
    struct {
        void* si_addr;
        short int si_addr_lsb;
        union {
            struct {
                void* _lower;
                void* _upper;
            } _addr_bnd;
            unsigned int  _pkey  ;
        } _bounds;
    } _sigfault;
    struct {
        long  int si_band;
        int si_fd;
    } _sigpoll;
    struct {
        void* _call_addr;
        int _syscall;
        unsigned int _arch;
    } _sigsys;
};

struct anonymous_typeX17
{
    int  si_pid  ;
    unsigned int  si_uid  ;
};

struct anonymous_typeX18
{
    int si_tid;
    int si_overrun;
    union sigval  si_sigval  ;
};

struct anonymous_typeX19
{
    int  si_pid  ;
    unsigned int  si_uid  ;
    union sigval  si_sigval  ;
};

struct anonymous_typeX20
{
    int  si_pid  ;
    unsigned int  si_uid  ;
    int si_status;
    long  int  si_utime  ;
    long  int  si_stime  ;
};

struct anonymous_typeX23
{
    void* _lower;
    void* _upper;
};

union anonymous_typeZ22
{
    struct {
        void* _lower;
        void* _upper;
    } _addr_bnd;
unsigned int  _pkey  ;
};

struct anonymous_typeX25
{
    void* _lower;
    void* _upper;
};

union anonymous_typeZ24
{
    struct {
        void* _lower;
        void* _upper;
    } _addr_bnd;
unsigned int  _pkey  ;
};

struct anonymous_typeX21
{
    void* si_addr;
    short int si_addr_lsb;
    union {
        struct {
            void* _lower;
            void* _upper;
        } _addr_bnd;
        unsigned int  _pkey  ;
    } _bounds;
};

struct anonymous_typeX26
{
    long  int si_band;
    int si_fd;
};

struct anonymous_typeX27
{
    void* _call_addr;
    int _syscall;
    unsigned int _arch;
};

union anonymous_typeZ16
{
int _pad[((128/sizeof(int))-4)];
    struct {
        int  si_pid  ;
        unsigned int  si_uid  ;
    } _kill;
    struct {
        int si_tid;
        int si_overrun;
        union sigval  si_sigval  ;
    } _timer;
    struct {
        int  si_pid  ;
        unsigned int  si_uid  ;
        union sigval  si_sigval  ;
    } _rt;
    struct {
        int  si_pid  ;
        unsigned int  si_uid  ;
        int si_status;
        long  int  si_utime  ;
        long  int  si_stime  ;
    } _sigchld;
    struct {
        void* si_addr;
        short int si_addr_lsb;
        union {
            struct {
                void* _lower;
                void* _upper;
            } _addr_bnd;
            unsigned int  _pkey  ;
        } _bounds;
    } _sigfault;
    struct {
        long  int si_band;
        int si_fd;
    } _sigpoll;
    struct {
        void* _call_addr;
        int _syscall;
        unsigned int _arch;
    } _sigsys;
};

struct anonymous_typeX3
{
    int si_signo;
    int si_errno;
    int si_code;
    int __pad0;
    union {
        int _pad[((128/sizeof(int))-4)];
        struct {
            int  si_pid  ;
            unsigned int  si_uid  ;
        } _kill;
        struct {
            int si_tid;
            int si_overrun;
            union sigval  si_sigval  ;
        } _timer;
        struct {
            int  si_pid  ;
            unsigned int  si_uid  ;
            union sigval  si_sigval  ;
        } _rt;
        struct {
            int  si_pid  ;
            unsigned int  si_uid  ;
            int si_status;
            long  int  si_utime  ;
            long  int  si_stime  ;
        } _sigchld;
        struct {
            void* si_addr;
            short int si_addr_lsb;
            union {
                struct {
                    void* _lower;
                    void* _upper;
                } _addr_bnd;
                unsigned int  _pkey  ;
            } _bounds;
        } _sigfault;
        struct {
            long  int si_band;
            int si_fd;
        } _sigpoll;
        struct {
            void* _call_addr;
            int _syscall;
            unsigned int _arch;
        } _sigsys;
    } _sifields;
};

enum { SI_ASYNCNL=(-60),
SI_DETHREAD=(-7),
SI_TKILL 
,SI_SIGIO 
,SI_ASYNCIO 
,SI_MESGQ 
,SI_TIMER 
,SI_QUEUE 
,SI_USER 
,SI_KERNEL=(0x80)
};

enum { ILL_ILLOPC=(1),
ILL_ILLOPN 
,ILL_ILLADR 
,ILL_ILLTRP 
,ILL_PRVOPC 
,ILL_PRVREG 
,ILL_COPROC 
,ILL_BADSTK 
,ILL_BADIADDR 
};

enum { FPE_INTDIV=(1),
FPE_INTOVF 
,FPE_FLTDIV 
,FPE_FLTOVF 
,FPE_FLTUND 
,FPE_FLTRES 
,FPE_FLTINV 
,FPE_FLTSUB 
,FPE_FLTUNK=(14),
FPE_CONDTRAP 
};

enum { SEGV_MAPERR=(1),
SEGV_ACCERR 
,SEGV_BNDERR 
,SEGV_PKUERR 
,SEGV_ACCADI 
,SEGV_ADIDERR 
,SEGV_ADIPERR 
,SEGV_MTEAERR 
,SEGV_MTESERR 
,SEGV_CPERR 
};

enum { BUS_ADRALN=(1),
BUS_ADRERR 
,BUS_OBJERR 
,BUS_MCEERR_AR 
,BUS_MCEERR_AO 
};

enum { TRAP_BRKPT=(1),
TRAP_TRACE 
,TRAP_BRANCH 
,TRAP_HWBKPT 
,TRAP_UNK 
};

enum { CLD_EXITED=(1),
CLD_KILLED 
,CLD_DUMPED 
,CLD_TRAPPED 
,CLD_STOPPED 
,CLD_CONTINUED 
};

enum { POLL_IN=(1),
POLL_OUT 
,POLL_MSG 
,POLL_ERR 
,POLL_PRI 
,POLL_HUP 
};

struct anonymous_typeX29
{
    void (*_function)(union sigval );
    union pthread_attr_t*  _attribute  ;
};

union anonymous_typeZ28
{
int _pad[((64/sizeof(int))-4)];
int  _tid  ;
    struct {
        void (*_function)(union sigval );
        union pthread_attr_t*  _attribute  ;
    } _sigev_thread;
};

struct anonymous_typeX31
{
    void (*_function)(union sigval );
    union pthread_attr_t*  _attribute  ;
};

union anonymous_typeZ30
{
int _pad[((64/sizeof(int))-4)];
int  _tid  ;
    struct {
        void (*_function)(union sigval );
        union pthread_attr_t*  _attribute  ;
    } _sigev_thread;
};

struct sigevent
{
    union sigval  sigev_value  ;
    int sigev_signo;
    int sigev_notify;
    union {
        int _pad[((64/sizeof(int))-4)];
        int  _tid  ;
        struct {
            void (*_function)(union sigval );
            union pthread_attr_t*  _attribute  ;
        } _sigev_thread;
    } _sigev_un;
};

enum { SIGEV_SIGNAL=(0),
SIGEV_NONE 
,SIGEV_THREAD 
,SIGEV_THREAD_ID=(4)
};

union anonymous_typeZ32
{
void (*sa_handler)(int)  ;
void (*sa_sigaction)(int,struct anonymous_typeX3* ,void*);
};

union anonymous_typeZ33
{
void (*sa_handler)(int)  ;
void (*sa_sigaction)(int,struct anonymous_typeX3* ,void*);
};

struct sigaction
{
    union {
        void (*sa_handler)(int)  ;
        void (*sa_sigaction)(int,struct anonymous_typeX3* ,void*);
    } __sigaction_handler;
    struct {
        unsigned long  int __val[(1024/(8*sizeof(unsigned long  int)))];
    } sa_mask;
    int sa_flags;
    void (*sa_restorer)();
};

struct _fpx_sw_bytes
{
    unsigned int  magic1  ;
    unsigned int  extended_size  ;
    unsigned long  int  xstate_bv  ;
    unsigned int  xstate_size  ;
    unsigned int  __glibc_reserved1[7]  ;
};

struct _fpreg
{
    unsigned short int significand[4];
    unsigned short int exponent;
};

struct _fpxreg
{
    unsigned short int significand[4];
    unsigned short int exponent;
    unsigned short int __glibc_reserved1[3];
};

struct _xmmreg
{
    unsigned int  element[4]  ;
};

struct _fpstate
{
    unsigned short int  cwd  ;
    unsigned short int  swd  ;
    unsigned short int  ftw  ;
    unsigned short int  fop  ;
    unsigned long  int  rip  ;
    unsigned long  int  rdp  ;
    unsigned int  mxcsr  ;
    unsigned int  mxcr_mask  ;
    struct _fpxreg  _st[8]  ;
    struct _xmmreg  _xmm[16]  ;
    unsigned int  __glibc_reserved1[24]  ;
};

union anonymous_typeZ34
{
struct _fpstate*  fpstate  ;
unsigned long  int  __fpstate_word  ;
};

union anonymous_typeZ35
{
struct _fpstate*  fpstate  ;
unsigned long  int  __fpstate_word  ;
};

struct sigcontext
{
    unsigned long  int  r8  ;
    unsigned long  int  r9  ;
    unsigned long  int  r10  ;
    unsigned long  int  r11  ;
    unsigned long  int  r12  ;
    unsigned long  int  r13  ;
    unsigned long  int  r14  ;
    unsigned long  int  r15  ;
    unsigned long  int  rdi  ;
    unsigned long  int  rsi  ;
    unsigned long  int  rbp  ;
    unsigned long  int  rbx  ;
    unsigned long  int  rdx  ;
    unsigned long  int  rax  ;
    unsigned long  int  rcx  ;
    unsigned long  int  rsp  ;
    unsigned long  int  rip  ;
    unsigned long  int  eflags  ;
    unsigned short int cs;
    unsigned short int gs;
    unsigned short int fs;
    unsigned short int __pad0;
    unsigned long  int  err  ;
    unsigned long  int  trapno  ;
    unsigned long  int  oldmask  ;
    unsigned long  int  cr2  ;
    union {
        struct _fpstate*  fpstate  ;
        unsigned long  int  __fpstate_word  ;
    };
    unsigned long  int  __reserved1[8]  ;
};

struct _xsave_hdr
{
    unsigned long  int  xstate_bv  ;
    unsigned long  int  __glibc_reserved1[2]  ;
    unsigned long  int  __glibc_reserved2[5]  ;
};

struct _ymmh_state
{
    unsigned int  ymmh_space[64]  ;
};

struct _xstate
{
    struct _fpstate  fpstate  ;
    struct _xsave_hdr  xstate_hdr  ;
    struct _ymmh_state  ymmh  ;
};

struct anonymous_typeX36
{
    void* ss_sp;
    int ss_flags;
    unsigned long  ss_size  ;
};

typedef long long int  gregset_t[23]  ;

enum { REG_R8=(0),
REG_R9 
,REG_R10 
,REG_R11 
,REG_R12 
,REG_R13 
,REG_R14 
,REG_R15 
,REG_RDI 
,REG_RSI 
,REG_RBP 
,REG_RBX 
,REG_RDX 
,REG_RAX 
,REG_RCX 
,REG_RSP 
,REG_RIP 
,REG_EFL 
,REG_CSGSFS 
,REG_ERR 
,REG_TRAPNO 
,REG_OLDMASK 
,REG_CR2 
};

struct _libc_fpxreg
{
    unsigned short int significand[4];
    unsigned short int exponent;
    unsigned short int __glibc_reserved1[3];
};

struct _libc_xmmreg
{
    unsigned int  element[4]  ;
};

struct _libc_fpstate
{
    unsigned short int  cwd  ;
    unsigned short int  swd  ;
    unsigned short int  ftw  ;
    unsigned short int  fop  ;
    unsigned long  int  rip  ;
    unsigned long  int  rdp  ;
    unsigned int  mxcsr  ;
    unsigned int  mxcr_mask  ;
    struct _libc_fpxreg  _st[8]  ;
    struct _libc_xmmreg  _xmm[16]  ;
    unsigned int  __glibc_reserved1[24]  ;
};

struct anonymous_typeX37
{
    long long int  gregs[23]  ;
    struct _libc_fpstate*  fpregs  ;
    unsigned long  long __reserved1[8];
};

struct ucontext_t
{
    unsigned long  int uc_flags;
    struct ucontext_t*  uc_link  ;
    struct {
        void* ss_sp;
        int ss_flags;
        unsigned long  ss_size  ;
    } uc_stack;
    struct {
        long long int  gregs[23]  ;
        struct _libc_fpstate*  fpregs  ;
        unsigned long  long __reserved1[8];
    } uc_mcontext;
    struct {
        unsigned long  int __val[(1024/(8*sizeof(unsigned long  int)))];
    } uc_sigmask;
    struct _libc_fpstate  __fpregs_mem  ;
    unsigned long long int __ssp[4];
};

enum { _PC_LINK_MAX 
,_PC_MAX_CANON 
,_PC_MAX_INPUT 
,_PC_NAME_MAX 
,_PC_PATH_MAX 
,_PC_PIPE_BUF 
,_PC_CHOWN_RESTRICTED 
,_PC_NO_TRUNC 
,_PC_VDISABLE 
,_PC_SYNC_IO 
,_PC_ASYNC_IO 
,_PC_PRIO_IO 
,_PC_SOCK_MAXBUF 
,_PC_FILESIZEBITS 
,_PC_REC_INCR_XFER_SIZE 
,_PC_REC_MAX_XFER_SIZE 
,_PC_REC_MIN_XFER_SIZE 
,_PC_REC_XFER_ALIGN 
,_PC_ALLOC_SIZE_MIN 
,_PC_SYMLINK_MAX 
,_PC_2_SYMLINKS 
};

enum { _SC_ARG_MAX 
,_SC_CHILD_MAX 
,_SC_CLK_TCK 
,_SC_NGROUPS_MAX 
,_SC_OPEN_MAX 
,_SC_STREAM_MAX 
,_SC_TZNAME_MAX 
,_SC_JOB_CONTROL 
,_SC_SAVED_IDS 
,_SC_REALTIME_SIGNALS 
,_SC_PRIORITY_SCHEDULING 
,_SC_TIMERS 
,_SC_ASYNCHRONOUS_IO 
,_SC_PRIORITIZED_IO 
,_SC_SYNCHRONIZED_IO 
,_SC_FSYNC 
,_SC_MAPPED_FILES 
,_SC_MEMLOCK 
,_SC_MEMLOCK_RANGE 
,_SC_MEMORY_PROTECTION 
,_SC_MESSAGE_PASSING 
,_SC_SEMAPHORES 
,_SC_SHARED_MEMORY_OBJECTS 
,_SC_AIO_LISTIO_MAX 
,_SC_AIO_MAX 
,_SC_AIO_PRIO_DELTA_MAX 
,_SC_DELAYTIMER_MAX 
,_SC_MQ_OPEN_MAX 
,_SC_MQ_PRIO_MAX 
,_SC_VERSION 
,_SC_PAGESIZE 
,_SC_RTSIG_MAX 
,_SC_SEM_NSEMS_MAX 
,_SC_SEM_VALUE_MAX 
,_SC_SIGQUEUE_MAX 
,_SC_TIMER_MAX 
,_SC_BC_BASE_MAX 
,_SC_BC_DIM_MAX 
,_SC_BC_SCALE_MAX 
,_SC_BC_STRING_MAX 
,_SC_COLL_WEIGHTS_MAX 
,_SC_EQUIV_CLASS_MAX 
,_SC_EXPR_NEST_MAX 
,_SC_LINE_MAX 
,_SC_RE_DUP_MAX 
,_SC_CHARCLASS_NAME_MAX 
,_SC_2_VERSION 
,_SC_2_C_BIND 
,_SC_2_C_DEV 
,_SC_2_FORT_DEV 
,_SC_2_FORT_RUN 
,_SC_2_SW_DEV 
,_SC_2_LOCALEDEF 
,_SC_PII 
,_SC_PII_XTI 
,_SC_PII_SOCKET 
,_SC_PII_INTERNET 
,_SC_PII_OSI 
,_SC_POLL 
,_SC_SELECT 
,_SC_UIO_MAXIOV 
,_SC_IOV_MAX=((60)),
_SC_PII_INTERNET_STREAM 
,_SC_PII_INTERNET_DGRAM 
,_SC_PII_OSI_COTS 
,_SC_PII_OSI_CLTS 
,_SC_PII_OSI_M 
,_SC_T_IOV_MAX 
,_SC_THREADS 
,_SC_THREAD_SAFE_FUNCTIONS 
,_SC_GETGR_R_SIZE_MAX 
,_SC_GETPW_R_SIZE_MAX 
,_SC_LOGIN_NAME_MAX 
,_SC_TTY_NAME_MAX 
,_SC_THREAD_DESTRUCTOR_ITERATIONS 
,_SC_THREAD_KEYS_MAX 
,_SC_THREAD_STACK_MIN 
,_SC_THREAD_THREADS_MAX 
,_SC_THREAD_ATTR_STACKADDR 
,_SC_THREAD_ATTR_STACKSIZE 
,_SC_THREAD_PRIORITY_SCHEDULING 
,_SC_THREAD_PRIO_INHERIT 
,_SC_THREAD_PRIO_PROTECT 
,_SC_THREAD_PROCESS_SHARED 
,_SC_NPROCESSORS_CONF 
,_SC_NPROCESSORS_ONLN 
,_SC_PHYS_PAGES 
,_SC_AVPHYS_PAGES 
,_SC_ATEXIT_MAX 
,_SC_PASS_MAX 
,_SC_XOPEN_VERSION 
,_SC_XOPEN_XCU_VERSION 
,_SC_XOPEN_UNIX 
,_SC_XOPEN_CRYPT 
,_SC_XOPEN_ENH_I18N 
,_SC_XOPEN_SHM 
,_SC_2_CHAR_TERM 
,_SC_2_C_VERSION 
,_SC_2_UPE 
,_SC_XOPEN_XPG2 
,_SC_XOPEN_XPG3 
,_SC_XOPEN_XPG4 
,_SC_CHAR_BIT 
,_SC_CHAR_MAX 
,_SC_CHAR_MIN 
,_SC_INT_MAX 
,_SC_INT_MIN 
,_SC_LONG_BIT 
,_SC_WORD_BIT 
,_SC_MB_LEN_MAX 
,_SC_NZERO 
,_SC_SSIZE_MAX 
,_SC_SCHAR_MAX 
,_SC_SCHAR_MIN 
,_SC_SHRT_MAX 
,_SC_SHRT_MIN 
,_SC_UCHAR_MAX 
,_SC_UINT_MAX 
,_SC_ULONG_MAX 
,_SC_USHRT_MAX 
,_SC_NL_ARGMAX 
,_SC_NL_LANGMAX 
,_SC_NL_MSGMAX 
,_SC_NL_NMAX 
,_SC_NL_SETMAX 
,_SC_NL_TEXTMAX 
,_SC_XBS5_ILP32_OFF32 
,_SC_XBS5_ILP32_OFFBIG 
,_SC_XBS5_LP64_OFF64 
,_SC_XBS5_LPBIG_OFFBIG 
,_SC_XOPEN_LEGACY 
,_SC_XOPEN_REALTIME 
,_SC_XOPEN_REALTIME_THREADS 
,_SC_ADVISORY_INFO 
,_SC_BARRIERS 
,_SC_BASE 
,_SC_C_LANG_SUPPORT 
,_SC_C_LANG_SUPPORT_R 
,_SC_CLOCK_SELECTION 
,_SC_CPUTIME 
,_SC_THREAD_CPUTIME 
,_SC_DEVICE_IO 
,_SC_DEVICE_SPECIFIC 
,_SC_DEVICE_SPECIFIC_R 
,_SC_FD_MGMT 
,_SC_FIFO 
,_SC_PIPE 
,_SC_FILE_ATTRIBUTES 
,_SC_FILE_LOCKING 
,_SC_FILE_SYSTEM 
,_SC_MONOTONIC_CLOCK 
,_SC_MULTI_PROCESS 
,_SC_SINGLE_PROCESS 
,_SC_NETWORKING 
,_SC_READER_WRITER_LOCKS 
,_SC_SPIN_LOCKS 
,_SC_REGEXP 
,_SC_REGEX_VERSION 
,_SC_SHELL 
,_SC_SIGNALS 
,_SC_SPAWN 
,_SC_SPORADIC_SERVER 
,_SC_THREAD_SPORADIC_SERVER 
,_SC_SYSTEM_DATABASE 
,_SC_SYSTEM_DATABASE_R 
,_SC_TIMEOUTS 
,_SC_TYPED_MEMORY_OBJECTS 
,_SC_USER_GROUPS 
,_SC_USER_GROUPS_R 
,_SC_2_PBS 
,_SC_2_PBS_ACCOUNTING 
,_SC_2_PBS_LOCATE 
,_SC_2_PBS_MESSAGE 
,_SC_2_PBS_TRACK 
,_SC_SYMLOOP_MAX 
,_SC_STREAMS 
,_SC_2_PBS_CHECKPOINT 
,_SC_V6_ILP32_OFF32 
,_SC_V6_ILP32_OFFBIG 
,_SC_V6_LP64_OFF64 
,_SC_V6_LPBIG_OFFBIG 
,_SC_HOST_NAME_MAX 
,_SC_TRACE 
,_SC_TRACE_EVENT_FILTER 
,_SC_TRACE_INHERIT 
,_SC_TRACE_LOG 
,_SC_LEVEL1_ICACHE_SIZE 
,_SC_LEVEL1_ICACHE_ASSOC 
,_SC_LEVEL1_ICACHE_LINESIZE 
,_SC_LEVEL1_DCACHE_SIZE 
,_SC_LEVEL1_DCACHE_ASSOC 
,_SC_LEVEL1_DCACHE_LINESIZE 
,_SC_LEVEL2_CACHE_SIZE 
,_SC_LEVEL2_CACHE_ASSOC 
,_SC_LEVEL2_CACHE_LINESIZE 
,_SC_LEVEL3_CACHE_SIZE 
,_SC_LEVEL3_CACHE_ASSOC 
,_SC_LEVEL3_CACHE_LINESIZE 
,_SC_LEVEL4_CACHE_SIZE 
,_SC_LEVEL4_CACHE_ASSOC 
,_SC_LEVEL4_CACHE_LINESIZE 
,_SC_IPV6=(((60)+125)+50),
_SC_RAW_SOCKETS 
,_SC_V7_ILP32_OFF32 
,_SC_V7_ILP32_OFFBIG 
,_SC_V7_LP64_OFF64 
,_SC_V7_LPBIG_OFFBIG 
,_SC_SS_REPL_MAX 
,_SC_TRACE_EVENT_NAME_MAX 
,_SC_TRACE_NAME_MAX 
,_SC_TRACE_SYS_MAX 
,_SC_TRACE_USER_EVENT_MAX 
,_SC_XOPEN_STREAMS 
,_SC_THREAD_ROBUST_PRIO_INHERIT 
,_SC_THREAD_ROBUST_PRIO_PROTECT 
,_SC_MINSIGSTKSZ 
,_SC_SIGSTKSZ 
};

enum { _CS_PATH 
,_CS_V6_WIDTH_RESTRICTED_ENVS 
,_CS_GNU_LIBC_VERSION 
,_CS_GNU_LIBPTHREAD_VERSION 
,_CS_V5_WIDTH_RESTRICTED_ENVS 
,_CS_V7_WIDTH_RESTRICTED_ENVS 
,_CS_LFS_CFLAGS=(1000),
_CS_LFS_LDFLAGS 
,_CS_LFS_LIBS 
,_CS_LFS_LINTFLAGS 
,_CS_LFS64_CFLAGS 
,_CS_LFS64_LDFLAGS 
,_CS_LFS64_LIBS 
,_CS_LFS64_LINTFLAGS 
,_CS_XBS5_ILP32_OFF32_CFLAGS=(1100),
_CS_XBS5_ILP32_OFF32_LDFLAGS 
,_CS_XBS5_ILP32_OFF32_LIBS 
,_CS_XBS5_ILP32_OFF32_LINTFLAGS 
,_CS_XBS5_ILP32_OFFBIG_CFLAGS 
,_CS_XBS5_ILP32_OFFBIG_LDFLAGS 
,_CS_XBS5_ILP32_OFFBIG_LIBS 
,_CS_XBS5_ILP32_OFFBIG_LINTFLAGS 
,_CS_XBS5_LP64_OFF64_CFLAGS 
,_CS_XBS5_LP64_OFF64_LDFLAGS 
,_CS_XBS5_LP64_OFF64_LIBS 
,_CS_XBS5_LP64_OFF64_LINTFLAGS 
,_CS_XBS5_LPBIG_OFFBIG_CFLAGS 
,_CS_XBS5_LPBIG_OFFBIG_LDFLAGS 
,_CS_XBS5_LPBIG_OFFBIG_LIBS 
,_CS_XBS5_LPBIG_OFFBIG_LINTFLAGS 
,_CS_POSIX_V6_ILP32_OFF32_CFLAGS 
,_CS_POSIX_V6_ILP32_OFF32_LDFLAGS 
,_CS_POSIX_V6_ILP32_OFF32_LIBS 
,_CS_POSIX_V6_ILP32_OFF32_LINTFLAGS 
,_CS_POSIX_V6_ILP32_OFFBIG_CFLAGS 
,_CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS 
,_CS_POSIX_V6_ILP32_OFFBIG_LIBS 
,_CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS 
,_CS_POSIX_V6_LP64_OFF64_CFLAGS 
,_CS_POSIX_V6_LP64_OFF64_LDFLAGS 
,_CS_POSIX_V6_LP64_OFF64_LIBS 
,_CS_POSIX_V6_LP64_OFF64_LINTFLAGS 
,_CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS 
,_CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS 
,_CS_POSIX_V6_LPBIG_OFFBIG_LIBS 
,_CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS 
,_CS_POSIX_V7_ILP32_OFF32_CFLAGS 
,_CS_POSIX_V7_ILP32_OFF32_LDFLAGS 
,_CS_POSIX_V7_ILP32_OFF32_LIBS 
,_CS_POSIX_V7_ILP32_OFF32_LINTFLAGS 
,_CS_POSIX_V7_ILP32_OFFBIG_CFLAGS 
,_CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS 
,_CS_POSIX_V7_ILP32_OFFBIG_LIBS 
,_CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS 
,_CS_POSIX_V7_LP64_OFF64_CFLAGS 
,_CS_POSIX_V7_LP64_OFF64_LDFLAGS 
,_CS_POSIX_V7_LP64_OFF64_LIBS 
,_CS_POSIX_V7_LP64_OFF64_LINTFLAGS 
,_CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS 
,_CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS 
,_CS_POSIX_V7_LPBIG_OFFBIG_LIBS 
,_CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS 
,_CS_V6_ENV 
,_CS_V7_ENV 
};

enum { SS_ONSTACK=(1),
SS_DISABLE 
};

struct sigstack
{
    void* ss_sp;
    int ss_onstack;
};

struct anonymous_typeX39
{
    unsigned int __low;
    unsigned int __high;
};

union anonymous_typeZ38
{
unsigned long long int __value64;
    struct {
        unsigned int __low;
        unsigned int __high;
    } __value32;
};

struct __pthread_internal_list
{
    struct __pthread_internal_list*  __prev  ;
    struct __pthread_internal_list*  __next  ;
};

struct __pthread_internal_slist
{
    struct __pthread_internal_slist*  __next  ;
};

struct __pthread_mutex_s
{
    int __lock;
    unsigned int __count;
    int __owner;
    unsigned int __nusers;
    int __kind;
    short __spins;
    short __elision;
    struct __pthread_internal_list  __list  ;
};

struct __pthread_rwlock_arch_t
{
    unsigned int __readers;
    unsigned int __writers;
    unsigned int __wrphase_futex;
    unsigned int __writers_futex;
    unsigned int __pad3;
    unsigned int __pad4;
    int __cur_writer;
    int __shared;
    char __rwelision;
    unsigned char __pad1[7];
    unsigned long  int __pad2;
    unsigned int __flags;
};

struct __pthread_cond_s
{
    union {
        unsigned long long int __value64;
        struct {
            unsigned int __low;
            unsigned int __high;
        } __value32;
    } __wseq;
    union {
        unsigned long long int __value64;
        struct {
            unsigned int __low;
            unsigned int __high;
        } __value32;
    } __g1_start;
    unsigned int __g_size[2];
    unsigned int __g1_orig_size;
    unsigned int __wrefs;
    unsigned int __g_signals[2];
    unsigned int __unused_initialized_1;
    unsigned int __unused_initialized_2;
};

struct anonymous_typeX40
{
    int __data;
};

union anonymous_typeZ41
{
char __size[4];
int __align;
};

union anonymous_typeZ42
{
char __size[4];
int __align;
};

union pthread_attr_t
{
char __size[56];
long  int __align;
};

union anonymous_typeZ43
{
struct __pthread_mutex_s  __data  ;
char __size[40];
long  int __align;
};

union anonymous_typeZ44
{
struct __pthread_cond_s  __data  ;
char __size[48];
long long int __align;
};

union anonymous_typeZ45
{
struct __pthread_rwlock_arch_t  __data  ;
char __size[56];
long  int __align;
};

union anonymous_typeZ46
{
char __size[8];
long  int __align;
};

union anonymous_typeZ47
{
char __size[32];
long  int __align;
};

union anonymous_typeZ48
{
char __size[4];
int __align;
};

struct anonymous_typeX49
{
    long long __attribute__((__aligned__(__alignof__(long long)))) __clang_max_align_nonce1 __attribute__((__aligned__(__alignof__(long long))));
    long  double __attribute__((__aligned__(__alignof__(long double)))) __clang_max_align_nonce2 __attribute__((__aligned__(__alignof__(long double))));
};

union anonymous_typeZ51
{
unsigned int __wch;
char __wchb[4];
};

union anonymous_typeZ52
{
unsigned int __wch;
char __wchb[4];
};

struct anonymous_typeX50
{
    int __count;
    union {
        unsigned int __wch;
        char __wchb[4];
    } __value;
};

struct _G_fpos_t
{
    long  int  __pos  ;
    struct {
        int __count;
        union {
            unsigned int __wch;
            char __wchb[4];
        } __value;
    } __state;
};

struct _G_fpos64_t
{
    long  int  __pos  ;
    struct {
        int __count;
        union {
            unsigned int __wch;
            char __wchb[4];
        } __value;
    } __state;
};

struct _IO_FILE
{
    int _flags;
    char* _IO_read_ptr;
    char* _IO_read_end;
    char* _IO_read_base;
    char* _IO_write_base;
    char* _IO_write_ptr;
    char* _IO_write_end;
    char* _IO_buf_base;
    char* _IO_buf_end;
    char* _IO_save_base;
    char* _IO_backup_base;
    char* _IO_save_end;
    struct _IO_marker*  _markers  ;
    struct _IO_FILE*  _chain  ;
    int _fileno;
    int _flags2:24;
    char _short_backupbuf[1];
    long  int  _old_offset  ;
    unsigned short int _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    void*  _lock  ;
    long  int  _offset  ;
    struct _IO_codecvt*  _codecvt  ;
    struct _IO_wide_data*  _wide_data  ;
    struct _IO_FILE*  _freeres_list  ;
    void* _freeres_buf;
    struct _IO_FILE**  _prevchain  ;
    int _mode;
    int _unused3;
    unsigned long  int  _total_written  ;
    char _unused2[12*sizeof(int)-5*sizeof(void*)];
};

struct _IO_cookie_io_functions_t
{
    long  int (*(*read))(void*,char*,unsigned long )  ;
    long  int (*(*write))(void*,const char*,unsigned long )  ;
    int (*(*seek))(void*,long  int* ,int)  ;
    int (*(*close))(void*)  ;
};

struct anonymous_typeX53
{
    int quot;
    int rem;
};

struct anonymous_typeX54
{
    long  int quot;
    long  int rem;
};

struct anonymous_typeX55
{
    long long int quot;
    long long int rem;
};

struct timeval
{
    long  int  tv_sec  ;
    long  int  tv_usec  ;
};

struct anonymous_typeX56
{
    long  int  fds_bits[1024/(8*(int)sizeof(long  int ))]  ;
};

struct random_data
{
    int*  fptr  ;
    int*  rptr  ;
    int*  state  ;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int*  end_ptr  ;
};

struct drand48_data
{
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
};

struct timex
{
    unsigned int modes;
    long  int  offset  ;
    long  int  freq  ;
    long  int  maxerror  ;
    long  int  esterror  ;
    int status;
    long  int  constant  ;
    long  int  precision  ;
    long  int  tolerance  ;
    struct timeval  time  ;
    long  int  tick  ;
    long  int  ppsfreq  ;
    long  int  jitter  ;
    int shift;
    long  int  stabil  ;
    long  int  jitcnt  ;
    long  int  calcnt  ;
    long  int  errcnt  ;
    long  int  stbcnt  ;
    int tai;
    int :32;
    int :32;
    int :32;
    int :32;
    int :32;
    int :32;
    int :32;
    int :32;
    int :32;
    int :32;
    int :32;
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
    long  int tm_gmtoff;
    const char* tm_zone;
};

struct itimerspec
{
    struct timespec  it_interval  ;
    struct timespec  it_value  ;
};

enum { __ISwupper=(0),
__ISwlower=(1),
__ISwalpha=(2),
__ISwdigit=(3),
__ISwxdigit=(4),
__ISwspace=(5),
__ISwprint=(6),
__ISwgraph=(7),
__ISwblank=(8),
__ISwcntrl=(9),
__ISwpunct=(10),
__ISwalnum=(11),
_ISwupper=((((((0))<8)?((int)((1UL<<((0)))<<24)):((((((0))<16)?((int)((1UL<<((0)))<<8)):((((((0))<24)?((int)((1UL<<((0)))>>8)):((int)((1UL<<((0)))>>24))))))))))),
_ISwlower=((((((1))<8)?((int)((1UL<<((1)))<<24)):((((((1))<16)?((int)((1UL<<((1)))<<8)):((((((1))<24)?((int)((1UL<<((1)))>>8)):((int)((1UL<<((1)))>>24))))))))))),
_ISwalpha=((((((2))<8)?((int)((1UL<<((2)))<<24)):((((((2))<16)?((int)((1UL<<((2)))<<8)):((((((2))<24)?((int)((1UL<<((2)))>>8)):((int)((1UL<<((2)))>>24))))))))))),
_ISwdigit=((((((3))<8)?((int)((1UL<<((3)))<<24)):((((((3))<16)?((int)((1UL<<((3)))<<8)):((((((3))<24)?((int)((1UL<<((3)))>>8)):((int)((1UL<<((3)))>>24))))))))))),
_ISwxdigit=((((((4))<8)?((int)((1UL<<((4)))<<24)):((((((4))<16)?((int)((1UL<<((4)))<<8)):((((((4))<24)?((int)((1UL<<((4)))>>8)):((int)((1UL<<((4)))>>24))))))))))),
_ISwspace=((((((5))<8)?((int)((1UL<<((5)))<<24)):((((((5))<16)?((int)((1UL<<((5)))<<8)):((((((5))<24)?((int)((1UL<<((5)))>>8)):((int)((1UL<<((5)))>>24))))))))))),
_ISwprint=((((((6))<8)?((int)((1UL<<((6)))<<24)):((((((6))<16)?((int)((1UL<<((6)))<<8)):((((((6))<24)?((int)((1UL<<((6)))>>8)):((int)((1UL<<((6)))>>24))))))))))),
_ISwgraph=((((((7))<8)?((int)((1UL<<((7)))<<24)):((((((7))<16)?((int)((1UL<<((7)))<<8)):((((((7))<24)?((int)((1UL<<((7)))>>8)):((int)((1UL<<((7)))>>24))))))))))),
_ISwblank=((((((8))<8)?((int)((1UL<<((8)))<<24)):((((((8))<16)?((int)((1UL<<((8)))<<8)):((((((8))<24)?((int)((1UL<<((8)))>>8)):((int)((1UL<<((8)))>>24))))))))))),
_ISwcntrl=((((((9))<8)?((int)((1UL<<((9)))<<24)):((((((9))<16)?((int)((1UL<<((9)))<<8)):((((((9))<24)?((int)((1UL<<((9)))>>8)):((int)((1UL<<((9)))>>24))))))))))),
_ISwpunct=((((((10))<8)?((int)((1UL<<((10)))<<24)):((((((10))<16)?((int)((1UL<<((10)))<<8)):((((((10))<24)?((int)((1UL<<((10)))>>8)):((int)((1UL<<((10)))>>24))))))))))),
_ISwalnum=((((((11))<8)?((int)((1UL<<((11)))<<24)):((((((11))<16)?((int)((1UL<<((11)))<<8)):((((((11))<24)?((int)((1UL<<((11)))>>8)):((int)((1UL<<((11)))>>24)))))))))))
};

/// variable definition ///
extern char* program_invocation_name;
extern char* program_invocation_short_name;
extern int signgam;
extern char** __environ;
extern char** environ;
extern char* optarg;
extern int optind;
extern int opterr;
extern int optopt;
extern struct _IO_FILE*  stdin  ;
extern struct _IO_FILE*  stdout  ;
extern struct _IO_FILE*  stderr  ;
extern char* __tzname[2];
extern int __daylight;
extern long  int __timezone;
extern char* tzname[2];
extern int daylight;
extern long  int timezone;
extern int getdate_err;
// source head

// header function
void __assert_fail(const char* __assertion, const char* __file, unsigned int __line, const char* __function) __attribute__ ((__noreturn__)) ;
void __assert_perror_fail(int __errnum, const char* __file, unsigned int __line, const char* __function) __attribute__ ((__noreturn__)) ;
void __assert(const char* __assertion, const char* __file, int __line) __attribute__ ((__noreturn__)) ;
const unsigned short int** __ctype_b_loc() __attribute__ ((__const__));
const int**  __ctype_tolower_loc() __attribute__ ((__const__));
const int**  __ctype_toupper_loc() __attribute__ ((__const__));
int isalnum(int );
int isalpha(int );
int iscntrl(int );
int isdigit(int );
int islower(int );
int isgraph(int );
int isprint(int );
int ispunct(int );
int isspace(int );
int isupper(int );
int isxdigit(int );
int tolower(int __c);
int toupper(int __c);
int isblank(int );
int isctype(int __c, int __mask);
int isascii(int __c);
int toascii(int __c);
int _toupper(int );
int _tolower(int );
int isalnum_l(int , struct __locale_struct*    );
int isalpha_l(int , struct __locale_struct*    );
int iscntrl_l(int , struct __locale_struct*    );
int isdigit_l(int , struct __locale_struct*    );
int islower_l(int , struct __locale_struct*    );
int isgraph_l(int , struct __locale_struct*    );
int isprint_l(int , struct __locale_struct*    );
int ispunct_l(int , struct __locale_struct*    );
int isspace_l(int , struct __locale_struct*    );
int isupper_l(int , struct __locale_struct*    );
int isxdigit_l(int , struct __locale_struct*    );
int isblank_l(int , struct __locale_struct*    );
int __tolower_l(int __c, struct __locale_struct*  __l  );
int tolower_l(int __c, struct __locale_struct*  __l  );
int __toupper_l(int __c, struct __locale_struct*  __l  );
int toupper_l(int __c, struct __locale_struct*  __l  );
int* __errno_location() __attribute__ ((__const__));
long  int  imaxabs(long  int  __n  ) __attribute__ ((__const__));
unsigned long  int  uimaxabs(long  int  __n  ) __attribute__ ((__const__));
struct anonymous_typeX1  imaxdiv(long  int  __numer  , long  int  __denom  ) __attribute__ ((__const__));
long  int  strtoimax(const char* __nptr, char** __endptr, int __base);
unsigned long  int  strtoumax(const char* __nptr, char** __endptr, int __base);
long  int  wcstoimax(const int*  __nptr  , int**  __endptr  , int __base);
unsigned long  int  wcstoumax(const int*  __nptr  , int**  __endptr  , int __base);
long  int  __isoc23_strtoimax(const char* __nptr, char** __endptr, int __base);
unsigned long  int  __isoc23_strtoumax(const char* __nptr, char** __endptr, int __base);
long  int  __isoc23_wcstoimax(const int*  __nptr  , int**  __endptr  , int __base);
unsigned long  int  __isoc23_wcstoumax(const int*  __nptr  , int**  __endptr  , int __base);
long  int __sysconf(int __name);
char* setlocale(int __category, const char* __locale);
struct lconv*  localeconv();
struct __locale_struct*  newlocale(int __category_mask, const char* __locale, struct __locale_struct*  __base  );
struct __locale_struct*  duplocale(struct __locale_struct*  __dataset  );
void freelocale(struct __locale_struct*  __dataset  );
struct __locale_struct*  uselocale(struct __locale_struct*  __dataset  );
int __fpclassify(double __value) __attribute__ ((__const__));
int __signbit(double __value) __attribute__ ((__const__));
int __isinf(double __value) __attribute__ ((__const__));
int __finite(double __value) __attribute__ ((__const__));
int __isnan(double __value) __attribute__ ((__const__));
int __iseqsig(double __x, double __y);
int __issignaling(double __value) __attribute__ ((__const__));
double acos(double __x);
double __acos(double __x);
double asin(double __x);
double __asin(double __x);
double atan(double __x);
double __atan(double __x);
double atan2(double __y, double __x);
double __atan2(double __y, double __x);
double cos(double __x);
double __cos(double __x);
double sin(double __x);
double __sin(double __x);
double tan(double __x);
double __tan(double __x);
double acospi(double __x);
double __acospi(double __x);
double asinpi(double __x);
double __asinpi(double __x);
double atanpi(double __x);
double __atanpi(double __x);
double atan2pi(double __y, double __x);
double __atan2pi(double __y, double __x);
double cospi(double __x);
double __cospi(double __x);
double sinpi(double __x);
double __sinpi(double __x);
double tanpi(double __x);
double __tanpi(double __x);
double cosh(double __x);
double __cosh(double __x);
double sinh(double __x);
double __sinh(double __x);
double tanh(double __x);
double __tanh(double __x);
void sincos(double __x, double* __sinx, double* __cosx);
void __sincos(double __x, double* __sinx, double* __cosx);
double acosh(double __x);
double __acosh(double __x);
double asinh(double __x);
double __asinh(double __x);
double atanh(double __x);
double __atanh(double __x);
double exp(double __x);
double __exp(double __x);
double frexp(double __x, int* __exponent);
double __frexp(double __x, int* __exponent);
double ldexp(double __x, int __exponent);
double __ldexp(double __x, int __exponent);
double log(double __x);
double __log(double __x);
double log10(double __x);
double __log10(double __x);
double modf(double __x, double* __iptr);
double __modf(double __x, double* __iptr);
double exp10(double __x);
double __exp10(double __x);
double exp2m1(double __x);
double __exp2m1(double __x);
double exp10m1(double __x);
double __exp10m1(double __x);
double log2p1(double __x);
double __log2p1(double __x);
double log10p1(double __x);
double __log10p1(double __x);
double logp1(double __x);
double __logp1(double __x);
double expm1(double __x);
double __expm1(double __x);
double log1p(double __x);
double __log1p(double __x);
double logb(double __x);
double __logb(double __x);
double exp2(double __x);
double __exp2(double __x);
double log2(double __x);
double __log2(double __x);
double pow(double __x, double __y);
double __pow(double __x, double __y);
double sqrt(double __x);
double __sqrt(double __x);
double hypot(double __x, double __y);
double __hypot(double __x, double __y);
double cbrt(double __x);
double __cbrt(double __x);
double compoundn(double __x, long long int __y);
double __compoundn(double __x, long long int __y);
double pown(double __x, long long int __y);
double __pown(double __x, long long int __y);
double powr(double __x, double __y);
double __powr(double __x, double __y);
double rootn(double __x, long long int __y);
double __rootn(double __x, long long int __y);
double rsqrt(double __x);
double __rsqrt(double __x);
double ceil(double __x) __attribute__ ((__const__));
double fabs(double __x) __attribute__ ((__const__));
double floor(double __x) __attribute__ ((__const__));
double fmod(double __x, double __y);
double __fmod(double __x, double __y);
int isinf(double __value) __attribute__ ((__const__));
int finite(double __value) __attribute__ ((__const__));
double drem(double __x, double __y);
double __drem(double __x, double __y);
double significand(double __x);
double __significand(double __x);
double copysign(double __x, double __y) __attribute__ ((__const__));
double nan(const char* __tagb);
double __nan(const char* __tagb);
int isnan(double __value) __attribute__ ((__const__));
double j0(double );
double __j0(double );
double j1(double );
double __j1(double );
double jn(int , double );
double __jn(int , double );
double y0(double );
double __y0(double );
double y1(double );
double __y1(double );
double yn(int , double );
double __yn(int , double );
double erf(double );
double __erf(double );
double erfc(double );
double __erfc(double );
double lgamma(double );
double __lgamma(double );
double tgamma(double );
double __tgamma(double );
double gamma(double );
double __gamma(double );
double lgamma_r(double , int* __signgamp);
double __lgamma_r(double , int* __signgamp);
double rint(double __x);
double __rint(double __x);
double nextafter(double __x, double __y);
double __nextafter(double __x, double __y);
double nexttoward(double __x, long  double __y);
double __nexttoward(double __x, long  double __y);
double nextdown(double __x);
double __nextdown(double __x);
double nextup(double __x);
double __nextup(double __x);
double remainder(double __x, double __y);
double __remainder(double __x, double __y);
double scalbn(double __x, int __n);
double __scalbn(double __x, int __n);
int ilogb(double __x);
int __ilogb(double __x);
long  int llogb(double __x);
long  int __llogb(double __x);
double scalbln(double __x, long  int __n);
double __scalbln(double __x, long  int __n);
double nearbyint(double __x);
double __nearbyint(double __x);
double round(double __x) __attribute__ ((__const__));
double trunc(double __x) __attribute__ ((__const__));
double remquo(double __x, double __y, int* __quo);
double __remquo(double __x, double __y, int* __quo);
long  int lrint(double __x);
long  int __lrint(double __x);
long long int llrint(double __x);
long long int __llrint(double __x);
long  int lround(double __x);
long  int __lround(double __x);
long long int llround(double __x);
long long int __llround(double __x);
double fdim(double __x, double __y);
double __fdim(double __x, double __y);
double fmax(double __x, double __y) __attribute__ ((__const__));
double fmin(double __x, double __y) __attribute__ ((__const__));
double fma(double __x, double __y, double __z);
double __fma(double __x, double __y, double __z);
double roundeven(double __x) __attribute__ ((__const__));
long  int  fromfp(double __x, int __round, unsigned int __width);
long  int  __fromfp(double __x, int __round, unsigned int __width);
unsigned long  int  ufromfp(double __x, int __round, unsigned int __width);
unsigned long  int  __ufromfp(double __x, int __round, unsigned int __width);
long  int  fromfpx(double __x, int __round, unsigned int __width);
long  int  __fromfpx(double __x, int __round, unsigned int __width);
unsigned long  int  ufromfpx(double __x, int __round, unsigned int __width);
unsigned long  int  __ufromfpx(double __x, int __round, unsigned int __width);
int canonicalize(double* __cx, const double* __x);
double fmaxmag(double __x, double __y) __attribute__ ((__const__));
double fminmag(double __x, double __y) __attribute__ ((__const__));
double fmaximum(double __x, double __y) __attribute__ ((__const__));
double fminimum(double __x, double __y) __attribute__ ((__const__));
double fmaximum_num(double __x, double __y) __attribute__ ((__const__));
double fminimum_num(double __x, double __y) __attribute__ ((__const__));
double fmaximum_mag(double __x, double __y) __attribute__ ((__const__));
double fminimum_mag(double __x, double __y) __attribute__ ((__const__));
double fmaximum_mag_num(double __x, double __y) __attribute__ ((__const__));
double fminimum_mag_num(double __x, double __y) __attribute__ ((__const__));
int totalorder(const double* __x, const double* __y) __attribute__ ((__pure__));
int totalordermag(const double* __x, const double* __y) __attribute__ ((__pure__));
double getpayload(const double* __x);
double __getpayload(const double* __x);
int setpayload(double* __x, double __payload);
int setpayloadsig(double* __x, double __payload);
double scalb(double __x, double __n);
double __scalb(double __x, double __n);
int __fpclassifyf(float __value) __attribute__ ((__const__));
int __signbitf(float __value) __attribute__ ((__const__));
int __isinff(float __value) __attribute__ ((__const__));
int __finitef(float __value) __attribute__ ((__const__));
int __isnanf(float __value) __attribute__ ((__const__));
int __iseqsigf(float __x, float __y);
int __issignalingf(float __value) __attribute__ ((__const__));
float acosf(float __x);
float __acosf(float __x);
float asinf(float __x);
float __asinf(float __x);
float atanf(float __x);
float __atanf(float __x);
float atan2f(float __y, float __x);
float __atan2f(float __y, float __x);
float cosf(float __x);
float __cosf(float __x);
float sinf(float __x);
float __sinf(float __x);
float tanf(float __x);
float __tanf(float __x);
float acospif(float __x);
float __acospif(float __x);
float asinpif(float __x);
float __asinpif(float __x);
float atanpif(float __x);
float __atanpif(float __x);
float atan2pif(float __y, float __x);
float __atan2pif(float __y, float __x);
float cospif(float __x);
float __cospif(float __x);
float sinpif(float __x);
float __sinpif(float __x);
float tanpif(float __x);
float __tanpif(float __x);
float coshf(float __x);
float __coshf(float __x);
float sinhf(float __x);
float __sinhf(float __x);
float tanhf(float __x);
float __tanhf(float __x);
void sincosf(float __x, float* __sinx, float* __cosx);
void __sincosf(float __x, float* __sinx, float* __cosx);
float acoshf(float __x);
float __acoshf(float __x);
float asinhf(float __x);
float __asinhf(float __x);
float atanhf(float __x);
float __atanhf(float __x);
float expf(float __x);
float __expf(float __x);
float frexpf(float __x, int* __exponent);
float __frexpf(float __x, int* __exponent);
float ldexpf(float __x, int __exponent);
float __ldexpf(float __x, int __exponent);
float logf(float __x);
float __logf(float __x);
float log10f(float __x);
float __log10f(float __x);
float modff(float __x, float* __iptr);
float __modff(float __x, float* __iptr);
float exp10f(float __x);
float __exp10f(float __x);
float exp2m1f(float __x);
float __exp2m1f(float __x);
float exp10m1f(float __x);
float __exp10m1f(float __x);
float log2p1f(float __x);
float __log2p1f(float __x);
float log10p1f(float __x);
float __log10p1f(float __x);
float logp1f(float __x);
float __logp1f(float __x);
float expm1f(float __x);
float __expm1f(float __x);
float log1pf(float __x);
float __log1pf(float __x);
float logbf(float __x);
float __logbf(float __x);
float exp2f(float __x);
float __exp2f(float __x);
float log2f(float __x);
float __log2f(float __x);
float powf(float __x, float __y);
float __powf(float __x, float __y);
float sqrtf(float __x);
float __sqrtf(float __x);
float hypotf(float __x, float __y);
float __hypotf(float __x, float __y);
float cbrtf(float __x);
float __cbrtf(float __x);
float compoundnf(float __x, long long int __y);
float __compoundnf(float __x, long long int __y);
float pownf(float __x, long long int __y);
float __pownf(float __x, long long int __y);
float powrf(float __x, float __y);
float __powrf(float __x, float __y);
float rootnf(float __x, long long int __y);
float __rootnf(float __x, long long int __y);
float rsqrtf(float __x);
float __rsqrtf(float __x);
float ceilf(float __x) __attribute__ ((__const__));
float fabsf(float __x) __attribute__ ((__const__));
float floorf(float __x) __attribute__ ((__const__));
float fmodf(float __x, float __y);
float __fmodf(float __x, float __y);
int isinff(float __value) __attribute__ ((__const__));
int finitef(float __value) __attribute__ ((__const__));
float dremf(float __x, float __y);
float __dremf(float __x, float __y);
float significandf(float __x);
float __significandf(float __x);
float copysignf(float __x, float __y) __attribute__ ((__const__));
float nanf(const char* __tagb);
float __nanf(const char* __tagb);
int isnanf(float __value) __attribute__ ((__const__));
float j0f(float );
float __j0f(float );
float j1f(float );
float __j1f(float );
float jnf(int , float );
float __jnf(int , float );
float y0f(float );
float __y0f(float );
float y1f(float );
float __y1f(float );
float ynf(int , float );
float __ynf(int , float );
float erff(float );
float __erff(float );
float erfcf(float );
float __erfcf(float );
float lgammaf(float );
float __lgammaf(float );
float tgammaf(float );
float __tgammaf(float );
float gammaf(float );
float __gammaf(float );
float lgammaf_r(float , int* __signgamp);
float __lgammaf_r(float , int* __signgamp);
float rintf(float __x);
float __rintf(float __x);
float nextafterf(float __x, float __y);
float __nextafterf(float __x, float __y);
float nexttowardf(float __x, long  double __y);
float __nexttowardf(float __x, long  double __y);
float nextdownf(float __x);
float __nextdownf(float __x);
float nextupf(float __x);
float __nextupf(float __x);
float remainderf(float __x, float __y);
float __remainderf(float __x, float __y);
float scalbnf(float __x, int __n);
float __scalbnf(float __x, int __n);
int ilogbf(float __x);
int __ilogbf(float __x);
long  int llogbf(float __x);
long  int __llogbf(float __x);
float scalblnf(float __x, long  int __n);
float __scalblnf(float __x, long  int __n);
float nearbyintf(float __x);
float __nearbyintf(float __x);
float roundf(float __x) __attribute__ ((__const__));
float truncf(float __x) __attribute__ ((__const__));
float remquof(float __x, float __y, int* __quo);
float __remquof(float __x, float __y, int* __quo);
long  int lrintf(float __x);
long  int __lrintf(float __x);
long long int llrintf(float __x);
long long int __llrintf(float __x);
long  int lroundf(float __x);
long  int __lroundf(float __x);
long long int llroundf(float __x);
long long int __llroundf(float __x);
float fdimf(float __x, float __y);
float __fdimf(float __x, float __y);
float fmaxf(float __x, float __y) __attribute__ ((__const__));
float fminf(float __x, float __y) __attribute__ ((__const__));
float fmaf(float __x, float __y, float __z);
float __fmaf(float __x, float __y, float __z);
float roundevenf(float __x) __attribute__ ((__const__));
long  int  fromfpf(float __x, int __round, unsigned int __width);
long  int  __fromfpf(float __x, int __round, unsigned int __width);
unsigned long  int  ufromfpf(float __x, int __round, unsigned int __width);
unsigned long  int  __ufromfpf(float __x, int __round, unsigned int __width);
long  int  fromfpxf(float __x, int __round, unsigned int __width);
long  int  __fromfpxf(float __x, int __round, unsigned int __width);
unsigned long  int  ufromfpxf(float __x, int __round, unsigned int __width);
unsigned long  int  __ufromfpxf(float __x, int __round, unsigned int __width);
int canonicalizef(float* __cx, const float* __x);
float fmaxmagf(float __x, float __y) __attribute__ ((__const__));
float fminmagf(float __x, float __y) __attribute__ ((__const__));
float fmaximumf(float __x, float __y) __attribute__ ((__const__));
float fminimumf(float __x, float __y) __attribute__ ((__const__));
float fmaximum_numf(float __x, float __y) __attribute__ ((__const__));
float fminimum_numf(float __x, float __y) __attribute__ ((__const__));
float fmaximum_magf(float __x, float __y) __attribute__ ((__const__));
float fminimum_magf(float __x, float __y) __attribute__ ((__const__));
float fmaximum_mag_numf(float __x, float __y) __attribute__ ((__const__));
float fminimum_mag_numf(float __x, float __y) __attribute__ ((__const__));
int totalorderf(const float* __x, const float* __y) __attribute__ ((__pure__));
int totalordermagf(const float* __x, const float* __y) __attribute__ ((__pure__));
float getpayloadf(const float* __x);
float __getpayloadf(const float* __x);
int setpayloadf(float* __x, float __payload);
int setpayloadsigf(float* __x, float __payload);
float scalbf(float __x, float __n);
float __scalbf(float __x, float __n);
int __fpclassifyl(long  double __value) __attribute__ ((__const__));
int __signbitl(long  double __value) __attribute__ ((__const__));
int __isinfl(long  double __value) __attribute__ ((__const__));
int __finitel(long  double __value) __attribute__ ((__const__));
int __isnanl(long  double __value) __attribute__ ((__const__));
int __iseqsigl(long  double __x, long  double __y);
int __issignalingl(long  double __value) __attribute__ ((__const__));
long  double acosl(long  double __x);
long  double __acosl(long  double __x);
long  double asinl(long  double __x);
long  double __asinl(long  double __x);
long  double atanl(long  double __x);
long  double __atanl(long  double __x);
long  double atan2l(long  double __y, long  double __x);
long  double __atan2l(long  double __y, long  double __x);
long  double cosl(long  double __x);
long  double __cosl(long  double __x);
long  double sinl(long  double __x);
long  double __sinl(long  double __x);
long  double tanl(long  double __x);
long  double __tanl(long  double __x);
long  double acospil(long  double __x);
long  double __acospil(long  double __x);
long  double asinpil(long  double __x);
long  double __asinpil(long  double __x);
long  double atanpil(long  double __x);
long  double __atanpil(long  double __x);
long  double atan2pil(long  double __y, long  double __x);
long  double __atan2pil(long  double __y, long  double __x);
long  double cospil(long  double __x);
long  double __cospil(long  double __x);
long  double sinpil(long  double __x);
long  double __sinpil(long  double __x);
long  double tanpil(long  double __x);
long  double __tanpil(long  double __x);
long  double coshl(long  double __x);
long  double __coshl(long  double __x);
long  double sinhl(long  double __x);
long  double __sinhl(long  double __x);
long  double tanhl(long  double __x);
long  double __tanhl(long  double __x);
void sincosl(long  double __x, long  double* __sinx, long  double* __cosx);
void __sincosl(long  double __x, long  double* __sinx, long  double* __cosx);
long  double acoshl(long  double __x);
long  double __acoshl(long  double __x);
long  double asinhl(long  double __x);
long  double __asinhl(long  double __x);
long  double atanhl(long  double __x);
long  double __atanhl(long  double __x);
long  double expl(long  double __x);
long  double __expl(long  double __x);
long  double frexpl(long  double __x, int* __exponent);
long  double __frexpl(long  double __x, int* __exponent);
long  double ldexpl(long  double __x, int __exponent);
long  double __ldexpl(long  double __x, int __exponent);
long  double logl(long  double __x);
long  double __logl(long  double __x);
long  double log10l(long  double __x);
long  double __log10l(long  double __x);
long  double modfl(long  double __x, long  double* __iptr);
long  double __modfl(long  double __x, long  double* __iptr);
long  double exp10l(long  double __x);
long  double __exp10l(long  double __x);
long  double exp2m1l(long  double __x);
long  double __exp2m1l(long  double __x);
long  double exp10m1l(long  double __x);
long  double __exp10m1l(long  double __x);
long  double log2p1l(long  double __x);
long  double __log2p1l(long  double __x);
long  double log10p1l(long  double __x);
long  double __log10p1l(long  double __x);
long  double logp1l(long  double __x);
long  double __logp1l(long  double __x);
long  double expm1l(long  double __x);
long  double __expm1l(long  double __x);
long  double log1pl(long  double __x);
long  double __log1pl(long  double __x);
long  double logbl(long  double __x);
long  double __logbl(long  double __x);
long  double exp2l(long  double __x);
long  double __exp2l(long  double __x);
long  double log2l(long  double __x);
long  double __log2l(long  double __x);
long  double powl(long  double __x, long  double __y);
long  double __powl(long  double __x, long  double __y);
long  double sqrtl(long  double __x);
long  double __sqrtl(long  double __x);
long  double hypotl(long  double __x, long  double __y);
long  double __hypotl(long  double __x, long  double __y);
long  double cbrtl(long  double __x);
long  double __cbrtl(long  double __x);
long  double compoundnl(long  double __x, long long int __y);
long  double __compoundnl(long  double __x, long long int __y);
long  double pownl(long  double __x, long long int __y);
long  double __pownl(long  double __x, long long int __y);
long  double powrl(long  double __x, long  double __y);
long  double __powrl(long  double __x, long  double __y);
long  double rootnl(long  double __x, long long int __y);
long  double __rootnl(long  double __x, long long int __y);
long  double rsqrtl(long  double __x);
long  double __rsqrtl(long  double __x);
long  double ceill(long  double __x) __attribute__ ((__const__));
long  double fabsl(long  double __x) __attribute__ ((__const__));
long  double floorl(long  double __x) __attribute__ ((__const__));
long  double fmodl(long  double __x, long  double __y);
long  double __fmodl(long  double __x, long  double __y);
int isinfl(long  double __value) __attribute__ ((__const__));
int finitel(long  double __value) __attribute__ ((__const__));
long  double dreml(long  double __x, long  double __y);
long  double __dreml(long  double __x, long  double __y);
long  double significandl(long  double __x);
long  double __significandl(long  double __x);
long  double copysignl(long  double __x, long  double __y) __attribute__ ((__const__));
long  double nanl(const char* __tagb);
long  double __nanl(const char* __tagb);
int isnanl(long  double __value) __attribute__ ((__const__));
long  double j0l(long  double );
long  double __j0l(long  double );
long  double j1l(long  double );
long  double __j1l(long  double );
long  double jnl(int , long  double );
long  double __jnl(int , long  double );
long  double y0l(long  double );
long  double __y0l(long  double );
long  double y1l(long  double );
long  double __y1l(long  double );
long  double ynl(int , long  double );
long  double __ynl(int , long  double );
long  double erfl(long  double );
long  double __erfl(long  double );
long  double erfcl(long  double );
long  double __erfcl(long  double );
long  double lgammal(long  double );
long  double __lgammal(long  double );
long  double tgammal(long  double );
long  double __tgammal(long  double );
long  double gammal(long  double );
long  double __gammal(long  double );
long  double lgammal_r(long  double , int* __signgamp);
long  double __lgammal_r(long  double , int* __signgamp);
long  double rintl(long  double __x);
long  double __rintl(long  double __x);
long  double nextafterl(long  double __x, long  double __y);
long  double __nextafterl(long  double __x, long  double __y);
long  double nexttowardl(long  double __x, long  double __y);
long  double __nexttowardl(long  double __x, long  double __y);
long  double nextdownl(long  double __x);
long  double __nextdownl(long  double __x);
long  double nextupl(long  double __x);
long  double __nextupl(long  double __x);
long  double remainderl(long  double __x, long  double __y);
long  double __remainderl(long  double __x, long  double __y);
long  double scalbnl(long  double __x, int __n);
long  double __scalbnl(long  double __x, int __n);
int ilogbl(long  double __x);
int __ilogbl(long  double __x);
long  int llogbl(long  double __x);
long  int __llogbl(long  double __x);
long  double scalblnl(long  double __x, long  int __n);
long  double __scalblnl(long  double __x, long  int __n);
long  double nearbyintl(long  double __x);
long  double __nearbyintl(long  double __x);
long  double roundl(long  double __x) __attribute__ ((__const__));
long  double truncl(long  double __x) __attribute__ ((__const__));
long  double remquol(long  double __x, long  double __y, int* __quo);
long  double __remquol(long  double __x, long  double __y, int* __quo);
long  int lrintl(long  double __x);
long  int __lrintl(long  double __x);
long long int llrintl(long  double __x);
long long int __llrintl(long  double __x);
long  int lroundl(long  double __x);
long  int __lroundl(long  double __x);
long long int llroundl(long  double __x);
long long int __llroundl(long  double __x);
long  double fdiml(long  double __x, long  double __y);
long  double __fdiml(long  double __x, long  double __y);
long  double fmaxl(long  double __x, long  double __y) __attribute__ ((__const__));
long  double fminl(long  double __x, long  double __y) __attribute__ ((__const__));
long  double fmal(long  double __x, long  double __y, long  double __z);
long  double __fmal(long  double __x, long  double __y, long  double __z);
long  double roundevenl(long  double __x) __attribute__ ((__const__));
long  int  fromfpl(long  double __x, int __round, unsigned int __width);
long  int  __fromfpl(long  double __x, int __round, unsigned int __width);
unsigned long  int  ufromfpl(long  double __x, int __round, unsigned int __width);
unsigned long  int  __ufromfpl(long  double __x, int __round, unsigned int __width);
long  int  fromfpxl(long  double __x, int __round, unsigned int __width);
long  int  __fromfpxl(long  double __x, int __round, unsigned int __width);
unsigned long  int  ufromfpxl(long  double __x, int __round, unsigned int __width);
unsigned long  int  __ufromfpxl(long  double __x, int __round, unsigned int __width);
int canonicalizel(long  double* __cx, const long  double* __x);
long  double fmaxmagl(long  double __x, long  double __y) __attribute__ ((__const__));
long  double fminmagl(long  double __x, long  double __y) __attribute__ ((__const__));
long  double fmaximuml(long  double __x, long  double __y) __attribute__ ((__const__));
long  double fminimuml(long  double __x, long  double __y) __attribute__ ((__const__));
long  double fmaximum_numl(long  double __x, long  double __y) __attribute__ ((__const__));
long  double fminimum_numl(long  double __x, long  double __y) __attribute__ ((__const__));
long  double fmaximum_magl(long  double __x, long  double __y) __attribute__ ((__const__));
long  double fminimum_magl(long  double __x, long  double __y) __attribute__ ((__const__));
long  double fmaximum_mag_numl(long  double __x, long  double __y) __attribute__ ((__const__));
long  double fminimum_mag_numl(long  double __x, long  double __y) __attribute__ ((__const__));
int totalorderl(const long  double* __x, const long  double* __y) __attribute__ ((__pure__));
int totalordermagl(const long  double* __x, const long  double* __y) __attribute__ ((__pure__));
long  double getpayloadl(const long  double* __x);
long  double __getpayloadl(const long  double* __x);
int setpayloadl(long  double* __x, long  double __payload);
int setpayloadsigl(long  double* __x, long  double __payload);
long  double scalbl(long  double __x, long  double __n);
long  double __scalbl(long  double __x, long  double __n);
float  acosf32(float  __x  );
float  __acosf32(float  __x  );
float  asinf32(float  __x  );
float  __asinf32(float  __x  );
float  atanf32(float  __x  );
float  __atanf32(float  __x  );
float  atan2f32(float  __y  , float  __x  );
float  __atan2f32(float  __y  , float  __x  );
float  cosf32(float  __x  );
float  __cosf32(float  __x  );
float  sinf32(float  __x  );
float  __sinf32(float  __x  );
float  tanf32(float  __x  );
float  __tanf32(float  __x  );
float  acospif32(float  __x  );
float  __acospif32(float  __x  );
float  asinpif32(float  __x  );
float  __asinpif32(float  __x  );
float  atanpif32(float  __x  );
float  __atanpif32(float  __x  );
float  atan2pif32(float  __y  , float  __x  );
float  __atan2pif32(float  __y  , float  __x  );
float  cospif32(float  __x  );
float  __cospif32(float  __x  );
float  sinpif32(float  __x  );
float  __sinpif32(float  __x  );
float  tanpif32(float  __x  );
float  __tanpif32(float  __x  );
float  coshf32(float  __x  );
float  __coshf32(float  __x  );
float  sinhf32(float  __x  );
float  __sinhf32(float  __x  );
float  tanhf32(float  __x  );
float  __tanhf32(float  __x  );
void sincosf32(float  __x  , float*  __sinx  , float*  __cosx  );
void __sincosf32(float  __x  , float*  __sinx  , float*  __cosx  );
float  acoshf32(float  __x  );
float  __acoshf32(float  __x  );
float  asinhf32(float  __x  );
float  __asinhf32(float  __x  );
float  atanhf32(float  __x  );
float  __atanhf32(float  __x  );
float  expf32(float  __x  );
float  __expf32(float  __x  );
float  frexpf32(float  __x  , int* __exponent);
float  __frexpf32(float  __x  , int* __exponent);
float  ldexpf32(float  __x  , int __exponent);
float  __ldexpf32(float  __x  , int __exponent);
float  logf32(float  __x  );
float  __logf32(float  __x  );
float  log10f32(float  __x  );
float  __log10f32(float  __x  );
float  modff32(float  __x  , float*  __iptr  );
float  __modff32(float  __x  , float*  __iptr  );
float  exp10f32(float  __x  );
float  __exp10f32(float  __x  );
float  exp2m1f32(float  __x  );
float  __exp2m1f32(float  __x  );
float  exp10m1f32(float  __x  );
float  __exp10m1f32(float  __x  );
float  log2p1f32(float  __x  );
float  __log2p1f32(float  __x  );
float  log10p1f32(float  __x  );
float  __log10p1f32(float  __x  );
float  logp1f32(float  __x  );
float  __logp1f32(float  __x  );
float  expm1f32(float  __x  );
float  __expm1f32(float  __x  );
float  log1pf32(float  __x  );
float  __log1pf32(float  __x  );
float  logbf32(float  __x  );
float  __logbf32(float  __x  );
float  exp2f32(float  __x  );
float  __exp2f32(float  __x  );
float  log2f32(float  __x  );
float  __log2f32(float  __x  );
float  powf32(float  __x  , float  __y  );
float  __powf32(float  __x  , float  __y  );
float  sqrtf32(float  __x  );
float  __sqrtf32(float  __x  );
float  hypotf32(float  __x  , float  __y  );
float  __hypotf32(float  __x  , float  __y  );
float  cbrtf32(float  __x  );
float  __cbrtf32(float  __x  );
float  compoundnf32(float  __x  , long long int __y);
float  __compoundnf32(float  __x  , long long int __y);
float  pownf32(float  __x  , long long int __y);
float  __pownf32(float  __x  , long long int __y);
float  powrf32(float  __x  , float  __y  );
float  __powrf32(float  __x  , float  __y  );
float  rootnf32(float  __x  , long long int __y);
float  __rootnf32(float  __x  , long long int __y);
float  rsqrtf32(float  __x  );
float  __rsqrtf32(float  __x  );
float  ceilf32(float  __x  ) __attribute__ ((__const__));
float  fabsf32(float  __x  ) __attribute__ ((__const__));
float  floorf32(float  __x  ) __attribute__ ((__const__));
float  fmodf32(float  __x  , float  __y  );
float  __fmodf32(float  __x  , float  __y  );
float  copysignf32(float  __x  , float  __y  ) __attribute__ ((__const__));
float  nanf32(const char* __tagb);
float  __nanf32(const char* __tagb);
float  j0f32(float    );
float  __j0f32(float    );
float  j1f32(float    );
float  __j1f32(float    );
float  jnf32(int , float    );
float  __jnf32(int , float    );
float  y0f32(float    );
float  __y0f32(float    );
float  y1f32(float    );
float  __y1f32(float    );
float  ynf32(int , float    );
float  __ynf32(int , float    );
float  erff32(float    );
float  __erff32(float    );
float  erfcf32(float    );
float  __erfcf32(float    );
float  lgammaf32(float    );
float  __lgammaf32(float    );
float  tgammaf32(float    );
float  __tgammaf32(float    );
float  lgammaf32_r(float    , int* __signgamp);
float  __lgammaf32_r(float    , int* __signgamp);
float  rintf32(float  __x  );
float  __rintf32(float  __x  );
float  nextafterf32(float  __x  , float  __y  );
float  __nextafterf32(float  __x  , float  __y  );
float  nextdownf32(float  __x  );
float  __nextdownf32(float  __x  );
float  nextupf32(float  __x  );
float  __nextupf32(float  __x  );
float  remainderf32(float  __x  , float  __y  );
float  __remainderf32(float  __x  , float  __y  );
float  scalbnf32(float  __x  , int __n);
float  __scalbnf32(float  __x  , int __n);
int ilogbf32(float  __x  );
int __ilogbf32(float  __x  );
long  int llogbf32(float  __x  );
long  int __llogbf32(float  __x  );
float  scalblnf32(float  __x  , long  int __n);
float  __scalblnf32(float  __x  , long  int __n);
float  nearbyintf32(float  __x  );
float  __nearbyintf32(float  __x  );
float  roundf32(float  __x  ) __attribute__ ((__const__));
float  truncf32(float  __x  ) __attribute__ ((__const__));
float  remquof32(float  __x  , float  __y  , int* __quo);
float  __remquof32(float  __x  , float  __y  , int* __quo);
long  int lrintf32(float  __x  );
long  int __lrintf32(float  __x  );
long long int llrintf32(float  __x  );
long long int __llrintf32(float  __x  );
long  int lroundf32(float  __x  );
long  int __lroundf32(float  __x  );
long long int llroundf32(float  __x  );
long long int __llroundf32(float  __x  );
float  fdimf32(float  __x  , float  __y  );
float  __fdimf32(float  __x  , float  __y  );
float  fmaxf32(float  __x  , float  __y  ) __attribute__ ((__const__));
float  fminf32(float  __x  , float  __y  ) __attribute__ ((__const__));
float  fmaf32(float  __x  , float  __y  , float  __z  );
float  __fmaf32(float  __x  , float  __y  , float  __z  );
float  roundevenf32(float  __x  ) __attribute__ ((__const__));
long  int  fromfpf32(float  __x  , int __round, unsigned int __width);
long  int  __fromfpf32(float  __x  , int __round, unsigned int __width);
unsigned long  int  ufromfpf32(float  __x  , int __round, unsigned int __width);
unsigned long  int  __ufromfpf32(float  __x  , int __round, unsigned int __width);
long  int  fromfpxf32(float  __x  , int __round, unsigned int __width);
long  int  __fromfpxf32(float  __x  , int __round, unsigned int __width);
unsigned long  int  ufromfpxf32(float  __x  , int __round, unsigned int __width);
unsigned long  int  __ufromfpxf32(float  __x  , int __round, unsigned int __width);
int canonicalizef32(float*  __cx  , const float*  __x  );
float  fmaxmagf32(float  __x  , float  __y  ) __attribute__ ((__const__));
float  fminmagf32(float  __x  , float  __y  ) __attribute__ ((__const__));
float  fmaximumf32(float  __x  , float  __y  ) __attribute__ ((__const__));
float  fminimumf32(float  __x  , float  __y  ) __attribute__ ((__const__));
float  fmaximum_numf32(float  __x  , float  __y  ) __attribute__ ((__const__));
float  fminimum_numf32(float  __x  , float  __y  ) __attribute__ ((__const__));
float  fmaximum_magf32(float  __x  , float  __y  ) __attribute__ ((__const__));
float  fminimum_magf32(float  __x  , float  __y  ) __attribute__ ((__const__));
float  fmaximum_mag_numf32(float  __x  , float  __y  ) __attribute__ ((__const__));
float  fminimum_mag_numf32(float  __x  , float  __y  ) __attribute__ ((__const__));
int totalorderf32(const float*  __x  , const float*  __y  ) __attribute__ ((__pure__));
int totalordermagf32(const float*  __x  , const float*  __y  ) __attribute__ ((__pure__));
float  getpayloadf32(const float*  __x  );
float  __getpayloadf32(const float*  __x  );
int setpayloadf32(float*  __x  , float  __payload  );
int setpayloadsigf32(float*  __x  , float  __payload  );
double  acosf64(double  __x  );
double  __acosf64(double  __x  );
double  asinf64(double  __x  );
double  __asinf64(double  __x  );
double  atanf64(double  __x  );
double  __atanf64(double  __x  );
double  atan2f64(double  __y  , double  __x  );
double  __atan2f64(double  __y  , double  __x  );
double  cosf64(double  __x  );
double  __cosf64(double  __x  );
double  sinf64(double  __x  );
double  __sinf64(double  __x  );
double  tanf64(double  __x  );
double  __tanf64(double  __x  );
double  acospif64(double  __x  );
double  __acospif64(double  __x  );
double  asinpif64(double  __x  );
double  __asinpif64(double  __x  );
double  atanpif64(double  __x  );
double  __atanpif64(double  __x  );
double  atan2pif64(double  __y  , double  __x  );
double  __atan2pif64(double  __y  , double  __x  );
double  cospif64(double  __x  );
double  __cospif64(double  __x  );
double  sinpif64(double  __x  );
double  __sinpif64(double  __x  );
double  tanpif64(double  __x  );
double  __tanpif64(double  __x  );
double  coshf64(double  __x  );
double  __coshf64(double  __x  );
double  sinhf64(double  __x  );
double  __sinhf64(double  __x  );
double  tanhf64(double  __x  );
double  __tanhf64(double  __x  );
void sincosf64(double  __x  , double*  __sinx  , double*  __cosx  );
void __sincosf64(double  __x  , double*  __sinx  , double*  __cosx  );
double  acoshf64(double  __x  );
double  __acoshf64(double  __x  );
double  asinhf64(double  __x  );
double  __asinhf64(double  __x  );
double  atanhf64(double  __x  );
double  __atanhf64(double  __x  );
double  expf64(double  __x  );
double  __expf64(double  __x  );
double  frexpf64(double  __x  , int* __exponent);
double  __frexpf64(double  __x  , int* __exponent);
double  ldexpf64(double  __x  , int __exponent);
double  __ldexpf64(double  __x  , int __exponent);
double  logf64(double  __x  );
double  __logf64(double  __x  );
double  log10f64(double  __x  );
double  __log10f64(double  __x  );
double  modff64(double  __x  , double*  __iptr  );
double  __modff64(double  __x  , double*  __iptr  );
double  exp10f64(double  __x  );
double  __exp10f64(double  __x  );
double  exp2m1f64(double  __x  );
double  __exp2m1f64(double  __x  );
double  exp10m1f64(double  __x  );
double  __exp10m1f64(double  __x  );
double  log2p1f64(double  __x  );
double  __log2p1f64(double  __x  );
double  log10p1f64(double  __x  );
double  __log10p1f64(double  __x  );
double  logp1f64(double  __x  );
double  __logp1f64(double  __x  );
double  expm1f64(double  __x  );
double  __expm1f64(double  __x  );
double  log1pf64(double  __x  );
double  __log1pf64(double  __x  );
double  logbf64(double  __x  );
double  __logbf64(double  __x  );
double  exp2f64(double  __x  );
double  __exp2f64(double  __x  );
double  log2f64(double  __x  );
double  __log2f64(double  __x  );
double  powf64(double  __x  , double  __y  );
double  __powf64(double  __x  , double  __y  );
double  sqrtf64(double  __x  );
double  __sqrtf64(double  __x  );
double  hypotf64(double  __x  , double  __y  );
double  __hypotf64(double  __x  , double  __y  );
double  cbrtf64(double  __x  );
double  __cbrtf64(double  __x  );
double  compoundnf64(double  __x  , long long int __y);
double  __compoundnf64(double  __x  , long long int __y);
double  pownf64(double  __x  , long long int __y);
double  __pownf64(double  __x  , long long int __y);
double  powrf64(double  __x  , double  __y  );
double  __powrf64(double  __x  , double  __y  );
double  rootnf64(double  __x  , long long int __y);
double  __rootnf64(double  __x  , long long int __y);
double  rsqrtf64(double  __x  );
double  __rsqrtf64(double  __x  );
double  ceilf64(double  __x  ) __attribute__ ((__const__));
double  fabsf64(double  __x  ) __attribute__ ((__const__));
double  floorf64(double  __x  ) __attribute__ ((__const__));
double  fmodf64(double  __x  , double  __y  );
double  __fmodf64(double  __x  , double  __y  );
double  copysignf64(double  __x  , double  __y  ) __attribute__ ((__const__));
double  nanf64(const char* __tagb);
double  __nanf64(const char* __tagb);
double  j0f64(double    );
double  __j0f64(double    );
double  j1f64(double    );
double  __j1f64(double    );
double  jnf64(int , double    );
double  __jnf64(int , double    );
double  y0f64(double    );
double  __y0f64(double    );
double  y1f64(double    );
double  __y1f64(double    );
double  ynf64(int , double    );
double  __ynf64(int , double    );
double  erff64(double    );
double  __erff64(double    );
double  erfcf64(double    );
double  __erfcf64(double    );
double  lgammaf64(double    );
double  __lgammaf64(double    );
double  tgammaf64(double    );
double  __tgammaf64(double    );
double  lgammaf64_r(double    , int* __signgamp);
double  __lgammaf64_r(double    , int* __signgamp);
double  rintf64(double  __x  );
double  __rintf64(double  __x  );
double  nextafterf64(double  __x  , double  __y  );
double  __nextafterf64(double  __x  , double  __y  );
double  nextdownf64(double  __x  );
double  __nextdownf64(double  __x  );
double  nextupf64(double  __x  );
double  __nextupf64(double  __x  );
double  remainderf64(double  __x  , double  __y  );
double  __remainderf64(double  __x  , double  __y  );
double  scalbnf64(double  __x  , int __n);
double  __scalbnf64(double  __x  , int __n);
int ilogbf64(double  __x  );
int __ilogbf64(double  __x  );
long  int llogbf64(double  __x  );
long  int __llogbf64(double  __x  );
double  scalblnf64(double  __x  , long  int __n);
double  __scalblnf64(double  __x  , long  int __n);
double  nearbyintf64(double  __x  );
double  __nearbyintf64(double  __x  );
double  roundf64(double  __x  ) __attribute__ ((__const__));
double  truncf64(double  __x  ) __attribute__ ((__const__));
double  remquof64(double  __x  , double  __y  , int* __quo);
double  __remquof64(double  __x  , double  __y  , int* __quo);
long  int lrintf64(double  __x  );
long  int __lrintf64(double  __x  );
long long int llrintf64(double  __x  );
long long int __llrintf64(double  __x  );
long  int lroundf64(double  __x  );
long  int __lroundf64(double  __x  );
long long int llroundf64(double  __x  );
long long int __llroundf64(double  __x  );
double  fdimf64(double  __x  , double  __y  );
double  __fdimf64(double  __x  , double  __y  );
double  fmaxf64(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fminf64(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fmaf64(double  __x  , double  __y  , double  __z  );
double  __fmaf64(double  __x  , double  __y  , double  __z  );
double  roundevenf64(double  __x  ) __attribute__ ((__const__));
long  int  fromfpf64(double  __x  , int __round, unsigned int __width);
long  int  __fromfpf64(double  __x  , int __round, unsigned int __width);
unsigned long  int  ufromfpf64(double  __x  , int __round, unsigned int __width);
unsigned long  int  __ufromfpf64(double  __x  , int __round, unsigned int __width);
long  int  fromfpxf64(double  __x  , int __round, unsigned int __width);
long  int  __fromfpxf64(double  __x  , int __round, unsigned int __width);
unsigned long  int  ufromfpxf64(double  __x  , int __round, unsigned int __width);
unsigned long  int  __ufromfpxf64(double  __x  , int __round, unsigned int __width);
int canonicalizef64(double*  __cx  , const double*  __x  );
double  fmaxmagf64(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fminmagf64(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fmaximumf64(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fminimumf64(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fmaximum_numf64(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fminimum_numf64(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fmaximum_magf64(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fminimum_magf64(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fmaximum_mag_numf64(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fminimum_mag_numf64(double  __x  , double  __y  ) __attribute__ ((__const__));
int totalorderf64(const double*  __x  , const double*  __y  ) __attribute__ ((__pure__));
int totalordermagf64(const double*  __x  , const double*  __y  ) __attribute__ ((__pure__));
double  getpayloadf64(const double*  __x  );
double  __getpayloadf64(const double*  __x  );
int setpayloadf64(double*  __x  , double  __payload  );
int setpayloadsigf64(double*  __x  , double  __payload  );
double  acosf32x(double  __x  );
double  __acosf32x(double  __x  );
double  asinf32x(double  __x  );
double  __asinf32x(double  __x  );
double  atanf32x(double  __x  );
double  __atanf32x(double  __x  );
double  atan2f32x(double  __y  , double  __x  );
double  __atan2f32x(double  __y  , double  __x  );
double  cosf32x(double  __x  );
double  __cosf32x(double  __x  );
double  sinf32x(double  __x  );
double  __sinf32x(double  __x  );
double  tanf32x(double  __x  );
double  __tanf32x(double  __x  );
double  acospif32x(double  __x  );
double  __acospif32x(double  __x  );
double  asinpif32x(double  __x  );
double  __asinpif32x(double  __x  );
double  atanpif32x(double  __x  );
double  __atanpif32x(double  __x  );
double  atan2pif32x(double  __y  , double  __x  );
double  __atan2pif32x(double  __y  , double  __x  );
double  cospif32x(double  __x  );
double  __cospif32x(double  __x  );
double  sinpif32x(double  __x  );
double  __sinpif32x(double  __x  );
double  tanpif32x(double  __x  );
double  __tanpif32x(double  __x  );
double  coshf32x(double  __x  );
double  __coshf32x(double  __x  );
double  sinhf32x(double  __x  );
double  __sinhf32x(double  __x  );
double  tanhf32x(double  __x  );
double  __tanhf32x(double  __x  );
void sincosf32x(double  __x  , double*  __sinx  , double*  __cosx  );
void __sincosf32x(double  __x  , double*  __sinx  , double*  __cosx  );
double  acoshf32x(double  __x  );
double  __acoshf32x(double  __x  );
double  asinhf32x(double  __x  );
double  __asinhf32x(double  __x  );
double  atanhf32x(double  __x  );
double  __atanhf32x(double  __x  );
double  expf32x(double  __x  );
double  __expf32x(double  __x  );
double  frexpf32x(double  __x  , int* __exponent);
double  __frexpf32x(double  __x  , int* __exponent);
double  ldexpf32x(double  __x  , int __exponent);
double  __ldexpf32x(double  __x  , int __exponent);
double  logf32x(double  __x  );
double  __logf32x(double  __x  );
double  log10f32x(double  __x  );
double  __log10f32x(double  __x  );
double  modff32x(double  __x  , double*  __iptr  );
double  __modff32x(double  __x  , double*  __iptr  );
double  exp10f32x(double  __x  );
double  __exp10f32x(double  __x  );
double  exp2m1f32x(double  __x  );
double  __exp2m1f32x(double  __x  );
double  exp10m1f32x(double  __x  );
double  __exp10m1f32x(double  __x  );
double  log2p1f32x(double  __x  );
double  __log2p1f32x(double  __x  );
double  log10p1f32x(double  __x  );
double  __log10p1f32x(double  __x  );
double  logp1f32x(double  __x  );
double  __logp1f32x(double  __x  );
double  expm1f32x(double  __x  );
double  __expm1f32x(double  __x  );
double  log1pf32x(double  __x  );
double  __log1pf32x(double  __x  );
double  logbf32x(double  __x  );
double  __logbf32x(double  __x  );
double  exp2f32x(double  __x  );
double  __exp2f32x(double  __x  );
double  log2f32x(double  __x  );
double  __log2f32x(double  __x  );
double  powf32x(double  __x  , double  __y  );
double  __powf32x(double  __x  , double  __y  );
double  sqrtf32x(double  __x  );
double  __sqrtf32x(double  __x  );
double  hypotf32x(double  __x  , double  __y  );
double  __hypotf32x(double  __x  , double  __y  );
double  cbrtf32x(double  __x  );
double  __cbrtf32x(double  __x  );
double  compoundnf32x(double  __x  , long long int __y);
double  __compoundnf32x(double  __x  , long long int __y);
double  pownf32x(double  __x  , long long int __y);
double  __pownf32x(double  __x  , long long int __y);
double  powrf32x(double  __x  , double  __y  );
double  __powrf32x(double  __x  , double  __y  );
double  rootnf32x(double  __x  , long long int __y);
double  __rootnf32x(double  __x  , long long int __y);
double  rsqrtf32x(double  __x  );
double  __rsqrtf32x(double  __x  );
double  ceilf32x(double  __x  ) __attribute__ ((__const__));
double  fabsf32x(double  __x  ) __attribute__ ((__const__));
double  floorf32x(double  __x  ) __attribute__ ((__const__));
double  fmodf32x(double  __x  , double  __y  );
double  __fmodf32x(double  __x  , double  __y  );
double  copysignf32x(double  __x  , double  __y  ) __attribute__ ((__const__));
double  nanf32x(const char* __tagb);
double  __nanf32x(const char* __tagb);
double  j0f32x(double    );
double  __j0f32x(double    );
double  j1f32x(double    );
double  __j1f32x(double    );
double  jnf32x(int , double    );
double  __jnf32x(int , double    );
double  y0f32x(double    );
double  __y0f32x(double    );
double  y1f32x(double    );
double  __y1f32x(double    );
double  ynf32x(int , double    );
double  __ynf32x(int , double    );
double  erff32x(double    );
double  __erff32x(double    );
double  erfcf32x(double    );
double  __erfcf32x(double    );
double  lgammaf32x(double    );
double  __lgammaf32x(double    );
double  tgammaf32x(double    );
double  __tgammaf32x(double    );
double  lgammaf32x_r(double    , int* __signgamp);
double  __lgammaf32x_r(double    , int* __signgamp);
double  rintf32x(double  __x  );
double  __rintf32x(double  __x  );
double  nextafterf32x(double  __x  , double  __y  );
double  __nextafterf32x(double  __x  , double  __y  );
double  nextdownf32x(double  __x  );
double  __nextdownf32x(double  __x  );
double  nextupf32x(double  __x  );
double  __nextupf32x(double  __x  );
double  remainderf32x(double  __x  , double  __y  );
double  __remainderf32x(double  __x  , double  __y  );
double  scalbnf32x(double  __x  , int __n);
double  __scalbnf32x(double  __x  , int __n);
int ilogbf32x(double  __x  );
int __ilogbf32x(double  __x  );
long  int llogbf32x(double  __x  );
long  int __llogbf32x(double  __x  );
double  scalblnf32x(double  __x  , long  int __n);
double  __scalblnf32x(double  __x  , long  int __n);
double  nearbyintf32x(double  __x  );
double  __nearbyintf32x(double  __x  );
double  roundf32x(double  __x  ) __attribute__ ((__const__));
double  truncf32x(double  __x  ) __attribute__ ((__const__));
double  remquof32x(double  __x  , double  __y  , int* __quo);
double  __remquof32x(double  __x  , double  __y  , int* __quo);
long  int lrintf32x(double  __x  );
long  int __lrintf32x(double  __x  );
long long int llrintf32x(double  __x  );
long long int __llrintf32x(double  __x  );
long  int lroundf32x(double  __x  );
long  int __lroundf32x(double  __x  );
long long int llroundf32x(double  __x  );
long long int __llroundf32x(double  __x  );
double  fdimf32x(double  __x  , double  __y  );
double  __fdimf32x(double  __x  , double  __y  );
double  fmaxf32x(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fminf32x(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fmaf32x(double  __x  , double  __y  , double  __z  );
double  __fmaf32x(double  __x  , double  __y  , double  __z  );
double  roundevenf32x(double  __x  ) __attribute__ ((__const__));
long  int  fromfpf32x(double  __x  , int __round, unsigned int __width);
long  int  __fromfpf32x(double  __x  , int __round, unsigned int __width);
unsigned long  int  ufromfpf32x(double  __x  , int __round, unsigned int __width);
unsigned long  int  __ufromfpf32x(double  __x  , int __round, unsigned int __width);
long  int  fromfpxf32x(double  __x  , int __round, unsigned int __width);
long  int  __fromfpxf32x(double  __x  , int __round, unsigned int __width);
unsigned long  int  ufromfpxf32x(double  __x  , int __round, unsigned int __width);
unsigned long  int  __ufromfpxf32x(double  __x  , int __round, unsigned int __width);
int canonicalizef32x(double*  __cx  , const double*  __x  );
double  fmaxmagf32x(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fminmagf32x(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fmaximumf32x(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fminimumf32x(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fmaximum_numf32x(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fminimum_numf32x(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fmaximum_magf32x(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fminimum_magf32x(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fmaximum_mag_numf32x(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fminimum_mag_numf32x(double  __x  , double  __y  ) __attribute__ ((__const__));
int totalorderf32x(const double*  __x  , const double*  __y  ) __attribute__ ((__pure__));
int totalordermagf32x(const double*  __x  , const double*  __y  ) __attribute__ ((__pure__));
double  getpayloadf32x(const double*  __x  );
double  __getpayloadf32x(const double*  __x  );
int setpayloadf32x(double*  __x  , double  __payload  );
int setpayloadsigf32x(double*  __x  , double  __payload  );
long  double  acosf64x(long  double  __x  );
long  double  __acosf64x(long  double  __x  );
long  double  asinf64x(long  double  __x  );
long  double  __asinf64x(long  double  __x  );
long  double  atanf64x(long  double  __x  );
long  double  __atanf64x(long  double  __x  );
long  double  atan2f64x(long  double  __y  , long  double  __x  );
long  double  __atan2f64x(long  double  __y  , long  double  __x  );
long  double  cosf64x(long  double  __x  );
long  double  __cosf64x(long  double  __x  );
long  double  sinf64x(long  double  __x  );
long  double  __sinf64x(long  double  __x  );
long  double  tanf64x(long  double  __x  );
long  double  __tanf64x(long  double  __x  );
long  double  acospif64x(long  double  __x  );
long  double  __acospif64x(long  double  __x  );
long  double  asinpif64x(long  double  __x  );
long  double  __asinpif64x(long  double  __x  );
long  double  atanpif64x(long  double  __x  );
long  double  __atanpif64x(long  double  __x  );
long  double  atan2pif64x(long  double  __y  , long  double  __x  );
long  double  __atan2pif64x(long  double  __y  , long  double  __x  );
long  double  cospif64x(long  double  __x  );
long  double  __cospif64x(long  double  __x  );
long  double  sinpif64x(long  double  __x  );
long  double  __sinpif64x(long  double  __x  );
long  double  tanpif64x(long  double  __x  );
long  double  __tanpif64x(long  double  __x  );
long  double  coshf64x(long  double  __x  );
long  double  __coshf64x(long  double  __x  );
long  double  sinhf64x(long  double  __x  );
long  double  __sinhf64x(long  double  __x  );
long  double  tanhf64x(long  double  __x  );
long  double  __tanhf64x(long  double  __x  );
void sincosf64x(long  double  __x  , long  double*  __sinx  , long  double*  __cosx  );
void __sincosf64x(long  double  __x  , long  double*  __sinx  , long  double*  __cosx  );
long  double  acoshf64x(long  double  __x  );
long  double  __acoshf64x(long  double  __x  );
long  double  asinhf64x(long  double  __x  );
long  double  __asinhf64x(long  double  __x  );
long  double  atanhf64x(long  double  __x  );
long  double  __atanhf64x(long  double  __x  );
long  double  expf64x(long  double  __x  );
long  double  __expf64x(long  double  __x  );
long  double  frexpf64x(long  double  __x  , int* __exponent);
long  double  __frexpf64x(long  double  __x  , int* __exponent);
long  double  ldexpf64x(long  double  __x  , int __exponent);
long  double  __ldexpf64x(long  double  __x  , int __exponent);
long  double  logf64x(long  double  __x  );
long  double  __logf64x(long  double  __x  );
long  double  log10f64x(long  double  __x  );
long  double  __log10f64x(long  double  __x  );
long  double  modff64x(long  double  __x  , long  double*  __iptr  );
long  double  __modff64x(long  double  __x  , long  double*  __iptr  );
long  double  exp10f64x(long  double  __x  );
long  double  __exp10f64x(long  double  __x  );
long  double  exp2m1f64x(long  double  __x  );
long  double  __exp2m1f64x(long  double  __x  );
long  double  exp10m1f64x(long  double  __x  );
long  double  __exp10m1f64x(long  double  __x  );
long  double  log2p1f64x(long  double  __x  );
long  double  __log2p1f64x(long  double  __x  );
long  double  log10p1f64x(long  double  __x  );
long  double  __log10p1f64x(long  double  __x  );
long  double  logp1f64x(long  double  __x  );
long  double  __logp1f64x(long  double  __x  );
long  double  expm1f64x(long  double  __x  );
long  double  __expm1f64x(long  double  __x  );
long  double  log1pf64x(long  double  __x  );
long  double  __log1pf64x(long  double  __x  );
long  double  logbf64x(long  double  __x  );
long  double  __logbf64x(long  double  __x  );
long  double  exp2f64x(long  double  __x  );
long  double  __exp2f64x(long  double  __x  );
long  double  log2f64x(long  double  __x  );
long  double  __log2f64x(long  double  __x  );
long  double  powf64x(long  double  __x  , long  double  __y  );
long  double  __powf64x(long  double  __x  , long  double  __y  );
long  double  sqrtf64x(long  double  __x  );
long  double  __sqrtf64x(long  double  __x  );
long  double  hypotf64x(long  double  __x  , long  double  __y  );
long  double  __hypotf64x(long  double  __x  , long  double  __y  );
long  double  cbrtf64x(long  double  __x  );
long  double  __cbrtf64x(long  double  __x  );
long  double  compoundnf64x(long  double  __x  , long long int __y);
long  double  __compoundnf64x(long  double  __x  , long long int __y);
long  double  pownf64x(long  double  __x  , long long int __y);
long  double  __pownf64x(long  double  __x  , long long int __y);
long  double  powrf64x(long  double  __x  , long  double  __y  );
long  double  __powrf64x(long  double  __x  , long  double  __y  );
long  double  rootnf64x(long  double  __x  , long long int __y);
long  double  __rootnf64x(long  double  __x  , long long int __y);
long  double  rsqrtf64x(long  double  __x  );
long  double  __rsqrtf64x(long  double  __x  );
long  double  ceilf64x(long  double  __x  ) __attribute__ ((__const__));
long  double  fabsf64x(long  double  __x  ) __attribute__ ((__const__));
long  double  floorf64x(long  double  __x  ) __attribute__ ((__const__));
long  double  fmodf64x(long  double  __x  , long  double  __y  );
long  double  __fmodf64x(long  double  __x  , long  double  __y  );
long  double  copysignf64x(long  double  __x  , long  double  __y  ) __attribute__ ((__const__));
long  double  nanf64x(const char* __tagb);
long  double  __nanf64x(const char* __tagb);
long  double  j0f64x(long  double    );
long  double  __j0f64x(long  double    );
long  double  j1f64x(long  double    );
long  double  __j1f64x(long  double    );
long  double  jnf64x(int , long  double    );
long  double  __jnf64x(int , long  double    );
long  double  y0f64x(long  double    );
long  double  __y0f64x(long  double    );
long  double  y1f64x(long  double    );
long  double  __y1f64x(long  double    );
long  double  ynf64x(int , long  double    );
long  double  __ynf64x(int , long  double    );
long  double  erff64x(long  double    );
long  double  __erff64x(long  double    );
long  double  erfcf64x(long  double    );
long  double  __erfcf64x(long  double    );
long  double  lgammaf64x(long  double    );
long  double  __lgammaf64x(long  double    );
long  double  tgammaf64x(long  double    );
long  double  __tgammaf64x(long  double    );
long  double  lgammaf64x_r(long  double    , int* __signgamp);
long  double  __lgammaf64x_r(long  double    , int* __signgamp);
long  double  rintf64x(long  double  __x  );
long  double  __rintf64x(long  double  __x  );
long  double  nextafterf64x(long  double  __x  , long  double  __y  );
long  double  __nextafterf64x(long  double  __x  , long  double  __y  );
long  double  nextdownf64x(long  double  __x  );
long  double  __nextdownf64x(long  double  __x  );
long  double  nextupf64x(long  double  __x  );
long  double  __nextupf64x(long  double  __x  );
long  double  remainderf64x(long  double  __x  , long  double  __y  );
long  double  __remainderf64x(long  double  __x  , long  double  __y  );
long  double  scalbnf64x(long  double  __x  , int __n);
long  double  __scalbnf64x(long  double  __x  , int __n);
int ilogbf64x(long  double  __x  );
int __ilogbf64x(long  double  __x  );
long  int llogbf64x(long  double  __x  );
long  int __llogbf64x(long  double  __x  );
long  double  scalblnf64x(long  double  __x  , long  int __n);
long  double  __scalblnf64x(long  double  __x  , long  int __n);
long  double  nearbyintf64x(long  double  __x  );
long  double  __nearbyintf64x(long  double  __x  );
long  double  roundf64x(long  double  __x  ) __attribute__ ((__const__));
long  double  truncf64x(long  double  __x  ) __attribute__ ((__const__));
long  double  remquof64x(long  double  __x  , long  double  __y  , int* __quo);
long  double  __remquof64x(long  double  __x  , long  double  __y  , int* __quo);
long  int lrintf64x(long  double  __x  );
long  int __lrintf64x(long  double  __x  );
long long int llrintf64x(long  double  __x  );
long long int __llrintf64x(long  double  __x  );
long  int lroundf64x(long  double  __x  );
long  int __lroundf64x(long  double  __x  );
long long int llroundf64x(long  double  __x  );
long long int __llroundf64x(long  double  __x  );
long  double  fdimf64x(long  double  __x  , long  double  __y  );
long  double  __fdimf64x(long  double  __x  , long  double  __y  );
long  double  fmaxf64x(long  double  __x  , long  double  __y  ) __attribute__ ((__const__));
long  double  fminf64x(long  double  __x  , long  double  __y  ) __attribute__ ((__const__));
long  double  fmaf64x(long  double  __x  , long  double  __y  , long  double  __z  );
long  double  __fmaf64x(long  double  __x  , long  double  __y  , long  double  __z  );
long  double  roundevenf64x(long  double  __x  ) __attribute__ ((__const__));
long  int  fromfpf64x(long  double  __x  , int __round, unsigned int __width);
long  int  __fromfpf64x(long  double  __x  , int __round, unsigned int __width);
unsigned long  int  ufromfpf64x(long  double  __x  , int __round, unsigned int __width);
unsigned long  int  __ufromfpf64x(long  double  __x  , int __round, unsigned int __width);
long  int  fromfpxf64x(long  double  __x  , int __round, unsigned int __width);
long  int  __fromfpxf64x(long  double  __x  , int __round, unsigned int __width);
unsigned long  int  ufromfpxf64x(long  double  __x  , int __round, unsigned int __width);
unsigned long  int  __ufromfpxf64x(long  double  __x  , int __round, unsigned int __width);
int canonicalizef64x(long  double*  __cx  , const long  double*  __x  );
long  double  fmaxmagf64x(long  double  __x  , long  double  __y  ) __attribute__ ((__const__));
long  double  fminmagf64x(long  double  __x  , long  double  __y  ) __attribute__ ((__const__));
long  double  fmaximumf64x(long  double  __x  , long  double  __y  ) __attribute__ ((__const__));
long  double  fminimumf64x(long  double  __x  , long  double  __y  ) __attribute__ ((__const__));
long  double  fmaximum_numf64x(long  double  __x  , long  double  __y  ) __attribute__ ((__const__));
long  double  fminimum_numf64x(long  double  __x  , long  double  __y  ) __attribute__ ((__const__));
long  double  fmaximum_magf64x(long  double  __x  , long  double  __y  ) __attribute__ ((__const__));
long  double  fminimum_magf64x(long  double  __x  , long  double  __y  ) __attribute__ ((__const__));
long  double  fmaximum_mag_numf64x(long  double  __x  , long  double  __y  ) __attribute__ ((__const__));
long  double  fminimum_mag_numf64x(long  double  __x  , long  double  __y  ) __attribute__ ((__const__));
int totalorderf64x(const long  double*  __x  , const long  double*  __y  ) __attribute__ ((__pure__));
int totalordermagf64x(const long  double*  __x  , const long  double*  __y  ) __attribute__ ((__pure__));
long  double  getpayloadf64x(const long  double*  __x  );
long  double  __getpayloadf64x(const long  double*  __x  );
int setpayloadf64x(long  double*  __x  , long  double  __payload  );
int setpayloadsigf64x(long  double*  __x  , long  double  __payload  );
float fadd(double __x, double __y);
float fdiv(double __x, double __y);
float ffma(double __x, double __y, double __z);
float fmul(double __x, double __y);
float fsqrt(double __x);
float fsub(double __x, double __y);
float faddl(long  double __x, long  double __y);
float fdivl(long  double __x, long  double __y);
float ffmal(long  double __x, long  double __y, long  double __z);
float fmull(long  double __x, long  double __y);
float fsqrtl(long  double __x);
float fsubl(long  double __x, long  double __y);
double daddl(long  double __x, long  double __y);
double ddivl(long  double __x, long  double __y);
double dfmal(long  double __x, long  double __y, long  double __z);
double dmull(long  double __x, long  double __y);
double dsqrtl(long  double __x);
double dsubl(long  double __x, long  double __y);
float  f32addf32x(double  __x  , double  __y  );
float  f32divf32x(double  __x  , double  __y  );
float  f32fmaf32x(double  __x  , double  __y  , double  __z  );
float  f32mulf32x(double  __x  , double  __y  );
float  f32sqrtf32x(double  __x  );
float  f32subf32x(double  __x  , double  __y  );
float  f32addf64(double  __x  , double  __y  );
float  f32divf64(double  __x  , double  __y  );
float  f32fmaf64(double  __x  , double  __y  , double  __z  );
float  f32mulf64(double  __x  , double  __y  );
float  f32sqrtf64(double  __x  );
float  f32subf64(double  __x  , double  __y  );
float  f32addf64x(long  double  __x  , long  double  __y  );
float  f32divf64x(long  double  __x  , long  double  __y  );
float  f32fmaf64x(long  double  __x  , long  double  __y  , long  double  __z  );
float  f32mulf64x(long  double  __x  , long  double  __y  );
float  f32sqrtf64x(long  double  __x  );
float  f32subf64x(long  double  __x  , long  double  __y  );
double  f32xaddf64(double  __x  , double  __y  );
double  f32xdivf64(double  __x  , double  __y  );
double  f32xfmaf64(double  __x  , double  __y  , double  __z  );
double  f32xmulf64(double  __x  , double  __y  );
double  f32xsqrtf64(double  __x  );
double  f32xsubf64(double  __x  , double  __y  );
double  f32xaddf64x(long  double  __x  , long  double  __y  );
double  f32xdivf64x(long  double  __x  , long  double  __y  );
double  f32xfmaf64x(long  double  __x  , long  double  __y  , long  double  __z  );
double  f32xmulf64x(long  double  __x  , long  double  __y  );
double  f32xsqrtf64x(long  double  __x  );
double  f32xsubf64x(long  double  __x  , long  double  __y  );
double  f64addf64x(long  double  __x  , long  double  __y  );
double  f64divf64x(long  double  __x  , long  double  __y  );
double  f64fmaf64x(long  double  __x  , long  double  __y  , long  double  __z  );
double  f64mulf64x(long  double  __x  , long  double  __y  );
double  f64sqrtf64x(long  double  __x  );
double  f64subf64x(long  double  __x  , long  double  __y  );
int __iscanonicall(long  double __x) __attribute__ ((__const__));
int setjmp(struct __jmp_buf_tag  __env[1]  );
int __sigsetjmp(struct __jmp_buf_tag  __env[1]  , int __savemask);
int _setjmp(struct __jmp_buf_tag  __env[1]  );
void longjmp(struct __jmp_buf_tag  __env[1]  , int __val) __attribute__ ((__noreturn__));
void _longjmp(struct __jmp_buf_tag  __env[1]  , int __val) __attribute__ ((__noreturn__));
void siglongjmp(struct __jmp_buf_tag  __env[1]  , int __val) __attribute__ ((__noreturn__));
void (*__sysv_signal(int __sig, void (*__handler)(int)  ))(int) ;
void (*sysv_signal(int __sig, void (*__handler)(int)  ))(int) ;
void (*signal(int __sig, void (*__handler)(int)  ))(int) ;
int kill(int  __pid  , int __sig);
int killpg(int  __pgrp  , int __sig);
int raise(int __sig);
void (*ssignal(int __sig, void (*__handler)(int)  ))(int) ;
int gsignal(int __sig);
void psignal(int __sig, const char* __s);
void psiginfo(const struct anonymous_typeX3*  __pinfo  , const char* __s);
int sigpause(int __sig) __asm__ ("__xpg_sigpause")
  __attribute__ ((__deprecated__));
int sigblock(int __mask) __attribute__ ((__deprecated__));
int sigsetmask(int __mask) __attribute__ ((__deprecated__));
int siggetmask() __attribute__ ((__deprecated__));
int sigemptyset(struct anonymous_typeX2*  __set  );
int sigfillset(struct anonymous_typeX2*  __set  );
int sigaddset(struct anonymous_typeX2*  __set  , int __signo);
int sigdelset(struct anonymous_typeX2*  __set  , int __signo);
int sigismember(const struct anonymous_typeX2*  __set  , int __signo);
int sigisemptyset(const struct anonymous_typeX2*  __set  );
int sigandset(struct anonymous_typeX2*  __set  , const struct anonymous_typeX2*  __left  , const struct anonymous_typeX2*  __right  );
int sigorset(struct anonymous_typeX2*  __set  , const struct anonymous_typeX2*  __left  , const struct anonymous_typeX2*  __right  );
int sigprocmask(int __how, const struct anonymous_typeX2*  __set  , struct anonymous_typeX2*  __oset  );
int sigsuspend(const struct anonymous_typeX2*  __set  );
int sigaction(int __sig, const struct sigaction*  __act  , struct sigaction*  __oact  );
int sigpending(struct anonymous_typeX2*  __set  );
int sigwait(const struct anonymous_typeX2*  __set  , int* __sig);
int sigwaitinfo(const struct anonymous_typeX2*  __set  , struct anonymous_typeX3*  __info  );
int sigtimedwait(const struct anonymous_typeX2*  __set  , struct anonymous_typeX3*  __info  , const struct timespec*  __timeout  );
int sigqueue(int  __pid  , int __sig, const union sigval  __val  );
int sigreturn(struct sigcontext*  __scp  );
int siginterrupt(int __sig, int __interrupt) __attribute__ ((__deprecated__));
int access(const char* __name, int __type);
int euidaccess(const char* __name, int __type);
int eaccess(const char* __name, int __type);
int execveat(int __fd, const char* __path, char* __argv[], char* __envp[], int __flags);
int faccessat(int __fd, const char* __file, int __type, int __flag);
long  int  lseek(int __fd, long  int  __offset  , int __whence);
long  int  lseek64(int __fd, long  int  __offset  , int __whence);
int close(int __fd);
void closefrom(int __lowfd);
long  int  read(int __fd, void* __buf, unsigned long  __nbytes  );
long  int  write(int __fd, const void* __buf, unsigned long  __n  );
long  int  pread(int __fd, void* __buf, unsigned long  __nbytes  , long  int  __offset  );
long  int  pwrite(int __fd, const void* __buf, unsigned long  __n  , long  int  __offset  );
long  int  pread64(int __fd, void* __buf, unsigned long  __nbytes  , long  int  __offset  );
long  int  pwrite64(int __fd, const void* __buf, unsigned long  __n  , long  int  __offset  );
int pipe(int __pipedes[2]);
int pipe2(int __pipedes[2], int __flags);
unsigned int alarm(unsigned int __seconds);
unsigned int sleep(unsigned int __seconds);
unsigned int  ualarm(unsigned int  __value  , unsigned int  __interval  );
int usleep(unsigned int  __useconds  );
int pause();
int chown(const char* __file, unsigned int  __owner  , unsigned int  __group  );
int fchown(int __fd, unsigned int  __owner  , unsigned int  __group  );
int lchown(const char* __file, unsigned int  __owner  , unsigned int  __group  );
int fchownat(int __fd, const char* __file, unsigned int  __owner  , unsigned int  __group  , int __flag);
int chdir(const char* __path);
int fchdir(int __fd);
char* getcwd(char* __buf, unsigned long  __size  );
char* get_current_dir_name();
char* getwd(char* __buf) __attribute__ ((__deprecated__)) 
    ;
int dup(int __fd);
int dup2(int __fd, int __fd2);
int dup3(int __fd, int __fd2, int __flags);
int execve(const char* __path, char* __argv[], char* __envp[]);
int fexecve(int __fd, char* __argv[], char* __envp[]);
int execv(const char* __path, char* __argv[]);
int execle(const char* __path, const char* __arg, ...);
int execl(const char* __path, const char* __arg, ...);
int execvp(const char* __file, char* __argv[]);
int execlp(const char* __file, const char* __arg, ...);
int execvpe(const char* __file, char* __argv[], char* __envp[]);
int nice(int __inc);
void _exit(int __status) __attribute__ ((__noreturn__));
long  int pathconf(const char* __path, int __name);
long  int fpathconf(int __fd, int __name);
long  int sysconf(int __name);
unsigned long  confstr(int __name, char* __buf, unsigned long  __len  );
int  getpid();
int  getppid();
int  getpgrp();
int  __getpgid(int  __pid  );
int  getpgid(int  __pid  );
int setpgid(int  __pid  , int  __pgid  );
int setpgrp();
int  setsid();
int  getsid(int  __pid  );
unsigned int  getuid();
unsigned int  geteuid();
unsigned int  getgid();
unsigned int  getegid();
int getgroups(int __size, unsigned int  __list[]  );
int group_member(unsigned int  __gid  );
int setuid(unsigned int  __uid  );
int setreuid(unsigned int  __ruid  , unsigned int  __euid  );
int seteuid(unsigned int  __uid  );
int setgid(unsigned int  __gid  );
int setregid(unsigned int  __rgid  , unsigned int  __egid  );
int setegid(unsigned int  __gid  );
int getresuid(unsigned int*  __ruid  , unsigned int*  __euid  , unsigned int*  __suid  );
int getresgid(unsigned int*  __rgid  , unsigned int*  __egid  , unsigned int*  __sgid  );
int setresuid(unsigned int  __ruid  , unsigned int  __euid  , unsigned int  __suid  );
int setresgid(unsigned int  __rgid  , unsigned int  __egid  , unsigned int  __sgid  );
int  fork();
int  vfork();
int  _Fork();
char* ttyname(int __fd);
int ttyname_r(int __fd, char* __buf, unsigned long  __buflen  );
int isatty(int __fd);
int ttyslot();
int link(const char* __from, const char* __to);
int linkat(int __fromfd, const char* __from, int __tofd, const char* __to, int __flags);
int symlink(const char* __from, const char* __to);
long  int  readlink(const char* __path, char* __buf, unsigned long  __len  );
int symlinkat(const char* __from, int __tofd, const char* __to);
long  int  readlinkat(int __fd, const char* __path, char* __buf, unsigned long  __len  );
int unlink(const char* __name);
int unlinkat(int __fd, const char* __name, int __flag);
int rmdir(const char* __path);
int  tcgetpgrp(int __fd);
int tcsetpgrp(int __fd, int  __pgrp_id  );
char* getlogin();
int getlogin_r(char* __name, unsigned long  __name_len  );
int setlogin(const char* __name);
int getopt(int ___argc, char** ___argv, const char* __shortopts);
int gethostname(char* __name, unsigned long  __len  );
int sethostname(const char* __name, unsigned long  __len  );
int sethostid(long  int __id);
int getdomainname(char* __name, unsigned long  __len  );
int setdomainname(const char* __name, unsigned long  __len  );
int vhangup();
int revoke(const char* __file);
int profil(unsigned short int* __sample_buffer, unsigned long  __size  , unsigned long  __offset  , unsigned int __scale);
int acct(const char* __name);
char* getusershell();
void endusershell();
void setusershell();
int daemon(int __nochdir, int __noclose);
int chroot(const char* __path);
char* getpass(const char* __prompt);
int fsync(int __fd);
int syncfs(int __fd);
long  int gethostid();
void sync();
int getpagesize() __attribute__ ((__const__));
int getdtablesize();
int truncate(const char* __file, long  int  __length  );
int truncate64(const char* __file, long  int  __length  );
int ftruncate(int __fd, long  int  __length  );
int ftruncate64(int __fd, long  int  __length  );
int brk(void* __addr);
void* sbrk(long  int  __delta  );
long  int syscall(long  int __sysno, ...);
int lockf(int __fd, int __cmd, long  int  __len  );
int lockf64(int __fd, int __cmd, long  int  __len  );
long  int  copy_file_range(int __infd, long  int*  __pinoff  , int __outfd, long  int*  __poutoff  , unsigned long  __length  , unsigned int __flags);
int fdatasync(int __fildes);
char* crypt(const char* __key, const char* __salt);
void swab(const void* __from, void* __to, long  int  __n  );
int getentropy(void* __buffer, unsigned long  __length  );
int close_range(unsigned int __fd, unsigned int __max_fd, int __flags);
int  gettid();
int sigaltstack(const struct anonymous_typeX36*  __ss  , struct anonymous_typeX36*  __oss  );
int sigstack(struct sigstack*  __ss  , struct sigstack*  __oss  ) __attribute__ ((__deprecated__));
int sighold(int __sig) __attribute__ ((__deprecated__));
int sigrelse(int __sig) __attribute__ ((__deprecated__));
int sigignore(int __sig) __attribute__ ((__deprecated__));
void (*sigset(int __sig, void (*__disp)(int)  ))(int)  __attribute__ ((__deprecated__)) ;
int pthread_sigmask(int __how, const struct anonymous_typeX2*  __newmask  , struct anonymous_typeX2*  __oldmask  );
int pthread_kill(unsigned long  int  __threadid  , int __signo);
int pthread_sigqueue(unsigned long  int  __threadid  , int __signo, const union sigval  __value  );
int __libc_current_sigrtmin();
int __libc_current_sigrtmax();
int tgkill(int  __tgid  , int  __tid  , int __signal);
int remove(const char* __filename);
int rename(const char* __old, const char* __new);
int renameat(int __oldfd, const char* __old, int __newfd, const char* __new);
int renameat2(int __oldfd, const char* __old, int __newfd, const char* __new, unsigned int __flags);
int fclose(struct _IO_FILE*  __stream  );
struct _IO_FILE*  tmpfile() __attribute__ ((__malloc__))  ;
struct _IO_FILE*  tmpfile64() __attribute__ ((__malloc__))  ;
char* tmpnam(char [20]);
char* tmpnam_r(char __s[20]);
char* tempnam(const char* __dir, const char* __pfx) __attribute__ ((__malloc__))  ;
int fflush(struct _IO_FILE*  __stream  );
int fflush_unlocked(struct _IO_FILE*  __stream  );
int fcloseall();
struct _IO_FILE*  fopen(const char* __filename, const char* __modes) __attribute__ ((__malloc__))  ;
struct _IO_FILE*  freopen(const char* __filename, const char* __modes, struct _IO_FILE*  __stream  );
struct _IO_FILE*  fopen64(const char* __filename, const char* __modes) __attribute__ ((__malloc__))  ;
struct _IO_FILE*  freopen64(const char* __filename, const char* __modes, struct _IO_FILE*  __stream  );
struct _IO_FILE*  fdopen(int __fd, const char* __modes) __attribute__ ((__malloc__))  ;
struct _IO_FILE*  fopencookie(void* __magic_cookie, const char* __modes, struct _IO_cookie_io_functions_t  __io_funcs  ) __attribute__ ((__malloc__))  ;
struct _IO_FILE*  fmemopen(void* __s, unsigned long  __len  , const char* __modes) __attribute__ ((__malloc__))  ;
struct _IO_FILE*  open_memstream(char** __bufloc, unsigned long*  __sizeloc  ) __attribute__ ((__malloc__))  ;
void setbuf(struct _IO_FILE*  __stream  , char* __buf);
int setvbuf(struct _IO_FILE*  __stream  , char* __buf, int __modes, unsigned long  __n  );
void setbuffer(struct _IO_FILE*  __stream  , char* __buf, unsigned long  __size  );
void setlinebuf(struct _IO_FILE*  __stream  );
int fprintf(struct _IO_FILE*  __stream  , const char* __format, ...);
int printf(const char* __format, ...);
int sprintf(char* __s, const char* __format, ...);
int vfprintf(struct _IO_FILE*  __s  , const char* __format, __builtin_va_list  __arg  );
int vprintf(const char* __format, __builtin_va_list  __arg  );
int vsprintf(char* __s, const char* __format, __builtin_va_list  __arg  );
int snprintf(char* __s, unsigned long  __maxlen  , const char* __format, ...) __attribute__ ((__format__ (__printf__, 3, 4)));
int vsnprintf(char* __s, unsigned long  __maxlen  , const char* __format, __builtin_va_list  __arg  ) __attribute__ ((__format__ (__printf__, 3, 0)));
int vasprintf(char** __ptr, const char* __f, __builtin_va_list  __arg  ) __attribute__ ((__format__ (__printf__, 2, 0))) ;
int __asprintf(char** __ptr, const char* __fmt, ...) __attribute__ ((__format__ (__printf__, 2, 3))) ;
int asprintf(char** __ptr, const char* __fmt, ...) __attribute__ ((__format__ (__printf__, 2, 3))) ;
int vdprintf(int __fd, const char* __fmt, __builtin_va_list  __arg  ) __attribute__ ((__format__ (__printf__, 2, 0)));
int dprintf(int __fd, const char* __fmt, ...) __attribute__ ((__format__ (__printf__, 2, 3)));
int fscanf(struct _IO_FILE*  __stream  , const char* __format, ...);
int scanf(const char* __format, ...);
int sscanf(const char* __s, const char* __format, ...);
int __isoc23_fscanf(struct _IO_FILE*  __stream  , const char* __format, ...);
int __isoc23_scanf(const char* __format, ...);
int __isoc23_sscanf(const char* __s, const char* __format, ...);
int vfscanf(struct _IO_FILE*  __s  , const char* __format, __builtin_va_list  __arg  ) __attribute__ ((__format__ (__scanf__, 2, 0)))  ;
int vscanf(const char* __format, __builtin_va_list  __arg  ) __attribute__ ((__format__ (__scanf__, 1, 0))) ;
int vsscanf(const char* __s, const char* __format, __builtin_va_list  __arg  ) __attribute__ ((__format__ (__scanf__, 2, 0)));
int __isoc23_vfscanf(struct _IO_FILE*  __s  , const char* __format, __builtin_va_list  __arg  );
int __isoc23_vscanf(const char* __format, __builtin_va_list  __arg  );
int __isoc23_vsscanf(const char* __s, const char* __format, __builtin_va_list  __arg  );
int fgetc(struct _IO_FILE*  __stream  );
int getc(struct _IO_FILE*  __stream  );
int getchar();
int getc_unlocked(struct _IO_FILE*  __stream  );
int getchar_unlocked();
int fgetc_unlocked(struct _IO_FILE*  __stream  );
int fputc(int __c, struct _IO_FILE*  __stream  );
int putc(int __c, struct _IO_FILE*  __stream  );
int putchar(int __c);
int fputc_unlocked(int __c, struct _IO_FILE*  __stream  );
int putc_unlocked(int __c, struct _IO_FILE*  __stream  );
int putchar_unlocked(int __c);
int getw(struct _IO_FILE*  __stream  );
int putw(int __w, struct _IO_FILE*  __stream  );
char* fgets(char* __s, int __n, struct _IO_FILE*  __stream  );
char* fgets_unlocked(char* __s, int __n, struct _IO_FILE*  __stream  );
long  int  __getdelim(char** __lineptr, unsigned long*  __n  , int __delimiter, struct _IO_FILE*  __stream  );
long  int  getdelim(char** __lineptr, unsigned long*  __n  , int __delimiter, struct _IO_FILE*  __stream  );
long  int  getline(char** __lineptr, unsigned long*  __n  , struct _IO_FILE*  __stream  );
int fputs(const char* __s, struct _IO_FILE*  __stream  );
int puts(const char* __s);
int ungetc(int __c, struct _IO_FILE*  __stream  );
unsigned long  fread(void* __ptr, unsigned long  __size  , unsigned long  __n  , struct _IO_FILE*  __stream  );
unsigned long  fwrite(const void* __ptr, unsigned long  __size  , unsigned long  __n  , struct _IO_FILE*  __s  );
int fputs_unlocked(const char* __s, struct _IO_FILE*  __stream  );
unsigned long  fread_unlocked(void* __ptr, unsigned long  __size  , unsigned long  __n  , struct _IO_FILE*  __stream  );
unsigned long  fwrite_unlocked(const void* __ptr, unsigned long  __size  , unsigned long  __n  , struct _IO_FILE*  __stream  );
int fseek(struct _IO_FILE*  __stream  , long  int __off, int __whence);
long  int ftell(struct _IO_FILE*  __stream  );
void rewind(struct _IO_FILE*  __stream  );
int fseeko(struct _IO_FILE*  __stream  , long  int  __off  , int __whence);
long  int  ftello(struct _IO_FILE*  __stream  );
int fgetpos(struct _IO_FILE*  __stream  , struct _G_fpos_t*  __pos  );
int fsetpos(struct _IO_FILE*  __stream  , const struct _G_fpos_t*  __pos  );
int fseeko64(struct _IO_FILE*  __stream  , long  int  __off  , int __whence);
long  int  ftello64(struct _IO_FILE*  __stream  );
int fgetpos64(struct _IO_FILE*  __stream  , struct _G_fpos64_t*  __pos  );
int fsetpos64(struct _IO_FILE*  __stream  , const struct _G_fpos64_t*  __pos  );
void clearerr(struct _IO_FILE*  __stream  );
int feof(struct _IO_FILE*  __stream  );
int ferror(struct _IO_FILE*  __stream  );
void clearerr_unlocked(struct _IO_FILE*  __stream  );
int feof_unlocked(struct _IO_FILE*  __stream  );
int ferror_unlocked(struct _IO_FILE*  __stream  );
void perror(const char* __s);
int fileno(struct _IO_FILE*  __stream  );
int fileno_unlocked(struct _IO_FILE*  __stream  );
int pclose(struct _IO_FILE*  __stream  );
struct _IO_FILE*  popen(const char* __command, const char* __modes) __attribute__ ((__malloc__))  ;
char* ctermid(char* __s);
char* cuserid(char* __s);
int obstack_printf(struct obstack*  __obstack  , const char* __format, ...) __attribute__ ((__format__ (__printf__, 2, 3)));
int obstack_vprintf(struct obstack*  __obstack  , const char* __format, __builtin_va_list  __args  ) __attribute__ ((__format__ (__printf__, 2, 0)));
void flockfile(struct _IO_FILE*  __stream  );
int ftrylockfile(struct _IO_FILE*  __stream  );
void funlockfile(struct _IO_FILE*  __stream  );
int __uflow(struct _IO_FILE*    );
int __overflow(struct _IO_FILE*    , int );
unsigned long  __ctype_get_mb_cur_max();
double atof(const char* __nptr) __attribute__ ((__pure__))  ;
int atoi(const char* __nptr) __attribute__ ((__pure__))  ;
long  int atol(const char* __nptr) __attribute__ ((__pure__))  ;
long long int atoll(const char* __nptr) __attribute__ ((__pure__))  ;
double strtod(const char* __nptr, char** __endptr);
float strtof(const char* __nptr, char** __endptr);
long  double strtold(const char* __nptr, char** __endptr);
float  strtof32(const char* __nptr, char** __endptr);
double  strtof64(const char* __nptr, char** __endptr);
double  strtof32x(const char* __nptr, char** __endptr);
long  double  strtof64x(const char* __nptr, char** __endptr);
long  int strtol(const char* __nptr, char** __endptr, int __base);
unsigned long  int strtoul(const char* __nptr, char** __endptr, int __base);
long long int strtoq(const char* __nptr, char** __endptr, int __base);
unsigned long long int strtouq(const char* __nptr, char** __endptr, int __base);
long long int strtoll(const char* __nptr, char** __endptr, int __base);
unsigned long long int strtoull(const char* __nptr, char** __endptr, int __base);
long  int __isoc23_strtol(const char* __nptr, char** __endptr, int __base);
unsigned long  int __isoc23_strtoul(const char* __nptr, char** __endptr, int __base);
long long int __isoc23_strtoll(const char* __nptr, char** __endptr, int __base);
unsigned long long int __isoc23_strtoull(const char* __nptr, char** __endptr, int __base);
int strfromd(char* __dest, unsigned long  __size  , const char* __format, double __f);
int strfromf(char* __dest, unsigned long  __size  , const char* __format, float __f);
int strfroml(char* __dest, unsigned long  __size  , const char* __format, long  double __f);
int strfromf32(char* __dest, unsigned long  __size  , const char* __format, float  __f  );
int strfromf64(char* __dest, unsigned long  __size  , const char* __format, double  __f  );
int strfromf32x(char* __dest, unsigned long  __size  , const char* __format, double  __f  );
int strfromf64x(char* __dest, unsigned long  __size  , const char* __format, long  double  __f  );
long  int strtol_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct*  __loc  );
unsigned long  int strtoul_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct*  __loc  );
long long int strtoll_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct*  __loc  );
unsigned long long int strtoull_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct*  __loc  );
long  int __isoc23_strtol_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct*  __loc  );
unsigned long  int __isoc23_strtoul_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct*  __loc  );
long long int __isoc23_strtoll_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct*  __loc  );
unsigned long long int __isoc23_strtoull_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct*  __loc  );
double strtod_l(const char* __nptr, char** __endptr, struct __locale_struct*  __loc  );
float strtof_l(const char* __nptr, char** __endptr, struct __locale_struct*  __loc  );
long  double strtold_l(const char* __nptr, char** __endptr, struct __locale_struct*  __loc  );
float  strtof32_l(const char* __nptr, char** __endptr, struct __locale_struct*  __loc  );
double  strtof64_l(const char* __nptr, char** __endptr, struct __locale_struct*  __loc  );
double  strtof32x_l(const char* __nptr, char** __endptr, struct __locale_struct*  __loc  );
long  double  strtof64x_l(const char* __nptr, char** __endptr, struct __locale_struct*  __loc  );
char* l64a(long  int __n);
long  int a64l(const char* __s) __attribute__ ((__pure__))  ;
int select(int __nfds, struct anonymous_typeX56*  __readfds  , struct anonymous_typeX56*  __writefds  , struct anonymous_typeX56*  __exceptfds  , struct timeval*  __timeout  );
int pselect(int __nfds, struct anonymous_typeX56*  __readfds  , struct anonymous_typeX56*  __writefds  , struct anonymous_typeX56*  __exceptfds  , const struct timespec*  __timeout  , const struct anonymous_typeX2*  __sigmask  );
long  int random();
void srandom(unsigned int __seed);
char* initstate(unsigned int __seed, char* __statebuf, unsigned long  __statelen  );
char* setstate(char* __statebuf);
int random_r(struct random_data*  __buf  , int*  __result  );
int srandom_r(unsigned int __seed, struct random_data*  __buf  );
int initstate_r(unsigned int __seed, char* __statebuf, unsigned long  __statelen  , struct random_data*  __buf  );
int setstate_r(char* __statebuf, struct random_data*  __buf  );
int rand();
void srand(unsigned int __seed);
int rand_r(unsigned int* __seed);
double drand48();
double erand48(unsigned short int __xsubi[3]);
long  int lrand48();
long  int nrand48(unsigned short int __xsubi[3]);
long  int mrand48();
long  int jrand48(unsigned short int __xsubi[3]);
void srand48(long  int __seedval);
unsigned short int* seed48(unsigned short int __seed16v[3]);
void lcong48(unsigned short int __param[7]);
int drand48_r(struct drand48_data*  __buffer  , double* __result);
int erand48_r(unsigned short int __xsubi[3], struct drand48_data*  __buffer  , double* __result);
int lrand48_r(struct drand48_data*  __buffer  , long  int* __result);
int nrand48_r(unsigned short int __xsubi[3], struct drand48_data*  __buffer  , long  int* __result);
int mrand48_r(struct drand48_data*  __buffer  , long  int* __result);
int jrand48_r(unsigned short int __xsubi[3], struct drand48_data*  __buffer  , long  int* __result);
int srand48_r(long  int __seedval, struct drand48_data*  __buffer  );
int seed48_r(unsigned short int __seed16v[3], struct drand48_data*  __buffer  );
int lcong48_r(unsigned short int __param[7], struct drand48_data*  __buffer  );
unsigned int  arc4random();
void arc4random_buf(void* __buf, unsigned long  __size  );
unsigned int  arc4random_uniform(unsigned int  __upper_bound  );
void* malloc(unsigned long  __size  ) __attribute__ ((__malloc__))
      ;
void* calloc(unsigned long  __nmemb  , unsigned long  __size  ) __attribute__ ((__malloc__))  ;
void* realloc(void* __ptr, unsigned long  __size  );
void free(void* __ptr);
void* reallocarray(void* __ptr, unsigned long  __nmemb  , unsigned long  __size  );
void* alloca(unsigned long  __size  );
void* valloc(unsigned long  __size  ) __attribute__ ((__malloc__))
      ;
int posix_memalign(void** __memptr, unsigned long  __alignment  , unsigned long  __size  );
void* aligned_alloc(unsigned long  __alignment  , unsigned long  __size  ) __attribute__ ((__malloc__)) 
      ;
void abort() __attribute__ ((__noreturn__)) ;
int atexit(void (*__func)());
int at_quick_exit(void (*__func)());
int on_exit(void (*__func)(int,void*), void* __arg);
void exit(int __status) __attribute__ ((__noreturn__));
void quick_exit(int __status) __attribute__ ((__noreturn__));
void _Exit(int __status) __attribute__ ((__noreturn__));
char* getenv(const char* __name);
char* secure_getenv(const char* __name);
int putenv(char* __string);
int setenv(const char* __name, const char* __value, int __replace);
int unsetenv(const char* __name);
int clearenv();
char* mktemp(char* __template);
int mkstemp(char* __template);
int mkstemp64(char* __template);
int mkstemps(char* __template, int __suffixlen);
int mkstemps64(char* __template, int __suffixlen);
char* mkdtemp(char* __template);
int mkostemp(char* __template, int __flags);
int mkostemp64(char* __template, int __flags);
int mkostemps(char* __template, int __suffixlen, int __flags);
int mkostemps64(char* __template, int __suffixlen, int __flags);
int system(const char* __command);
char* canonicalize_file_name(const char* __name) __attribute__ ((__malloc__))
      ;
char* realpath(const char* __name, char* __resolved);
void* bsearch(const void* __key, const void* __base, unsigned long  __nmemb  , unsigned long  __size  , int (*__compar)(const void*,const void*)  );
void qsort(void* __base, unsigned long  __nmemb  , unsigned long  __size  , int (*__compar)(const void*,const void*)  );
void qsort_r(void* __base, unsigned long  __nmemb  , unsigned long  __size  , int (*__compar)(const void*,const void*,void*)  , void* __arg);
int abs(int __x) __attribute__ ((__const__)) ;
long  int labs(long  int __x) __attribute__ ((__const__)) ;
long long int llabs(long long int __x) __attribute__ ((__const__)) ;
unsigned int uabs(int __x) __attribute__ ((__const__)) ;
unsigned long  int ulabs(long  int __x) __attribute__ ((__const__)) ;
unsigned long long int ullabs(long long int __x) __attribute__ ((__const__)) ;
struct anonymous_typeX53  div(int __numer, int __denom) __attribute__ ((__const__)) ;
struct anonymous_typeX54  ldiv(long  int __numer, long  int __denom) __attribute__ ((__const__)) ;
struct anonymous_typeX55  lldiv(long long int __numer, long long int __denom) __attribute__ ((__const__)) ;
char* ecvt(double __value, int __ndigit, int* __decpt, int* __sign);
char* fcvt(double __value, int __ndigit, int* __decpt, int* __sign);
char* gcvt(double __value, int __ndigit, char* __buf);
char* qecvt(long  double __value, int __ndigit, int* __decpt, int* __sign);
char* qfcvt(long  double __value, int __ndigit, int* __decpt, int* __sign);
char* qgcvt(long  double __value, int __ndigit, char* __buf);
int ecvt_r(double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, unsigned long  __len  );
int fcvt_r(double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, unsigned long  __len  );
int qecvt_r(long  double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, unsigned long  __len  );
int qfcvt_r(long  double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, unsigned long  __len  );
int mblen(const char* __s, unsigned long  __n  );
int mbtowc(int*  __pwc  , const char* __s, unsigned long  __n  );
int wctomb(char* __s, int  __wchar  );
unsigned long  mbstowcs(int*  __pwcs  , const char* __s, unsigned long  __n  );
unsigned long  wcstombs(char* __s, const int*  __pwcs  , unsigned long  __n  );
int rpmatch(const char* __response);
int getsubopt(char** __optionp, char** __tokens, char** __valuep);
int posix_openpt(int __oflag);
int grantpt(int __fd);
int unlockpt(int __fd);
char* ptsname(int __fd);
int ptsname_r(int __fd, char* __buf, unsigned long  __buflen  );
int getpt();
int getloadavg(double __loadavg[], int __nelem);
void* memcpy(void* __dest, const void* __src, unsigned long  __n  );
void* memmove(void* __dest, const void* __src, unsigned long  __n  );
void* memccpy(void* __dest, const void* __src, int __c, unsigned long  __n  );
void* memset(void* __s, int __c, unsigned long  __n  );
int memcmp(const void* __s1, const void* __s2, unsigned long  __n  ) __attribute__ ((__pure__)) ;
int __memcmpeq(const void* __s1, const void* __s2, unsigned long  __n  ) __attribute__ ((__pure__)) ;
void* memchr(const void* __s, int __c, unsigned long  __n  ) __attribute__ ((__pure__)) ;
void* rawmemchr(const void* __s, int __c) __attribute__ ((__pure__)) ;
void* memrchr(const void* __s, int __c, unsigned long  __n  ) __attribute__ ((__pure__)) 
      ;
char* strcpy(char* __dest, const char* __src);
char* strncpy(char* __dest, const char* __src, unsigned long  __n  );
char* strcat(char* __dest, const char* __src);
char* strncat(char* __dest, const char* __src, unsigned long  __n  );
int strcmp(const char* __s1, const char* __s2) __attribute__ ((__pure__)) ;
int strncmp(const char* __s1, const char* __s2, unsigned long  __n  ) __attribute__ ((__pure__)) ;
int strcoll(const char* __s1, const char* __s2) __attribute__ ((__pure__)) ;
unsigned long  strxfrm(char* __dest, const char* __src, unsigned long  __n  );
int strcoll_l(const char* __s1, const char* __s2, struct __locale_struct*  __l  ) __attribute__ ((__pure__)) ;
unsigned long  strxfrm_l(char* __dest, const char* __src, unsigned long  __n  , struct __locale_struct*  __l  );
char* strdup(const char* __s) __attribute__ ((__malloc__)) ;
char* strndup(const char* __string, unsigned long  __n  ) __attribute__ ((__malloc__)) ;
char* strchr(const char* __s, int __c) __attribute__ ((__pure__)) ;
char* strrchr(const char* __s, int __c) __attribute__ ((__pure__)) ;
char* strchrnul(const char* __s, int __c) __attribute__ ((__pure__)) ;
unsigned long  strcspn(const char* __s, const char* __reject) __attribute__ ((__pure__)) ;
unsigned long  strspn(const char* __s, const char* __accept) __attribute__ ((__pure__)) ;
char* strpbrk(const char* __s, const char* __accept) __attribute__ ((__pure__)) ;
char* strstr(const char* __haystack, const char* __needle) __attribute__ ((__pure__)) ;
char* strtok(char* __s, const char* __delim);
char* __strtok_r(char* __s, const char* __delim, char** __save_ptr);
char* strtok_r(char* __s, const char* __delim, char** __save_ptr);
char* strcasestr(const char* __haystack, const char* __needle) __attribute__ ((__pure__)) ;
void* memmem(const void* __haystack, unsigned long  __haystacklen  , const void* __needle, unsigned long  __needlelen  ) __attribute__ ((__pure__)) 
    
    ;
void* __mempcpy(void* __dest, const void* __src, unsigned long  __n  );
void* mempcpy(void* __dest, const void* __src, unsigned long  __n  );
unsigned long  strlen(const char* __s) __attribute__ ((__pure__)) ;
unsigned long  strnlen(const char* __string, unsigned long  __maxlen  ) __attribute__ ((__pure__)) ;
char* strerror(int __errnum);
char* strerror_r(int __errnum, char* __buf, unsigned long  __buflen  );
const char* strerrordesc_np(int __err);
const char* strerrorname_np(int __err);
char* strerror_l(int __errnum, struct __locale_struct*  __l  );
int bcmp(const void* __s1, const void* __s2, unsigned long  __n  ) __attribute__ ((__pure__)) ;
void bcopy(const void* __src, void* __dest, unsigned long  __n  );
void bzero(void* __s, unsigned long  __n  );
char* index(const char* __s, int __c) __attribute__ ((__pure__)) ;
char* rindex(const char* __s, int __c) __attribute__ ((__pure__)) ;
int ffs(int __i) __attribute__ ((__const__));
int ffsl(long  int __l) __attribute__ ((__const__));
int ffsll(long long int __ll) __attribute__ ((__const__));
int strcasecmp(const char* __s1, const char* __s2) __attribute__ ((__pure__)) ;
int strncasecmp(const char* __s1, const char* __s2, unsigned long  __n  ) __attribute__ ((__pure__)) ;
int strcasecmp_l(const char* __s1, const char* __s2, struct __locale_struct*  __loc  ) __attribute__ ((__pure__)) ;
int strncasecmp_l(const char* __s1, const char* __s2, unsigned long  __n  , struct __locale_struct*  __loc  ) __attribute__ ((__pure__)) ;
void explicit_bzero(void* __s, unsigned long  __n  );
char* strsep(char** __stringp, const char* __delim);
char* strsignal(int __sig);
const char* sigabbrev_np(int __sig);
const char* sigdescr_np(int __sig);
char* __stpcpy(char* __dest, const char* __src);
char* stpcpy(char* __dest, const char* __src);
char* __stpncpy(char* __dest, const char* __src, unsigned long  __n  );
char* stpncpy(char* __dest, const char* __src, unsigned long  __n  );
unsigned long  strlcpy(char* __dest, const char* __src, unsigned long  __n  );
unsigned long  strlcat(char* __dest, const char* __src, unsigned long  __n  );
int strverscmp(const char* __s1, const char* __s2) __attribute__ ((__pure__)) ;
char* strfry(char* __string);
void* memfrob(void* __s, unsigned long  __n  );
char* basename(const char* __filename);
int clock_adjtime(int  __clock_id  , struct timex*  __utx  );
long  int  clock();
long  int  time(long  int*  __timer  );
double difftime(long  int  __time1  , long  int  __time0  );
long  int  mktime(struct tm*  __tp  );
unsigned long  strftime(char* __s, unsigned long  __maxsize  , const char* __format, const struct tm*  __tp  );
char* strptime(const char* __s, const char* __fmt, struct tm*  __tp  );
unsigned long  strftime_l(char* __s, unsigned long  __maxsize  , const char* __format, const struct tm*  __tp  , struct __locale_struct*  __loc  );
char* strptime_l(const char* __s, const char* __fmt, struct tm*  __tp  , struct __locale_struct*  __loc  );
struct tm*  gmtime(const long  int*  __timer  );
struct tm*  localtime(const long  int*  __timer  );
struct tm*  gmtime_r(const long  int*  __timer  , struct tm*  __tp  );
struct tm*  localtime_r(const long  int*  __timer  , struct tm*  __tp  );
char* asctime(const struct tm*  __tp  );
char* ctime(const long  int*  __timer  );
char* asctime_r(const struct tm*  __tp  , char* __buf);
char* ctime_r(const long  int*  __timer  , char* __buf);
void tzset();
long  int  timegm(struct tm*  __tp  );
long  int  timelocal(struct tm*  __tp  );
int dysize(int __year) __attribute__ ((__const__));
int nanosleep(const struct timespec*  __requested_time  , struct timespec*  __remaining  );
int clock_getres(int  __clock_id  , struct timespec*  __res  );
int clock_gettime(int  __clock_id  , struct timespec*  __tp  );
int clock_settime(int  __clock_id  , const struct timespec*  __tp  );
int clock_nanosleep(int  __clock_id  , int __flags, const struct timespec*  __req  , struct timespec*  __rem  );
int clock_getcpuclockid(int  __pid  , int*  __clock_id  );
int timer_create(int  __clock_id  , struct sigevent*  __evp  , void**  __timerid  );
int timer_delete(void*  __timerid  );
int timer_settime(void*  __timerid  , int __flags, const struct itimerspec*  __value  , struct itimerspec*  __ovalue  );
int timer_gettime(void*  __timerid  , struct itimerspec*  __value  );
int timer_getoverrun(void*  __timerid  );
int timespec_get(struct timespec*  __ts  , int __base);
int timespec_getres(struct timespec*  __ts  , int __base);
struct tm*  getdate(const char* __string);
int getdate_r(const char* __string, struct tm*  __resbufp  );
int*  wcscpy(int*  __dest  , const int*  __src  );
int*  wcsncpy(int*  __dest  , const int*  __src  , unsigned long  __n  );
unsigned long  wcslcpy(int*  __dest  , const int*  __src  , unsigned long  __n  );
unsigned long  wcslcat(int*  __dest  , const int*  __src  , unsigned long  __n  );
int*  wcscat(int*  __dest  , const int*  __src  );
int*  wcsncat(int*  __dest  , const int*  __src  , unsigned long  __n  );
int wcscmp(const int*  __s1  , const int*  __s2  ) __attribute__ ((__pure__)) ;
int wcsncmp(const int*  __s1  , const int*  __s2  , unsigned long  __n  ) __attribute__ ((__pure__)) ;
int wcscasecmp(const int*  __s1  , const int*  __s2  );
int wcsncasecmp(const int*  __s1  , const int*  __s2  , unsigned long  __n  );
int wcscasecmp_l(const int*  __s1  , const int*  __s2  , struct __locale_struct*  __loc  );
int wcsncasecmp_l(const int*  __s1  , const int*  __s2  , unsigned long  __n  , struct __locale_struct*  __loc  );
int wcscoll(const int*  __s1  , const int*  __s2  );
unsigned long  wcsxfrm(int*  __s1  , const int*  __s2  , unsigned long  __n  );
int wcscoll_l(const int*  __s1  , const int*  __s2  , struct __locale_struct*  __loc  );
unsigned long  wcsxfrm_l(int*  __s1  , const int*  __s2  , unsigned long  __n  , struct __locale_struct*  __loc  );
int*  wcsdup(const int*  __s  ) __attribute__ ((__malloc__)) ;
int*  wcschr(const int*  __wcs  , int  __wc  ) __attribute__ ((__pure__));
int*  wcsrchr(const int*  __wcs  , int  __wc  ) __attribute__ ((__pure__));
int*  wcschrnul(const int*  __s  , int  __wc  ) __attribute__ ((__pure__));
unsigned long  wcscspn(const int*  __wcs  , const int*  __reject  ) __attribute__ ((__pure__));
unsigned long  wcsspn(const int*  __wcs  , const int*  __accept  ) __attribute__ ((__pure__));
int*  wcspbrk(const int*  __wcs  , const int*  __accept  ) __attribute__ ((__pure__));
int*  wcsstr(const int*  __haystack  , const int*  __needle  ) __attribute__ ((__pure__));
int*  wcstok(int*  __s  , const int*  __delim  , int**  __ptr  );
unsigned long  wcslen(const int*  __s  ) __attribute__ ((__pure__));
int*  wcswcs(const int*  __haystack  , const int*  __needle  ) __attribute__ ((__pure__));
unsigned long  wcsnlen(const int*  __s  , unsigned long  __maxlen  ) __attribute__ ((__pure__));
int*  wmemchr(const int*  __s  , int  __c  , unsigned long  __n  ) __attribute__ ((__pure__));
int wmemcmp(const int*  __s1  , const int*  __s2  , unsigned long  __n  ) __attribute__ ((__pure__));
int*  wmemcpy(int*  __s1  , const int*  __s2  , unsigned long  __n  );
int*  wmemmove(int*  __s1  , const int*  __s2  , unsigned long  __n  );
int*  wmemset(int*  __s  , int  __c  , unsigned long  __n  );
int*  wmempcpy(int*  __s1  , const int*  __s2  , unsigned long  __n  );
unsigned int  btowc(int __c);
int wctob(unsigned int  __c  );
int mbsinit(const struct anonymous_typeX50*  __ps  ) __attribute__ ((__pure__));
unsigned long  mbrtowc(int*  __pwc  , const char* __s, unsigned long  __n  , struct anonymous_typeX50*  __p  );
unsigned long  wcrtomb(char* __s, int  __wc  , struct anonymous_typeX50*  __ps  );
unsigned long  __mbrlen(const char* __s, unsigned long  __n  , struct anonymous_typeX50*  __ps  );
unsigned long  mbrlen(const char* __s, unsigned long  __n  , struct anonymous_typeX50*  __ps  );
unsigned long  mbsrtowcs(int*  __dst  , const char** __src, unsigned long  __len  , struct anonymous_typeX50*  __ps  );
unsigned long  wcsrtombs(char* __dst, const int**  __src  , unsigned long  __len  , struct anonymous_typeX50*  __ps  );
unsigned long  mbsnrtowcs(int*  __dst  , const char** __src, unsigned long  __nmc  , unsigned long  __len  , struct anonymous_typeX50*  __ps  );
unsigned long  wcsnrtombs(char* __dst, const int**  __src  , unsigned long  __nwc  , unsigned long  __len  , struct anonymous_typeX50*  __ps  );
int wcwidth(int  __c  );
int wcswidth(const int*  __s  , unsigned long  __n  );
double wcstod(const int*  __nptr  , int**  __endptr  );
float wcstof(const int*  __nptr  , int**  __endptr  );
long  double wcstold(const int*  __nptr  , int**  __endptr  );
float  wcstof32(const int*  __nptr  , int**  __endptr  );
double  wcstof64(const int*  __nptr  , int**  __endptr  );
double  wcstof32x(const int*  __nptr  , int**  __endptr  );
long  double  wcstof64x(const int*  __nptr  , int**  __endptr  );
long  int wcstol(const int*  __nptr  , int**  __endptr  , int __base);
unsigned long  int wcstoul(const int*  __nptr  , int**  __endptr  , int __base);
long long int wcstoll(const int*  __nptr  , int**  __endptr  , int __base);
unsigned long long int wcstoull(const int*  __nptr  , int**  __endptr  , int __base);
long long int wcstoq(const int*  __nptr  , int**  __endptr  , int __base);
unsigned long long int wcstouq(const int*  __nptr  , int**  __endptr  , int __base);
long  int __isoc23_wcstol(const int*  __nptr  , int**  __endptr  , int __base);
unsigned long  int __isoc23_wcstoul(const int*  __nptr  , int**  __endptr  , int __base);
long long int __isoc23_wcstoll(const int*  __nptr  , int**  __endptr  , int __base);
unsigned long long int __isoc23_wcstoull(const int*  __nptr  , int**  __endptr  , int __base);
long  int wcstol_l(const int*  __nptr  , int**  __endptr  , int __base, struct __locale_struct*  __loc  );
unsigned long  int wcstoul_l(const int*  __nptr  , int**  __endptr  , int __base, struct __locale_struct*  __loc  );
long long int wcstoll_l(const int*  __nptr  , int**  __endptr  , int __base, struct __locale_struct*  __loc  );
unsigned long long int wcstoull_l(const int*  __nptr  , int**  __endptr  , int __base, struct __locale_struct*  __loc  );
long  int __isoc23_wcstol_l(const int*  __nptr  , int**  __endptr  , int __base, struct __locale_struct*  __loc  );
unsigned long  int __isoc23_wcstoul_l(const int*  __nptr  , int**  __endptr  , int __base, struct __locale_struct*  __loc  );
long long int __isoc23_wcstoll_l(const int*  __nptr  , int**  __endptr  , int __base, struct __locale_struct*  __loc  );
unsigned long long int __isoc23_wcstoull_l(const int*  __nptr  , int**  __endptr  , int __base, struct __locale_struct*  __loc  );
double wcstod_l(const int*  __nptr  , int**  __endptr  , struct __locale_struct*  __loc  );
float wcstof_l(const int*  __nptr  , int**  __endptr  , struct __locale_struct*  __loc  );
long  double wcstold_l(const int*  __nptr  , int**  __endptr  , struct __locale_struct*  __loc  );
float  wcstof32_l(const int*  __nptr  , int**  __endptr  , struct __locale_struct*  __loc  );
double  wcstof64_l(const int*  __nptr  , int**  __endptr  , struct __locale_struct*  __loc  );
double  wcstof32x_l(const int*  __nptr  , int**  __endptr  , struct __locale_struct*  __loc  );
long  double  wcstof64x_l(const int*  __nptr  , int**  __endptr  , struct __locale_struct*  __loc  );
int*  wcpcpy(int*  __dest  , const int*  __src  );
int*  wcpncpy(int*  __dest  , const int*  __src  , unsigned long  __n  );
struct _IO_FILE*  open_wmemstream(int**  __bufloc  , unsigned long*  __sizeloc  ) __attribute__ ((__malloc__)) ;
int fwide(struct _IO_FILE*  __fp  , int __mode);
int fwprintf(struct _IO_FILE*  __stream  , const int*  __format  , ...);
int wprintf(const int*  __format  , ...);
int swprintf(int*  __s  , unsigned long  __n  , const int*  __format  , ...);
int vfwprintf(struct _IO_FILE*  __s  , const int*  __format  , __builtin_va_list  __arg  );
int vwprintf(const int*  __format  , __builtin_va_list  __arg  );
int vswprintf(int*  __s  , unsigned long  __n  , const int*  __format  , __builtin_va_list  __arg  );
int fwscanf(struct _IO_FILE*  __stream  , const int*  __format  , ...);
int wscanf(const int*  __format  , ...);
int swscanf(const int*  __s  , const int*  __format  , ...);
int __isoc23_fwscanf(struct _IO_FILE*  __stream  , const int*  __format  , ...);
int __isoc23_wscanf(const int*  __format  , ...);
int __isoc23_swscanf(const int*  __s  , const int*  __format  , ...);
int vfwscanf(struct _IO_FILE*  __s  , const int*  __format  , __builtin_va_list  __arg  );
int vwscanf(const int*  __format  , __builtin_va_list  __arg  );
int vswscanf(const int*  __s  , const int*  __format  , __builtin_va_list  __arg  );
int __isoc23_vfwscanf(struct _IO_FILE*  __s  , const int*  __format  , __builtin_va_list  __arg  );
int __isoc23_vwscanf(const int*  __format  , __builtin_va_list  __arg  );
int __isoc23_vswscanf(const int*  __s  , const int*  __format  , __builtin_va_list  __arg  );
unsigned int  fgetwc(struct _IO_FILE*  __stream  );
unsigned int  getwc(struct _IO_FILE*  __stream  );
unsigned int  getwchar();
unsigned int  fputwc(int  __wc  , struct _IO_FILE*  __stream  );
unsigned int  putwc(int  __wc  , struct _IO_FILE*  __stream  );
unsigned int  putwchar(int  __wc  );
int*  fgetws(int*  __ws  , int __n, struct _IO_FILE*  __stream  );
int fputws(const int*  __ws  , struct _IO_FILE*  __stream  );
unsigned int  ungetwc(unsigned int  __wc  , struct _IO_FILE*  __stream  );
unsigned int  getwc_unlocked(struct _IO_FILE*  __stream  );
unsigned int  getwchar_unlocked();
unsigned int  fgetwc_unlocked(struct _IO_FILE*  __stream  );
unsigned int  fputwc_unlocked(int  __wc  , struct _IO_FILE*  __stream  );
unsigned int  putwc_unlocked(int  __wc  , struct _IO_FILE*  __stream  );
unsigned int  putwchar_unlocked(int  __wc  );
int*  fgetws_unlocked(int*  __ws  , int __n, struct _IO_FILE*  __stream  );
int fputws_unlocked(const int*  __ws  , struct _IO_FILE*  __stream  );
unsigned long  wcsftime(int*  __s  , unsigned long  __maxsize  , const int*  __format  , const struct tm*  __tp  );
unsigned long  wcsftime_l(int*  __s  , unsigned long  __maxsize  , const int*  __format  , const struct tm*  __tp  , struct __locale_struct*  __loc  );
int iswalnum(unsigned int  __wc  );
int iswalpha(unsigned int  __wc  );
int iswcntrl(unsigned int  __wc  );
int iswdigit(unsigned int  __wc  );
int iswgraph(unsigned int  __wc  );
int iswlower(unsigned int  __wc  );
int iswprint(unsigned int  __wc  );
int iswpunct(unsigned int  __wc  );
int iswspace(unsigned int  __wc  );
int iswupper(unsigned int  __wc  );
int iswxdigit(unsigned int  __wc  );
int iswblank(unsigned int  __wc  );
unsigned long  int  wctype(const char* __property);
int iswctype(unsigned int  __wc  , unsigned long  int  __desc  );
unsigned int  towlower(unsigned int  __wc  );
unsigned int  towupper(unsigned int  __wc  );
const int*  wctrans(const char* __property);
unsigned int  towctrans(unsigned int  __wc  , const int*  __desc  );
int iswalnum_l(unsigned int  __wc  , struct __locale_struct*  __locale  );
int iswalpha_l(unsigned int  __wc  , struct __locale_struct*  __locale  );
int iswcntrl_l(unsigned int  __wc  , struct __locale_struct*  __locale  );
int iswdigit_l(unsigned int  __wc  , struct __locale_struct*  __locale  );
int iswgraph_l(unsigned int  __wc  , struct __locale_struct*  __locale  );
int iswlower_l(unsigned int  __wc  , struct __locale_struct*  __locale  );
int iswprint_l(unsigned int  __wc  , struct __locale_struct*  __locale  );
int iswpunct_l(unsigned int  __wc  , struct __locale_struct*  __locale  );
int iswspace_l(unsigned int  __wc  , struct __locale_struct*  __locale  );
int iswupper_l(unsigned int  __wc  , struct __locale_struct*  __locale  );
int iswxdigit_l(unsigned int  __wc  , struct __locale_struct*  __locale  );
int iswblank_l(unsigned int  __wc  , struct __locale_struct*  __locale  );
unsigned long  int  wctype_l(const char* __property, struct __locale_struct*  __locale  );
int iswctype_l(unsigned int  __wc  , unsigned long  int  __desc  , struct __locale_struct*  __locale  );
unsigned int  towlower_l(unsigned int  __wc  , struct __locale_struct*  __locale  );
unsigned int  towupper_l(unsigned int  __wc  , struct __locale_struct*  __locale  );
const int*  wctrans_l(const char* __property, struct __locale_struct*  __locale  );
unsigned int  towctrans_l(unsigned int  __wc  , const int*  __desc  , struct __locale_struct*  __locale  );
int test_headers_cstd();
int main(int argc, char** argv);
// uniq global variable
// inline function
static inline unsigned short int  __bswap_16(unsigned short int  __bsx  )
{
    return ((unsigned short int )((((__bsx)>>8)&0xff)|(((__bsx)&0xff)<<8)));
}
static inline unsigned int  __bswap_32(unsigned int  __bsx  )
{
    return ((((__bsx)&0xff000000u)>>24)|(((__bsx)&0x00ff0000u)>>8)|(((__bsx)&0x0000ff00u)<<8)|(((__bsx)&0x000000ffu)<<24));
}
static inline unsigned long  int  __bswap_64(unsigned long  int  __bsx  )
{
    return ((((__bsx)&0xff00000000000000ull)>>56)|(((__bsx)&0x00ff000000000000ull)>>40)|(((__bsx)&0x0000ff0000000000ull)>>24)|(((__bsx)&0x000000ff00000000ull)>>8)|(((__bsx)&0x00000000ff000000ull)<<8)|(((__bsx)&0x0000000000ff0000ull)<<24)|(((__bsx)&0x000000000000ff00ull)<<40)|(((__bsx)&0x00000000000000ffull)<<56));
}
static inline unsigned short int  __uint16_identity(unsigned short int  __x  )
{
    return __x;
}
static inline unsigned int  __uint32_identity(unsigned int  __x  )
{
    return __x;
}
static inline unsigned long  int  __uint64_identity(unsigned long  int  __x  )
{
    return __x;
}

// body function
int test_headers_cstd()
{
    return 0;
}

int main(int argc, char** argv)
{
    return 0;
}

