/// c_include definition ///
/// typedef definition ///
typedef unsigned long size_t;

typedef int wchar_t;

typedef __builtin_va_list __gnuc_va_list;

typedef int __ipc_pid_t;

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

typedef char __int_least8_t  ;

typedef unsigned char __uint_least8_t  ;

typedef short int __int_least16_t  ;

typedef unsigned short int __uint_least16_t  ;

typedef int __int_least32_t  ;

typedef unsigned int __uint_least32_t  ;

typedef long  int __int_least64_t  ;

typedef unsigned long  int __uint_least64_t  ;

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

typedef struct __fsid_t __fsid_t  ;

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

typedef long  int __loff_t  ;

typedef char* __caddr_t;

typedef long  int __intptr_t;

typedef unsigned int __socklen_t;

typedef int __sig_atomic_t;

typedef unsigned int uid_t  ;

typedef unsigned int gid_t  ;

typedef unsigned int mode_t  ;

typedef int key_t  ;

typedef unsigned long  long   ;

typedef unsigned long  int msgqnum_t  ;

typedef unsigned long  int msglen_t  ;

typedef long  int time_t  ;

typedef int pid_t  ;

typedef long  int ssize_t  ;

typedef unsigned char u_char  ;

typedef unsigned short int u_short  ;

typedef unsigned int u_int  ;

typedef unsigned long  int u_long  ;

typedef long  int quad_t  ;

typedef unsigned long  int u_quad_t  ;

typedef struct __fsid_t fsid_t  ;

typedef long  int loff_t  ;

typedef unsigned long  int ino_t  ;

typedef unsigned long  int ino64_t  ;

typedef unsigned long  int dev_t  ;

typedef unsigned long  int nlink_t  ;

typedef long  int off_t  ;

typedef long  int off64_t  ;

typedef unsigned int id_t  ;

typedef int daddr_t  ;

typedef char* caddr_t  ;

typedef long  int clock_t  ;

typedef int clockid_t  ;

typedef void* timer_t  ;

typedef unsigned int useconds_t  ;

typedef long  int suseconds_t  ;

typedef unsigned long  int ulong;

typedef unsigned short int ushort;

typedef unsigned int uint;

typedef char int8_t  ;

typedef short int int16_t  ;

typedef int int32_t  ;

typedef long  int int64_t  ;

typedef unsigned char u_int8_t  ;

typedef unsigned short int u_int16_t  ;

typedef unsigned int u_int32_t  ;

typedef unsigned long  int u_int64_t  ;

typedef int register_t __attribute__ ((__mode__ (__word__)));

typedef struct anonymous_typeX1 __sigset_t;

typedef struct anonymous_typeX1 sigset_t  ;

typedef long  int __fd_mask;

typedef struct anonymous_typeX2 fd_set;

typedef long  int fd_mask  ;

typedef long  int blksize_t  ;

typedef long  int blkcnt_t  ;

typedef unsigned long  int fsblkcnt_t  ;

typedef unsigned long  int fsfilcnt_t  ;

typedef long  int blkcnt64_t  ;

typedef unsigned long  int fsblkcnt64_t  ;

typedef unsigned long  int fsfilcnt64_t  ;

typedef union anonymous_typeZ3 __atomic_wide_counter;

typedef struct __pthread_internal_list __pthread_list_t  ;

typedef struct __pthread_internal_slist __pthread_slist_t  ;

typedef unsigned int __tss_t;

typedef unsigned long  int __thrd_t;

typedef struct anonymous_typeX5 __once_flag;

typedef unsigned long  int pthread_t;

typedef union anonymous_typeZ6 pthread_mutexattr_t;

typedef union anonymous_typeZ7 pthread_condattr_t;

typedef unsigned int pthread_key_t;

typedef int pthread_once_t;

typedef union pthread_attr_t pthread_attr_t  ;

typedef union anonymous_typeZ8 pthread_mutex_t;

typedef union anonymous_typeZ9 pthread_cond_t;

typedef union anonymous_typeZ10 pthread_rwlock_t;

typedef union anonymous_typeZ11 pthread_rwlockattr_t;

typedef int pthread_spinlock_t;

typedef union anonymous_typeZ12 pthread_barrier_t;

typedef union anonymous_typeZ13 pthread_barrierattr_t;

typedef unsigned long  int shmatt_t  ;

typedef unsigned char uint8_t  ;

typedef unsigned short int uint16_t  ;

typedef unsigned int uint32_t  ;

typedef unsigned long  int uint64_t  ;

typedef char int_least8_t  ;

typedef short int int_least16_t  ;

typedef int int_least32_t  ;

typedef long  int int_least64_t  ;

typedef unsigned char uint_least8_t  ;

typedef unsigned short int uint_least16_t  ;

typedef unsigned int uint_least32_t  ;

typedef unsigned long  int uint_least64_t  ;

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

typedef long  int intmax_t  ;

typedef unsigned long  int uintmax_t  ;

typedef unsigned long  int eventfd_t  ;

typedef union epoll_data epoll_data_t;

typedef struct __locale_struct* __locale_t  ;

typedef struct __locale_struct* locale_t  ;

typedef char __s8;

typedef unsigned char __u8;

typedef short __s16;

typedef unsigned short int __u16;

typedef int __s32;

typedef unsigned int __u32;

typedef long long __s64;

typedef unsigned long  long __u64;

typedef struct anonymous_typeX14 __kernel_fd_set;

typedef void (*__kernel_sighandler_t)(int);

typedef int __kernel_key_t;

typedef int __kernel_mqd_t;

typedef unsigned short int __kernel_old_uid_t;

typedef unsigned short int __kernel_old_gid_t;

typedef unsigned long  int __kernel_old_dev_t;

typedef long __kernel_long_t;

typedef unsigned long  int __kernel_ulong_t;

typedef unsigned long  int __kernel_ino_t  ;

typedef unsigned int __kernel_mode_t;

typedef int __kernel_pid_t;

typedef int __kernel_ipc_pid_t;

typedef unsigned int __kernel_uid_t;

typedef unsigned int __kernel_gid_t;

typedef long __kernel_suseconds_t  ;

typedef int __kernel_daddr_t;

typedef unsigned int __kernel_uid32_t;

typedef unsigned int __kernel_gid32_t;

typedef unsigned long  int __kernel_size_t  ;

typedef long __kernel_ssize_t  ;

typedef long __kernel_ptrdiff_t  ;

typedef struct anonymous_typeX15 __kernel_fsid_t;

typedef long __kernel_off_t  ;

typedef long long __kernel_loff_t;

typedef long __kernel_old_time_t  ;

typedef long __kernel_time_t  ;

typedef long long __kernel_time64_t;

typedef long __kernel_clock_t  ;

typedef int __kernel_timer_t;

typedef int __kernel_clockid_t;

typedef char* __kernel_caddr_t;

typedef unsigned short int __kernel_uid16_t;

typedef unsigned short int __kernel_gid16_t;

typedef unsigned short int __le16  ;

typedef unsigned short int __be16  ;

typedef unsigned int __le32  ;

typedef unsigned int __be32  ;

typedef unsigned long  long __le64  ;

typedef unsigned long  long __be64  ;

typedef unsigned short int __sum16  ;

typedef unsigned int __wsum  ;

typedef unsigned int __poll_t;

/// previous struct definition ///
struct sigevent;

/// struct definition ///
struct __fsid_t
{
    int __val[2];
};

struct ipc_perm
{
    int __key  ;
    unsigned int uid  ;
    unsigned int gid  ;
    unsigned int cuid  ;
    unsigned int cgid  ;
    unsigned int mode  ;
    unsigned short int __seq;
    unsigned short int __pad2;
    unsigned long  int __glibc_reserved1  ;
    unsigned long  int __glibc_reserved2  ;
};

struct msqid_ds
{
    struct ipc_perm msg_perm  ;
    long  int msg_stime  ;
    long  int msg_rtime  ;
    long  int msg_ctime  ;
    unsigned long  int __msg_cbytes  ;
    unsigned long  int msg_qnum  ;
    unsigned long  int msg_qbytes  ;
    int msg_lspid  ;
    int msg_lrpid  ;
    unsigned long  int __glibc_reserved4  ;
    unsigned long  int __glibc_reserved5  ;
};

struct msginfo
{
    int msgpool;
    int msgmap;
    int msgmax;
    int msgmnb;
    int msgmni;
    int msgssz;
    int msgtql;
    unsigned short int msgseg;
};

struct msgbuf
{
    long  int mtype  ;
    char mtext[1];
};

struct anonymous_typeX1
{
    unsigned long  int __val[(1024/(8*sizeof(unsigned long  int)))];
};

struct timeval
{
    long  int tv_sec  ;
    long  int tv_usec  ;
};

struct timespec
{
    long  int tv_sec  ;
    long  int tv_nsec  ;
};

struct anonymous_typeX2
{
    long  int fds_bits[1024/(8*(int)sizeof(long  int))]  ;
};

struct anonymous_typeX4
{
    unsigned int __low;
    unsigned int __high;
};

union anonymous_typeZ3
{
unsigned long long int __value64;
    struct {
        unsigned int __low;
        unsigned int __high;
    } __value32;
};

struct __pthread_internal_list
{
    struct __pthread_internal_list* __prev  ;
    struct __pthread_internal_list* __next  ;
};

struct __pthread_internal_slist
{
    struct __pthread_internal_slist* __next  ;
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
    struct __pthread_internal_list __list  ;
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

struct anonymous_typeX5
{
    int __data;
};

union anonymous_typeZ6
{
char __size[4];
int __align;
};

union anonymous_typeZ7
{
char __size[4];
int __align;
};

union pthread_attr_t
{
char __size[56];
long  int __align;
};

union anonymous_typeZ8
{
struct __pthread_mutex_s __data  ;
char __size[40];
long  int __align;
};

union anonymous_typeZ9
{
struct __pthread_cond_s __data  ;
char __size[48];
long long int __align;
};

union anonymous_typeZ10
{
struct __pthread_rwlock_arch_t __data  ;
char __size[56];
long  int __align;
};

union anonymous_typeZ11
{
char __size[8];
long  int __align;
};

union anonymous_typeZ12
{
char __size[32];
long  int __align;
};

union anonymous_typeZ13
{
char __size[4];
int __align;
};

struct semid_ds
{
    struct ipc_perm sem_perm  ;
    long  int sem_otime  ;
    unsigned long  int __sem_otime_high  ;
    long  int sem_ctime  ;
    unsigned long  int __sem_ctime_high  ;
    unsigned long  int sem_nsems  ;
    unsigned long  int __glibc_reserved3  ;
    unsigned long  int __glibc_reserved4  ;
};

struct seminfo
{
    int semmap;
    int semmni;
    int semmns;
    int semmnu;
    int semmsl;
    int semopm;
    int semume;
    int semusz;
    int semvmx;
    int semaem;
};

struct sembuf
{
    unsigned short int sem_num;
    short int sem_op;
    short int sem_flg;
};

struct shmid_ds
{
    struct ipc_perm shm_perm  ;
    unsigned long shm_segsz  ;
    long  int shm_atime  ;
    long  int shm_dtime  ;
    long  int shm_ctime  ;
    int shm_cpid  ;
    int shm_lpid  ;
    unsigned long  int shm_nattch  ;
    unsigned long  int __glibc_reserved5  ;
    unsigned long  int __glibc_reserved6  ;
};

struct shminfo
{
    unsigned long  int shmmax  ;
    unsigned long  int shmmin  ;
    unsigned long  int shmmni  ;
    unsigned long  int shmseg  ;
    unsigned long  int shmall  ;
    unsigned long  int __glibc_reserved1  ;
    unsigned long  int __glibc_reserved2  ;
    unsigned long  int __glibc_reserved3  ;
    unsigned long  int __glibc_reserved4  ;
};

struct shm_info
{
    int used_ids;
    unsigned long  int shm_tot  ;
    unsigned long  int shm_rss  ;
    unsigned long  int shm_swp  ;
    unsigned long  int swap_attempts  ;
    unsigned long  int swap_successes  ;
};

enum { EFD_SEMAPHORE=(00000001),
EFD_CLOEXEC=(02000000),
EFD_NONBLOCK=(00004000)
};

struct winsize
{
    unsigned short int ws_row;
    unsigned short int ws_col;
    unsigned short int ws_xpixel;
    unsigned short int ws_ypixel;
};

enum { EPOLL_CLOEXEC=(02000000)
};

enum  EPOLL_EVENTS { EPOLLIN=(0x001),
EPOLLPRI=(0x002),
EPOLLOUT=(0x004),
EPOLLRDNORM=(0x040),
EPOLLRDBAND=(0x080),
EPOLLWRNORM=(0x100),
EPOLLWRBAND=(0x200),
EPOLLMSG=(0x400),
EPOLLERR=(0x008),
EPOLLHUP=(0x010),
EPOLLRDHUP=(0x2000),
EPOLLEXCLUSIVE=(1u<<28),
EPOLLWAKEUP=(1u<<29),
EPOLLONESHOT=(1u<<30),
EPOLLET=(1u<<31)
};

union epoll_data
{
void* ptr;
int fd;
unsigned int u32  ;
unsigned long  int u64  ;
};

struct epoll_event
{
    unsigned int events  ;
    union epoll_data data  ;
} __attribute__ ((__packed__));

struct epoll_params
{
    unsigned int busy_poll_usecs  ;
    unsigned short int busy_poll_budget  ;
    unsigned char prefer_busy_poll  ;
    unsigned char __pad  ;
};

enum { IN_CLOEXEC=(02000000),
IN_NONBLOCK=(00004000)
};

struct inotify_event
{
    int wd;
    unsigned int mask  ;
    unsigned int cookie  ;
    unsigned int len  ;
    char name[];
};

enum { SFD_CLOEXEC=(02000000),
SFD_NONBLOCK=(00004000)
};

struct signalfd_siginfo
{
    unsigned int ssi_signo  ;
    int ssi_errno  ;
    int ssi_code  ;
    unsigned int ssi_pid  ;
    unsigned int ssi_uid  ;
    int ssi_fd  ;
    unsigned int ssi_tid  ;
    unsigned int ssi_band  ;
    unsigned int ssi_overrun  ;
    unsigned int ssi_trapno  ;
    int ssi_status  ;
    int ssi_int  ;
    unsigned long  int ssi_ptr  ;
    unsigned long  int ssi_utime  ;
    unsigned long  int ssi_stime  ;
    unsigned long  int ssi_addr  ;
    unsigned short int ssi_addr_lsb  ;
    unsigned short int __pad2  ;
    int ssi_syscall  ;
    unsigned long  int ssi_call_addr  ;
    unsigned int ssi_arch  ;
    unsigned char __pad[28]  ;
};

struct timex
{
    unsigned int modes;
    long  int offset  ;
    long  int freq  ;
    long  int maxerror  ;
    long  int esterror  ;
    int status;
    long  int constant  ;
    long  int precision  ;
    long  int tolerance  ;
    struct timeval time  ;
    long  int tick  ;
    long  int ppsfreq  ;
    long  int jitter  ;
    int shift;
    long  int stabil  ;
    long  int jitcnt  ;
    long  int calcnt  ;
    long  int errcnt  ;
    long  int stbcnt  ;
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
    struct timespec it_interval  ;
    struct timespec it_value  ;
};

struct __locale_struct
{
    struct __locale_data* __locales[13];
    const unsigned short int* __ctype_b;
    const int* __ctype_tolower;
    const int* __ctype_toupper;
    const char* __names[13];
};

enum { TFD_CLOEXEC=(02000000),
TFD_NONBLOCK=(00004000)
};

enum { TFD_TIMER_ABSTIME=(1<<0),
TFD_TIMER_CANCEL_ON_SET=(1<<1)
};

struct anonymous_typeX14
{
    unsigned long  int fds_bits[1024/(8*sizeof(long))];
};

struct anonymous_typeX15
{
    int val[2];
};

struct sysinfo
{
    long uptime  ;
    unsigned long  int loads[3]  ;
    unsigned long  int totalram  ;
    unsigned long  int freeram  ;
    unsigned long  int sharedram  ;
    unsigned long  int bufferram  ;
    unsigned long  int totalswap  ;
    unsigned long  int freeswap  ;
    unsigned short int procs  ;
    unsigned short int pad  ;
    unsigned long  int totalhigh  ;
    unsigned long  int freehigh  ;
    unsigned int mem_unit  ;
    char _f[20-2*sizeof(unsigned long  int)-sizeof(unsigned int)];
};

struct prctl_mm_map
{
    unsigned long  long start_code  ;
    unsigned long  long end_code  ;
    unsigned long  long start_data  ;
    unsigned long  long end_data  ;
    unsigned long  long start_brk  ;
    unsigned long  long brk  ;
    unsigned long  long start_stack  ;
    unsigned long  long arg_start  ;
    unsigned long  long arg_end  ;
    unsigned long  long env_start  ;
    unsigned long  long env_end  ;
    unsigned long  long* auxv  ;
    unsigned int auxv_size  ;
    unsigned int exe_fd  ;
};

/// variable definition ///
extern char* __tzname[2];
extern int __daylight;
extern long  int __timezone;
extern char* tzname[2];
extern int daylight;
extern long  int timezone;
extern int getdate_err;
// source head

// header function
char* strdup(const char* );
int vsnprintf(char* , unsigned long  int , const char* , __builtin_va_list );
int snprintf(char* , unsigned long  int , const char* , ...);
int ftok(const char* __pathname, int __proj_id);
int msgctl(int __msqid, int __cmd, struct msqid_ds* __buf  );
int msgget(int __key  , int __msgflg);
long  int msgrcv(int __msqid, void* __msgp, unsigned long __msgsz  , long  int __msgtyp, int __msgflg);
int msgsnd(int __msqid, const void* __msgp, unsigned long __msgsz  , int __msgflg);
int select(int __nfds, struct anonymous_typeX2* __readfds  , struct anonymous_typeX2* __writefds  , struct anonymous_typeX2* __exceptfds  , struct timeval* __timeout  );
int pselect(int __nfds, struct anonymous_typeX2* __readfds  , struct anonymous_typeX2* __writefds  , struct anonymous_typeX2* __exceptfds  , const struct timespec* __timeout  , const struct anonymous_typeX1* __sigmask  );
int semctl(int __semid, int __semnum, int __cmd, ...);
int semget(int __key  , int __nsems, int __semflg);
int semop(int __semid, struct sembuf* __sops  , unsigned long __nsops  );
int semtimedop(int __semid, struct sembuf* __sops  , unsigned long __nsops  , const struct timespec* __timeout  );
int __getpagesize();
int shmctl(int __shmid, int __cmd, struct shmid_ds* __buf  );
int shmget(int __key  , unsigned long __size  , int __shmflg);
void* shmat(int __shmid, const void* __shmaddr, int __shmflg);
int shmdt(const void* __shmaddr);
int eventfd(unsigned int __count, int __flags);
int eventfd_read(int __fd, unsigned long  int* __value  );
int eventfd_write(int __fd, unsigned long  int __value  );
int ioctl(int __fd, unsigned long  int __request, ...);
int epoll_create(int __size);
int epoll_create1(int __flags);
int epoll_ctl(int __epfd, int __op, int __fd, struct epoll_event* __event  );
int epoll_wait(int __epfd, struct epoll_event* __events  , int __maxevents, int __timeout);
int epoll_pwait(int __epfd, struct epoll_event* __events  , int __maxevents, int __timeout, const struct anonymous_typeX1* __ss  );
int epoll_pwait2(int __epfd, struct epoll_event* __events  , int __maxevents, const struct timespec* __timeout  , const struct anonymous_typeX1* __ss  );
int inotify_init();
int inotify_init1(int __flags);
int inotify_add_watch(int __fd, const char* __name, unsigned int __mask  );
int inotify_rm_watch(int __fd, int __wd);
int signalfd(int __fd, const struct anonymous_typeX1* __mask  , int __flags);
int clock_adjtime(int __clock_id  , struct timex* __utx  );
long  int clock();
long  int time(long  int* __timer  );
double difftime(long  int __time1  , long  int __time0  );
long  int mktime(struct tm* __tp  );
unsigned long strftime(char* __s, unsigned long __maxsize  , const char* __format, const struct tm* __tp  );
char* strptime(const char* __s, const char* __fmt, struct tm* __tp  );
unsigned long strftime_l(char* __s, unsigned long __maxsize  , const char* __format, const struct tm* __tp  , struct __locale_struct* __loc  );
char* strptime_l(const char* __s, const char* __fmt, struct tm* __tp  , struct __locale_struct* __loc  );
struct tm* gmtime(const long  int* __timer  );
struct tm* localtime(const long  int* __timer  );
struct tm* gmtime_r(const long  int* __timer  , struct tm* __tp  );
struct tm* localtime_r(const long  int* __timer  , struct tm* __tp  );
char* asctime(const struct tm* __tp  );
char* ctime(const long  int* __timer  );
char* asctime_r(const struct tm* __tp  , char* __buf);
char* ctime_r(const long  int* __timer  , char* __buf);
void tzset();
long  int timegm(struct tm* __tp  );
long  int timelocal(struct tm* __tp  );
int dysize(int __year);
int nanosleep(const struct timespec* __requested_time  , struct timespec* __remaining  );
int clock_getres(int __clock_id  , struct timespec* __res  );
int clock_gettime(int __clock_id  , struct timespec* __tp  );
int clock_settime(int __clock_id  , const struct timespec* __tp  );
int clock_nanosleep(int __clock_id  , int __flags, const struct timespec* __req  , struct timespec* __rem  );
int clock_getcpuclockid(int __pid  , int* __clock_id  );
int timer_create(int __clock_id  , struct sigevent* __evp  , void** __timerid  );
int timer_delete(void* __timerid  );
int timer_settime(void* __timerid  , int __flags, const struct itimerspec* __value  , struct itimerspec* __ovalue  );
int timer_gettime(void* __timerid  , struct itimerspec* __value  );
int timer_getoverrun(void* __timerid  );
int timespec_get(struct timespec* __ts  , int __base);
int timespec_getres(struct timespec* __ts  , int __base);
struct tm* getdate(const char* __string);
int getdate_r(const char* __string, struct tm* __resbufp  );
int timerfd_create(int __clock_id  , int __flags);
int timerfd_settime(int __ufd, int __flags, const struct itimerspec* __utmr  , struct itimerspec* __otmr  );
int timerfd_gettime(int __ufd, struct itimerspec* __otmr  );
int sysinfo(struct sysinfo* __info  );
int get_nprocs_conf();
int get_nprocs();
long  int get_phys_pages();
long  int get_avphys_pages();
int prctl(int __option, ...);
int test_headers_ipc();
// uniq global variable
// inline function
static inline unsigned short int __bswap_16(unsigned short int __bsx  )
{
    return ((unsigned short int)((((__bsx)>>8)&0xff)|(((__bsx)&0xff)<<8)));
}
static inline unsigned int __bswap_32(unsigned int __bsx  )
{
    return ((((__bsx)&0xff000000u)>>24)|(((__bsx)&0x00ff0000u)>>8)|(((__bsx)&0x0000ff00u)<<8)|(((__bsx)&0x000000ffu)<<24));
}
static inline unsigned long  int __bswap_64(unsigned long  int __bsx  )
{
    return ((((__bsx)&0xff00000000000000ull)>>56)|(((__bsx)&0x00ff000000000000ull)>>40)|(((__bsx)&0x0000ff0000000000ull)>>24)|(((__bsx)&0x000000ff00000000ull)>>8)|(((__bsx)&0x00000000ff000000ull)<<8)|(((__bsx)&0x0000000000ff0000ull)<<24)|(((__bsx)&0x000000000000ff00ull)<<40)|(((__bsx)&0x00000000000000ffull)<<56));
}
static inline unsigned short int __uint16_identity(unsigned short int __x  )
{
    return __x;
}
static inline unsigned int __uint32_identity(unsigned int __x  )
{
    return __x;
}
static inline unsigned long  int __uint64_identity(unsigned long  int __x  )
{
    return __x;
}

// body function
int test_headers_ipc()
{
    return 0;
}

